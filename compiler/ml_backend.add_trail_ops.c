/*
** Automatically generated from `add_trail_ops.m'
** by the Mercury compiler,
** version rotd-2025-09-14
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


// :- module ml_backend.add_trail_ops.
// :- implementation.

/*
INIT mercury__ml_backend__add_trail_ops__init
ENDINIT
*/

#include "ml_backend.add_trail_ops.mih"


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
#include "counter.mih"
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
#include "ml_backend.mih"
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
#include "require.mih"
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_PseudoTypeInfo ml_backend__add_trail_ops__ml_backend__add_trail_ops__field_types_trail_ops_info_0_0[4];

static const MR_ConstString ml_backend__add_trail_ops__ml_backend__add_trail_ops__field_names_trail_ops_info_0_0[4];

static const MR_DuArgLocn ml_backend__add_trail_ops__ml_backend__add_trail_ops__field_locns_trail_ops_info_0_0[4];

static const MR_DuFunctorDesc ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_functor_desc_trail_ops_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_stag_ordered_trail_ops_info_0_0[1];

static const MR_DuPtagLayout ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_ptag_ordered_trail_ops_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_name_ordered_trail_ops_info_0[1];

static const MR_Integer ml_backend__add_trail_ops__ml_backend__add_trail_ops__functor_number_map_trail_ops_info_0[1];

static void MR_CALL 
ml_backend__add_trail_ops____Compare____trail_ops_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__add_trail_ops____Unify____trail_ops_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_101,
  MR_Word * STATE_VARIABLE_Info_102);

static void MR_CALL 
ml_backend__add_trail_ops__cases_add_trail_ops_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4);

static void MR_CALL 
ml_backend__add_trail_ops__disj_add_trail_ops_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word IsFirstBranch_3,
  MR_Word CodeModel_4,
  MR_Word TicketVar_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
ml_backend__add_trail_ops__trail_generate_call_8_p_0(
  MR_Word Info_9,
  MR_String PredName_10,
  MR_Word ArgVars_11,
  MR_Word InstMapDelta_12,
  MR_Word Detism_13,
  MR_Word Purity_14,
  MR_Word Context_15,
  MR_Word * CallGoal_16);

static void MR_CALL 
ml_backend__add_trail_ops__new_ticket_counter_var_3_p_0(
  MR_Word * Var_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
ml_backend__add_trail_ops__new_ticket_var_3_p_0(
  MR_Word * Var_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
ml_backend__add_trail_ops__gen_prune_tickets_to_4_p_0(
  MR_Word SavedTicketCounterVar_5,
  MR_Word Context_6,
  MR_Word * PruneTicketsToGoal_7,
  MR_Word Info_8);

static void MR_CALL 
ml_backend__add_trail_ops__gen_mark_ticket_stack_4_p_0(
  MR_Word SavedTicketCounterVar_5,
  MR_Word Context_6,
  MR_Word * MarkTicketStackGoal_7,
  MR_Word Info_8);

static void MR_CALL 
ml_backend__add_trail_ops__gen_reset_ticket_solve_4_p_0(
  MR_Word TicketVar_5,
  MR_Word Context_6,
  MR_Word * ResetTicketGoal_7,
  MR_Word Info_8);

static void MR_CALL 
ml_backend__add_trail_ops__gen_reset_ticket_undo_4_p_0(
  MR_Word TicketVar_5,
  MR_Word Context_6,
  MR_Word * ResetTicketGoal_7,
  MR_Word Info_8);

static void MR_CALL 
ml_backend__add_trail_ops__gen_store_ticket_4_p_0(
  MR_Word TicketVar_5,
  MR_Word Context_6,
  MR_Word * SaveTicketGoal_7,
  MR_Word Info_8);

static void MR_CALL 
ml_backend__add_trail_ops__gen_discard_ticket_3_p_0(
  MR_Word Context_4,
  MR_Word * DiscardTicketGoal_5,
  MR_Word Info_6);

static void MR_CALL 
ml_backend__add_trail_ops__gen_prune_ticket_3_p_0(
  MR_Word Context_4,
  MR_Word * PruneTicketGoal_5,
  MR_Word Info_6);

static void MR_CALL 
ml_backend__add_trail_ops__gen_reset_ticket_commit_4_p_0(
  MR_Word TicketVar_5,
  MR_Word Context_6,
  MR_Word * ResetTicketGoal_7,
  MR_Word Info_8);

static void MR_CALL 
ml_backend__add_trail_ops__trail_generate_call_foreign_proc_8_p_0(
  MR_Word Info_9,
  MR_String PredName_10,
  MR_Word Args_11,
  MR_Word InstMapDelta_12,
  MR_Word Purity_13,
  MR_Word Context_14,
  MR_String ForeignCode_15,
  MR_Word * ForeignProcGoal_16);

static void MR_CALL 
ml_backend__add_trail_ops__conj_add_trail_ops_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__add_trail_ops__conj_add_trail_ops_4_p_0(
  MR_Word Goals0_5,
  MR_Word * Goals_6,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static MR_bool MR_CALL 
ml_backend__add_trail_ops____Unify____trail_ops_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__add_trail_ops____Compare____trail_ops_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__add_trail_ops_scalar_common_1[1][7];

static /* final */ const MR_Box ml_backend__add_trail_ops_scalar_common_2[1][3];




static /* final */ const MR_Box ml_backend__add_trail_ops_scalar_common_1[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ml_backend__add_trail_ops__ml_backend__add_trail_ops__type_ctor_info_trail_ops_info_0)),
    ((MR_Box) (&ml_backend__add_trail_ops__ml_backend__add_trail_ops__type_ctor_info_trail_ops_info_0))
  },
};

static /* final */ const MR_Box ml_backend__add_trail_ops_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ml_backend__add_trail_ops_scalar_common_1[0])),
    ((MR_Box) (ml_backend__add_trail_ops__conj_add_trail_ops_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_PseudoTypeInfo ml_backend__add_trail_ops__ml_backend__add_trail_ops__field_types_trail_ops_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_gen_trail_ops_inline_mlds_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)
};

static const MR_ConstString ml_backend__add_trail_ops__ml_backend__add_trail_ops__field_names_trail_ops_info_0_0[4] = {
  (MR_String) "trail_module_info",
  (MR_String) "opt_trail_usage",
  (MR_String) "inline_ops",
  (MR_String) "trail_var_table"
};

static const MR_DuArgLocn ml_backend__add_trail_ops__ml_backend__add_trail_ops__field_locns_trail_ops_info_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_functor_desc_trail_ops_info_0_0 = {
  (MR_String) "trail_ops_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__add_trail_ops__ml_backend__add_trail_ops__field_types_trail_ops_info_0_0,
  ml_backend__add_trail_ops__ml_backend__add_trail_ops__field_names_trail_ops_info_0_0,
  ml_backend__add_trail_ops__ml_backend__add_trail_ops__field_locns_trail_ops_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_stag_ordered_trail_ops_info_0_0[1] = { &ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_functor_desc_trail_ops_info_0_0 };

static const MR_DuPtagLayout ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_ptag_ordered_trail_ops_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_stag_ordered_trail_ops_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_name_ordered_trail_ops_info_0[1] = { &ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_functor_desc_trail_ops_info_0_0 };

static const MR_Integer ml_backend__add_trail_ops__ml_backend__add_trail_ops__functor_number_map_trail_ops_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ml_backend__add_trail_ops__ml_backend__add_trail_ops__type_ctor_info_trail_ops_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__add_trail_ops____Unify____trail_ops_info_0_0_10001)),
  ((MR_Box) (ml_backend__add_trail_ops____Compare____trail_ops_info_0_0_10001)),
  (MR_String) "ml_backend.add_trail_ops",
  (MR_String) "trail_ops_info",
  { ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_name_ordered_trail_ops_info_0 },
  { ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_ptag_ordered_trail_ops_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__add_trail_ops__ml_backend__add_trail_ops__functor_number_map_trail_ops_info_0,

};

