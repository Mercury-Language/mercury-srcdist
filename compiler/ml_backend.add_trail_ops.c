/*
** Automatically generated from `add_trail_ops.m'
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


/* :- module ml_backend.add_trail_ops. */
/* :- implementation. */

/*
INIT mercury__ml_backend__add_trail_ops__init
ENDINIT
*/

#include "ml_backend.add_trail_ops.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "ml_backend.mih"
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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "hlds.vartypes.mih"
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
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 147 "ml_backend.add_trail_ops.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__add_trail_ops__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 150 "ml_backend.add_trail_ops.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__add_trail_ops__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 153 "ml_backend.add_trail_ops.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__add_trail_ops__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 156 "ml_backend.add_trail_ops.c"
static const MR_PseudoTypeInfo ml_backend__add_trail_ops__ml_backend__add_trail_ops__field_types_trail_ops_info_0_0[5];

#line 159 "ml_backend.add_trail_ops.c"
static const MR_ConstString ml_backend__add_trail_ops__ml_backend__add_trail_ops__field_names_trail_ops_info_0_0[5];

#line 162 "ml_backend.add_trail_ops.c"
static const MR_DuArgLocn ml_backend__add_trail_ops__ml_backend__add_trail_ops__field_locns_trail_ops_info_0_0[5];

#line 165 "ml_backend.add_trail_ops.c"
static const MR_DuFunctorDesc ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_functor_desc_trail_ops_info_0_0;

#line 168 "ml_backend.add_trail_ops.c"
static const MR_DuFunctorDescPtr ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_stag_ordered_trail_ops_info_0_0[1];

#line 171 "ml_backend.add_trail_ops.c"
static const MR_DuPtagLayout ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_ptag_ordered_trail_ops_info_0[1];

#line 174 "ml_backend.add_trail_ops.c"
static const MR_DuFunctorDescPtr ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_name_ordered_trail_ops_info_0[1];

#line 177 "ml_backend.add_trail_ops.c"
static const MR_Integer ml_backend__add_trail_ops__ml_backend__add_trail_ops__functor_number_map_trail_ops_info_0[1];

#line 180 "ml_backend.add_trail_ops.c"
static MR_bool MR_CALL 
ml_backend__add_trail_ops____Unify____trail_ops_info_0_0_10001(
#line 183 "ml_backend.add_trail_ops.c"
  MR_Box ml_backend__add_trail_ops__wrapper_arg_1,
#line 185 "ml_backend.add_trail_ops.c"
  MR_Box ml_backend__add_trail_ops__wrapper_arg_2);

#line 188 "ml_backend.add_trail_ops.c"
static void MR_CALL 
ml_backend__add_trail_ops____Compare____trail_ops_info_0_0_10001(
#line 191 "ml_backend.add_trail_ops.c"
  MR_Box * ml_backend__add_trail_ops__wrapper_arg_1,
#line 193 "ml_backend.add_trail_ops.c"
  MR_Box ml_backend__add_trail_ops__wrapper_arg_2,
#line 195 "ml_backend.add_trail_ops.c"
  MR_Box ml_backend__add_trail_ops__wrapper_arg_3);

#line 107 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops____Compare____trail_ops_info_0_0(
#line 107 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__HeadVar__1_1,
#line 107 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__HeadVar__2_2,
#line 107 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__HeadVar__3_3);

#line 107 "add_trail_ops.m"
static MR_bool MR_CALL 
ml_backend__add_trail_ops____Unify____trail_ops_info_0_0(
#line 107 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__HeadVar__1_1,
#line 107 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__HeadVar__2_2);

#line 645 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0(
#line 645 "add_trail_ops.m"
  MR_String ml_backend__add_trail_ops__PredName_9,
#line 645 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Purity_10,
#line 645 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__InstMapDelta_11,
#line 645 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__ModuleInfo_12,
#line 645 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_13,
#line 645 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Args_14,
#line 645 "add_trail_ops.m"
  MR_String ml_backend__add_trail_ops__ForeignCode_15,
#line 645 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__ForeignProcGoal_16);

#line 633 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__trail_generate_call_8_p_0(
#line 633 "add_trail_ops.m"
  MR_String ml_backend__add_trail_ops__PredName_9,
#line 633 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Detism_10,
#line 633 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Purity_11,
#line 633 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Args_12,
#line 633 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__InstMapDelta_13,
#line 633 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__ModuleInfo_14,
#line 633 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_15,
#line 633 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__CallGoal_16);

#line 604 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__new_ticket_counter_var_3_p_0(
#line 604 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__Var_4,
#line 604 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6,
#line 604 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_7);

#line 598 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__new_ticket_var_3_p_0(
#line 598 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__Var_4,
#line 598 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6,
#line 598 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_7);

#line 570 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_prune_tickets_to_4_p_0(
#line 570 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__SavedTicketCounterVar_5,
#line 570 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_6,
#line 570 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__PruneTicketsToGoal_7,
#line 570 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_8);

#line 547 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_mark_ticket_stack_4_p_0(
#line 547 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__SavedTicketCounterVar_5,
#line 547 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_6,
#line 547 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__MarkTicketStackGoal_7,
#line 547 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_8);

#line 528 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_discard_ticket_3_p_0(
#line 528 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_4,
#line 528 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__DiscardTicketGoal_5,
#line 528 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_6);

#line 509 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_prune_ticket_3_p_0(
#line 509 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_4,
#line 509 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__PruneTicketGoal_5,
#line 509 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_6);

#line 489 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_reset_ticket_commit_4_p_0(
#line 489 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
#line 489 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_6,
#line 489 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__ResetTicketGoal_7,
#line 489 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_8);

#line 469 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_reset_ticket_solve_4_p_0(
#line 469 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
#line 469 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_6,
#line 469 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__ResetTicketGoal_7,
#line 469 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_8);

#line 449 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_reset_ticket_undo_4_p_0(
#line 449 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
#line 449 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_6,
#line 449 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__ResetTicketGoal_7,
#line 449 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_8);

#line 429 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_store_ticket_4_p_0(
#line 429 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
#line 429 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_6,
#line 429 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__SaveTicketGoal_7,
#line 429 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_8);

#line 417 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__cases_add_trail_ops_4_p_0(
#line 417 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__HeadVar__1_1,
#line 417 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__HeadVar__2_2,
#line 417 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_3,
#line 417 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_4);

#line 362 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__disj_add_trail_ops_7_p_0(
#line 362 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__HeadVar__1_1,
#line 362 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__HeadVar__2_2,
#line 362 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__IsFirstBranch_3,
#line 362 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__CodeModel_4,
#line 362 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
#line 362 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6,
#line 362 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_7);

#line 360 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__conj_add_trail_ops_4_p_0_1(
#line 360 "add_trail_ops.m"
  MR_Box ml_backend__add_trail_ops__closure_arg,
#line 360 "add_trail_ops.m"
  MR_Box ml_backend__add_trail_ops__wrapper_arg_1,
#line 360 "add_trail_ops.m"
  MR_Box * ml_backend__add_trail_ops__wrapper_arg_2,
#line 360 "add_trail_ops.m"
  MR_Box ml_backend__add_trail_ops__wrapper_arg_3,
#line 360 "add_trail_ops.m"
  MR_Box * ml_backend__add_trail_ops__wrapper_arg_4);

#line 356 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__conj_add_trail_ops_4_p_0(
#line 356 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Goals0_5,
#line 356 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__Goals_6,
#line 356 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_8,
#line 356 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_9);

#line 140 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_p_0(
#line 140 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__GoalExpr0_6,
#line 140 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__GoalInfo0_7,
#line 140 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__Goal_8,
#line 140 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102,
#line 140 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);

#line 133 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(
#line 133 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Goal0_5,
#line 133 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__Goal_6,
#line 133 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_10,
#line 133 "add_trail_ops.m"
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



#line 510 "ml_backend.add_trail_ops.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__add_trail_ops__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 518 "ml_backend.add_trail_ops.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__add_trail_ops__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 526 "ml_backend.add_trail_ops.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__add_trail_ops__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__add_trail_ops__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 535 "ml_backend.add_trail_ops.c"
static const MR_PseudoTypeInfo ml_backend__add_trail_ops__ml_backend__add_trail_ops__field_types_trail_ops_info_0_0[5] = {
  (MR_PseudoTypeInfo) &ml_backend__add_trail_ops__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ml_backend__add_trail_ops__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 544 "ml_backend.add_trail_ops.c"
static const MR_ConstString ml_backend__add_trail_ops__ml_backend__add_trail_ops__field_names_trail_ops_info_0_0[5] = {
  (MR_String) "trail_varset",
  (MR_String) "trail_var_types",
  (MR_String) "trail_module_info",
  (MR_String) "opt_trail_usage",
  (MR_String) "inline_ops"
};

#line 553 "ml_backend.add_trail_ops.c"
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

#line 582 "ml_backend.add_trail_ops.c"
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
  NULL
};

#line 597 "ml_backend.add_trail_ops.c"
static const MR_DuFunctorDescPtr ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_stag_ordered_trail_ops_info_0_0[1] = {
  &ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_functor_desc_trail_ops_info_0_0
};

#line 602 "ml_backend.add_trail_ops.c"
static const MR_DuPtagLayout ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_ptag_ordered_trail_ops_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_stag_ordered_trail_ops_info_0_0
  }
};

#line 611 "ml_backend.add_trail_ops.c"
static const MR_DuFunctorDescPtr ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_name_ordered_trail_ops_info_0[1] = {
  &ml_backend__add_trail_ops__ml_backend__add_trail_ops__du_functor_desc_trail_ops_info_0_0
};

#line 616 "ml_backend.add_trail_ops.c"
static const MR_Integer ml_backend__add_trail_ops__ml_backend__add_trail_ops__functor_number_map_trail_ops_info_0[1] = {
  (MR_Integer) 0
};

#line 621 "ml_backend.add_trail_ops.c"
const MR_TypeCtorInfo_Struct ml_backend__add_trail_ops__ml_backend__add_trail_ops__type_ctor_info_trail_ops_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 638 "ml_backend.add_trail_ops.c"
static MR_bool MR_CALL 
ml_backend__add_trail_ops____Unify____trail_ops_info_0_0_10001(
#line 641 "ml_backend.add_trail_ops.c"
  MR_Box ml_backend__add_trail_ops__wrapper_arg_1,
#line 643 "ml_backend.add_trail_ops.c"
  MR_Box ml_backend__add_trail_ops__wrapper_arg_2)
#line 645 "ml_backend.add_trail_ops.c"
{
#line 647 "ml_backend.add_trail_ops.c"
  {
#line 649 "ml_backend.add_trail_ops.c"
    MR_bool ml_backend__add_trail_ops__succeeded;

#line 652 "ml_backend.add_trail_ops.c"
    {
#line 654 "ml_backend.add_trail_ops.c"
      ml_backend__add_trail_ops__succeeded = ml_backend__add_trail_ops____Unify____trail_ops_info_0_0(((MR_Word) ml_backend__add_trail_ops__wrapper_arg_1), ((MR_Word) ml_backend__add_trail_ops__wrapper_arg_2));
    }
#line 657 "ml_backend.add_trail_ops.c"
    return ml_backend__add_trail_ops__succeeded;
#line 659 "ml_backend.add_trail_ops.c"
  }
#line 661 "ml_backend.add_trail_ops.c"
}

#line 664 "ml_backend.add_trail_ops.c"
static void MR_CALL 
ml_backend__add_trail_ops____Compare____trail_ops_info_0_0_10001(
#line 667 "ml_backend.add_trail_ops.c"
  MR_Box * ml_backend__add_trail_ops__wrapper_arg_1,
#line 669 "ml_backend.add_trail_ops.c"
  MR_Box ml_backend__add_trail_ops__wrapper_arg_2,
#line 671 "ml_backend.add_trail_ops.c"
  MR_Box ml_backend__add_trail_ops__wrapper_arg_3)
#line 673 "ml_backend.add_trail_ops.c"
{
#line 675 "ml_backend.add_trail_ops.c"
  {
#line 677 "ml_backend.add_trail_ops.c"
    MR_Word ml_backend__add_trail_ops__conv0_HeadVar__1_1;

#line 680 "ml_backend.add_trail_ops.c"
    {
#line 682 "ml_backend.add_trail_ops.c"
      ml_backend__add_trail_ops____Compare____trail_ops_info_0_0(&ml_backend__add_trail_ops__conv0_HeadVar__1_1, ((MR_Word) ml_backend__add_trail_ops__wrapper_arg_2), ((MR_Word) ml_backend__add_trail_ops__wrapper_arg_3));
    }
#line 685 "ml_backend.add_trail_ops.c"
    *ml_backend__add_trail_ops__wrapper_arg_1 = ((MR_Box) (ml_backend__add_trail_ops__conv0_HeadVar__1_1));
#line 687 "ml_backend.add_trail_ops.c"
  }
#line 689 "ml_backend.add_trail_ops.c"
}

#line 107 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops____Compare____trail_ops_info_0_0(
#line 107 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__HeadVar__1_1,
#line 107 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__HeadVar__2_2,
#line 107 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__HeadVar__3_3)
#line 107 "add_trail_ops.m"
{
#line 107 "add_trail_ops.m"
  {
#line 107 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 107 "add_trail_ops.m"
    MR_Integer ml_backend__add_trail_ops__CastX_18 = (MR_Integer) ml_backend__add_trail_ops__HeadVar__2_2;
#line 107 "add_trail_ops.m"
    MR_Integer ml_backend__add_trail_ops__CastY_19 = (MR_Integer) ml_backend__add_trail_ops__HeadVar__3_3;

#line 107 "add_trail_ops.m"
    ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__CastX_18 == ml_backend__add_trail_ops__CastY_19);
#line 107 "add_trail_ops.m"
    if (ml_backend__add_trail_ops__succeeded)
#line 716 "ml_backend.add_trail_ops.c"
      *ml_backend__add_trail_ops__HeadVar__1_1 = (MR_Integer) 0;
#line 107 "add_trail_ops.m"
    else
#line 107 "add_trail_ops.m"
      {
#line 107 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 107 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 1)));
#line 107 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 2)));
#line 107 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 107 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 107 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__3_3, (MR_Integer) 0)));
#line 107 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__3_3, (MR_Integer) 1)));
#line 107 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__3_3, (MR_Integer) 2)));
#line 107 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__3_3, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 107 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 107 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_14_14;

#line 107 "add_trail_ops.m"
        {
#line 107 "add_trail_ops.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__add_trail_ops_scalar_common_1[0], &ml_backend__add_trail_ops__V_14_14, ((MR_Box) (ml_backend__add_trail_ops__V_4_4)), ((MR_Box) (ml_backend__add_trail_ops__V_9_9)));
        }
#line 750 "ml_backend.add_trail_ops.c"
        ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__V_14_14 == (MR_Integer) 0);
#line 107 "add_trail_ops.m"
        ml_backend__add_trail_ops__succeeded = !(ml_backend__add_trail_ops__succeeded);
#line 107 "add_trail_ops.m"
        if (ml_backend__add_trail_ops__succeeded)
#line 107 "add_trail_ops.m"
          *ml_backend__add_trail_ops__HeadVar__1_1 = ml_backend__add_trail_ops__V_14_14;
#line 107 "add_trail_ops.m"
        else
#line 107 "add_trail_ops.m"
          {
#line 107 "add_trail_ops.m"
            MR_Word ml_backend__add_trail_ops__V_15_15;

#line 107 "add_trail_ops.m"
            {
#line 107 "add_trail_ops.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__add_trail_ops_scalar_common_2[0], &ml_backend__add_trail_ops__V_15_15, ((MR_Box) (ml_backend__add_trail_ops__V_5_5)), ((MR_Box) (ml_backend__add_trail_ops__V_10_10)));
            }
#line 770 "ml_backend.add_trail_ops.c"
            ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__V_15_15 == (MR_Integer) 0);
#line 107 "add_trail_ops.m"
            ml_backend__add_trail_ops__succeeded = !(ml_backend__add_trail_ops__succeeded);
#line 107 "add_trail_ops.m"
            if (ml_backend__add_trail_ops__succeeded)
#line 107 "add_trail_ops.m"
              *ml_backend__add_trail_ops__HeadVar__1_1 = ml_backend__add_trail_ops__V_15_15;
#line 107 "add_trail_ops.m"
            else
#line 107 "add_trail_ops.m"
              {
#line 107 "add_trail_ops.m"
                MR_Word ml_backend__add_trail_ops__V_16_16;

#line 107 "add_trail_ops.m"
                {
#line 107 "add_trail_ops.m"
                  hlds__hlds_module____Compare____module_info_0_0(&ml_backend__add_trail_ops__V_16_16, ml_backend__add_trail_ops__V_6_6, ml_backend__add_trail_ops__V_11_11);
                }
#line 790 "ml_backend.add_trail_ops.c"
                ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__V_16_16 == (MR_Integer) 0);
#line 107 "add_trail_ops.m"
                ml_backend__add_trail_ops__succeeded = !(ml_backend__add_trail_ops__succeeded);
#line 107 "add_trail_ops.m"
                if (ml_backend__add_trail_ops__succeeded)
#line 107 "add_trail_ops.m"
                  *ml_backend__add_trail_ops__HeadVar__1_1 = ml_backend__add_trail_ops__V_16_16;
#line 107 "add_trail_ops.m"
                else
#line 107 "add_trail_ops.m"
                  {
#line 107 "add_trail_ops.m"
                    MR_Word ml_backend__add_trail_ops__V_17_17;
#line 107 "add_trail_ops.m"
                    MR_Integer ml_backend__add_trail_ops__V_25_25 = (MR_Integer) ml_backend__add_trail_ops__V_7_7;
#line 107 "add_trail_ops.m"
                    MR_Integer ml_backend__add_trail_ops__V_26_26 = (MR_Integer) ml_backend__add_trail_ops__V_12_12;

#line 107 "add_trail_ops.m"
                    {
#line 107 "add_trail_ops.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__add_trail_ops__V_17_17, ml_backend__add_trail_ops__V_25_25, ml_backend__add_trail_ops__V_26_26);
                    }
#line 814 "ml_backend.add_trail_ops.c"
                    ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__V_17_17 == (MR_Integer) 0);
#line 107 "add_trail_ops.m"
                    ml_backend__add_trail_ops__succeeded = !(ml_backend__add_trail_ops__succeeded);
#line 107 "add_trail_ops.m"
                    if (ml_backend__add_trail_ops__succeeded)
#line 107 "add_trail_ops.m"
                      *ml_backend__add_trail_ops__HeadVar__1_1 = ml_backend__add_trail_ops__V_17_17;
#line 107 "add_trail_ops.m"
                    else
#line 107 "add_trail_ops.m"
                      {
#line 107 "add_trail_ops.m"
                        MR_Integer ml_backend__add_trail_ops__V_27_27 = (MR_Integer) ml_backend__add_trail_ops__V_8_8;
#line 107 "add_trail_ops.m"
                        MR_Integer ml_backend__add_trail_ops__V_28_28 = (MR_Integer) ml_backend__add_trail_ops__V_13_13;

#line 107 "add_trail_ops.m"
                        {
#line 107 "add_trail_ops.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__add_trail_ops__HeadVar__1_1, ml_backend__add_trail_ops__V_27_27, ml_backend__add_trail_ops__V_28_28);
#line 107 "add_trail_ops.m"
                          return;
                        }
#line 107 "add_trail_ops.m"
                      }
#line 107 "add_trail_ops.m"
                  }
