/*
** Automatically generated from `add_trail_ops.m'
** by the Mercury compiler,
** version rotd-2017-02-22
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


/* :- module ml_backend.add_trail_ops. */
/* :- implementation. */

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
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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

static MR_bool MR_CALL 
ml_backend__add_trail_ops____Unify____trail_ops_info_0_0_10001(
  MR_Box ml_backend__add_trail_ops__wrapper_arg_1,
  MR_Box ml_backend__add_trail_ops__wrapper_arg_2);

static void MR_CALL 
ml_backend__add_trail_ops____Compare____trail_ops_info_0_0_10001(
  MR_Box * ml_backend__add_trail_ops__wrapper_arg_1,
  MR_Box ml_backend__add_trail_ops__wrapper_arg_2,
  MR_Box ml_backend__add_trail_ops__wrapper_arg_3);

static void MR_CALL 
ml_backend__add_trail_ops____Compare____trail_ops_info_0_0(
  MR_Word * ml_backend__add_trail_ops__HeadVar__1_1,
  MR_Word ml_backend__add_trail_ops__HeadVar__2_2,
  MR_Word ml_backend__add_trail_ops__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__add_trail_ops____Unify____trail_ops_info_0_0(
  MR_Word ml_backend__add_trail_ops__HeadVar__1_1,
  MR_Word ml_backend__add_trail_ops__HeadVar__2_2);

static void MR_CALL 
ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0(
  MR_String ml_backend__add_trail_ops__PredName_9,
  MR_Word ml_backend__add_trail_ops__Purity_10,
  MR_Word ml_backend__add_trail_ops__InstMapDelta_11,
  MR_Word ml_backend__add_trail_ops__ModuleInfo_12,
  MR_Word ml_backend__add_trail_ops__Context_13,
  MR_Word ml_backend__add_trail_ops__Args_14,
  MR_String ml_backend__add_trail_ops__ForeignCode_15,
  MR_Word * ml_backend__add_trail_ops__ForeignProcGoal_16);

static void MR_CALL 
ml_backend__add_trail_ops__trail_generate_call_8_p_0(
  MR_String ml_backend__add_trail_ops__PredName_9,
  MR_Word ml_backend__add_trail_ops__Detism_10,
  MR_Word ml_backend__add_trail_ops__Purity_11,
  MR_Word ml_backend__add_trail_ops__Args_12,
  MR_Word ml_backend__add_trail_ops__InstMapDelta_13,
  MR_Word ml_backend__add_trail_ops__ModuleInfo_14,
  MR_Word ml_backend__add_trail_ops__Context_15,
  MR_Word * ml_backend__add_trail_ops__CallGoal_16);

static void MR_CALL 
ml_backend__add_trail_ops__new_ticket_counter_var_3_p_0(
  MR_Word * ml_backend__add_trail_ops__Var_4,
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6,
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_7);

static void MR_CALL 
ml_backend__add_trail_ops__new_ticket_var_3_p_0(
  MR_Word * ml_backend__add_trail_ops__Var_4,
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6,
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_7);

static void MR_CALL 
ml_backend__add_trail_ops__gen_prune_tickets_to_4_p_0(
  MR_Word ml_backend__add_trail_ops__SavedTicketCounterVar_5,
  MR_Word ml_backend__add_trail_ops__Context_6,
  MR_Word * ml_backend__add_trail_ops__PruneTicketsToGoal_7,
  MR_Word ml_backend__add_trail_ops__Info_8);

static void MR_CALL 
ml_backend__add_trail_ops__gen_mark_ticket_stack_4_p_0(
  MR_Word ml_backend__add_trail_ops__SavedTicketCounterVar_5,
  MR_Word ml_backend__add_trail_ops__Context_6,
  MR_Word * ml_backend__add_trail_ops__MarkTicketStackGoal_7,
  MR_Word ml_backend__add_trail_ops__Info_8);

static void MR_CALL 
ml_backend__add_trail_ops__gen_discard_ticket_3_p_0(
  MR_Word ml_backend__add_trail_ops__Context_4,
  MR_Word * ml_backend__add_trail_ops__DiscardTicketGoal_5,
  MR_Word ml_backend__add_trail_ops__Info_6);

static void MR_CALL 
ml_backend__add_trail_ops__gen_prune_ticket_3_p_0(
  MR_Word ml_backend__add_trail_ops__Context_4,
  MR_Word * ml_backend__add_trail_ops__PruneTicketGoal_5,
  MR_Word ml_backend__add_trail_ops__Info_6);

static void MR_CALL 
ml_backend__add_trail_ops__gen_reset_ticket_commit_4_p_0(
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
  MR_Word ml_backend__add_trail_ops__Context_6,
  MR_Word * ml_backend__add_trail_ops__ResetTicketGoal_7,
  MR_Word ml_backend__add_trail_ops__Info_8);

static void MR_CALL 
ml_backend__add_trail_ops__gen_reset_ticket_solve_4_p_0(
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
  MR_Word ml_backend__add_trail_ops__Context_6,
  MR_Word * ml_backend__add_trail_ops__ResetTicketGoal_7,
  MR_Word ml_backend__add_trail_ops__Info_8);

static void MR_CALL 
ml_backend__add_trail_ops__gen_reset_ticket_undo_4_p_0(
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
  MR_Word ml_backend__add_trail_ops__Context_6,
  MR_Word * ml_backend__add_trail_ops__ResetTicketGoal_7,
  MR_Word ml_backend__add_trail_ops__Info_8);

static void MR_CALL 
ml_backend__add_trail_ops__gen_store_ticket_4_p_0(
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
  MR_Word ml_backend__add_trail_ops__Context_6,
  MR_Word * ml_backend__add_trail_ops__SaveTicketGoal_7,
  MR_Word ml_backend__add_trail_ops__Info_8);

static void MR_CALL 
ml_backend__add_trail_ops__cases_add_trail_ops_4_p_0(
  MR_Word ml_backend__add_trail_ops__HeadVar__1_1,
  MR_Word * ml_backend__add_trail_ops__HeadVar__2_2,
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_3,
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_4);

static void MR_CALL 
ml_backend__add_trail_ops__disj_add_trail_ops_7_p_0(
  MR_Word ml_backend__add_trail_ops__HeadVar__1_1,
  MR_Word * ml_backend__add_trail_ops__HeadVar__2_2,
  MR_Word ml_backend__add_trail_ops__IsFirstBranch_3,
  MR_Word ml_backend__add_trail_ops__CodeModel_4,
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6,
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_7);

static void MR_CALL 
ml_backend__add_trail_ops__conj_add_trail_ops_4_p_0_1(
  MR_Box ml_backend__add_trail_ops__closure_arg,
  MR_Box ml_backend__add_trail_ops__wrapper_arg_1,
  MR_Box * ml_backend__add_trail_ops__wrapper_arg_2,
  MR_Box ml_backend__add_trail_ops__wrapper_arg_3,
  MR_Box * ml_backend__add_trail_ops__wrapper_arg_4);

static void MR_CALL 
ml_backend__add_trail_ops__conj_add_trail_ops_4_p_0(
  MR_Word ml_backend__add_trail_ops__Goals0_5,
  MR_Word * ml_backend__add_trail_ops__Goals_6,
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_8,
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_9);

static void MR_CALL 
ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_p_0(
  MR_Word ml_backend__add_trail_ops__GoalExpr0_6,
  MR_Word ml_backend__add_trail_ops__GoalInfo0_7,
  MR_Word * ml_backend__add_trail_ops__Goal_8,
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102,
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);

static void MR_CALL 
ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(
  MR_Word ml_backend__add_trail_ops__Goal0_5,
  MR_Word * ml_backend__add_trail_ops__Goal_6,
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_10,
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_11);


static /* final */ const MR_Box ml_backend__add_trail_ops_scalar_common_1[2][2];

static /* final */ const MR_Box ml_backend__add_trail_ops_scalar_common_2[2][3];

static /* final */ const MR_Box ml_backend__add_trail_ops_scalar_common_3[1][7];




static /* final */ const MR_Box ml_backend__add_trail_ops_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ml_backend__add_trail_ops_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__add_trail_ops_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__add_trail_ops_scalar_common_3[0])),
    ((MR_Box) (ml_backend__add_trail_ops__conj_add_trail_ops_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__add_trail_ops_scalar_common_3[1][7] = {
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__add_trail_ops__ml_backend__add_trail_ops__field_types_trail_ops_info_0_0,
  ml_backend__add_trail_ops__ml_backend__add_trail_ops__field_names_trail_ops_info_0_0,
  ml_backend__add_trail_ops__ml_backend__add_trail_ops__field_locns_trail_ops_info_0_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_stag_ordered_trail_ops_info_0_0[1] = {
  &ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_functor_desc_trail_ops_info_0_0
};

static const MR_DuPtagLayout ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_ptag_ordered_trail_ops_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

static MR_bool MR_CALL 
ml_backend__add_trail_ops____Unify____trail_ops_info_0_0_10001(
  MR_Box ml_backend__add_trail_ops__wrapper_arg_1,
  MR_Box ml_backend__add_trail_ops__wrapper_arg_2)
{
  {
    MR_bool ml_backend__add_trail_ops__succeeded;

    {
      ml_backend__add_trail_ops__succeeded = ml_backend__add_trail_ops____Unify____trail_ops_info_0_0(((MR_Word) ml_backend__add_trail_ops__wrapper_arg_1), ((MR_Word) ml_backend__add_trail_ops__wrapper_arg_2));
    }
    return ml_backend__add_trail_ops__succeeded;
  }
}

static void MR_CALL 
ml_backend__add_trail_ops____Compare____trail_ops_info_0_0_10001(
  MR_Box * ml_backend__add_trail_ops__wrapper_arg_1,
  MR_Box ml_backend__add_trail_ops__wrapper_arg_2,
  MR_Box ml_backend__add_trail_ops__wrapper_arg_3)
{
  {
    MR_Word ml_backend__add_trail_ops__conv0_HeadVar__1_1;

    {
      ml_backend__add_trail_ops____Compare____trail_ops_info_0_0(&ml_backend__add_trail_ops__conv0_HeadVar__1_1, ((MR_Word) ml_backend__add_trail_ops__wrapper_arg_2), ((MR_Word) ml_backend__add_trail_ops__wrapper_arg_3));
    }
    *ml_backend__add_trail_ops__wrapper_arg_1 = ((MR_Box) (ml_backend__add_trail_ops__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
ml_backend__add_trail_ops____Compare____trail_ops_info_0_0(
  MR_Word * ml_backend__add_trail_ops__HeadVar__1_1,
  MR_Word ml_backend__add_trail_ops__HeadVar__2_2,
  MR_Word ml_backend__add_trail_ops__HeadVar__3_3)
{
  {
    MR_bool ml_backend__add_trail_ops__succeeded;
    MR_Integer ml_backend__add_trail_ops__CastX_18 = (MR_Integer) ml_backend__add_trail_ops__HeadVar__2_2;
    MR_Integer ml_backend__add_trail_ops__CastY_19 = (MR_Integer) ml_backend__add_trail_ops__HeadVar__3_3;

    ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__CastX_18 == ml_backend__add_trail_ops__CastY_19);
    if (ml_backend__add_trail_ops__succeeded)
      *ml_backend__add_trail_ops__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ml_backend__add_trail_ops__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__add_trail_ops__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__add_trail_ops__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__add_trail_ops__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 1);
        MR_Word ml_backend__add_trail_ops__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ml_backend__add_trail_ops__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__add_trail_ops__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__add_trail_ops__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ml_backend__add_trail_ops__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__3_3, (MR_Integer) 3)))) & (MR_Integer) 1);
        MR_Word ml_backend__add_trail_ops__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ml_backend__add_trail_ops__V_14_14;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__add_trail_ops_scalar_common_1[0], &ml_backend__add_trail_ops__V_14_14, ((MR_Box) (ml_backend__add_trail_ops__V_4_4)), ((MR_Box) (ml_backend__add_trail_ops__V_9_9)));
        }
        ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__V_14_14 == (MR_Integer) 0);
        ml_backend__add_trail_ops__succeeded = !(ml_backend__add_trail_ops__succeeded);
        if (ml_backend__add_trail_ops__succeeded)
          *ml_backend__add_trail_ops__HeadVar__1_1 = ml_backend__add_trail_ops__V_14_14;
        else
          {
            MR_Word ml_backend__add_trail_ops__V_15_15;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__add_trail_ops_scalar_common_2[0], &ml_backend__add_trail_ops__V_15_15, ((MR_Box) (ml_backend__add_trail_ops__V_5_5)), ((MR_Box) (ml_backend__add_trail_ops__V_10_10)));
            }
            ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__V_15_15 == (MR_Integer) 0);
            ml_backend__add_trail_ops__succeeded = !(ml_backend__add_trail_ops__succeeded);
            if (ml_backend__add_trail_ops__succeeded)
              *ml_backend__add_trail_ops__HeadVar__1_1 = ml_backend__add_trail_ops__V_15_15;
            else
              {
                MR_Word ml_backend__add_trail_ops__V_16_16;

                {
                  hlds__hlds_module____Compare____module_info_0_0(&ml_backend__add_trail_ops__V_16_16, ml_backend__add_trail_ops__V_6_6, ml_backend__add_trail_ops__V_11_11);
                }
                ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__V_16_16 == (MR_Integer) 0);
                ml_backend__add_trail_ops__succeeded = !(ml_backend__add_trail_ops__succeeded);
                if (ml_backend__add_trail_ops__succeeded)
                  *ml_backend__add_trail_ops__HeadVar__1_1 = ml_backend__add_trail_ops__V_16_16;
                else
                  {
                    MR_Word ml_backend__add_trail_ops__V_17_17;
                    MR_Integer ml_backend__add_trail_ops__V_25_25 = (MR_Integer) ml_backend__add_trail_ops__V_7_7;
                    MR_Integer ml_backend__add_trail_ops__V_26_26 = (MR_Integer) ml_backend__add_trail_ops__V_12_12;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__add_trail_ops__V_17_17, ml_backend__add_trail_ops__V_25_25, ml_backend__add_trail_ops__V_26_26);
                    }
                    ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__V_17_17 == (MR_Integer) 0);
                    ml_backend__add_trail_ops__succeeded = !(ml_backend__add_trail_ops__succeeded);
                    if (ml_backend__add_trail_ops__succeeded)
                      *ml_backend__add_trail_ops__HeadVar__1_1 = ml_backend__add_trail_ops__V_17_17;
                    else
                      {
                        MR_Integer ml_backend__add_trail_ops__V_27_27 = (MR_Integer) ml_backend__add_trail_ops__V_8_8;
                        MR_Integer ml_backend__add_trail_ops__V_28_28 = (MR_Integer) ml_backend__add_trail_ops__V_13_13;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__add_trail_ops__HeadVar__1_1, ml_backend__add_trail_ops__V_27_27, ml_backend__add_trail_ops__V_28_28);
                        }
                      }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