static void MR_CALL 
ml_backend__add_trail_ops____Compare____trail_ops_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_21 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_22 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_21 < Var_22);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_21 > Var_22);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer Var_23 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_24 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_23 < Var_24);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_23 > Var_24);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          parse_tree__var_table____Compare____var_table_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__add_trail_ops____Unify____trail_ops_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
          succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
ml_backend__add_trail_ops__add_trail_ops_5_p_0(
  MR_Word OptTrailUsage_6,
  MR_Word GenerateInline_7,
  MR_Word ModuleInfo0_8,
  MR_Word STATE_VARIABLE_ProcInfo_0_19,
  MR_Word * STATE_VARIABLE_ProcInfo_20)
{
  MR_Word Goal0_10;
  MR_Word VarTable0_11;
  MR_Word TrailOpsInfo0_12;
  MR_Word Goal_13;
  MR_Word TrailOpsInfo_14;
  MR_Word VarTable_18;
  MR_Word STATE_VARIABLE_ProcInfo_1_21;
  MR_Word STATE_VARIABLE_ProcInfo_2_22;
  MR_Word GoalExpr0_24;
  MR_Word GoalInfo_25;

  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_19, &Goal0_10);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_19, &VarTable0_11);
  {
    TrailOpsInfo0_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TrailOpsInfo0_12, 0) = ((MR_Box) (ModuleInfo0_8));
    MR_hl_field(0, TrailOpsInfo0_12, 1) = (MR_Box) (((((MR_Unsigned) (OptTrailUsage_6) << 1)) | (MR_Unsigned) (GenerateInline_7)));
    MR_hl_field(0, TrailOpsInfo0_12, 2) = ((MR_Box) (VarTable0_11));
  }
  GoalExpr0_24 = ((MR_Word) ((MR_hl_field(0, Goal0_10, 0))));
  GoalInfo_25 = ((MR_Word) ((MR_hl_field(0, Goal0_10, 1))));
  ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_p_0(GoalExpr0_24, GoalInfo_25, &Goal_13, TrailOpsInfo0_12, &TrailOpsInfo_14);
  VarTable_18 = ((MR_Word) ((MR_hl_field(0, TrailOpsInfo_14, 2))));
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_13, STATE_VARIABLE_ProcInfo_0_19, &STATE_VARIABLE_ProcInfo_1_21);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_18, STATE_VARIABLE_ProcInfo_1_21, &STATE_VARIABLE_ProcInfo_2_22);
  hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_2_22, STATE_VARIABLE_ProcInfo_20);
}

static void MR_CALL 
ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 0))));
  MR_Word GoalInfo_9 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 1))));

  ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_p_0(GoalExpr0_8, GoalInfo_9, Goal_6, STATE_VARIABLE_Info_0_10, STATE_VARIABLE_Info_11);
}