#line 107 "add_trail_ops.m"
              }
#line 107 "add_trail_ops.m"
          }
#line 107 "add_trail_ops.m"
      }
#line 107 "add_trail_ops.m"
  }
#line 107 "add_trail_ops.m"
}

#line 107 "add_trail_ops.m"
static MR_bool MR_CALL 
ml_backend__add_trail_ops____Unify____trail_ops_info_0_0(
#line 107 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__HeadVar__1_1,
#line 107 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__HeadVar__2_2)
#line 107 "add_trail_ops.m"
{
#line 107 "add_trail_ops.m"
  {
#line 107 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 107 "add_trail_ops.m"
    MR_Integer ml_backend__add_trail_ops__CastX_13 = (MR_Integer) ml_backend__add_trail_ops__HeadVar__1_1;
#line 107 "add_trail_ops.m"
    MR_Integer ml_backend__add_trail_ops__CastY_14 = (MR_Integer) ml_backend__add_trail_ops__HeadVar__2_2;

#line 107 "add_trail_ops.m"
    ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__CastX_13 == ml_backend__add_trail_ops__CastY_14);
#line 107 "add_trail_ops.m"
    if (ml_backend__add_trail_ops__succeeded)
#line 107 "add_trail_ops.m"
      ml_backend__add_trail_ops__succeeded = MR_TRUE;
#line 107 "add_trail_ops.m"
    else
#line 107 "add_trail_ops.m"
      {
#line 107 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__TypeInfo_16_16;
#line 107 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 107 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__1_1, (MR_Integer) 1)));
#line 107 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__1_1, (MR_Integer) 2)));
#line 107 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__1_1, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 107 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 107 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 107 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 1)));
#line 107 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 2)));
#line 107 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 107 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 904 "ml_backend.add_trail_ops.c"
        {
#line 906 "ml_backend.add_trail_ops.c"
          ml_backend__add_trail_ops__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__add_trail_ops_scalar_common_1[0], ((MR_Box) (ml_backend__add_trail_ops__V_3_3)), ((MR_Box) (ml_backend__add_trail_ops__V_8_8)));
        }
#line 107 "add_trail_ops.m"
        if (ml_backend__add_trail_ops__succeeded)
#line 107 "add_trail_ops.m"
          {
#line 913 "ml_backend.add_trail_ops.c"
            ml_backend__add_trail_ops__TypeInfo_16_16 = (MR_Word) &ml_backend__add_trail_ops_scalar_common_2[0];
#line 915 "ml_backend.add_trail_ops.c"
            {
#line 917 "ml_backend.add_trail_ops.c"
              ml_backend__add_trail_ops__succeeded = mercury__builtin__unify_2_p_0(ml_backend__add_trail_ops__TypeInfo_16_16, ((MR_Box) (ml_backend__add_trail_ops__V_4_4)), ((MR_Box) (ml_backend__add_trail_ops__V_9_9)));
            }
#line 107 "add_trail_ops.m"
            if (ml_backend__add_trail_ops__succeeded)
#line 107 "add_trail_ops.m"
              {
#line 924 "ml_backend.add_trail_ops.c"
                {
#line 926 "ml_backend.add_trail_ops.c"
                  ml_backend__add_trail_ops__succeeded = hlds__hlds_module____Unify____module_info_0_0(ml_backend__add_trail_ops__V_5_5, ml_backend__add_trail_ops__V_10_10);
                }
#line 107 "add_trail_ops.m"
                if (ml_backend__add_trail_ops__succeeded)
#line 107 "add_trail_ops.m"
                  {
#line 933 "ml_backend.add_trail_ops.c"
                    ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__V_6_6 == ml_backend__add_trail_ops__V_11_11);
#line 107 "add_trail_ops.m"
                    if (ml_backend__add_trail_ops__succeeded)
#line 937 "ml_backend.add_trail_ops.c"
                      ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__V_7_7 == ml_backend__add_trail_ops__V_12_12);
#line 107 "add_trail_ops.m"
                  }
#line 107 "add_trail_ops.m"
              }
#line 107 "add_trail_ops.m"
          }
#line 107 "add_trail_ops.m"
      }
#line 107 "add_trail_ops.m"
    return ml_backend__add_trail_ops__succeeded;
#line 107 "add_trail_ops.m"
  }
#line 107 "add_trail_ops.m"
}

#line 645 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0(
#line 645 "add_trail_ops.m"
  MR_String ml_backend__add_trail_ops__PredName_9,
#line 645 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Purity_10,
#line 645 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__InstMapDelta_11,
#line 645 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__ModuleInfo_12,
#line 645 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_13,
#line 645 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Args_14,
#line 645 "add_trail_ops.m"
  MR_String ml_backend__add_trail_ops__ForeignCode_15,
#line 645 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__ForeignProcGoal_16)
#line 645 "add_trail_ops.m"
{
#line 650 "add_trail_ops.m"
  {
#line 650 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 650 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__PrivateBuiltinModule_17;
#line 650 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__FinalForeignProcAttrs_20;
#line 650 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_ForeignProcAttrs_23_23;
#line 650 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_ForeignProcAttrs_26_26;

#line 651 "add_trail_ops.m"
    {
#line 651 "add_trail_ops.m"
      ml_backend__add_trail_ops__PrivateBuiltinModule_17 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 655 "add_trail_ops.m"
    {
#line 655 "add_trail_ops.m"
      ml_backend__add_trail_ops__STATE_VARIABLE_ForeignProcAttrs_23_23 = parse_tree__prog_data__default_attributes_1_f_0((MR_Integer) 0);
    }
#line 656 "add_trail_ops.m"
    {
#line 656 "add_trail_ops.m"
      parse_tree__prog_data__set_may_call_mercury_3_p_0((MR_Integer) 1, ml_backend__add_trail_ops__STATE_VARIABLE_ForeignProcAttrs_23_23, &ml_backend__add_trail_ops__STATE_VARIABLE_ForeignProcAttrs_26_26);
    }
#line 657 "add_trail_ops.m"
    {
#line 657 "add_trail_ops.m"
      parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, ml_backend__add_trail_ops__STATE_VARIABLE_ForeignProcAttrs_26_26, &ml_backend__add_trail_ops__FinalForeignProcAttrs_20);
    }
#line 662 "add_trail_ops.m"
    {
#line 662 "add_trail_ops.m"
      hlds__goal_util__generate_foreign_proc_16_p_0(ml_backend__add_trail_ops__PrivateBuiltinModule_17, ml_backend__add_trail_ops__PredName_9, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, ml_backend__add_trail_ops__Purity_10, ml_backend__add_trail_ops__FinalForeignProcAttrs_20, ml_backend__add_trail_ops__Args_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__ForeignCode_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__InstMapDelta_11, ml_backend__add_trail_ops__ModuleInfo_12, ml_backend__add_trail_ops__Context_13, ml_backend__add_trail_ops__ForeignProcGoal_16);
#line 662 "add_trail_ops.m"
      return;
    }
#line 650 "add_trail_ops.m"
  }
#line 645 "add_trail_ops.m"
}

#line 633 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__trail_generate_call_8_p_0(
#line 633 "add_trail_ops.m"
  MR_String ml_backend__add_trail_ops__PredName_9,
#line 633 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Detism_10,
#line 633 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Purity_11,
#line 633 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Args_12,
#line 633 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__InstMapDelta_13,
#line 633 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__ModuleInfo_14,
#line 633 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_15,
#line 633 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__CallGoal_16)
#line 633 "add_trail_ops.m"
{
#line 638 "add_trail_ops.m"
  {
#line 638 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 638 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_17_17;

#line 639 "add_trail_ops.m"
    {
#line 639 "add_trail_ops.m"
      ml_backend__add_trail_ops__V_17_17 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 639 "add_trail_ops.m"
    {
#line 639 "add_trail_ops.m"
      hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_17_17, ml_backend__add_trail_ops__PredName_9, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__Detism_10, ml_backend__add_trail_ops__Purity_11, ml_backend__add_trail_ops__Args_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__InstMapDelta_13, ml_backend__add_trail_ops__ModuleInfo_14, ml_backend__add_trail_ops__Context_15, ml_backend__add_trail_ops__CallGoal_16);
#line 639 "add_trail_ops.m"
      return;
    }
#line 638 "add_trail_ops.m"
  }
#line 633 "add_trail_ops.m"
}

