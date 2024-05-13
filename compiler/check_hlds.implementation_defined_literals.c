/*
** Automatically generated from `implementation_defined_literals.m'
** by the Mercury compiler,
** version rotd-2024-05-13
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
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
#include "array.mih"
#include "assoc_list.mih"
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
#include "getopt.mih"
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
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compute_grade.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"




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
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
};

static /* final */ const MR_Box check_hlds__implementation_defined_literals_scalar_common_2[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__type_ctor_info_subst_literals_info_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__type_ctor_info_subst_literals_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__type_ctor_info_subst_literals_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_PseudoTypeInfo check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__field_types_subst_literals_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
};

static const MR_DuFunctorDesc check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_functor_desc_subst_literals_info_0_0 = {
  (MR_String) "subst_literals_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__field_types_subst_literals_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_stag_ordered_subst_literals_info_0_0[1] = { &check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_functor_desc_subst_literals_info_0_0 };

static const MR_DuPtagLayout check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_ptag_ordered_subst_literals_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_stag_ordered_subst_literals_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_name_ordered_subst_literals_info_0[1] = { &check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_functor_desc_subst_literals_info_0_0 };

static const MR_Integer check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__functor_number_map_subst_literals_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__type_ctor_info_subst_literals_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__implementation_defined_literals____Unify____subst_literals_info_0_0_10001)),
  ((MR_Box) (check_hlds__implementation_defined_literals____Compare____subst_literals_info_0_0_10001)),
  (MR_String) "check_hlds.implementation_defined_literals",
  (MR_String) "subst_literals_info",
  { check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_name_ordered_subst_literals_info_0 },
  { check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__du_ptag_ordered_subst_literals_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__implementation_defined_literals__check_hlds__implementation_defined_literals__functor_number_map_subst_literals_info_0,

};