static void MR_CALL 
ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_101,
  MR_Word * STATE_VARIABLE_Info_102)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr0_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word InnerGoal_26 = (MR_Word) ((MR_Word) (GoalExpr0_6));
          MR_Word InnerGoalInfo_29;
          MR_Word Determinism_30;
          MR_Word NumSolns_32;
          MR_Word True_33;
          MR_Word Fail_34;
          MR_Word ThenGoal_35;
          MR_Word NewOuterGoal_36;
          MR_Word Context_178;
          MR_Word _CanFail_31;
          MR_Word next_value_of_GoalExpr0_6;

          Context_178 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_7);
          InnerGoalInfo_29 = ((MR_Word) ((MR_hl_field(0, InnerGoal_26, 1))));
          Determinism_30 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(InnerGoalInfo_29);
          parse_tree__prog_data__determinism_components_3_p_0(Determinism_30, &_CanFail_31, &NumSolns_32);
          True_33 = hlds__make_goal__true_goal_with_context_1_f_0(Context_178);
          Fail_34 = hlds__make_goal__fail_goal_with_context_1_f_0(Context_178);
          switch (NumSolns_32) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 3:
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              ThenGoal_35 = Fail_34;
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_116;

                Var_116 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                ml_backend__add_trail_ops__trail_generate_call_8_p_0(STATE_VARIABLE_Info_0_101, (MR_String) "unused", (MR_Word) ((MR_Unsigned) 0U), Var_116, (MR_Integer) 0, (MR_Integer) 0, Context_178, &ThenGoal_35);
              }
              break;
          }
          {
            NewOuterGoal_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, NewOuterGoal_36, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, NewOuterGoal_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, NewOuterGoal_36, 2) = ((MR_Box) (InnerGoal_26));
            MR_hl_field(3, NewOuterGoal_36, 3) = ((MR_Box) (ThenGoal_35));
            MR_hl_field(3, NewOuterGoal_36, 4) = ((MR_Box) (True_33));
          }
          // direct tailcall eliminated
          ;
          next_value_of_GoalExpr0_6 = NewOuterGoal_36;
          GoalExpr0_6 = next_value_of_GoalExpr0_6;
          continue;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_8 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_6));
            MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_7));
          }
          *STATE_VARIABLE_Info_102 = STATE_VARIABLE_Info_0_101;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_6, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_6));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_7));
              }
              *STATE_VARIABLE_Info_102 = STATE_VARIABLE_Info_0_101;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_6));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_7));
              }
              *STATE_VARIABLE_Info_102 = STATE_VARIABLE_Info_0_101;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_10 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_6, 1))) & (MR_Integer) 1);
              MR_Word Goals0_11 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 2))));
              MR_Word Goals_12;
              MR_Word GoalExpr_13;

              ml_backend__add_trail_ops__conj_add_trail_ops_4_p_0(Goals0_11, &Goals_12, STATE_VARIABLE_Info_0_101, STATE_VARIABLE_Info_102);
              {
                GoalExpr_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_13, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, GoalExpr_13, 1) = (MR_Box) ((MR_Unsigned) (ConjType_10));
                MR_hl_field(3, GoalExpr_13, 2) = ((MR_Box) (Goals_12));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_13));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_7));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts0_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 1))));
              MR_Word GoalExpr_176;

              if ((Disjuncts0_14 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                GoalExpr_176 = GoalExpr0_6;
                *STATE_VARIABLE_Info_102 = STATE_VARIABLE_Info_0_101;
              }
              else
              {
                MR_Word Context_17;
                MR_Word CodeModel_18;
                MR_Word TicketVar_19;
                MR_Word StoreTicketGoal_20;
                MR_Word Disjuncts_21;
                MR_Word STATE_VARIABLE_Info_2_104;
                MR_Word Var_108;
                MR_Word Var_109;
                MR_Word Var_110;
                MR_Word Var_111;

                Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_7);
                CodeModel_18 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo0_7);
                ml_backend__add_trail_ops__new_ticket_var_3_p_0(&TicketVar_19, STATE_VARIABLE_Info_0_101, &STATE_VARIABLE_Info_2_104);
                ml_backend__add_trail_ops__gen_store_ticket_4_p_0(TicketVar_19, Context_17, &StoreTicketGoal_20, STATE_VARIABLE_Info_2_104);
                ml_backend__add_trail_ops__disj_add_trail_ops_7_p_0(Disjuncts0_14, &Disjuncts_21, (MR_Integer) 0, CodeModel_18, TicketVar_19, STATE_VARIABLE_Info_2_104, STATE_VARIABLE_Info_102);
                {
                  Var_111 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_111, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(3, Var_111, 1) = ((MR_Box) (Disjuncts_21));
                }
                {
                  Var_110 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_110, 0) = ((MR_Box) (Var_111));
                  MR_hl_field(0, Var_110, 1) = ((MR_Box) (GoalInfo0_7));
                }
                {
                  Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_109, 0) = ((MR_Box) (Var_110));
                  MR_hl_field(1, Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_108, 0) = ((MR_Box) (StoreTicketGoal_20));
                  MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_109));
                }
                {
                  GoalExpr_176 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, GoalExpr_176, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(3, GoalExpr_176, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(3, GoalExpr_176, 2) = ((MR_Box) (Var_108));
                }
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_176));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_7));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 1))));
              MR_Word CanFail_23 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_6, 2))) & (MR_Integer) 1);
              MR_Word Cases0_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 3))));
              MR_Word Cases_25;
              MR_Word GoalExpr_177;

              ml_backend__add_trail_ops__cases_add_trail_ops_4_p_0(Cases0_24, &Cases_25, STATE_VARIABLE_Info_0_101, STATE_VARIABLE_Info_102);
              {
                GoalExpr_177 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_177, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, GoalExpr_177, 1) = ((MR_Box) (Var_22));
                MR_hl_field(3, GoalExpr_177, 2) = (MR_Box) ((MR_Unsigned) (CanFail_23));
                MR_hl_field(3, GoalExpr_177, 3) = ((MR_Box) (Cases_25));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_177));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_7));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_37 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 1))));
              MR_Word InnerGoal0_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 2))));
              MR_Word InnerCodeModel_40;
              MR_Word OuterCodeModel_41;
              MR_Word GoalExpr_189;
              MR_Word InnerGoalInfo_195 = ((MR_Word) ((MR_hl_field(0, InnerGoal0_38, 1))));

              InnerCodeModel_40 = hlds__code_model__goal_info_get_code_model_1_f_0(InnerGoalInfo_195);
              OuterCodeModel_41 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo0_7);
              succeeded = (InnerCodeModel_40 == (MR_Integer) 2);
              if (succeeded)
                succeeded = (OuterCodeModel_41 != (MR_Integer) 2);
              if (succeeded)
              {
                MR_Word SavedTicketCounterVar_42;
                MR_Word MarkTicketStackGoal_43;
                MR_Word ResetTicketCommitGoal_44;
                MR_Word PruneTicketsToGoal_45;
                MR_Word ResetTicketUndoGoal_46;
                MR_Word DiscardTicketGoal_47;
                MR_Word FailGoal_48;
                MR_Word Goal2_49;
                MR_Word SuccCode_50;
                MR_Word Goal3_54;
                MR_Word STATE_VARIABLE_Info_6_121;
                MR_Word STATE_VARIABLE_Info_7_122;
                MR_Word Var_124;
                MR_Word Var_125;
                MR_Word Var_127;
                MR_Word Var_128;
                MR_Word Var_129;
                MR_Word Var_142;
                MR_Word Var_143;
                MR_Word Var_144;
                MR_Word Context_179;
                MR_Word TicketVar_180;
                MR_Word StoreTicketGoal_181;
                MR_Word InnerGoal_182;

                Context_179 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_7);
                ml_backend__add_trail_ops__new_ticket_counter_var_3_p_0(&SavedTicketCounterVar_42, STATE_VARIABLE_Info_0_101, &STATE_VARIABLE_Info_6_121);
                ml_backend__add_trail_ops__new_ticket_var_3_p_0(&TicketVar_180, STATE_VARIABLE_Info_6_121, &STATE_VARIABLE_Info_7_122);
                ml_backend__add_trail_ops__gen_mark_ticket_stack_4_p_0(SavedTicketCounterVar_42, Context_179, &MarkTicketStackGoal_43, STATE_VARIABLE_Info_7_122);
                ml_backend__add_trail_ops__gen_store_ticket_4_p_0(TicketVar_180, Context_179, &StoreTicketGoal_181, STATE_VARIABLE_Info_7_122);
                ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(InnerGoal0_38, &InnerGoal_182, STATE_VARIABLE_Info_7_122, STATE_VARIABLE_Info_102);
                ml_backend__add_trail_ops__gen_reset_ticket_commit_4_p_0(TicketVar_180, Context_179, &ResetTicketCommitGoal_44, *STATE_VARIABLE_Info_102);
                ml_backend__add_trail_ops__gen_prune_tickets_to_4_p_0(SavedTicketCounterVar_42, Context_179, &PruneTicketsToGoal_45, *STATE_VARIABLE_Info_102);
                ml_backend__add_trail_ops__gen_reset_ticket_undo_4_p_0(TicketVar_180, Context_179, &ResetTicketUndoGoal_46, *STATE_VARIABLE_Info_102);
                ml_backend__add_trail_ops__gen_discard_ticket_3_p_0(Context_179, &DiscardTicketGoal_47, *STATE_VARIABLE_Info_102);
                FailGoal_48 = hlds__make_goal__fail_goal_with_context_1_f_0(Context_179);
                {
                  Var_124 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_124, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(3, Var_124, 1) = ((MR_Box) (Reason_37));
                  MR_hl_field(3, Var_124, 2) = ((MR_Box) (InnerGoal_182));
                }
                {
                  Goal2_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Goal2_49, 0) = ((MR_Box) (Var_124));
                  MR_hl_field(0, Goal2_49, 1) = ((MR_Box) (GoalInfo0_7));
                }
                {
                  Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_129, 0) = ((MR_Box) (PruneTicketsToGoal_45));
                  MR_hl_field(1, Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_128, 0) = ((MR_Box) (ResetTicketCommitGoal_44));
                  MR_hl_field(1, Var_128, 1) = ((MR_Box) (Var_129));
                }
                {
                  Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_127, 0) = ((MR_Box) (Goal2_49));
                  MR_hl_field(1, Var_127, 1) = ((MR_Box) (Var_128));
                }
                {
                  Var_125 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_125, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(3, Var_125, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(3, Var_125, 2) = ((MR_Box) (Var_127));
                }
                {
                  SuccCode_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SuccCode_50, 0) = ((MR_Box) (Var_125));
                  MR_hl_field(0, SuccCode_50, 1) = ((MR_Box) (GoalInfo0_7));
                }
                switch (OuterCodeModel_41) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                    Goal3_54 = SuccCode_50;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word FailGoalInfo_52 = ((MR_Word) ((MR_hl_field(0, FailGoal_48, 1))));
                      MR_Word FailCode_53;
                      MR_Word Var_131;
                      MR_Word Var_133;
                      MR_Word Var_134;
                      MR_Word Var_135;
                      MR_Word Var_137;
                      MR_Word Var_138;
                      MR_Word Var_139;

                      {
                        Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_135, 0) = ((MR_Box) (FailGoal_48));
                        MR_hl_field(1, Var_135, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_134, 0) = ((MR_Box) (DiscardTicketGoal_47));
                        MR_hl_field(1, Var_134, 1) = ((MR_Box) (Var_135));
                      }
                      {
                        Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_133, 0) = ((MR_Box) (ResetTicketUndoGoal_46));
                        MR_hl_field(1, Var_133, 1) = ((MR_Box) (Var_134));
                      }
                      {
                        Var_131 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_131, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(3, Var_131, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                        MR_hl_field(3, Var_131, 2) = ((MR_Box) (Var_133));
                      }
                      {
                        FailCode_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, FailCode_53, 0) = ((MR_Box) (Var_131));
                        MR_hl_field(0, FailCode_53, 1) = ((MR_Box) (FailGoalInfo_52));
                      }
                      {
                        Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_139, 0) = ((MR_Box) (FailCode_53));
                        MR_hl_field(1, Var_139, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_138, 0) = ((MR_Box) (SuccCode_50));
                        MR_hl_field(1, Var_138, 1) = ((MR_Box) (Var_139));
                      }
                      {
                        Var_137 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_137, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                        MR_hl_field(3, Var_137, 1) = ((MR_Box) (Var_138));
                      }
                      {
                        Goal3_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Goal3_54, 0) = ((MR_Box) (Var_137));
                        MR_hl_field(0, Goal3_54, 1) = ((MR_Box) (GoalInfo0_7));
                      }
                    }
                    break;
                }
                {
                  Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_144, 0) = ((MR_Box) (Goal3_54));
                  MR_hl_field(1, Var_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_143, 0) = ((MR_Box) (StoreTicketGoal_181));
                  MR_hl_field(1, Var_143, 1) = ((MR_Box) (Var_144));
                }
                {
                  Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_142, 0) = ((MR_Box) (MarkTicketStackGoal_43));
                  MR_hl_field(1, Var_142, 1) = ((MR_Box) (Var_143));
                }
                {
                  GoalExpr_189 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, GoalExpr_189, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(3, GoalExpr_189, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(3, GoalExpr_189, 2) = ((MR_Box) (Var_142));
                }
              }
              else
              {
                MR_Word FGT_56;

                succeeded = ((((MR_tag((MR_Word) Reason_37)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_37, 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  FGT_56 = ((MR_Unsigned) ((MR_hl_field(3, Reason_37, 2))) & (MR_Integer) 3);
                  switch (FGT_56) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      succeeded = MR_TRUE;
                      break;
                  }
                }
                if (succeeded)
                {
                  GoalExpr_189 = GoalExpr0_6;
                  *STATE_VARIABLE_Info_102 = STATE_VARIABLE_Info_0_101;
                }
                else
                {
                  MR_Word InnerGoal_183;

                  ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(InnerGoal0_38, &InnerGoal_183, STATE_VARIABLE_Info_0_101, STATE_VARIABLE_Info_102);
                  {
                    GoalExpr_189 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_189, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, GoalExpr_189, 1) = ((MR_Box) (Reason_37));
                    MR_hl_field(3, GoalExpr_189, 2) = ((MR_Box) (InnerGoal_183));
                  }
                }
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_189));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_7));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ExistQVars_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 1))));
              MR_Word Cond0_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 2))));
              MR_Word Then0_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 3))));
              MR_Word Else0_60 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, 4))));
              MR_Word Cond_61;
              MR_Word Then1_62;
              MR_Word Else1_63;
              MR_Word OptTrailUsage_64;
              MR_Word CondGoalInfo_66;
              MR_Word CondCodeModel_67;
              MR_Word STATE_VARIABLE_Info_10_147;
              MR_Word STATE_VARIABLE_Info_11_148;
              MR_Word STATE_VARIABLE_Info_12_149;
              MR_Word GoalExpr_210;
              MR_Word Var_150;

              ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(Cond0_58, &Cond_61, STATE_VARIABLE_Info_0_101, &STATE_VARIABLE_Info_10_147);
              ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(Then0_59, &Then1_62, STATE_VARIABLE_Info_10_147, &STATE_VARIABLE_Info_11_148);
              ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(Else0_60, &Else1_63, STATE_VARIABLE_Info_11_148, &STATE_VARIABLE_Info_12_149);
              OptTrailUsage_64 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_12_149, 1))) >> 1)) & (MR_Integer) 1);
              CondGoalInfo_66 = ((MR_Word) ((MR_hl_field(0, Cond_61, 1))));
              CondCodeModel_67 = hlds__code_model__goal_info_get_code_model_1_f_0(CondGoalInfo_66);
              succeeded = (OptTrailUsage_64 == (MR_Integer) 1);
              if (succeeded)
              {
                succeeded = (CondCodeModel_67 != (MR_Integer) 2);
                if (succeeded)
                {
                  Var_150 = hlds__goal_form__goal_cannot_modify_trail_1_f_0(CondGoalInfo_66);
                  succeeded = (Var_150 == (MR_Integer) 1);
                }
              }
              if (succeeded)
              {
                {
                  GoalExpr_210 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, GoalExpr_210, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(3, GoalExpr_210, 1) = ((MR_Box) (ExistQVars_57));
                  MR_hl_field(3, GoalExpr_210, 2) = ((MR_Box) (Cond_61));
                  MR_hl_field(3, GoalExpr_210, 3) = ((MR_Box) (Then1_62));
                  MR_hl_field(3, GoalExpr_210, 4) = ((MR_Box) (Else1_63));
                }
                *STATE_VARIABLE_Info_102 = STATE_VARIABLE_Info_12_149;
              }
              else
              {
                MR_Word Then1GoalInfo_69;
                MR_Word Then_71;
                MR_Word Else1GoalInfo_74;
                MR_Word Else_75;
                MR_Word IfThenElse_76;
                MR_Word Var_163;
                MR_Word Var_165;
                MR_Word Var_166;
                MR_Word Var_167;
                MR_Word Var_169;
                MR_Word Var_171;
                MR_Word Var_172;
                MR_Word Context_198;
                MR_Word TicketVar_199;
                MR_Word StoreTicketGoal_200;
                MR_Word ResetTicketUndoGoal_202;
                MR_Word DiscardTicketGoal_203;

                ml_backend__add_trail_ops__new_ticket_var_3_p_0(&TicketVar_199, STATE_VARIABLE_Info_12_149, STATE_VARIABLE_Info_102);
                Context_198 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_7);
                ml_backend__add_trail_ops__gen_store_ticket_4_p_0(TicketVar_199, Context_198, &StoreTicketGoal_200, *STATE_VARIABLE_Info_102);
                Then1GoalInfo_69 = ((MR_Word) ((MR_hl_field(0, Then1_62, 1))));
                switch (CondCodeModel_67) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    {
                      MR_Word PruneTicketGoal_72;
                      MR_Word Var_157;
                      MR_Word Var_159;
                      MR_Word Var_160;
                      MR_Word Var_161;
                      MR_Word ResetTicketCommitGoal_196;

                      ml_backend__add_trail_ops__gen_reset_ticket_commit_4_p_0(TicketVar_199, Context_198, &ResetTicketCommitGoal_196, *STATE_VARIABLE_Info_102);
                      ml_backend__add_trail_ops__gen_prune_ticket_3_p_0(Context_198, &PruneTicketGoal_72, *STATE_VARIABLE_Info_102);
                      {
                        Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_161, 0) = ((MR_Box) (Then1_62));
                        MR_hl_field(1, Var_161, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Var_160 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_160, 0) = ((MR_Box) (PruneTicketGoal_72));
                        MR_hl_field(1, Var_160, 1) = ((MR_Box) (Var_161));
                      }
                      {
                        Var_159 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_159, 0) = ((MR_Box) (ResetTicketCommitGoal_196));
                        MR_hl_field(1, Var_159, 1) = ((MR_Box) (Var_160));
                      }
                      {
                        Var_157 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_157, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(3, Var_157, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                        MR_hl_field(3, Var_157, 2) = ((MR_Box) (Var_159));
                      }
                      {
                        Then_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Then_71, 0) = ((MR_Box) (Var_157));
                        MR_hl_field(0, Then_71, 1) = ((MR_Box) (Then1GoalInfo_69));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ResetTicketSolveGoal_70;
                      MR_Word Var_152;
                      MR_Word Var_154;
                      MR_Word Var_155;

                      ml_backend__add_trail_ops__gen_reset_ticket_solve_4_p_0(TicketVar_199, Context_198, &ResetTicketSolveGoal_70, *STATE_VARIABLE_Info_102);
                      {
                        Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_155, 0) = ((MR_Box) (Then1_62));
                        MR_hl_field(1, Var_155, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_154, 0) = ((MR_Box) (ResetTicketSolveGoal_70));
                        MR_hl_field(1, Var_154, 1) = ((MR_Box) (Var_155));
                      }
                      {
                        Var_152 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_152, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(3, Var_152, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                        MR_hl_field(3, Var_152, 2) = ((MR_Box) (Var_154));
                      }
                      {
                        Then_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Then_71, 0) = ((MR_Box) (Var_152));
                        MR_hl_field(0, Then_71, 1) = ((MR_Box) (Then1GoalInfo_69));
                      }
                    }
                    break;
                }
                ml_backend__add_trail_ops__gen_reset_ticket_undo_4_p_0(TicketVar_199, Context_198, &ResetTicketUndoGoal_202, *STATE_VARIABLE_Info_102);
                ml_backend__add_trail_ops__gen_discard_ticket_3_p_0(Context_198, &DiscardTicketGoal_203, *STATE_VARIABLE_Info_102);
                Else1GoalInfo_74 = ((MR_Word) ((MR_hl_field(0, Else1_63, 1))));
                {
                  Var_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_167, 0) = ((MR_Box) (Else1_63));
                  MR_hl_field(1, Var_167, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_166, 0) = ((MR_Box) (DiscardTicketGoal_203));
                  MR_hl_field(1, Var_166, 1) = ((MR_Box) (Var_167));
                }
                {
                  Var_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_165, 0) = ((MR_Box) (ResetTicketUndoGoal_202));
                  MR_hl_field(1, Var_165, 1) = ((MR_Box) (Var_166));
                }
                {
                  Var_163 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_163, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(3, Var_163, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(3, Var_163, 2) = ((MR_Box) (Var_165));
                }
                {
                  Else_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Else_75, 0) = ((MR_Box) (Var_163));
                  MR_hl_field(0, Else_75, 1) = ((MR_Box) (Else1GoalInfo_74));
                }
                {
                  Var_169 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_169, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(3, Var_169, 1) = ((MR_Box) (ExistQVars_57));
                  MR_hl_field(3, Var_169, 2) = ((MR_Box) (Cond_61));
                  MR_hl_field(3, Var_169, 3) = ((MR_Box) (Then_71));
                  MR_hl_field(3, Var_169, 4) = ((MR_Box) (Else_75));
                }
                {
                  IfThenElse_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, IfThenElse_76, 0) = ((MR_Box) (Var_169));
                  MR_hl_field(0, IfThenElse_76, 1) = ((MR_Box) (GoalInfo0_7));
                }
                {
                  Var_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_172, 0) = ((MR_Box) (IfThenElse_76));
                  MR_hl_field(1, Var_172, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_171 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_171, 0) = ((MR_Box) (StoreTicketGoal_200));
                  MR_hl_field(1, Var_171, 1) = ((MR_Box) (Var_172));
                }
                {
                  GoalExpr_210 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, GoalExpr_210, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(3, GoalExpr_210, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(3, GoalExpr_210, 2) = ((MR_Box) (Var_171));
                }
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_210));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_7));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.add_trail_ops.goal_expr_add_trail_ops\'/5", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__cases_add_trail_ops_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word Case0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Cases0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Case_10;
    MR_Word Cases_11;
    MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(0, Case0_8, 0))));
    MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(0, Case0_8, 1))));
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(0, Case0_8, 2))));
    MR_Word Goal_16;
    MR_Word STATE_VARIABLE_Info_1_19;
    MR_Word GoalExpr0_20 = ((MR_Word) ((MR_hl_field(0, Goal0_15, 0))));
    MR_Word GoalInfo_21 = ((MR_Word) ((MR_hl_field(0, Goal0_15, 1))));

    ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_p_0(GoalExpr0_20, GoalInfo_21, &Goal_16, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_1_19);
    {
      Case_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_10, 0) = ((MR_Box) (MainConsId_13));
      MR_hl_field(0, Case_10, 1) = ((MR_Box) (OtherConsIds_14));
      MR_hl_field(0, Case_10, 2) = ((MR_Box) (Goal_16));
    }
    ml_backend__add_trail_ops__cases_add_trail_ops_4_p_0(Cases0_9, &Cases_11, STATE_VARIABLE_Info_1_19, STATE_VARIABLE_Info_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_11));
    }
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__disj_add_trail_ops_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word IsFirstBranch_3,
  MR_Word CodeModel_4,
  MR_Word TicketVar_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
  }
  else
  {
    MR_Word Goal0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Goals0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Goal_16;
    MR_Word Goals_17;
    MR_Word GoalInfo0_23 = ((MR_Word) ((MR_hl_field(0, Goal0_14, 1))));
    MR_Word Context_24;
    MR_Word UndoList_25;
    MR_Word Goal1_31;
    MR_Word PruneList_32;
    MR_Word GoalInfo1_36;
    MR_Word STATE_VARIABLE_Info_1_42;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word GoalExpr0_84;
    MR_Word GoalInfo_85;

    Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_23);
    switch (IsFirstBranch_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        UndoList_25 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word ResetTicketUndoGoal_26;
          MR_Word UndoList0_27;
          MR_Word GenerateInline_52 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))) & (MR_Integer) 1);

          switch (GenerateInline_52) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_56;
                MR_Word Var_57;
                MR_Word ModuleInfo_75;
                MR_Word Var_77;

                {
                  Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_56, 0) = ((MR_Box) (TicketVar_5));
                  MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                Var_57 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                ModuleInfo_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
                Var_77 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_75, (MR_Integer) 0, Var_77, (MR_String) "reset_ticket_undo", (MR_Word) ((MR_Unsigned) 0U), Var_56, Var_57, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_24, &ResetTicketUndoGoal_26);
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word Arg1_53;
                MR_Word Var_61;
                MR_Word Var_62;
                MR_Word Var_64;
                MR_Word Var_65;
                MR_Word Var_68;
                MR_Word Var_69;

                Var_64 = parse_tree__prog_mode__in_mode_0_f_0();
                {
                  Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_62, 0) = ((MR_Box) ((MR_String) "Ticket"));
                  MR_hl_field(0, Var_62, 1) = ((MR_Box) (Var_64));
                }
                {
                  Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
                }
                Var_65 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                {
                  Arg1_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Arg1_53, 0) = ((MR_Box) (TicketVar_5));
                  MR_hl_field(0, Arg1_53, 1) = ((MR_Box) (Var_61));
                  MR_hl_field(0, Arg1_53, 2) = ((MR_Box) (Var_65));
                  MR_hl_field(0, Arg1_53, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                }
                {
                  Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_68, 0) = ((MR_Box) (Arg1_53));
                  MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                Var_69 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                ml_backend__add_trail_ops__trail_generate_call_foreign_proc_8_p_0(STATE_VARIABLE_Info_0_6, (MR_String) "reset_ticket_undo", Var_68, Var_69, (MR_Integer) 2, Context_24, (MR_String) "MR_reset_ticket(Ticket, MR_undo);", &ResetTicketUndoGoal_26);
              }
              break;
          }
          {
            UndoList0_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, UndoList0_27, 0) = ((MR_Box) (ResetTicketUndoGoal_26));
            MR_hl_field(1, UndoList0_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          if ((Goals0_15 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word DiscardTicketGoal_28;
            MR_Word Var_40;

            ml_backend__add_trail_ops__gen_discard_ticket_3_p_0(Context_24, &DiscardTicketGoal_28, STATE_VARIABLE_Info_0_6);
            {
              Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_40, 0) = ((MR_Box) (DiscardTicketGoal_28));
              MR_hl_field(1, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            UndoList_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), UndoList0_27, Var_40);
          }
          else
            UndoList_25 = UndoList0_27;
        }
        break;
    }
    GoalExpr0_84 = ((MR_Word) ((MR_hl_field(0, Goal0_14, 0))));
    GoalInfo_85 = ((MR_Word) ((MR_hl_field(0, Goal0_14, 1))));
    ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_p_0(GoalExpr0_84, GoalInfo_85, &Goal1_31, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_1_42);
    switch (CodeModel_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word ResetTicketCommitGoal_33;
          MR_Word PruneTicketGoal_34;
          MR_Word Var_43;

          ml_backend__add_trail_ops__gen_reset_ticket_commit_4_p_0(TicketVar_5, Context_24, &ResetTicketCommitGoal_33, STATE_VARIABLE_Info_1_42);
          ml_backend__add_trail_ops__gen_prune_ticket_3_p_0(Context_24, &PruneTicketGoal_34, STATE_VARIABLE_Info_1_42);
          {
            Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_43, 0) = ((MR_Box) (PruneTicketGoal_34));
            MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            PruneList_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, PruneList_32, 0) = ((MR_Box) (ResetTicketCommitGoal_33));
            MR_hl_field(1, PruneList_32, 1) = ((MR_Box) (Var_43));
          }
        }
        break;
      case (MR_Integer) 2:
        PruneList_32 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
    GoalInfo1_36 = ((MR_Word) ((MR_hl_field(0, Goal1_31, 1))));
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (Goal1_31));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_47, PruneList_32);
    Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), UndoList_25, Var_46);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_45, GoalInfo1_36, &Goal_16);
    ml_backend__add_trail_ops__disj_add_trail_ops_7_p_0(Goals0_15, &Goals_17, (MR_Integer) 1, CodeModel_4, TicketVar_5, STATE_VARIABLE_Info_1_42, STATE_VARIABLE_Info_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_17));
    }
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__trail_generate_call_8_p_0(
  MR_Word Info_9,
  MR_String PredName_10,
  MR_Word ArgVars_11,
  MR_Word InstMapDelta_12,
  MR_Word Detism_13,
  MR_Word Purity_14,
  MR_Word Context_15,
  MR_Word * CallGoal_16)
{
  MR_Word ModuleInfo_17 = ((MR_Word) ((MR_hl_field(0, Info_9, 0))));
  MR_Word Var_19;

  Var_19 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_17, (MR_Integer) 0, Var_19, PredName_10, (MR_Word) ((MR_Unsigned) 0U), ArgVars_11, InstMapDelta_12, (MR_Word) ((MR_Unsigned) 0U), Detism_13, Purity_14, (MR_Word) ((MR_Unsigned) 0U), Context_15, CallGoal_16);
}