#line 604 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__new_ticket_counter_var_3_p_0(
#line 604 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__Var_4,
#line 604 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6,
#line 604 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_7)
#line 604 "add_trail_ops.m"
{
#line 607 "add_trail_ops.m"
  {
#line 607 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 607 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_9_9;
#line 607 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__VarSet0_17;
#line 607 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__VarTypes0_18;
#line 607 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__VarSet_19;
#line 607 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__VarTypes_20;
#line 607 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_33_33;
#line 607 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_34_34;
#line 607 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_35_35;
#line 614 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_24_24;
#line 614 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_25_25;
#line 614 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_26_26;
#line 618 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_31_31;
#line 618 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_32_32;

#line 629 "add_trail_ops.m"
    {
#line 629 "add_trail_ops.m"
      ml_backend__add_trail_ops__V_9_9 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
#line 614 "add_trail_ops.m"
    ml_backend__add_trail_ops__VarSet0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 614 "add_trail_ops.m"
    ml_backend__add_trail_ops__VarTypes0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 614 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 614 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 614 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 616 "add_trail_ops.m"
    {
#line 616 "add_trail_ops.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "SavedTicketCounter", ml_backend__add_trail_ops__Var_4, ml_backend__add_trail_ops__VarSet0_17, &ml_backend__add_trail_ops__VarSet_19);
    }
#line 617 "add_trail_ops.m"
    {
#line 617 "add_trail_ops.m"
      hlds__vartypes__add_var_type_4_p_0(*ml_backend__add_trail_ops__Var_4, ml_backend__add_trail_ops__V_9_9, ml_backend__add_trail_ops__VarTypes0_18, &ml_backend__add_trail_ops__VarTypes_20);
    }
#line 618 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 618 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 618 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 618 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 618 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 619 "add_trail_ops.m"
    {
#line 619 "add_trail_ops.m"
      MR_Word base;
#line 619 "add_trail_ops.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 619 "add_trail_ops.m"
      *ml_backend__add_trail_ops__STATE_VARIABLE_Info_7 = base;
#line 619 "add_trail_ops.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__VarSet_19));
#line 619 "add_trail_ops.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__VarTypes_20));
#line 619 "add_trail_ops.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_33_33));
#line 619 "add_trail_ops.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((ml_backend__add_trail_ops__V_34_34 | ((ml_backend__add_trail_ops__V_35_35 << (MR_Integer) 1)))));
#line 619 "add_trail_ops.m"
    }
#line 607 "add_trail_ops.m"
  }
#line 604 "add_trail_ops.m"
}

#line 598 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__new_ticket_var_3_p_0(
#line 598 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__Var_4,
#line 598 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6,
#line 598 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_7)
#line 598 "add_trail_ops.m"
{
#line 601 "add_trail_ops.m"
  {
#line 601 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 601 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_9_9;
#line 601 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__VarSet0_17;
#line 601 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__VarTypes0_18;
#line 601 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__VarSet_19;
#line 601 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__VarTypes_20;
#line 601 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_33_33;
#line 601 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_34_34;
#line 601 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_35_35;
#line 614 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_24_24;
#line 614 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_25_25;
#line 614 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_26_26;
#line 618 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_31_31;
#line 618 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_32_32;

#line 625 "add_trail_ops.m"
    {
#line 625 "add_trail_ops.m"
      ml_backend__add_trail_ops__V_9_9 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
#line 614 "add_trail_ops.m"
    ml_backend__add_trail_ops__VarSet0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 614 "add_trail_ops.m"
    ml_backend__add_trail_ops__VarTypes0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 614 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 614 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 614 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 616 "add_trail_ops.m"
    {
#line 616 "add_trail_ops.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "TrailTicket", ml_backend__add_trail_ops__Var_4, ml_backend__add_trail_ops__VarSet0_17, &ml_backend__add_trail_ops__VarSet_19);
    }
#line 617 "add_trail_ops.m"
    {
#line 617 "add_trail_ops.m"
      hlds__vartypes__add_var_type_4_p_0(*ml_backend__add_trail_ops__Var_4, ml_backend__add_trail_ops__V_9_9, ml_backend__add_trail_ops__VarTypes0_18, &ml_backend__add_trail_ops__VarTypes_20);
    }
#line 618 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 618 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 618 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 618 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 618 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 619 "add_trail_ops.m"
    {
#line 619 "add_trail_ops.m"
      MR_Word base;
#line 619 "add_trail_ops.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 619 "add_trail_ops.m"
      *ml_backend__add_trail_ops__STATE_VARIABLE_Info_7 = base;
#line 619 "add_trail_ops.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__VarSet_19));
#line 619 "add_trail_ops.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__VarTypes_20));
#line 619 "add_trail_ops.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_33_33));
#line 619 "add_trail_ops.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((ml_backend__add_trail_ops__V_34_34 | ((ml_backend__add_trail_ops__V_35_35 << (MR_Integer) 1)))));
#line 619 "add_trail_ops.m"
    }
#line 601 "add_trail_ops.m"
  }
#line 598 "add_trail_ops.m"
}

#line 570 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_prune_tickets_to_4_p_0(
#line 570 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__SavedTicketCounterVar_5,
#line 570 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_6,
#line 570 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__PruneTicketsToGoal_7,
#line 570 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_8)
#line 570 "add_trail_ops.m"
{
#line 574 "add_trail_ops.m"
  {
#line 574 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 574 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__GenerateInline_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 575 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 575 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 575 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 575 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);

#line 581 "add_trail_ops.m"
#line 581 "add_trail_ops.m"
    switch (ml_backend__add_trail_ops__GenerateInline_9) {
#line 581 "add_trail_ops.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 581 "add_trail_ops.m"
      case (MR_Integer) 0:
#line 577 "add_trail_ops.m"
        {
#line 577 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_27_27;
#line 577 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_28_28;
#line 577 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_29_29;
#line 577 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_51_51;
#line 578 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_35_35;
#line 578 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_36_36;
#line 578 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_37_37;
#line 578 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_38_38;

#line 579 "add_trail_ops.m"
          {
#line 579 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 0) = ((MR_Box) (ml_backend__add_trail_ops__SavedTicketCounterVar_5));
#line 579 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 579 "add_trail_ops.m"
          }
#line 579 "add_trail_ops.m"
          {
#line 579 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_28_28 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 578 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 578 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 578 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 578 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 578 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 639 "add_trail_ops.m"
          {
#line 639 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_51_51 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 639 "add_trail_ops.m"
          {
#line 639 "add_trail_ops.m"
            hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_51_51, (MR_String) "prune_tickets_to", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, ml_backend__add_trail_ops__V_27_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_28_28, ml_backend__add_trail_ops__V_29_29, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__PruneTicketsToGoal_7);
#line 639 "add_trail_ops.m"
            return;
          }
#line 577 "add_trail_ops.m"
        }
#line 581 "add_trail_ops.m"
        break;
#line 581 "add_trail_ops.m"
      case (MR_Integer) 1:
#line 582 "add_trail_ops.m"
        {
#line 582 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__Args_10;
#line 582 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_12_12;
#line 582 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_13_13;
#line 582 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_14_14;
#line 582 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_16_16;
#line 582 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_17_17;
#line 582 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_22_22;
#line 582 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_23_23;
#line 587 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_39_39;
#line 587 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_40_40;
#line 587 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_41_41;
#line 587 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_42_42;

#line 584 "add_trail_ops.m"
          {
#line 584 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_16_16 = parse_tree__prog_mode__in_mode_0_f_0();
          }
#line 584 "add_trail_ops.m"
          {
#line 584 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 584 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 0) = ((MR_Box) ((MR_String) "TicketCounter"));
#line 584 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_16_16));
#line 584 "add_trail_ops.m"
          }
#line 584 "add_trail_ops.m"
          {
#line 584 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 584 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_13_13, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_14_14));
#line 584 "add_trail_ops.m"
          }
#line 629 "add_trail_ops.m"
          {
#line 629 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_17_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          }
#line 583 "add_trail_ops.m"
          {
#line 583 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 583 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 0) = ((MR_Box) (ml_backend__add_trail_ops__SavedTicketCounterVar_5));
#line 583 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_13_13));
#line 583 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_17_17));
#line 583 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 3) = ((MR_Box) ((MR_Integer) 0));
#line 583 "add_trail_ops.m"
          }
#line 585 "add_trail_ops.m"
          {
#line 585 "add_trail_ops.m"
            ml_backend__add_trail_ops__Args_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_12_12));
#line 585 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 585 "add_trail_ops.m"
          }
#line 588 "add_trail_ops.m"
          {
#line 588 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_22_22 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 587 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 587 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 587 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 587 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 587 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 587 "add_trail_ops.m"
          {
#line 587 "add_trail_ops.m"
            ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "prune_tickets_to", (MR_Integer) 2, ml_backend__add_trail_ops__V_22_22, ml_backend__add_trail_ops__V_23_23, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__Args_10, (MR_String) "MR_prune_tickets_to(TicketCounter);", ml_backend__add_trail_ops__PruneTicketsToGoal_7);
#line 587 "add_trail_ops.m"
            return;
          }
#line 582 "add_trail_ops.m"
        }
#line 581 "add_trail_ops.m"
        break;
#line 581 "add_trail_ops.m"
    }
#line 574 "add_trail_ops.m"
  }
#line 570 "add_trail_ops.m"
}

#line 547 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_mark_ticket_stack_4_p_0(
#line 547 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__SavedTicketCounterVar_5,
#line 547 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_6,
#line 547 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__MarkTicketStackGoal_7,
#line 547 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_8)
#line 547 "add_trail_ops.m"
{
#line 551 "add_trail_ops.m"
  {
#line 551 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 551 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__GenerateInline_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 552 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 552 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 552 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 552 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);

#line 559 "add_trail_ops.m"
#line 559 "add_trail_ops.m"
    switch (ml_backend__add_trail_ops__GenerateInline_9) {
#line 559 "add_trail_ops.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 559 "add_trail_ops.m"
      case (MR_Integer) 0:
#line 554 "add_trail_ops.m"
        {
#line 554 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_27_27;
#line 554 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_28_28;
#line 554 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_29_29;
#line 554 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_51_51;
#line 555 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_35_35;
#line 555 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_36_36;
#line 555 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_37_37;
#line 555 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_38_38;

#line 556 "add_trail_ops.m"
          {
#line 556 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 556 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 0) = ((MR_Box) (ml_backend__add_trail_ops__SavedTicketCounterVar_5));
#line 556 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 556 "add_trail_ops.m"
          }
#line 557 "add_trail_ops.m"
          {
#line 557 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_28_28 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 555 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 555 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 555 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 555 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 555 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 639 "add_trail_ops.m"
          {
#line 639 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_51_51 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 639 "add_trail_ops.m"
          {
#line 639 "add_trail_ops.m"
            hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_51_51, (MR_String) "mark_ticket_stack", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, ml_backend__add_trail_ops__V_27_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_28_28, ml_backend__add_trail_ops__V_29_29, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__MarkTicketStackGoal_7);
#line 639 "add_trail_ops.m"
            return;
          }
#line 554 "add_trail_ops.m"
        }
#line 559 "add_trail_ops.m"
        break;
#line 559 "add_trail_ops.m"
      case (MR_Integer) 1:
#line 560 "add_trail_ops.m"
        {
#line 560 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__Args_10;
#line 560 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_12_12;
#line 560 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_13_13;
#line 560 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_14_14;
#line 560 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_16_16;
#line 560 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_17_17;
#line 560 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_22_22;
#line 560 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_23_23;
#line 565 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_39_39;
#line 565 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_40_40;
#line 565 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_41_41;
#line 565 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_42_42;

#line 562 "add_trail_ops.m"
          {
#line 562 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_16_16 = parse_tree__prog_mode__out_mode_0_f_0();
          }
#line 562 "add_trail_ops.m"
          {
#line 562 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 562 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 0) = ((MR_Box) ((MR_String) "TicketCounter"));
#line 562 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_16_16));
#line 562 "add_trail_ops.m"
          }
#line 562 "add_trail_ops.m"
          {
#line 562 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 562 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_13_13, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_14_14));
#line 562 "add_trail_ops.m"
          }
#line 629 "add_trail_ops.m"
          {
#line 629 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_17_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          }
#line 561 "add_trail_ops.m"
          {
#line 561 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 561 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 0) = ((MR_Box) (ml_backend__add_trail_ops__SavedTicketCounterVar_5));
#line 561 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_13_13));
#line 561 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_17_17));
#line 561 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 3) = ((MR_Box) ((MR_Integer) 0));
#line 561 "add_trail_ops.m"
          }
#line 563 "add_trail_ops.m"
          {
#line 563 "add_trail_ops.m"
            ml_backend__add_trail_ops__Args_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_12_12));
#line 563 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 563 "add_trail_ops.m"
          }
#line 566 "add_trail_ops.m"
          {
#line 566 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_22_22 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 565 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 565 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 565 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 565 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 565 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 565 "add_trail_ops.m"
          {
#line 565 "add_trail_ops.m"
            ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "mark_ticket_stack", (MR_Integer) 2, ml_backend__add_trail_ops__V_22_22, ml_backend__add_trail_ops__V_23_23, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__Args_10, (MR_String) "MR_mark_ticket_stack(TicketCounter);", ml_backend__add_trail_ops__MarkTicketStackGoal_7);
#line 565 "add_trail_ops.m"
            return;
          }
#line 560 "add_trail_ops.m"
        }
#line 559 "add_trail_ops.m"
        break;
#line 559 "add_trail_ops.m"
    }
#line 551 "add_trail_ops.m"
  }
#line 547 "add_trail_ops.m"
}

#line 528 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_discard_ticket_3_p_0(
#line 528 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_4,
#line 528 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__DiscardTicketGoal_5,
#line 528 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_6)
#line 528 "add_trail_ops.m"
{
#line 531 "add_trail_ops.m"
  {
#line 531 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 531 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__GenerateInline_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 532 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 0)));
#line 532 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 1)));
#line 532 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 2)));
#line 532 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) & (MR_Integer) 1);

#line 538 "add_trail_ops.m"
#line 538 "add_trail_ops.m"
    switch (ml_backend__add_trail_ops__GenerateInline_7) {
#line 538 "add_trail_ops.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 538 "add_trail_ops.m"
      case (MR_Integer) 0:
#line 534 "add_trail_ops.m"
        {
#line 534 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_18_18;
#line 534 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_19_19;
#line 534 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_40_40;
#line 535 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_24_24;
#line 535 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_25_25;
#line 535 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_26_26;
#line 535 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_27_27;

#line 536 "add_trail_ops.m"
          {
#line 536 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_18_18 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 535 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 0)));
#line 535 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 1)));
#line 535 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 2)));
#line 535 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 535 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 639 "add_trail_ops.m"
          {
#line 639 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_40_40 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 639 "add_trail_ops.m"
          {
#line 639 "add_trail_ops.m"
            hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_40_40, (MR_String) "discard_ticket", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_18_18, ml_backend__add_trail_ops__V_19_19, ml_backend__add_trail_ops__Context_4, ml_backend__add_trail_ops__DiscardTicketGoal_5);
#line 639 "add_trail_ops.m"
            return;
          }
#line 534 "add_trail_ops.m"
        }
#line 538 "add_trail_ops.m"
        break;
#line 538 "add_trail_ops.m"
      case (MR_Integer) 1:
#line 539 "add_trail_ops.m"
        {
#line 539 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_12_12;
#line 539 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_13_13;
#line 542 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_28_28;
#line 542 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_29_29;
#line 542 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_30_30;
#line 542 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_31_31;

#line 543 "add_trail_ops.m"
          {
#line 543 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_12_12 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 542 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 0)));
#line 542 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 1)));
#line 542 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 2)));
#line 542 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 542 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 542 "add_trail_ops.m"
          {
#line 542 "add_trail_ops.m"
            ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "discard_ticket", (MR_Integer) 2, ml_backend__add_trail_ops__V_12_12, ml_backend__add_trail_ops__V_13_13, ml_backend__add_trail_ops__Context_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_String) "MR_discard_ticket();", ml_backend__add_trail_ops__DiscardTicketGoal_5);
#line 542 "add_trail_ops.m"
            return;
          }
#line 539 "add_trail_ops.m"
        }
#line 538 "add_trail_ops.m"
        break;
#line 538 "add_trail_ops.m"
    }
#line 531 "add_trail_ops.m"
  }
#line 528 "add_trail_ops.m"
}

#line 509 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_prune_ticket_3_p_0(
#line 509 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_4,
#line 509 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__PruneTicketGoal_5,
#line 509 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_6)
#line 509 "add_trail_ops.m"
{
#line 512 "add_trail_ops.m"
  {
#line 512 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 512 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__GenerateInline_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 513 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 0)));
#line 513 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 1)));
#line 513 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 2)));
#line 513 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) & (MR_Integer) 1);

#line 519 "add_trail_ops.m"
#line 519 "add_trail_ops.m"
    switch (ml_backend__add_trail_ops__GenerateInline_7) {
#line 519 "add_trail_ops.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 519 "add_trail_ops.m"
      case (MR_Integer) 0:
#line 515 "add_trail_ops.m"
        {
#line 515 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_18_18;
#line 515 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_19_19;
#line 515 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_40_40;
#line 516 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_24_24;
#line 516 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_25_25;
#line 516 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_26_26;
#line 516 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_27_27;

#line 517 "add_trail_ops.m"
          {
#line 517 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_18_18 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 516 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 0)));
#line 516 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 1)));
#line 516 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 2)));
#line 516 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 516 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 639 "add_trail_ops.m"
          {
#line 639 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_40_40 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 639 "add_trail_ops.m"
          {
#line 639 "add_trail_ops.m"
            hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_40_40, (MR_String) "prune_ticket", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_18_18, ml_backend__add_trail_ops__V_19_19, ml_backend__add_trail_ops__Context_4, ml_backend__add_trail_ops__PruneTicketGoal_5);
#line 639 "add_trail_ops.m"
            return;
          }
#line 515 "add_trail_ops.m"
        }
#line 519 "add_trail_ops.m"
        break;
#line 519 "add_trail_ops.m"
      case (MR_Integer) 1:
#line 520 "add_trail_ops.m"
        {
#line 520 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_12_12;
#line 520 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_13_13;
#line 523 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_28_28;
#line 523 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_29_29;
#line 523 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_30_30;
#line 523 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_31_31;

#line 524 "add_trail_ops.m"
          {
#line 524 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_12_12 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 523 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 0)));
#line 523 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 1)));
#line 523 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 2)));
#line 523 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 523 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 523 "add_trail_ops.m"
          {
#line 523 "add_trail_ops.m"
            ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "prune_ticket", (MR_Integer) 2, ml_backend__add_trail_ops__V_12_12, ml_backend__add_trail_ops__V_13_13, ml_backend__add_trail_ops__Context_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_String) "MR_prune_ticket();", ml_backend__add_trail_ops__PruneTicketGoal_5);
#line 523 "add_trail_ops.m"
            return;
          }
#line 520 "add_trail_ops.m"
        }
#line 519 "add_trail_ops.m"
        break;
#line 519 "add_trail_ops.m"
    }
#line 512 "add_trail_ops.m"
  }
#line 509 "add_trail_ops.m"
}

#line 489 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_reset_ticket_commit_4_p_0(
#line 489 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
#line 489 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_6,
#line 489 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__ResetTicketGoal_7,
#line 489 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_8)
#line 489 "add_trail_ops.m"
{
#line 492 "add_trail_ops.m"
  {
#line 492 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 492 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__GenerateInline_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 493 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 493 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 493 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 493 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);

#line 499 "add_trail_ops.m"
#line 499 "add_trail_ops.m"
    switch (ml_backend__add_trail_ops__GenerateInline_9) {
#line 499 "add_trail_ops.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 499 "add_trail_ops.m"
      case (MR_Integer) 0:
#line 495 "add_trail_ops.m"
        {
#line 495 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_27_27;
#line 495 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_28_28;
#line 495 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_29_29;
#line 495 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_51_51;
#line 496 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_35_35;
#line 496 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_36_36;
#line 496 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_37_37;
#line 496 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_38_38;

#line 497 "add_trail_ops.m"
          {
#line 497 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 497 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 0) = ((MR_Box) (ml_backend__add_trail_ops__TicketVar_5));
#line 497 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 497 "add_trail_ops.m"
          }
#line 497 "add_trail_ops.m"
          {
#line 497 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_28_28 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 496 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 496 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 496 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 496 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 496 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 639 "add_trail_ops.m"
          {
#line 639 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_51_51 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 639 "add_trail_ops.m"
          {
#line 639 "add_trail_ops.m"
            hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_51_51, (MR_String) "reset_ticket_commit", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, ml_backend__add_trail_ops__V_27_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_28_28, ml_backend__add_trail_ops__V_29_29, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__ResetTicketGoal_7);
#line 639 "add_trail_ops.m"
            return;
          }
#line 495 "add_trail_ops.m"
        }
#line 499 "add_trail_ops.m"
        break;
#line 499 "add_trail_ops.m"
      case (MR_Integer) 1:
#line 500 "add_trail_ops.m"
        {
#line 500 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__Args_10;
#line 500 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_12_12;
#line 500 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_13_13;
#line 500 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_14_14;
#line 500 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_16_16;
#line 500 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_17_17;
#line 500 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_22_22;
#line 500 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_23_23;
#line 504 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_39_39;
#line 504 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_40_40;
#line 504 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_41_41;
#line 504 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_42_42;

#line 501 "add_trail_ops.m"
          {
#line 501 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_16_16 = parse_tree__prog_mode__in_mode_0_f_0();
          }
#line 501 "add_trail_ops.m"
          {
#line 501 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 501 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 0) = ((MR_Box) ((MR_String) "Ticket"));
#line 501 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_16_16));
#line 501 "add_trail_ops.m"
          }
#line 501 "add_trail_ops.m"
          {
#line 501 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 501 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_13_13, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_14_14));
#line 501 "add_trail_ops.m"
          }
#line 625 "add_trail_ops.m"
          {
#line 625 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_17_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          }
#line 501 "add_trail_ops.m"
          {
#line 501 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 501 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 0) = ((MR_Box) (ml_backend__add_trail_ops__TicketVar_5));
#line 501 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_13_13));
#line 501 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_17_17));
#line 501 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 3) = ((MR_Box) ((MR_Integer) 0));
#line 501 "add_trail_ops.m"
          }
#line 502 "add_trail_ops.m"
          {
#line 502 "add_trail_ops.m"
            ml_backend__add_trail_ops__Args_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_12_12));
#line 502 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 502 "add_trail_ops.m"
          }
#line 505 "add_trail_ops.m"
          {
#line 505 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_22_22 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 504 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 504 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 504 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 504 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 504 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 504 "add_trail_ops.m"
          {
#line 504 "add_trail_ops.m"
            ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "reset_ticket_commit", (MR_Integer) 2, ml_backend__add_trail_ops__V_22_22, ml_backend__add_trail_ops__V_23_23, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__Args_10, (MR_String) "MR_reset_ticket(Ticket, MR_commit);", ml_backend__add_trail_ops__ResetTicketGoal_7);
#line 504 "add_trail_ops.m"
            return;
          }
#line 500 "add_trail_ops.m"
        }
#line 499 "add_trail_ops.m"
        break;
#line 499 "add_trail_ops.m"
    }
#line 492 "add_trail_ops.m"
  }
#line 489 "add_trail_ops.m"
}

#line 469 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_reset_ticket_solve_4_p_0(
#line 469 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
#line 469 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_6,
#line 469 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__ResetTicketGoal_7,
#line 469 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_8)
#line 469 "add_trail_ops.m"
{
#line 472 "add_trail_ops.m"
  {
#line 472 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 472 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__GenerateInline_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 473 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 473 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 473 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 473 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);

#line 479 "add_trail_ops.m"
#line 479 "add_trail_ops.m"
    switch (ml_backend__add_trail_ops__GenerateInline_9) {
#line 479 "add_trail_ops.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 479 "add_trail_ops.m"
      case (MR_Integer) 0:
#line 475 "add_trail_ops.m"
        {
#line 475 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_27_27;
#line 475 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_28_28;
#line 475 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_29_29;
#line 475 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_51_51;
#line 476 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_35_35;
#line 476 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_36_36;
#line 476 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_37_37;
#line 476 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_38_38;

#line 477 "add_trail_ops.m"
          {
#line 477 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 477 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 0) = ((MR_Box) (ml_backend__add_trail_ops__TicketVar_5));
#line 477 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 477 "add_trail_ops.m"
          }
#line 477 "add_trail_ops.m"
          {
#line 477 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_28_28 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 476 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 476 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 476 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 476 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 476 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 639 "add_trail_ops.m"
          {
#line 639 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_51_51 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 639 "add_trail_ops.m"
          {
#line 639 "add_trail_ops.m"
            hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_51_51, (MR_String) "reset_ticket_solve", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, ml_backend__add_trail_ops__V_27_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_28_28, ml_backend__add_trail_ops__V_29_29, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__ResetTicketGoal_7);
#line 639 "add_trail_ops.m"
            return;
          }
#line 475 "add_trail_ops.m"
        }
#line 479 "add_trail_ops.m"
        break;
#line 479 "add_trail_ops.m"
      case (MR_Integer) 1:
#line 480 "add_trail_ops.m"
        {
#line 480 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__Args_10;
#line 480 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_12_12;
#line 480 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_13_13;
#line 480 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_14_14;
#line 480 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_16_16;
#line 480 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_17_17;
#line 480 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_22_22;
#line 480 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_23_23;
#line 484 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_39_39;
#line 484 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_40_40;
#line 484 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_41_41;
#line 484 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_42_42;

#line 481 "add_trail_ops.m"
          {
#line 481 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_16_16 = parse_tree__prog_mode__in_mode_0_f_0();
          }
#line 481 "add_trail_ops.m"
          {
#line 481 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 481 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 0) = ((MR_Box) ((MR_String) "Ticket"));
#line 481 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_16_16));
#line 481 "add_trail_ops.m"
          }
#line 481 "add_trail_ops.m"
          {
#line 481 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 481 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_13_13, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_14_14));
#line 481 "add_trail_ops.m"
          }
#line 625 "add_trail_ops.m"
          {
#line 625 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_17_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          }
#line 481 "add_trail_ops.m"
          {
#line 481 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 481 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 0) = ((MR_Box) (ml_backend__add_trail_ops__TicketVar_5));
#line 481 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_13_13));
#line 481 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_17_17));
#line 481 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 3) = ((MR_Box) ((MR_Integer) 0));
#line 481 "add_trail_ops.m"
          }
#line 482 "add_trail_ops.m"
          {
#line 482 "add_trail_ops.m"
            ml_backend__add_trail_ops__Args_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 482 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_12_12));
#line 482 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 482 "add_trail_ops.m"
          }
#line 485 "add_trail_ops.m"
          {
#line 485 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_22_22 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 484 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 484 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 484 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 484 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 484 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 484 "add_trail_ops.m"
          {
#line 484 "add_trail_ops.m"
            ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "reset_ticket_solve", (MR_Integer) 2, ml_backend__add_trail_ops__V_22_22, ml_backend__add_trail_ops__V_23_23, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__Args_10, (MR_String) "MR_reset_ticket(Ticket, MR_solve);", ml_backend__add_trail_ops__ResetTicketGoal_7);
#line 484 "add_trail_ops.m"
            return;
          }
#line 480 "add_trail_ops.m"
        }
#line 479 "add_trail_ops.m"
        break;
#line 479 "add_trail_ops.m"
    }
#line 472 "add_trail_ops.m"
  }
#line 469 "add_trail_ops.m"
}

#line 449 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_reset_ticket_undo_4_p_0(
#line 449 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
#line 449 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_6,
#line 449 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__ResetTicketGoal_7,
#line 449 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_8)
#line 449 "add_trail_ops.m"
{
#line 452 "add_trail_ops.m"
  {
#line 452 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 452 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__GenerateInline_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 453 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 453 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 453 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 453 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);

#line 459 "add_trail_ops.m"
#line 459 "add_trail_ops.m"
    switch (ml_backend__add_trail_ops__GenerateInline_9) {
#line 459 "add_trail_ops.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 459 "add_trail_ops.m"
      case (MR_Integer) 0:
#line 455 "add_trail_ops.m"
        {
#line 455 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_27_27;
#line 455 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_28_28;
#line 455 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_29_29;
#line 455 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_51_51;
#line 456 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_35_35;
#line 456 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_36_36;
#line 456 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_37_37;
#line 456 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_38_38;

#line 457 "add_trail_ops.m"
          {
#line 457 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 457 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 0) = ((MR_Box) (ml_backend__add_trail_ops__TicketVar_5));
#line 457 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 457 "add_trail_ops.m"
          }
#line 457 "add_trail_ops.m"
          {
#line 457 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_28_28 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 456 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 456 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 456 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 456 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 456 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 639 "add_trail_ops.m"
          {
#line 639 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_51_51 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 639 "add_trail_ops.m"
          {
#line 639 "add_trail_ops.m"
            hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_51_51, (MR_String) "reset_ticket_undo", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, ml_backend__add_trail_ops__V_27_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_28_28, ml_backend__add_trail_ops__V_29_29, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__ResetTicketGoal_7);
#line 639 "add_trail_ops.m"
            return;
          }
#line 455 "add_trail_ops.m"
        }
#line 459 "add_trail_ops.m"
        break;
#line 459 "add_trail_ops.m"
      case (MR_Integer) 1:
#line 460 "add_trail_ops.m"
        {
#line 460 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__Args_10;
#line 460 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_12_12;
#line 460 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_13_13;
#line 460 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_14_14;
#line 460 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_16_16;
#line 460 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_17_17;
#line 460 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_22_22;
#line 460 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_23_23;
#line 464 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_39_39;
#line 464 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_40_40;
#line 464 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_41_41;
#line 464 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_42_42;

#line 461 "add_trail_ops.m"
          {
#line 461 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_16_16 = parse_tree__prog_mode__in_mode_0_f_0();
          }
#line 461 "add_trail_ops.m"
          {
#line 461 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 461 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 0) = ((MR_Box) ((MR_String) "Ticket"));
#line 461 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_16_16));
#line 461 "add_trail_ops.m"
          }
#line 461 "add_trail_ops.m"
          {
#line 461 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 461 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_13_13, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_14_14));
#line 461 "add_trail_ops.m"
          }
#line 625 "add_trail_ops.m"
          {
#line 625 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_17_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          }
#line 461 "add_trail_ops.m"
          {
#line 461 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 461 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 0) = ((MR_Box) (ml_backend__add_trail_ops__TicketVar_5));
#line 461 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_13_13));
#line 461 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_17_17));
#line 461 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 3) = ((MR_Box) ((MR_Integer) 0));
#line 461 "add_trail_ops.m"
          }
#line 462 "add_trail_ops.m"
          {
#line 462 "add_trail_ops.m"
            ml_backend__add_trail_ops__Args_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_12_12));
#line 462 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 462 "add_trail_ops.m"
          }
#line 465 "add_trail_ops.m"
          {
#line 465 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_22_22 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 464 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 464 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 464 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 464 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 464 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 464 "add_trail_ops.m"
          {
#line 464 "add_trail_ops.m"
            ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "reset_ticket_undo", (MR_Integer) 2, ml_backend__add_trail_ops__V_22_22, ml_backend__add_trail_ops__V_23_23, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__Args_10, (MR_String) "MR_reset_ticket(Ticket, MR_undo);", ml_backend__add_trail_ops__ResetTicketGoal_7);
#line 464 "add_trail_ops.m"
            return;
          }
#line 460 "add_trail_ops.m"
        }
#line 459 "add_trail_ops.m"
        break;
#line 459 "add_trail_ops.m"
    }
#line 452 "add_trail_ops.m"
  }
#line 449 "add_trail_ops.m"
}

#line 429 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_store_ticket_4_p_0(
#line 429 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
#line 429 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_6,
#line 429 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__SaveTicketGoal_7,
#line 429 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_8)
#line 429 "add_trail_ops.m"
{
#line 432 "add_trail_ops.m"
  {
#line 432 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 432 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__GenerateInline_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 433 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 433 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 433 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 433 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);

#line 439 "add_trail_ops.m"
#line 439 "add_trail_ops.m"
    switch (ml_backend__add_trail_ops__GenerateInline_9) {
#line 439 "add_trail_ops.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 439 "add_trail_ops.m"
      case (MR_Integer) 0:
#line 435 "add_trail_ops.m"
        {
#line 435 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_27_27;
#line 435 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_28_28;
#line 435 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_29_29;
#line 435 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_51_51;
#line 436 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_35_35;
#line 436 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_36_36;
#line 436 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_37_37;
#line 436 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_38_38;

#line 437 "add_trail_ops.m"
          {
#line 437 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 0) = ((MR_Box) (ml_backend__add_trail_ops__TicketVar_5));
#line 437 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 437 "add_trail_ops.m"
          }
#line 437 "add_trail_ops.m"
          {
#line 437 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_28_28 = hlds__instmap__instmap_delta_bind_var_1_f_0(ml_backend__add_trail_ops__TicketVar_5);
          }
#line 436 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 436 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 436 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 436 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 436 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 639 "add_trail_ops.m"
          {
#line 639 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_51_51 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 639 "add_trail_ops.m"
          {
#line 639 "add_trail_ops.m"
            hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_51_51, (MR_String) "store_ticket", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, ml_backend__add_trail_ops__V_27_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_28_28, ml_backend__add_trail_ops__V_29_29, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__SaveTicketGoal_7);
#line 639 "add_trail_ops.m"
            return;
          }
#line 435 "add_trail_ops.m"
        }
#line 439 "add_trail_ops.m"
        break;
#line 439 "add_trail_ops.m"
      case (MR_Integer) 1:
#line 440 "add_trail_ops.m"
        {
#line 440 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__Args_10;
#line 440 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_12_12;
#line 440 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_13_13;
#line 440 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_14_14;
#line 440 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_16_16;
#line 440 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_17_17;
#line 440 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_22_22;
#line 440 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_23_23;
#line 444 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_39_39;
#line 444 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_40_40;
#line 444 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_41_41;
#line 444 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_42_42;

#line 441 "add_trail_ops.m"
          {
#line 441 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_16_16 = parse_tree__prog_mode__out_mode_0_f_0();
          }
#line 441 "add_trail_ops.m"
          {
#line 441 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 441 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 0) = ((MR_Box) ((MR_String) "Ticket"));
#line 441 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_16_16));
#line 441 "add_trail_ops.m"
          }
#line 441 "add_trail_ops.m"
          {
#line 441 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 441 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_13_13, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_14_14));
#line 441 "add_trail_ops.m"
          }
#line 625 "add_trail_ops.m"
          {
#line 625 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_17_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          }
#line 441 "add_trail_ops.m"
          {
#line 441 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 441 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 0) = ((MR_Box) (ml_backend__add_trail_ops__TicketVar_5));
#line 441 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_13_13));
#line 441 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_17_17));
#line 441 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 3) = ((MR_Box) ((MR_Integer) 0));
#line 441 "add_trail_ops.m"
          }
#line 442 "add_trail_ops.m"
          {
#line 442 "add_trail_ops.m"
            ml_backend__add_trail_ops__Args_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_12_12));
#line 442 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 442 "add_trail_ops.m"
          }
#line 445 "add_trail_ops.m"
          {
#line 445 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_22_22 = hlds__instmap__instmap_delta_bind_var_1_f_0(ml_backend__add_trail_ops__TicketVar_5);
          }
#line 444 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 444 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 444 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 444 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 444 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 444 "add_trail_ops.m"
          {
#line 444 "add_trail_ops.m"
            ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "store_ticket", (MR_Integer) 2, ml_backend__add_trail_ops__V_22_22, ml_backend__add_trail_ops__V_23_23, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__Args_10, (MR_String) "MR_store_ticket(Ticket);", ml_backend__add_trail_ops__SaveTicketGoal_7);
#line 444 "add_trail_ops.m"
            return;
          }
#line 440 "add_trail_ops.m"
        }
#line 439 "add_trail_ops.m"
        break;
#line 439 "add_trail_ops.m"
    }
#line 432 "add_trail_ops.m"
  }
#line 429 "add_trail_ops.m"
}

