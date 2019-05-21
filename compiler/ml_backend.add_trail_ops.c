/*
** Automatically generated from `add_trail_ops.m'
** by the Mercury compiler,
** version rotd-2018-02-06
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


// :- module ml_backend.add_trail_ops.
// :- implementation.

/*
INIT mercury__ml_backend__add_trail_ops__init
ENDINIT
*/

#include "ml_backend.add_trail_ops.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
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
#include "parse_tree.builtin_lib_types.mih"
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
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 ml_backend__add_trail_ops__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__add_trail_ops__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__add_trail_ops__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo ml_backend__add_trail_ops__ml_backend__add_trail_ops__field_types_trail_ops_info_0_0[5];

static const MR_ConstString ml_backend__add_trail_ops__ml_backend__add_trail_ops__field_names_trail_ops_info_0_0[5];

static const MR_DuArgLocn ml_backend__add_trail_ops__ml_backend__add_trail_ops__field_locns_trail_ops_info_0_0[5];

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
  MR_Word STATE_VARIABLE_Info_0_102,
  MR_Word * STATE_VARIABLE_Info_103);

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
  MR_String PredName_9,
  MR_Word Detism_10,
  MR_Word Purity_11,
  MR_Word Args_12,
  MR_Word InstMapDelta_13,
  MR_Word ModuleInfo_14,
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
ml_backend__add_trail_ops__gen_discard_ticket_3_p_0(
  MR_Word Context_4,
  MR_Word * DiscardTicketGoal_5,
  MR_Word Info_6);

static void MR_CALL 
ml_backend__add_trail_ops__gen_reset_ticket_solve_4_p_0(
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
ml_backend__add_trail_ops__gen_reset_ticket_undo_4_p_0(
  MR_Word TicketVar_5,
  MR_Word Context_6,
  MR_Word * ResetTicketGoal_7,
  MR_Word Info_8);

static void MR_CALL 
ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0(
  MR_String PredName_9,
  MR_Word Purity_10,
  MR_Word InstMapDelta_11,
  MR_Word ModuleInfo_12,
  MR_Word Context_13,
  MR_Word Args_14,
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


static /* final */ const MR_Box ml_backend__add_trail_ops_scalar_common_1[1][2];

static /* final */ const MR_Box ml_backend__add_trail_ops_scalar_common_2[1][7];

static /* final */ const MR_Box ml_backend__add_trail_ops_scalar_common_3[1][3];




static /* final */ const MR_Box ml_backend__add_trail_ops_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ml_backend__add_trail_ops_scalar_common_2[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ml_backend__add_trail_ops__ml_backend__add_trail_ops__type_ctor_info_trail_ops_info_0)),
    ((MR_Box) (&ml_backend__add_trail_ops__ml_backend__add_trail_ops__type_ctor_info_trail_ops_info_0))
  },
};