static void MR_CALL 
ml_backend__add_trail_ops__new_ticket_counter_var_3_p_0(
  MR_Word * Var_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9;
  MR_Word VarTable0_11;
  MR_Word Entry_12;
  MR_Word VarTable_13;
  MR_Word Var_17;
  MR_Unsigned packed_word_0;

  Var_9 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
  VarTable0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  {
    Entry_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_12, 0) = ((MR_Box) ((MR_String) "SavedTicketCounter"));
    MR_hl_field(0, Entry_12, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, Entry_12, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__add_var_entry_4_p_0(Entry_12, Var_4, VarTable0_11, &VarTable_13);
  Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1)));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 1) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 2) = ((MR_Box) (VarTable_13));
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__new_ticket_var_3_p_0(
  MR_Word * Var_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9;
  MR_Word VarTable0_11;
  MR_Word Entry_12;
  MR_Word VarTable_13;
  MR_Word Var_17;
  MR_Unsigned packed_word_0;

  Var_9 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
  VarTable0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  {
    Entry_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_12, 0) = ((MR_Box) ((MR_String) "TrailTicket"));
    MR_hl_field(0, Entry_12, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, Entry_12, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__add_var_entry_4_p_0(Entry_12, Var_4, VarTable0_11, &VarTable_13);
  Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1)));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 1) = (MR_Box) (packed_word_0);
    MR_hl_field(0, base, 2) = ((MR_Box) (VarTable_13));
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__gen_prune_tickets_to_4_p_0(
  MR_Word SavedTicketCounterVar_5,
  MR_Word Context_6,
  MR_Word * PruneTicketsToGoal_7,
  MR_Word Info_8)
{
  MR_Word GenerateInline_9 = ((MR_Unsigned) ((MR_hl_field(0, Info_8, 1))) & (MR_Integer) 1);

  switch (GenerateInline_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_13;
        MR_Word Var_14;
        MR_Word ModuleInfo_32;
        MR_Word Var_34;

        {
          Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_13, 0) = ((MR_Box) (SavedTicketCounterVar_5));
          MR_hl_field(1, Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_14 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        ModuleInfo_32 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
        Var_34 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_32, (MR_Integer) 0, Var_34, (MR_String) "prune_tickets_to", (MR_Word) ((MR_Unsigned) 0U), Var_13, Var_14, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_6, PruneTicketsToGoal_7);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Arg1_10;
        MR_Word Var_18;
        MR_Word Var_19;
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Word Var_25;
        MR_Word Var_26;

        Var_21 = parse_tree__prog_mode__in_mode_0_f_0();
        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_19, 0) = ((MR_Box) ((MR_String) "TicketCounter"));
          MR_hl_field(0, Var_19, 1) = ((MR_Box) (Var_21));
        }
        {
          Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_18, 0) = ((MR_Box) (Var_19));
        }
        Var_22 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
        {
          Arg1_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arg1_10, 0) = ((MR_Box) (SavedTicketCounterVar_5));
          MR_hl_field(0, Arg1_10, 1) = ((MR_Box) (Var_18));
          MR_hl_field(0, Arg1_10, 2) = ((MR_Box) (Var_22));
          MR_hl_field(0, Arg1_10, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_25, 0) = ((MR_Box) (Arg1_10));
          MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_26 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        ml_backend__add_trail_ops__trail_generate_call_foreign_proc_8_p_0(Info_8, (MR_String) "prune_tickets_to", Var_25, Var_26, (MR_Integer) 2, Context_6, (MR_String) "MR_prune_tickets_to(TicketCounter);", PruneTicketsToGoal_7);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__gen_mark_ticket_stack_4_p_0(
  MR_Word SavedTicketCounterVar_5,
  MR_Word Context_6,
  MR_Word * MarkTicketStackGoal_7,
  MR_Word Info_8)
{
  MR_Word GenerateInline_9 = ((MR_Unsigned) ((MR_hl_field(0, Info_8, 1))) & (MR_Integer) 1);

  switch (GenerateInline_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_13;
        MR_Word Var_14;
        MR_Word ModuleInfo_32;
        MR_Word Var_34;

        {
          Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_13, 0) = ((MR_Box) (SavedTicketCounterVar_5));
          MR_hl_field(1, Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_14 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        ModuleInfo_32 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
        Var_34 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_32, (MR_Integer) 0, Var_34, (MR_String) "mark_ticket_stack", (MR_Word) ((MR_Unsigned) 0U), Var_13, Var_14, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_6, MarkTicketStackGoal_7);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Arg1_10;
        MR_Word Var_18;
        MR_Word Var_19;
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Word Var_25;
        MR_Word Var_26;

        Var_21 = parse_tree__prog_mode__out_mode_0_f_0();
        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_19, 0) = ((MR_Box) ((MR_String) "TicketCounter"));
          MR_hl_field(0, Var_19, 1) = ((MR_Box) (Var_21));
        }
        {
          Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_18, 0) = ((MR_Box) (Var_19));
        }
        Var_22 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
        {
          Arg1_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arg1_10, 0) = ((MR_Box) (SavedTicketCounterVar_5));
          MR_hl_field(0, Arg1_10, 1) = ((MR_Box) (Var_18));
          MR_hl_field(0, Arg1_10, 2) = ((MR_Box) (Var_22));
          MR_hl_field(0, Arg1_10, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_25, 0) = ((MR_Box) (Arg1_10));
          MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_26 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        ml_backend__add_trail_ops__trail_generate_call_foreign_proc_8_p_0(Info_8, (MR_String) "mark_ticket_stack", Var_25, Var_26, (MR_Integer) 2, Context_6, (MR_String) "MR_mark_ticket_stack(TicketCounter);", MarkTicketStackGoal_7);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__gen_reset_ticket_solve_4_p_0(
  MR_Word TicketVar_5,
  MR_Word Context_6,
  MR_Word * ResetTicketGoal_7,
  MR_Word Info_8)
{
  MR_Word GenerateInline_9 = ((MR_Unsigned) ((MR_hl_field(0, Info_8, 1))) & (MR_Integer) 1);

  switch (GenerateInline_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_13;
        MR_Word Var_14;
        MR_Word ModuleInfo_32;
        MR_Word Var_34;

        {
          Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_13, 0) = ((MR_Box) (TicketVar_5));
          MR_hl_field(1, Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_14 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        ModuleInfo_32 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
        Var_34 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_32, (MR_Integer) 0, Var_34, (MR_String) "reset_ticket_solve", (MR_Word) ((MR_Unsigned) 0U), Var_13, Var_14, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_6, ResetTicketGoal_7);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Arg1_10;
        MR_Word Var_18;
        MR_Word Var_19;
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Word Var_25;
        MR_Word Var_26;

        Var_21 = parse_tree__prog_mode__in_mode_0_f_0();
        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_19, 0) = ((MR_Box) ((MR_String) "Ticket"));
          MR_hl_field(0, Var_19, 1) = ((MR_Box) (Var_21));
        }
        {
          Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_18, 0) = ((MR_Box) (Var_19));
        }
        Var_22 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
        {
          Arg1_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arg1_10, 0) = ((MR_Box) (TicketVar_5));
          MR_hl_field(0, Arg1_10, 1) = ((MR_Box) (Var_18));
          MR_hl_field(0, Arg1_10, 2) = ((MR_Box) (Var_22));
          MR_hl_field(0, Arg1_10, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_25, 0) = ((MR_Box) (Arg1_10));
          MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_26 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        ml_backend__add_trail_ops__trail_generate_call_foreign_proc_8_p_0(Info_8, (MR_String) "reset_ticket_solve", Var_25, Var_26, (MR_Integer) 2, Context_6, (MR_String) "MR_reset_ticket(Ticket, MR_solve);", ResetTicketGoal_7);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__gen_reset_ticket_undo_4_p_0(
  MR_Word TicketVar_5,
  MR_Word Context_6,
  MR_Word * ResetTicketGoal_7,
  MR_Word Info_8)
{
  MR_Word GenerateInline_9 = ((MR_Unsigned) ((MR_hl_field(0, Info_8, 1))) & (MR_Integer) 1);

  switch (GenerateInline_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_13;
        MR_Word Var_14;
        MR_Word ModuleInfo_32;
        MR_Word Var_34;

        {
          Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_13, 0) = ((MR_Box) (TicketVar_5));
          MR_hl_field(1, Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_14 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        ModuleInfo_32 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
        Var_34 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_32, (MR_Integer) 0, Var_34, (MR_String) "reset_ticket_undo", (MR_Word) ((MR_Unsigned) 0U), Var_13, Var_14, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_6, ResetTicketGoal_7);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Arg1_10;
        MR_Word Var_18;
        MR_Word Var_19;
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Word Var_25;
        MR_Word Var_26;

        Var_21 = parse_tree__prog_mode__in_mode_0_f_0();
        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_19, 0) = ((MR_Box) ((MR_String) "Ticket"));
          MR_hl_field(0, Var_19, 1) = ((MR_Box) (Var_21));
        }
        {
          Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_18, 0) = ((MR_Box) (Var_19));
        }
        Var_22 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
        {
          Arg1_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arg1_10, 0) = ((MR_Box) (TicketVar_5));
          MR_hl_field(0, Arg1_10, 1) = ((MR_Box) (Var_18));
          MR_hl_field(0, Arg1_10, 2) = ((MR_Box) (Var_22));
          MR_hl_field(0, Arg1_10, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_25, 0) = ((MR_Box) (Arg1_10));
          MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_26 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        ml_backend__add_trail_ops__trail_generate_call_foreign_proc_8_p_0(Info_8, (MR_String) "reset_ticket_undo", Var_25, Var_26, (MR_Integer) 2, Context_6, (MR_String) "MR_reset_ticket(Ticket, MR_undo);", ResetTicketGoal_7);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__gen_store_ticket_4_p_0(
  MR_Word TicketVar_5,
  MR_Word Context_6,
  MR_Word * SaveTicketGoal_7,
  MR_Word Info_8)
{
  MR_Word GenerateInline_9 = ((MR_Unsigned) ((MR_hl_field(0, Info_8, 1))) & (MR_Integer) 1);

  switch (GenerateInline_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_13;
        MR_Word Var_14;
        MR_Word ModuleInfo_32;
        MR_Word Var_34;

        {
          Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_13, 0) = ((MR_Box) (TicketVar_5));
          MR_hl_field(1, Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_14 = hlds__instmap__instmap_delta_bind_var_1_f_0(TicketVar_5);
        ModuleInfo_32 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
        Var_34 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_32, (MR_Integer) 0, Var_34, (MR_String) "store_ticket", (MR_Word) ((MR_Unsigned) 0U), Var_13, Var_14, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_6, SaveTicketGoal_7);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Arg1_10;
        MR_Word Var_18;
        MR_Word Var_19;
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Word Var_25;
        MR_Word Var_26;

        Var_21 = parse_tree__prog_mode__out_mode_0_f_0();
        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_19, 0) = ((MR_Box) ((MR_String) "Ticket"));
          MR_hl_field(0, Var_19, 1) = ((MR_Box) (Var_21));
        }
        {
          Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_18, 0) = ((MR_Box) (Var_19));
        }
        Var_22 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
        {
          Arg1_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arg1_10, 0) = ((MR_Box) (TicketVar_5));
          MR_hl_field(0, Arg1_10, 1) = ((MR_Box) (Var_18));
          MR_hl_field(0, Arg1_10, 2) = ((MR_Box) (Var_22));
          MR_hl_field(0, Arg1_10, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_25, 0) = ((MR_Box) (Arg1_10));
          MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_26 = hlds__instmap__instmap_delta_bind_var_1_f_0(TicketVar_5);
        ml_backend__add_trail_ops__trail_generate_call_foreign_proc_8_p_0(Info_8, (MR_String) "store_ticket", Var_25, Var_26, (MR_Integer) 2, Context_6, (MR_String) "MR_store_ticket(Ticket);", SaveTicketGoal_7);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__gen_discard_ticket_3_p_0(
  MR_Word Context_4,
  MR_Word * DiscardTicketGoal_5,
  MR_Word Info_6)
{
  MR_Word GenerateInline_7 = ((MR_Unsigned) ((MR_hl_field(0, Info_6, 1))) & (MR_Integer) 1);

  switch (GenerateInline_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_11;
        MR_Word ModuleInfo_21;
        MR_Word Var_23;

        Var_11 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        ModuleInfo_21 = ((MR_Word) ((MR_hl_field(0, Info_6, 0))));
        Var_23 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_21, (MR_Integer) 0, Var_23, (MR_String) "discard_ticket", (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_11, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_4, DiscardTicketGoal_5);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_16;

        Var_16 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        ml_backend__add_trail_ops__trail_generate_call_foreign_proc_8_p_0(Info_6, (MR_String) "discard_ticket", (MR_Word) ((MR_Unsigned) 0U), Var_16, (MR_Integer) 2, Context_4, (MR_String) "MR_discard_ticket();", DiscardTicketGoal_5);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__gen_prune_ticket_3_p_0(
  MR_Word Context_4,
  MR_Word * PruneTicketGoal_5,
  MR_Word Info_6)
{
  MR_Word GenerateInline_7 = ((MR_Unsigned) ((MR_hl_field(0, Info_6, 1))) & (MR_Integer) 1);

  switch (GenerateInline_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_11;
        MR_Word ModuleInfo_21;
        MR_Word Var_23;

        Var_11 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        ModuleInfo_21 = ((MR_Word) ((MR_hl_field(0, Info_6, 0))));
        Var_23 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_21, (MR_Integer) 0, Var_23, (MR_String) "prune_ticket", (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_11, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_4, PruneTicketGoal_5);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_16;

        Var_16 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        ml_backend__add_trail_ops__trail_generate_call_foreign_proc_8_p_0(Info_6, (MR_String) "prune_ticket", (MR_Word) ((MR_Unsigned) 0U), Var_16, (MR_Integer) 2, Context_4, (MR_String) "MR_prune_ticket();", PruneTicketGoal_5);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__gen_reset_ticket_commit_4_p_0(
  MR_Word TicketVar_5,
  MR_Word Context_6,
  MR_Word * ResetTicketGoal_7,
  MR_Word Info_8)
{
  MR_Word GenerateInline_9 = ((MR_Unsigned) ((MR_hl_field(0, Info_8, 1))) & (MR_Integer) 1);

  switch (GenerateInline_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_13;
        MR_Word Var_14;
        MR_Word ModuleInfo_32;
        MR_Word Var_34;

        {
          Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_13, 0) = ((MR_Box) (TicketVar_5));
          MR_hl_field(1, Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_14 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        ModuleInfo_32 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
        Var_34 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_32, (MR_Integer) 0, Var_34, (MR_String) "reset_ticket_commit", (MR_Word) ((MR_Unsigned) 0U), Var_13, Var_14, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_6, ResetTicketGoal_7);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Arg1_10;
        MR_Word Var_18;
        MR_Word Var_19;
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Word Var_25;
        MR_Word Var_26;

        Var_21 = parse_tree__prog_mode__in_mode_0_f_0();
        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_19, 0) = ((MR_Box) ((MR_String) "Ticket"));
          MR_hl_field(0, Var_19, 1) = ((MR_Box) (Var_21));
        }
        {
          Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_18, 0) = ((MR_Box) (Var_19));
        }
        Var_22 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
        {
          Arg1_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arg1_10, 0) = ((MR_Box) (TicketVar_5));
          MR_hl_field(0, Arg1_10, 1) = ((MR_Box) (Var_18));
          MR_hl_field(0, Arg1_10, 2) = ((MR_Box) (Var_22));
          MR_hl_field(0, Arg1_10, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_25, 0) = ((MR_Box) (Arg1_10));
          MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_26 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        ml_backend__add_trail_ops__trail_generate_call_foreign_proc_8_p_0(Info_8, (MR_String) "reset_ticket_commit", Var_25, Var_26, (MR_Integer) 2, Context_6, (MR_String) "MR_reset_ticket(Ticket, MR_commit);", ResetTicketGoal_7);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__trail_generate_call_foreign_proc_8_p_0(
  MR_Word Info_9,
  MR_String PredName_10,
  MR_Word Args_11,
  MR_Word InstMapDelta_12,
  MR_Word Purity_13,
  MR_Word Context_14,
  MR_String ForeignCode_15,
  MR_Word * ForeignProcGoal_16)
{
  MR_Word ModuleInfo_17 = ((MR_Word) ((MR_hl_field(0, Info_9, 0))));
  MR_Word PrivateBuiltinModule_18;
  MR_Word FinalForeignProcAttrs_21;
  MR_Word STATE_VARIABLE_ForeignProcAttrs_1_24;
  MR_Word STATE_VARIABLE_ForeignProcAttrs_2_27;

  PrivateBuiltinModule_18 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  STATE_VARIABLE_ForeignProcAttrs_1_24 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
  parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, STATE_VARIABLE_ForeignProcAttrs_1_24, &STATE_VARIABLE_ForeignProcAttrs_2_27);
  parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_ForeignProcAttrs_2_27, &FinalForeignProcAttrs_21);
  hlds__goal_util__generate_call_foreign_proc_17_p_0(ModuleInfo_17, (MR_Integer) 0, PrivateBuiltinModule_18, PredName_10, (MR_Word) ((MR_Unsigned) 0U), Args_11, (MR_Word) ((MR_Unsigned) 0U), InstMapDelta_12, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, Purity_13, (MR_Word) ((MR_Unsigned) 0U), FinalForeignProcAttrs_21, (MR_Word) ((MR_Unsigned) 0U), ForeignCode_15, Context_14, ForeignProcGoal_16);
}

static void MR_CALL 
ml_backend__add_trail_ops__conj_add_trail_ops_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Goal_6;
  MR_Word conv0_STATE_VARIABLE_Info_11;

  ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Goal_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_11);
  *wrapper_arg_2 = ((MR_Box) (conv1_Goal_6));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_11));
}