#line 417 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__cases_add_trail_ops_4_p_0(
#line 417 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__HeadVar__1_1,
#line 417 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__HeadVar__2_2,
#line 417 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_3,
#line 417 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_4)
#line 417 "add_trail_ops.m"
{
#line 420 "add_trail_ops.m"
  {
#line 420 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;

#line 420 "add_trail_ops.m"
    if ((ml_backend__add_trail_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 420 "add_trail_ops.m"
      {
#line 420 "add_trail_ops.m"
        *ml_backend__add_trail_ops__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 420 "add_trail_ops.m"
        *ml_backend__add_trail_ops__STATE_VARIABLE_Info_4 = ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_3;
#line 420 "add_trail_ops.m"
      }
#line 420 "add_trail_ops.m"
    else
#line 421 "add_trail_ops.m"
      {
#line 421 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__Case0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 421 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__Cases0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__HeadVar__1_1, (MR_Integer) 1)));
#line 421 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__Case_10;
#line 421 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__Cases_11;
#line 421 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Case0_8, (MR_Integer) 0)));
#line 421 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Case0_8, (MR_Integer) 1)));
#line 421 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Case0_8, (MR_Integer) 2)));
#line 421 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__Goal_16;
#line 421 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_19_19;
#line 421 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__GoalExpr0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal0_15, (MR_Integer) 0)));
#line 421 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__GoalInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal0_15, (MR_Integer) 1)));

#line 138 "add_trail_ops.m"
        {
#line 138 "add_trail_ops.m"
          ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_p_0(ml_backend__add_trail_ops__GoalExpr0_26, ml_backend__add_trail_ops__GoalInfo_27, &ml_backend__add_trail_ops__Goal_16, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_3, &ml_backend__add_trail_ops__STATE_VARIABLE_Info_19_19);
        }
#line 424 "add_trail_ops.m"
        {
#line 424 "add_trail_ops.m"
          ml_backend__add_trail_ops__Case_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 424 "add_trail_ops.m"
          MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Case_10, 0) = ((MR_Box) (ml_backend__add_trail_ops__MainConsId_13));
#line 424 "add_trail_ops.m"
          MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Case_10, 1) = ((MR_Box) (ml_backend__add_trail_ops__OtherConsIds_14));
#line 424 "add_trail_ops.m"
          MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Case_10, 2) = ((MR_Box) (ml_backend__add_trail_ops__Goal_16));
#line 424 "add_trail_ops.m"
        }
#line 425 "add_trail_ops.m"
        {
#line 425 "add_trail_ops.m"
          ml_backend__add_trail_ops__cases_add_trail_ops_4_p_0(ml_backend__add_trail_ops__Cases0_9, &ml_backend__add_trail_ops__Cases_11, ml_backend__add_trail_ops__STATE_VARIABLE_Info_19_19, ml_backend__add_trail_ops__STATE_VARIABLE_Info_4);
        }
#line 421 "add_trail_ops.m"
        {
#line 421 "add_trail_ops.m"
          MR_Word base;
#line 421 "add_trail_ops.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "add_trail_ops.m"
          *ml_backend__add_trail_ops__HeadVar__2_2 = base;
#line 421 "add_trail_ops.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__Case_10));
#line 421 "add_trail_ops.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__Cases_11));
#line 421 "add_trail_ops.m"
        }
#line 421 "add_trail_ops.m"
      }
#line 420 "add_trail_ops.m"
  }
#line 417 "add_trail_ops.m"
}

