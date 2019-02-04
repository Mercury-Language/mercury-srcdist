/*
** Automatically generated from `implementation_defined_literals.m'
** by the Mercury compiler,
** version rotd-2017-12-28
** configured for x86_64-pc-linux-gnu.
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


// :- module check_hlds.implementation_defined_literals.
// :- implementation.

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
#include "check_hlds.proc_requests.mih"
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

static void MR_CALL 
check_hlds__implementation_defined_literals____Compare____subst_literals_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__implementation_defined_literals____Unify____subst_literals_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_case_3_p_0(
  MR_Word Info_4,
  MR_Word Case0_5,
  MR_Word * Case_6);

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_clause_3_p_0(
  MR_Word Info_4,
  MR_Word Clause0_5,
  MR_Word * Clause_6);

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(
  MR_Word Info_4,
  MR_Word Goal0_5,
  MR_Word * Goal_6);

static void MR_CALL 
check_hlds__implementation_defined_literals__make_impl_defined_literal_5_p_0(
  MR_Word Var_6,
  MR_String Name_7,
  MR_Word Context_8,
  MR_Word Info_9,
  MR_Word * Goal_10);

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word PredInfo0_7,
  MR_Word * PredInfo_8);

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_impl_defined_literals_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__implementation_defined_literals____Unify____subst_literals_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__implementation_defined_literals____Compare____subst_literals_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__field_types_subst_literals_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_stag_ordered_subst_literals_info_0_0[1] = {
  &check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_functor_desc_subst_literals_info_0_0
};

static const MR_DuPtagLayout check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_ptag_ordered_subst_literals_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  MR_TYPECTOR_REP_DU,
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

static void MR_CALL 
check_hlds__implementation_defined_literals____Compare____subst_literals_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;

      hlds__hlds_module____Compare____module_info_0_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        hlds__hlds_pred____Compare____pred_info_0_0(&Var_11, ArgX2_6, ArgY2_7);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
          hlds__hlds_pred____Compare____pred_id_0_0(HeadVar__1_1, ArgX3_8, ArgY3_9);
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__implementation_defined_literals____Unify____subst_literals_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_case_3_p_0(
  MR_Word Info_4,
  MR_Word Case0_5,
  MR_Word * Case_6)
{
  {
    MR_Word MainConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_5, (MR_Integer) 0)));
    MR_Word OtherConsIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_5, (MR_Integer) 1)));
    MR_Word Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_5, (MR_Integer) 2)));
    MR_Word Goal_10;

    check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(Info_4, Goal0_9, &Goal_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *Case_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsId_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherConsIds_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Goal_10));
    }
  }
}

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_clause_3_p_0(
  MR_Word Info_4,
  MR_Word Clause0_5,
  MR_Word * Clause_6)
{
  {
    MR_Word Body0_7;
    MR_Word Body_8;
    MR_Word Var_9;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_10;

    Body0_7 = hlds__hlds_clauses__clause_body_1_f_0(Clause0_5);
    check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(Info_4, Body0_7, &Body_8);
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_5, (MR_Integer) 0)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_5, (MR_Integer) 1)));
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_5, (MR_Integer) 2)));
    Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_5, (MR_Integer) 3)));
    Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Clause0_5, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *Clause_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Body_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
    }
  }
}

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Case_6;

    check_hlds__implementation_defined_literals__subst_literals_in_case_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv3_Case_6);
    *wrapper_arg_2 = ((MR_Box) (conv3_Case_6));
  }
}

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Goal_6;

    check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv2_Goal_6);
    *wrapper_arg_2 = ((MR_Box) (conv2_Goal_6));
  }
}

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Goal_6;

    check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv1_Goal_6);
    *wrapper_arg_2 = ((MR_Box) (conv1_Goal_6));
  }
}

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Goal_6;

    check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_Goal_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Goal_6));
  }
}

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(
  MR_Word Info_4,
  MR_Word Goal0_5,
  MR_Word * Goal_6)
{
  {
    MR_Word GoalExpr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 0)));
    MR_Word GoalInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) GoalExpr0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_66 = (MR_Word) MR_body(((MR_Word) GoalExpr0_7), (MR_Integer) 0);
          MR_Word SubGoal_67;
          MR_Word GoalExpr_124;

          check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(Info_4, SubGoal0_66, &SubGoal_67);
          GoalExpr_124 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) SubGoal_67);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_124));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_8));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_7, (MR_Integer) 0)));
          MR_Word RHS0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_7, (MR_Integer) 1)));
          MR_Word Mode_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_7, (MR_Integer) 2)));
          MR_Word Kind_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_7, (MR_Integer) 3)));
          MR_Word UnifyContext_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_7, (MR_Integer) 4)));

          switch (MR_tag((MR_Word) RHS0_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *Goal_6 = Goal0_5;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS0_10, (MR_Integer) 0)));
                MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS0_10, (MR_Integer) 1)));
                MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS0_10, (MR_Integer) 2)));

                switch (MR_tag((MR_Word) ConsId_14)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *Goal_6 = Goal0_5;
                    break;
                  case (MR_Integer) 1:
                    *Goal_6 = Goal0_5;
                    break;
                  case (MR_Integer) 2:
                    *Goal_6 = Goal0_5;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_14, (MR_Integer) 0)))) {
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
                      case (MR_Integer) 10:
                      case (MR_Integer) 11:
                      case (MR_Integer) 12:
                      case (MR_Integer) 13:
                      case (MR_Integer) 14:
                      case (MR_Integer) 15:
                      case (MR_Integer) 17:
                      case (MR_Integer) 18:
                      case (MR_Integer) 19:
                      case (MR_Integer) 20:
                      case (MR_Integer) 21:
                        *Goal_6 = Goal0_5;
                        break;
                      case (MR_Integer) 16:
                        {
                          MR_String Name_17 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsId_14, (MR_Integer) 1)));
                          MR_Word Context_18;
                          MR_Word Goal1_19;
                          MR_Word GoalExpr_20;
                          MR_Word Var_21;

                          Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_8);
                          check_hlds__implementation_defined_literals__make_impl_defined_literal_5_p_0(Var_9, Name_17, Context_18, Info_4, &Goal1_19);
                          GoalExpr_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal1_19, (MR_Integer) 0)));
                          Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal1_19, (MR_Integer) 1)));
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            *Goal_6 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_20));
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_8));
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
                MR_Word LambdaPurity_54 = ((((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_10, (MR_Integer) 0)))) & (MR_Integer) 3);
                MR_Word Groundness_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                MR_Word PredOrFunc_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                MR_Word LambdaNonLocals_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_10, (MR_Integer) 2)));
                MR_Word LambdaQuantVars_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_10, (MR_Integer) 3)));
                MR_Word LambdaModes_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_10, (MR_Integer) 4)));
                MR_Word LambdaDetism_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_10, (MR_Integer) 5)));
                MR_Word LambdaGoal0_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS0_10, (MR_Integer) 6)));
                MR_Word LambdaGoal_63;
                MR_Word RHS_64;
                MR_Word GoalExpr_123;

                check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(Info_4, LambdaGoal0_62, &LambdaGoal_63);
                {
                  RHS_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), RHS_64, 0) = ((MR_Box) ((LambdaPurity_54 | ((((Groundness_55 << (MR_Integer) 2)) | ((PredOrFunc_56 << (MR_Integer) 3)))))));
                  MR_hl_field(MR_mktag(2), RHS_64, 1) = (MR_Integer) 0;
                  MR_hl_field(MR_mktag(2), RHS_64, 2) = ((MR_Box) (LambdaNonLocals_58));
                  MR_hl_field(MR_mktag(2), RHS_64, 3) = ((MR_Box) (LambdaQuantVars_59));
                  MR_hl_field(MR_mktag(2), RHS_64, 4) = ((MR_Box) (LambdaModes_60));
                  MR_hl_field(MR_mktag(2), RHS_64, 5) = ((MR_Box) (LambdaDetism_61));
                  MR_hl_field(MR_mktag(2), RHS_64, 6) = ((MR_Box) (LambdaGoal_63));
                }
                {
                  GoalExpr_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), GoalExpr_123, 0) = ((MR_Box) (Var_9));
                  MR_hl_field(MR_mktag(1), GoalExpr_123, 1) = ((MR_Box) (RHS_64));
                  MR_hl_field(MR_mktag(1), GoalExpr_123, 2) = ((MR_Box) (Mode_11));
                  MR_hl_field(MR_mktag(1), GoalExpr_123, 3) = ((MR_Box) (Kind_12));
                  MR_hl_field(MR_mktag(1), GoalExpr_123, 4) = ((MR_Box) (UnifyContext_13));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *Goal_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_123));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_8));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        *Goal_6 = Goal0_5;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *Goal_6 = Goal0_5;
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeCtorInfo_138_138;
              MR_Word ConjType_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1)));
              MR_Word Goals0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 2)));
              MR_Word Goals_71;
              MR_Word Var_122;
              MR_Word GoalExpr_128;

              {
                Var_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_122, 0) = ((MR_Box) (&check_hlds__implementation_defined_literals_scalar_common_2[1]));
                MR_hl_field(MR_mktag(0), Var_122, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_1));
                MR_hl_field(MR_mktag(0), Var_122, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_122, 3) = ((MR_Box) (Info_4));
              }
              TypeCtorInfo_138_138 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              mercury__list__map_3_p_0(TypeCtorInfo_138_138, TypeCtorInfo_138_138, Var_122, Goals0_70, &Goals_71);
              {
                GoalExpr_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), GoalExpr_128, 1) = ((MR_Box) (ConjType_69));
                MR_hl_field(MR_mktag(3), GoalExpr_128, 2) = ((MR_Box) (Goals_71));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_128));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_8));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeCtorInfo_141_141;
              MR_Word Var_121;
              MR_Word GoalExpr_129;
              MR_Word Goals0_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1)));
              MR_Word Goals_131;

              {
                Var_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_121, 0) = ((MR_Box) (&check_hlds__implementation_defined_literals_scalar_common_2[1]));
                MR_hl_field(MR_mktag(0), Var_121, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_2));
                MR_hl_field(MR_mktag(0), Var_121, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_121, 3) = ((MR_Box) (Info_4));
              }
              TypeCtorInfo_141_141 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              mercury__list__map_3_p_0(TypeCtorInfo_141_141, TypeCtorInfo_141_141, Var_121, Goals0_130, &Goals_131);
              {
                GoalExpr_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), GoalExpr_129, 1) = ((MR_Box) (Goals_131));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_129));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_8));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word TypeCtorInfo_144_144;
              MR_Word CanFail_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 2)));
              MR_Word Cases0_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 3)));
              MR_Word Cases_74;
              MR_Word Var_120;
              MR_Word Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1)));
              MR_Word GoalExpr_133;

              {
                Var_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_120, 0) = ((MR_Box) (&check_hlds__implementation_defined_literals_scalar_common_2[2]));
                MR_hl_field(MR_mktag(0), Var_120, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_4));
                MR_hl_field(MR_mktag(0), Var_120, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_120, 3) = ((MR_Box) (Info_4));
              }
              TypeCtorInfo_144_144 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
              mercury__list__map_3_p_0(TypeCtorInfo_144_144, TypeCtorInfo_144_144, Var_120, Cases0_73, &Cases_74);
              {
                GoalExpr_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), GoalExpr_133, 1) = ((MR_Box) (Var_132));
                MR_hl_field(MR_mktag(3), GoalExpr_133, 2) = ((MR_Box) (CanFail_72));
                MR_hl_field(MR_mktag(3), GoalExpr_133, 3) = ((MR_Box) (Cases_74));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_133));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_8));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1)));
              MR_Word GoalExpr_125;
              MR_Word SubGoal0_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 2)));
              MR_Word SubGoal_127;

              check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(Info_4, SubGoal0_126, &SubGoal_127);
              {
                GoalExpr_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), GoalExpr_125, 1) = ((MR_Box) (Reason_68));
                MR_hl_field(MR_mktag(3), GoalExpr_125, 2) = ((MR_Box) (SubGoal_127));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_125));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_8));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1)));
              MR_Word Cond0_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 2)));
              MR_Word Then0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 3)));
              MR_Word Else0_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 4)));
              MR_Word Cond_79;
              MR_Word Then_80;
              MR_Word Else_81;
              MR_Word GoalExpr_134;

              check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(Info_4, Cond0_76, &Cond_79);
              check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(Info_4, Then0_77, &Then_80);
              check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(Info_4, Else0_78, &Else_81);
              {
                GoalExpr_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_134, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), GoalExpr_134, 1) = ((MR_Box) (Vars_75));
                MR_hl_field(MR_mktag(3), GoalExpr_134, 2) = ((MR_Box) (Cond_79));
                MR_hl_field(MR_mktag(3), GoalExpr_134, 3) = ((MR_Box) (Then_80));
                MR_hl_field(MR_mktag(3), GoalExpr_134, 4) = ((MR_Box) (Else_81));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_134));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_8));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Shorthand0_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1)));
              MR_Word Shorthand_87;
              MR_Word GoalExpr_135;

              switch (MR_tag((MR_Word) Shorthand0_82)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word A0_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), Shorthand0_82, (MR_Integer) 0)));
                    MR_Word B0_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), Shorthand0_82, (MR_Integer) 1)));
                    MR_Word A_85;
                    MR_Word B_86;

                    check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(Info_4, A0_83, &A_85);
                    check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(Info_4, B0_84, &B_86);
                    {
                      Shorthand_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Shorthand_87, 0) = ((MR_Box) (A_85));
                      MR_hl_field(MR_mktag(0), Shorthand_87, 1) = ((MR_Box) (B_86));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word TypeCtorInfo_147_147;
                    MR_Word GoalType_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), Shorthand0_82, (MR_Integer) 0)));
                    MR_Word OuterVars_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), Shorthand0_82, (MR_Integer) 1)));
                    MR_Word InnerVars_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), Shorthand0_82, (MR_Integer) 2)));
                    MR_Word OutputVars_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), Shorthand0_82, (MR_Integer) 3)));
                    MR_Word MainGoal0_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), Shorthand0_82, (MR_Integer) 4)));
                    MR_Word OrElseGoals0_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), Shorthand0_82, (MR_Integer) 5)));
                    MR_Word OrElseInners_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), Shorthand0_82, (MR_Integer) 6)));
                    MR_Word MainGoal_95;
                    MR_Word OrElseGoals_96;
                    MR_Word Var_119;

                    check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(Info_4, MainGoal0_92, &MainGoal_95);
                    {
                      Var_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_119, 0) = ((MR_Box) (&check_hlds__implementation_defined_literals_scalar_common_2[1]));
                      MR_hl_field(MR_mktag(0), Var_119, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_3));
                      MR_hl_field(MR_mktag(0), Var_119, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), Var_119, 3) = ((MR_Box) (Info_4));
                    }
                    TypeCtorInfo_147_147 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                    mercury__list__map_3_p_0(TypeCtorInfo_147_147, TypeCtorInfo_147_147, Var_119, OrElseGoals0_93, &OrElseGoals_96);
                    {
                      Shorthand_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Shorthand_87, 0) = ((MR_Box) (GoalType_88));
                      MR_hl_field(MR_mktag(1), Shorthand_87, 1) = ((MR_Box) (OuterVars_89));
                      MR_hl_field(MR_mktag(1), Shorthand_87, 2) = ((MR_Box) (InnerVars_90));
                      MR_hl_field(MR_mktag(1), Shorthand_87, 3) = ((MR_Box) (OutputVars_91));
                      MR_hl_field(MR_mktag(1), Shorthand_87, 4) = ((MR_Box) (MainGoal_95));
                      MR_hl_field(MR_mktag(1), Shorthand_87, 5) = ((MR_Box) (OrElseGoals_96));
                      MR_hl_field(MR_mktag(1), Shorthand_87, 6) = ((MR_Box) (OrElseInners_94));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIOVars_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), Shorthand0_82, (MR_Integer) 0)));
                    MR_Word ResultVar_98 = ((MR_Word) (MR_hl_field(MR_mktag(2), Shorthand0_82, (MR_Integer) 1)));
                    MR_Word TryGoal0_99 = ((MR_Word) (MR_hl_field(MR_mktag(2), Shorthand0_82, (MR_Integer) 2)));
                    MR_Word TryGoal_100;

                    check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(Info_4, TryGoal0_99, &TryGoal_100);
                    {
                      Shorthand_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Shorthand_87, 0) = ((MR_Box) (MaybeIOVars_97));
                      MR_hl_field(MR_mktag(2), Shorthand_87, 1) = ((MR_Box) (ResultVar_98));
                      MR_hl_field(MR_mktag(2), Shorthand_87, 2) = ((MR_Box) (TryGoal_100));
                    }
                  }
                  break;
              }
              {
                GoalExpr_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), GoalExpr_135, 1) = ((MR_Box) (Shorthand_87));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_135));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_8));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__implementation_defined_literals__make_impl_defined_literal_5_p_0(
  MR_Word Var_6,
  MR_String Name_7,
  MR_Word Context_8,
  MR_Word Info_9,
  MR_Word * Goal_10)
{
  {
    MR_bool succeeded = (strcmp(Name_7, (MR_String) "file") == 0);
    MR_String File_11 = ((MR_String) (MR_hl_field(MR_mktag(0), Context_8, (MR_Integer) 0)));
    MR_Integer Line_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Context_8, (MR_Integer) 1)));
    MR_Word ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 0)));
    MR_Word PredInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1)));
    MR_Word PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 2)));

    if (succeeded)
      hlds__make_goal__make_string_const_construction_3_p_0(Var_6, File_11, Goal_10);
    else
    {
      succeeded = (strcmp(Name_7, (MR_String) "line") == 0);
      if (succeeded)
        hlds__make_goal__make_int_const_construction_3_p_0(Var_6, Line_12, Goal_10);
      else
      {
        succeeded = (strcmp(Name_7, (MR_String) "module") == 0);
        if (succeeded)
        {
          MR_Word ModuleName_16;
          MR_String Str_17;

          ModuleName_16 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_14);
          Str_17 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_16);
          hlds__make_goal__make_string_const_construction_3_p_0(Var_6, Str_17, Goal_10);
        }
        else
        {
          succeeded = (strcmp(Name_7, (MR_String) "pred") == 0);
          if (succeeded)
          {
            MR_String Str_23;

            Str_23 = hlds__hlds_out__hlds_out_util__pred_id_to_string_2_f_0(ModuleInfo_13, PredId_15);
            hlds__make_goal__make_string_const_construction_3_p_0(Var_6, Str_23, Goal_10);
          }
          else
          {
            succeeded = (strcmp(Name_7, (MR_String) "grade") == 0);
            if (succeeded)
            {
              MR_Word Globals_18;
              MR_String Grade_19;

              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_13, &Globals_18);
              libs__compute_grade__grade_directory_component_2_p_0(Globals_18, &Grade_19);
              hlds__make_goal__make_string_const_construction_3_p_0(Var_6, Grade_19, Goal_10);
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
check_hlds__implementation_defined_literals__subst_literals_in_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Clause_6;

    check_hlds__implementation_defined_literals__subst_literals_in_clause_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_Clause_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Clause_6));
  }
}

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word PredInfo0_7,
  MR_Word * PredInfo_8)
{
  {
    MR_Word TypeCtorInfo_20_20;
    MR_Word ClausesInfo0_9;
    MR_Word ClausesRep0_10;
    MR_Word ItemNumbers_11;
    MR_Word Clauses0_12;
    MR_Word Info_13;
    MR_Word Clauses_14;
    MR_Word ClausesRep_15;
    MR_Word ClausesInfo_16;
    MR_Word Var_17;

    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_7, &ClausesInfo0_9);
    hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo0_9, &ClausesRep0_10, &ItemNumbers_11);
    hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(ClausesRep0_10, &Clauses0_12);
    {
      Info_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_13, 0) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Info_13, 1) = ((MR_Box) (PredInfo0_7));
      MR_hl_field(MR_mktag(0), Info_13, 2) = ((MR_Box) (PredId_6));
    }
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&check_hlds__implementation_defined_literals_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__subst_literals_in_pred_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Info_13));
    }
    TypeCtorInfo_20_20 = (MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0;
    mercury__list__map_3_p_0(TypeCtorInfo_20_20, TypeCtorInfo_20_20, Var_17, Clauses0_12, &Clauses_14);
    hlds__hlds_clauses__set_clause_list_2_p_0(Clauses_14, &ClausesRep_15);
    hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(ClausesRep_15, ItemNumbers_11, ClausesInfo0_9, &ClausesInfo_16);
    hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_16, PredInfo0_7, PredInfo_8);
  }
}

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_impl_defined_literals_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_PredInfo_8;

    check_hlds__implementation_defined_literals__subst_literals_in_pred_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_PredInfo_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_PredInfo_8));
  }
}

void MR_CALL 
check_hlds__implementation_defined_literals__subst_impl_defined_literals_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7)
{
  {
    MR_Word TypeCtorInfo_14_14;
    MR_Word Preds0_4;
    MR_Word Preds_5;
    MR_Word Var_8;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_6, &Preds0_4);
    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&check_hlds__implementation_defined_literals_scalar_common_1[0]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__subst_impl_defined_literals_2_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_6));
    }
    TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    mercury__map__map_values_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, TypeCtorInfo_14_14, TypeCtorInfo_14_14, Var_8, Preds0_4, &Preds_5);
    hlds__hlds_module__module_info_set_preds_3_p_0(Preds_5, STATE_VARIABLE_ModuleInfo_0_6, STATE_VARIABLE_ModuleInfo_7);
  }
}

static MR_bool MR_CALL 
check_hlds__implementation_defined_literals____Unify____subst_literals_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__implementation_defined_literals____Unify____subst_literals_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__implementation_defined_literals____Compare____subst_literals_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__implementation_defined_literals____Compare____subst_literals_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module check_hlds.implementation_defined_literals.