static void MR_CALL 
ml_backend__add_trail_ops__conj_add_trail_ops_4_p_0(
  MR_Word Goals0_5,
  MR_Word * Goals_6,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Box conv2_STATE_VARIABLE_Info_9;

  mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&ml_backend__add_trail_ops__ml_backend__add_trail_ops__type_ctor_info_trail_ops_info_0), (MR_Word) (&ml_backend__add_trail_ops_scalar_common_2[0]), Goals0_5, Goals_6, ((MR_Box) (STATE_VARIABLE_Info_0_8)), &conv2_STATE_VARIABLE_Info_9);
  *STATE_VARIABLE_Info_9 = ((MR_Word) (conv2_STATE_VARIABLE_Info_9));
}

static MR_bool MR_CALL 
ml_backend__add_trail_ops____Unify____trail_ops_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__add_trail_ops____Unify____trail_ops_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__add_trail_ops____Compare____trail_ops_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__add_trail_ops____Compare____trail_ops_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ml_backend__add_trail_ops__init(void)
{
}

void mercury__ml_backend__add_trail_ops__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&ml_backend__add_trail_ops__ml_backend__add_trail_ops__type_ctor_info_trail_ops_info_0);
}

void mercury__ml_backend__add_trail_ops__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__add_trail_ops__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module ml_backend.add_trail_ops.