#line 362 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__disj_add_trail_ops_7_p_0(
#line 362 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__HeadVar__1_1,
#line 362 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__HeadVar__2_2,
#line 362 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__IsFirstBranch_3,
#line 362 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__CodeModel_4,
#line 362 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
#line 362 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6,
#line 362 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_7)
#line 362 "add_trail_ops.m"
{
#line 366 "add_trail_ops.m"
  {
#line 366 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;

#line 366 "add_trail_ops.m"
    if ((ml_backend__add_trail_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 366 "add_trail_ops.m"
      {
#line 366 "add_trail_ops.m"
        *ml_backend__add_trail_ops__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 366 "add_trail_ops.m"
        *ml_backend__add_trail_ops__STATE_VARIABLE_Info_7 = ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6;
#line 366 "add_trail_ops.m"
      }
#line 366 "add_trail_ops.m"
    else
#line 368 "add_trail_ops.m"
      {
#line 368 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__TypeCtorInfo_52_52;
#line 368 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__Goal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 368 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__HeadVar__1_1, (MR_Integer) 1)));
#line 368 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__Goal_16;
#line 368 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__Goals_17;
#line 368 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__GoalInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal0_14, (MR_Integer) 1)));
#line 368 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__Context_24;
#line 368 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__UndoList_25;
#line 368 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__Goal1_31;
#line 368 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__PruneList_32;
#line 368 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__GoalInfo1_36;
#line 368 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_42_42;
#line 368 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_45_45;
#line 368 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_46_46;
#line 368 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_47_47;
#line 369 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal0_14, (MR_Integer) 0)));
#line 410 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_35_35;

#line 370 "add_trail_ops.m"
        {
#line 370 "add_trail_ops.m"
          ml_backend__add_trail_ops__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__add_trail_ops__GoalInfo0_23);
        }
#line 376 "add_trail_ops.m"
#line 376 "add_trail_ops.m"
        switch (ml_backend__add_trail_ops__IsFirstBranch_3) {
#line 376 "add_trail_ops.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 376 "add_trail_ops.m"
          case (MR_Integer) 0:
#line 375 "add_trail_ops.m"
            ml_backend__add_trail_ops__UndoList_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 376 "add_trail_ops.m"
            break;
#line 376 "add_trail_ops.m"
          case (MR_Integer) 1:
#line 377 "add_trail_ops.m"
            {
#line 377 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__ResetTicketUndoGoal_26;
#line 377 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__UndoList0_27;

#line 378 "add_trail_ops.m"
              {
#line 378 "add_trail_ops.m"
                ml_backend__add_trail_ops__gen_reset_ticket_undo_4_p_0(ml_backend__add_trail_ops__TicketVar_5, ml_backend__add_trail_ops__Context_24, &ml_backend__add_trail_ops__ResetTicketUndoGoal_26, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6);
              }
#line 379 "add_trail_ops.m"
              {
#line 379 "add_trail_ops.m"
                ml_backend__add_trail_ops__UndoList0_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 379 "add_trail_ops.m"
                MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__UndoList0_27, 0) = ((MR_Box) (ml_backend__add_trail_ops__ResetTicketUndoGoal_26));
#line 379 "add_trail_ops.m"
                MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__UndoList0_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "add_trail_ops.m"
              }
#line 386 "add_trail_ops.m"
              if ((ml_backend__add_trail_ops__Goals0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 381 "add_trail_ops.m"
                {
#line 381 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__DiscardTicketGoal_28;
#line 381 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__V_40_40;
#line 381 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__GenerateInline_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 532 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 532 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 532 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 532 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__V_72_72 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) & (MR_Integer) 1);

#line 538 "add_trail_ops.m"
#line 538 "add_trail_ops.m"
                  switch (ml_backend__add_trail_ops__GenerateInline_56) {
#line 538 "add_trail_ops.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 538 "add_trail_ops.m"
                    case (MR_Integer) 0:
#line 534 "add_trail_ops.m"
                      {
#line 534 "add_trail_ops.m"
                        MR_Word ml_backend__add_trail_ops__V_67_67;
#line 534 "add_trail_ops.m"
                        MR_Word ml_backend__add_trail_ops__V_68_68;
#line 534 "add_trail_ops.m"
                        MR_Word ml_backend__add_trail_ops__V_89_89;
#line 535 "add_trail_ops.m"
                        MR_Word ml_backend__add_trail_ops__V_73_73;
#line 535 "add_trail_ops.m"
                        MR_Word ml_backend__add_trail_ops__V_74_74;
#line 535 "add_trail_ops.m"
                        MR_Word ml_backend__add_trail_ops__V_75_75;
#line 535 "add_trail_ops.m"
                        MR_Word ml_backend__add_trail_ops__V_76_76;

#line 536 "add_trail_ops.m"
                        {
#line 536 "add_trail_ops.m"
                          ml_backend__add_trail_ops__V_67_67 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                        }
#line 535 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 535 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 535 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 535 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_75_75 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 535 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 639 "add_trail_ops.m"
                        {
#line 639 "add_trail_ops.m"
                          ml_backend__add_trail_ops__V_89_89 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                        }
#line 639 "add_trail_ops.m"
                        {
#line 639 "add_trail_ops.m"
                          hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_89_89, (MR_String) "discard_ticket", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_67_67, ml_backend__add_trail_ops__V_68_68, ml_backend__add_trail_ops__Context_24, &ml_backend__add_trail_ops__DiscardTicketGoal_28);
                        }
#line 534 "add_trail_ops.m"
                      }
#line 538 "add_trail_ops.m"
                      break;
#line 538 "add_trail_ops.m"
                    case (MR_Integer) 1:
#line 539 "add_trail_ops.m"
                      {
#line 539 "add_trail_ops.m"
                        MR_Word ml_backend__add_trail_ops__V_61_61;
#line 539 "add_trail_ops.m"
                        MR_Word ml_backend__add_trail_ops__V_62_62;
#line 542 "add_trail_ops.m"
                        MR_Word ml_backend__add_trail_ops__V_77_77;
#line 542 "add_trail_ops.m"
                        MR_Word ml_backend__add_trail_ops__V_78_78;
#line 542 "add_trail_ops.m"
                        MR_Word ml_backend__add_trail_ops__V_79_79;
#line 542 "add_trail_ops.m"
                        MR_Word ml_backend__add_trail_ops__V_80_80;

#line 543 "add_trail_ops.m"
                        {
#line 543 "add_trail_ops.m"
                          ml_backend__add_trail_ops__V_61_61 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                        }
#line 542 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 542 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 542 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 542 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_79_79 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 542 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 542 "add_trail_ops.m"
                        {
#line 542 "add_trail_ops.m"
                          ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "discard_ticket", (MR_Integer) 2, ml_backend__add_trail_ops__V_61_61, ml_backend__add_trail_ops__V_62_62, ml_backend__add_trail_ops__Context_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_String) "MR_discard_ticket();", &ml_backend__add_trail_ops__DiscardTicketGoal_28);
                        }
#line 539 "add_trail_ops.m"
                      }
#line 538 "add_trail_ops.m"
                      break;
#line 538 "add_trail_ops.m"
                  }
#line 385 "add_trail_ops.m"
                  {
#line 385 "add_trail_ops.m"
                    ml_backend__add_trail_ops__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 385 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_40_40, 0) = ((MR_Box) (ml_backend__add_trail_ops__DiscardTicketGoal_28));
#line 385 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 385 "add_trail_ops.m"
                  }
#line 385 "add_trail_ops.m"
                  {
#line 385 "add_trail_ops.m"
                    ml_backend__add_trail_ops__UndoList_25 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ml_backend__add_trail_ops__UndoList0_27, ml_backend__add_trail_ops__V_40_40);
                  }
#line 381 "add_trail_ops.m"
                }
#line 386 "add_trail_ops.m"
              else
#line 388 "add_trail_ops.m"
                ml_backend__add_trail_ops__UndoList_25 = ml_backend__add_trail_ops__UndoList0_27;
#line 377 "add_trail_ops.m"
            }
#line 376 "add_trail_ops.m"
            break;
#line 376 "add_trail_ops.m"
        }
#line 391 "add_trail_ops.m"
        {
#line 391 "add_trail_ops.m"
          ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(ml_backend__add_trail_ops__Goal0_14, &ml_backend__add_trail_ops__Goal1_31, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, &ml_backend__add_trail_ops__STATE_VARIABLE_Info_42_42);
        }
#line 399 "add_trail_ops.m"
#line 399 "add_trail_ops.m"
        switch (ml_backend__add_trail_ops__CodeModel_4) {
#line 399 "add_trail_ops.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 399 "add_trail_ops.m"
          case (MR_Integer) 0:
#line 399 "add_trail_ops.m"
          case (MR_Integer) 1:
#line 402 "add_trail_ops.m"
            {
#line 402 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__ResetTicketCommitGoal_33;
#line 402 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__PruneTicketGoal_34;
#line 402 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__V_43_43;

#line 403 "add_trail_ops.m"
              {
#line 403 "add_trail_ops.m"
                ml_backend__add_trail_ops__gen_reset_ticket_commit_4_p_0(ml_backend__add_trail_ops__TicketVar_5, ml_backend__add_trail_ops__Context_24, &ml_backend__add_trail_ops__ResetTicketCommitGoal_33, ml_backend__add_trail_ops__STATE_VARIABLE_Info_42_42);
              }
#line 405 "add_trail_ops.m"
              {
#line 405 "add_trail_ops.m"
                ml_backend__add_trail_ops__gen_prune_ticket_3_p_0(ml_backend__add_trail_ops__Context_24, &ml_backend__add_trail_ops__PruneTicketGoal_34, ml_backend__add_trail_ops__STATE_VARIABLE_Info_42_42);
              }
#line 406 "add_trail_ops.m"
              {
#line 406 "add_trail_ops.m"
                ml_backend__add_trail_ops__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "add_trail_ops.m"
                MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_43_43, 0) = ((MR_Box) (ml_backend__add_trail_ops__PruneTicketGoal_34));
#line 406 "add_trail_ops.m"
                MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 406 "add_trail_ops.m"
              }
#line 406 "add_trail_ops.m"
              {
#line 406 "add_trail_ops.m"
                ml_backend__add_trail_ops__PruneList_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "add_trail_ops.m"
                MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__PruneList_32, 0) = ((MR_Box) (ml_backend__add_trail_ops__ResetTicketCommitGoal_33));
#line 406 "add_trail_ops.m"
                MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__PruneList_32, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_43_43));
#line 406 "add_trail_ops.m"
              }
#line 402 "add_trail_ops.m"
            }
#line 399 "add_trail_ops.m"
            break;
#line 399 "add_trail_ops.m"
          case (MR_Integer) 2:
#line 398 "add_trail_ops.m"
            ml_backend__add_trail_ops__PruneList_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 399 "add_trail_ops.m"
            break;
#line 399 "add_trail_ops.m"
        }
#line 410 "add_trail_ops.m"
        ml_backend__add_trail_ops__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal1_31, (MR_Integer) 0)));
#line 410 "add_trail_ops.m"
        ml_backend__add_trail_ops__GoalInfo1_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal1_31, (MR_Integer) 1)));
#line 3203 "ml_backend.add_trail_ops.c"
        ml_backend__add_trail_ops__TypeCtorInfo_52_52 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 411 "add_trail_ops.m"
        {
#line 411 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "add_trail_ops.m"
          MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_47_47, 0) = ((MR_Box) (ml_backend__add_trail_ops__Goal1_31));
#line 411 "add_trail_ops.m"
          MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 411 "add_trail_ops.m"
        }
#line 411 "add_trail_ops.m"
        {
#line 411 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_46_46 = mercury__list__f_43_43_2_f_0(ml_backend__add_trail_ops__TypeCtorInfo_52_52, ml_backend__add_trail_ops__V_47_47, ml_backend__add_trail_ops__PruneList_32);
        }
#line 411 "add_trail_ops.m"
        {
#line 411 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_45_45 = mercury__list__f_43_43_2_f_0(ml_backend__add_trail_ops__TypeCtorInfo_52_52, ml_backend__add_trail_ops__UndoList_25, ml_backend__add_trail_ops__V_46_46);
        }
#line 411 "add_trail_ops.m"
        {
#line 411 "add_trail_ops.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(ml_backend__add_trail_ops__V_45_45, ml_backend__add_trail_ops__GoalInfo1_36, &ml_backend__add_trail_ops__Goal_16);
        }
#line 414 "add_trail_ops.m"
        {
#line 414 "add_trail_ops.m"
          ml_backend__add_trail_ops__disj_add_trail_ops_7_p_0(ml_backend__add_trail_ops__Goals0_15, &ml_backend__add_trail_ops__Goals_17, (MR_Integer) 1, ml_backend__add_trail_ops__CodeModel_4, ml_backend__add_trail_ops__TicketVar_5, ml_backend__add_trail_ops__STATE_VARIABLE_Info_42_42, ml_backend__add_trail_ops__STATE_VARIABLE_Info_7);
        }
#line 367 "add_trail_ops.m"
        {
#line 367 "add_trail_ops.m"
          MR_Word base;
#line 367 "add_trail_ops.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 367 "add_trail_ops.m"
          *ml_backend__add_trail_ops__HeadVar__2_2 = base;
#line 367 "add_trail_ops.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__Goal_16));
#line 367 "add_trail_ops.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__Goals_17));
#line 367 "add_trail_ops.m"
        }
#line 368 "add_trail_ops.m"
      }
#line 366 "add_trail_ops.m"
  }
#line 362 "add_trail_ops.m"
}

#line 360 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__conj_add_trail_ops_4_p_0_1(
#line 360 "add_trail_ops.m"
  MR_Box ml_backend__add_trail_ops__closure_arg,
#line 360 "add_trail_ops.m"
  MR_Box ml_backend__add_trail_ops__wrapper_arg_1,
#line 360 "add_trail_ops.m"
  MR_Box * ml_backend__add_trail_ops__wrapper_arg_2,
#line 360 "add_trail_ops.m"
  MR_Box ml_backend__add_trail_ops__wrapper_arg_3,
#line 360 "add_trail_ops.m"
  MR_Box * ml_backend__add_trail_ops__wrapper_arg_4)
#line 360 "add_trail_ops.m"
{
#line 360 "add_trail_ops.m"
  {
#line 360 "add_trail_ops.m"
    MR_Box ml_backend__add_trail_ops__closure = ml_backend__add_trail_ops__closure_arg;
#line 360 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__conv1_Goal_6;
#line 360 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__conv0_STATE_VARIABLE_Info_11;

#line 360 "add_trail_ops.m"
    {
#line 360 "add_trail_ops.m"
      ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(((MR_Word) ml_backend__add_trail_ops__wrapper_arg_1), &ml_backend__add_trail_ops__conv1_Goal_6, ((MR_Word) ml_backend__add_trail_ops__wrapper_arg_3), &ml_backend__add_trail_ops__conv0_STATE_VARIABLE_Info_11);
    }
#line 360 "add_trail_ops.m"
    *ml_backend__add_trail_ops__wrapper_arg_2 = ((MR_Box) (ml_backend__add_trail_ops__conv1_Goal_6));
#line 360 "add_trail_ops.m"
    *ml_backend__add_trail_ops__wrapper_arg_4 = ((MR_Box) (ml_backend__add_trail_ops__conv0_STATE_VARIABLE_Info_11));
#line 360 "add_trail_ops.m"
  }
#line 360 "add_trail_ops.m"
}

#line 356 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__conj_add_trail_ops_4_p_0(
#line 356 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Goals0_5,
#line 356 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__Goals_6,
#line 356 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_8,
#line 356 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_9)
#line 356 "add_trail_ops.m"
{
#line 359 "add_trail_ops.m"
  {
#line 359 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 359 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__TypeCtorInfo_16_16 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 360 "add_trail_ops.m"
    MR_Box ml_backend__add_trail_ops__conv2_STATE_VARIABLE_Info_9;

#line 360 "add_trail_ops.m"
    {
#line 360 "add_trail_ops.m"
      mercury__list__map_foldl_5_p_0(ml_backend__add_trail_ops__TypeCtorInfo_16_16, ml_backend__add_trail_ops__TypeCtorInfo_16_16, (MR_Word) &ml_backend__add_trail_ops__ml_backend__add_trail_ops__type_ctor_info_trail_ops_info_0, (MR_Word) &ml_backend__add_trail_ops_scalar_common_2[1], ml_backend__add_trail_ops__Goals0_5, ml_backend__add_trail_ops__Goals_6, ((MR_Box) (ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_8)), &ml_backend__add_trail_ops__conv2_STATE_VARIABLE_Info_9);
    }
#line 360 "add_trail_ops.m"
    *ml_backend__add_trail_ops__STATE_VARIABLE_Info_9 = ((MR_Word) ml_backend__add_trail_ops__conv2_STATE_VARIABLE_Info_9);
#line 359 "add_trail_ops.m"
  }
#line 356 "add_trail_ops.m"
}

#line 140 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_p_0(
#line 140 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__GoalExpr0_6,
#line 140 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__GoalInfo0_7,
#line 140 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__Goal_8,
#line 140 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102,
#line 140 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_103)
#line 140 "add_trail_ops.m"
{
#line 145 "add_trail_ops.m"
  while (MR_TRUE)
#line 145 "add_trail_ops.m"
    {
#line 145 "add_trail_ops.m"
      /* tailcall optimized into a loop */
#line 145 "add_trail_ops.m"
      {
#line 145 "add_trail_ops.m"
        MR_bool ml_backend__add_trail_ops__succeeded;

#line 145 "add_trail_ops.m"
#line 145 "add_trail_ops.m"
        switch (MR_tag((MR_Word) ml_backend__add_trail_ops__GoalExpr0_6)) {
#line 145 "add_trail_ops.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 145 "add_trail_ops.m"
          case (MR_Integer) 0:
#line 175 "add_trail_ops.m"
            {
#line 175 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__InnerGoal_26 = (MR_Word) MR_body(((MR_Word) ml_backend__add_trail_ops__GoalExpr0_6), (MR_Integer) 0);
#line 175 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__InnerGoalInfo_29;
#line 175 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__Determinism_30;
#line 175 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__NumSolns_32;
#line 175 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__True_33;
#line 175 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__Fail_34;
#line 175 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__ModuleInfo_35;
#line 175 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__ThenGoal_36;
#line 175 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__NewOuterGoal_37;
#line 175 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__Context_180;
#line 181 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__V_28_28;
#line 183 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops___CanFail_31;
#line 186 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__V_219_219;
#line 186 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__V_220_220;
#line 186 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__V_221_221;
#line 186 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__V_222_222;

#line 180 "add_trail_ops.m"
              {
#line 180 "add_trail_ops.m"
                ml_backend__add_trail_ops__Context_180 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__add_trail_ops__GoalInfo0_7);
              }
#line 181 "add_trail_ops.m"
              ml_backend__add_trail_ops__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__InnerGoal_26, (MR_Integer) 0)));
#line 181 "add_trail_ops.m"
              ml_backend__add_trail_ops__InnerGoalInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__InnerGoal_26, (MR_Integer) 1)));
#line 182 "add_trail_ops.m"
              {
#line 182 "add_trail_ops.m"
                ml_backend__add_trail_ops__Determinism_30 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ml_backend__add_trail_ops__InnerGoalInfo_29);
              }
#line 183 "add_trail_ops.m"
              {
#line 183 "add_trail_ops.m"
                parse_tree__prog_data__determinism_components_3_p_0(ml_backend__add_trail_ops__Determinism_30, &ml_backend__add_trail_ops___CanFail_31, &ml_backend__add_trail_ops__NumSolns_32);
              }
#line 184 "add_trail_ops.m"
              {
#line 184 "add_trail_ops.m"
                ml_backend__add_trail_ops__True_33 = hlds__make_goal__true_goal_with_context_1_f_0(ml_backend__add_trail_ops__Context_180);
              }
#line 185 "add_trail_ops.m"
              {
#line 185 "add_trail_ops.m"
                ml_backend__add_trail_ops__Fail_34 = hlds__make_goal__fail_goal_with_context_1_f_0(ml_backend__add_trail_ops__Context_180);
              }
#line 186 "add_trail_ops.m"
              ml_backend__add_trail_ops__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, (MR_Integer) 0)));
#line 186 "add_trail_ops.m"
              ml_backend__add_trail_ops__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, (MR_Integer) 1)));
#line 186 "add_trail_ops.m"
              ml_backend__add_trail_ops__ModuleInfo_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, (MR_Integer) 2)));
#line 186 "add_trail_ops.m"
              ml_backend__add_trail_ops__V_221_221 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 186 "add_trail_ops.m"
              ml_backend__add_trail_ops__V_222_222 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 196 "add_trail_ops.m"
#line 196 "add_trail_ops.m"
              switch (ml_backend__add_trail_ops__NumSolns_32) {
#line 196 "add_trail_ops.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 196 "add_trail_ops.m"
                case (MR_Integer) 3:
#line 196 "add_trail_ops.m"
                case (MR_Integer) 2:
#line 196 "add_trail_ops.m"
                case (MR_Integer) 1:
#line 201 "add_trail_ops.m"
                  ml_backend__add_trail_ops__ThenGoal_36 = ml_backend__add_trail_ops__Fail_34;
#line 196 "add_trail_ops.m"
                  break;
#line 196 "add_trail_ops.m"
                case (MR_Integer) 0:
#line 188 "add_trail_ops.m"
                  {
#line 188 "add_trail_ops.m"
                    MR_Word ml_backend__add_trail_ops__V_164_164;

#line 195 "add_trail_ops.m"
                    {
#line 195 "add_trail_ops.m"
                      ml_backend__add_trail_ops__V_164_164 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                    }
#line 194 "add_trail_ops.m"
                    {
#line 194 "add_trail_ops.m"
                      ml_backend__add_trail_ops__trail_generate_call_8_p_0((MR_String) "unused", (MR_Integer) 0, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_164_164, ml_backend__add_trail_ops__ModuleInfo_35, ml_backend__add_trail_ops__Context_180, &ml_backend__add_trail_ops__ThenGoal_36);
                    }
#line 188 "add_trail_ops.m"
                  }
#line 196 "add_trail_ops.m"
                  break;
#line 196 "add_trail_ops.m"
              }