ml_backend__add_trail_ops____Unify____trail_ops_info_0_0(
  MR_Word ml_backend__add_trail_ops__HeadVar__1_1,
  MR_Word ml_backend__add_trail_ops__HeadVar__2_2)
{
  {
    MR_bool ml_backend__add_trail_ops__succeeded;
    MR_Integer ml_backend__add_trail_ops__CastX_13 = (MR_Integer) ml_backend__add_trail_ops__HeadVar__1_1;
    MR_Integer ml_backend__add_trail_ops__CastY_14 = (MR_Integer) ml_backend__add_trail_ops__HeadVar__2_2;

    ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__CastX_13 == ml_backend__add_trail_ops__CastY_14);
    if (ml_backend__add_trail_ops__succeeded)
      ml_backend__add_trail_ops__succeeded = MR_TRUE;
    else
      {
        MR_Word ml_backend__add_trail_ops__TypeInfo_16_16;
        MR_Word ml_backend__add_trail_ops__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__add_trail_ops__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__add_trail_ops__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ml_backend__add_trail_ops__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__1_1, (MR_Integer) 3)))) & (MR_Integer) 1);
        MR_Word ml_backend__add_trail_ops__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word ml_backend__add_trail_ops__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__add_trail_ops__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__add_trail_ops__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__add_trail_ops__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 1);
        MR_Word ml_backend__add_trail_ops__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

        {
          ml_backend__add_trail_ops__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__add_trail_ops_scalar_common_1[0], ((MR_Box) (ml_backend__add_trail_ops__V_3_3)), ((MR_Box) (ml_backend__add_trail_ops__V_8_8)));
        }
        if (ml_backend__add_trail_ops__succeeded)
          {
            ml_backend__add_trail_ops__TypeInfo_16_16 = (MR_Word) &ml_backend__add_trail_ops_scalar_common_2[0];
            {
              ml_backend__add_trail_ops__succeeded = mercury__builtin__unify_2_p_0(ml_backend__add_trail_ops__TypeInfo_16_16, ((MR_Box) (ml_backend__add_trail_ops__V_4_4)), ((MR_Box) (ml_backend__add_trail_ops__V_9_9)));
            }
            if (ml_backend__add_trail_ops__succeeded)
              {
                {
                  ml_backend__add_trail_ops__succeeded = hlds__hlds_module____Unify____module_info_0_0(ml_backend__add_trail_ops__V_5_5, ml_backend__add_trail_ops__V_10_10);
                }
                if (ml_backend__add_trail_ops__succeeded)
                  {
                    ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__V_6_6 == ml_backend__add_trail_ops__V_11_11);
                    if (ml_backend__add_trail_ops__succeeded)
                      ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__V_7_7 == ml_backend__add_trail_ops__V_12_12);
                  }
              }
          }
      }
    return ml_backend__add_trail_ops__succeeded;
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0(
  MR_String ml_backend__add_trail_ops__PredName_9,
  MR_Word ml_backend__add_trail_ops__Purity_10,
  MR_Word ml_backend__add_trail_ops__InstMapDelta_11,
  MR_Word ml_backend__add_trail_ops__ModuleInfo_12,
  MR_Word ml_backend__add_trail_ops__Context_13,
  MR_Word ml_backend__add_trail_ops__Args_14,
  MR_String ml_backend__add_trail_ops__ForeignCode_15,
  MR_Word * ml_backend__add_trail_ops__ForeignProcGoal_16)
{
  {
    MR_bool ml_backend__add_trail_ops__succeeded;
    MR_Word ml_backend__add_trail_ops__PrivateBuiltinModule_17;
    MR_Word ml_backend__add_trail_ops__FinalForeignProcAttrs_20;
    MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_ForeignProcAttrs_23_23;
    MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_ForeignProcAttrs_26_26;

    {
      ml_backend__add_trail_ops__PrivateBuiltinModule_17 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
    {
      ml_backend__add_trail_ops__STATE_VARIABLE_ForeignProcAttrs_23_23 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
    }
    {
      parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, ml_backend__add_trail_ops__STATE_VARIABLE_ForeignProcAttrs_23_23, &ml_backend__add_trail_ops__STATE_VARIABLE_ForeignProcAttrs_26_26);
    }
    {
      parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, ml_backend__add_trail_ops__STATE_VARIABLE_ForeignProcAttrs_26_26, &ml_backend__add_trail_ops__FinalForeignProcAttrs_20);
    }
    {
      hlds__goal_util__generate_foreign_proc_16_p_0(ml_backend__add_trail_ops__PrivateBuiltinModule_17, ml_backend__add_trail_ops__PredName_9, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, ml_backend__add_trail_ops__Purity_10, ml_backend__add_trail_ops__FinalForeignProcAttrs_20, ml_backend__add_trail_ops__Args_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__ForeignCode_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__InstMapDelta_11, ml_backend__add_trail_ops__ModuleInfo_12, ml_backend__add_trail_ops__Context_13, ml_backend__add_trail_ops__ForeignProcGoal_16);
    }
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__trail_generate_call_8_p_0(
  MR_String ml_backend__add_trail_ops__PredName_9,
  MR_Word ml_backend__add_trail_ops__Detism_10,
  MR_Word ml_backend__add_trail_ops__Purity_11,
  MR_Word ml_backend__add_trail_ops__Args_12,
  MR_Word ml_backend__add_trail_ops__InstMapDelta_13,
  MR_Word ml_backend__add_trail_ops__ModuleInfo_14,
  MR_Word ml_backend__add_trail_ops__Context_15,
  MR_Word * ml_backend__add_trail_ops__CallGoal_16)
{
  {
    MR_bool ml_backend__add_trail_ops__succeeded;
    MR_Word ml_backend__add_trail_ops__V_17_17;

    {
      ml_backend__add_trail_ops__V_17_17 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
    {
      hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_17_17, ml_backend__add_trail_ops__PredName_9, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__Detism_10, ml_backend__add_trail_ops__Purity_11, ml_backend__add_trail_ops__Args_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__InstMapDelta_13, ml_backend__add_trail_ops__ModuleInfo_14, ml_backend__add_trail_ops__Context_15, ml_backend__add_trail_ops__CallGoal_16);
    }
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__new_ticket_counter_var_3_p_0(
  MR_Word * ml_backend__add_trail_ops__Var_4,
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6,
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_7)
{
  {
    MR_bool ml_backend__add_trail_ops__succeeded;
    MR_Word ml_backend__add_trail_ops__V_9_9;
    MR_Word ml_backend__add_trail_ops__VarSet0_17;
    MR_Word ml_backend__add_trail_ops__VarTypes0_18;
    MR_Word ml_backend__add_trail_ops__VarSet_19;
    MR_Word ml_backend__add_trail_ops__VarTypes_20;
    MR_Word ml_backend__add_trail_ops__V_33_33;
    MR_Word ml_backend__add_trail_ops__V_34_34;
    MR_Word ml_backend__add_trail_ops__V_35_35;
    MR_Word ml_backend__add_trail_ops__V_24_24;
    MR_Word ml_backend__add_trail_ops__V_25_25;
    MR_Word ml_backend__add_trail_ops__V_26_26;
    MR_Word ml_backend__add_trail_ops__V_31_31;
    MR_Word ml_backend__add_trail_ops__V_32_32;

    {
      ml_backend__add_trail_ops__V_9_9 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
    ml_backend__add_trail_ops__VarSet0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    ml_backend__add_trail_ops__VarTypes0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    ml_backend__add_trail_ops__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    ml_backend__add_trail_ops__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) & (MR_Integer) 1);
    ml_backend__add_trail_ops__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    {
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "SavedTicketCounter", ml_backend__add_trail_ops__Var_4, ml_backend__add_trail_ops__VarSet0_17, &ml_backend__add_trail_ops__VarSet_19);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(*ml_backend__add_trail_ops__Var_4, ml_backend__add_trail_ops__V_9_9, ml_backend__add_trail_ops__VarTypes0_18, &ml_backend__add_trail_ops__VarTypes_20);
    }
    ml_backend__add_trail_ops__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    ml_backend__add_trail_ops__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    ml_backend__add_trail_ops__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    ml_backend__add_trail_ops__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) & (MR_Integer) 1);
    ml_backend__add_trail_ops__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__add_trail_ops__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__VarSet_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__VarTypes_20));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_33_33));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((ml_backend__add_trail_ops__V_34_34 | ((ml_backend__add_trail_ops__V_35_35 << (MR_Integer) 1)))));
    }
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__new_ticket_var_3_p_0(
  MR_Word * ml_backend__add_trail_ops__Var_4,
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6,
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_7)
{
  {
    MR_bool ml_backend__add_trail_ops__succeeded;
    MR_Word ml_backend__add_trail_ops__V_9_9;
    MR_Word ml_backend__add_trail_ops__VarSet0_17;
    MR_Word ml_backend__add_trail_ops__VarTypes0_18;
    MR_Word ml_backend__add_trail_ops__VarSet_19;
    MR_Word ml_backend__add_trail_ops__VarTypes_20;
    MR_Word ml_backend__add_trail_ops__V_33_33;
    MR_Word ml_backend__add_trail_ops__V_34_34;
    MR_Word ml_backend__add_trail_ops__V_35_35;
    MR_Word ml_backend__add_trail_ops__V_24_24;
    MR_Word ml_backend__add_trail_ops__V_25_25;
    MR_Word ml_backend__add_trail_ops__V_26_26;
    MR_Word ml_backend__add_trail_ops__V_31_31;
    MR_Word ml_backend__add_trail_ops__V_32_32;

    {
      ml_backend__add_trail_ops__V_9_9 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
    ml_backend__add_trail_ops__VarSet0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    ml_backend__add_trail_ops__VarTypes0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    ml_backend__add_trail_ops__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    ml_backend__add_trail_ops__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) & (MR_Integer) 1);
    ml_backend__add_trail_ops__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    {
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "TrailTicket", ml_backend__add_trail_ops__Var_4, ml_backend__add_trail_ops__VarSet0_17, &ml_backend__add_trail_ops__VarSet_19);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(*ml_backend__add_trail_ops__Var_4, ml_backend__add_trail_ops__V_9_9, ml_backend__add_trail_ops__VarTypes0_18, &ml_backend__add_trail_ops__VarTypes_20);
    }
    ml_backend__add_trail_ops__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    ml_backend__add_trail_ops__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    ml_backend__add_trail_ops__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    ml_backend__add_trail_ops__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) & (MR_Integer) 1);
    ml_backend__add_trail_ops__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__add_trail_ops__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__VarSet_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__VarTypes_20));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_33_33));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((ml_backend__add_trail_ops__V_34_34 | ((ml_backend__add_trail_ops__V_35_35 << (MR_Integer) 1)))));
    }
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__gen_prune_tickets_to_4_p_0(
  MR_Word ml_backend__add_trail_ops__SavedTicketCounterVar_5,
  MR_Word ml_backend__add_trail_ops__Context_6,
  MR_Word * ml_backend__add_trail_ops__PruneTicketsToGoal_7,
  MR_Word ml_backend__add_trail_ops__Info_8)
{
  {
    MR_bool ml_backend__add_trail_ops__succeeded;
    MR_Word ml_backend__add_trail_ops__GenerateInline_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ml_backend__add_trail_ops__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
    MR_Word ml_backend__add_trail_ops__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
    MR_Word ml_backend__add_trail_ops__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
    MR_Word ml_backend__add_trail_ops__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);

    switch (ml_backend__add_trail_ops__GenerateInline_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__add_trail_ops__V_27_27;
          MR_Word ml_backend__add_trail_ops__V_28_28;
          MR_Word ml_backend__add_trail_ops__V_29_29;
          MR_Word ml_backend__add_trail_ops__V_51_51;
          MR_Word ml_backend__add_trail_ops__V_35_35;
          MR_Word ml_backend__add_trail_ops__V_36_36;
          MR_Word ml_backend__add_trail_ops__V_37_37;
          MR_Word ml_backend__add_trail_ops__V_38_38;

          {
            ml_backend__add_trail_ops__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 0) = ((MR_Box) (ml_backend__add_trail_ops__SavedTicketCounterVar_5));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__add_trail_ops__V_28_28 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
          ml_backend__add_trail_ops__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
          ml_backend__add_trail_ops__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
          ml_backend__add_trail_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
          ml_backend__add_trail_ops__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
          ml_backend__add_trail_ops__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          {
            ml_backend__add_trail_ops__V_51_51 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
          {
            hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_51_51, (MR_String) "prune_tickets_to", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, ml_backend__add_trail_ops__V_27_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_28_28, ml_backend__add_trail_ops__V_29_29, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__PruneTicketsToGoal_7);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__add_trail_ops__Args_10;
          MR_Word ml_backend__add_trail_ops__V_12_12;
          MR_Word ml_backend__add_trail_ops__V_13_13;
          MR_Word ml_backend__add_trail_ops__V_14_14;
          MR_Word ml_backend__add_trail_ops__V_16_16;
          MR_Word ml_backend__add_trail_ops__V_17_17;
          MR_Word ml_backend__add_trail_ops__V_22_22;
          MR_Word ml_backend__add_trail_ops__V_23_23;
          MR_Word ml_backend__add_trail_ops__V_39_39;
          MR_Word ml_backend__add_trail_ops__V_40_40;
          MR_Word ml_backend__add_trail_ops__V_41_41;
          MR_Word ml_backend__add_trail_ops__V_42_42;

          {
            ml_backend__add_trail_ops__V_16_16 = parse_tree__prog_mode__in_mode_0_f_0();
          }
          {
            ml_backend__add_trail_ops__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 0) = ((MR_Box) ((MR_String) "TicketCounter"));
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_16_16));
          }
          {
            ml_backend__add_trail_ops__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_13_13, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_14_14));
          }
          {
            ml_backend__add_trail_ops__V_17_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          }
          {
            ml_backend__add_trail_ops__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 0) = ((MR_Box) (ml_backend__add_trail_ops__SavedTicketCounterVar_5));
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_13_13));
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_17_17));
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 3) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            ml_backend__add_trail_ops__Args_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_12_12));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__add_trail_ops__V_22_22 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
          ml_backend__add_trail_ops__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
          ml_backend__add_trail_ops__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
          ml_backend__add_trail_ops__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
          ml_backend__add_trail_ops__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
          ml_backend__add_trail_ops__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          {
            ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "prune_tickets_to", (MR_Integer) 2, ml_backend__add_trail_ops__V_22_22, ml_backend__add_trail_ops__V_23_23, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__Args_10, (MR_String) "MR_prune_tickets_to(TicketCounter);", ml_backend__add_trail_ops__PruneTicketsToGoal_7);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__gen_mark_ticket_stack_4_p_0(
  MR_Word ml_backend__add_trail_ops__SavedTicketCounterVar_5,
  MR_Word ml_backend__add_trail_ops__Context_6,
  MR_Word * ml_backend__add_trail_ops__MarkTicketStackGoal_7,
  MR_Word ml_backend__add_trail_ops__Info_8)
{
  {
    MR_bool ml_backend__add_trail_ops__succeeded;
    MR_Word ml_backend__add_trail_ops__GenerateInline_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ml_backend__add_trail_ops__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
    MR_Word ml_backend__add_trail_ops__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
    MR_Word ml_backend__add_trail_ops__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
    MR_Word ml_backend__add_trail_ops__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);

    switch (ml_backend__add_trail_ops__GenerateInline_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__add_trail_ops__V_27_27;
          MR_Word ml_backend__add_trail_ops__V_28_28;
          MR_Word ml_backend__add_trail_ops__V_29_29;
          MR_Word ml_backend__add_trail_ops__V_51_51;
          MR_Word ml_backend__add_trail_ops__V_35_35;
          MR_Word ml_backend__add_trail_ops__V_36_36;
          MR_Word ml_backend__add_trail_ops__V_37_37;
          MR_Word ml_backend__add_trail_ops__V_38_38;

          {
            ml_backend__add_trail_ops__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 0) = ((MR_Box) (ml_backend__add_trail_ops__SavedTicketCounterVar_5));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__add_trail_ops__V_28_28 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
          ml_backend__add_trail_ops__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
          ml_backend__add_trail_ops__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
          ml_backend__add_trail_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
          ml_backend__add_trail_ops__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
          ml_backend__add_trail_ops__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          {
            ml_backend__add_trail_ops__V_51_51 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
          {
            hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_51_51, (MR_String) "mark_ticket_stack", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, ml_backend__add_trail_ops__V_27_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_28_28, ml_backend__add_trail_ops__V_29_29, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__MarkTicketStackGoal_7);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__add_trail_ops__Args_10;
          MR_Word ml_backend__add_trail_ops__V_12_12;
          MR_Word ml_backend__add_trail_ops__V_13_13;
          MR_Word ml_backend__add_trail_ops__V_14_14;
          MR_Word ml_backend__add_trail_ops__V_16_16;
          MR_Word ml_backend__add_trail_ops__V_17_17;
          MR_Word ml_backend__add_trail_ops__V_22_22;
          MR_Word ml_backend__add_trail_ops__V_23_23;
          MR_Word ml_backend__add_trail_ops__V_39_39;
          MR_Word ml_backend__add_trail_ops__V_40_40;
          MR_Word ml_backend__add_trail_ops__V_41_41;
          MR_Word ml_backend__add_trail_ops__V_42_42;

          {
            ml_backend__add_trail_ops__V_16_16 = parse_tree__prog_mode__out_mode_0_f_0();
          }
          {
            ml_backend__add_trail_ops__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 0) = ((MR_Box) ((MR_String) "TicketCounter"));
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_16_16));
          }
          {
            ml_backend__add_trail_ops__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_13_13, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_14_14));
          }
          {
            ml_backend__add_trail_ops__V_17_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          }
          {
            ml_backend__add_trail_ops__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 0) = ((MR_Box) (ml_backend__add_trail_ops__SavedTicketCounterVar_5));
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_13_13));
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_17_17));
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 3) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            ml_backend__add_trail_ops__Args_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_12_12));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__add_trail_ops__V_22_22 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
          ml_backend__add_trail_ops__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
          ml_backend__add_trail_ops__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
          ml_backend__add_trail_ops__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
          ml_backend__add_trail_ops__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
          ml_backend__add_trail_ops__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          {
            ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "mark_ticket_stack", (MR_Integer) 2, ml_backend__add_trail_ops__V_22_22, ml_backend__add_trail_ops__V_23_23, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__Args_10, (MR_String) "MR_mark_ticket_stack(TicketCounter);", ml_backend__add_trail_ops__MarkTicketStackGoal_7);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__gen_discard_ticket_3_p_0(
  MR_Word ml_backend__add_trail_ops__Context_4,
  MR_Word * ml_backend__add_trail_ops__DiscardTicketGoal_5,
  MR_Word ml_backend__add_trail_ops__Info_6)
{
  {
    MR_bool ml_backend__add_trail_ops__succeeded;
    MR_Word ml_backend__add_trail_ops__GenerateInline_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ml_backend__add_trail_ops__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 0)));
    MR_Word ml_backend__add_trail_ops__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 1)));
    MR_Word ml_backend__add_trail_ops__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 2)));
    MR_Word ml_backend__add_trail_ops__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) & (MR_Integer) 1);

    switch (ml_backend__add_trail_ops__GenerateInline_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__add_trail_ops__V_18_18;
          MR_Word ml_backend__add_trail_ops__V_19_19;
          MR_Word ml_backend__add_trail_ops__V_40_40;
          MR_Word ml_backend__add_trail_ops__V_24_24;
          MR_Word ml_backend__add_trail_ops__V_25_25;
          MR_Word ml_backend__add_trail_ops__V_26_26;
          MR_Word ml_backend__add_trail_ops__V_27_27;

          {
            ml_backend__add_trail_ops__V_18_18 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
          ml_backend__add_trail_ops__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 0)));
          ml_backend__add_trail_ops__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 1)));
          ml_backend__add_trail_ops__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 2)));
          ml_backend__add_trail_ops__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) & (MR_Integer) 1);
          ml_backend__add_trail_ops__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          {
            ml_backend__add_trail_ops__V_40_40 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
          {
            hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_40_40, (MR_String) "discard_ticket", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_18_18, ml_backend__add_trail_ops__V_19_19, ml_backend__add_trail_ops__Context_4, ml_backend__add_trail_ops__DiscardTicketGoal_5);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__add_trail_ops__V_12_12;
          MR_Word ml_backend__add_trail_ops__V_13_13;
          MR_Word ml_backend__add_trail_ops__V_28_28;
          MR_Word ml_backend__add_trail_ops__V_29_29;
          MR_Word ml_backend__add_trail_ops__V_30_30;
          MR_Word ml_backend__add_trail_ops__V_31_31;

          {
            ml_backend__add_trail_ops__V_12_12 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
          ml_backend__add_trail_ops__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 0)));
          ml_backend__add_trail_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 1)));
          ml_backend__add_trail_ops__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 2)));
          ml_backend__add_trail_ops__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) & (MR_Integer) 1);
          ml_backend__add_trail_ops__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          {
            ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "discard_ticket", (MR_Integer) 2, ml_backend__add_trail_ops__V_12_12, ml_backend__add_trail_ops__V_13_13, ml_backend__add_trail_ops__Context_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_String) "MR_discard_ticket();", ml_backend__add_trail_ops__DiscardTicketGoal_5);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__gen_prune_ticket_3_p_0(
  MR_Word ml_backend__add_trail_ops__Context_4,
  MR_Word * ml_backend__add_trail_ops__PruneTicketGoal_5,
  MR_Word ml_backend__add_trail_ops__Info_6)
{
  {
    MR_bool ml_backend__add_trail_ops__succeeded;
    MR_Word ml_backend__add_trail_ops__GenerateInline_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ml_backend__add_trail_ops__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 0)));
    MR_Word ml_backend__add_trail_ops__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 1)));
    MR_Word ml_backend__add_trail_ops__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 2)));
    MR_Word ml_backend__add_trail_ops__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) & (MR_Integer) 1);

    switch (ml_backend__add_trail_ops__GenerateInline_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__add_trail_ops__V_18_18;
          MR_Word ml_backend__add_trail_ops__V_19_19;
          MR_Word ml_backend__add_trail_ops__V_40_40;
          MR_Word ml_backend__add_trail_ops__V_24_24;
          MR_Word ml_backend__add_trail_ops__V_25_25;
          MR_Word ml_backend__add_trail_ops__V_26_26;
          MR_Word ml_backend__add_trail_ops__V_27_27;

          {
            ml_backend__add_trail_ops__V_18_18 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
          ml_backend__add_trail_ops__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 0)));
          ml_backend__add_trail_ops__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 1)));
          ml_backend__add_trail_ops__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 2)));
          ml_backend__add_trail_ops__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) & (MR_Integer) 1);
          ml_backend__add_trail_ops__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          {
            ml_backend__add_trail_ops__V_40_40 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
          {
            hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_40_40, (MR_String) "prune_ticket", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_18_18, ml_backend__add_trail_ops__V_19_19, ml_backend__add_trail_ops__Context_4, ml_backend__add_trail_ops__PruneTicketGoal_5);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__add_trail_ops__V_12_12;
          MR_Word ml_backend__add_trail_ops__V_13_13;
          MR_Word ml_backend__add_trail_ops__V_28_28;
          MR_Word ml_backend__add_trail_ops__V_29_29;
          MR_Word ml_backend__add_trail_ops__V_30_30;
          MR_Word ml_backend__add_trail_ops__V_31_31;

          {
            ml_backend__add_trail_ops__V_12_12 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
          ml_backend__add_trail_ops__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 0)));
          ml_backend__add_trail_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 1)));
          ml_backend__add_trail_ops__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 2)));
          ml_backend__add_trail_ops__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) & (MR_Integer) 1);
          ml_backend__add_trail_ops__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          {
            ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "prune_ticket", (MR_Integer) 2, ml_backend__add_trail_ops__V_12_12, ml_backend__add_trail_ops__V_13_13, ml_backend__add_trail_ops__Context_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_String) "MR_prune_ticket();", ml_backend__add_trail_ops__PruneTicketGoal_5);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__gen_reset_ticket_commit_4_p_0(
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
  MR_Word ml_backend__add_trail_ops__Context_6,
  MR_Word * ml_backend__add_trail_ops__ResetTicketGoal_7,
  MR_Word ml_backend__add_trail_ops__Info_8)
{
  {
    MR_bool ml_backend__add_trail_ops__succeeded;
    MR_Word ml_backend__add_trail_ops__GenerateInline_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ml_backend__add_trail_ops__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
    MR_Word ml_backend__add_trail_ops__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
    MR_Word ml_backend__add_trail_ops__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
    MR_Word ml_backend__add_trail_ops__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);

    switch (ml_backend__add_trail_ops__GenerateInline_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__add_trail_ops__V_27_27;
          MR_Word ml_backend__add_trail_ops__V_28_28;
          MR_Word ml_backend__add_trail_ops__V_29_29;
          MR_Word ml_backend__add_trail_ops__V_51_51;
          MR_Word ml_backend__add_trail_ops__V_35_35;
          MR_Word ml_backend__add_trail_ops__V_36_36;
          MR_Word ml_backend__add_trail_ops__V_37_37;
          MR_Word ml_backend__add_trail_ops__V_38_38;

          {
            ml_backend__add_trail_ops__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 0) = ((MR_Box) (ml_backend__add_trail_ops__TicketVar_5));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__add_trail_ops__V_28_28 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
          ml_backend__add_trail_ops__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
          ml_backend__add_trail_ops__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
          ml_backend__add_trail_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
          ml_backend__add_trail_ops__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
          ml_backend__add_trail_ops__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          {
            ml_backend__add_trail_ops__V_51_51 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
          {
            hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_51_51, (MR_String) "reset_ticket_commit", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, ml_backend__add_trail_ops__V_27_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_28_28, ml_backend__add_trail_ops__V_29_29, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__ResetTicketGoal_7);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__add_trail_ops__Args_10;
          MR_Word ml_backend__add_trail_ops__V_12_12;
          MR_Word ml_backend__add_trail_ops__V_13_13;
          MR_Word ml_backend__add_trail_ops__V_14_14;
          MR_Word ml_backend__add_trail_ops__V_16_16;
          MR_Word ml_backend__add_trail_ops__V_17_17;
          MR_Word ml_backend__add_trail_ops__V_22_22;
          MR_Word ml_backend__add_trail_ops__V_23_23;
          MR_Word ml_backend__add_trail_ops__V_39_39;
          MR_Word ml_backend__add_trail_ops__V_40_40;
          MR_Word ml_backend__add_trail_ops__V_41_41;
          MR_Word ml_backend__add_trail_ops__V_42_42;

          {
            ml_backend__add_trail_ops__V_16_16 = parse_tree__prog_mode__in_mode_0_f_0();
          }
          {
            ml_backend__add_trail_ops__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 0) = ((MR_Box) ((MR_String) "Ticket"));
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_16_16));
          }
          {
            ml_backend__add_trail_ops__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_13_13, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_14_14));
          }
          {
            ml_backend__add_trail_ops__V_17_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          }
          {
            ml_backend__add_trail_ops__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 0) = ((MR_Box) (ml_backend__add_trail_ops__TicketVar_5));
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_13_13));
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_17_17));
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 3) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            ml_backend__add_trail_ops__Args_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_12_12));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__add_trail_ops__V_22_22 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
          ml_backend__add_trail_ops__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
          ml_backend__add_trail_ops__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
          ml_backend__add_trail_ops__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
          ml_backend__add_trail_ops__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
          ml_backend__add_trail_ops__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          {
            ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "reset_ticket_commit", (MR_Integer) 2, ml_backend__add_trail_ops__V_22_22, ml_backend__add_trail_ops__V_23_23, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__Args_10, (MR_String) "MR_reset_ticket(Ticket, MR_commit);", ml_backend__add_trail_ops__ResetTicketGoal_7);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__gen_reset_ticket_solve_4_p_0(
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
  MR_Word ml_backend__add_trail_ops__Context_6,
  MR_Word * ml_backend__add_trail_ops__ResetTicketGoal_7,
  MR_Word ml_backend__add_trail_ops__Info_8)
{
  {
    MR_bool ml_backend__add_trail_ops__succeeded;
    MR_Word ml_backend__add_trail_ops__GenerateInline_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ml_backend__add_trail_ops__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
    MR_Word ml_backend__add_trail_ops__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
    MR_Word ml_backend__add_trail_ops__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
    MR_Word ml_backend__add_trail_ops__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);

    switch (ml_backend__add_trail_ops__GenerateInline_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__add_trail_ops__V_27_27;
          MR_Word ml_backend__add_trail_ops__V_28_28;
          MR_Word ml_backend__add_trail_ops__V_29_29;
          MR_Word ml_backend__add_trail_ops__V_51_51;
          MR_Word ml_backend__add_trail_ops__V_35_35;
          MR_Word ml_backend__add_trail_ops__V_36_36;
          MR_Word ml_backend__add_trail_ops__V_37_37;
          MR_Word ml_backend__add_trail_ops__V_38_38;

          {
            ml_backend__add_trail_ops__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 0) = ((MR_Box) (ml_backend__add_trail_ops__TicketVar_5));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__add_trail_ops__V_28_28 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
          ml_backend__add_trail_ops__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
          ml_backend__add_trail_ops__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
          ml_backend__add_trail_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
          ml_backend__add_trail_ops__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
          ml_backend__add_trail_ops__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          {
            ml_backend__add_trail_ops__V_51_51 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
          {
            hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_51_51, (MR_String) "reset_ticket_solve", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, ml_backend__add_trail_ops__V_27_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_28_28, ml_backend__add_trail_ops__V_29_29, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__ResetTicketGoal_7);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__add_trail_ops__Args_10;
          MR_Word ml_backend__add_trail_ops__V_12_12;
          MR_Word ml_backend__add_trail_ops__V_13_13;
          MR_Word ml_backend__add_trail_ops__V_14_14;
          MR_Word ml_backend__add_trail_ops__V_16_16;
          MR_Word ml_backend__add_trail_ops__V_17_17;
          MR_Word ml_backend__add_trail_ops__V_22_22;
          MR_Word ml_backend__add_trail_ops__V_23_23;
          MR_Word ml_backend__add_trail_ops__V_39_39;
          MR_Word ml_backend__add_trail_ops__V_40_40;
          MR_Word ml_backend__add_trail_ops__V_41_41;
          MR_Word ml_backend__add_trail_ops__V_42_42;

          {
            ml_backend__add_trail_ops__V_16_16 = parse_tree__prog_mode__in_mode_0_f_0();
          }
          {
            ml_backend__add_trail_ops__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 0) = ((MR_Box) ((MR_String) "Ticket"));
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_16_16));
          }
          {
            ml_backend__add_trail_ops__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_13_13, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_14_14));
          }
          {
            ml_backend__add_trail_ops__V_17_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          }
          {
            ml_backend__add_trail_ops__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 0) = ((MR_Box) (ml_backend__add_trail_ops__TicketVar_5));
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_13_13));
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_17_17));
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 3) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            ml_backend__add_trail_ops__Args_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_12_12));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__add_trail_ops__V_22_22 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
          ml_backend__add_trail_ops__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
          ml_backend__add_trail_ops__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
          ml_backend__add_trail_ops__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
          ml_backend__add_trail_ops__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
          ml_backend__add_trail_ops__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          {
            ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "reset_ticket_solve", (MR_Integer) 2, ml_backend__add_trail_ops__V_22_22, ml_backend__add_trail_ops__V_23_23, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__Args_10, (MR_String) "MR_reset_ticket(Ticket, MR_solve);", ml_backend__add_trail_ops__ResetTicketGoal_7);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__gen_reset_ticket_undo_4_p_0(
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
  MR_Word ml_backend__add_trail_ops__Context_6,
  MR_Word * ml_backend__add_trail_ops__ResetTicketGoal_7,
  MR_Word ml_backend__add_trail_ops__Info_8)
{
  {
    MR_bool ml_backend__add_trail_ops__succeeded;
    MR_Word ml_backend__add_trail_ops__GenerateInline_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ml_backend__add_trail_ops__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
    MR_Word ml_backend__add_trail_ops__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
    MR_Word ml_backend__add_trail_ops__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
    MR_Word ml_backend__add_trail_ops__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);

    switch (ml_backend__add_trail_ops__GenerateInline_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__add_trail_ops__V_27_27;
          MR_Word ml_backend__add_trail_ops__V_28_28;
          MR_Word ml_backend__add_trail_ops__V_29_29;
          MR_Word ml_backend__add_trail_ops__V_51_51;
          MR_Word ml_backend__add_trail_ops__V_35_35;
          MR_Word ml_backend__add_trail_ops__V_36_36;
          MR_Word ml_backend__add_trail_ops__V_37_37;
          MR_Word ml_backend__add_trail_ops__V_38_38;

          {
            ml_backend__add_trail_ops__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 0) = ((MR_Box) (ml_backend__add_trail_ops__TicketVar_5));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__add_trail_ops__V_28_28 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
          ml_backend__add_trail_ops__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
          ml_backend__add_trail_ops__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
          ml_backend__add_trail_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
          ml_backend__add_trail_ops__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
          ml_backend__add_trail_ops__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          {
            ml_backend__add_trail_ops__V_51_51 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
          {
            hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_51_51, (MR_String) "reset_ticket_undo", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, ml_backend__add_trail_ops__V_27_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_28_28, ml_backend__add_trail_ops__V_29_29, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__ResetTicketGoal_7);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__add_trail_ops__Args_10;
          MR_Word ml_backend__add_trail_ops__V_12_12;
          MR_Word ml_backend__add_trail_ops__V_13_13;
          MR_Word ml_backend__add_trail_ops__V_14_14;
          MR_Word ml_backend__add_trail_ops__V_16_16;
          MR_Word ml_backend__add_trail_ops__V_17_17;
          MR_Word ml_backend__add_trail_ops__V_22_22;
          MR_Word ml_backend__add_trail_ops__V_23_23;
          MR_Word ml_backend__add_trail_ops__V_39_39;
          MR_Word ml_backend__add_trail_ops__V_40_40;
          MR_Word ml_backend__add_trail_ops__V_41_41;
          MR_Word ml_backend__add_trail_ops__V_42_42;

          {
            ml_backend__add_trail_ops__V_16_16 = parse_tree__prog_mode__in_mode_0_f_0();
          }
          {
            ml_backend__add_trail_ops__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 0) = ((MR_Box) ((MR_String) "Ticket"));
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_16_16));
          }
          {
            ml_backend__add_trail_ops__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_13_13, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_14_14));
          }
          {
            ml_backend__add_trail_ops__V_17_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          }
          {
            ml_backend__add_trail_ops__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 0) = ((MR_Box) (ml_backend__add_trail_ops__TicketVar_5));
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_13_13));
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_17_17));
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 3) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            ml_backend__add_trail_ops__Args_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_12_12));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__add_trail_ops__V_22_22 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
          ml_backend__add_trail_ops__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
          ml_backend__add_trail_ops__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
          ml_backend__add_trail_ops__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
          ml_backend__add_trail_ops__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
          ml_backend__add_trail_ops__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          {
            ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "reset_ticket_undo", (MR_Integer) 2, ml_backend__add_trail_ops__V_22_22, ml_backend__add_trail_ops__V_23_23, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__Args_10, (MR_String) "MR_reset_ticket(Ticket, MR_undo);", ml_backend__add_trail_ops__ResetTicketGoal_7);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__gen_store_ticket_4_p_0(
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
  MR_Word ml_backend__add_trail_ops__Context_6,
  MR_Word * ml_backend__add_trail_ops__SaveTicketGoal_7,
  MR_Word ml_backend__add_trail_ops__Info_8)
{
  {
    MR_bool ml_backend__add_trail_ops__succeeded;
    MR_Word ml_backend__add_trail_ops__GenerateInline_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ml_backend__add_trail_ops__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
    MR_Word ml_backend__add_trail_ops__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
    MR_Word ml_backend__add_trail_ops__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
    MR_Word ml_backend__add_trail_ops__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);

    switch (ml_backend__add_trail_ops__GenerateInline_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__add_trail_ops__V_27_27;
          MR_Word ml_backend__add_trail_ops__V_28_28;
          MR_Word ml_backend__add_trail_ops__V_29_29;
          MR_Word ml_backend__add_trail_ops__V_51_51;
          MR_Word ml_backend__add_trail_ops__V_35_35;
          MR_Word ml_backend__add_trail_ops__V_36_36;
          MR_Word ml_backend__add_trail_ops__V_37_37;
          MR_Word ml_backend__add_trail_ops__V_38_38;

          {
            ml_backend__add_trail_ops__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 0) = ((MR_Box) (ml_backend__add_trail_ops__TicketVar_5));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__add_trail_ops__V_28_28 = hlds__instmap__instmap_delta_bind_var_1_f_0(ml_backend__add_trail_ops__TicketVar_5);
          }
          ml_backend__add_trail_ops__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
          ml_backend__add_trail_ops__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
          ml_backend__add_trail_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
          ml_backend__add_trail_ops__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
          ml_backend__add_trail_ops__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          {
            ml_backend__add_trail_ops__V_51_51 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
          {
            hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_51_51, (MR_String) "store_ticket", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, ml_backend__add_trail_ops__V_27_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_28_28, ml_backend__add_trail_ops__V_29_29, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__SaveTicketGoal_7);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__add_trail_ops__Args_10;
          MR_Word ml_backend__add_trail_ops__V_12_12;
          MR_Word ml_backend__add_trail_ops__V_13_13;
          MR_Word ml_backend__add_trail_ops__V_14_14;
          MR_Word ml_backend__add_trail_ops__V_16_16;
          MR_Word ml_backend__add_trail_ops__V_17_17;
          MR_Word ml_backend__add_trail_ops__V_22_22;
          MR_Word ml_backend__add_trail_ops__V_23_23;
          MR_Word ml_backend__add_trail_ops__V_39_39;
          MR_Word ml_backend__add_trail_ops__V_40_40;
          MR_Word ml_backend__add_trail_ops__V_41_41;
          MR_Word ml_backend__add_trail_ops__V_42_42;

          {
            ml_backend__add_trail_ops__V_16_16 = parse_tree__prog_mode__out_mode_0_f_0();
          }
          {
            ml_backend__add_trail_ops__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 0) = ((MR_Box) ((MR_String) "Ticket"));
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_16_16));
          }
          {
            ml_backend__add_trail_ops__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_13_13, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_14_14));
          }
          {
            ml_backend__add_trail_ops__V_17_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          }
          {
            ml_backend__add_trail_ops__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 0) = ((MR_Box) (ml_backend__add_trail_ops__TicketVar_5));
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_13_13));
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_17_17));
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 3) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            ml_backend__add_trail_ops__Args_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_12_12));
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__add_trail_ops__V_22_22 = hlds__instmap__instmap_delta_bind_var_1_f_0(ml_backend__add_trail_ops__TicketVar_5);
          }
          ml_backend__add_trail_ops__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
          ml_backend__add_trail_ops__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
          ml_backend__add_trail_ops__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
          ml_backend__add_trail_ops__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
          ml_backend__add_trail_ops__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          {
            ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "store_ticket", (MR_Integer) 2, ml_backend__add_trail_ops__V_22_22, ml_backend__add_trail_ops__V_23_23, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__Args_10, (MR_String) "MR_store_ticket(Ticket);", ml_backend__add_trail_ops__SaveTicketGoal_7);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__cases_add_trail_ops_4_p_0(
  MR_Word ml_backend__add_trail_ops__HeadVar__1_1,
  MR_Word * ml_backend__add_trail_ops__HeadVar__2_2,
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_3,
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_4)
{
  {
    MR_bool ml_backend__add_trail_ops__succeeded;

    if ((ml_backend__add_trail_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__add_trail_ops__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__add_trail_ops__STATE_VARIABLE_Info_4 = ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_3;
      }
    else
      {
        MR_Word ml_backend__add_trail_ops__Case0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__add_trail_ops__Cases0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__add_trail_ops__Case_10;
        MR_Word ml_backend__add_trail_ops__Cases_11;
        MR_Word ml_backend__add_trail_ops__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Case0_8, (MR_Integer) 0)));
        MR_Word ml_backend__add_trail_ops__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Case0_8, (MR_Integer) 1)));
        MR_Word ml_backend__add_trail_ops__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Case0_8, (MR_Integer) 2)));
        MR_Word ml_backend__add_trail_ops__Goal_16;
        MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_19_19;
        MR_Word ml_backend__add_trail_ops__GoalExpr0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal0_15, (MR_Integer) 0)));
        MR_Word ml_backend__add_trail_ops__GoalInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal0_15, (MR_Integer) 1)));

        {
          ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_p_0(ml_backend__add_trail_ops__GoalExpr0_26, ml_backend__add_trail_ops__GoalInfo_27, &ml_backend__add_trail_ops__Goal_16, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_3, &ml_backend__add_trail_ops__STATE_VARIABLE_Info_19_19);
        }
        {
          ml_backend__add_trail_ops__Case_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Case_10, 0) = ((MR_Box) (ml_backend__add_trail_ops__MainConsId_13));
          MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Case_10, 1) = ((MR_Box) (ml_backend__add_trail_ops__OtherConsIds_14));
          MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Case_10, 2) = ((MR_Box) (ml_backend__add_trail_ops__Goal_16));
        }
        {
          ml_backend__add_trail_ops__cases_add_trail_ops_4_p_0(ml_backend__add_trail_ops__Cases0_9, &ml_backend__add_trail_ops__Cases_11, ml_backend__add_trail_ops__STATE_VARIABLE_Info_19_19, ml_backend__add_trail_ops__STATE_VARIABLE_Info_4);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__add_trail_ops__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__Case_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__Cases_11));
        }
      }
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__disj_add_trail_ops_7_p_0(
  MR_Word ml_backend__add_trail_ops__HeadVar__1_1,
  MR_Word * ml_backend__add_trail_ops__HeadVar__2_2,
  MR_Word ml_backend__add_trail_ops__IsFirstBranch_3,
  MR_Word ml_backend__add_trail_ops__CodeModel_4,
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6,
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_7)
{
  {
    MR_bool ml_backend__add_trail_ops__succeeded;

    if ((ml_backend__add_trail_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__add_trail_ops__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__add_trail_ops__STATE_VARIABLE_Info_7 = ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6;
      }
    else
      {
        MR_Word ml_backend__add_trail_ops__TypeCtorInfo_52_52;
        MR_Word ml_backend__add_trail_ops__Goal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__add_trail_ops__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__add_trail_ops__Goal_16;
        MR_Word ml_backend__add_trail_ops__Goals_17;
        MR_Word ml_backend__add_trail_ops__GoalInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal0_14, (MR_Integer) 1)));
        MR_Word ml_backend__add_trail_ops__Context_24;
        MR_Word ml_backend__add_trail_ops__UndoList_25;
        MR_Word ml_backend__add_trail_ops__Goal1_31;
        MR_Word ml_backend__add_trail_ops__PruneList_32;
        MR_Word ml_backend__add_trail_ops__GoalInfo1_36;
        MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_42_42;
        MR_Word ml_backend__add_trail_ops__V_45_45;
        MR_Word ml_backend__add_trail_ops__V_46_46;
        MR_Word ml_backend__add_trail_ops__V_47_47;
        MR_Word ml_backend__add_trail_ops__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal0_14, (MR_Integer) 0)));
        MR_Word ml_backend__add_trail_ops__V_35_35;

        {
          ml_backend__add_trail_ops__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__add_trail_ops__GoalInfo0_23);
        }
        switch (ml_backend__add_trail_ops__IsFirstBranch_3) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ml_backend__add_trail_ops__UndoList_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__add_trail_ops__ResetTicketUndoGoal_26;
              MR_Word ml_backend__add_trail_ops__UndoList0_27;

              {
                ml_backend__add_trail_ops__gen_reset_ticket_undo_4_p_0(ml_backend__add_trail_ops__TicketVar_5, ml_backend__add_trail_ops__Context_24, &ml_backend__add_trail_ops__ResetTicketUndoGoal_26, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6);
              }
              {
                ml_backend__add_trail_ops__UndoList0_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__UndoList0_27, 0) = ((MR_Box) (ml_backend__add_trail_ops__ResetTicketUndoGoal_26));
                MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__UndoList0_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              if ((ml_backend__add_trail_ops__Goals0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word ml_backend__add_trail_ops__DiscardTicketGoal_28;
                  MR_Word ml_backend__add_trail_ops__V_40_40;
                  MR_Word ml_backend__add_trail_ops__GenerateInline_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  MR_Word ml_backend__add_trail_ops__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
                  MR_Word ml_backend__add_trail_ops__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
                  MR_Word ml_backend__add_trail_ops__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
                  MR_Word ml_backend__add_trail_ops__V_72_72 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) & (MR_Integer) 1);

                  switch (ml_backend__add_trail_ops__GenerateInline_56) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ml_backend__add_trail_ops__V_67_67;
                        MR_Word ml_backend__add_trail_ops__V_68_68;
                        MR_Word ml_backend__add_trail_ops__V_89_89;
                        MR_Word ml_backend__add_trail_ops__V_73_73;
                        MR_Word ml_backend__add_trail_ops__V_74_74;
                        MR_Word ml_backend__add_trail_ops__V_75_75;
                        MR_Word ml_backend__add_trail_ops__V_76_76;

                        {
                          ml_backend__add_trail_ops__V_67_67 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                        }
                        ml_backend__add_trail_ops__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
                        ml_backend__add_trail_ops__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
                        ml_backend__add_trail_ops__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
                        ml_backend__add_trail_ops__V_75_75 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) & (MR_Integer) 1);
                        ml_backend__add_trail_ops__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                        {
                          ml_backend__add_trail_ops__V_89_89 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                        }
                        {
                          hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_89_89, (MR_String) "discard_ticket", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_67_67, ml_backend__add_trail_ops__V_68_68, ml_backend__add_trail_ops__Context_24, &ml_backend__add_trail_ops__DiscardTicketGoal_28);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ml_backend__add_trail_ops__V_61_61;
                        MR_Word ml_backend__add_trail_ops__V_62_62;
                        MR_Word ml_backend__add_trail_ops__V_77_77;
                        MR_Word ml_backend__add_trail_ops__V_78_78;
                        MR_Word ml_backend__add_trail_ops__V_79_79;
                        MR_Word ml_backend__add_trail_ops__V_80_80;

                        {
                          ml_backend__add_trail_ops__V_61_61 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                        }
                        ml_backend__add_trail_ops__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
                        ml_backend__add_trail_ops__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
                        ml_backend__add_trail_ops__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
                        ml_backend__add_trail_ops__V_79_79 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) & (MR_Integer) 1);
                        ml_backend__add_trail_ops__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                        {
                          ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "discard_ticket", (MR_Integer) 2, ml_backend__add_trail_ops__V_61_61, ml_backend__add_trail_ops__V_62_62, ml_backend__add_trail_ops__Context_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_String) "MR_discard_ticket();", &ml_backend__add_trail_ops__DiscardTicketGoal_28);
                        }
                      }
                      break;
                  }
                  {
                    ml_backend__add_trail_ops__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_40_40, 0) = ((MR_Box) (ml_backend__add_trail_ops__DiscardTicketGoal_28));
                    MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    ml_backend__add_trail_ops__UndoList_25 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ml_backend__add_trail_ops__UndoList0_27, ml_backend__add_trail_ops__V_40_40);
                  }
                }
              else
                ml_backend__add_trail_ops__UndoList_25 = ml_backend__add_trail_ops__UndoList0_27;
            }
            break;
        }
        {
          ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(ml_backend__add_trail_ops__Goal0_14, &ml_backend__add_trail_ops__Goal1_31, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, &ml_backend__add_trail_ops__STATE_VARIABLE_Info_42_42);
        }
        switch (ml_backend__add_trail_ops__CodeModel_4) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__add_trail_ops__ResetTicketCommitGoal_33;
              MR_Word ml_backend__add_trail_ops__PruneTicketGoal_34;
              MR_Word ml_backend__add_trail_ops__V_43_43;

              {
                ml_backend__add_trail_ops__gen_reset_ticket_commit_4_p_0(ml_backend__add_trail_ops__TicketVar_5, ml_backend__add_trail_ops__Context_24, &ml_backend__add_trail_ops__ResetTicketCommitGoal_33, ml_backend__add_trail_ops__STATE_VARIABLE_Info_42_42);
              }
              {
                ml_backend__add_trail_ops__gen_prune_ticket_3_p_0(ml_backend__add_trail_ops__Context_24, &ml_backend__add_trail_ops__PruneTicketGoal_34, ml_backend__add_trail_ops__STATE_VARIABLE_Info_42_42);
              }
              {
                ml_backend__add_trail_ops__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_43_43, 0) = ((MR_Box) (ml_backend__add_trail_ops__PruneTicketGoal_34));
                MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ml_backend__add_trail_ops__PruneList_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__PruneList_32, 0) = ((MR_Box) (ml_backend__add_trail_ops__ResetTicketCommitGoal_33));
                MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__PruneList_32, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_43_43));
              }
            }
            break;
          case (MR_Integer) 2:
            ml_backend__add_trail_ops__PruneList_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
        ml_backend__add_trail_ops__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal1_31, (MR_Integer) 0)));
        ml_backend__add_trail_ops__GoalInfo1_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal1_31, (MR_Integer) 1)));
        ml_backend__add_trail_ops__TypeCtorInfo_52_52 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
        {
          ml_backend__add_trail_ops__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_47_47, 0) = ((MR_Box) (ml_backend__add_trail_ops__Goal1_31));
          MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ml_backend__add_trail_ops__V_46_46 = mercury__list__f_43_43_2_f_0(ml_backend__add_trail_ops__TypeCtorInfo_52_52, ml_backend__add_trail_ops__V_47_47, ml_backend__add_trail_ops__PruneList_32);
        }
        {
          ml_backend__add_trail_ops__V_45_45 = mercury__list__f_43_43_2_f_0(ml_backend__add_trail_ops__TypeCtorInfo_52_52, ml_backend__add_trail_ops__UndoList_25, ml_backend__add_trail_ops__V_46_46);
        }
        {
          hlds__hlds_goal__conj_list_to_goal_3_p_0(ml_backend__add_trail_ops__V_45_45, ml_backend__add_trail_ops__GoalInfo1_36, &ml_backend__add_trail_ops__Goal_16);
        }
        {
          ml_backend__add_trail_ops__disj_add_trail_ops_7_p_0(ml_backend__add_trail_ops__Goals0_15, &ml_backend__add_trail_ops__Goals_17, (MR_Integer) 1, ml_backend__add_trail_ops__CodeModel_4, ml_backend__add_trail_ops__TicketVar_5, ml_backend__add_trail_ops__STATE_VARIABLE_Info_42_42, ml_backend__add_trail_ops__STATE_VARIABLE_Info_7);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__add_trail_ops__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__Goal_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__Goals_17));
        }
      }
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__conj_add_trail_ops_4_p_0_1(
  MR_Box ml_backend__add_trail_ops__closure_arg,
  MR_Box ml_backend__add_trail_ops__wrapper_arg_1,
  MR_Box * ml_backend__add_trail_ops__wrapper_arg_2,
  MR_Box ml_backend__add_trail_ops__wrapper_arg_3,
  MR_Box * ml_backend__add_trail_ops__wrapper_arg_4)
{
  {
    MR_Box ml_backend__add_trail_ops__closure = ml_backend__add_trail_ops__closure_arg;
    MR_Word ml_backend__add_trail_ops__conv1_Goal_6;
    MR_Word ml_backend__add_trail_ops__conv0_STATE_VARIABLE_Info_11;

    {
      ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(((MR_Word) ml_backend__add_trail_ops__wrapper_arg_1), &ml_backend__add_trail_ops__conv1_Goal_6, ((MR_Word) ml_backend__add_trail_ops__wrapper_arg_3), &ml_backend__add_trail_ops__conv0_STATE_VARIABLE_Info_11);
    }
    *ml_backend__add_trail_ops__wrapper_arg_2 = ((MR_Box) (ml_backend__add_trail_ops__conv1_Goal_6));
    *ml_backend__add_trail_ops__wrapper_arg_4 = ((MR_Box) (ml_backend__add_trail_ops__conv0_STATE_VARIABLE_Info_11));
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__conj_add_trail_ops_4_p_0(
  MR_Word ml_backend__add_trail_ops__Goals0_5,
  MR_Word * ml_backend__add_trail_ops__Goals_6,
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_8,
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_9)
{
  {
    MR_bool ml_backend__add_trail_ops__succeeded;
    MR_Word ml_backend__add_trail_ops__TypeCtorInfo_16_16 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    MR_Box ml_backend__add_trail_ops__conv2_STATE_VARIABLE_Info_9;

    {
      mercury__list__map_foldl_5_p_0(ml_backend__add_trail_ops__TypeCtorInfo_16_16, ml_backend__add_trail_ops__TypeCtorInfo_16_16, (MR_Word) &ml_backend__add_trail_ops__ml_backend__add_trail_ops__type_ctor_info_trail_ops_info_0, (MR_Word) &ml_backend__add_trail_ops_scalar_common_2[1], ml_backend__add_trail_ops__Goals0_5, ml_backend__add_trail_ops__Goals_6, ((MR_Box) (ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_8)), &ml_backend__add_trail_ops__conv2_STATE_VARIABLE_Info_9);
    }
    *ml_backend__add_trail_ops__STATE_VARIABLE_Info_9 = ((MR_Word) ml_backend__add_trail_ops__conv2_STATE_VARIABLE_Info_9);
  }
}

static void MR_CALL 
ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_p_0(
  MR_Word ml_backend__add_trail_ops__GoalExpr0_6,
  MR_Word ml_backend__add_trail_ops__GoalInfo0_7,
  MR_Word * ml_backend__add_trail_ops__Goal_8,
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102,
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_103)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__add_trail_ops__succeeded;

        switch (MR_tag((MR_Word) ml_backend__add_trail_ops__GoalExpr0_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__add_trail_ops__InnerGoal_26 = (MR_Word) MR_body(((MR_Word) ml_backend__add_trail_ops__GoalExpr0_6), (MR_Integer) 0);
              MR_Word ml_backend__add_trail_ops__InnerGoalInfo_29;
              MR_Word ml_backend__add_trail_ops__Determinism_30;
              MR_Word ml_backend__add_trail_ops__NumSolns_32;
              MR_Word ml_backend__add_trail_ops__True_33;
              MR_Word ml_backend__add_trail_ops__Fail_34;
              MR_Word ml_backend__add_trail_ops__ModuleInfo_35;
              MR_Word ml_backend__add_trail_ops__ThenGoal_36;
              MR_Word ml_backend__add_trail_ops__NewOuterGoal_37;
              MR_Word ml_backend__add_trail_ops__Context_180;
              MR_Word ml_backend__add_trail_ops__V_28_28;
              MR_Word ml_backend__add_trail_ops___CanFail_31;
              MR_Word ml_backend__add_trail_ops__V_219_219;
              MR_Word ml_backend__add_trail_ops__V_220_220;
              MR_Word ml_backend__add_trail_ops__V_221_221;
              MR_Word ml_backend__add_trail_ops__V_222_222;

              {
                ml_backend__add_trail_ops__Context_180 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__add_trail_ops__GoalInfo0_7);
              }
              ml_backend__add_trail_ops__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__InnerGoal_26, (MR_Integer) 0)));
              ml_backend__add_trail_ops__InnerGoalInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__InnerGoal_26, (MR_Integer) 1)));
              {
                ml_backend__add_trail_ops__Determinism_30 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ml_backend__add_trail_ops__InnerGoalInfo_29);
              }
              {
                parse_tree__prog_data__determinism_components_3_p_0(ml_backend__add_trail_ops__Determinism_30, &ml_backend__add_trail_ops___CanFail_31, &ml_backend__add_trail_ops__NumSolns_32);
              }
              {
                ml_backend__add_trail_ops__True_33 = hlds__make_goal__true_goal_with_context_1_f_0(ml_backend__add_trail_ops__Context_180);
              }
              {
                ml_backend__add_trail_ops__Fail_34 = hlds__make_goal__fail_goal_with_context_1_f_0(ml_backend__add_trail_ops__Context_180);
              }
              ml_backend__add_trail_ops__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, (MR_Integer) 0)));
              ml_backend__add_trail_ops__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, (MR_Integer) 1)));
              ml_backend__add_trail_ops__ModuleInfo_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, (MR_Integer) 2)));
              ml_backend__add_trail_ops__V_221_221 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, (MR_Integer) 3)))) & (MR_Integer) 1);
              ml_backend__add_trail_ops__V_222_222 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              switch (ml_backend__add_trail_ops__NumSolns_32) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 3:
                case (MR_Integer) 2:
                case (MR_Integer) 1:
                  ml_backend__add_trail_ops__ThenGoal_36 = ml_backend__add_trail_ops__Fail_34;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word ml_backend__add_trail_ops__V_164_164;

                    {
                      ml_backend__add_trail_ops__V_164_164 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                    }
                    {
                      ml_backend__add_trail_ops__trail_generate_call_8_p_0((MR_String) "unused", (MR_Integer) 0, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_164_164, ml_backend__add_trail_ops__ModuleInfo_35, ml_backend__add_trail_ops__Context_180, &ml_backend__add_trail_ops__ThenGoal_36);
                    }
                  }
                  break;
              }
              {
                ml_backend__add_trail_ops__NewOuterGoal_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__NewOuterGoal_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__NewOuterGoal_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__NewOuterGoal_37, 2) = ((MR_Box) (ml_backend__add_trail_ops__InnerGoal_26));
                MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__NewOuterGoal_37, 3) = ((MR_Box) (ml_backend__add_trail_ops__ThenGoal_36));
                MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__NewOuterGoal_37, 4) = ((MR_Box) (ml_backend__add_trail_ops__True_33));
              }
              /* direct tailcall eliminated */
              {
                MR_Word ml_backend__add_trail_ops__GoalExpr0__tmp_copy_6 = ml_backend__add_trail_ops__NewOuterGoal_37;

                ml_backend__add_trail_ops__GoalExpr0_6 = ml_backend__add_trail_ops__GoalExpr0__tmp_copy_6;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *ml_backend__add_trail_ops__Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__GoalExpr0_6));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
              }
              *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103 = ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *ml_backend__add_trail_ops__Goal_8 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__GoalExpr0_6));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
                  }
                  *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103 = ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102;
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *ml_backend__add_trail_ops__Goal_8 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__GoalExpr0_6));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
                  }
                  *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103 = ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ml_backend__add_trail_ops__ConjType_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 1)));
                  MR_Word ml_backend__add_trail_ops__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 2)));
                  MR_Word ml_backend__add_trail_ops__Goals_12;
                  MR_Word ml_backend__add_trail_ops__GoalExpr_13;

                  {
                    ml_backend__add_trail_ops__conj_add_trail_ops_4_p_0(ml_backend__add_trail_ops__Goals0_11, &ml_backend__add_trail_ops__Goals_12, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                  }
                  {
                    ml_backend__add_trail_ops__GoalExpr_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_13, 1) = ((MR_Box) (ml_backend__add_trail_ops__ConjType_10));
                    MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_13, 2) = ((MR_Box) (ml_backend__add_trail_ops__Goals_12));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *ml_backend__add_trail_ops__Goal_8 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__GoalExpr_13));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ml_backend__add_trail_ops__Disjuncts0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 1)));
                  MR_Word ml_backend__add_trail_ops__GoalExpr_178;

                  if ((ml_backend__add_trail_ops__Disjuncts0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      ml_backend__add_trail_ops__GoalExpr_178 = ml_backend__add_trail_ops__GoalExpr0_6;
                      *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103 = ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102;
                    }
                  else
                    {
                      MR_Word ml_backend__add_trail_ops__Context_17;
                      MR_Word ml_backend__add_trail_ops__CodeModel_18;
                      MR_Word ml_backend__add_trail_ops__TicketVar_19;
                      MR_Word ml_backend__add_trail_ops__StoreTicketGoal_20;
                      MR_Word ml_backend__add_trail_ops__Disjuncts_21;
                      MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_168_168;
                      MR_Word ml_backend__add_trail_ops__V_172_172;
                      MR_Word ml_backend__add_trail_ops__V_173_173;
                      MR_Word ml_backend__add_trail_ops__V_174_174;
                      MR_Word ml_backend__add_trail_ops__V_175_175;

                      {
                        ml_backend__add_trail_ops__Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__add_trail_ops__GoalInfo0_7);
                      }
                      {
                        ml_backend__add_trail_ops__CodeModel_18 = hlds__code_model__goal_info_get_code_model_1_f_0(ml_backend__add_trail_ops__GoalInfo0_7);
                      }
                      {
                        ml_backend__add_trail_ops__new_ticket_var_3_p_0(&ml_backend__add_trail_ops__TicketVar_19, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, &ml_backend__add_trail_ops__STATE_VARIABLE_Info_168_168);
                      }
                      {
                        ml_backend__add_trail_ops__gen_store_ticket_4_p_0(ml_backend__add_trail_ops__TicketVar_19, ml_backend__add_trail_ops__Context_17, &ml_backend__add_trail_ops__StoreTicketGoal_20, ml_backend__add_trail_ops__STATE_VARIABLE_Info_168_168);
                      }
                      {
                        ml_backend__add_trail_ops__disj_add_trail_ops_7_p_0(ml_backend__add_trail_ops__Disjuncts0_14, &ml_backend__add_trail_ops__Disjuncts_21, (MR_Integer) 0, ml_backend__add_trail_ops__CodeModel_18, ml_backend__add_trail_ops__TicketVar_19, ml_backend__add_trail_ops__STATE_VARIABLE_Info_168_168, ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
                      {
                        ml_backend__add_trail_ops__V_175_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_175_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_175_175, 1) = ((MR_Box) (ml_backend__add_trail_ops__Disjuncts_21));
                      }
                      {
                        ml_backend__add_trail_ops__V_174_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_174_174, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_175_175));
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_174_174, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
                      }
                      {
                        ml_backend__add_trail_ops__V_173_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_173_173, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_174_174));
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_173_173, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        ml_backend__add_trail_ops__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_172_172, 0) = ((MR_Box) (ml_backend__add_trail_ops__StoreTicketGoal_20));
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_172_172, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_173_173));
                      }
                      {
                        ml_backend__add_trail_ops__GoalExpr_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_178, 1) = ((MR_Box) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_178, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_172_172));
                      }
                    }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *ml_backend__add_trail_ops__Goal_8 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__GoalExpr_178));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ml_backend__add_trail_ops__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 1)));
                  MR_Word ml_backend__add_trail_ops__CanFail_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 2)));
                  MR_Word ml_backend__add_trail_ops__Cases0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 3)));
                  MR_Word ml_backend__add_trail_ops__Cases_25;
                  MR_Word ml_backend__add_trail_ops__GoalExpr_179;

                  {
                    ml_backend__add_trail_ops__cases_add_trail_ops_4_p_0(ml_backend__add_trail_ops__Cases0_24, &ml_backend__add_trail_ops__Cases_25, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                  }
                  {
                    ml_backend__add_trail_ops__GoalExpr_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_179, 1) = ((MR_Box) (ml_backend__add_trail_ops__Var_22));
                    MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_179, 2) = ((MR_Box) (ml_backend__add_trail_ops__CanFail_23));
                    MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_179, 3) = ((MR_Box) (ml_backend__add_trail_ops__Cases_25));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *ml_backend__add_trail_ops__Goal_8 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__GoalExpr_179));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word ml_backend__add_trail_ops__Reason_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 1)));
                  MR_Word ml_backend__add_trail_ops__InnerGoal0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 2)));
                  MR_Word ml_backend__add_trail_ops__InnerCodeModel_41;
                  MR_Word ml_backend__add_trail_ops__OuterCodeModel_42;
                  MR_Word ml_backend__add_trail_ops__GoalExpr_191;
                  MR_Word ml_backend__add_trail_ops__InnerGoalInfo_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__InnerGoal0_39, (MR_Integer) 1)));
                  MR_Word ml_backend__add_trail_ops__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__InnerGoal0_39, (MR_Integer) 0)));

                  {
                    ml_backend__add_trail_ops__InnerCodeModel_41 = hlds__code_model__goal_info_get_code_model_1_f_0(ml_backend__add_trail_ops__InnerGoalInfo_197);
                  }
                  {
                    ml_backend__add_trail_ops__OuterCodeModel_42 = hlds__code_model__goal_info_get_code_model_1_f_0(ml_backend__add_trail_ops__GoalInfo0_7);
                  }
                  ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__InnerCodeModel_41 == (MR_Integer) 2);
                  if (ml_backend__add_trail_ops__succeeded)
                    {
                      ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__OuterCodeModel_42 == (MR_Integer) 2);
                      ml_backend__add_trail_ops__succeeded = !(ml_backend__add_trail_ops__succeeded);
                    }
                  if (ml_backend__add_trail_ops__succeeded)
                    {
                      MR_Word ml_backend__add_trail_ops__SavedTicketCounterVar_43;
                      MR_Word ml_backend__add_trail_ops__MarkTicketStackGoal_44;
                      MR_Word ml_backend__add_trail_ops__ResetTicketCommitGoal_45;
                      MR_Word ml_backend__add_trail_ops__PruneTicketsToGoal_46;
                      MR_Word ml_backend__add_trail_ops__ResetTicketUndoGoal_47;
                      MR_Word ml_backend__add_trail_ops__DiscardTicketGoal_48;
                      MR_Word ml_backend__add_trail_ops__FailGoal_49;
                      MR_Word ml_backend__add_trail_ops__Goal2_50;
                      MR_Word ml_backend__add_trail_ops__SuccCode_51;
                      MR_Word ml_backend__add_trail_ops__Goal3_55;
                      MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_134_134;
                      MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_135_135;
                      MR_Word ml_backend__add_trail_ops__V_137_137;
                      MR_Word ml_backend__add_trail_ops__V_138_138;
                      MR_Word ml_backend__add_trail_ops__V_140_140;
                      MR_Word ml_backend__add_trail_ops__V_141_141;
                      MR_Word ml_backend__add_trail_ops__V_142_142;
                      MR_Word ml_backend__add_trail_ops__V_155_155;
                      MR_Word ml_backend__add_trail_ops__V_156_156;
                      MR_Word ml_backend__add_trail_ops__V_157_157;
                      MR_Word ml_backend__add_trail_ops__Context_181;
                      MR_Word ml_backend__add_trail_ops__TicketVar_182;
                      MR_Word ml_backend__add_trail_ops__StoreTicketGoal_183;
                      MR_Word ml_backend__add_trail_ops__InnerGoal_184;

                      {
                        ml_backend__add_trail_ops__Context_181 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__add_trail_ops__GoalInfo0_7);
                      }
                      {
                        ml_backend__add_trail_ops__new_ticket_counter_var_3_p_0(&ml_backend__add_trail_ops__SavedTicketCounterVar_43, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, &ml_backend__add_trail_ops__STATE_VARIABLE_Info_134_134);
                      }
                      {
                        ml_backend__add_trail_ops__new_ticket_var_3_p_0(&ml_backend__add_trail_ops__TicketVar_182, ml_backend__add_trail_ops__STATE_VARIABLE_Info_134_134, &ml_backend__add_trail_ops__STATE_VARIABLE_Info_135_135);
                      }
                      {
                        ml_backend__add_trail_ops__gen_mark_ticket_stack_4_p_0(ml_backend__add_trail_ops__SavedTicketCounterVar_43, ml_backend__add_trail_ops__Context_181, &ml_backend__add_trail_ops__MarkTicketStackGoal_44, ml_backend__add_trail_ops__STATE_VARIABLE_Info_135_135);
                      }
                      {
                        ml_backend__add_trail_ops__gen_store_ticket_4_p_0(ml_backend__add_trail_ops__TicketVar_182, ml_backend__add_trail_ops__Context_181, &ml_backend__add_trail_ops__StoreTicketGoal_183, ml_backend__add_trail_ops__STATE_VARIABLE_Info_135_135);
                      }
                      {
                        ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(ml_backend__add_trail_ops__InnerGoal0_39, &ml_backend__add_trail_ops__InnerGoal_184, ml_backend__add_trail_ops__STATE_VARIABLE_Info_135_135, ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
                      {
                        ml_backend__add_trail_ops__gen_reset_ticket_commit_4_p_0(ml_backend__add_trail_ops__TicketVar_182, ml_backend__add_trail_ops__Context_181, &ml_backend__add_trail_ops__ResetTicketCommitGoal_45, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
                      {
                        ml_backend__add_trail_ops__gen_prune_tickets_to_4_p_0(ml_backend__add_trail_ops__SavedTicketCounterVar_43, ml_backend__add_trail_ops__Context_181, &ml_backend__add_trail_ops__PruneTicketsToGoal_46, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
                      {
                        ml_backend__add_trail_ops__gen_reset_ticket_undo_4_p_0(ml_backend__add_trail_ops__TicketVar_182, ml_backend__add_trail_ops__Context_181, &ml_backend__add_trail_ops__ResetTicketUndoGoal_47, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
                      {
                        ml_backend__add_trail_ops__gen_discard_ticket_3_p_0(ml_backend__add_trail_ops__Context_181, &ml_backend__add_trail_ops__DiscardTicketGoal_48, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
                      {
                        ml_backend__add_trail_ops__FailGoal_49 = hlds__make_goal__fail_goal_with_context_1_f_0(ml_backend__add_trail_ops__Context_181);
                      }
                      {
                        ml_backend__add_trail_ops__V_137_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_137_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_137_137, 1) = ((MR_Box) (ml_backend__add_trail_ops__Reason_38));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_137_137, 2) = ((MR_Box) (ml_backend__add_trail_ops__InnerGoal_184));
                      }
                      {
                        ml_backend__add_trail_ops__Goal2_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal2_50, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_137_137));
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal2_50, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
                      }
                      {
                        ml_backend__add_trail_ops__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_142_142, 0) = ((MR_Box) (ml_backend__add_trail_ops__PruneTicketsToGoal_46));
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        ml_backend__add_trail_ops__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_141_141, 0) = ((MR_Box) (ml_backend__add_trail_ops__ResetTicketCommitGoal_45));
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_141_141, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_142_142));
                      }
                      {
                        ml_backend__add_trail_ops__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_140_140, 0) = ((MR_Box) (ml_backend__add_trail_ops__Goal2_50));
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_140_140, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_141_141));
                      }
                      {
                        ml_backend__add_trail_ops__V_138_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_138_138, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_138_138, 1) = ((MR_Box) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_138_138, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_140_140));
                      }
                      {
                        ml_backend__add_trail_ops__SuccCode_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__SuccCode_51, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_138_138));
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__SuccCode_51, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
                      }
                      switch (ml_backend__add_trail_ops__OuterCodeModel_42) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                        case (MR_Integer) 2:
                          ml_backend__add_trail_ops__Goal3_55 = ml_backend__add_trail_ops__SuccCode_51;
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word ml_backend__add_trail_ops__FailGoalInfo_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__FailGoal_49, (MR_Integer) 1)));
                            MR_Word ml_backend__add_trail_ops__FailCode_54;
                            MR_Word ml_backend__add_trail_ops__V_144_144;
                            MR_Word ml_backend__add_trail_ops__V_146_146;
                            MR_Word ml_backend__add_trail_ops__V_147_147;
                            MR_Word ml_backend__add_trail_ops__V_148_148;
                            MR_Word ml_backend__add_trail_ops__V_150_150;
                            MR_Word ml_backend__add_trail_ops__V_151_151;
                            MR_Word ml_backend__add_trail_ops__V_152_152;
                            MR_Word ml_backend__add_trail_ops__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__FailGoal_49, (MR_Integer) 0)));

                            {
                              ml_backend__add_trail_ops__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_148_148, 0) = ((MR_Box) (ml_backend__add_trail_ops__FailGoal_49));
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_148_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                            {
                              ml_backend__add_trail_ops__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_147_147, 0) = ((MR_Box) (ml_backend__add_trail_ops__DiscardTicketGoal_48));
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_147_147, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_148_148));
                            }
                            {
                              ml_backend__add_trail_ops__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_146_146, 0) = ((MR_Box) (ml_backend__add_trail_ops__ResetTicketUndoGoal_47));
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_146_146, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_147_147));
                            }
                            {
                              ml_backend__add_trail_ops__V_144_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_144_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_144_144, 1) = ((MR_Box) ((MR_Integer) 0));
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_144_144, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_146_146));
                            }
                            {
                              ml_backend__add_trail_ops__FailCode_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__FailCode_54, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_144_144));
                              MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__FailCode_54, 1) = ((MR_Box) (ml_backend__add_trail_ops__FailGoalInfo_53));
                            }
                            {
                              ml_backend__add_trail_ops__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_152_152, 0) = ((MR_Box) (ml_backend__add_trail_ops__FailCode_54));
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_152_152, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                            {
                              ml_backend__add_trail_ops__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_151_151, 0) = ((MR_Box) (ml_backend__add_trail_ops__SuccCode_51));
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_151_151, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_152_152));
                            }
                            {
                              ml_backend__add_trail_ops__V_150_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_150_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_150_150, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_151_151));
                            }
                            {
                              ml_backend__add_trail_ops__Goal3_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal3_55, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_150_150));
                              MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal3_55, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
                            }
                          }
                          break;
                      }
                      {
                        ml_backend__add_trail_ops__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_157_157, 0) = ((MR_Box) (ml_backend__add_trail_ops__Goal3_55));
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_157_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        ml_backend__add_trail_ops__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_156_156, 0) = ((MR_Box) (ml_backend__add_trail_ops__StoreTicketGoal_183));
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_156_156, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_157_157));
                      }
                      {
                        ml_backend__add_trail_ops__V_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_155_155, 0) = ((MR_Box) (ml_backend__add_trail_ops__MarkTicketStackGoal_44));
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_155_155, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_156_156));
                      }
                      {
                        ml_backend__add_trail_ops__GoalExpr_191 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_191, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_191, 1) = ((MR_Box) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_191, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_155_155));
                      }
                    }
                  else
                    {
                      MR_Word ml_backend__add_trail_ops__FGT_57;
                      MR_Word ml_backend__add_trail_ops__V_56_56;

                      ml_backend__add_trail_ops__succeeded = ((((MR_tag((MR_Word) ml_backend__add_trail_ops__Reason_38)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__Reason_38, (MR_Integer) 0)))) == (MR_Integer) 6)));
                      if (ml_backend__add_trail_ops__succeeded)
                        {
                          ml_backend__add_trail_ops__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__Reason_38, (MR_Integer) 1)));
                          ml_backend__add_trail_ops__FGT_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__Reason_38, (MR_Integer) 2)));
                          switch (ml_backend__add_trail_ops__FGT_57) {
                            default:
                              ml_backend__add_trail_ops__succeeded = MR_FALSE;
                              break;
                            case (MR_Integer) 1:
                              ml_backend__add_trail_ops__succeeded = MR_TRUE;
                              break;
                            case (MR_Integer) 2:
                              ml_backend__add_trail_ops__succeeded = MR_TRUE;
                              break;
                          }
                        }
                      if (ml_backend__add_trail_ops__succeeded)
                        {
                          ml_backend__add_trail_ops__GoalExpr_191 = ml_backend__add_trail_ops__GoalExpr0_6;
                          *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103 = ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102;
                        }
                      else
                        {
                          MR_Word ml_backend__add_trail_ops__InnerGoal_185;

                          {
                            ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(ml_backend__add_trail_ops__InnerGoal0_39, &ml_backend__add_trail_ops__InnerGoal_185, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                          }
                          {
                            ml_backend__add_trail_ops__GoalExpr_191 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_191, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                            MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_191, 1) = ((MR_Box) (ml_backend__add_trail_ops__Reason_38));
                            MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_191, 2) = ((MR_Box) (ml_backend__add_trail_ops__InnerGoal_185));
                          }
                        }
                    }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *ml_backend__add_trail_ops__Goal_8 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__GoalExpr_191));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word ml_backend__add_trail_ops__ExistQVars_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 1)));
                  MR_Word ml_backend__add_trail_ops__Cond0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 2)));
                  MR_Word ml_backend__add_trail_ops__Then0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 3)));
                  MR_Word ml_backend__add_trail_ops__Else0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 4)));
                  MR_Word ml_backend__add_trail_ops__Cond_62;
                  MR_Word ml_backend__add_trail_ops__Then1_63;
                  MR_Word ml_backend__add_trail_ops__Else1_64;
                  MR_Word ml_backend__add_trail_ops__OptTrailUsage_65;
                  MR_Word ml_backend__add_trail_ops__CondGoalInfo_67;
                  MR_Word ml_backend__add_trail_ops__CondCodeModel_68;
                  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_107_107;
                  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_108_108;
                  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_109_109;
                  MR_Word ml_backend__add_trail_ops__GoalExpr_212;
                  MR_Word ml_backend__add_trail_ops__V_223_223;
                  MR_Word ml_backend__add_trail_ops__V_224_224;
                  MR_Word ml_backend__add_trail_ops__V_225_225;
                  MR_Word ml_backend__add_trail_ops__V_226_226;
                  MR_Word ml_backend__add_trail_ops__V_66_66;
                  MR_Word ml_backend__add_trail_ops__V_110_110;

                  {
                    ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(ml_backend__add_trail_ops__Cond0_59, &ml_backend__add_trail_ops__Cond_62, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, &ml_backend__add_trail_ops__STATE_VARIABLE_Info_107_107);
                  }
                  {
                    ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(ml_backend__add_trail_ops__Then0_60, &ml_backend__add_trail_ops__Then1_63, ml_backend__add_trail_ops__STATE_VARIABLE_Info_107_107, &ml_backend__add_trail_ops__STATE_VARIABLE_Info_108_108);
                  }
                  {
                    ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(ml_backend__add_trail_ops__Else0_61, &ml_backend__add_trail_ops__Else1_64, ml_backend__add_trail_ops__STATE_VARIABLE_Info_108_108, &ml_backend__add_trail_ops__STATE_VARIABLE_Info_109_109);
                  }
                  ml_backend__add_trail_ops__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_109_109, (MR_Integer) 0)));
                  ml_backend__add_trail_ops__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_109_109, (MR_Integer) 1)));
                  ml_backend__add_trail_ops__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_109_109, (MR_Integer) 2)));
                  ml_backend__add_trail_ops__OptTrailUsage_65 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_109_109, (MR_Integer) 3)))) & (MR_Integer) 1);
                  ml_backend__add_trail_ops__V_226_226 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_109_109, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  ml_backend__add_trail_ops__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Cond_62, (MR_Integer) 0)));
                  ml_backend__add_trail_ops__CondGoalInfo_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Cond_62, (MR_Integer) 1)));
                  {
                    ml_backend__add_trail_ops__CondCodeModel_68 = hlds__code_model__goal_info_get_code_model_1_f_0(ml_backend__add_trail_ops__CondGoalInfo_67);
                  }
                  ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__OptTrailUsage_65 == (MR_Integer) 1);
                  if (ml_backend__add_trail_ops__succeeded)
                    {
                      ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__CondCodeModel_68 == (MR_Integer) 2);
                      ml_backend__add_trail_ops__succeeded = !(ml_backend__add_trail_ops__succeeded);
                      if (ml_backend__add_trail_ops__succeeded)
                        {
                          {
                            ml_backend__add_trail_ops__V_110_110 = hlds__goal_form__goal_cannot_modify_trail_1_f_0(ml_backend__add_trail_ops__CondGoalInfo_67);
                          }
                          ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__V_110_110 == (MR_Integer) 1);
                        }
                    }
                  if (ml_backend__add_trail_ops__succeeded)
                    {
                      {
                        ml_backend__add_trail_ops__GoalExpr_212 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_212, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_212, 1) = ((MR_Box) (ml_backend__add_trail_ops__ExistQVars_58));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_212, 2) = ((MR_Box) (ml_backend__add_trail_ops__Cond_62));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_212, 3) = ((MR_Box) (ml_backend__add_trail_ops__Then1_63));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_212, 4) = ((MR_Box) (ml_backend__add_trail_ops__Else1_64));
                      }
                      *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103 = ml_backend__add_trail_ops__STATE_VARIABLE_Info_109_109;
                    }
                  else
                    {
                      MR_Word ml_backend__add_trail_ops__Then1GoalInfo_70;
                      MR_Word ml_backend__add_trail_ops__Then_72;
                      MR_Word ml_backend__add_trail_ops__Else1GoalInfo_75;
                      MR_Word ml_backend__add_trail_ops__Else_76;
                      MR_Word ml_backend__add_trail_ops__IfThenElse_77;
                      MR_Word ml_backend__add_trail_ops__V_123_123;
                      MR_Word ml_backend__add_trail_ops__V_125_125;
                      MR_Word ml_backend__add_trail_ops__V_126_126;
                      MR_Word ml_backend__add_trail_ops__V_127_127;
                      MR_Word ml_backend__add_trail_ops__V_129_129;
                      MR_Word ml_backend__add_trail_ops__V_131_131;
                      MR_Word ml_backend__add_trail_ops__V_132_132;
                      MR_Word ml_backend__add_trail_ops__Context_200;
                      MR_Word ml_backend__add_trail_ops__TicketVar_201;
                      MR_Word ml_backend__add_trail_ops__StoreTicketGoal_202;
                      MR_Word ml_backend__add_trail_ops__ResetTicketUndoGoal_204;
                      MR_Word ml_backend__add_trail_ops__DiscardTicketGoal_205;
                      MR_Word ml_backend__add_trail_ops__V_69_69;
                      MR_Word ml_backend__add_trail_ops__V_74_74;

                      {
                        ml_backend__add_trail_ops__new_ticket_var_3_p_0(&ml_backend__add_trail_ops__TicketVar_201, ml_backend__add_trail_ops__STATE_VARIABLE_Info_109_109, ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
                      {
                        ml_backend__add_trail_ops__Context_200 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__add_trail_ops__GoalInfo0_7);
                      }
                      {
                        ml_backend__add_trail_ops__gen_store_ticket_4_p_0(ml_backend__add_trail_ops__TicketVar_201, ml_backend__add_trail_ops__Context_200, &ml_backend__add_trail_ops__StoreTicketGoal_202, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
                      ml_backend__add_trail_ops__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Then1_63, (MR_Integer) 0)));
                      ml_backend__add_trail_ops__Then1GoalInfo_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Then1_63, (MR_Integer) 1)));
                      switch (ml_backend__add_trail_ops__CondCodeModel_68) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                        case (MR_Integer) 1:
                          {
                            MR_Word ml_backend__add_trail_ops__PruneTicketGoal_73;
                            MR_Word ml_backend__add_trail_ops__V_112_112;
                            MR_Word ml_backend__add_trail_ops__V_114_114;
                            MR_Word ml_backend__add_trail_ops__V_115_115;
                            MR_Word ml_backend__add_trail_ops__V_116_116;
                            MR_Word ml_backend__add_trail_ops__ResetTicketCommitGoal_198;

                            {
                              ml_backend__add_trail_ops__gen_reset_ticket_commit_4_p_0(ml_backend__add_trail_ops__TicketVar_201, ml_backend__add_trail_ops__Context_200, &ml_backend__add_trail_ops__ResetTicketCommitGoal_198, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                            }
                            {
                              ml_backend__add_trail_ops__gen_prune_ticket_3_p_0(ml_backend__add_trail_ops__Context_200, &ml_backend__add_trail_ops__PruneTicketGoal_73, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                            }
                            {
                              ml_backend__add_trail_ops__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_116_116, 0) = ((MR_Box) (ml_backend__add_trail_ops__Then1_63));
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                            {
                              ml_backend__add_trail_ops__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_115_115, 0) = ((MR_Box) (ml_backend__add_trail_ops__PruneTicketGoal_73));
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_115_115, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_116_116));
                            }
                            {
                              ml_backend__add_trail_ops__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_114_114, 0) = ((MR_Box) (ml_backend__add_trail_ops__ResetTicketCommitGoal_198));
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_114_114, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_115_115));
                            }
                            {
                              ml_backend__add_trail_ops__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_112_112, 1) = ((MR_Box) ((MR_Integer) 0));
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_112_112, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_114_114));
                            }
                            {
                              ml_backend__add_trail_ops__Then_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Then_72, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_112_112));
                              MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Then_72, 1) = ((MR_Box) (ml_backend__add_trail_ops__Then1GoalInfo_70));
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Word ml_backend__add_trail_ops__ResetTicketSolveGoal_71;
                            MR_Word ml_backend__add_trail_ops__V_118_118;
                            MR_Word ml_backend__add_trail_ops__V_120_120;
                            MR_Word ml_backend__add_trail_ops__V_121_121;

                            {
                              ml_backend__add_trail_ops__gen_reset_ticket_solve_4_p_0(ml_backend__add_trail_ops__TicketVar_201, ml_backend__add_trail_ops__Context_200, &ml_backend__add_trail_ops__ResetTicketSolveGoal_71, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                            }
                            {
                              ml_backend__add_trail_ops__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_121_121, 0) = ((MR_Box) (ml_backend__add_trail_ops__Then1_63));
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                            {
                              ml_backend__add_trail_ops__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_120_120, 0) = ((MR_Box) (ml_backend__add_trail_ops__ResetTicketSolveGoal_71));
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_120_120, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_121_121));
                            }
                            {
                              ml_backend__add_trail_ops__V_118_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_118_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_118_118, 1) = ((MR_Box) ((MR_Integer) 0));
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_118_118, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_120_120));
                            }
                            {
                              ml_backend__add_trail_ops__Then_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Then_72, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_118_118));
                              MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Then_72, 1) = ((MR_Box) (ml_backend__add_trail_ops__Then1GoalInfo_70));
                            }
                          }
                          break;
                      }
                      {
                        ml_backend__add_trail_ops__gen_reset_ticket_undo_4_p_0(ml_backend__add_trail_ops__TicketVar_201, ml_backend__add_trail_ops__Context_200, &ml_backend__add_trail_ops__ResetTicketUndoGoal_204, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
                      {
                        ml_backend__add_trail_ops__gen_discard_ticket_3_p_0(ml_backend__add_trail_ops__Context_200, &ml_backend__add_trail_ops__DiscardTicketGoal_205, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
                      ml_backend__add_trail_ops__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Else1_64, (MR_Integer) 0)));
                      ml_backend__add_trail_ops__Else1GoalInfo_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Else1_64, (MR_Integer) 1)));
                      {
                        ml_backend__add_trail_ops__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_127_127, 0) = ((MR_Box) (ml_backend__add_trail_ops__Else1_64));
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        ml_backend__add_trail_ops__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_126_126, 0) = ((MR_Box) (ml_backend__add_trail_ops__DiscardTicketGoal_205));
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_126_126, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_127_127));
                      }
                      {
                        ml_backend__add_trail_ops__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_125_125, 0) = ((MR_Box) (ml_backend__add_trail_ops__ResetTicketUndoGoal_204));
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_125_125, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_126_126));
                      }
                      {
                        ml_backend__add_trail_ops__V_123_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_123_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_123_123, 1) = ((MR_Box) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_123_123, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_125_125));
                      }
                      {
                        ml_backend__add_trail_ops__Else_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Else_76, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_123_123));
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Else_76, 1) = ((MR_Box) (ml_backend__add_trail_ops__Else1GoalInfo_75));
                      }
                      {
                        ml_backend__add_trail_ops__V_129_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_129_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_129_129, 1) = ((MR_Box) (ml_backend__add_trail_ops__ExistQVars_58));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_129_129, 2) = ((MR_Box) (ml_backend__add_trail_ops__Cond_62));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_129_129, 3) = ((MR_Box) (ml_backend__add_trail_ops__Then_72));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_129_129, 4) = ((MR_Box) (ml_backend__add_trail_ops__Else_76));
                      }
                      {
                        ml_backend__add_trail_ops__IfThenElse_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__IfThenElse_77, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_129_129));
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__IfThenElse_77, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
                      }
                      {
                        ml_backend__add_trail_ops__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_132_132, 0) = ((MR_Box) (ml_backend__add_trail_ops__IfThenElse_77));
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        ml_backend__add_trail_ops__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_131_131, 0) = ((MR_Box) (ml_backend__add_trail_ops__StoreTicketGoal_202));
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_131_131, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_132_132));
                      }
                      {
                        ml_backend__add_trail_ops__GoalExpr_212 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_212, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_212, 1) = ((MR_Box) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_212, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_131_131));
                      }
                    }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *ml_backend__add_trail_ops__Goal_8 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__GoalExpr_212));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
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
      }
      break;
    }
}