static /* final */ const MR_Box ml_backend__add_trail_ops_scalar_common_3[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__add_trail_ops_scalar_common_2[0])),
    ((MR_Box) (ml_backend__add_trail_ops__conj_add_trail_ops_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 ml_backend__add_trail_ops__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__add_trail_ops__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__add_trail_ops__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__add_trail_ops__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_PseudoTypeInfo ml_backend__add_trail_ops__ml_backend__add_trail_ops__field_types_trail_ops_info_0_0[5] = {
  (MR_PseudoTypeInfo) &ml_backend__add_trail_ops__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ml_backend__add_trail_ops__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_ConstString ml_backend__add_trail_ops__ml_backend__add_trail_ops__field_names_trail_ops_info_0_0[5] = {
  (MR_String) "trail_varset",
  (MR_String) "trail_var_types",
  (MR_String) "trail_module_info",
  (MR_String) "opt_trail_usage",
  (MR_String) "inline_ops"
};

static const MR_DuArgLocn ml_backend__add_trail_ops__ml_backend__add_trail_ops__field_locns_trail_ops_info_0_0[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 1,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_functor_desc_trail_ops_info_0_0 = {
  (MR_String) "trail_ops_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__add_trail_ops__ml_backend__add_trail_ops__field_types_trail_ops_info_0_0,
  ml_backend__add_trail_ops__ml_backend__add_trail_ops__field_names_trail_ops_info_0_0,
  ml_backend__add_trail_ops__ml_backend__add_trail_ops__field_locns_trail_ops_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_stag_ordered_trail_ops_info_0_0[1] = {
  &ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_functor_desc_trail_ops_info_0_0
};

static const MR_DuPtagLayout ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_ptag_ordered_trail_ops_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_stag_ordered_trail_ops_info_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_name_ordered_trail_ops_info_0[1] = {
  &ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_functor_desc_trail_ops_info_0_0
};

static const MR_Integer ml_backend__add_trail_ops__ml_backend__add_trail_ops__functor_number_map_trail_ops_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__add_trail_ops__ml_backend__add_trail_ops__type_ctor_info_trail_ops_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__add_trail_ops____Unify____trail_ops_info_0_0_10001)),
  ((MR_Box) (ml_backend__add_trail_ops____Compare____trail_ops_info_0_0_10001)),
  (MR_String) "ml_backend.add_trail_ops",
  (MR_String) "trail_ops_info",
  {     ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_name_ordered_trail_ops_info_0 },
  {     ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_ptag_ordered_trail_ops_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__add_trail_ops__ml_backend__add_trail_ops__functor_number_map_trail_ops_info_0
};

static void MR_CALL 
ml_backend__add_trail_ops____Compare____trail_ops_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_19 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_18 == CastY_19);
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
      MR_Word ArgX4_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 1);
      MR_Word ArgY4_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)))) & (MR_Integer) 1);
      MR_Word ArgX5_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY5_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word Var_14;

      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__add_trail_ops_scalar_common_1[0], &Var_14, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_14 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_14;
      else
      {
        MR_Word Var_15;

        mercury__builtin__compare_3_p_0((MR_Word) &hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0, &Var_15, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_15 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_15;
        else
        {
          MR_Word Var_16;

          hlds__hlds_module____Compare____module_info_0_0(&Var_16, ArgX3_8, ArgY3_9);
          succeeded = (Var_16 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_16;
          else
          {
            MR_Word Var_17;
            MR_Integer Var_25 = (MR_Integer) ArgX4_10;
            MR_Integer Var_26 = (MR_Integer) ArgY4_11;

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_17, Var_25, Var_26);
            succeeded = (Var_17 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_17;
            else
            {
              MR_Integer Var_27 = (MR_Integer) ArgX5_12;
              MR_Integer Var_28 = (MR_Integer) ArgY5_13;

              mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_27, Var_28);
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__add_trail_ops____Unify____trail_ops_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_16_16;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)))) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__add_trail_ops_scalar_common_1[0], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeCtorInfo_16_16 = (MR_Word) &hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0;
        succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
              succeeded = (ArgX5_11 == ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
ml_backend__add_trail_ops__add_trail_ops_5_p_0(
  MR_Word OptTrailUsage_6,
  MR_Word GenerateInline_7,
  MR_Word ModuleInfo0_8,
  MR_Word STATE_VARIABLE_Proc_0_21,
  MR_Word * STATE_VARIABLE_Proc_22)
{
  {
    MR_Word Goal0_10;
    MR_Word VarSet0_11;
    MR_Word VarTypes0_12;
    MR_Word TrailOpsInfo0_13;
    MR_Word Goal_14;
    MR_Word TrailOpsInfo_15;
    MR_Word VarSet_16;
    MR_Word VarTypes_17;
    MR_Word STATE_VARIABLE_Proc_23_23;
    MR_Word STATE_VARIABLE_Proc_24_24;
    MR_Word STATE_VARIABLE_Proc_25_25;
    MR_Word GoalExpr0_33;
    MR_Word GoalInfo_34;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_Proc_0_21, &Goal0_10);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_Proc_0_21, &VarSet0_11);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_Proc_0_21, &VarTypes0_12);
    {
      TrailOpsInfo0_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TrailOpsInfo0_13, 0) = ((MR_Box) (VarSet0_11));
      MR_hl_field(MR_mktag(0), TrailOpsInfo0_13, 1) = ((MR_Box) (VarTypes0_12));
      MR_hl_field(MR_mktag(0), TrailOpsInfo0_13, 2) = ((MR_Box) (ModuleInfo0_8));
      MR_hl_field(MR_mktag(0), TrailOpsInfo0_13, 3) = ((MR_Box) ((OptTrailUsage_6 | ((GenerateInline_7 << (MR_Integer) 1)))));
    }
    GoalExpr0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_10, (MR_Integer) 0)));
    GoalInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_10, (MR_Integer) 1)));
    ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_p_0(GoalExpr0_33, GoalInfo_34, &Goal_14, TrailOpsInfo0_13, &TrailOpsInfo_15);
    VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), TrailOpsInfo_15, (MR_Integer) 0)));
    VarTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), TrailOpsInfo_15, (MR_Integer) 1)));
    Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), TrailOpsInfo_15, (MR_Integer) 2)));
    Var_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), TrailOpsInfo_15, (MR_Integer) 3)))) & (MR_Integer) 1);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), TrailOpsInfo_15, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_14, STATE_VARIABLE_Proc_0_21, &STATE_VARIABLE_Proc_23_23);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_16, STATE_VARIABLE_Proc_23_23, &STATE_VARIABLE_Proc_24_24);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_17, STATE_VARIABLE_Proc_24_24, &STATE_VARIABLE_Proc_25_25);
    hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_Proc_25_25, STATE_VARIABLE_Proc_22);
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  {
    MR_Word GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 0)));
    MR_Word GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1)));

    ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_p_0(GoalExpr0_8, GoalInfo_9, Goal_6, STATE_VARIABLE_Info_0_10, STATE_VARIABLE_Info_11);
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_102,
  MR_Word * STATE_VARIABLE_Info_103)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) GoalExpr0_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word InnerGoal_26 = (MR_Word) MR_body(((MR_Word) GoalExpr0_6), (MR_Integer) 0);
          MR_Word InnerGoalInfo_29;
          MR_Word Determinism_30;
          MR_Word NumSolns_32;
          MR_Word True_33;
          MR_Word Fail_34;
          MR_Word ModuleInfo_35;
          MR_Word ThenGoal_36;
          MR_Word NewOuterGoal_37;
          MR_Word Context_180;
          MR_Word Var_28;
          MR_Word _CanFail_31;
          MR_Word Var_219;
          MR_Word Var_220;
          MR_Word Var_221;
          MR_Word Var_222;
          MR_Word next_value_of_GoalExpr0_6;

          Context_180 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_7);
          Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), InnerGoal_26, (MR_Integer) 0)));
          InnerGoalInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), InnerGoal_26, (MR_Integer) 1)));
          Determinism_30 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(InnerGoalInfo_29);
          parse_tree__prog_data__determinism_components_3_p_0(Determinism_30, &_CanFail_31, &NumSolns_32);
          True_33 = hlds__make_goal__true_goal_with_context_1_f_0(Context_180);
          Fail_34 = hlds__make_goal__fail_goal_with_context_1_f_0(Context_180);
          Var_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_102, (MR_Integer) 0)));
          Var_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_102, (MR_Integer) 1)));
          ModuleInfo_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_102, (MR_Integer) 2)));
          Var_221 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_102, (MR_Integer) 3)))) & (MR_Integer) 1);
          Var_222 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_102, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          switch (NumSolns_32) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 3:
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              ThenGoal_36 = Fail_34;
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_164;

                Var_164 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                ml_backend__add_trail_ops__trail_generate_call_8_p_0((MR_String) "unused", (MR_Integer) 0, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_164, ModuleInfo_35, Context_180, &ThenGoal_36);
              }
              break;
          }
          {
            NewOuterGoal_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), NewOuterGoal_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(3), NewOuterGoal_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(3), NewOuterGoal_37, 2) = ((MR_Box) (InnerGoal_26));
            MR_hl_field(MR_mktag(3), NewOuterGoal_37, 3) = ((MR_Box) (ThenGoal_36));
            MR_hl_field(MR_mktag(3), NewOuterGoal_37, 4) = ((MR_Box) (True_33));
          }
          // direct tailcall eliminated
          next_value_of_GoalExpr0_6 = NewOuterGoal_37;
          GoalExpr0_6 = next_value_of_GoalExpr0_6;
          continue;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr0_6));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_7));
          }
          *STATE_VARIABLE_Info_103 = STATE_VARIABLE_Info_0_102;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr0_6));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_7));
              }
              *STATE_VARIABLE_Info_103 = STATE_VARIABLE_Info_0_102;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr0_6));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_7));
              }
              *STATE_VARIABLE_Info_103 = STATE_VARIABLE_Info_0_102;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));
              MR_Word Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2)));
              MR_Word Goals_12;
              MR_Word GoalExpr_13;

              ml_backend__add_trail_ops__conj_add_trail_ops_4_p_0(Goals0_11, &Goals_12, STATE_VARIABLE_Info_0_102, STATE_VARIABLE_Info_103);
              {
                GoalExpr_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), GoalExpr_13, 1) = ((MR_Box) (ConjType_10));
                MR_hl_field(MR_mktag(3), GoalExpr_13, 2) = ((MR_Box) (Goals_12));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_13));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_7));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));
              MR_Word GoalExpr_178;

              if ((Disjuncts0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                GoalExpr_178 = GoalExpr0_6;
                *STATE_VARIABLE_Info_103 = STATE_VARIABLE_Info_0_102;
              }
              else
              {
                MR_Word Context_17;
                MR_Word CodeModel_18;
                MR_Word TicketVar_19;
                MR_Word StoreTicketGoal_20;
                MR_Word Disjuncts_21;
                MR_Word STATE_VARIABLE_Info_168_168;
                MR_Word Var_172;
                MR_Word Var_173;
                MR_Word Var_174;
                MR_Word Var_175;

                Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_7);
                CodeModel_18 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo0_7);
                ml_backend__add_trail_ops__new_ticket_var_3_p_0(&TicketVar_19, STATE_VARIABLE_Info_0_102, &STATE_VARIABLE_Info_168_168);
                ml_backend__add_trail_ops__gen_store_ticket_4_p_0(TicketVar_19, Context_17, &StoreTicketGoal_20, STATE_VARIABLE_Info_168_168);
                ml_backend__add_trail_ops__disj_add_trail_ops_7_p_0(Disjuncts0_14, &Disjuncts_21, (MR_Integer) 0, CodeModel_18, TicketVar_19, STATE_VARIABLE_Info_168_168, STATE_VARIABLE_Info_103);
                {
                  Var_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), Var_175, 1) = ((MR_Box) (Disjuncts_21));
                }
                {
                  Var_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_174, 0) = ((MR_Box) (Var_175));
                  MR_hl_field(MR_mktag(0), Var_174, 1) = ((MR_Box) (GoalInfo0_7));
                }
                {
                  Var_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_173, 0) = ((MR_Box) (Var_174));
                  MR_hl_field(MR_mktag(1), Var_173, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (StoreTicketGoal_20));
                  MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) (Var_173));
                }
                {
                  GoalExpr_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), GoalExpr_178, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), GoalExpr_178, 2) = ((MR_Box) (Var_172));
                }
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_178));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_7));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));
              MR_Word CanFail_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2)));
              MR_Word Cases0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3)));
              MR_Word Cases_25;
              MR_Word GoalExpr_179;

              ml_backend__add_trail_ops__cases_add_trail_ops_4_p_0(Cases0_24, &Cases_25, STATE_VARIABLE_Info_0_102, STATE_VARIABLE_Info_103);
              {
                GoalExpr_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), GoalExpr_179, 1) = ((MR_Box) (Var_22));
                MR_hl_field(MR_mktag(3), GoalExpr_179, 2) = ((MR_Box) (CanFail_23));
                MR_hl_field(MR_mktag(3), GoalExpr_179, 3) = ((MR_Box) (Cases_25));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_179));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_7));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));
              MR_Word InnerGoal0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2)));
              MR_Word InnerCodeModel_41;
              MR_Word OuterCodeModel_42;
              MR_Word GoalExpr_191;
              MR_Word InnerGoalInfo_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), InnerGoal0_39, (MR_Integer) 1)));
              MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), InnerGoal0_39, (MR_Integer) 0)));

              InnerCodeModel_41 = hlds__code_model__goal_info_get_code_model_1_f_0(InnerGoalInfo_197);
              OuterCodeModel_42 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo0_7);
              succeeded = (InnerCodeModel_41 == (MR_Integer) 2);
              if (succeeded)
              {
                succeeded = (OuterCodeModel_42 == (MR_Integer) 2);
                succeeded = !(succeeded);
              }
              if (succeeded)
              {
                MR_Word SavedTicketCounterVar_43;
                MR_Word MarkTicketStackGoal_44;
                MR_Word ResetTicketCommitGoal_45;
                MR_Word PruneTicketsToGoal_46;
                MR_Word ResetTicketUndoGoal_47;
                MR_Word DiscardTicketGoal_48;
                MR_Word FailGoal_49;
                MR_Word Goal2_50;
                MR_Word SuccCode_51;
                MR_Word Goal3_55;
                MR_Word STATE_VARIABLE_Info_134_134;
                MR_Word STATE_VARIABLE_Info_135_135;
                MR_Word Var_137;
                MR_Word Var_138;
                MR_Word Var_140;
                MR_Word Var_141;
                MR_Word Var_142;
                MR_Word Var_155;
                MR_Word Var_156;
                MR_Word Var_157;
                MR_Word Context_181;
                MR_Word TicketVar_182;
                MR_Word StoreTicketGoal_183;
                MR_Word InnerGoal_184;

                Context_181 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_7);
                ml_backend__add_trail_ops__new_ticket_counter_var_3_p_0(&SavedTicketCounterVar_43, STATE_VARIABLE_Info_0_102, &STATE_VARIABLE_Info_134_134);
                ml_backend__add_trail_ops__new_ticket_var_3_p_0(&TicketVar_182, STATE_VARIABLE_Info_134_134, &STATE_VARIABLE_Info_135_135);
                ml_backend__add_trail_ops__gen_mark_ticket_stack_4_p_0(SavedTicketCounterVar_43, Context_181, &MarkTicketStackGoal_44, STATE_VARIABLE_Info_135_135);
                ml_backend__add_trail_ops__gen_store_ticket_4_p_0(TicketVar_182, Context_181, &StoreTicketGoal_183, STATE_VARIABLE_Info_135_135);
                ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(InnerGoal0_39, &InnerGoal_184, STATE_VARIABLE_Info_135_135, STATE_VARIABLE_Info_103);
                ml_backend__add_trail_ops__gen_reset_ticket_commit_4_p_0(TicketVar_182, Context_181, &ResetTicketCommitGoal_45, *STATE_VARIABLE_Info_103);
                ml_backend__add_trail_ops__gen_prune_tickets_to_4_p_0(SavedTicketCounterVar_43, Context_181, &PruneTicketsToGoal_46, *STATE_VARIABLE_Info_103);
                ml_backend__add_trail_ops__gen_reset_ticket_undo_4_p_0(TicketVar_182, Context_181, &ResetTicketUndoGoal_47, *STATE_VARIABLE_Info_103);
                ml_backend__add_trail_ops__gen_discard_ticket_3_p_0(Context_181, &DiscardTicketGoal_48, *STATE_VARIABLE_Info_103);
                FailGoal_49 = hlds__make_goal__fail_goal_with_context_1_f_0(Context_181);
                {
                  Var_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), Var_137, 1) = ((MR_Box) (Reason_38));
                  MR_hl_field(MR_mktag(3), Var_137, 2) = ((MR_Box) (InnerGoal_184));
                }
                {
                  Goal2_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Goal2_50, 0) = ((MR_Box) (Var_137));
                  MR_hl_field(MR_mktag(0), Goal2_50, 1) = ((MR_Box) (GoalInfo0_7));
                }
                {
                  Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (PruneTicketsToGoal_46));
                  MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (ResetTicketCommitGoal_45));
                  MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) (Var_142));
                }
                {
                  Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (Goal2_50));
                  MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (Var_141));
                }
                {
                  Var_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_138, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), Var_138, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), Var_138, 2) = ((MR_Box) (Var_140));
                }
                {
                  SuccCode_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SuccCode_51, 0) = ((MR_Box) (Var_138));
                  MR_hl_field(MR_mktag(0), SuccCode_51, 1) = ((MR_Box) (GoalInfo0_7));
                }
                switch (OuterCodeModel_42) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                    Goal3_55 = SuccCode_51;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word FailGoalInfo_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), FailGoal_49, (MR_Integer) 1)));
                      MR_Word FailCode_54;
                      MR_Word Var_144;
                      MR_Word Var_146;
                      MR_Word Var_147;
                      MR_Word Var_148;
                      MR_Word Var_150;
                      MR_Word Var_151;
                      MR_Word Var_152;
                      MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), FailGoal_49, (MR_Integer) 0)));

                      {
                        Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (FailGoal_49));
                        MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (DiscardTicketGoal_48));
                        MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (Var_148));
                      }
                      {
                        Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (ResetTicketUndoGoal_47));
                        MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (Var_147));
                      }
                      {
                        Var_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), Var_144, 1) = ((MR_Box) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), Var_144, 2) = ((MR_Box) (Var_146));
                      }
                      {
                        FailCode_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), FailCode_54, 0) = ((MR_Box) (Var_144));
                        MR_hl_field(MR_mktag(0), FailCode_54, 1) = ((MR_Box) (FailGoalInfo_53));
                      }
                      {
                        Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_152, 0) = ((MR_Box) (FailCode_54));
                        MR_hl_field(MR_mktag(1), Var_152, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (SuccCode_51));
                        MR_hl_field(MR_mktag(1), Var_151, 1) = ((MR_Box) (Var_152));
                      }
                      {
                        Var_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(3), Var_150, 1) = ((MR_Box) (Var_151));
                      }
                      {
                        Goal3_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Goal3_55, 0) = ((MR_Box) (Var_150));
                        MR_hl_field(MR_mktag(0), Goal3_55, 1) = ((MR_Box) (GoalInfo0_7));
                      }
                    }
                    break;
                }
                {
                  Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_157, 0) = ((MR_Box) (Goal3_55));
                  MR_hl_field(MR_mktag(1), Var_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (StoreTicketGoal_183));
                  MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) (Var_157));
                }
                {
                  Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_155, 0) = ((MR_Box) (MarkTicketStackGoal_44));
                  MR_hl_field(MR_mktag(1), Var_155, 1) = ((MR_Box) (Var_156));
                }
                {
                  GoalExpr_191 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_191, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), GoalExpr_191, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), GoalExpr_191, 2) = ((MR_Box) (Var_155));
                }
              }
              else
              {
                MR_Word FGT_57;
                MR_Word Var_56;

                succeeded = ((((MR_tag((MR_Word) Reason_38)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_38, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_38, (MR_Integer) 1)));
                  FGT_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_38, (MR_Integer) 2)));
                  switch (FGT_57) {
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
                  GoalExpr_191 = GoalExpr0_6;
                  *STATE_VARIABLE_Info_103 = STATE_VARIABLE_Info_0_102;
                }
                else
                {
                  MR_Word InnerGoal_185;

                  ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(InnerGoal0_39, &InnerGoal_185, STATE_VARIABLE_Info_0_102, STATE_VARIABLE_Info_103);
                  {
                    GoalExpr_191 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), GoalExpr_191, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), GoalExpr_191, 1) = ((MR_Box) (Reason_38));
                    MR_hl_field(MR_mktag(3), GoalExpr_191, 2) = ((MR_Box) (InnerGoal_185));
                  }
                }
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_191));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_7));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ExistQVars_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));
              MR_Word Cond0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2)));
              MR_Word Then0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3)));
              MR_Word Else0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 4)));
              MR_Word Cond_62;
              MR_Word Then1_63;
              MR_Word Else1_64;
              MR_Word OptTrailUsage_65;
              MR_Word CondGoalInfo_67;
              MR_Word CondCodeModel_68;
              MR_Word STATE_VARIABLE_Info_107_107;
              MR_Word STATE_VARIABLE_Info_108_108;
              MR_Word STATE_VARIABLE_Info_109_109;
              MR_Word GoalExpr_212;
              MR_Word Var_223;
              MR_Word Var_224;
              MR_Word Var_225;
              MR_Word Var_226;
              MR_Word Var_66;
              MR_Word Var_110;

              ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(Cond0_59, &Cond_62, STATE_VARIABLE_Info_0_102, &STATE_VARIABLE_Info_107_107);
              ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(Then0_60, &Then1_63, STATE_VARIABLE_Info_107_107, &STATE_VARIABLE_Info_108_108);
              ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(Else0_61, &Else1_64, STATE_VARIABLE_Info_108_108, &STATE_VARIABLE_Info_109_109);
              Var_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, (MR_Integer) 0)));
              Var_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, (MR_Integer) 1)));
              Var_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, (MR_Integer) 2)));
              OptTrailUsage_65 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, (MR_Integer) 3)))) & (MR_Integer) 1);
              Var_226 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_109_109, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cond_62, (MR_Integer) 0)));
              CondGoalInfo_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cond_62, (MR_Integer) 1)));
              CondCodeModel_68 = hlds__code_model__goal_info_get_code_model_1_f_0(CondGoalInfo_67);
              succeeded = (OptTrailUsage_65 == (MR_Integer) 1);
              if (succeeded)
              {
                succeeded = (CondCodeModel_68 == (MR_Integer) 2);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  Var_110 = hlds__goal_form__goal_cannot_modify_trail_1_f_0(CondGoalInfo_67);
                  succeeded = (Var_110 == (MR_Integer) 1);
                }
              }
              if (succeeded)
              {
                {
                  GoalExpr_212 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_212, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(3), GoalExpr_212, 1) = ((MR_Box) (ExistQVars_58));
                  MR_hl_field(MR_mktag(3), GoalExpr_212, 2) = ((MR_Box) (Cond_62));
                  MR_hl_field(MR_mktag(3), GoalExpr_212, 3) = ((MR_Box) (Then1_63));
                  MR_hl_field(MR_mktag(3), GoalExpr_212, 4) = ((MR_Box) (Else1_64));
                }
                *STATE_VARIABLE_Info_103 = STATE_VARIABLE_Info_109_109;
              }
              else
              {
                MR_Word Then1GoalInfo_70;
                MR_Word Then_72;
                MR_Word Else1GoalInfo_75;
                MR_Word Else_76;
                MR_Word IfThenElse_77;
                MR_Word Var_123;
                MR_Word Var_125;
                MR_Word Var_126;
                MR_Word Var_127;
                MR_Word Var_129;
                MR_Word Var_131;
                MR_Word Var_132;
                MR_Word Context_200;
                MR_Word TicketVar_201;
                MR_Word StoreTicketGoal_202;
                MR_Word ResetTicketUndoGoal_204;
                MR_Word DiscardTicketGoal_205;
                MR_Word Var_69;
                MR_Word Var_74;

                ml_backend__add_trail_ops__new_ticket_var_3_p_0(&TicketVar_201, STATE_VARIABLE_Info_109_109, STATE_VARIABLE_Info_103);
                Context_200 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_7);
                ml_backend__add_trail_ops__gen_store_ticket_4_p_0(TicketVar_201, Context_200, &StoreTicketGoal_202, *STATE_VARIABLE_Info_103);
                Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), Then1_63, (MR_Integer) 0)));
                Then1GoalInfo_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Then1_63, (MR_Integer) 1)));
                switch (CondCodeModel_68) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    {
                      MR_Word PruneTicketGoal_73;
                      MR_Word Var_112;
                      MR_Word Var_114;
                      MR_Word Var_115;
                      MR_Word Var_116;
                      MR_Word ResetTicketCommitGoal_198;

                      ml_backend__add_trail_ops__gen_reset_ticket_commit_4_p_0(TicketVar_201, Context_200, &ResetTicketCommitGoal_198, *STATE_VARIABLE_Info_103);
                      ml_backend__add_trail_ops__gen_prune_ticket_3_p_0(Context_200, &PruneTicketGoal_73, *STATE_VARIABLE_Info_103);
                      {
                        Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (Then1_63));
                        MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (PruneTicketGoal_73));
                        MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_116));
                      }
                      {
                        Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (ResetTicketCommitGoal_198));
                        MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_115));
                      }
                      {
                        Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), Var_112, 1) = ((MR_Box) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), Var_112, 2) = ((MR_Box) (Var_114));
                      }
                      {
                        Then_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Then_72, 0) = ((MR_Box) (Var_112));
                        MR_hl_field(MR_mktag(0), Then_72, 1) = ((MR_Box) (Then1GoalInfo_70));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ResetTicketSolveGoal_71;
                      MR_Word Var_118;
                      MR_Word Var_120;
                      MR_Word Var_121;

                      ml_backend__add_trail_ops__gen_reset_ticket_solve_4_p_0(TicketVar_201, Context_200, &ResetTicketSolveGoal_71, *STATE_VARIABLE_Info_103);
                      {
                        Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Then1_63));
                        MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (ResetTicketSolveGoal_71));
                        MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_121));
                      }
                      {
                        Var_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), Var_118, 1) = ((MR_Box) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), Var_118, 2) = ((MR_Box) (Var_120));
                      }
                      {
                        Then_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Then_72, 0) = ((MR_Box) (Var_118));
                        MR_hl_field(MR_mktag(0), Then_72, 1) = ((MR_Box) (Then1GoalInfo_70));
                      }
                    }
                    break;
                }
                ml_backend__add_trail_ops__gen_reset_ticket_undo_4_p_0(TicketVar_201, Context_200, &ResetTicketUndoGoal_204, *STATE_VARIABLE_Info_103);
                ml_backend__add_trail_ops__gen_discard_ticket_3_p_0(Context_200, &DiscardTicketGoal_205, *STATE_VARIABLE_Info_103);
                Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), Else1_64, (MR_Integer) 0)));
                Else1GoalInfo_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), Else1_64, (MR_Integer) 1)));
                {
                  Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (Else1_64));
                  MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (DiscardTicketGoal_205));
                  MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_127));
                }
                {
                  Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (ResetTicketUndoGoal_204));
                  MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_126));
                }
                {
                  Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), Var_123, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), Var_123, 2) = ((MR_Box) (Var_125));
                }
                {
                  Else_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Else_76, 0) = ((MR_Box) (Var_123));
                  MR_hl_field(MR_mktag(0), Else_76, 1) = ((MR_Box) (Else1GoalInfo_75));
                }
                {
                  Var_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(3), Var_129, 1) = ((MR_Box) (ExistQVars_58));
                  MR_hl_field(MR_mktag(3), Var_129, 2) = ((MR_Box) (Cond_62));
                  MR_hl_field(MR_mktag(3), Var_129, 3) = ((MR_Box) (Then_72));
                  MR_hl_field(MR_mktag(3), Var_129, 4) = ((MR_Box) (Else_76));
                }
                {
                  IfThenElse_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), IfThenElse_77, 0) = ((MR_Box) (Var_129));
                  MR_hl_field(MR_mktag(0), IfThenElse_77, 1) = ((MR_Box) (GoalInfo0_7));
                }
                {
                  Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (IfThenElse_77));
                  MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (StoreTicketGoal_202));
                  MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (Var_132));
                }
                {
                  GoalExpr_212 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_212, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), GoalExpr_212, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), GoalExpr_212, 2) = ((MR_Box) (Var_131));
                }
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_212));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_7));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.add_trail_ops", (MR_String) "predicate \140ml_backend.add_trail_ops.goal_expr_add_trail_ops\'/5", (MR_String) "shorthand");
                return;
              }
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
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word Case0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Cases0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Case_10;
    MR_Word Cases_11;
    MR_Word MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 0)));
    MR_Word OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 1)));
    MR_Word Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 2)));
    MR_Word Goal_16;
    MR_Word STATE_VARIABLE_Info_19_19;
    MR_Word GoalExpr0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_15, (MR_Integer) 0)));
    MR_Word GoalInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_15, (MR_Integer) 1)));

    ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_p_0(GoalExpr0_26, GoalInfo_27, &Goal_16, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_19_19);
    {
      Case_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_10, 0) = ((MR_Box) (MainConsId_13));
      MR_hl_field(MR_mktag(0), Case_10, 1) = ((MR_Box) (OtherConsIds_14));
      MR_hl_field(MR_mktag(0), Case_10, 2) = ((MR_Box) (Goal_16));
    }
    ml_backend__add_trail_ops__cases_add_trail_ops_4_p_0(Cases0_9, &Cases_11, STATE_VARIABLE_Info_19_19, STATE_VARIABLE_Info_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_11));
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
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
  }
  else
  {
    MR_Word TypeCtorInfo_52_52;
    MR_Word Goal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Goal_16;
    MR_Word Goals_17;
    MR_Word GoalInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_14, (MR_Integer) 1)));
    MR_Word Context_24;
    MR_Word UndoList_25;
    MR_Word Goal1_31;
    MR_Word PruneList_32;
    MR_Word GoalInfo1_36;
    MR_Word STATE_VARIABLE_Info_42_42;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_14, (MR_Integer) 0)));
    MR_Word Var_35;

    Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_23);
    switch (IsFirstBranch_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        UndoList_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word ResetTicketUndoGoal_26;
          MR_Word UndoList0_27;

          ml_backend__add_trail_ops__gen_reset_ticket_undo_4_p_0(TicketVar_5, Context_24, &ResetTicketUndoGoal_26, STATE_VARIABLE_Info_0_6);
          {
            UndoList0_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), UndoList0_27, 0) = ((MR_Box) (ResetTicketUndoGoal_26));
            MR_hl_field(MR_mktag(1), UndoList0_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          if ((Goals0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word DiscardTicketGoal_28;
            MR_Word Var_40;
            MR_Word GenerateInline_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
            MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
            MR_Word Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
            MR_Word Var_72 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) & (MR_Integer) 1);

            switch (GenerateInline_56) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_67;
                  MR_Word Var_68;
                  MR_Word Var_89;
                  MR_Word Var_73;
                  MR_Word Var_74;
                  MR_Word Var_75;
                  MR_Word Var_76;

                  Var_67 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                  Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
                  Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
                  Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
                  Var_75 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) & (MR_Integer) 1);
                  Var_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  Var_89 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                  hlds__goal_util__generate_simple_call_12_p_0(Var_89, (MR_String) "discard_ticket", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_67, Var_68, Context_24, &DiscardTicketGoal_28);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_61;
                  MR_Word Var_62;
                  MR_Word Var_77;
                  MR_Word Var_78;
                  MR_Word Var_79;
                  MR_Word Var_80;

                  Var_61 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                  Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
                  Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
                  Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
                  Var_79 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) & (MR_Integer) 1);
                  Var_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "discard_ticket", (MR_Integer) 2, Var_61, Var_62, Context_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_String) "MR_discard_ticket();", &DiscardTicketGoal_28);
                }
                break;
            }
            {
              Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (DiscardTicketGoal_28));
              MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            UndoList_25 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, UndoList0_27, Var_40);
          }
          else
            UndoList_25 = UndoList0_27;
        }
        break;
    }
    ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(Goal0_14, &Goal1_31, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_42_42);
    switch (CodeModel_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word ResetTicketCommitGoal_33;
          MR_Word PruneTicketGoal_34;
          MR_Word Var_43;

          ml_backend__add_trail_ops__gen_reset_ticket_commit_4_p_0(TicketVar_5, Context_24, &ResetTicketCommitGoal_33, STATE_VARIABLE_Info_42_42);
          ml_backend__add_trail_ops__gen_prune_ticket_3_p_0(Context_24, &PruneTicketGoal_34, STATE_VARIABLE_Info_42_42);
          {
            Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (PruneTicketGoal_34));
            MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            PruneList_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), PruneList_32, 0) = ((MR_Box) (ResetTicketCommitGoal_33));
            MR_hl_field(MR_mktag(1), PruneList_32, 1) = ((MR_Box) (Var_43));
          }
        }
        break;
      case (MR_Integer) 2:
        PruneList_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal1_31, (MR_Integer) 0)));
    GoalInfo1_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal1_31, (MR_Integer) 1)));
    TypeCtorInfo_52_52 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Goal1_31));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_46 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_52_52, Var_47, PruneList_32);
    Var_45 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_52_52, UndoList_25, Var_46);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_45, GoalInfo1_36, &Goal_16);
    ml_backend__add_trail_ops__disj_add_trail_ops_7_p_0(Goals0_15, &Goals_17, (MR_Integer) 1, CodeModel_4, TicketVar_5, STATE_VARIABLE_Info_42_42, STATE_VARIABLE_Info_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_17));
    }
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__trail_generate_call_8_p_0(
  MR_String PredName_9,
  MR_Word Detism_10,
  MR_Word Purity_11,
  MR_Word Args_12,
  MR_Word InstMapDelta_13,
  MR_Word ModuleInfo_14,
  MR_Word Context_15,
  MR_Word * CallGoal_16)
{
  {
    MR_Word Var_17;

    Var_17 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    hlds__goal_util__generate_simple_call_12_p_0(Var_17, PredName_9, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Detism_10, Purity_11, Args_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), InstMapDelta_13, ModuleInfo_14, Context_15, CallGoal_16);
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__new_ticket_counter_var_3_p_0(
  MR_Word * Var_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9;
    MR_Word VarSet0_17;
    MR_Word VarTypes0_18;
    MR_Word VarSet_19;
    MR_Word VarTypes_20;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_31;
    MR_Word Var_32;

    Var_9 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    VarSet0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    VarTypes0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    Var_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) & (MR_Integer) 1);
    Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "SavedTicketCounter", Var_4, VarSet0_17, &VarSet_19);
    hlds__vartypes__add_var_type_4_p_0(*Var_4, Var_9, VarTypes0_18, &VarTypes_20);
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    Var_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) & (MR_Integer) 1);
    Var_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarSet_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarTypes_20));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((Var_34 | ((Var_35 << (MR_Integer) 1)))));
    }
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__new_ticket_var_3_p_0(
  MR_Word * Var_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9;
    MR_Word VarSet0_17;
    MR_Word VarTypes0_18;
    MR_Word VarSet_19;
    MR_Word VarTypes_20;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_31;
    MR_Word Var_32;

    Var_9 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    VarSet0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    VarTypes0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    Var_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) & (MR_Integer) 1);
    Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "TrailTicket", Var_4, VarSet0_17, &VarSet_19);
    hlds__vartypes__add_var_type_4_p_0(*Var_4, Var_9, VarTypes0_18, &VarTypes_20);
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    Var_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) & (MR_Integer) 1);
    Var_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarSet_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarTypes_20));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((Var_34 | ((Var_35 << (MR_Integer) 1)))));
    }
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__gen_prune_tickets_to_4_p_0(
  MR_Word SavedTicketCounterVar_5,
  MR_Word Context_6,
  MR_Word * PruneTicketsToGoal_7,
  MR_Word Info_8)
{
  {
    MR_Word GenerateInline_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
    MR_Word Var_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);

    switch (GenerateInline_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_27;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_51;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_38;

          {
            Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (SavedTicketCounterVar_5));
            MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          Var_28 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
          Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
          Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
          Var_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
          Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          Var_51 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          hlds__goal_util__generate_simple_call_12_p_0(Var_51, (MR_String) "prune_tickets_to", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, Var_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_28, Var_29, Context_6, PruneTicketsToGoal_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Args_10;
          MR_Word Var_12;
          MR_Word Var_13;
          MR_Word Var_14;
          MR_Word Var_16;
          MR_Word Var_17;
          MR_Word Var_22;
          MR_Word Var_23;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_42;

          Var_16 = parse_tree__prog_mode__in_mode_0_f_0();
          {
            Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) ((MR_String) "TicketCounter"));
            MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (Var_16));
          }
          {
            Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_14));
          }
          Var_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          {
            Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (SavedTicketCounterVar_5));
            MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (Var_13));
            MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (Var_17));
            MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            Args_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Args_10, 0) = ((MR_Box) (Var_12));
            MR_hl_field(MR_mktag(1), Args_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          Var_22 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
          Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
          Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
          Var_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
          Var_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "prune_tickets_to", (MR_Integer) 2, Var_22, Var_23, Context_6, Args_10, (MR_String) "MR_prune_tickets_to(TicketCounter);", PruneTicketsToGoal_7);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__gen_mark_ticket_stack_4_p_0(
  MR_Word SavedTicketCounterVar_5,
  MR_Word Context_6,
  MR_Word * MarkTicketStackGoal_7,
  MR_Word Info_8)
{
  {
    MR_Word GenerateInline_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
    MR_Word Var_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);

    switch (GenerateInline_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_27;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_51;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_38;

          {
            Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (SavedTicketCounterVar_5));
            MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          Var_28 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
          Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
          Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
          Var_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
          Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          Var_51 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          hlds__goal_util__generate_simple_call_12_p_0(Var_51, (MR_String) "mark_ticket_stack", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, Var_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_28, Var_29, Context_6, MarkTicketStackGoal_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Args_10;
          MR_Word Var_12;
          MR_Word Var_13;
          MR_Word Var_14;
          MR_Word Var_16;
          MR_Word Var_17;
          MR_Word Var_22;
          MR_Word Var_23;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_42;

          Var_16 = parse_tree__prog_mode__out_mode_0_f_0();
          {
            Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) ((MR_String) "TicketCounter"));
            MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (Var_16));
          }
          {
            Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_14));
          }
          Var_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          {
            Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (SavedTicketCounterVar_5));
            MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (Var_13));
            MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (Var_17));
            MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            Args_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Args_10, 0) = ((MR_Box) (Var_12));
            MR_hl_field(MR_mktag(1), Args_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          Var_22 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
          Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
          Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
          Var_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
          Var_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "mark_ticket_stack", (MR_Integer) 2, Var_22, Var_23, Context_6, Args_10, (MR_String) "MR_mark_ticket_stack(TicketCounter);", MarkTicketStackGoal_7);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__gen_discard_ticket_3_p_0(
  MR_Word Context_4,
  MR_Word * DiscardTicketGoal_5,
  MR_Word Info_6)
{
  {
    MR_Word GenerateInline_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2)));
    MR_Word Var_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)))) & (MR_Integer) 1);

    switch (GenerateInline_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_18;
          MR_Word Var_19;
          MR_Word Var_40;
          MR_Word Var_24;
          MR_Word Var_25;
          MR_Word Var_26;
          MR_Word Var_27;

          Var_18 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0)));
          Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
          Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2)));
          Var_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)))) & (MR_Integer) 1);
          Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          Var_40 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          hlds__goal_util__generate_simple_call_12_p_0(Var_40, (MR_String) "discard_ticket", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_18, Var_19, Context_4, DiscardTicketGoal_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_12;
          MR_Word Var_13;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word Var_31;

          Var_12 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0)));
          Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
          Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2)));
          Var_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)))) & (MR_Integer) 1);
          Var_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "discard_ticket", (MR_Integer) 2, Var_12, Var_13, Context_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_String) "MR_discard_ticket();", DiscardTicketGoal_5);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__gen_reset_ticket_solve_4_p_0(
  MR_Word TicketVar_5,
  MR_Word Context_6,
  MR_Word * ResetTicketGoal_7,
  MR_Word Info_8)
{
  {
    MR_Word GenerateInline_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
    MR_Word Var_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);

    switch (GenerateInline_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_27;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_51;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_38;

          {
            Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (TicketVar_5));
            MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          Var_28 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
          Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
          Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
          Var_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
          Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          Var_51 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          hlds__goal_util__generate_simple_call_12_p_0(Var_51, (MR_String) "reset_ticket_solve", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, Var_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_28, Var_29, Context_6, ResetTicketGoal_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Args_10;
          MR_Word Var_12;
          MR_Word Var_13;
          MR_Word Var_14;
          MR_Word Var_16;
          MR_Word Var_17;
          MR_Word Var_22;
          MR_Word Var_23;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_42;

          Var_16 = parse_tree__prog_mode__in_mode_0_f_0();
          {
            Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) ((MR_String) "Ticket"));
            MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (Var_16));
          }
          {
            Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_14));
          }
          Var_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          {
            Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (TicketVar_5));
            MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (Var_13));
            MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (Var_17));
            MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            Args_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Args_10, 0) = ((MR_Box) (Var_12));
            MR_hl_field(MR_mktag(1), Args_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          Var_22 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
          Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
          Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
          Var_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
          Var_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "reset_ticket_solve", (MR_Integer) 2, Var_22, Var_23, Context_6, Args_10, (MR_String) "MR_reset_ticket(Ticket, MR_solve);", ResetTicketGoal_7);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__gen_store_ticket_4_p_0(
  MR_Word TicketVar_5,
  MR_Word Context_6,
  MR_Word * SaveTicketGoal_7,
  MR_Word Info_8)
{
  {
    MR_Word GenerateInline_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
    MR_Word Var_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);

    switch (GenerateInline_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_27;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_51;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_38;

          {
            Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (TicketVar_5));
            MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          Var_28 = hlds__instmap__instmap_delta_bind_var_1_f_0(TicketVar_5);
          Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
          Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
          Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
          Var_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
          Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          Var_51 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          hlds__goal_util__generate_simple_call_12_p_0(Var_51, (MR_String) "store_ticket", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, Var_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_28, Var_29, Context_6, SaveTicketGoal_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Args_10;
          MR_Word Var_12;
          MR_Word Var_13;
          MR_Word Var_14;
          MR_Word Var_16;
          MR_Word Var_17;
          MR_Word Var_22;
          MR_Word Var_23;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_42;

          Var_16 = parse_tree__prog_mode__out_mode_0_f_0();
          {
            Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) ((MR_String) "Ticket"));
            MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (Var_16));
          }
          {
            Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_14));
          }
          Var_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          {
            Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (TicketVar_5));
            MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (Var_13));
            MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (Var_17));
            MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            Args_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Args_10, 0) = ((MR_Box) (Var_12));
            MR_hl_field(MR_mktag(1), Args_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          Var_22 = hlds__instmap__instmap_delta_bind_var_1_f_0(TicketVar_5);
          Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
          Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
          Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
          Var_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
          Var_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "store_ticket", (MR_Integer) 2, Var_22, Var_23, Context_6, Args_10, (MR_String) "MR_store_ticket(Ticket);", SaveTicketGoal_7);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__gen_prune_ticket_3_p_0(
  MR_Word Context_4,
  MR_Word * PruneTicketGoal_5,
  MR_Word Info_6)
{
  {
    MR_Word GenerateInline_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2)));
    MR_Word Var_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)))) & (MR_Integer) 1);

    switch (GenerateInline_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_18;
          MR_Word Var_19;
          MR_Word Var_40;
          MR_Word Var_24;
          MR_Word Var_25;
          MR_Word Var_26;
          MR_Word Var_27;

          Var_18 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0)));
          Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
          Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2)));
          Var_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)))) & (MR_Integer) 1);
          Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          Var_40 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          hlds__goal_util__generate_simple_call_12_p_0(Var_40, (MR_String) "prune_ticket", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_18, Var_19, Context_4, PruneTicketGoal_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_12;
          MR_Word Var_13;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word Var_31;

          Var_12 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0)));
          Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
          Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2)));
          Var_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)))) & (MR_Integer) 1);
          Var_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "prune_ticket", (MR_Integer) 2, Var_12, Var_13, Context_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_String) "MR_prune_ticket();", PruneTicketGoal_5);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__gen_reset_ticket_commit_4_p_0(
  MR_Word TicketVar_5,
  MR_Word Context_6,
  MR_Word * ResetTicketGoal_7,
  MR_Word Info_8)
{
  {
    MR_Word GenerateInline_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
    MR_Word Var_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);

    switch (GenerateInline_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_27;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_51;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_38;

          {
            Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (TicketVar_5));
            MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          Var_28 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
          Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
          Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
          Var_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
          Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          Var_51 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          hlds__goal_util__generate_simple_call_12_p_0(Var_51, (MR_String) "reset_ticket_commit", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, Var_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_28, Var_29, Context_6, ResetTicketGoal_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Args_10;
          MR_Word Var_12;
          MR_Word Var_13;
          MR_Word Var_14;
          MR_Word Var_16;
          MR_Word Var_17;
          MR_Word Var_22;
          MR_Word Var_23;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_42;

          Var_16 = parse_tree__prog_mode__in_mode_0_f_0();
          {
            Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) ((MR_String) "Ticket"));
            MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (Var_16));
          }
          {
            Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_14));
          }
          Var_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          {
            Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (TicketVar_5));
            MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (Var_13));
            MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (Var_17));
            MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            Args_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Args_10, 0) = ((MR_Box) (Var_12));
            MR_hl_field(MR_mktag(1), Args_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          Var_22 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
          Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
          Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
          Var_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
          Var_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "reset_ticket_commit", (MR_Integer) 2, Var_22, Var_23, Context_6, Args_10, (MR_String) "MR_reset_ticket(Ticket, MR_commit);", ResetTicketGoal_7);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__gen_reset_ticket_undo_4_p_0(
  MR_Word TicketVar_5,
  MR_Word Context_6,
  MR_Word * ResetTicketGoal_7,
  MR_Word Info_8)
{
  {
    MR_Word GenerateInline_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
    MR_Word Var_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);

    switch (GenerateInline_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_27;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_51;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_38;

          {
            Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (TicketVar_5));
            MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          Var_28 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
          Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
          Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
          Var_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
          Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          Var_51 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          hlds__goal_util__generate_simple_call_12_p_0(Var_51, (MR_String) "reset_ticket_undo", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, Var_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_28, Var_29, Context_6, ResetTicketGoal_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Args_10;
          MR_Word Var_12;
          MR_Word Var_13;
          MR_Word Var_14;
          MR_Word Var_16;
          MR_Word Var_17;
          MR_Word Var_22;
          MR_Word Var_23;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_42;

          Var_16 = parse_tree__prog_mode__in_mode_0_f_0();
          {
            Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) ((MR_String) "Ticket"));
            MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (Var_16));
          }
          {
            Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_14));
          }
          Var_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          {
            Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (TicketVar_5));
            MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (Var_13));
            MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (Var_17));
            MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            Args_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Args_10, 0) = ((MR_Box) (Var_12));
            MR_hl_field(MR_mktag(1), Args_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          Var_22 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
          Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
          Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
          Var_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
          Var_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "reset_ticket_undo", (MR_Integer) 2, Var_22, Var_23, Context_6, Args_10, (MR_String) "MR_reset_ticket(Ticket, MR_undo);", ResetTicketGoal_7);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0(
  MR_String PredName_9,
  MR_Word Purity_10,
  MR_Word InstMapDelta_11,
  MR_Word ModuleInfo_12,
  MR_Word Context_13,
  MR_Word Args_14,
  MR_String ForeignCode_15,
  MR_Word * ForeignProcGoal_16)
{
  {
    MR_Word PrivateBuiltinModule_17;
    MR_Word FinalForeignProcAttrs_20;
    MR_Word STATE_VARIABLE_ForeignProcAttrs_23_23;
    MR_Word STATE_VARIABLE_ForeignProcAttrs_26_26;

    PrivateBuiltinModule_17 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    STATE_VARIABLE_ForeignProcAttrs_23_23 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
    parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, STATE_VARIABLE_ForeignProcAttrs_23_23, &STATE_VARIABLE_ForeignProcAttrs_26_26);
    parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_ForeignProcAttrs_26_26, &FinalForeignProcAttrs_20);
    hlds__goal_util__generate_foreign_proc_16_p_0(PrivateBuiltinModule_17, PredName_9, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, Purity_10, FinalForeignProcAttrs_20, Args_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ForeignCode_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), InstMapDelta_11, ModuleInfo_12, Context_13, ForeignProcGoal_16);
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__conj_add_trail_ops_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Goal_6;
    MR_Word conv0_STATE_VARIABLE_Info_11;

    ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(((MR_Word) wrapper_arg_1), &conv1_Goal_6, ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_Info_11);
    *wrapper_arg_2 = ((MR_Box) (conv1_Goal_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_11));
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__conj_add_trail_ops_4_p_0(
  MR_Word Goals0_5,
  MR_Word * Goals_6,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word TypeCtorInfo_16_16 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    MR_Box conv2_STATE_VARIABLE_Info_9;

    mercury__list__map_foldl_5_p_0(TypeCtorInfo_16_16, TypeCtorInfo_16_16, (MR_Word) &ml_backend__add_trail_ops__ml_backend__add_trail_ops__type_ctor_info_trail_ops_info_0, (MR_Word) &ml_backend__add_trail_ops_scalar_common_3[0], Goals0_5, Goals_6, ((MR_Box) (STATE_VARIABLE_Info_0_8)), &conv2_STATE_VARIABLE_Info_9);
    *STATE_VARIABLE_Info_9 = ((MR_Word) conv2_STATE_VARIABLE_Info_9);
  }
}

static MR_bool MR_CALL 
ml_backend__add_trail_ops____Unify____trail_ops_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__add_trail_ops____Unify____trail_ops_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__add_trail_ops____Compare____trail_ops_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__add_trail_ops____Compare____trail_ops_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