#line 203 "add_trail_ops.m"
              {
#line 203 "add_trail_ops.m"
                ml_backend__add_trail_ops__NewOuterGoal_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 203 "add_trail_ops.m"
                MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__NewOuterGoal_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 203 "add_trail_ops.m"
                MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__NewOuterGoal_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 203 "add_trail_ops.m"
                MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__NewOuterGoal_37, 2) = ((MR_Box) (ml_backend__add_trail_ops__InnerGoal_26));
#line 203 "add_trail_ops.m"
                MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__NewOuterGoal_37, 3) = ((MR_Box) (ml_backend__add_trail_ops__ThenGoal_36));
#line 203 "add_trail_ops.m"
                MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__NewOuterGoal_37, 4) = ((MR_Box) (ml_backend__add_trail_ops__True_33));
#line 203 "add_trail_ops.m"
              }
#line 204 "add_trail_ops.m"
              /* direct tailcall eliminated */
#line 204 "add_trail_ops.m"
              {
#line 204 "add_trail_ops.m"
                MR_Word ml_backend__add_trail_ops__GoalExpr0__tmp_copy_6 = ml_backend__add_trail_ops__NewOuterGoal_37;

#line 204 "add_trail_ops.m"
                ml_backend__add_trail_ops__GoalExpr0_6 = ml_backend__add_trail_ops__GoalExpr0__tmp_copy_6;
#line 204 "add_trail_ops.m"
              }
#line 204 "add_trail_ops.m"
              continue;
#line 175 "add_trail_ops.m"
            }
#line 145 "add_trail_ops.m"
            break;
#line 145 "add_trail_ops.m"
          case (MR_Integer) 1:
#line 145 "add_trail_ops.m"
          case (MR_Integer) 2:
#line 345 "add_trail_ops.m"
            {
#line 346 "add_trail_ops.m"
              {
#line 346 "add_trail_ops.m"
                MR_Word base;
#line 346 "add_trail_ops.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 346 "add_trail_ops.m"
                *ml_backend__add_trail_ops__Goal_8 = base;
#line 346 "add_trail_ops.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__GoalExpr0_6));
#line 346 "add_trail_ops.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
#line 346 "add_trail_ops.m"
              }
#line 345 "add_trail_ops.m"
              *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103 = ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102;
#line 345 "add_trail_ops.m"
            }
#line 145 "add_trail_ops.m"
            break;
#line 145 "add_trail_ops.m"
          case (MR_Integer) 3:
#line 145 "add_trail_ops.m"
#line 145 "add_trail_ops.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 0)))) {
#line 145 "add_trail_ops.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 145 "add_trail_ops.m"
              case (MR_Integer) 0:
#line 345 "add_trail_ops.m"
                {
#line 346 "add_trail_ops.m"
                  {
#line 346 "add_trail_ops.m"
                    MR_Word base;
#line 346 "add_trail_ops.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 346 "add_trail_ops.m"
                    *ml_backend__add_trail_ops__Goal_8 = base;
#line 346 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__GoalExpr0_6));
#line 346 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
#line 346 "add_trail_ops.m"
                  }
#line 345 "add_trail_ops.m"
                  *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103 = ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102;
#line 345 "add_trail_ops.m"
                }
#line 145 "add_trail_ops.m"
                break;
#line 145 "add_trail_ops.m"
              case (MR_Integer) 1:
#line 348 "add_trail_ops.m"
                {
#line 349 "add_trail_ops.m"
                  {
#line 349 "add_trail_ops.m"
                    MR_Word base;
#line 349 "add_trail_ops.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 349 "add_trail_ops.m"
                    *ml_backend__add_trail_ops__Goal_8 = base;
#line 349 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__GoalExpr0_6));
#line 349 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
#line 349 "add_trail_ops.m"
                  }
#line 348 "add_trail_ops.m"
                  *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103 = ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102;
#line 348 "add_trail_ops.m"
                }
#line 145 "add_trail_ops.m"
                break;
#line 145 "add_trail_ops.m"
              case (MR_Integer) 2:
#line 145 "add_trail_ops.m"
                {
#line 145 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__ConjType_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 1)));
#line 145 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 2)));
#line 145 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__Goals_12;
#line 145 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__GoalExpr_13;

#line 146 "add_trail_ops.m"
                  {
#line 146 "add_trail_ops.m"
                    ml_backend__add_trail_ops__conj_add_trail_ops_4_p_0(ml_backend__add_trail_ops__Goals0_11, &ml_backend__add_trail_ops__Goals_12, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                  }
#line 147 "add_trail_ops.m"
                  {
#line 147 "add_trail_ops.m"
                    ml_backend__add_trail_ops__GoalExpr_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 147 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 147 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_13, 1) = ((MR_Box) (ml_backend__add_trail_ops__ConjType_10));
#line 147 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_13, 2) = ((MR_Box) (ml_backend__add_trail_ops__Goals_12));
#line 147 "add_trail_ops.m"
                  }
#line 148 "add_trail_ops.m"
                  {
#line 148 "add_trail_ops.m"
                    MR_Word base;
#line 148 "add_trail_ops.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 148 "add_trail_ops.m"
                    *ml_backend__add_trail_ops__Goal_8 = base;
#line 148 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__GoalExpr_13));
#line 148 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
#line 148 "add_trail_ops.m"
                  }
#line 145 "add_trail_ops.m"
                }
#line 145 "add_trail_ops.m"
                break;
#line 145 "add_trail_ops.m"
              case (MR_Integer) 3:
#line 150 "add_trail_ops.m"
                {
#line 150 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__Disjuncts0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 1)));
#line 150 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__GoalExpr_178;

#line 154 "add_trail_ops.m"
                  if ((ml_backend__add_trail_ops__Disjuncts0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 152 "add_trail_ops.m"
                    {
#line 153 "add_trail_ops.m"
                      ml_backend__add_trail_ops__GoalExpr_178 = ml_backend__add_trail_ops__GoalExpr0_6;
#line 152 "add_trail_ops.m"
                      *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103 = ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102;
#line 152 "add_trail_ops.m"
                    }
#line 154 "add_trail_ops.m"
                  else
#line 155 "add_trail_ops.m"
                    {
#line 155 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__Context_17;
#line 155 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__CodeModel_18;
#line 155 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__TicketVar_19;
#line 155 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__StoreTicketGoal_20;
#line 155 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__Disjuncts_21;
#line 155 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_168_168;
#line 155 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_172_172;
#line 155 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_173_173;
#line 155 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_174_174;
#line 155 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_175_175;

#line 156 "add_trail_ops.m"
                      {
#line 156 "add_trail_ops.m"
                        ml_backend__add_trail_ops__Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__add_trail_ops__GoalInfo0_7);
                      }
#line 157 "add_trail_ops.m"
                      {
#line 157 "add_trail_ops.m"
                        ml_backend__add_trail_ops__CodeModel_18 = hlds__code_model__goal_info_get_code_model_1_f_0(ml_backend__add_trail_ops__GoalInfo0_7);
                      }
#line 161 "add_trail_ops.m"
                      {
#line 161 "add_trail_ops.m"
                        ml_backend__add_trail_ops__new_ticket_var_3_p_0(&ml_backend__add_trail_ops__TicketVar_19, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, &ml_backend__add_trail_ops__STATE_VARIABLE_Info_168_168);
                      }
#line 162 "add_trail_ops.m"
                      {
#line 162 "add_trail_ops.m"
                        ml_backend__add_trail_ops__gen_store_ticket_4_p_0(ml_backend__add_trail_ops__TicketVar_19, ml_backend__add_trail_ops__Context_17, &ml_backend__add_trail_ops__StoreTicketGoal_20, ml_backend__add_trail_ops__STATE_VARIABLE_Info_168_168);
                      }
#line 163 "add_trail_ops.m"
                      {
#line 163 "add_trail_ops.m"
                        ml_backend__add_trail_ops__disj_add_trail_ops_7_p_0(ml_backend__add_trail_ops__Disjuncts0_14, &ml_backend__add_trail_ops__Disjuncts_21, (MR_Integer) 0, ml_backend__add_trail_ops__CodeModel_18, ml_backend__add_trail_ops__TicketVar_19, ml_backend__add_trail_ops__STATE_VARIABLE_Info_168_168, ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
#line 166 "add_trail_ops.m"
                      {
#line 166 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_175_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 166 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_175_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 166 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_175_175, 1) = ((MR_Box) (ml_backend__add_trail_ops__Disjuncts_21));
#line 166 "add_trail_ops.m"
                      }
#line 166 "add_trail_ops.m"
                      {
#line 166 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_174_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 166 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_174_174, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_175_175));
#line 166 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_174_174, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
#line 166 "add_trail_ops.m"
                      }
#line 166 "add_trail_ops.m"
                      {
#line 166 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_173_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 166 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_173_173, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_174_174));
#line 166 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_173_173, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 166 "add_trail_ops.m"
                      }
#line 166 "add_trail_ops.m"
                      {
#line 166 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 166 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_172_172, 0) = ((MR_Box) (ml_backend__add_trail_ops__StoreTicketGoal_20));
#line 166 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_172_172, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_173_173));
#line 166 "add_trail_ops.m"
                      }
#line 165 "add_trail_ops.m"
                      {
#line 165 "add_trail_ops.m"
                        ml_backend__add_trail_ops__GoalExpr_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 165 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 165 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_178, 1) = ((MR_Box) ((MR_Integer) 0));
#line 165 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_178, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_172_172));
#line 165 "add_trail_ops.m"
                      }
#line 155 "add_trail_ops.m"
                    }
#line 168 "add_trail_ops.m"
                  {
#line 168 "add_trail_ops.m"
                    MR_Word base;
#line 168 "add_trail_ops.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 168 "add_trail_ops.m"
                    *ml_backend__add_trail_ops__Goal_8 = base;
#line 168 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__GoalExpr_178));
#line 168 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
#line 168 "add_trail_ops.m"
                  }
#line 150 "add_trail_ops.m"
                }
#line 145 "add_trail_ops.m"
                break;
#line 145 "add_trail_ops.m"
              case (MR_Integer) 4:
#line 170 "add_trail_ops.m"
                {
#line 170 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 1)));
#line 170 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__CanFail_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 2)));
#line 170 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__Cases0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 3)));
#line 170 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__Cases_25;
#line 170 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__GoalExpr_179;

#line 171 "add_trail_ops.m"
                  {
#line 171 "add_trail_ops.m"
                    ml_backend__add_trail_ops__cases_add_trail_ops_4_p_0(ml_backend__add_trail_ops__Cases0_24, &ml_backend__add_trail_ops__Cases_25, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                  }
#line 172 "add_trail_ops.m"
                  {
#line 172 "add_trail_ops.m"
                    ml_backend__add_trail_ops__GoalExpr_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 172 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 172 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_179, 1) = ((MR_Box) (ml_backend__add_trail_ops__Var_22));
#line 172 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_179, 2) = ((MR_Box) (ml_backend__add_trail_ops__CanFail_23));
#line 172 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_179, 3) = ((MR_Box) (ml_backend__add_trail_ops__Cases_25));
#line 172 "add_trail_ops.m"
                  }
#line 173 "add_trail_ops.m"
                  {
#line 173 "add_trail_ops.m"
                    MR_Word base;
#line 173 "add_trail_ops.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 173 "add_trail_ops.m"
                    *ml_backend__add_trail_ops__Goal_8 = base;
#line 173 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__GoalExpr_179));
#line 173 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
#line 173 "add_trail_ops.m"
                  }
#line 170 "add_trail_ops.m"
                }
#line 145 "add_trail_ops.m"
                break;
#line 145 "add_trail_ops.m"
              case (MR_Integer) 5:
#line 206 "add_trail_ops.m"
                {
#line 206 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__Reason_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 1)));
#line 206 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__InnerGoal0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 2)));
#line 206 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__InnerCodeModel_41;
#line 206 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__OuterCodeModel_42;
#line 206 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__GoalExpr_191;
#line 206 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__InnerGoalInfo_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__InnerGoal0_39, (MR_Integer) 1)));
#line 208 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__InnerGoal0_39, (MR_Integer) 0)));

#line 209 "add_trail_ops.m"
                  {
#line 209 "add_trail_ops.m"
                    ml_backend__add_trail_ops__InnerCodeModel_41 = hlds__code_model__goal_info_get_code_model_1_f_0(ml_backend__add_trail_ops__InnerGoalInfo_197);
                  }
#line 210 "add_trail_ops.m"
                  {
#line 210 "add_trail_ops.m"
                    ml_backend__add_trail_ops__OuterCodeModel_42 = hlds__code_model__goal_info_get_code_model_1_f_0(ml_backend__add_trail_ops__GoalInfo0_7);
                  }
#line 212 "add_trail_ops.m"
                  ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__InnerCodeModel_41 == (MR_Integer) 2);
#line 212 "add_trail_ops.m"
                  if (ml_backend__add_trail_ops__succeeded)
#line 212 "add_trail_ops.m"
                    {
#line 213 "add_trail_ops.m"
                      ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__OuterCodeModel_42 == (MR_Integer) 2);
#line 213 "add_trail_ops.m"
                      ml_backend__add_trail_ops__succeeded = !(ml_backend__add_trail_ops__succeeded);
#line 212 "add_trail_ops.m"
                    }
#line 267 "add_trail_ops.m"
                  if (ml_backend__add_trail_ops__succeeded)
#line 219 "add_trail_ops.m"
                    {
#line 219 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__SavedTicketCounterVar_43;
#line 219 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__MarkTicketStackGoal_44;
#line 219 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__ResetTicketCommitGoal_45;
#line 219 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__PruneTicketsToGoal_46;
#line 219 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__ResetTicketUndoGoal_47;
#line 219 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__DiscardTicketGoal_48;
#line 219 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__FailGoal_49;
#line 219 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__Goal2_50;
#line 219 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__SuccCode_51;
#line 219 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__Goal3_55;
#line 219 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_134_134;
#line 219 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_135_135;
#line 219 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_137_137;
#line 219 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_138_138;
#line 219 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_140_140;
#line 219 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_141_141;
#line 219 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_142_142;
#line 219 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_155_155;
#line 219 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_156_156;
#line 219 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_157_157;
#line 219 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__Context_181;
#line 219 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__TicketVar_182;
#line 219 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__StoreTicketGoal_183;
#line 219 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__InnerGoal_184;

#line 219 "add_trail_ops.m"
                      {
#line 219 "add_trail_ops.m"
                        ml_backend__add_trail_ops__Context_181 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__add_trail_ops__GoalInfo0_7);
                      }
#line 220 "add_trail_ops.m"
                      {
#line 220 "add_trail_ops.m"
                        ml_backend__add_trail_ops__new_ticket_counter_var_3_p_0(&ml_backend__add_trail_ops__SavedTicketCounterVar_43, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, &ml_backend__add_trail_ops__STATE_VARIABLE_Info_134_134);
                      }
#line 221 "add_trail_ops.m"
                      {
#line 221 "add_trail_ops.m"
                        ml_backend__add_trail_ops__new_ticket_var_3_p_0(&ml_backend__add_trail_ops__TicketVar_182, ml_backend__add_trail_ops__STATE_VARIABLE_Info_134_134, &ml_backend__add_trail_ops__STATE_VARIABLE_Info_135_135);
                      }
#line 222 "add_trail_ops.m"
                      {
#line 222 "add_trail_ops.m"
                        ml_backend__add_trail_ops__gen_mark_ticket_stack_4_p_0(ml_backend__add_trail_ops__SavedTicketCounterVar_43, ml_backend__add_trail_ops__Context_181, &ml_backend__add_trail_ops__MarkTicketStackGoal_44, ml_backend__add_trail_ops__STATE_VARIABLE_Info_135_135);
                      }
#line 224 "add_trail_ops.m"
                      {
#line 224 "add_trail_ops.m"
                        ml_backend__add_trail_ops__gen_store_ticket_4_p_0(ml_backend__add_trail_ops__TicketVar_182, ml_backend__add_trail_ops__Context_181, &ml_backend__add_trail_ops__StoreTicketGoal_183, ml_backend__add_trail_ops__STATE_VARIABLE_Info_135_135);
                      }
#line 227 "add_trail_ops.m"
                      {
#line 227 "add_trail_ops.m"
                        ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(ml_backend__add_trail_ops__InnerGoal0_39, &ml_backend__add_trail_ops__InnerGoal_184, ml_backend__add_trail_ops__STATE_VARIABLE_Info_135_135, ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
#line 233 "add_trail_ops.m"
                      {
#line 233 "add_trail_ops.m"
                        ml_backend__add_trail_ops__gen_reset_ticket_commit_4_p_0(ml_backend__add_trail_ops__TicketVar_182, ml_backend__add_trail_ops__Context_181, &ml_backend__add_trail_ops__ResetTicketCommitGoal_45, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
#line 235 "add_trail_ops.m"
                      {
#line 235 "add_trail_ops.m"
                        ml_backend__add_trail_ops__gen_prune_tickets_to_4_p_0(ml_backend__add_trail_ops__SavedTicketCounterVar_43, ml_backend__add_trail_ops__Context_181, &ml_backend__add_trail_ops__PruneTicketsToGoal_46, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
#line 240 "add_trail_ops.m"
                      {
#line 240 "add_trail_ops.m"
                        ml_backend__add_trail_ops__gen_reset_ticket_undo_4_p_0(ml_backend__add_trail_ops__TicketVar_182, ml_backend__add_trail_ops__Context_181, &ml_backend__add_trail_ops__ResetTicketUndoGoal_47, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
#line 242 "add_trail_ops.m"
                      {
#line 242 "add_trail_ops.m"
                        ml_backend__add_trail_ops__gen_discard_ticket_3_p_0(ml_backend__add_trail_ops__Context_181, &ml_backend__add_trail_ops__DiscardTicketGoal_48, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
#line 243 "add_trail_ops.m"
                      {
#line 243 "add_trail_ops.m"
                        ml_backend__add_trail_ops__FailGoal_49 = hlds__make_goal__fail_goal_with_context_1_f_0(ml_backend__add_trail_ops__Context_181);
                      }
#line 246 "add_trail_ops.m"
                      {
#line 246 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_137_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 246 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_137_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 246 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_137_137, 1) = ((MR_Box) (ml_backend__add_trail_ops__Reason_38));
#line 246 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_137_137, 2) = ((MR_Box) (ml_backend__add_trail_ops__InnerGoal_184));
#line 246 "add_trail_ops.m"
                      }
#line 246 "add_trail_ops.m"
                      {
#line 246 "add_trail_ops.m"
                        ml_backend__add_trail_ops__Goal2_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 246 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal2_50, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_137_137));
#line 246 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal2_50, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
#line 246 "add_trail_ops.m"
                      }
#line 249 "add_trail_ops.m"
                      {
#line 249 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_142_142, 0) = ((MR_Box) (ml_backend__add_trail_ops__PruneTicketsToGoal_46));
#line 249 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 249 "add_trail_ops.m"
                      }
#line 249 "add_trail_ops.m"
                      {
#line 249 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_141_141, 0) = ((MR_Box) (ml_backend__add_trail_ops__ResetTicketCommitGoal_45));
#line 249 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_141_141, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_142_142));
#line 249 "add_trail_ops.m"
                      }
#line 249 "add_trail_ops.m"
                      {
#line 249 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_140_140, 0) = ((MR_Box) (ml_backend__add_trail_ops__Goal2_50));
#line 249 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_140_140, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_141_141));
#line 249 "add_trail_ops.m"
                      }
#line 248 "add_trail_ops.m"
                      {
#line 248 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_138_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 248 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_138_138, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 248 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_138_138, 1) = ((MR_Box) ((MR_Integer) 0));
#line 248 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_138_138, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_140_140));
#line 248 "add_trail_ops.m"
                      }
#line 247 "add_trail_ops.m"
                      {
#line 247 "add_trail_ops.m"
                        ml_backend__add_trail_ops__SuccCode_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 247 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__SuccCode_51, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_138_138));
#line 247 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__SuccCode_51, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
#line 247 "add_trail_ops.m"
                      }
#line 259 "add_trail_ops.m"
#line 259 "add_trail_ops.m"
                      switch (ml_backend__add_trail_ops__OuterCodeModel_42) {
#line 259 "add_trail_ops.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 259 "add_trail_ops.m"
                        case (MR_Integer) 0:
#line 259 "add_trail_ops.m"
                        case (MR_Integer) 2:
#line 263 "add_trail_ops.m"
                          ml_backend__add_trail_ops__Goal3_55 = ml_backend__add_trail_ops__SuccCode_51;
#line 259 "add_trail_ops.m"
                          break;
#line 259 "add_trail_ops.m"
                        case (MR_Integer) 1:
#line 252 "add_trail_ops.m"
                          {
#line 252 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__FailGoalInfo_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__FailGoal_49, (MR_Integer) 1)));
#line 252 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__FailCode_54;
#line 252 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_144_144;
#line 252 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_146_146;
#line 252 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_147_147;
#line 252 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_148_148;
#line 252 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_150_150;
#line 252 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_151_151;
#line 252 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_152_152;
#line 253 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__FailGoal_49, (MR_Integer) 0)));

#line 256 "add_trail_ops.m"
                            {
#line 256 "add_trail_ops.m"
                              ml_backend__add_trail_ops__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_148_148, 0) = ((MR_Box) (ml_backend__add_trail_ops__FailGoal_49));
#line 256 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_148_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 256 "add_trail_ops.m"
                            }
#line 256 "add_trail_ops.m"
                            {
#line 256 "add_trail_ops.m"
                              ml_backend__add_trail_ops__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_147_147, 0) = ((MR_Box) (ml_backend__add_trail_ops__DiscardTicketGoal_48));
#line 256 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_147_147, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_148_148));
#line 256 "add_trail_ops.m"
                            }
#line 256 "add_trail_ops.m"
                            {
#line 256 "add_trail_ops.m"
                              ml_backend__add_trail_ops__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_146_146, 0) = ((MR_Box) (ml_backend__add_trail_ops__ResetTicketUndoGoal_47));
#line 256 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_146_146, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_147_147));
#line 256 "add_trail_ops.m"
                            }
#line 255 "add_trail_ops.m"
                            {
#line 255 "add_trail_ops.m"
                              ml_backend__add_trail_ops__V_144_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 255 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_144_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 255 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_144_144, 1) = ((MR_Box) ((MR_Integer) 0));
#line 255 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_144_144, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_146_146));
#line 255 "add_trail_ops.m"
                            }
#line 254 "add_trail_ops.m"
                            {
#line 254 "add_trail_ops.m"
                              ml_backend__add_trail_ops__FailCode_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 254 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__FailCode_54, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_144_144));
#line 254 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__FailCode_54, 1) = ((MR_Box) (ml_backend__add_trail_ops__FailGoalInfo_53));
#line 254 "add_trail_ops.m"
                            }
#line 258 "add_trail_ops.m"
                            {
#line 258 "add_trail_ops.m"
                              ml_backend__add_trail_ops__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_152_152, 0) = ((MR_Box) (ml_backend__add_trail_ops__FailCode_54));
#line 258 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_152_152, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 258 "add_trail_ops.m"
                            }
#line 258 "add_trail_ops.m"
                            {
#line 258 "add_trail_ops.m"
                              ml_backend__add_trail_ops__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_151_151, 0) = ((MR_Box) (ml_backend__add_trail_ops__SuccCode_51));
#line 258 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_151_151, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_152_152));
#line 258 "add_trail_ops.m"
                            }
#line 258 "add_trail_ops.m"
                            {
#line 258 "add_trail_ops.m"
                              ml_backend__add_trail_ops__V_150_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_150_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 258 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_150_150, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_151_151));