static void MR_CALL 
check_hlds__implementation_defined_literals____Compare____subst_literals_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_pred____Compare____pred_info_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        hlds__hlds_pred____Compare____pred_id_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__implementation_defined_literals____Unify____subst_literals_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

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

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_case_3_p_0(
  MR_Word Info_4,
  MR_Word Case0_5,
  MR_Word * Case_6)
{
  MR_Word MainConsId_7 = ((MR_Word) ((MR_hl_field(0, Case0_5, (MR_Integer) 0))));
  MR_Word OtherConsIds_8 = ((MR_Word) ((MR_hl_field(0, Case0_5, (MR_Integer) 1))));
  MR_Word Goal0_9 = ((MR_Word) ((MR_hl_field(0, Case0_5, (MR_Integer) 2))));
  MR_Word Goal_10;

  check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(Info_4, Goal0_9, &Goal_10);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Case_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MainConsId_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (OtherConsIds_8));
    MR_hl_field(0, base, 2) = ((MR_Box) (Goal_10));
  }
}

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_clause_3_p_0(
  MR_Word Info_4,
  MR_Word Clause0_5,
  MR_Word * Clause_6)
{
  MR_Word Body0_7;
  MR_Word Body_8;
  MR_Word Var_9;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;

  Body0_7 = hlds__hlds_clauses__clause_body_1_f_0(Clause0_5);
  check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(Info_4, Body0_7, &Body_8);
  Var_9 = ((MR_Word) ((MR_hl_field(0, Clause0_5, (MR_Integer) 0))));
  Var_11 = ((MR_Word) ((MR_hl_field(0, Clause0_5, (MR_Integer) 2))));
  Var_12 = ((MR_Word) ((MR_hl_field(0, Clause0_5, (MR_Integer) 3))));
  Var_13 = ((MR_Word) ((MR_hl_field(0, Clause0_5, (MR_Integer) 4))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Clause_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (Body_8));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_13));
  }
}

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Case_6;

  check_hlds__implementation_defined_literals__subst_literals_in_case_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_Case_6);
  *wrapper_arg_2 = ((MR_Box) (conv3_Case_6));
}

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Goal_6;

  check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_Goal_6);
  *wrapper_arg_2 = ((MR_Box) (conv2_Goal_6));
}

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Goal_6;

  check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Goal_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_Goal_6));
}

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Goal_6;

  check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Goal_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Goal_6));
}

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(
  MR_Word Info_4,
  MR_Word Goal0_5,
  MR_Word * Goal_6)
{
  MR_Word GoalExpr0_7 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 0))));
  MR_Word GoalInfo0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 1))));

  switch (MR_tag((MR_Word) GoalExpr0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_56 = (MR_Word) ((MR_Word) (GoalExpr0_7));
        MR_Word SubGoal_57;
        MR_Word GoalExpr_114;

        check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(Info_4, SubGoal0_56, &SubGoal_57);
        GoalExpr_114 = (MR_Word) ((MR_Word) (SubGoal_57));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_114));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_8));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_7, (MR_Integer) 0))));
        MR_Word RHS0_10 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_7, (MR_Integer) 1))));
        MR_Word Mode_11 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_7, (MR_Integer) 2))));
        MR_Word Kind_12 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_7, (MR_Integer) 3))));
        MR_Word UnifyContext_13 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_7, (MR_Integer) 4))));

        switch (MR_tag((MR_Word) RHS0_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Goal_6 = Goal0_5;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ConsId_14 = ((MR_Word) ((MR_hl_field(1, RHS0_10, (MR_Integer) 0))));

              switch (MR_tag((MR_Word) ConsId_14)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  *Goal_6 = Goal0_5;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, ConsId_14, (MR_Integer) 0))))) {
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
                    case (MR_Integer) 10:
                    case (MR_Integer) 11:
                    case (MR_Integer) 12:
                    case (MR_Integer) 13:
                    case (MR_Integer) 14:
                      *Goal_6 = Goal0_5;
                      break;
                    case (MR_Integer) 9:
                      {
                        MR_Word IDCKind_17 = ((MR_Unsigned) ((MR_hl_field(3, ConsId_14, (MR_Integer) 1))) & (MR_Integer) 7);
                        MR_Word Context_18;
                        MR_Word Goal1_19;
                        MR_Word GoalExpr_20;
                        MR_String File_138;
                        MR_Integer Line_139;
                        MR_Word ModuleInfo_140;
                        MR_Word PredInfo_141;
                        MR_Word PredId_142;

                        Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_8);
                        File_138 = ((MR_String) ((MR_hl_field(0, Context_18, (MR_Integer) 0))));
                        Line_139 = ((MR_Integer) ((MR_hl_field(0, Context_18, (MR_Integer) 1))));
                        ModuleInfo_140 = ((MR_Word) ((MR_hl_field(0, Info_4, (MR_Integer) 0))));
                        PredInfo_141 = ((MR_Word) ((MR_hl_field(0, Info_4, (MR_Integer) 1))));
                        PredId_142 = ((MR_Word) ((MR_hl_field(0, Info_4, (MR_Integer) 2))));
                        switch (IDCKind_17) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            hlds__make_goal__make_string_const_construction_4_p_0(Context_18, Var_9, File_138, &Goal1_19);
                            break;
                          case (MR_Integer) 4:
                            {
                              MR_Word Globals_145;
                              MR_String Grade_146;

                              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_140, &Globals_145);
                              libs__compute_grade__grade_directory_component_2_p_0(Globals_145, &Grade_146);
                              hlds__make_goal__make_string_const_construction_4_p_0(Context_18, Var_9, Grade_146, &Goal1_19);
                            }
                            break;
                          case (MR_Integer) 1:
                            hlds__make_goal__make_int_const_construction_4_p_0(Context_18, Var_9, Line_139, &Goal1_19);
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_Word ModuleName_143;
                              MR_String Str_144;

                              ModuleName_143 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_141);
                              Str_144 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_143);
                              hlds__make_goal__make_string_const_construction_4_p_0(Context_18, Var_9, Str_144, &Goal1_19);
                            }
                            break;
                          case (MR_Integer) 3:
                            {
                              MR_String Str_147;

                              Str_147 = hlds__hlds_out__hlds_out_util__pred_id_to_user_string_2_f_0(ModuleInfo_140, PredId_142);
                              hlds__make_goal__make_string_const_construction_4_p_0(Context_18, Var_9, Str_147, &Goal1_19);
                            }
                            break;
                        }
                        GoalExpr_20 = ((MR_Word) ((MR_hl_field(0, Goal1_19, (MR_Integer) 0))));
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          *Goal_6 = base;
                          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_20));
                          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_8));
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
              MR_Word LambdaNonLocals_49 = ((MR_Word) ((MR_hl_field(2, RHS0_10, (MR_Integer) 1))));
              MR_Word LambdaArgVarsModes_50 = ((MR_Word) ((MR_hl_field(2, RHS0_10, (MR_Integer) 2))));
              MR_Word LambdaDetism_51 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_10, (MR_Integer) 3))) & (MR_Integer) 7);
              MR_Word LambdaGoal0_52 = ((MR_Word) ((MR_hl_field(2, RHS0_10, (MR_Integer) 4))));
              MR_Word LambdaGoal_53;
              MR_Word RHS_54;
              MR_Word GoalExpr_113;
              MR_Unsigned packed_word_5 = (MR_Unsigned) ((MR_hl_field(2, RHS0_10, (MR_Integer) 0)));

              check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(Info_4, LambdaGoal0_52, &LambdaGoal_53);
              {
                RHS_54 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, RHS_54, 0) = (MR_Box) (packed_word_5);
                MR_hl_field(2, RHS_54, 1) = ((MR_Box) (LambdaNonLocals_49));
                MR_hl_field(2, RHS_54, 2) = ((MR_Box) (LambdaArgVarsModes_50));
                MR_hl_field(2, RHS_54, 3) = (MR_Box) ((MR_Unsigned) (LambdaDetism_51));
                MR_hl_field(2, RHS_54, 4) = ((MR_Box) (LambdaGoal_53));
              }
              {
                GoalExpr_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, GoalExpr_113, 0) = ((MR_Box) (Var_9));
                MR_hl_field(1, GoalExpr_113, 1) = ((MR_Box) (RHS_54));
                MR_hl_field(1, GoalExpr_113, 2) = ((MR_Box) (Mode_11));
                MR_hl_field(1, GoalExpr_113, 3) = ((MR_Box) (Kind_12));
                MR_hl_field(1, GoalExpr_113, 4) = ((MR_Box) (UnifyContext_13));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_113));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_8));
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
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          *Goal_6 = Goal0_5;
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_59 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_60 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 2))));
            MR_Word Goals_61;
            MR_Word Var_109;
            MR_Word GoalExpr_118;

            {
              Var_109 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_109, 0) = ((MR_Box) (&check_hlds__implementation_defined_literals_scalar_common_2[1]));
              MR_hl_field(0, Var_109, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_1));
              MR_hl_field(0, Var_109, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_109, 3) = ((MR_Box) (Info_4));
            }
            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_109, Goals0_60, &Goals_61);
            {
              GoalExpr_118 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_118, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_118, 1) = (MR_Box) ((MR_Unsigned) (ConjType_59));
              MR_hl_field(3, GoalExpr_118, 2) = ((MR_Box) (Goals_61));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_118));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_8));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_110;
            MR_Word GoalExpr_119;
            MR_Word Goals0_120 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));
            MR_Word Goals_121;

            {
              Var_110 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_110, 0) = ((MR_Box) (&check_hlds__implementation_defined_literals_scalar_common_2[1]));
              MR_hl_field(0, Var_110, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_2));
              MR_hl_field(0, Var_110, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_110, 3) = ((MR_Box) (Info_4));
            }
            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_110, Goals0_120, &Goals_121);
            {
              GoalExpr_119 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_119, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_119, 1) = ((MR_Box) (Goals_121));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_119));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_8));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word CanFail_62 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 3))));
            MR_Word Cases_64;
            MR_Word Var_111;
            MR_Word Var_122 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));
            MR_Word GoalExpr_123;

            {
              Var_111 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_111, 0) = ((MR_Box) (&check_hlds__implementation_defined_literals_scalar_common_2[2]));
              MR_hl_field(0, Var_111, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_4));
              MR_hl_field(0, Var_111, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_111, 3) = ((MR_Box) (Info_4));
            }
            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Var_111, Cases0_63, &Cases_64);
            {
              GoalExpr_123 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_123, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_123, 1) = ((MR_Box) (Var_122));
              MR_hl_field(3, GoalExpr_123, 2) = (MR_Box) ((MR_Unsigned) (CanFail_62));
              MR_hl_field(3, GoalExpr_123, 3) = ((MR_Box) (Cases_64));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_123));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_8));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));
            MR_Word GoalExpr_115;
            MR_Word SubGoal0_116 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 2))));
            MR_Word SubGoal_117;

            check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(Info_4, SubGoal0_116, &SubGoal_117);
            {
              GoalExpr_115 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_115, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_115, 1) = ((MR_Box) (Reason_58));
              MR_hl_field(3, GoalExpr_115, 2) = ((MR_Box) (SubGoal_117));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_115));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_8));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_65 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));
            MR_Word Cond0_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 2))));
            MR_Word Then0_67 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 3))));
            MR_Word Else0_68 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 4))));
            MR_Word Cond_69;
            MR_Word Then_70;
            MR_Word Else_71;
            MR_Word GoalExpr_124;

            check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(Info_4, Cond0_66, &Cond_69);
            check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(Info_4, Then0_67, &Then_70);
            check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(Info_4, Else0_68, &Else_71);
            {
              GoalExpr_124 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_124, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_124, 1) = ((MR_Box) (Vars_65));
              MR_hl_field(3, GoalExpr_124, 2) = ((MR_Box) (Cond_69));
              MR_hl_field(3, GoalExpr_124, 3) = ((MR_Box) (Then_70));
              MR_hl_field(3, GoalExpr_124, 4) = ((MR_Box) (Else_71));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_124));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_8));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Shorthand0_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_7, (MR_Integer) 1))));
            MR_Word Shorthand_77;
            MR_Word GoalExpr_125;

            switch (MR_tag((MR_Word) Shorthand0_72)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word A0_73 = ((MR_Word) ((MR_hl_field(0, Shorthand0_72, (MR_Integer) 0))));
                  MR_Word B0_74 = ((MR_Word) ((MR_hl_field(0, Shorthand0_72, (MR_Integer) 1))));
                  MR_Word A_75;
                  MR_Word B_76;

                  check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(Info_4, A0_73, &A_75);
                  check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(Info_4, B0_74, &B_76);
                  {
                    Shorthand_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Shorthand_77, 0) = ((MR_Box) (A_75));
                    MR_hl_field(0, Shorthand_77, 1) = ((MR_Box) (B_76));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_78 = ((MR_Unsigned) ((MR_hl_field(1, Shorthand0_72, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word OuterVars_79 = ((MR_Word) ((MR_hl_field(1, Shorthand0_72, (MR_Integer) 1))));
                  MR_Word InnerVars_80 = ((MR_Word) ((MR_hl_field(1, Shorthand0_72, (MR_Integer) 2))));
                  MR_Word OutputVars_81 = ((MR_Word) ((MR_hl_field(1, Shorthand0_72, (MR_Integer) 3))));
                  MR_Word MainGoal0_82 = ((MR_Word) ((MR_hl_field(1, Shorthand0_72, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_83 = ((MR_Word) ((MR_hl_field(1, Shorthand0_72, (MR_Integer) 5))));
                  MR_Word OrElseInners_84 = ((MR_Word) ((MR_hl_field(1, Shorthand0_72, (MR_Integer) 6))));
                  MR_Word MainGoal_85;
                  MR_Word OrElseGoals_86;
                  MR_Word Var_112;

                  check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(Info_4, MainGoal0_82, &MainGoal_85);
                  {
                    Var_112 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_112, 0) = ((MR_Box) (&check_hlds__implementation_defined_literals_scalar_common_2[1]));
                    MR_hl_field(0, Var_112, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0_3));
                    MR_hl_field(0, Var_112, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(0, Var_112, 3) = ((MR_Box) (Info_4));
                  }
                  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_112, OrElseGoals0_83, &OrElseGoals_86);
                  {
                    Shorthand_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Shorthand_77, 0) = (MR_Box) ((MR_Unsigned) (GoalType_78));
                    MR_hl_field(1, Shorthand_77, 1) = ((MR_Box) (OuterVars_79));
                    MR_hl_field(1, Shorthand_77, 2) = ((MR_Box) (InnerVars_80));
                    MR_hl_field(1, Shorthand_77, 3) = ((MR_Box) (OutputVars_81));
                    MR_hl_field(1, Shorthand_77, 4) = ((MR_Box) (MainGoal_85));
                    MR_hl_field(1, Shorthand_77, 5) = ((MR_Box) (OrElseGoals_86));
                    MR_hl_field(1, Shorthand_77, 6) = ((MR_Box) (OrElseInners_84));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIOVars_87 = ((MR_Word) ((MR_hl_field(2, Shorthand0_72, (MR_Integer) 0))));
                  MR_Word ResultVar_88 = ((MR_Word) ((MR_hl_field(2, Shorthand0_72, (MR_Integer) 1))));
                  MR_Word TryGoal0_89 = ((MR_Word) ((MR_hl_field(2, Shorthand0_72, (MR_Integer) 2))));
                  MR_Word TryGoal_90;

                  check_hlds__implementation_defined_literals__subst_literals_in_goal_3_p_0(Info_4, TryGoal0_89, &TryGoal_90);
                  {
                    Shorthand_77 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Shorthand_77, 0) = ((MR_Box) (MaybeIOVars_87));
                    MR_hl_field(2, Shorthand_77, 1) = ((MR_Box) (ResultVar_88));
                    MR_hl_field(2, Shorthand_77, 2) = ((MR_Box) (TryGoal_90));
                  }
                }
                break;
            }
            {
              GoalExpr_125 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_125, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, GoalExpr_125, 1) = ((MR_Box) (Shorthand_77));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_125));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_8));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Clause_6;

  check_hlds__implementation_defined_literals__subst_literals_in_clause_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Clause_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Clause_6));
}

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_literals_in_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word PredInfo0_7,
  MR_Word * PredInfo_8)
{
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
    Info_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info_13, 0) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, Info_13, 1) = ((MR_Box) (PredInfo0_7));
    MR_hl_field(0, Info_13, 2) = ((MR_Box) (PredId_6));
  }
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&check_hlds__implementation_defined_literals_scalar_common_2[0]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__subst_literals_in_pred_4_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (Info_13));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), Var_17, Clauses0_12, &Clauses_14);
  hlds__hlds_clauses__set_clause_list_2_p_0(Clauses_14, &ClausesRep_15);
  hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(ClausesRep_15, ItemNumbers_11, ClausesInfo0_9, &ClausesInfo_16);
  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_16, PredInfo0_7, PredInfo_8);
}

static void MR_CALL 
check_hlds__implementation_defined_literals__subst_impl_defined_literals_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_PredInfo_8;

  check_hlds__implementation_defined_literals__subst_literals_in_pred_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_PredInfo_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_PredInfo_8));
}

void MR_CALL 
check_hlds__implementation_defined_literals__subst_impl_defined_literals_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7)
{
  MR_Word PredIdTable0_4;
  MR_Word PredIdTable_5;
  MR_Word Var_8;

  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_6, &PredIdTable0_4);
  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&check_hlds__implementation_defined_literals_scalar_common_1[0]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (check_hlds__implementation_defined_literals__subst_impl_defined_literals_2_p_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_6));
  }
  mercury__map__map_values_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Var_8, PredIdTable0_4, &PredIdTable_5);
  hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_5, STATE_VARIABLE_ModuleInfo_0_6, STATE_VARIABLE_ModuleInfo_7);
}

static MR_bool MR_CALL 
check_hlds__implementation_defined_literals____Unify____subst_literals_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__implementation_defined_literals____Unify____subst_literals_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__implementation_defined_literals____Compare____subst_literals_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__implementation_defined_literals____Compare____subst_literals_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