static void MR_CALL 
ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(
  MR_Word ml_backend__add_trail_ops__Goal0_5,
  MR_Word * ml_backend__add_trail_ops__Goal_6,
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_10,
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_11)
{
  {
    MR_bool ml_backend__add_trail_ops__succeeded;
    MR_Word ml_backend__add_trail_ops__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal0_5, (MR_Integer) 0)));
    MR_Word ml_backend__add_trail_ops__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal0_5, (MR_Integer) 1)));

    {
      ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_p_0(ml_backend__add_trail_ops__GoalExpr0_8, ml_backend__add_trail_ops__GoalInfo_9, ml_backend__add_trail_ops__Goal_6, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_10, ml_backend__add_trail_ops__STATE_VARIABLE_Info_11);
    }
  }
}

void MR_CALL 
ml_backend__add_trail_ops__add_trail_ops_5_p_0(
  MR_Word ml_backend__add_trail_ops__OptTrailUsage_6,
  MR_Word ml_backend__add_trail_ops__GenerateInline_7,
  MR_Word ml_backend__add_trail_ops__ModuleInfo0_8,
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Proc_0_21,
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Proc_22)
{
  {
    MR_bool ml_backend__add_trail_ops__succeeded;
    MR_Word ml_backend__add_trail_ops__Goal0_10;
    MR_Word ml_backend__add_trail_ops__VarSet0_11;
    MR_Word ml_backend__add_trail_ops__VarTypes0_12;
    MR_Word ml_backend__add_trail_ops__TrailOpsInfo0_13;
    MR_Word ml_backend__add_trail_ops__Goal_14;
    MR_Word ml_backend__add_trail_ops__TrailOpsInfo_15;
    MR_Word ml_backend__add_trail_ops__VarSet_16;
    MR_Word ml_backend__add_trail_ops__VarTypes_17;
    MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Proc_23_23;
    MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Proc_24_24;
    MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Proc_25_25;
    MR_Word ml_backend__add_trail_ops__GoalExpr0_33;
    MR_Word ml_backend__add_trail_ops__GoalInfo_34;
    MR_Word ml_backend__add_trail_ops__V_18_18;
    MR_Word ml_backend__add_trail_ops__V_19_19;
    MR_Word ml_backend__add_trail_ops__V_20_20;

    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ml_backend__add_trail_ops__STATE_VARIABLE_Proc_0_21, &ml_backend__add_trail_ops__Goal0_10);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ml_backend__add_trail_ops__STATE_VARIABLE_Proc_0_21, &ml_backend__add_trail_ops__VarSet0_11);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ml_backend__add_trail_ops__STATE_VARIABLE_Proc_0_21, &ml_backend__add_trail_ops__VarTypes0_12);
    }
    {
      ml_backend__add_trail_ops__TrailOpsInfo0_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__TrailOpsInfo0_13, 0) = ((MR_Box) (ml_backend__add_trail_ops__VarSet0_11));
      MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__TrailOpsInfo0_13, 1) = ((MR_Box) (ml_backend__add_trail_ops__VarTypes0_12));
      MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__TrailOpsInfo0_13, 2) = ((MR_Box) (ml_backend__add_trail_ops__ModuleInfo0_8));
      MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__TrailOpsInfo0_13, 3) = ((MR_Box) ((ml_backend__add_trail_ops__OptTrailUsage_6 | ((ml_backend__add_trail_ops__GenerateInline_7 << (MR_Integer) 1)))));
    }
    ml_backend__add_trail_ops__GoalExpr0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal0_10, (MR_Integer) 0)));
    ml_backend__add_trail_ops__GoalInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal0_10, (MR_Integer) 1)));
    {
      ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_p_0(ml_backend__add_trail_ops__GoalExpr0_33, ml_backend__add_trail_ops__GoalInfo_34, &ml_backend__add_trail_ops__Goal_14, ml_backend__add_trail_ops__TrailOpsInfo0_13, &ml_backend__add_trail_ops__TrailOpsInfo_15);
    }
    ml_backend__add_trail_ops__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__TrailOpsInfo_15, (MR_Integer) 0)));
    ml_backend__add_trail_ops__VarTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__TrailOpsInfo_15, (MR_Integer) 1)));
    ml_backend__add_trail_ops__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__TrailOpsInfo_15, (MR_Integer) 2)));
    ml_backend__add_trail_ops__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__TrailOpsInfo_15, (MR_Integer) 3)))) & (MR_Integer) 1);
    ml_backend__add_trail_ops__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__TrailOpsInfo_15, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    {
      hlds__hlds_pred__proc_info_set_goal_3_p_0(ml_backend__add_trail_ops__Goal_14, ml_backend__add_trail_ops__STATE_VARIABLE_Proc_0_21, &ml_backend__add_trail_ops__STATE_VARIABLE_Proc_23_23);
    }
    {
      hlds__hlds_pred__proc_info_set_varset_3_p_0(ml_backend__add_trail_ops__VarSet_16, ml_backend__add_trail_ops__STATE_VARIABLE_Proc_23_23, &ml_backend__add_trail_ops__STATE_VARIABLE_Proc_24_24);
    }
    {
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(ml_backend__add_trail_ops__VarTypes_17, ml_backend__add_trail_ops__STATE_VARIABLE_Proc_24_24, &ml_backend__add_trail_ops__STATE_VARIABLE_Proc_25_25);
    }
    {
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, ml_backend__add_trail_ops__STATE_VARIABLE_Proc_25_25, ml_backend__add_trail_ops__STATE_VARIABLE_Proc_22);
    }
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

/* :- end_module ml_backend.add_trail_ops. */