#line 258 "add_trail_ops.m"
                            }
#line 258 "add_trail_ops.m"
                            {
#line 258 "add_trail_ops.m"
                              ml_backend__add_trail_ops__Goal3_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 258 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal3_55, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_150_150));
#line 258 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal3_55, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
#line 258 "add_trail_ops.m"
                            }
#line 252 "add_trail_ops.m"
                          }
#line 259 "add_trail_ops.m"
                          break;
#line 259 "add_trail_ops.m"
                      }
#line 266 "add_trail_ops.m"
                      {
#line 266 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_157_157, 0) = ((MR_Box) (ml_backend__add_trail_ops__Goal3_55));
#line 266 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_157_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 266 "add_trail_ops.m"
                      }
#line 266 "add_trail_ops.m"
                      {
#line 266 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_156_156, 0) = ((MR_Box) (ml_backend__add_trail_ops__StoreTicketGoal_183));
#line 266 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_156_156, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_157_157));
#line 266 "add_trail_ops.m"
                      }
#line 266 "add_trail_ops.m"
                      {
#line 266 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_155_155, 0) = ((MR_Box) (ml_backend__add_trail_ops__MarkTicketStackGoal_44));
#line 266 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_155_155, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_156_156));
#line 266 "add_trail_ops.m"
                      }
#line 266 "add_trail_ops.m"
                      {
#line 266 "add_trail_ops.m"
                        ml_backend__add_trail_ops__GoalExpr_191 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 266 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_191, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 266 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_191, 1) = ((MR_Box) ((MR_Integer) 0));
#line 266 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_191, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_155_155));
#line 266 "add_trail_ops.m"
                      }
#line 219 "add_trail_ops.m"
                    }
#line 267 "add_trail_ops.m"
                  else
#line 276 "add_trail_ops.m"
                    {
#line 268 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__FGT_57;
#line 268 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_56_56;

#line 268 "add_trail_ops.m"
                      ml_backend__add_trail_ops__succeeded = ((((MR_tag((MR_Word) ml_backend__add_trail_ops__Reason_38)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__Reason_38, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 268 "add_trail_ops.m"
                      if (ml_backend__add_trail_ops__succeeded)
#line 268 "add_trail_ops.m"
                        {
#line 268 "add_trail_ops.m"
                          ml_backend__add_trail_ops__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__Reason_38, (MR_Integer) 1)));
#line 268 "add_trail_ops.m"
                          ml_backend__add_trail_ops__FGT_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__Reason_38, (MR_Integer) 2)));
#line 270 "add_trail_ops.m"
#line 270 "add_trail_ops.m"
                          switch (ml_backend__add_trail_ops__FGT_57) {
#line 270 "add_trail_ops.m"
                            default:
#line 270 "add_trail_ops.m"
                              ml_backend__add_trail_ops__succeeded = MR_FALSE;
#line 270 "add_trail_ops.m"
                              break;
#line 270 "add_trail_ops.m"
                            case (MR_Integer) 1:
#line 269 "add_trail_ops.m"
                              ml_backend__add_trail_ops__succeeded = MR_TRUE;
#line 270 "add_trail_ops.m"
                              break;
#line 270 "add_trail_ops.m"
                            case (MR_Integer) 2:
#line 270 "add_trail_ops.m"
                              ml_backend__add_trail_ops__succeeded = MR_TRUE;
#line 270 "add_trail_ops.m"
                              break;
#line 270 "add_trail_ops.m"
                          }
#line 268 "add_trail_ops.m"
                        }
#line 276 "add_trail_ops.m"
                      if (ml_backend__add_trail_ops__succeeded)
#line 275 "add_trail_ops.m"
                        {
#line 275 "add_trail_ops.m"
                          ml_backend__add_trail_ops__GoalExpr_191 = ml_backend__add_trail_ops__GoalExpr0_6;
#line 275 "add_trail_ops.m"
                          *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103 = ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102;
#line 275 "add_trail_ops.m"
                        }
#line 276 "add_trail_ops.m"
                      else
#line 277 "add_trail_ops.m"
                        {
#line 277 "add_trail_ops.m"
                          MR_Word ml_backend__add_trail_ops__InnerGoal_185;

#line 277 "add_trail_ops.m"
                          {
#line 277 "add_trail_ops.m"
                            ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(ml_backend__add_trail_ops__InnerGoal0_39, &ml_backend__add_trail_ops__InnerGoal_185, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                          }
#line 278 "add_trail_ops.m"
                          {
#line 278 "add_trail_ops.m"
                            ml_backend__add_trail_ops__GoalExpr_191 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 278 "add_trail_ops.m"
                            MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_191, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 278 "add_trail_ops.m"
                            MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_191, 1) = ((MR_Box) (ml_backend__add_trail_ops__Reason_38));
#line 278 "add_trail_ops.m"
                            MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_191, 2) = ((MR_Box) (ml_backend__add_trail_ops__InnerGoal_185));
#line 278 "add_trail_ops.m"
                          }
#line 277 "add_trail_ops.m"
                        }
#line 276 "add_trail_ops.m"
                    }
#line 280 "add_trail_ops.m"
                  {
#line 280 "add_trail_ops.m"
                    MR_Word base;
#line 280 "add_trail_ops.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 280 "add_trail_ops.m"
                    *ml_backend__add_trail_ops__Goal_8 = base;
#line 280 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__GoalExpr_191));
#line 280 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
#line 280 "add_trail_ops.m"
                  }
#line 206 "add_trail_ops.m"
                }
#line 145 "add_trail_ops.m"
                break;
#line 145 "add_trail_ops.m"
              case (MR_Integer) 6:
#line 282 "add_trail_ops.m"
                {
#line 282 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__ExistQVars_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 1)));
#line 282 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__Cond0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 2)));
#line 282 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__Then0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 3)));
#line 282 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__Else0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 4)));
#line 282 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__Cond_62;
#line 282 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__Then1_63;
#line 282 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__Else1_64;
#line 282 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__OptTrailUsage_65;
#line 282 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__CondGoalInfo_67;
#line 282 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__CondCodeModel_68;
#line 282 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_107_107;
#line 282 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_108_108;
#line 282 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_109_109;
#line 282 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__GoalExpr_212;
#line 289 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__V_223_223;
#line 289 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__V_224_224;
#line 289 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__V_225_225;
#line 289 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__V_226_226;
#line 290 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__V_66_66;
#line 293 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__V_110_110;

#line 283 "add_trail_ops.m"
                  {
#line 283 "add_trail_ops.m"
                    ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(ml_backend__add_trail_ops__Cond0_59, &ml_backend__add_trail_ops__Cond_62, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, &ml_backend__add_trail_ops__STATE_VARIABLE_Info_107_107);
                  }
#line 284 "add_trail_ops.m"
                  {
#line 284 "add_trail_ops.m"
                    ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(ml_backend__add_trail_ops__Then0_60, &ml_backend__add_trail_ops__Then1_63, ml_backend__add_trail_ops__STATE_VARIABLE_Info_107_107, &ml_backend__add_trail_ops__STATE_VARIABLE_Info_108_108);
                  }
#line 285 "add_trail_ops.m"
                  {
#line 285 "add_trail_ops.m"
                    ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(ml_backend__add_trail_ops__Else0_61, &ml_backend__add_trail_ops__Else1_64, ml_backend__add_trail_ops__STATE_VARIABLE_Info_108_108, &ml_backend__add_trail_ops__STATE_VARIABLE_Info_109_109);
                  }
#line 289 "add_trail_ops.m"
                  ml_backend__add_trail_ops__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_109_109, (MR_Integer) 0)));
#line 289 "add_trail_ops.m"
                  ml_backend__add_trail_ops__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_109_109, (MR_Integer) 1)));
#line 289 "add_trail_ops.m"
                  ml_backend__add_trail_ops__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_109_109, (MR_Integer) 2)));
#line 289 "add_trail_ops.m"
                  ml_backend__add_trail_ops__OptTrailUsage_65 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_109_109, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 289 "add_trail_ops.m"
                  ml_backend__add_trail_ops__V_226_226 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_109_109, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 290 "add_trail_ops.m"
                  ml_backend__add_trail_ops__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Cond_62, (MR_Integer) 0)));
#line 290 "add_trail_ops.m"
                  ml_backend__add_trail_ops__CondGoalInfo_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Cond_62, (MR_Integer) 1)));
#line 291 "add_trail_ops.m"
                  {
#line 291 "add_trail_ops.m"
                    ml_backend__add_trail_ops__CondCodeModel_68 = hlds__code_model__goal_info_get_code_model_1_f_0(ml_backend__add_trail_ops__CondGoalInfo_67);
                  }
#line 293 "add_trail_ops.m"
                  ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__OptTrailUsage_65 == (MR_Integer) 1);
#line 293 "add_trail_ops.m"
                  if (ml_backend__add_trail_ops__succeeded)
#line 293 "add_trail_ops.m"
                    {
#line 294 "add_trail_ops.m"
                      ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__CondCodeModel_68 == (MR_Integer) 2);
#line 294 "add_trail_ops.m"
                      ml_backend__add_trail_ops__succeeded = !(ml_backend__add_trail_ops__succeeded);
#line 293 "add_trail_ops.m"
                      if (ml_backend__add_trail_ops__succeeded)
#line 293 "add_trail_ops.m"
                        {
#line 295 "add_trail_ops.m"
                          {
#line 295 "add_trail_ops.m"
                            ml_backend__add_trail_ops__V_110_110 = hlds__goal_form__goal_cannot_modify_trail_1_f_0(ml_backend__add_trail_ops__CondGoalInfo_67);
                          }
#line 295 "add_trail_ops.m"
                          ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__V_110_110 == (MR_Integer) 1);
#line 293 "add_trail_ops.m"
                        }
#line 293 "add_trail_ops.m"
                    }
#line 298 "add_trail_ops.m"
                  if (ml_backend__add_trail_ops__succeeded)
#line 297 "add_trail_ops.m"
                    {
#line 297 "add_trail_ops.m"
                      {
#line 297 "add_trail_ops.m"
                        ml_backend__add_trail_ops__GoalExpr_212 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 297 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_212, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 297 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_212, 1) = ((MR_Box) (ml_backend__add_trail_ops__ExistQVars_58));
#line 297 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_212, 2) = ((MR_Box) (ml_backend__add_trail_ops__Cond_62));
#line 297 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_212, 3) = ((MR_Box) (ml_backend__add_trail_ops__Then1_63));
#line 297 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_212, 4) = ((MR_Box) (ml_backend__add_trail_ops__Else1_64));
#line 297 "add_trail_ops.m"
                      }
#line 297 "add_trail_ops.m"
                      *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103 = ml_backend__add_trail_ops__STATE_VARIABLE_Info_109_109;
#line 297 "add_trail_ops.m"
                    }
#line 298 "add_trail_ops.m"
                  else
#line 302 "add_trail_ops.m"
                    {
#line 302 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__Then1GoalInfo_70;
#line 302 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__Then_72;
#line 302 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__Else1GoalInfo_75;
#line 302 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__Else_76;
#line 302 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__IfThenElse_77;
#line 302 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_123_123;
#line 302 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_125_125;
#line 302 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_126_126;
#line 302 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_127_127;
#line 302 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_129_129;
#line 302 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_131_131;
#line 302 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_132_132;
#line 302 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__Context_200;
#line 302 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__TicketVar_201;
#line 302 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__StoreTicketGoal_202;
#line 302 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__ResetTicketUndoGoal_204;
#line 302 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__DiscardTicketGoal_205;
#line 307 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_69_69;
#line 330 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_74_74;

#line 302 "add_trail_ops.m"
                      {
#line 302 "add_trail_ops.m"
                        ml_backend__add_trail_ops__new_ticket_var_3_p_0(&ml_backend__add_trail_ops__TicketVar_201, ml_backend__add_trail_ops__STATE_VARIABLE_Info_109_109, ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
#line 303 "add_trail_ops.m"
                      {
#line 303 "add_trail_ops.m"
                        ml_backend__add_trail_ops__Context_200 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__add_trail_ops__GoalInfo0_7);
                      }
#line 304 "add_trail_ops.m"
                      {
#line 304 "add_trail_ops.m"
                        ml_backend__add_trail_ops__gen_store_ticket_4_p_0(ml_backend__add_trail_ops__TicketVar_201, ml_backend__add_trail_ops__Context_200, &ml_backend__add_trail_ops__StoreTicketGoal_202, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
#line 307 "add_trail_ops.m"
                      ml_backend__add_trail_ops__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Then1_63, (MR_Integer) 0)));
#line 307 "add_trail_ops.m"
                      ml_backend__add_trail_ops__Then1GoalInfo_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Then1_63, (MR_Integer) 1)));
#line 315 "add_trail_ops.m"
#line 315 "add_trail_ops.m"
                      switch (ml_backend__add_trail_ops__CondCodeModel_68) {
#line 315 "add_trail_ops.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 315 "add_trail_ops.m"
                        case (MR_Integer) 0:
#line 315 "add_trail_ops.m"
                        case (MR_Integer) 1:
#line 318 "add_trail_ops.m"
                          {
#line 318 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__PruneTicketGoal_73;
#line 318 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_112_112;
#line 318 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_114_114;
#line 318 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_115_115;
#line 318 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_116_116;
#line 318 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__ResetTicketCommitGoal_198;

#line 319 "add_trail_ops.m"
                            {
#line 319 "add_trail_ops.m"
                              ml_backend__add_trail_ops__gen_reset_ticket_commit_4_p_0(ml_backend__add_trail_ops__TicketVar_201, ml_backend__add_trail_ops__Context_200, &ml_backend__add_trail_ops__ResetTicketCommitGoal_198, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                            }
#line 321 "add_trail_ops.m"
                            {
#line 321 "add_trail_ops.m"
                              ml_backend__add_trail_ops__gen_prune_ticket_3_p_0(ml_backend__add_trail_ops__Context_200, &ml_backend__add_trail_ops__PruneTicketGoal_73, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                            }
#line 324 "add_trail_ops.m"
                            {
#line 324 "add_trail_ops.m"
                              ml_backend__add_trail_ops__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_116_116, 0) = ((MR_Box) (ml_backend__add_trail_ops__Then1_63));
#line 324 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 324 "add_trail_ops.m"
                            }
#line 324 "add_trail_ops.m"
                            {
#line 324 "add_trail_ops.m"
                              ml_backend__add_trail_ops__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_115_115, 0) = ((MR_Box) (ml_backend__add_trail_ops__PruneTicketGoal_73));
#line 324 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_115_115, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_116_116));
#line 324 "add_trail_ops.m"
                            }
#line 324 "add_trail_ops.m"
                            {
#line 324 "add_trail_ops.m"
                              ml_backend__add_trail_ops__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_114_114, 0) = ((MR_Box) (ml_backend__add_trail_ops__ResetTicketCommitGoal_198));
#line 324 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_114_114, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_115_115));
#line 324 "add_trail_ops.m"
                            }
#line 323 "add_trail_ops.m"
                            {
#line 323 "add_trail_ops.m"
                              ml_backend__add_trail_ops__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 323 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 323 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_112_112, 1) = ((MR_Box) ((MR_Integer) 0));
#line 323 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_112_112, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_114_114));
#line 323 "add_trail_ops.m"
                            }
#line 322 "add_trail_ops.m"
                            {
#line 322 "add_trail_ops.m"
                              ml_backend__add_trail_ops__Then_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 322 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Then_72, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_112_112));
#line 322 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Then_72, 1) = ((MR_Box) (ml_backend__add_trail_ops__Then1GoalInfo_70));
#line 322 "add_trail_ops.m"
                            }
#line 318 "add_trail_ops.m"
                          }
#line 315 "add_trail_ops.m"
                          break;
#line 315 "add_trail_ops.m"
                        case (MR_Integer) 2:
#line 309 "add_trail_ops.m"
                          {
#line 309 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__ResetTicketSolveGoal_71;
#line 309 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_118_118;
#line 309 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_120_120;
#line 309 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_121_121;

#line 310 "add_trail_ops.m"
                            {
#line 310 "add_trail_ops.m"
                              ml_backend__add_trail_ops__gen_reset_ticket_solve_4_p_0(ml_backend__add_trail_ops__TicketVar_201, ml_backend__add_trail_ops__Context_200, &ml_backend__add_trail_ops__ResetTicketSolveGoal_71, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                            }
#line 313 "add_trail_ops.m"
                            {
#line 313 "add_trail_ops.m"
                              ml_backend__add_trail_ops__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_121_121, 0) = ((MR_Box) (ml_backend__add_trail_ops__Then1_63));
#line 313 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 313 "add_trail_ops.m"
                            }
#line 313 "add_trail_ops.m"
                            {
#line 313 "add_trail_ops.m"
                              ml_backend__add_trail_ops__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_120_120, 0) = ((MR_Box) (ml_backend__add_trail_ops__ResetTicketSolveGoal_71));
#line 313 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_120_120, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_121_121));
#line 313 "add_trail_ops.m"
                            }
#line 313 "add_trail_ops.m"
                            {
#line 313 "add_trail_ops.m"
                              ml_backend__add_trail_ops__V_118_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 313 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_118_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 313 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_118_118, 1) = ((MR_Box) ((MR_Integer) 0));
#line 313 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_118_118, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_120_120));
#line 313 "add_trail_ops.m"
                            }
#line 312 "add_trail_ops.m"
                            {
#line 312 "add_trail_ops.m"
                              ml_backend__add_trail_ops__Then_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 312 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Then_72, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_118_118));
#line 312 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Then_72, 1) = ((MR_Box) (ml_backend__add_trail_ops__Then1GoalInfo_70));
#line 312 "add_trail_ops.m"
                            }
#line 309 "add_trail_ops.m"
                          }
#line 315 "add_trail_ops.m"
                          break;
#line 315 "add_trail_ops.m"
                      }
#line 327 "add_trail_ops.m"
                      {
#line 327 "add_trail_ops.m"
                        ml_backend__add_trail_ops__gen_reset_ticket_undo_4_p_0(ml_backend__add_trail_ops__TicketVar_201, ml_backend__add_trail_ops__Context_200, &ml_backend__add_trail_ops__ResetTicketUndoGoal_204, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
#line 329 "add_trail_ops.m"
                      {
#line 329 "add_trail_ops.m"
                        ml_backend__add_trail_ops__gen_discard_ticket_3_p_0(ml_backend__add_trail_ops__Context_200, &ml_backend__add_trail_ops__DiscardTicketGoal_205, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
#line 330 "add_trail_ops.m"
                      ml_backend__add_trail_ops__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Else1_64, (MR_Integer) 0)));
#line 330 "add_trail_ops.m"
                      ml_backend__add_trail_ops__Else1GoalInfo_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Else1_64, (MR_Integer) 1)));
#line 333 "add_trail_ops.m"
                      {
#line 333 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_127_127, 0) = ((MR_Box) (ml_backend__add_trail_ops__Else1_64));
#line 333 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 333 "add_trail_ops.m"
                      }
#line 333 "add_trail_ops.m"
                      {
#line 333 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_126_126, 0) = ((MR_Box) (ml_backend__add_trail_ops__DiscardTicketGoal_205));
#line 333 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_126_126, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_127_127));
#line 333 "add_trail_ops.m"
                      }
#line 333 "add_trail_ops.m"
                      {
#line 333 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_125_125, 0) = ((MR_Box) (ml_backend__add_trail_ops__ResetTicketUndoGoal_204));
#line 333 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_125_125, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_126_126));
#line 333 "add_trail_ops.m"
                      }
#line 332 "add_trail_ops.m"
                      {
#line 332 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_123_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 332 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_123_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 332 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_123_123, 1) = ((MR_Box) ((MR_Integer) 0));
#line 332 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_123_123, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_125_125));
#line 332 "add_trail_ops.m"
                      }
#line 331 "add_trail_ops.m"
                      {
#line 331 "add_trail_ops.m"
                        ml_backend__add_trail_ops__Else_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 331 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Else_76, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_123_123));
#line 331 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Else_76, 1) = ((MR_Box) (ml_backend__add_trail_ops__Else1GoalInfo_75));
#line 331 "add_trail_ops.m"
                      }
#line 336 "add_trail_ops.m"
                      {
#line 336 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_129_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 336 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_129_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 336 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_129_129, 1) = ((MR_Box) (ml_backend__add_trail_ops__ExistQVars_58));
#line 336 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_129_129, 2) = ((MR_Box) (ml_backend__add_trail_ops__Cond_62));
#line 336 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_129_129, 3) = ((MR_Box) (ml_backend__add_trail_ops__Then_72));
#line 336 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_129_129, 4) = ((MR_Box) (ml_backend__add_trail_ops__Else_76));
#line 336 "add_trail_ops.m"
                      }
#line 335 "add_trail_ops.m"
                      {
#line 335 "add_trail_ops.m"
                        ml_backend__add_trail_ops__IfThenElse_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 335 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__IfThenElse_77, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_129_129));
#line 335 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__IfThenElse_77, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
#line 335 "add_trail_ops.m"
                      }
#line 338 "add_trail_ops.m"
                      {
#line 338 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_132_132, 0) = ((MR_Box) (ml_backend__add_trail_ops__IfThenElse_77));
#line 338 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "add_trail_ops.m"
                      }
#line 338 "add_trail_ops.m"
                      {
#line 338 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_131_131, 0) = ((MR_Box) (ml_backend__add_trail_ops__StoreTicketGoal_202));
#line 338 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_131_131, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_132_132));
#line 338 "add_trail_ops.m"
                      }
#line 338 "add_trail_ops.m"
                      {
#line 338 "add_trail_ops.m"
                        ml_backend__add_trail_ops__GoalExpr_212 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 338 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_212, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 338 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_212, 1) = ((MR_Box) ((MR_Integer) 0));
#line 338 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_212, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_131_131));
#line 338 "add_trail_ops.m"
                      }
#line 302 "add_trail_ops.m"
                    }
#line 340 "add_trail_ops.m"
                  {
#line 340 "add_trail_ops.m"
                    MR_Word base;
#line 340 "add_trail_ops.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 340 "add_trail_ops.m"
                    *ml_backend__add_trail_ops__Goal_8 = base;
#line 340 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__GoalExpr_212));
#line 340 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
#line 340 "add_trail_ops.m"
                  }
#line 282 "add_trail_ops.m"
                }
#line 145 "add_trail_ops.m"
                break;
#line 145 "add_trail_ops.m"
              case (MR_Integer) 7:
#line 351 "add_trail_ops.m"
                {
#line 353 "add_trail_ops.m"
                  {
#line 353 "add_trail_ops.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.add_trail_ops", (MR_String) "predicate \140ml_backend.add_trail_ops.goal_expr_add_trail_ops\'/5", (MR_String) "shorthand");
#line 353 "add_trail_ops.m"
                    return;
                  }
#line 351 "add_trail_ops.m"
                }
#line 145 "add_trail_ops.m"
                break;
#line 145 "add_trail_ops.m"
            }
#line 145 "add_trail_ops.m"
            break;
#line 145 "add_trail_ops.m"
        }
#line 145 "add_trail_ops.m"
      }
#line 145 "add_trail_ops.m"
      break;
#line 145 "add_trail_ops.m"
    }
#line 140 "add_trail_ops.m"
}

#line 133 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(
#line 133 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Goal0_5,
#line 133 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__Goal_6,
#line 133 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_10,
#line 133 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_11)
#line 133 "add_trail_ops.m"
{
#line 136 "add_trail_ops.m"
  {
#line 136 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 136 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal0_5, (MR_Integer) 0)));
#line 136 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal0_5, (MR_Integer) 1)));

#line 138 "add_trail_ops.m"
    {
#line 138 "add_trail_ops.m"
      ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_p_0(ml_backend__add_trail_ops__GoalExpr0_8, ml_backend__add_trail_ops__GoalInfo_9, ml_backend__add_trail_ops__Goal_6, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_10, ml_backend__add_trail_ops__STATE_VARIABLE_Info_11);
#line 138 "add_trail_ops.m"
      return;
    }
#line 136 "add_trail_ops.m"
  }
#line 133 "add_trail_ops.m"
}

#line 63 "add_trail_ops.m"
void MR_CALL 
ml_backend__add_trail_ops__add_trail_ops_5_p_0(
#line 63 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__OptTrailUsage_6,
#line 63 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__GenerateInline_7,
#line 63 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__ModuleInfo0_8,
#line 63 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Proc_0_21,
#line 63 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Proc_22)
#line 63 "add_trail_ops.m"
{
#line 116 "add_trail_ops.m"
  {
#line 116 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 116 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__Goal0_10;
#line 116 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__VarSet0_11;
#line 116 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__VarTypes0_12;
#line 116 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__TrailOpsInfo0_13;
#line 116 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__Goal_14;
#line 116 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__TrailOpsInfo_15;
#line 116 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__VarSet_16;
#line 116 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__VarTypes_17;
#line 116 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Proc_23_23;
#line 116 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Proc_24_24;
#line 116 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Proc_25_25;
#line 116 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__GoalExpr0_33;
#line 116 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__GoalInfo_34;
#line 123 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_18_18;
#line 123 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_19_19;
#line 123 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_20_20;

#line 117 "add_trail_ops.m"
    {
#line 117 "add_trail_ops.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ml_backend__add_trail_ops__STATE_VARIABLE_Proc_0_21, &ml_backend__add_trail_ops__Goal0_10);
    }
#line 118 "add_trail_ops.m"
    {
#line 118 "add_trail_ops.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ml_backend__add_trail_ops__STATE_VARIABLE_Proc_0_21, &ml_backend__add_trail_ops__VarSet0_11);
    }
#line 119 "add_trail_ops.m"
    {
#line 119 "add_trail_ops.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ml_backend__add_trail_ops__STATE_VARIABLE_Proc_0_21, &ml_backend__add_trail_ops__VarTypes0_12);
    }
#line 120 "add_trail_ops.m"
    {
#line 120 "add_trail_ops.m"
      ml_backend__add_trail_ops__TrailOpsInfo0_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 120 "add_trail_ops.m"
      MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__TrailOpsInfo0_13, 0) = ((MR_Box) (ml_backend__add_trail_ops__VarSet0_11));
#line 120 "add_trail_ops.m"
      MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__TrailOpsInfo0_13, 1) = ((MR_Box) (ml_backend__add_trail_ops__VarTypes0_12));
#line 120 "add_trail_ops.m"
      MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__TrailOpsInfo0_13, 2) = ((MR_Box) (ml_backend__add_trail_ops__ModuleInfo0_8));
#line 120 "add_trail_ops.m"
      MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__TrailOpsInfo0_13, 3) = ((MR_Box) ((ml_backend__add_trail_ops__OptTrailUsage_6 | ((ml_backend__add_trail_ops__GenerateInline_7 << (MR_Integer) 1)))));
#line 120 "add_trail_ops.m"
    }
#line 137 "add_trail_ops.m"
    ml_backend__add_trail_ops__GoalExpr0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal0_10, (MR_Integer) 0)));
#line 137 "add_trail_ops.m"
    ml_backend__add_trail_ops__GoalInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal0_10, (MR_Integer) 1)));
#line 138 "add_trail_ops.m"
    {
#line 138 "add_trail_ops.m"
      ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_p_0(ml_backend__add_trail_ops__GoalExpr0_33, ml_backend__add_trail_ops__GoalInfo_34, &ml_backend__add_trail_ops__Goal_14, ml_backend__add_trail_ops__TrailOpsInfo0_13, &ml_backend__add_trail_ops__TrailOpsInfo_15);
    }
#line 123 "add_trail_ops.m"
    ml_backend__add_trail_ops__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__TrailOpsInfo_15, (MR_Integer) 0)));
#line 123 "add_trail_ops.m"
    ml_backend__add_trail_ops__VarTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__TrailOpsInfo_15, (MR_Integer) 1)));
#line 123 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__TrailOpsInfo_15, (MR_Integer) 2)));
#line 123 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__TrailOpsInfo_15, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 123 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__TrailOpsInfo_15, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 124 "add_trail_ops.m"
    {
#line 124 "add_trail_ops.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(ml_backend__add_trail_ops__Goal_14, ml_backend__add_trail_ops__STATE_VARIABLE_Proc_0_21, &ml_backend__add_trail_ops__STATE_VARIABLE_Proc_23_23);
    }
#line 125 "add_trail_ops.m"
    {
#line 125 "add_trail_ops.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(ml_backend__add_trail_ops__VarSet_16, ml_backend__add_trail_ops__STATE_VARIABLE_Proc_23_23, &ml_backend__add_trail_ops__STATE_VARIABLE_Proc_24_24);
    }
#line 126 "add_trail_ops.m"
    {
#line 126 "add_trail_ops.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(ml_backend__add_trail_ops__VarTypes_17, ml_backend__add_trail_ops__STATE_VARIABLE_Proc_24_24, &ml_backend__add_trail_ops__STATE_VARIABLE_Proc_25_25);
    }
#line 131 "add_trail_ops.m"
    {
#line 131 "add_trail_ops.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, ml_backend__add_trail_ops__STATE_VARIABLE_Proc_25_25, ml_backend__add_trail_ops__STATE_VARIABLE_Proc_22);
#line 131 "add_trail_ops.m"
      return;
    }
#line 116 "add_trail_ops.m"
  }
#line 63 "add_trail_ops.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.add_trail_ops. */
