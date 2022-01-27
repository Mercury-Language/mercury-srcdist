/*
** Automatically generated from `add_trail_ops.m'
** by the Mercury compiler,
** version rotd-2015-09-28
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
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "hlds.status.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
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

#line 106 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops____Compare____trail_ops_info_0_0(
#line 106 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__HeadVar__1_1,
#line 106 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__HeadVar__2_2,
#line 106 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__HeadVar__3_3);

#line 106 "add_trail_ops.m"
static MR_bool MR_CALL 
ml_backend__add_trail_ops____Unify____trail_ops_info_0_0(
#line 106 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__HeadVar__1_1,
#line 106 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__HeadVar__2_2);

#line 640 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0(
#line 640 "add_trail_ops.m"
  MR_String ml_backend__add_trail_ops__PredName_9,
#line 640 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Purity_10,
#line 640 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__InstMapDelta_11,
#line 640 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__ModuleInfo_12,
#line 640 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_13,
#line 640 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Args_14,
#line 640 "add_trail_ops.m"
  MR_String ml_backend__add_trail_ops__ForeignCode_15,
#line 640 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__ForeignProcGoal_16);

#line 628 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__trail_generate_call_8_p_0(
#line 628 "add_trail_ops.m"
  MR_String ml_backend__add_trail_ops__PredName_9,
#line 628 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Detism_10,
#line 628 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Purity_11,
#line 628 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Args_12,
#line 628 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__InstMapDelta_13,
#line 628 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__ModuleInfo_14,
#line 628 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_15,
#line 628 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__CallGoal_16);

#line 599 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__new_ticket_counter_var_3_p_0(
#line 599 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__Var_4,
#line 599 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6,
#line 599 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_7);

#line 593 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__new_ticket_var_3_p_0(
#line 593 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__Var_4,
#line 593 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6,
#line 593 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_7);

#line 569 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_prune_tickets_to_4_p_0(
#line 569 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__SavedTicketCounterVar_5,
#line 569 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_6,
#line 569 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__PruneTicketsToGoal_7,
#line 569 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_8);

#line 546 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_mark_ticket_stack_4_p_0(
#line 546 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__SavedTicketCounterVar_5,
#line 546 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_6,
#line 546 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__MarkTicketStackGoal_7,
#line 546 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_8);

#line 527 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_discard_ticket_3_p_0(
#line 527 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_4,
#line 527 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__DiscardTicketGoal_5,
#line 527 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_6);

#line 508 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_prune_ticket_3_p_0(
#line 508 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_4,
#line 508 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__PruneTicketGoal_5,
#line 508 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_6);

#line 488 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_reset_ticket_commit_4_p_0(
#line 488 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
#line 488 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_6,
#line 488 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__ResetTicketGoal_7,
#line 488 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_8);

#line 468 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_reset_ticket_solve_4_p_0(
#line 468 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
#line 468 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_6,
#line 468 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__ResetTicketGoal_7,
#line 468 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_8);

#line 448 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_reset_ticket_undo_4_p_0(
#line 448 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
#line 448 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_6,
#line 448 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__ResetTicketGoal_7,
#line 448 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_8);

#line 428 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_store_ticket_4_p_0(
#line 428 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
#line 428 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_6,
#line 428 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__SaveTicketGoal_7,
#line 428 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_8);

#line 416 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__cases_add_trail_ops_4_p_0(
#line 416 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__HeadVar__1_1,
#line 416 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__HeadVar__2_2,
#line 416 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_3,
#line 416 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_4);

#line 361 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__disj_add_trail_ops_7_p_0(
#line 361 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__HeadVar__1_1,
#line 361 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__HeadVar__2_2,
#line 361 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__IsFirstBranch_3,
#line 361 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__CodeModel_4,
#line 361 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
#line 361 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6,
#line 361 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_7);

#line 359 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__conj_add_trail_ops_4_p_0_1(
#line 359 "add_trail_ops.m"
  MR_Box ml_backend__add_trail_ops__closure_arg,
#line 359 "add_trail_ops.m"
  MR_Box ml_backend__add_trail_ops__wrapper_arg_1,
#line 359 "add_trail_ops.m"
  MR_Box * ml_backend__add_trail_ops__wrapper_arg_2,
#line 359 "add_trail_ops.m"
  MR_Box ml_backend__add_trail_ops__wrapper_arg_3,
#line 359 "add_trail_ops.m"
  MR_Box * ml_backend__add_trail_ops__wrapper_arg_4);

#line 355 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__conj_add_trail_ops_4_p_0(
#line 355 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Goals0_5,
#line 355 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__Goals_6,
#line 355 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_8,
#line 355 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_9);

#line 139 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_p_0(
#line 139 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__GoalExpr0_6,
#line 139 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__GoalInfo0_7,
#line 139 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__Goal_8,
#line 139 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102,
#line 139 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);

#line 132 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(
#line 132 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Goal0_5,
#line 132 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__Goal_6,
#line 132 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_10,
#line 132 "add_trail_ops.m"
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

#line 106 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops____Compare____trail_ops_info_0_0(
#line 106 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__HeadVar__1_1,
#line 106 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__HeadVar__2_2,
#line 106 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__HeadVar__3_3)
#line 106 "add_trail_ops.m"
{
#line 106 "add_trail_ops.m"
  {
#line 106 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 106 "add_trail_ops.m"
    MR_Integer ml_backend__add_trail_ops__CastX_18 = (MR_Integer) ml_backend__add_trail_ops__HeadVar__2_2;
#line 106 "add_trail_ops.m"
    MR_Integer ml_backend__add_trail_ops__CastY_19 = (MR_Integer) ml_backend__add_trail_ops__HeadVar__3_3;

#line 106 "add_trail_ops.m"
    ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__CastX_18 == ml_backend__add_trail_ops__CastY_19);
#line 106 "add_trail_ops.m"
    if (ml_backend__add_trail_ops__succeeded)
#line 716 "ml_backend.add_trail_ops.c"
      *ml_backend__add_trail_ops__HeadVar__1_1 = (MR_Integer) 0;
#line 106 "add_trail_ops.m"
    else
#line 106 "add_trail_ops.m"
      {
#line 106 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 106 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 1)));
#line 106 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 2)));
#line 106 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 106 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 106 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__3_3, (MR_Integer) 0)));
#line 106 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__3_3, (MR_Integer) 1)));
#line 106 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__3_3, (MR_Integer) 2)));
#line 106 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__3_3, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 106 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 106 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_14_14;

#line 106 "add_trail_ops.m"
        {
#line 106 "add_trail_ops.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__add_trail_ops_scalar_common_1[0], &ml_backend__add_trail_ops__V_14_14, ((MR_Box) (ml_backend__add_trail_ops__V_4_4)), ((MR_Box) (ml_backend__add_trail_ops__V_9_9)));
        }
#line 750 "ml_backend.add_trail_ops.c"
        ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__V_14_14 == (MR_Integer) 0);
#line 106 "add_trail_ops.m"
        ml_backend__add_trail_ops__succeeded = !(ml_backend__add_trail_ops__succeeded);
#line 106 "add_trail_ops.m"
        if (ml_backend__add_trail_ops__succeeded)
#line 106 "add_trail_ops.m"
          *ml_backend__add_trail_ops__HeadVar__1_1 = ml_backend__add_trail_ops__V_14_14;
#line 106 "add_trail_ops.m"
        else
#line 106 "add_trail_ops.m"
          {
#line 106 "add_trail_ops.m"
            MR_Word ml_backend__add_trail_ops__V_15_15;

#line 106 "add_trail_ops.m"
            {
#line 106 "add_trail_ops.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__add_trail_ops_scalar_common_2[0], &ml_backend__add_trail_ops__V_15_15, ((MR_Box) (ml_backend__add_trail_ops__V_5_5)), ((MR_Box) (ml_backend__add_trail_ops__V_10_10)));
            }
#line 770 "ml_backend.add_trail_ops.c"
            ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__V_15_15 == (MR_Integer) 0);
#line 106 "add_trail_ops.m"
            ml_backend__add_trail_ops__succeeded = !(ml_backend__add_trail_ops__succeeded);
#line 106 "add_trail_ops.m"
            if (ml_backend__add_trail_ops__succeeded)
#line 106 "add_trail_ops.m"
              *ml_backend__add_trail_ops__HeadVar__1_1 = ml_backend__add_trail_ops__V_15_15;
#line 106 "add_trail_ops.m"
            else
#line 106 "add_trail_ops.m"
              {
#line 106 "add_trail_ops.m"
                MR_Word ml_backend__add_trail_ops__V_16_16;

#line 106 "add_trail_ops.m"
                {
#line 106 "add_trail_ops.m"
                  hlds__hlds_module____Compare____module_info_0_0(&ml_backend__add_trail_ops__V_16_16, ml_backend__add_trail_ops__V_6_6, ml_backend__add_trail_ops__V_11_11);
                }
#line 790 "ml_backend.add_trail_ops.c"
                ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__V_16_16 == (MR_Integer) 0);
#line 106 "add_trail_ops.m"
                ml_backend__add_trail_ops__succeeded = !(ml_backend__add_trail_ops__succeeded);
#line 106 "add_trail_ops.m"
                if (ml_backend__add_trail_ops__succeeded)
#line 106 "add_trail_ops.m"
                  *ml_backend__add_trail_ops__HeadVar__1_1 = ml_backend__add_trail_ops__V_16_16;
#line 106 "add_trail_ops.m"
                else
#line 106 "add_trail_ops.m"
                  {
#line 106 "add_trail_ops.m"
                    MR_Word ml_backend__add_trail_ops__V_17_17;
#line 106 "add_trail_ops.m"
                    MR_Integer ml_backend__add_trail_ops__V_25_25 = (MR_Integer) ml_backend__add_trail_ops__V_7_7;
#line 106 "add_trail_ops.m"
                    MR_Integer ml_backend__add_trail_ops__V_26_26 = (MR_Integer) ml_backend__add_trail_ops__V_12_12;

#line 106 "add_trail_ops.m"
                    {
#line 106 "add_trail_ops.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__add_trail_ops__V_17_17, ml_backend__add_trail_ops__V_25_25, ml_backend__add_trail_ops__V_26_26);
                    }
#line 814 "ml_backend.add_trail_ops.c"
                    ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__V_17_17 == (MR_Integer) 0);
#line 106 "add_trail_ops.m"
                    ml_backend__add_trail_ops__succeeded = !(ml_backend__add_trail_ops__succeeded);
#line 106 "add_trail_ops.m"
                    if (ml_backend__add_trail_ops__succeeded)
#line 106 "add_trail_ops.m"
                      *ml_backend__add_trail_ops__HeadVar__1_1 = ml_backend__add_trail_ops__V_17_17;
#line 106 "add_trail_ops.m"
                    else
#line 106 "add_trail_ops.m"
                      {
#line 106 "add_trail_ops.m"
                        MR_Integer ml_backend__add_trail_ops__V_27_27 = (MR_Integer) ml_backend__add_trail_ops__V_8_8;
#line 106 "add_trail_ops.m"
                        MR_Integer ml_backend__add_trail_ops__V_28_28 = (MR_Integer) ml_backend__add_trail_ops__V_13_13;

#line 106 "add_trail_ops.m"
                        {
#line 106 "add_trail_ops.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__add_trail_ops__HeadVar__1_1, ml_backend__add_trail_ops__V_27_27, ml_backend__add_trail_ops__V_28_28);
#line 106 "add_trail_ops.m"
                          return;
                        }
#line 106 "add_trail_ops.m"
                      }
#line 106 "add_trail_ops.m"
                  }
#line 106 "add_trail_ops.m"
              }
#line 106 "add_trail_ops.m"
          }
#line 106 "add_trail_ops.m"
      }
#line 106 "add_trail_ops.m"
  }
#line 106 "add_trail_ops.m"
}

#line 106 "add_trail_ops.m"
static MR_bool MR_CALL 
ml_backend__add_trail_ops____Unify____trail_ops_info_0_0(
#line 106 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__HeadVar__1_1,
#line 106 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__HeadVar__2_2)
#line 106 "add_trail_ops.m"
{
#line 106 "add_trail_ops.m"
  {
#line 106 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 106 "add_trail_ops.m"
    MR_Integer ml_backend__add_trail_ops__CastX_13 = (MR_Integer) ml_backend__add_trail_ops__HeadVar__1_1;
#line 106 "add_trail_ops.m"
    MR_Integer ml_backend__add_trail_ops__CastY_14 = (MR_Integer) ml_backend__add_trail_ops__HeadVar__2_2;

#line 106 "add_trail_ops.m"
    ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__CastX_13 == ml_backend__add_trail_ops__CastY_14);
#line 106 "add_trail_ops.m"
    if (ml_backend__add_trail_ops__succeeded)
#line 106 "add_trail_ops.m"
      ml_backend__add_trail_ops__succeeded = MR_TRUE;
#line 106 "add_trail_ops.m"
    else
#line 106 "add_trail_ops.m"
      {
#line 106 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__TypeInfo_16_16;
#line 106 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 106 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__1_1, (MR_Integer) 1)));
#line 106 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__1_1, (MR_Integer) 2)));
#line 106 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__1_1, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 106 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 106 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 106 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 1)));
#line 106 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 2)));
#line 106 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 106 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 904 "ml_backend.add_trail_ops.c"
        {
#line 906 "ml_backend.add_trail_ops.c"
          ml_backend__add_trail_ops__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__add_trail_ops_scalar_common_1[0], ((MR_Box) (ml_backend__add_trail_ops__V_3_3)), ((MR_Box) (ml_backend__add_trail_ops__V_8_8)));
        }
#line 106 "add_trail_ops.m"
        if (ml_backend__add_trail_ops__succeeded)
#line 106 "add_trail_ops.m"
          {
#line 913 "ml_backend.add_trail_ops.c"
            ml_backend__add_trail_ops__TypeInfo_16_16 = (MR_Word) &ml_backend__add_trail_ops_scalar_common_2[0];
#line 915 "ml_backend.add_trail_ops.c"
            {
#line 917 "ml_backend.add_trail_ops.c"
              ml_backend__add_trail_ops__succeeded = mercury__builtin__unify_2_p_0(ml_backend__add_trail_ops__TypeInfo_16_16, ((MR_Box) (ml_backend__add_trail_ops__V_4_4)), ((MR_Box) (ml_backend__add_trail_ops__V_9_9)));
            }
#line 106 "add_trail_ops.m"
            if (ml_backend__add_trail_ops__succeeded)
#line 106 "add_trail_ops.m"
              {
#line 924 "ml_backend.add_trail_ops.c"
                {
#line 926 "ml_backend.add_trail_ops.c"
                  ml_backend__add_trail_ops__succeeded = hlds__hlds_module____Unify____module_info_0_0(ml_backend__add_trail_ops__V_5_5, ml_backend__add_trail_ops__V_10_10);
                }
#line 106 "add_trail_ops.m"
                if (ml_backend__add_trail_ops__succeeded)
#line 106 "add_trail_ops.m"
                  {
#line 933 "ml_backend.add_trail_ops.c"
                    ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__V_6_6 == ml_backend__add_trail_ops__V_11_11);
#line 106 "add_trail_ops.m"
                    if (ml_backend__add_trail_ops__succeeded)
#line 937 "ml_backend.add_trail_ops.c"
                      ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__V_7_7 == ml_backend__add_trail_ops__V_12_12);
#line 106 "add_trail_ops.m"
                  }
#line 106 "add_trail_ops.m"
              }
#line 106 "add_trail_ops.m"
          }
#line 106 "add_trail_ops.m"
      }
#line 106 "add_trail_ops.m"
    return ml_backend__add_trail_ops__succeeded;
#line 106 "add_trail_ops.m"
  }
#line 106 "add_trail_ops.m"
}

#line 640 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0(
#line 640 "add_trail_ops.m"
  MR_String ml_backend__add_trail_ops__PredName_9,
#line 640 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Purity_10,
#line 640 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__InstMapDelta_11,
#line 640 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__ModuleInfo_12,
#line 640 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_13,
#line 640 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Args_14,
#line 640 "add_trail_ops.m"
  MR_String ml_backend__add_trail_ops__ForeignCode_15,
#line 640 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__ForeignProcGoal_16)
#line 640 "add_trail_ops.m"
{
#line 645 "add_trail_ops.m"
  {
#line 645 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 645 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__PrivateBuiltinModule_17;
#line 645 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__FinalForeignProcAttrs_20;
#line 645 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_ForeignProcAttrs_23_23;
#line 645 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_ForeignProcAttrs_26_26;

#line 646 "add_trail_ops.m"
    {
#line 646 "add_trail_ops.m"
      ml_backend__add_trail_ops__PrivateBuiltinModule_17 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 650 "add_trail_ops.m"
    {
#line 650 "add_trail_ops.m"
      ml_backend__add_trail_ops__STATE_VARIABLE_ForeignProcAttrs_23_23 = parse_tree__prog_data__default_attributes_1_f_0((MR_Integer) 0);
    }
#line 651 "add_trail_ops.m"
    {
#line 651 "add_trail_ops.m"
      parse_tree__prog_data__set_may_call_mercury_3_p_0((MR_Integer) 1, ml_backend__add_trail_ops__STATE_VARIABLE_ForeignProcAttrs_23_23, &ml_backend__add_trail_ops__STATE_VARIABLE_ForeignProcAttrs_26_26);
    }
#line 652 "add_trail_ops.m"
    {
#line 652 "add_trail_ops.m"
      parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, ml_backend__add_trail_ops__STATE_VARIABLE_ForeignProcAttrs_26_26, &ml_backend__add_trail_ops__FinalForeignProcAttrs_20);
    }
#line 657 "add_trail_ops.m"
    {
#line 657 "add_trail_ops.m"
      hlds__goal_util__generate_foreign_proc_16_p_0(ml_backend__add_trail_ops__PrivateBuiltinModule_17, ml_backend__add_trail_ops__PredName_9, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, ml_backend__add_trail_ops__Purity_10, ml_backend__add_trail_ops__FinalForeignProcAttrs_20, ml_backend__add_trail_ops__Args_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__ForeignCode_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__InstMapDelta_11, ml_backend__add_trail_ops__ModuleInfo_12, ml_backend__add_trail_ops__Context_13, ml_backend__add_trail_ops__ForeignProcGoal_16);
#line 657 "add_trail_ops.m"
      return;
    }
#line 645 "add_trail_ops.m"
  }
#line 640 "add_trail_ops.m"
}

#line 628 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__trail_generate_call_8_p_0(
#line 628 "add_trail_ops.m"
  MR_String ml_backend__add_trail_ops__PredName_9,
#line 628 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Detism_10,
#line 628 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Purity_11,
#line 628 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Args_12,
#line 628 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__InstMapDelta_13,
#line 628 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__ModuleInfo_14,
#line 628 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_15,
#line 628 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__CallGoal_16)
#line 628 "add_trail_ops.m"
{
#line 633 "add_trail_ops.m"
  {
#line 633 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 633 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_17_17;

#line 634 "add_trail_ops.m"
    {
#line 634 "add_trail_ops.m"
      ml_backend__add_trail_ops__V_17_17 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 634 "add_trail_ops.m"
    {
#line 634 "add_trail_ops.m"
      hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_17_17, ml_backend__add_trail_ops__PredName_9, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__Detism_10, ml_backend__add_trail_ops__Purity_11, ml_backend__add_trail_ops__Args_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__InstMapDelta_13, ml_backend__add_trail_ops__ModuleInfo_14, ml_backend__add_trail_ops__Context_15, ml_backend__add_trail_ops__CallGoal_16);
#line 634 "add_trail_ops.m"
      return;
    }
#line 633 "add_trail_ops.m"
  }
#line 628 "add_trail_ops.m"
}

#line 599 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__new_ticket_counter_var_3_p_0(
#line 599 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__Var_4,
#line 599 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6,
#line 599 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_7)
#line 599 "add_trail_ops.m"
{
#line 602 "add_trail_ops.m"
  {
#line 602 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 602 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_9_9;
#line 602 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__VarSet0_17;
#line 602 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__VarTypes0_18;
#line 602 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__VarSet_19;
#line 602 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__VarTypes_20;
#line 602 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_33_33;
#line 602 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_34_34;
#line 602 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_35_35;
#line 609 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_24_24;
#line 609 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_25_25;
#line 609 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_26_26;
#line 613 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_31_31;
#line 613 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_32_32;

#line 624 "add_trail_ops.m"
    {
#line 624 "add_trail_ops.m"
      ml_backend__add_trail_ops__V_9_9 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
#line 609 "add_trail_ops.m"
    ml_backend__add_trail_ops__VarSet0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 609 "add_trail_ops.m"
    ml_backend__add_trail_ops__VarTypes0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 609 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 609 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 609 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 611 "add_trail_ops.m"
    {
#line 611 "add_trail_ops.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "SavedTicketCounter", ml_backend__add_trail_ops__Var_4, ml_backend__add_trail_ops__VarSet0_17, &ml_backend__add_trail_ops__VarSet_19);
    }
#line 612 "add_trail_ops.m"
    {
#line 612 "add_trail_ops.m"
      hlds__vartypes__add_var_type_4_p_0(*ml_backend__add_trail_ops__Var_4, ml_backend__add_trail_ops__V_9_9, ml_backend__add_trail_ops__VarTypes0_18, &ml_backend__add_trail_ops__VarTypes_20);
    }
#line 613 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 613 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 613 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 613 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 613 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 614 "add_trail_ops.m"
    {
#line 614 "add_trail_ops.m"
      MR_Word base;
#line 614 "add_trail_ops.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 614 "add_trail_ops.m"
      *ml_backend__add_trail_ops__STATE_VARIABLE_Info_7 = base;
#line 614 "add_trail_ops.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__VarSet_19));
#line 614 "add_trail_ops.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__VarTypes_20));
#line 614 "add_trail_ops.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_33_33));
#line 614 "add_trail_ops.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((ml_backend__add_trail_ops__V_34_34 | ((ml_backend__add_trail_ops__V_35_35 << (MR_Integer) 1)))));
#line 614 "add_trail_ops.m"
    }
#line 602 "add_trail_ops.m"
  }
#line 599 "add_trail_ops.m"
}

#line 593 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__new_ticket_var_3_p_0(
#line 593 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__Var_4,
#line 593 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6,
#line 593 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_7)
#line 593 "add_trail_ops.m"
{
#line 596 "add_trail_ops.m"
  {
#line 596 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 596 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_9_9;
#line 596 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__VarSet0_17;
#line 596 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__VarTypes0_18;
#line 596 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__VarSet_19;
#line 596 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__VarTypes_20;
#line 596 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_33_33;
#line 596 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_34_34;
#line 596 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_35_35;
#line 609 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_24_24;
#line 609 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_25_25;
#line 609 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_26_26;
#line 613 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_31_31;
#line 613 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_32_32;

#line 620 "add_trail_ops.m"
    {
#line 620 "add_trail_ops.m"
      ml_backend__add_trail_ops__V_9_9 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
#line 609 "add_trail_ops.m"
    ml_backend__add_trail_ops__VarSet0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 609 "add_trail_ops.m"
    ml_backend__add_trail_ops__VarTypes0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 609 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 609 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 609 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 611 "add_trail_ops.m"
    {
#line 611 "add_trail_ops.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "TrailTicket", ml_backend__add_trail_ops__Var_4, ml_backend__add_trail_ops__VarSet0_17, &ml_backend__add_trail_ops__VarSet_19);
    }
#line 612 "add_trail_ops.m"
    {
#line 612 "add_trail_ops.m"
      hlds__vartypes__add_var_type_4_p_0(*ml_backend__add_trail_ops__Var_4, ml_backend__add_trail_ops__V_9_9, ml_backend__add_trail_ops__VarTypes0_18, &ml_backend__add_trail_ops__VarTypes_20);
    }
#line 613 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 613 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 613 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 613 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 613 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 614 "add_trail_ops.m"
    {
#line 614 "add_trail_ops.m"
      MR_Word base;
#line 614 "add_trail_ops.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 614 "add_trail_ops.m"
      *ml_backend__add_trail_ops__STATE_VARIABLE_Info_7 = base;
#line 614 "add_trail_ops.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__VarSet_19));
#line 614 "add_trail_ops.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__VarTypes_20));
#line 614 "add_trail_ops.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_33_33));
#line 614 "add_trail_ops.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((ml_backend__add_trail_ops__V_34_34 | ((ml_backend__add_trail_ops__V_35_35 << (MR_Integer) 1)))));
#line 614 "add_trail_ops.m"
    }
#line 596 "add_trail_ops.m"
  }
#line 593 "add_trail_ops.m"
}

#line 569 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_prune_tickets_to_4_p_0(
#line 569 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__SavedTicketCounterVar_5,
#line 569 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_6,
#line 569 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__PruneTicketsToGoal_7,
#line 569 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_8)
#line 569 "add_trail_ops.m"
{
#line 573 "add_trail_ops.m"
  {
#line 573 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 573 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__GenerateInline_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 574 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 574 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 574 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 574 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);

#line 580 "add_trail_ops.m"
#line 580 "add_trail_ops.m"
    switch (ml_backend__add_trail_ops__GenerateInline_9) {
#line 580 "add_trail_ops.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 580 "add_trail_ops.m"
      case (MR_Integer) 0:
#line 576 "add_trail_ops.m"
        {
#line 576 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_27_27;
#line 576 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_28_28;
#line 576 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_29_29;
#line 576 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_51_51;
#line 577 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_35_35;
#line 577 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_36_36;
#line 577 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_37_37;
#line 577 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_38_38;

#line 578 "add_trail_ops.m"
          {
#line 578 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 0) = ((MR_Box) (ml_backend__add_trail_ops__SavedTicketCounterVar_5));
#line 578 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 578 "add_trail_ops.m"
          }
#line 578 "add_trail_ops.m"
          {
#line 578 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_28_28 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 577 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 577 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 577 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 577 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 577 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 634 "add_trail_ops.m"
          {
#line 634 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_51_51 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 634 "add_trail_ops.m"
          {
#line 634 "add_trail_ops.m"
            hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_51_51, (MR_String) "prune_tickets_to", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, ml_backend__add_trail_ops__V_27_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_28_28, ml_backend__add_trail_ops__V_29_29, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__PruneTicketsToGoal_7);
#line 634 "add_trail_ops.m"
            return;
          }
#line 576 "add_trail_ops.m"
        }
#line 580 "add_trail_ops.m"
        break;
#line 580 "add_trail_ops.m"
      case (MR_Integer) 1:
#line 581 "add_trail_ops.m"
        {
#line 581 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__Args_10;
#line 581 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_12_12;
#line 581 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_13_13;
#line 581 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_14_14;
#line 581 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_16_16;
#line 581 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_17_17;
#line 581 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_22_22;
#line 581 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_23_23;
#line 586 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_39_39;
#line 586 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_40_40;
#line 586 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_41_41;
#line 586 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_42_42;

#line 583 "add_trail_ops.m"
          {
#line 583 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_16_16 = parse_tree__prog_mode__in_mode_0_f_0();
          }
#line 583 "add_trail_ops.m"
          {
#line 583 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 583 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 0) = ((MR_Box) ((MR_String) "TicketCounter"));
#line 583 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_16_16));
#line 583 "add_trail_ops.m"
          }
#line 583 "add_trail_ops.m"
          {
#line 583 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 583 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_13_13, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_14_14));
#line 583 "add_trail_ops.m"
          }
#line 624 "add_trail_ops.m"
          {
#line 624 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_17_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          }
#line 582 "add_trail_ops.m"
          {
#line 582 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 582 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 0) = ((MR_Box) (ml_backend__add_trail_ops__SavedTicketCounterVar_5));
#line 582 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_13_13));
#line 582 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_17_17));
#line 582 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 3) = ((MR_Box) ((MR_Integer) 0));
#line 582 "add_trail_ops.m"
          }
#line 584 "add_trail_ops.m"
          {
#line 584 "add_trail_ops.m"
            ml_backend__add_trail_ops__Args_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_12_12));
#line 584 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 584 "add_trail_ops.m"
          }
#line 587 "add_trail_ops.m"
          {
#line 587 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_22_22 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 586 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 586 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 586 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 586 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 586 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 586 "add_trail_ops.m"
          {
#line 586 "add_trail_ops.m"
            ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "prune_tickets_to", (MR_Integer) 2, ml_backend__add_trail_ops__V_22_22, ml_backend__add_trail_ops__V_23_23, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__Args_10, (MR_String) "MR_prune_tickets_to(TicketCounter);", ml_backend__add_trail_ops__PruneTicketsToGoal_7);
#line 586 "add_trail_ops.m"
            return;
          }
#line 581 "add_trail_ops.m"
        }
#line 580 "add_trail_ops.m"
        break;
#line 580 "add_trail_ops.m"
    }
#line 573 "add_trail_ops.m"
  }
#line 569 "add_trail_ops.m"
}

#line 546 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_mark_ticket_stack_4_p_0(
#line 546 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__SavedTicketCounterVar_5,
#line 546 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_6,
#line 546 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__MarkTicketStackGoal_7,
#line 546 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_8)
#line 546 "add_trail_ops.m"
{
#line 550 "add_trail_ops.m"
  {
#line 550 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 550 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__GenerateInline_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 551 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 551 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 551 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 551 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);

#line 558 "add_trail_ops.m"
#line 558 "add_trail_ops.m"
    switch (ml_backend__add_trail_ops__GenerateInline_9) {
#line 558 "add_trail_ops.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 558 "add_trail_ops.m"
      case (MR_Integer) 0:
#line 553 "add_trail_ops.m"
        {
#line 553 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_27_27;
#line 553 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_28_28;
#line 553 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_29_29;
#line 553 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_51_51;
#line 554 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_35_35;
#line 554 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_36_36;
#line 554 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_37_37;
#line 554 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_38_38;

#line 555 "add_trail_ops.m"
          {
#line 555 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 0) = ((MR_Box) (ml_backend__add_trail_ops__SavedTicketCounterVar_5));
#line 555 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 555 "add_trail_ops.m"
          }
#line 556 "add_trail_ops.m"
          {
#line 556 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_28_28 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 554 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 554 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 554 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 554 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 554 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 634 "add_trail_ops.m"
          {
#line 634 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_51_51 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 634 "add_trail_ops.m"
          {
#line 634 "add_trail_ops.m"
            hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_51_51, (MR_String) "mark_ticket_stack", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, ml_backend__add_trail_ops__V_27_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_28_28, ml_backend__add_trail_ops__V_29_29, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__MarkTicketStackGoal_7);
#line 634 "add_trail_ops.m"
            return;
          }
#line 553 "add_trail_ops.m"
        }
#line 558 "add_trail_ops.m"
        break;
#line 558 "add_trail_ops.m"
      case (MR_Integer) 1:
#line 559 "add_trail_ops.m"
        {
#line 559 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__Args_10;
#line 559 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_12_12;
#line 559 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_13_13;
#line 559 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_14_14;
#line 559 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_16_16;
#line 559 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_17_17;
#line 559 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_22_22;
#line 559 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_23_23;
#line 564 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_39_39;
#line 564 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_40_40;
#line 564 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_41_41;
#line 564 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_42_42;

#line 561 "add_trail_ops.m"
          {
#line 561 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_16_16 = parse_tree__prog_mode__out_mode_0_f_0();
          }
#line 561 "add_trail_ops.m"
          {
#line 561 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 561 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 0) = ((MR_Box) ((MR_String) "TicketCounter"));
#line 561 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_16_16));
#line 561 "add_trail_ops.m"
          }
#line 561 "add_trail_ops.m"
          {
#line 561 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 561 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_13_13, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_14_14));
#line 561 "add_trail_ops.m"
          }
#line 624 "add_trail_ops.m"
          {
#line 624 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_17_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          }
#line 560 "add_trail_ops.m"
          {
#line 560 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 560 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 0) = ((MR_Box) (ml_backend__add_trail_ops__SavedTicketCounterVar_5));
#line 560 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_13_13));
#line 560 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_17_17));
#line 560 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 3) = ((MR_Box) ((MR_Integer) 0));
#line 560 "add_trail_ops.m"
          }
#line 562 "add_trail_ops.m"
          {
#line 562 "add_trail_ops.m"
            ml_backend__add_trail_ops__Args_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 562 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_12_12));
#line 562 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 562 "add_trail_ops.m"
          }
#line 565 "add_trail_ops.m"
          {
#line 565 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_22_22 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 564 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 564 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 564 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 564 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 564 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 564 "add_trail_ops.m"
          {
#line 564 "add_trail_ops.m"
            ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "mark_ticket_stack", (MR_Integer) 2, ml_backend__add_trail_ops__V_22_22, ml_backend__add_trail_ops__V_23_23, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__Args_10, (MR_String) "MR_mark_ticket_stack(TicketCounter);", ml_backend__add_trail_ops__MarkTicketStackGoal_7);
#line 564 "add_trail_ops.m"
            return;
          }
#line 559 "add_trail_ops.m"
        }
#line 558 "add_trail_ops.m"
        break;
#line 558 "add_trail_ops.m"
    }
#line 550 "add_trail_ops.m"
  }
#line 546 "add_trail_ops.m"
}

#line 527 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_discard_ticket_3_p_0(
#line 527 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_4,
#line 527 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__DiscardTicketGoal_5,
#line 527 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_6)
#line 527 "add_trail_ops.m"
{
#line 530 "add_trail_ops.m"
  {
#line 530 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 530 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__GenerateInline_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 531 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 0)));
#line 531 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 1)));
#line 531 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 2)));
#line 531 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) & (MR_Integer) 1);

#line 537 "add_trail_ops.m"
#line 537 "add_trail_ops.m"
    switch (ml_backend__add_trail_ops__GenerateInline_7) {
#line 537 "add_trail_ops.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 537 "add_trail_ops.m"
      case (MR_Integer) 0:
#line 533 "add_trail_ops.m"
        {
#line 533 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_18_18;
#line 533 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_19_19;
#line 533 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_40_40;
#line 534 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_24_24;
#line 534 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_25_25;
#line 534 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_26_26;
#line 534 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_27_27;

#line 535 "add_trail_ops.m"
          {
#line 535 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_18_18 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 534 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 0)));
#line 534 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 1)));
#line 534 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 2)));
#line 534 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 534 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 634 "add_trail_ops.m"
          {
#line 634 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_40_40 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 634 "add_trail_ops.m"
          {
#line 634 "add_trail_ops.m"
            hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_40_40, (MR_String) "discard_ticket", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_18_18, ml_backend__add_trail_ops__V_19_19, ml_backend__add_trail_ops__Context_4, ml_backend__add_trail_ops__DiscardTicketGoal_5);
#line 634 "add_trail_ops.m"
            return;
          }
#line 533 "add_trail_ops.m"
        }
#line 537 "add_trail_ops.m"
        break;
#line 537 "add_trail_ops.m"
      case (MR_Integer) 1:
#line 538 "add_trail_ops.m"
        {
#line 538 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_12_12;
#line 538 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_13_13;
#line 541 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_28_28;
#line 541 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_29_29;
#line 541 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_30_30;
#line 541 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_31_31;

#line 542 "add_trail_ops.m"
          {
#line 542 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_12_12 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 541 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 0)));
#line 541 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 1)));
#line 541 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 2)));
#line 541 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 541 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 541 "add_trail_ops.m"
          {
#line 541 "add_trail_ops.m"
            ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "discard_ticket", (MR_Integer) 2, ml_backend__add_trail_ops__V_12_12, ml_backend__add_trail_ops__V_13_13, ml_backend__add_trail_ops__Context_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_String) "MR_discard_ticket();", ml_backend__add_trail_ops__DiscardTicketGoal_5);
#line 541 "add_trail_ops.m"
            return;
          }
#line 538 "add_trail_ops.m"
        }
#line 537 "add_trail_ops.m"
        break;
#line 537 "add_trail_ops.m"
    }
#line 530 "add_trail_ops.m"
  }
#line 527 "add_trail_ops.m"
}

#line 508 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_prune_ticket_3_p_0(
#line 508 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_4,
#line 508 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__PruneTicketGoal_5,
#line 508 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_6)
#line 508 "add_trail_ops.m"
{
#line 511 "add_trail_ops.m"
  {
#line 511 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 511 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__GenerateInline_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 512 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 0)));
#line 512 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 1)));
#line 512 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 2)));
#line 512 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) & (MR_Integer) 1);

#line 518 "add_trail_ops.m"
#line 518 "add_trail_ops.m"
    switch (ml_backend__add_trail_ops__GenerateInline_7) {
#line 518 "add_trail_ops.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 518 "add_trail_ops.m"
      case (MR_Integer) 0:
#line 514 "add_trail_ops.m"
        {
#line 514 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_18_18;
#line 514 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_19_19;
#line 514 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_40_40;
#line 515 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_24_24;
#line 515 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_25_25;
#line 515 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_26_26;
#line 515 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_27_27;

#line 516 "add_trail_ops.m"
          {
#line 516 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_18_18 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 515 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 0)));
#line 515 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 1)));
#line 515 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 2)));
#line 515 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 515 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 634 "add_trail_ops.m"
          {
#line 634 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_40_40 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 634 "add_trail_ops.m"
          {
#line 634 "add_trail_ops.m"
            hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_40_40, (MR_String) "prune_ticket", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_18_18, ml_backend__add_trail_ops__V_19_19, ml_backend__add_trail_ops__Context_4, ml_backend__add_trail_ops__PruneTicketGoal_5);
#line 634 "add_trail_ops.m"
            return;
          }
#line 514 "add_trail_ops.m"
        }
#line 518 "add_trail_ops.m"
        break;
#line 518 "add_trail_ops.m"
      case (MR_Integer) 1:
#line 519 "add_trail_ops.m"
        {
#line 519 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_12_12;
#line 519 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_13_13;
#line 522 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_28_28;
#line 522 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_29_29;
#line 522 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_30_30;
#line 522 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_31_31;

#line 523 "add_trail_ops.m"
          {
#line 523 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_12_12 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 522 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 0)));
#line 522 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 1)));
#line 522 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 2)));
#line 522 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 522 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 522 "add_trail_ops.m"
          {
#line 522 "add_trail_ops.m"
            ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "prune_ticket", (MR_Integer) 2, ml_backend__add_trail_ops__V_12_12, ml_backend__add_trail_ops__V_13_13, ml_backend__add_trail_ops__Context_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_String) "MR_prune_ticket();", ml_backend__add_trail_ops__PruneTicketGoal_5);
#line 522 "add_trail_ops.m"
            return;
          }
#line 519 "add_trail_ops.m"
        }
#line 518 "add_trail_ops.m"
        break;
#line 518 "add_trail_ops.m"
    }
#line 511 "add_trail_ops.m"
  }
#line 508 "add_trail_ops.m"
}

#line 488 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_reset_ticket_commit_4_p_0(
#line 488 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
#line 488 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_6,
#line 488 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__ResetTicketGoal_7,
#line 488 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_8)
#line 488 "add_trail_ops.m"
{
#line 491 "add_trail_ops.m"
  {
#line 491 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 491 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__GenerateInline_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 492 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 492 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 492 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 492 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);

#line 498 "add_trail_ops.m"
#line 498 "add_trail_ops.m"
    switch (ml_backend__add_trail_ops__GenerateInline_9) {
#line 498 "add_trail_ops.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 498 "add_trail_ops.m"
      case (MR_Integer) 0:
#line 494 "add_trail_ops.m"
        {
#line 494 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_27_27;
#line 494 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_28_28;
#line 494 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_29_29;
#line 494 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_51_51;
#line 495 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_35_35;
#line 495 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_36_36;
#line 495 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_37_37;
#line 495 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_38_38;

#line 496 "add_trail_ops.m"
          {
#line 496 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 0) = ((MR_Box) (ml_backend__add_trail_ops__TicketVar_5));
#line 496 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 496 "add_trail_ops.m"
          }
#line 496 "add_trail_ops.m"
          {
#line 496 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_28_28 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 495 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 495 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 495 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 495 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 495 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 634 "add_trail_ops.m"
          {
#line 634 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_51_51 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 634 "add_trail_ops.m"
          {
#line 634 "add_trail_ops.m"
            hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_51_51, (MR_String) "reset_ticket_commit", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, ml_backend__add_trail_ops__V_27_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_28_28, ml_backend__add_trail_ops__V_29_29, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__ResetTicketGoal_7);
#line 634 "add_trail_ops.m"
            return;
          }
#line 494 "add_trail_ops.m"
        }
#line 498 "add_trail_ops.m"
        break;
#line 498 "add_trail_ops.m"
      case (MR_Integer) 1:
#line 499 "add_trail_ops.m"
        {
#line 499 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__Args_10;
#line 499 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_12_12;
#line 499 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_13_13;
#line 499 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_14_14;
#line 499 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_16_16;
#line 499 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_17_17;
#line 499 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_22_22;
#line 499 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_23_23;
#line 503 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_39_39;
#line 503 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_40_40;
#line 503 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_41_41;
#line 503 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_42_42;

#line 500 "add_trail_ops.m"
          {
#line 500 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_16_16 = parse_tree__prog_mode__in_mode_0_f_0();
          }
#line 500 "add_trail_ops.m"
          {
#line 500 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 500 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 0) = ((MR_Box) ((MR_String) "Ticket"));
#line 500 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_16_16));
#line 500 "add_trail_ops.m"
          }
#line 500 "add_trail_ops.m"
          {
#line 500 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 500 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_13_13, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_14_14));
#line 500 "add_trail_ops.m"
          }
#line 620 "add_trail_ops.m"
          {
#line 620 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_17_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          }
#line 500 "add_trail_ops.m"
          {
#line 500 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 500 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 0) = ((MR_Box) (ml_backend__add_trail_ops__TicketVar_5));
#line 500 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_13_13));
#line 500 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_17_17));
#line 500 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 3) = ((MR_Box) ((MR_Integer) 0));
#line 500 "add_trail_ops.m"
          }
#line 501 "add_trail_ops.m"
          {
#line 501 "add_trail_ops.m"
            ml_backend__add_trail_ops__Args_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_12_12));
#line 501 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 501 "add_trail_ops.m"
          }
#line 504 "add_trail_ops.m"
          {
#line 504 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_22_22 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 503 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 503 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 503 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 503 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 503 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 503 "add_trail_ops.m"
          {
#line 503 "add_trail_ops.m"
            ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "reset_ticket_commit", (MR_Integer) 2, ml_backend__add_trail_ops__V_22_22, ml_backend__add_trail_ops__V_23_23, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__Args_10, (MR_String) "MR_reset_ticket(Ticket, MR_commit);", ml_backend__add_trail_ops__ResetTicketGoal_7);
#line 503 "add_trail_ops.m"
            return;
          }
#line 499 "add_trail_ops.m"
        }
#line 498 "add_trail_ops.m"
        break;
#line 498 "add_trail_ops.m"
    }
#line 491 "add_trail_ops.m"
  }
#line 488 "add_trail_ops.m"
}

#line 468 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_reset_ticket_solve_4_p_0(
#line 468 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
#line 468 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_6,
#line 468 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__ResetTicketGoal_7,
#line 468 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_8)
#line 468 "add_trail_ops.m"
{
#line 471 "add_trail_ops.m"
  {
#line 471 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 471 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__GenerateInline_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 472 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 472 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 472 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 472 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);

#line 478 "add_trail_ops.m"
#line 478 "add_trail_ops.m"
    switch (ml_backend__add_trail_ops__GenerateInline_9) {
#line 478 "add_trail_ops.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 478 "add_trail_ops.m"
      case (MR_Integer) 0:
#line 474 "add_trail_ops.m"
        {
#line 474 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_27_27;
#line 474 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_28_28;
#line 474 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_29_29;
#line 474 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_51_51;
#line 475 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_35_35;
#line 475 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_36_36;
#line 475 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_37_37;
#line 475 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_38_38;

#line 476 "add_trail_ops.m"
          {
#line 476 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 476 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 0) = ((MR_Box) (ml_backend__add_trail_ops__TicketVar_5));
#line 476 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 476 "add_trail_ops.m"
          }
#line 476 "add_trail_ops.m"
          {
#line 476 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_28_28 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 475 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 475 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 475 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 475 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 475 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 634 "add_trail_ops.m"
          {
#line 634 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_51_51 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 634 "add_trail_ops.m"
          {
#line 634 "add_trail_ops.m"
            hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_51_51, (MR_String) "reset_ticket_solve", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, ml_backend__add_trail_ops__V_27_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_28_28, ml_backend__add_trail_ops__V_29_29, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__ResetTicketGoal_7);
#line 634 "add_trail_ops.m"
            return;
          }
#line 474 "add_trail_ops.m"
        }
#line 478 "add_trail_ops.m"
        break;
#line 478 "add_trail_ops.m"
      case (MR_Integer) 1:
#line 479 "add_trail_ops.m"
        {
#line 479 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__Args_10;
#line 479 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_12_12;
#line 479 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_13_13;
#line 479 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_14_14;
#line 479 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_16_16;
#line 479 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_17_17;
#line 479 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_22_22;
#line 479 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_23_23;
#line 483 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_39_39;
#line 483 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_40_40;
#line 483 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_41_41;
#line 483 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_42_42;

#line 480 "add_trail_ops.m"
          {
#line 480 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_16_16 = parse_tree__prog_mode__in_mode_0_f_0();
          }
#line 480 "add_trail_ops.m"
          {
#line 480 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 480 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 0) = ((MR_Box) ((MR_String) "Ticket"));
#line 480 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_16_16));
#line 480 "add_trail_ops.m"
          }
#line 480 "add_trail_ops.m"
          {
#line 480 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 480 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_13_13, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_14_14));
#line 480 "add_trail_ops.m"
          }
#line 620 "add_trail_ops.m"
          {
#line 620 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_17_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          }
#line 480 "add_trail_ops.m"
          {
#line 480 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 480 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 0) = ((MR_Box) (ml_backend__add_trail_ops__TicketVar_5));
#line 480 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_13_13));
#line 480 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_17_17));
#line 480 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 3) = ((MR_Box) ((MR_Integer) 0));
#line 480 "add_trail_ops.m"
          }
#line 481 "add_trail_ops.m"
          {
#line 481 "add_trail_ops.m"
            ml_backend__add_trail_ops__Args_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 481 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_12_12));
#line 481 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 481 "add_trail_ops.m"
          }
#line 484 "add_trail_ops.m"
          {
#line 484 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_22_22 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 483 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 483 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 483 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 483 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 483 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 483 "add_trail_ops.m"
          {
#line 483 "add_trail_ops.m"
            ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "reset_ticket_solve", (MR_Integer) 2, ml_backend__add_trail_ops__V_22_22, ml_backend__add_trail_ops__V_23_23, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__Args_10, (MR_String) "MR_reset_ticket(Ticket, MR_solve);", ml_backend__add_trail_ops__ResetTicketGoal_7);
#line 483 "add_trail_ops.m"
            return;
          }
#line 479 "add_trail_ops.m"
        }
#line 478 "add_trail_ops.m"
        break;
#line 478 "add_trail_ops.m"
    }
#line 471 "add_trail_ops.m"
  }
#line 468 "add_trail_ops.m"
}

#line 448 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_reset_ticket_undo_4_p_0(
#line 448 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
#line 448 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_6,
#line 448 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__ResetTicketGoal_7,
#line 448 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_8)
#line 448 "add_trail_ops.m"
{
#line 451 "add_trail_ops.m"
  {
#line 451 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 451 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__GenerateInline_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 452 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 452 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 452 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 452 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);

#line 458 "add_trail_ops.m"
#line 458 "add_trail_ops.m"
    switch (ml_backend__add_trail_ops__GenerateInline_9) {
#line 458 "add_trail_ops.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 458 "add_trail_ops.m"
      case (MR_Integer) 0:
#line 454 "add_trail_ops.m"
        {
#line 454 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_27_27;
#line 454 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_28_28;
#line 454 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_29_29;
#line 454 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_51_51;
#line 455 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_35_35;
#line 455 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_36_36;
#line 455 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_37_37;
#line 455 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_38_38;

#line 456 "add_trail_ops.m"
          {
#line 456 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 456 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 0) = ((MR_Box) (ml_backend__add_trail_ops__TicketVar_5));
#line 456 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 456 "add_trail_ops.m"
          }
#line 456 "add_trail_ops.m"
          {
#line 456 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_28_28 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 455 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 455 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 455 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 455 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 455 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 634 "add_trail_ops.m"
          {
#line 634 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_51_51 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 634 "add_trail_ops.m"
          {
#line 634 "add_trail_ops.m"
            hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_51_51, (MR_String) "reset_ticket_undo", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, ml_backend__add_trail_ops__V_27_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_28_28, ml_backend__add_trail_ops__V_29_29, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__ResetTicketGoal_7);
#line 634 "add_trail_ops.m"
            return;
          }
#line 454 "add_trail_ops.m"
        }
#line 458 "add_trail_ops.m"
        break;
#line 458 "add_trail_ops.m"
      case (MR_Integer) 1:
#line 459 "add_trail_ops.m"
        {
#line 459 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__Args_10;
#line 459 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_12_12;
#line 459 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_13_13;
#line 459 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_14_14;
#line 459 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_16_16;
#line 459 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_17_17;
#line 459 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_22_22;
#line 459 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_23_23;
#line 463 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_39_39;
#line 463 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_40_40;
#line 463 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_41_41;
#line 463 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_42_42;

#line 460 "add_trail_ops.m"
          {
#line 460 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_16_16 = parse_tree__prog_mode__in_mode_0_f_0();
          }
#line 460 "add_trail_ops.m"
          {
#line 460 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 460 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 0) = ((MR_Box) ((MR_String) "Ticket"));
#line 460 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_16_16));
#line 460 "add_trail_ops.m"
          }
#line 460 "add_trail_ops.m"
          {
#line 460 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 460 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_13_13, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_14_14));
#line 460 "add_trail_ops.m"
          }
#line 620 "add_trail_ops.m"
          {
#line 620 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_17_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          }
#line 460 "add_trail_ops.m"
          {
#line 460 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 460 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 0) = ((MR_Box) (ml_backend__add_trail_ops__TicketVar_5));
#line 460 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_13_13));
#line 460 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_17_17));
#line 460 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 3) = ((MR_Box) ((MR_Integer) 0));
#line 460 "add_trail_ops.m"
          }
#line 461 "add_trail_ops.m"
          {
#line 461 "add_trail_ops.m"
            ml_backend__add_trail_ops__Args_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_12_12));
#line 461 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 461 "add_trail_ops.m"
          }
#line 464 "add_trail_ops.m"
          {
#line 464 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_22_22 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
#line 463 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 463 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 463 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 463 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 463 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 463 "add_trail_ops.m"
          {
#line 463 "add_trail_ops.m"
            ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "reset_ticket_undo", (MR_Integer) 2, ml_backend__add_trail_ops__V_22_22, ml_backend__add_trail_ops__V_23_23, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__Args_10, (MR_String) "MR_reset_ticket(Ticket, MR_undo);", ml_backend__add_trail_ops__ResetTicketGoal_7);
#line 463 "add_trail_ops.m"
            return;
          }
#line 459 "add_trail_ops.m"
        }
#line 458 "add_trail_ops.m"
        break;
#line 458 "add_trail_ops.m"
    }
#line 451 "add_trail_ops.m"
  }
#line 448 "add_trail_ops.m"
}

#line 428 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__gen_store_ticket_4_p_0(
#line 428 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
#line 428 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Context_6,
#line 428 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__SaveTicketGoal_7,
#line 428 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Info_8)
#line 428 "add_trail_ops.m"
{
#line 431 "add_trail_ops.m"
  {
#line 431 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 431 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__GenerateInline_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 432 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 432 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 432 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 432 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);

#line 438 "add_trail_ops.m"
#line 438 "add_trail_ops.m"
    switch (ml_backend__add_trail_ops__GenerateInline_9) {
#line 438 "add_trail_ops.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 438 "add_trail_ops.m"
      case (MR_Integer) 0:
#line 434 "add_trail_ops.m"
        {
#line 434 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_27_27;
#line 434 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_28_28;
#line 434 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_29_29;
#line 434 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_51_51;
#line 435 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_35_35;
#line 435 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_36_36;
#line 435 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_37_37;
#line 435 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_38_38;

#line 436 "add_trail_ops.m"
          {
#line 436 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 0) = ((MR_Box) (ml_backend__add_trail_ops__TicketVar_5));
#line 436 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 436 "add_trail_ops.m"
          }
#line 436 "add_trail_ops.m"
          {
#line 436 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_28_28 = hlds__instmap__instmap_delta_bind_var_1_f_0(ml_backend__add_trail_ops__TicketVar_5);
          }
#line 435 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 435 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 435 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 435 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 435 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 634 "add_trail_ops.m"
          {
#line 634 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_51_51 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          }
#line 634 "add_trail_ops.m"
          {
#line 634 "add_trail_ops.m"
            hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_51_51, (MR_String) "store_ticket", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, ml_backend__add_trail_ops__V_27_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_28_28, ml_backend__add_trail_ops__V_29_29, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__SaveTicketGoal_7);
#line 634 "add_trail_ops.m"
            return;
          }
#line 434 "add_trail_ops.m"
        }
#line 438 "add_trail_ops.m"
        break;
#line 438 "add_trail_ops.m"
      case (MR_Integer) 1:
#line 439 "add_trail_ops.m"
        {
#line 439 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__Args_10;
#line 439 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_12_12;
#line 439 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_13_13;
#line 439 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_14_14;
#line 439 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_16_16;
#line 439 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_17_17;
#line 439 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_22_22;
#line 439 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_23_23;
#line 443 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_39_39;
#line 443 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_40_40;
#line 443 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_41_41;
#line 443 "add_trail_ops.m"
          MR_Word ml_backend__add_trail_ops__V_42_42;

#line 440 "add_trail_ops.m"
          {
#line 440 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_16_16 = parse_tree__prog_mode__out_mode_0_f_0();
          }
#line 440 "add_trail_ops.m"
          {
#line 440 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 440 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 0) = ((MR_Box) ((MR_String) "Ticket"));
#line 440 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_14_14, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_16_16));
#line 440 "add_trail_ops.m"
          }
#line 440 "add_trail_ops.m"
          {
#line 440 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 440 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_13_13, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_14_14));
#line 440 "add_trail_ops.m"
          }
#line 620 "add_trail_ops.m"
          {
#line 620 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_17_17 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
          }
#line 440 "add_trail_ops.m"
          {
#line 440 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 440 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 0) = ((MR_Box) (ml_backend__add_trail_ops__TicketVar_5));
#line 440 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_13_13));
#line 440 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_17_17));
#line 440 "add_trail_ops.m"
            MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_12_12, 3) = ((MR_Box) ((MR_Integer) 0));
#line 440 "add_trail_ops.m"
          }
#line 441 "add_trail_ops.m"
          {
#line 441 "add_trail_ops.m"
            ml_backend__add_trail_ops__Args_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_12_12));
#line 441 "add_trail_ops.m"
            MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__Args_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 441 "add_trail_ops.m"
          }
#line 444 "add_trail_ops.m"
          {
#line 444 "add_trail_ops.m"
            ml_backend__add_trail_ops__V_22_22 = hlds__instmap__instmap_delta_bind_var_1_f_0(ml_backend__add_trail_ops__TicketVar_5);
          }
#line 443 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 0)));
#line 443 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 1)));
#line 443 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 2)));
#line 443 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 443 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Info_8, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 443 "add_trail_ops.m"
          {
#line 443 "add_trail_ops.m"
            ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "store_ticket", (MR_Integer) 2, ml_backend__add_trail_ops__V_22_22, ml_backend__add_trail_ops__V_23_23, ml_backend__add_trail_ops__Context_6, ml_backend__add_trail_ops__Args_10, (MR_String) "MR_store_ticket(Ticket);", ml_backend__add_trail_ops__SaveTicketGoal_7);
#line 443 "add_trail_ops.m"
            return;
          }
#line 439 "add_trail_ops.m"
        }
#line 438 "add_trail_ops.m"
        break;
#line 438 "add_trail_ops.m"
    }
#line 431 "add_trail_ops.m"
  }
#line 428 "add_trail_ops.m"
}

#line 416 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__cases_add_trail_ops_4_p_0(
#line 416 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__HeadVar__1_1,
#line 416 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__HeadVar__2_2,
#line 416 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_3,
#line 416 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_4)
#line 416 "add_trail_ops.m"
{
#line 419 "add_trail_ops.m"
  {
#line 419 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;

#line 419 "add_trail_ops.m"
    if ((ml_backend__add_trail_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 419 "add_trail_ops.m"
      {
#line 419 "add_trail_ops.m"
        *ml_backend__add_trail_ops__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 419 "add_trail_ops.m"
        *ml_backend__add_trail_ops__STATE_VARIABLE_Info_4 = ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_3;
#line 419 "add_trail_ops.m"
      }
#line 419 "add_trail_ops.m"
    else
#line 420 "add_trail_ops.m"
      {
#line 420 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__Case0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 420 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__Cases0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__HeadVar__1_1, (MR_Integer) 1)));
#line 420 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__Case_10;
#line 420 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__Cases_11;
#line 420 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Case0_8, (MR_Integer) 0)));
#line 420 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Case0_8, (MR_Integer) 1)));
#line 420 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Case0_8, (MR_Integer) 2)));
#line 420 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__Goal_16;
#line 420 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_19_19;
#line 420 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__GoalExpr0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal0_15, (MR_Integer) 0)));
#line 420 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__GoalInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal0_15, (MR_Integer) 1)));

#line 137 "add_trail_ops.m"
        {
#line 137 "add_trail_ops.m"
          ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_p_0(ml_backend__add_trail_ops__GoalExpr0_26, ml_backend__add_trail_ops__GoalInfo_27, &ml_backend__add_trail_ops__Goal_16, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_3, &ml_backend__add_trail_ops__STATE_VARIABLE_Info_19_19);
        }
#line 423 "add_trail_ops.m"
        {
#line 423 "add_trail_ops.m"
          ml_backend__add_trail_ops__Case_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 423 "add_trail_ops.m"
          MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Case_10, 0) = ((MR_Box) (ml_backend__add_trail_ops__MainConsId_13));
#line 423 "add_trail_ops.m"
          MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Case_10, 1) = ((MR_Box) (ml_backend__add_trail_ops__OtherConsIds_14));
#line 423 "add_trail_ops.m"
          MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Case_10, 2) = ((MR_Box) (ml_backend__add_trail_ops__Goal_16));
#line 423 "add_trail_ops.m"
        }
#line 424 "add_trail_ops.m"
        {
#line 424 "add_trail_ops.m"
          ml_backend__add_trail_ops__cases_add_trail_ops_4_p_0(ml_backend__add_trail_ops__Cases0_9, &ml_backend__add_trail_ops__Cases_11, ml_backend__add_trail_ops__STATE_VARIABLE_Info_19_19, ml_backend__add_trail_ops__STATE_VARIABLE_Info_4);
        }
#line 420 "add_trail_ops.m"
        {
#line 420 "add_trail_ops.m"
          MR_Word base;
#line 420 "add_trail_ops.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "add_trail_ops.m"
          *ml_backend__add_trail_ops__HeadVar__2_2 = base;
#line 420 "add_trail_ops.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__Case_10));
#line 420 "add_trail_ops.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__Cases_11));
#line 420 "add_trail_ops.m"
        }
#line 420 "add_trail_ops.m"
      }
#line 419 "add_trail_ops.m"
  }
#line 416 "add_trail_ops.m"
}

#line 361 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__disj_add_trail_ops_7_p_0(
#line 361 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__HeadVar__1_1,
#line 361 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__HeadVar__2_2,
#line 361 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__IsFirstBranch_3,
#line 361 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__CodeModel_4,
#line 361 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__TicketVar_5,
#line 361 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6,
#line 361 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_7)
#line 361 "add_trail_ops.m"
{
#line 365 "add_trail_ops.m"
  {
#line 365 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;

#line 365 "add_trail_ops.m"
    if ((ml_backend__add_trail_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 365 "add_trail_ops.m"
      {
#line 365 "add_trail_ops.m"
        *ml_backend__add_trail_ops__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 365 "add_trail_ops.m"
        *ml_backend__add_trail_ops__STATE_VARIABLE_Info_7 = ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6;
#line 365 "add_trail_ops.m"
      }
#line 365 "add_trail_ops.m"
    else
#line 367 "add_trail_ops.m"
      {
#line 367 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__TypeCtorInfo_52_52;
#line 367 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__Goal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 367 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__HeadVar__1_1, (MR_Integer) 1)));
#line 367 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__Goal_16;
#line 367 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__Goals_17;
#line 367 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__GoalInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal0_14, (MR_Integer) 1)));
#line 367 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__Context_24;
#line 367 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__UndoList_25;
#line 367 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__Goal1_31;
#line 367 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__PruneList_32;
#line 367 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__GoalInfo1_36;
#line 367 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_42_42;
#line 367 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_45_45;
#line 367 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_46_46;
#line 367 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_47_47;
#line 368 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal0_14, (MR_Integer) 0)));
#line 409 "add_trail_ops.m"
        MR_Word ml_backend__add_trail_ops__V_35_35;

#line 369 "add_trail_ops.m"
        {
#line 369 "add_trail_ops.m"
          ml_backend__add_trail_ops__Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__add_trail_ops__GoalInfo0_23);
        }
#line 375 "add_trail_ops.m"
#line 375 "add_trail_ops.m"
        switch (ml_backend__add_trail_ops__IsFirstBranch_3) {
#line 375 "add_trail_ops.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 375 "add_trail_ops.m"
          case (MR_Integer) 0:
#line 374 "add_trail_ops.m"
            ml_backend__add_trail_ops__UndoList_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 375 "add_trail_ops.m"
            break;
#line 375 "add_trail_ops.m"
          case (MR_Integer) 1:
#line 376 "add_trail_ops.m"
            {
#line 376 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__ResetTicketUndoGoal_26;
#line 376 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__UndoList0_27;

#line 377 "add_trail_ops.m"
              {
#line 377 "add_trail_ops.m"
                ml_backend__add_trail_ops__gen_reset_ticket_undo_4_p_0(ml_backend__add_trail_ops__TicketVar_5, ml_backend__add_trail_ops__Context_24, &ml_backend__add_trail_ops__ResetTicketUndoGoal_26, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6);
              }
#line 378 "add_trail_ops.m"
              {
#line 378 "add_trail_ops.m"
                ml_backend__add_trail_ops__UndoList0_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 378 "add_trail_ops.m"
                MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__UndoList0_27, 0) = ((MR_Box) (ml_backend__add_trail_ops__ResetTicketUndoGoal_26));
#line 378 "add_trail_ops.m"
                MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__UndoList0_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 378 "add_trail_ops.m"
              }
#line 385 "add_trail_ops.m"
              if ((ml_backend__add_trail_ops__Goals0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "add_trail_ops.m"
                {
#line 380 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__DiscardTicketGoal_28;
#line 380 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__V_40_40;
#line 380 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__GenerateInline_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 531 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 531 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 531 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 531 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__V_72_72 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) & (MR_Integer) 1);

#line 537 "add_trail_ops.m"
#line 537 "add_trail_ops.m"
                  switch (ml_backend__add_trail_ops__GenerateInline_56) {
#line 537 "add_trail_ops.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 537 "add_trail_ops.m"
                    case (MR_Integer) 0:
#line 533 "add_trail_ops.m"
                      {
#line 533 "add_trail_ops.m"
                        MR_Word ml_backend__add_trail_ops__V_67_67;
#line 533 "add_trail_ops.m"
                        MR_Word ml_backend__add_trail_ops__V_68_68;
#line 533 "add_trail_ops.m"
                        MR_Word ml_backend__add_trail_ops__V_89_89;
#line 534 "add_trail_ops.m"
                        MR_Word ml_backend__add_trail_ops__V_73_73;
#line 534 "add_trail_ops.m"
                        MR_Word ml_backend__add_trail_ops__V_74_74;
#line 534 "add_trail_ops.m"
                        MR_Word ml_backend__add_trail_ops__V_75_75;
#line 534 "add_trail_ops.m"
                        MR_Word ml_backend__add_trail_ops__V_76_76;

#line 535 "add_trail_ops.m"
                        {
#line 535 "add_trail_ops.m"
                          ml_backend__add_trail_ops__V_67_67 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                        }
#line 534 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 534 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 534 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 534 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_75_75 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 534 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 634 "add_trail_ops.m"
                        {
#line 634 "add_trail_ops.m"
                          ml_backend__add_trail_ops__V_89_89 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                        }
#line 634 "add_trail_ops.m"
                        {
#line 634 "add_trail_ops.m"
                          hlds__goal_util__generate_simple_call_12_p_0(ml_backend__add_trail_ops__V_89_89, (MR_String) "discard_ticket", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_67_67, ml_backend__add_trail_ops__V_68_68, ml_backend__add_trail_ops__Context_24, &ml_backend__add_trail_ops__DiscardTicketGoal_28);
                        }
#line 533 "add_trail_ops.m"
                      }
#line 537 "add_trail_ops.m"
                      break;
#line 537 "add_trail_ops.m"
                    case (MR_Integer) 1:
#line 538 "add_trail_ops.m"
                      {
#line 538 "add_trail_ops.m"
                        MR_Word ml_backend__add_trail_ops__V_61_61;
#line 538 "add_trail_ops.m"
                        MR_Word ml_backend__add_trail_ops__V_62_62;
#line 541 "add_trail_ops.m"
                        MR_Word ml_backend__add_trail_ops__V_77_77;
#line 541 "add_trail_ops.m"
                        MR_Word ml_backend__add_trail_ops__V_78_78;
#line 541 "add_trail_ops.m"
                        MR_Word ml_backend__add_trail_ops__V_79_79;
#line 541 "add_trail_ops.m"
                        MR_Word ml_backend__add_trail_ops__V_80_80;

#line 542 "add_trail_ops.m"
                        {
#line 542 "add_trail_ops.m"
                          ml_backend__add_trail_ops__V_61_61 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                        }
#line 541 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 541 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 541 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 541 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_79_79 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 541 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 541 "add_trail_ops.m"
                        {
#line 541 "add_trail_ops.m"
                          ml_backend__add_trail_ops__trail_generate_foreign_proc_8_p_0((MR_String) "discard_ticket", (MR_Integer) 2, ml_backend__add_trail_ops__V_61_61, ml_backend__add_trail_ops__V_62_62, ml_backend__add_trail_ops__Context_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_String) "MR_discard_ticket();", &ml_backend__add_trail_ops__DiscardTicketGoal_28);
                        }
#line 538 "add_trail_ops.m"
                      }
#line 537 "add_trail_ops.m"
                      break;
#line 537 "add_trail_ops.m"
                  }
#line 384 "add_trail_ops.m"
                  {
#line 384 "add_trail_ops.m"
                    ml_backend__add_trail_ops__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_40_40, 0) = ((MR_Box) (ml_backend__add_trail_ops__DiscardTicketGoal_28));
#line 384 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 384 "add_trail_ops.m"
                  }
#line 384 "add_trail_ops.m"
                  {
#line 384 "add_trail_ops.m"
                    ml_backend__add_trail_ops__UndoList_25 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ml_backend__add_trail_ops__UndoList0_27, ml_backend__add_trail_ops__V_40_40);
                  }
#line 380 "add_trail_ops.m"
                }
#line 385 "add_trail_ops.m"
              else
#line 387 "add_trail_ops.m"
                ml_backend__add_trail_ops__UndoList_25 = ml_backend__add_trail_ops__UndoList0_27;
#line 376 "add_trail_ops.m"
            }
#line 375 "add_trail_ops.m"
            break;
#line 375 "add_trail_ops.m"
        }
#line 390 "add_trail_ops.m"
        {
#line 390 "add_trail_ops.m"
          ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(ml_backend__add_trail_ops__Goal0_14, &ml_backend__add_trail_ops__Goal1_31, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_6, &ml_backend__add_trail_ops__STATE_VARIABLE_Info_42_42);
        }
#line 398 "add_trail_ops.m"
#line 398 "add_trail_ops.m"
        switch (ml_backend__add_trail_ops__CodeModel_4) {
#line 398 "add_trail_ops.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 398 "add_trail_ops.m"
          case (MR_Integer) 0:
#line 398 "add_trail_ops.m"
          case (MR_Integer) 1:
#line 401 "add_trail_ops.m"
            {
#line 401 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__ResetTicketCommitGoal_33;
#line 401 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__PruneTicketGoal_34;
#line 401 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__V_43_43;

#line 402 "add_trail_ops.m"
              {
#line 402 "add_trail_ops.m"
                ml_backend__add_trail_ops__gen_reset_ticket_commit_4_p_0(ml_backend__add_trail_ops__TicketVar_5, ml_backend__add_trail_ops__Context_24, &ml_backend__add_trail_ops__ResetTicketCommitGoal_33, ml_backend__add_trail_ops__STATE_VARIABLE_Info_42_42);
              }
#line 404 "add_trail_ops.m"
              {
#line 404 "add_trail_ops.m"
                ml_backend__add_trail_ops__gen_prune_ticket_3_p_0(ml_backend__add_trail_ops__Context_24, &ml_backend__add_trail_ops__PruneTicketGoal_34, ml_backend__add_trail_ops__STATE_VARIABLE_Info_42_42);
              }
#line 405 "add_trail_ops.m"
              {
#line 405 "add_trail_ops.m"
                ml_backend__add_trail_ops__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "add_trail_ops.m"
                MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_43_43, 0) = ((MR_Box) (ml_backend__add_trail_ops__PruneTicketGoal_34));
#line 405 "add_trail_ops.m"
                MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 405 "add_trail_ops.m"
              }
#line 405 "add_trail_ops.m"
              {
#line 405 "add_trail_ops.m"
                ml_backend__add_trail_ops__PruneList_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "add_trail_ops.m"
                MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__PruneList_32, 0) = ((MR_Box) (ml_backend__add_trail_ops__ResetTicketCommitGoal_33));
#line 405 "add_trail_ops.m"
                MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__PruneList_32, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_43_43));
#line 405 "add_trail_ops.m"
              }
#line 401 "add_trail_ops.m"
            }
#line 398 "add_trail_ops.m"
            break;
#line 398 "add_trail_ops.m"
          case (MR_Integer) 2:
#line 397 "add_trail_ops.m"
            ml_backend__add_trail_ops__PruneList_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 398 "add_trail_ops.m"
            break;
#line 398 "add_trail_ops.m"
        }
#line 409 "add_trail_ops.m"
        ml_backend__add_trail_ops__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal1_31, (MR_Integer) 0)));
#line 409 "add_trail_ops.m"
        ml_backend__add_trail_ops__GoalInfo1_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal1_31, (MR_Integer) 1)));
#line 3203 "ml_backend.add_trail_ops.c"
        ml_backend__add_trail_ops__TypeCtorInfo_52_52 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 410 "add_trail_ops.m"
        {
#line 410 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "add_trail_ops.m"
          MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_47_47, 0) = ((MR_Box) (ml_backend__add_trail_ops__Goal1_31));
#line 410 "add_trail_ops.m"
          MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 410 "add_trail_ops.m"
        }
#line 410 "add_trail_ops.m"
        {
#line 410 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_46_46 = mercury__list__f_43_43_2_f_0(ml_backend__add_trail_ops__TypeCtorInfo_52_52, ml_backend__add_trail_ops__V_47_47, ml_backend__add_trail_ops__PruneList_32);
        }
#line 410 "add_trail_ops.m"
        {
#line 410 "add_trail_ops.m"
          ml_backend__add_trail_ops__V_45_45 = mercury__list__f_43_43_2_f_0(ml_backend__add_trail_ops__TypeCtorInfo_52_52, ml_backend__add_trail_ops__UndoList_25, ml_backend__add_trail_ops__V_46_46);
        }
#line 410 "add_trail_ops.m"
        {
#line 410 "add_trail_ops.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(ml_backend__add_trail_ops__V_45_45, ml_backend__add_trail_ops__GoalInfo1_36, &ml_backend__add_trail_ops__Goal_16);
        }
#line 413 "add_trail_ops.m"
        {
#line 413 "add_trail_ops.m"
          ml_backend__add_trail_ops__disj_add_trail_ops_7_p_0(ml_backend__add_trail_ops__Goals0_15, &ml_backend__add_trail_ops__Goals_17, (MR_Integer) 1, ml_backend__add_trail_ops__CodeModel_4, ml_backend__add_trail_ops__TicketVar_5, ml_backend__add_trail_ops__STATE_VARIABLE_Info_42_42, ml_backend__add_trail_ops__STATE_VARIABLE_Info_7);
        }
#line 366 "add_trail_ops.m"
        {
#line 366 "add_trail_ops.m"
          MR_Word base;
#line 366 "add_trail_ops.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "add_trail_ops.m"
          *ml_backend__add_trail_ops__HeadVar__2_2 = base;
#line 366 "add_trail_ops.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__Goal_16));
#line 366 "add_trail_ops.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__Goals_17));
#line 366 "add_trail_ops.m"
        }
#line 367 "add_trail_ops.m"
      }
#line 365 "add_trail_ops.m"
  }
#line 361 "add_trail_ops.m"
}

#line 359 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__conj_add_trail_ops_4_p_0_1(
#line 359 "add_trail_ops.m"
  MR_Box ml_backend__add_trail_ops__closure_arg,
#line 359 "add_trail_ops.m"
  MR_Box ml_backend__add_trail_ops__wrapper_arg_1,
#line 359 "add_trail_ops.m"
  MR_Box * ml_backend__add_trail_ops__wrapper_arg_2,
#line 359 "add_trail_ops.m"
  MR_Box ml_backend__add_trail_ops__wrapper_arg_3,
#line 359 "add_trail_ops.m"
  MR_Box * ml_backend__add_trail_ops__wrapper_arg_4)
#line 359 "add_trail_ops.m"
{
#line 359 "add_trail_ops.m"
  {
#line 359 "add_trail_ops.m"
    MR_Box ml_backend__add_trail_ops__closure = ml_backend__add_trail_ops__closure_arg;
#line 359 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__conv1_Goal_6;
#line 359 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__conv0_STATE_VARIABLE_Info_11;

#line 359 "add_trail_ops.m"
    {
#line 359 "add_trail_ops.m"
      ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(((MR_Word) ml_backend__add_trail_ops__wrapper_arg_1), &ml_backend__add_trail_ops__conv1_Goal_6, ((MR_Word) ml_backend__add_trail_ops__wrapper_arg_3), &ml_backend__add_trail_ops__conv0_STATE_VARIABLE_Info_11);
    }
#line 359 "add_trail_ops.m"
    *ml_backend__add_trail_ops__wrapper_arg_2 = ((MR_Box) (ml_backend__add_trail_ops__conv1_Goal_6));
#line 359 "add_trail_ops.m"
    *ml_backend__add_trail_ops__wrapper_arg_4 = ((MR_Box) (ml_backend__add_trail_ops__conv0_STATE_VARIABLE_Info_11));
#line 359 "add_trail_ops.m"
  }
#line 359 "add_trail_ops.m"
}

#line 355 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__conj_add_trail_ops_4_p_0(
#line 355 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Goals0_5,
#line 355 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__Goals_6,
#line 355 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_8,
#line 355 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_9)
#line 355 "add_trail_ops.m"
{
#line 358 "add_trail_ops.m"
  {
#line 358 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 358 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__TypeCtorInfo_16_16 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 359 "add_trail_ops.m"
    MR_Box ml_backend__add_trail_ops__conv2_STATE_VARIABLE_Info_9;

#line 359 "add_trail_ops.m"
    {
#line 359 "add_trail_ops.m"
      mercury__list__map_foldl_5_p_0(ml_backend__add_trail_ops__TypeCtorInfo_16_16, ml_backend__add_trail_ops__TypeCtorInfo_16_16, (MR_Word) &ml_backend__add_trail_ops__ml_backend__add_trail_ops__type_ctor_info_trail_ops_info_0, (MR_Word) &ml_backend__add_trail_ops_scalar_common_2[1], ml_backend__add_trail_ops__Goals0_5, ml_backend__add_trail_ops__Goals_6, ((MR_Box) (ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_8)), &ml_backend__add_trail_ops__conv2_STATE_VARIABLE_Info_9);
    }
#line 359 "add_trail_ops.m"
    *ml_backend__add_trail_ops__STATE_VARIABLE_Info_9 = ((MR_Word) ml_backend__add_trail_ops__conv2_STATE_VARIABLE_Info_9);
#line 358 "add_trail_ops.m"
  }
#line 355 "add_trail_ops.m"
}

#line 139 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_p_0(
#line 139 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__GoalExpr0_6,
#line 139 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__GoalInfo0_7,
#line 139 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__Goal_8,
#line 139 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102,
#line 139 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_103)
#line 139 "add_trail_ops.m"
{
#line 144 "add_trail_ops.m"
  while (MR_TRUE)
#line 144 "add_trail_ops.m"
    {
#line 144 "add_trail_ops.m"
      /* tailcall optimized into a loop */
#line 144 "add_trail_ops.m"
      {
#line 144 "add_trail_ops.m"
        MR_bool ml_backend__add_trail_ops__succeeded;

#line 144 "add_trail_ops.m"
#line 144 "add_trail_ops.m"
        switch (MR_tag((MR_Word) ml_backend__add_trail_ops__GoalExpr0_6)) {
#line 144 "add_trail_ops.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 144 "add_trail_ops.m"
          case (MR_Integer) 0:
#line 174 "add_trail_ops.m"
            {
#line 174 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__InnerGoal_26 = (MR_Word) MR_body(((MR_Word) ml_backend__add_trail_ops__GoalExpr0_6), (MR_Integer) 0);
#line 174 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__InnerGoalInfo_29;
#line 174 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__Determinism_30;
#line 174 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__NumSolns_32;
#line 174 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__True_33;
#line 174 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__Fail_34;
#line 174 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__ModuleInfo_35;
#line 174 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__ThenGoal_36;
#line 174 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__NewOuterGoal_37;
#line 174 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__Context_180;
#line 180 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__V_28_28;
#line 182 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops___CanFail_31;
#line 185 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__V_219_219;
#line 185 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__V_220_220;
#line 185 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__V_221_221;
#line 185 "add_trail_ops.m"
              MR_Word ml_backend__add_trail_ops__V_222_222;

#line 179 "add_trail_ops.m"
              {
#line 179 "add_trail_ops.m"
                ml_backend__add_trail_ops__Context_180 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__add_trail_ops__GoalInfo0_7);
              }
#line 180 "add_trail_ops.m"
              ml_backend__add_trail_ops__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__InnerGoal_26, (MR_Integer) 0)));
#line 180 "add_trail_ops.m"
              ml_backend__add_trail_ops__InnerGoalInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__InnerGoal_26, (MR_Integer) 1)));
#line 181 "add_trail_ops.m"
              {
#line 181 "add_trail_ops.m"
                ml_backend__add_trail_ops__Determinism_30 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ml_backend__add_trail_ops__InnerGoalInfo_29);
              }
#line 182 "add_trail_ops.m"
              {
#line 182 "add_trail_ops.m"
                parse_tree__prog_data__determinism_components_3_p_0(ml_backend__add_trail_ops__Determinism_30, &ml_backend__add_trail_ops___CanFail_31, &ml_backend__add_trail_ops__NumSolns_32);
              }
#line 183 "add_trail_ops.m"
              {
#line 183 "add_trail_ops.m"
                ml_backend__add_trail_ops__True_33 = hlds__make_goal__true_goal_with_context_1_f_0(ml_backend__add_trail_ops__Context_180);
              }
#line 184 "add_trail_ops.m"
              {
#line 184 "add_trail_ops.m"
                ml_backend__add_trail_ops__Fail_34 = hlds__make_goal__fail_goal_with_context_1_f_0(ml_backend__add_trail_ops__Context_180);
              }
#line 185 "add_trail_ops.m"
              ml_backend__add_trail_ops__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, (MR_Integer) 0)));
#line 185 "add_trail_ops.m"
              ml_backend__add_trail_ops__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, (MR_Integer) 1)));
#line 185 "add_trail_ops.m"
              ml_backend__add_trail_ops__ModuleInfo_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, (MR_Integer) 2)));
#line 185 "add_trail_ops.m"
              ml_backend__add_trail_ops__V_221_221 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 185 "add_trail_ops.m"
              ml_backend__add_trail_ops__V_222_222 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 195 "add_trail_ops.m"
#line 195 "add_trail_ops.m"
              switch (ml_backend__add_trail_ops__NumSolns_32) {
#line 195 "add_trail_ops.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 195 "add_trail_ops.m"
                case (MR_Integer) 3:
#line 195 "add_trail_ops.m"
                case (MR_Integer) 2:
#line 195 "add_trail_ops.m"
                case (MR_Integer) 1:
#line 200 "add_trail_ops.m"
                  ml_backend__add_trail_ops__ThenGoal_36 = ml_backend__add_trail_ops__Fail_34;
#line 195 "add_trail_ops.m"
                  break;
#line 195 "add_trail_ops.m"
                case (MR_Integer) 0:
#line 187 "add_trail_ops.m"
                  {
#line 187 "add_trail_ops.m"
                    MR_Word ml_backend__add_trail_ops__V_164_164;

#line 194 "add_trail_ops.m"
                    {
#line 194 "add_trail_ops.m"
                      ml_backend__add_trail_ops__V_164_164 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                    }
#line 193 "add_trail_ops.m"
                    {
#line 193 "add_trail_ops.m"
                      ml_backend__add_trail_ops__trail_generate_call_8_p_0((MR_String) "unused", (MR_Integer) 0, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__add_trail_ops__V_164_164, ml_backend__add_trail_ops__ModuleInfo_35, ml_backend__add_trail_ops__Context_180, &ml_backend__add_trail_ops__ThenGoal_36);
                    }
#line 187 "add_trail_ops.m"
                  }
#line 195 "add_trail_ops.m"
                  break;
#line 195 "add_trail_ops.m"
              }
#line 202 "add_trail_ops.m"
              {
#line 202 "add_trail_ops.m"
                ml_backend__add_trail_ops__NewOuterGoal_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 202 "add_trail_ops.m"
                MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__NewOuterGoal_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 202 "add_trail_ops.m"
                MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__NewOuterGoal_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 202 "add_trail_ops.m"
                MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__NewOuterGoal_37, 2) = ((MR_Box) (ml_backend__add_trail_ops__InnerGoal_26));
#line 202 "add_trail_ops.m"
                MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__NewOuterGoal_37, 3) = ((MR_Box) (ml_backend__add_trail_ops__ThenGoal_36));
#line 202 "add_trail_ops.m"
                MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__NewOuterGoal_37, 4) = ((MR_Box) (ml_backend__add_trail_ops__True_33));
#line 202 "add_trail_ops.m"
              }
#line 203 "add_trail_ops.m"
              /* direct tailcall eliminated */
#line 203 "add_trail_ops.m"
              {
#line 203 "add_trail_ops.m"
                MR_Word ml_backend__add_trail_ops__GoalExpr0__tmp_copy_6 = ml_backend__add_trail_ops__NewOuterGoal_37;

#line 203 "add_trail_ops.m"
                ml_backend__add_trail_ops__GoalExpr0_6 = ml_backend__add_trail_ops__GoalExpr0__tmp_copy_6;
#line 203 "add_trail_ops.m"
              }
#line 203 "add_trail_ops.m"
              continue;
#line 174 "add_trail_ops.m"
            }
#line 144 "add_trail_ops.m"
            break;
#line 144 "add_trail_ops.m"
          case (MR_Integer) 1:
#line 144 "add_trail_ops.m"
          case (MR_Integer) 2:
#line 344 "add_trail_ops.m"
            {
#line 345 "add_trail_ops.m"
              {
#line 345 "add_trail_ops.m"
                MR_Word base;
#line 345 "add_trail_ops.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 345 "add_trail_ops.m"
                *ml_backend__add_trail_ops__Goal_8 = base;
#line 345 "add_trail_ops.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__GoalExpr0_6));
#line 345 "add_trail_ops.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
#line 345 "add_trail_ops.m"
              }
#line 344 "add_trail_ops.m"
              *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103 = ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102;
#line 344 "add_trail_ops.m"
            }
#line 144 "add_trail_ops.m"
            break;
#line 144 "add_trail_ops.m"
          case (MR_Integer) 3:
#line 144 "add_trail_ops.m"
#line 144 "add_trail_ops.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 0)))) {
#line 144 "add_trail_ops.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 144 "add_trail_ops.m"
              case (MR_Integer) 0:
#line 344 "add_trail_ops.m"
                {
#line 345 "add_trail_ops.m"
                  {
#line 345 "add_trail_ops.m"
                    MR_Word base;
#line 345 "add_trail_ops.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 345 "add_trail_ops.m"
                    *ml_backend__add_trail_ops__Goal_8 = base;
#line 345 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__GoalExpr0_6));
#line 345 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
#line 345 "add_trail_ops.m"
                  }
#line 344 "add_trail_ops.m"
                  *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103 = ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102;
#line 344 "add_trail_ops.m"
                }
#line 144 "add_trail_ops.m"
                break;
#line 144 "add_trail_ops.m"
              case (MR_Integer) 1:
#line 347 "add_trail_ops.m"
                {
#line 348 "add_trail_ops.m"
                  {
#line 348 "add_trail_ops.m"
                    MR_Word base;
#line 348 "add_trail_ops.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 348 "add_trail_ops.m"
                    *ml_backend__add_trail_ops__Goal_8 = base;
#line 348 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__GoalExpr0_6));
#line 348 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
#line 348 "add_trail_ops.m"
                  }
#line 347 "add_trail_ops.m"
                  *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103 = ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102;
#line 347 "add_trail_ops.m"
                }
#line 144 "add_trail_ops.m"
                break;
#line 144 "add_trail_ops.m"
              case (MR_Integer) 2:
#line 144 "add_trail_ops.m"
                {
#line 144 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__ConjType_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 1)));
#line 144 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 2)));
#line 144 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__Goals_12;
#line 144 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__GoalExpr_13;

#line 145 "add_trail_ops.m"
                  {
#line 145 "add_trail_ops.m"
                    ml_backend__add_trail_ops__conj_add_trail_ops_4_p_0(ml_backend__add_trail_ops__Goals0_11, &ml_backend__add_trail_ops__Goals_12, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                  }
#line 146 "add_trail_ops.m"
                  {
#line 146 "add_trail_ops.m"
                    ml_backend__add_trail_ops__GoalExpr_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 146 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 146 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_13, 1) = ((MR_Box) (ml_backend__add_trail_ops__ConjType_10));
#line 146 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_13, 2) = ((MR_Box) (ml_backend__add_trail_ops__Goals_12));
#line 146 "add_trail_ops.m"
                  }
#line 147 "add_trail_ops.m"
                  {
#line 147 "add_trail_ops.m"
                    MR_Word base;
#line 147 "add_trail_ops.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 147 "add_trail_ops.m"
                    *ml_backend__add_trail_ops__Goal_8 = base;
#line 147 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__GoalExpr_13));
#line 147 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
#line 147 "add_trail_ops.m"
                  }
#line 144 "add_trail_ops.m"
                }
#line 144 "add_trail_ops.m"
                break;
#line 144 "add_trail_ops.m"
              case (MR_Integer) 3:
#line 149 "add_trail_ops.m"
                {
#line 149 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__Disjuncts0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 1)));
#line 149 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__GoalExpr_178;

#line 153 "add_trail_ops.m"
                  if ((ml_backend__add_trail_ops__Disjuncts0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 151 "add_trail_ops.m"
                    {
#line 152 "add_trail_ops.m"
                      ml_backend__add_trail_ops__GoalExpr_178 = ml_backend__add_trail_ops__GoalExpr0_6;
#line 151 "add_trail_ops.m"
                      *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103 = ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102;
#line 151 "add_trail_ops.m"
                    }
#line 153 "add_trail_ops.m"
                  else
#line 154 "add_trail_ops.m"
                    {
#line 154 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__Context_17;
#line 154 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__CodeModel_18;
#line 154 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__TicketVar_19;
#line 154 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__StoreTicketGoal_20;
#line 154 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__Disjuncts_21;
#line 154 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_168_168;
#line 154 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_172_172;
#line 154 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_173_173;
#line 154 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_174_174;
#line 154 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_175_175;

#line 155 "add_trail_ops.m"
                      {
#line 155 "add_trail_ops.m"
                        ml_backend__add_trail_ops__Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__add_trail_ops__GoalInfo0_7);
                      }
#line 156 "add_trail_ops.m"
                      {
#line 156 "add_trail_ops.m"
                        ml_backend__add_trail_ops__CodeModel_18 = hlds__code_model__goal_info_get_code_model_1_f_0(ml_backend__add_trail_ops__GoalInfo0_7);
                      }
#line 160 "add_trail_ops.m"
                      {
#line 160 "add_trail_ops.m"
                        ml_backend__add_trail_ops__new_ticket_var_3_p_0(&ml_backend__add_trail_ops__TicketVar_19, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, &ml_backend__add_trail_ops__STATE_VARIABLE_Info_168_168);
                      }
#line 161 "add_trail_ops.m"
                      {
#line 161 "add_trail_ops.m"
                        ml_backend__add_trail_ops__gen_store_ticket_4_p_0(ml_backend__add_trail_ops__TicketVar_19, ml_backend__add_trail_ops__Context_17, &ml_backend__add_trail_ops__StoreTicketGoal_20, ml_backend__add_trail_ops__STATE_VARIABLE_Info_168_168);
                      }
#line 162 "add_trail_ops.m"
                      {
#line 162 "add_trail_ops.m"
                        ml_backend__add_trail_ops__disj_add_trail_ops_7_p_0(ml_backend__add_trail_ops__Disjuncts0_14, &ml_backend__add_trail_ops__Disjuncts_21, (MR_Integer) 0, ml_backend__add_trail_ops__CodeModel_18, ml_backend__add_trail_ops__TicketVar_19, ml_backend__add_trail_ops__STATE_VARIABLE_Info_168_168, ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
#line 165 "add_trail_ops.m"
                      {
#line 165 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_175_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_175_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 165 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_175_175, 1) = ((MR_Box) (ml_backend__add_trail_ops__Disjuncts_21));
#line 165 "add_trail_ops.m"
                      }
#line 165 "add_trail_ops.m"
                      {
#line 165 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_174_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 165 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_174_174, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_175_175));
#line 165 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__V_174_174, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
#line 165 "add_trail_ops.m"
                      }
#line 165 "add_trail_ops.m"
                      {
#line 165 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_173_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_173_173, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_174_174));
#line 165 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_173_173, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 165 "add_trail_ops.m"
                      }
#line 165 "add_trail_ops.m"
                      {
#line 165 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_172_172, 0) = ((MR_Box) (ml_backend__add_trail_ops__StoreTicketGoal_20));
#line 165 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_172_172, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_173_173));
#line 165 "add_trail_ops.m"
                      }
#line 164 "add_trail_ops.m"
                      {
#line 164 "add_trail_ops.m"
                        ml_backend__add_trail_ops__GoalExpr_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 164 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 164 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_178, 1) = ((MR_Box) ((MR_Integer) 0));
#line 164 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_178, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_172_172));
#line 164 "add_trail_ops.m"
                      }
#line 154 "add_trail_ops.m"
                    }
#line 167 "add_trail_ops.m"
                  {
#line 167 "add_trail_ops.m"
                    MR_Word base;
#line 167 "add_trail_ops.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 167 "add_trail_ops.m"
                    *ml_backend__add_trail_ops__Goal_8 = base;
#line 167 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__GoalExpr_178));
#line 167 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
#line 167 "add_trail_ops.m"
                  }
#line 149 "add_trail_ops.m"
                }
#line 144 "add_trail_ops.m"
                break;
#line 144 "add_trail_ops.m"
              case (MR_Integer) 4:
#line 169 "add_trail_ops.m"
                {
#line 169 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 1)));
#line 169 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__CanFail_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 2)));
#line 169 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__Cases0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 3)));
#line 169 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__Cases_25;
#line 169 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__GoalExpr_179;

#line 170 "add_trail_ops.m"
                  {
#line 170 "add_trail_ops.m"
                    ml_backend__add_trail_ops__cases_add_trail_ops_4_p_0(ml_backend__add_trail_ops__Cases0_24, &ml_backend__add_trail_ops__Cases_25, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                  }
#line 171 "add_trail_ops.m"
                  {
#line 171 "add_trail_ops.m"
                    ml_backend__add_trail_ops__GoalExpr_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 171 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 171 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_179, 1) = ((MR_Box) (ml_backend__add_trail_ops__Var_22));
#line 171 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_179, 2) = ((MR_Box) (ml_backend__add_trail_ops__CanFail_23));
#line 171 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_179, 3) = ((MR_Box) (ml_backend__add_trail_ops__Cases_25));
#line 171 "add_trail_ops.m"
                  }
#line 172 "add_trail_ops.m"
                  {
#line 172 "add_trail_ops.m"
                    MR_Word base;
#line 172 "add_trail_ops.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 172 "add_trail_ops.m"
                    *ml_backend__add_trail_ops__Goal_8 = base;
#line 172 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__GoalExpr_179));
#line 172 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
#line 172 "add_trail_ops.m"
                  }
#line 169 "add_trail_ops.m"
                }
#line 144 "add_trail_ops.m"
                break;
#line 144 "add_trail_ops.m"
              case (MR_Integer) 5:
#line 205 "add_trail_ops.m"
                {
#line 205 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__Reason_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 1)));
#line 205 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__InnerGoal0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 2)));
#line 205 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__InnerCodeModel_41;
#line 205 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__OuterCodeModel_42;
#line 205 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__GoalExpr_191;
#line 205 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__InnerGoalInfo_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__InnerGoal0_39, (MR_Integer) 1)));
#line 207 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__InnerGoal0_39, (MR_Integer) 0)));

#line 208 "add_trail_ops.m"
                  {
#line 208 "add_trail_ops.m"
                    ml_backend__add_trail_ops__InnerCodeModel_41 = hlds__code_model__goal_info_get_code_model_1_f_0(ml_backend__add_trail_ops__InnerGoalInfo_197);
                  }
#line 209 "add_trail_ops.m"
                  {
#line 209 "add_trail_ops.m"
                    ml_backend__add_trail_ops__OuterCodeModel_42 = hlds__code_model__goal_info_get_code_model_1_f_0(ml_backend__add_trail_ops__GoalInfo0_7);
                  }
#line 211 "add_trail_ops.m"
                  ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__InnerCodeModel_41 == (MR_Integer) 2);
#line 211 "add_trail_ops.m"
                  if (ml_backend__add_trail_ops__succeeded)
#line 211 "add_trail_ops.m"
                    {
#line 212 "add_trail_ops.m"
                      ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__OuterCodeModel_42 == (MR_Integer) 2);
#line 212 "add_trail_ops.m"
                      ml_backend__add_trail_ops__succeeded = !(ml_backend__add_trail_ops__succeeded);
#line 211 "add_trail_ops.m"
                    }
#line 266 "add_trail_ops.m"
                  if (ml_backend__add_trail_ops__succeeded)
#line 218 "add_trail_ops.m"
                    {
#line 218 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__SavedTicketCounterVar_43;
#line 218 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__MarkTicketStackGoal_44;
#line 218 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__ResetTicketCommitGoal_45;
#line 218 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__PruneTicketsToGoal_46;
#line 218 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__ResetTicketUndoGoal_47;
#line 218 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__DiscardTicketGoal_48;
#line 218 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__FailGoal_49;
#line 218 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__Goal2_50;
#line 218 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__SuccCode_51;
#line 218 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__Goal3_55;
#line 218 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_134_134;
#line 218 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_135_135;
#line 218 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_137_137;
#line 218 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_138_138;
#line 218 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_140_140;
#line 218 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_141_141;
#line 218 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_142_142;
#line 218 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_155_155;
#line 218 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_156_156;
#line 218 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_157_157;
#line 218 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__Context_181;
#line 218 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__TicketVar_182;
#line 218 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__StoreTicketGoal_183;
#line 218 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__InnerGoal_184;

#line 218 "add_trail_ops.m"
                      {
#line 218 "add_trail_ops.m"
                        ml_backend__add_trail_ops__Context_181 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__add_trail_ops__GoalInfo0_7);
                      }
#line 219 "add_trail_ops.m"
                      {
#line 219 "add_trail_ops.m"
                        ml_backend__add_trail_ops__new_ticket_counter_var_3_p_0(&ml_backend__add_trail_ops__SavedTicketCounterVar_43, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, &ml_backend__add_trail_ops__STATE_VARIABLE_Info_134_134);
                      }
#line 220 "add_trail_ops.m"
                      {
#line 220 "add_trail_ops.m"
                        ml_backend__add_trail_ops__new_ticket_var_3_p_0(&ml_backend__add_trail_ops__TicketVar_182, ml_backend__add_trail_ops__STATE_VARIABLE_Info_134_134, &ml_backend__add_trail_ops__STATE_VARIABLE_Info_135_135);
                      }
#line 221 "add_trail_ops.m"
                      {
#line 221 "add_trail_ops.m"
                        ml_backend__add_trail_ops__gen_mark_ticket_stack_4_p_0(ml_backend__add_trail_ops__SavedTicketCounterVar_43, ml_backend__add_trail_ops__Context_181, &ml_backend__add_trail_ops__MarkTicketStackGoal_44, ml_backend__add_trail_ops__STATE_VARIABLE_Info_135_135);
                      }
#line 223 "add_trail_ops.m"
                      {
#line 223 "add_trail_ops.m"
                        ml_backend__add_trail_ops__gen_store_ticket_4_p_0(ml_backend__add_trail_ops__TicketVar_182, ml_backend__add_trail_ops__Context_181, &ml_backend__add_trail_ops__StoreTicketGoal_183, ml_backend__add_trail_ops__STATE_VARIABLE_Info_135_135);
                      }
#line 226 "add_trail_ops.m"
                      {
#line 226 "add_trail_ops.m"
                        ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(ml_backend__add_trail_ops__InnerGoal0_39, &ml_backend__add_trail_ops__InnerGoal_184, ml_backend__add_trail_ops__STATE_VARIABLE_Info_135_135, ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
#line 232 "add_trail_ops.m"
                      {
#line 232 "add_trail_ops.m"
                        ml_backend__add_trail_ops__gen_reset_ticket_commit_4_p_0(ml_backend__add_trail_ops__TicketVar_182, ml_backend__add_trail_ops__Context_181, &ml_backend__add_trail_ops__ResetTicketCommitGoal_45, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
#line 234 "add_trail_ops.m"
                      {
#line 234 "add_trail_ops.m"
                        ml_backend__add_trail_ops__gen_prune_tickets_to_4_p_0(ml_backend__add_trail_ops__SavedTicketCounterVar_43, ml_backend__add_trail_ops__Context_181, &ml_backend__add_trail_ops__PruneTicketsToGoal_46, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
#line 239 "add_trail_ops.m"
                      {
#line 239 "add_trail_ops.m"
                        ml_backend__add_trail_ops__gen_reset_ticket_undo_4_p_0(ml_backend__add_trail_ops__TicketVar_182, ml_backend__add_trail_ops__Context_181, &ml_backend__add_trail_ops__ResetTicketUndoGoal_47, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
#line 241 "add_trail_ops.m"
                      {
#line 241 "add_trail_ops.m"
                        ml_backend__add_trail_ops__gen_discard_ticket_3_p_0(ml_backend__add_trail_ops__Context_181, &ml_backend__add_trail_ops__DiscardTicketGoal_48, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
#line 242 "add_trail_ops.m"
                      {
#line 242 "add_trail_ops.m"
                        ml_backend__add_trail_ops__FailGoal_49 = hlds__make_goal__fail_goal_with_context_1_f_0(ml_backend__add_trail_ops__Context_181);
                      }
#line 245 "add_trail_ops.m"
                      {
#line 245 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_137_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 245 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_137_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 245 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_137_137, 1) = ((MR_Box) (ml_backend__add_trail_ops__Reason_38));
#line 245 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_137_137, 2) = ((MR_Box) (ml_backend__add_trail_ops__InnerGoal_184));
#line 245 "add_trail_ops.m"
                      }
#line 245 "add_trail_ops.m"
                      {
#line 245 "add_trail_ops.m"
                        ml_backend__add_trail_ops__Goal2_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 245 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal2_50, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_137_137));
#line 245 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal2_50, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
#line 245 "add_trail_ops.m"
                      }
#line 248 "add_trail_ops.m"
                      {
#line 248 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_142_142, 0) = ((MR_Box) (ml_backend__add_trail_ops__PruneTicketsToGoal_46));
#line 248 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 248 "add_trail_ops.m"
                      }
#line 248 "add_trail_ops.m"
                      {
#line 248 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_141_141, 0) = ((MR_Box) (ml_backend__add_trail_ops__ResetTicketCommitGoal_45));
#line 248 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_141_141, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_142_142));
#line 248 "add_trail_ops.m"
                      }
#line 248 "add_trail_ops.m"
                      {
#line 248 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_140_140, 0) = ((MR_Box) (ml_backend__add_trail_ops__Goal2_50));
#line 248 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_140_140, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_141_141));
#line 248 "add_trail_ops.m"
                      }
#line 247 "add_trail_ops.m"
                      {
#line 247 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_138_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 247 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_138_138, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 247 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_138_138, 1) = ((MR_Box) ((MR_Integer) 0));
#line 247 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_138_138, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_140_140));
#line 247 "add_trail_ops.m"
                      }
#line 246 "add_trail_ops.m"
                      {
#line 246 "add_trail_ops.m"
                        ml_backend__add_trail_ops__SuccCode_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 246 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__SuccCode_51, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_138_138));
#line 246 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__SuccCode_51, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
#line 246 "add_trail_ops.m"
                      }
#line 258 "add_trail_ops.m"
#line 258 "add_trail_ops.m"
                      switch (ml_backend__add_trail_ops__OuterCodeModel_42) {
#line 258 "add_trail_ops.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 258 "add_trail_ops.m"
                        case (MR_Integer) 0:
#line 258 "add_trail_ops.m"
                        case (MR_Integer) 2:
#line 262 "add_trail_ops.m"
                          ml_backend__add_trail_ops__Goal3_55 = ml_backend__add_trail_ops__SuccCode_51;
#line 258 "add_trail_ops.m"
                          break;
#line 258 "add_trail_ops.m"
                        case (MR_Integer) 1:
#line 251 "add_trail_ops.m"
                          {
#line 251 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__FailGoalInfo_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__FailGoal_49, (MR_Integer) 1)));
#line 251 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__FailCode_54;
#line 251 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_144_144;
#line 251 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_146_146;
#line 251 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_147_147;
#line 251 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_148_148;
#line 251 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_150_150;
#line 251 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_151_151;
#line 251 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_152_152;
#line 252 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__FailGoal_49, (MR_Integer) 0)));

#line 255 "add_trail_ops.m"
                            {
#line 255 "add_trail_ops.m"
                              ml_backend__add_trail_ops__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_148_148, 0) = ((MR_Box) (ml_backend__add_trail_ops__FailGoal_49));
#line 255 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_148_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 255 "add_trail_ops.m"
                            }
#line 255 "add_trail_ops.m"
                            {
#line 255 "add_trail_ops.m"
                              ml_backend__add_trail_ops__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_147_147, 0) = ((MR_Box) (ml_backend__add_trail_ops__DiscardTicketGoal_48));
#line 255 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_147_147, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_148_148));
#line 255 "add_trail_ops.m"
                            }
#line 255 "add_trail_ops.m"
                            {
#line 255 "add_trail_ops.m"
                              ml_backend__add_trail_ops__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_146_146, 0) = ((MR_Box) (ml_backend__add_trail_ops__ResetTicketUndoGoal_47));
#line 255 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_146_146, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_147_147));
#line 255 "add_trail_ops.m"
                            }
#line 254 "add_trail_ops.m"
                            {
#line 254 "add_trail_ops.m"
                              ml_backend__add_trail_ops__V_144_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 254 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_144_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 254 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_144_144, 1) = ((MR_Box) ((MR_Integer) 0));
#line 254 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_144_144, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_146_146));
#line 254 "add_trail_ops.m"
                            }
#line 253 "add_trail_ops.m"
                            {
#line 253 "add_trail_ops.m"
                              ml_backend__add_trail_ops__FailCode_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 253 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__FailCode_54, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_144_144));
#line 253 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__FailCode_54, 1) = ((MR_Box) (ml_backend__add_trail_ops__FailGoalInfo_53));
#line 253 "add_trail_ops.m"
                            }
#line 257 "add_trail_ops.m"
                            {
#line 257 "add_trail_ops.m"
                              ml_backend__add_trail_ops__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_152_152, 0) = ((MR_Box) (ml_backend__add_trail_ops__FailCode_54));
#line 257 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_152_152, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 257 "add_trail_ops.m"
                            }
#line 257 "add_trail_ops.m"
                            {
#line 257 "add_trail_ops.m"
                              ml_backend__add_trail_ops__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_151_151, 0) = ((MR_Box) (ml_backend__add_trail_ops__SuccCode_51));
#line 257 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_151_151, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_152_152));
#line 257 "add_trail_ops.m"
                            }
#line 257 "add_trail_ops.m"
                            {
#line 257 "add_trail_ops.m"
                              ml_backend__add_trail_ops__V_150_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_150_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 257 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_150_150, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_151_151));
#line 257 "add_trail_ops.m"
                            }
#line 257 "add_trail_ops.m"
                            {
#line 257 "add_trail_ops.m"
                              ml_backend__add_trail_ops__Goal3_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 257 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal3_55, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_150_150));
#line 257 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal3_55, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
#line 257 "add_trail_ops.m"
                            }
#line 251 "add_trail_ops.m"
                          }
#line 258 "add_trail_ops.m"
                          break;
#line 258 "add_trail_ops.m"
                      }
#line 265 "add_trail_ops.m"
                      {
#line 265 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_157_157, 0) = ((MR_Box) (ml_backend__add_trail_ops__Goal3_55));
#line 265 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_157_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 265 "add_trail_ops.m"
                      }
#line 265 "add_trail_ops.m"
                      {
#line 265 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_156_156, 0) = ((MR_Box) (ml_backend__add_trail_ops__StoreTicketGoal_183));
#line 265 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_156_156, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_157_157));
#line 265 "add_trail_ops.m"
                      }
#line 265 "add_trail_ops.m"
                      {
#line 265 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_155_155, 0) = ((MR_Box) (ml_backend__add_trail_ops__MarkTicketStackGoal_44));
#line 265 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_155_155, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_156_156));
#line 265 "add_trail_ops.m"
                      }
#line 265 "add_trail_ops.m"
                      {
#line 265 "add_trail_ops.m"
                        ml_backend__add_trail_ops__GoalExpr_191 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 265 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_191, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 265 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_191, 1) = ((MR_Box) ((MR_Integer) 0));
#line 265 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_191, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_155_155));
#line 265 "add_trail_ops.m"
                      }
#line 218 "add_trail_ops.m"
                    }
#line 266 "add_trail_ops.m"
                  else
#line 275 "add_trail_ops.m"
                    {
#line 267 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__FGT_57;
#line 267 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_56_56;

#line 267 "add_trail_ops.m"
                      ml_backend__add_trail_ops__succeeded = ((((MR_tag((MR_Word) ml_backend__add_trail_ops__Reason_38)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__Reason_38, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 267 "add_trail_ops.m"
                      if (ml_backend__add_trail_ops__succeeded)
#line 267 "add_trail_ops.m"
                        {
#line 267 "add_trail_ops.m"
                          ml_backend__add_trail_ops__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__Reason_38, (MR_Integer) 1)));
#line 267 "add_trail_ops.m"
                          ml_backend__add_trail_ops__FGT_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__Reason_38, (MR_Integer) 2)));
#line 269 "add_trail_ops.m"
#line 269 "add_trail_ops.m"
                          switch (ml_backend__add_trail_ops__FGT_57) {
#line 269 "add_trail_ops.m"
                            default:
#line 269 "add_trail_ops.m"
                              ml_backend__add_trail_ops__succeeded = MR_FALSE;
#line 269 "add_trail_ops.m"
                              break;
#line 269 "add_trail_ops.m"
                            case (MR_Integer) 1:
#line 268 "add_trail_ops.m"
                              ml_backend__add_trail_ops__succeeded = MR_TRUE;
#line 269 "add_trail_ops.m"
                              break;
#line 269 "add_trail_ops.m"
                            case (MR_Integer) 2:
#line 269 "add_trail_ops.m"
                              ml_backend__add_trail_ops__succeeded = MR_TRUE;
#line 269 "add_trail_ops.m"
                              break;
#line 269 "add_trail_ops.m"
                          }
#line 267 "add_trail_ops.m"
                        }
#line 275 "add_trail_ops.m"
                      if (ml_backend__add_trail_ops__succeeded)
#line 274 "add_trail_ops.m"
                        {
#line 274 "add_trail_ops.m"
                          ml_backend__add_trail_ops__GoalExpr_191 = ml_backend__add_trail_ops__GoalExpr0_6;
#line 274 "add_trail_ops.m"
                          *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103 = ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102;
#line 274 "add_trail_ops.m"
                        }
#line 275 "add_trail_ops.m"
                      else
#line 276 "add_trail_ops.m"
                        {
#line 276 "add_trail_ops.m"
                          MR_Word ml_backend__add_trail_ops__InnerGoal_185;

#line 276 "add_trail_ops.m"
                          {
#line 276 "add_trail_ops.m"
                            ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(ml_backend__add_trail_ops__InnerGoal0_39, &ml_backend__add_trail_ops__InnerGoal_185, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                          }
#line 277 "add_trail_ops.m"
                          {
#line 277 "add_trail_ops.m"
                            ml_backend__add_trail_ops__GoalExpr_191 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 277 "add_trail_ops.m"
                            MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_191, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 277 "add_trail_ops.m"
                            MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_191, 1) = ((MR_Box) (ml_backend__add_trail_ops__Reason_38));
#line 277 "add_trail_ops.m"
                            MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_191, 2) = ((MR_Box) (ml_backend__add_trail_ops__InnerGoal_185));
#line 277 "add_trail_ops.m"
                          }
#line 276 "add_trail_ops.m"
                        }
#line 275 "add_trail_ops.m"
                    }
#line 279 "add_trail_ops.m"
                  {
#line 279 "add_trail_ops.m"
                    MR_Word base;
#line 279 "add_trail_ops.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 279 "add_trail_ops.m"
                    *ml_backend__add_trail_ops__Goal_8 = base;
#line 279 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__GoalExpr_191));
#line 279 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
#line 279 "add_trail_ops.m"
                  }
#line 205 "add_trail_ops.m"
                }
#line 144 "add_trail_ops.m"
                break;
#line 144 "add_trail_ops.m"
              case (MR_Integer) 6:
#line 281 "add_trail_ops.m"
                {
#line 281 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__ExistQVars_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 1)));
#line 281 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__Cond0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 2)));
#line 281 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__Then0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 3)));
#line 281 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__Else0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr0_6, (MR_Integer) 4)));
#line 281 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__Cond_62;
#line 281 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__Then1_63;
#line 281 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__Else1_64;
#line 281 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__OptTrailUsage_65;
#line 281 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__CondGoalInfo_67;
#line 281 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__CondCodeModel_68;
#line 281 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_107_107;
#line 281 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_108_108;
#line 281 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_109_109;
#line 281 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__GoalExpr_212;
#line 288 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__V_223_223;
#line 288 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__V_224_224;
#line 288 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__V_225_225;
#line 288 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__V_226_226;
#line 289 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__V_66_66;
#line 292 "add_trail_ops.m"
                  MR_Word ml_backend__add_trail_ops__V_110_110;

#line 282 "add_trail_ops.m"
                  {
#line 282 "add_trail_ops.m"
                    ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(ml_backend__add_trail_ops__Cond0_59, &ml_backend__add_trail_ops__Cond_62, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_102, &ml_backend__add_trail_ops__STATE_VARIABLE_Info_107_107);
                  }
#line 283 "add_trail_ops.m"
                  {
#line 283 "add_trail_ops.m"
                    ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(ml_backend__add_trail_ops__Then0_60, &ml_backend__add_trail_ops__Then1_63, ml_backend__add_trail_ops__STATE_VARIABLE_Info_107_107, &ml_backend__add_trail_ops__STATE_VARIABLE_Info_108_108);
                  }
#line 284 "add_trail_ops.m"
                  {
#line 284 "add_trail_ops.m"
                    ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(ml_backend__add_trail_ops__Else0_61, &ml_backend__add_trail_ops__Else1_64, ml_backend__add_trail_ops__STATE_VARIABLE_Info_108_108, &ml_backend__add_trail_ops__STATE_VARIABLE_Info_109_109);
                  }
#line 288 "add_trail_ops.m"
                  ml_backend__add_trail_ops__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_109_109, (MR_Integer) 0)));
#line 288 "add_trail_ops.m"
                  ml_backend__add_trail_ops__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_109_109, (MR_Integer) 1)));
#line 288 "add_trail_ops.m"
                  ml_backend__add_trail_ops__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_109_109, (MR_Integer) 2)));
#line 288 "add_trail_ops.m"
                  ml_backend__add_trail_ops__OptTrailUsage_65 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_109_109, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 288 "add_trail_ops.m"
                  ml_backend__add_trail_ops__V_226_226 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__STATE_VARIABLE_Info_109_109, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 289 "add_trail_ops.m"
                  ml_backend__add_trail_ops__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Cond_62, (MR_Integer) 0)));
#line 289 "add_trail_ops.m"
                  ml_backend__add_trail_ops__CondGoalInfo_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Cond_62, (MR_Integer) 1)));
#line 290 "add_trail_ops.m"
                  {
#line 290 "add_trail_ops.m"
                    ml_backend__add_trail_ops__CondCodeModel_68 = hlds__code_model__goal_info_get_code_model_1_f_0(ml_backend__add_trail_ops__CondGoalInfo_67);
                  }
#line 292 "add_trail_ops.m"
                  ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__OptTrailUsage_65 == (MR_Integer) 1);
#line 292 "add_trail_ops.m"
                  if (ml_backend__add_trail_ops__succeeded)
#line 292 "add_trail_ops.m"
                    {
#line 293 "add_trail_ops.m"
                      ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__CondCodeModel_68 == (MR_Integer) 2);
#line 293 "add_trail_ops.m"
                      ml_backend__add_trail_ops__succeeded = !(ml_backend__add_trail_ops__succeeded);
#line 292 "add_trail_ops.m"
                      if (ml_backend__add_trail_ops__succeeded)
#line 292 "add_trail_ops.m"
                        {
#line 294 "add_trail_ops.m"
                          {
#line 294 "add_trail_ops.m"
                            ml_backend__add_trail_ops__V_110_110 = hlds__goal_form__goal_cannot_modify_trail_1_f_0(ml_backend__add_trail_ops__CondGoalInfo_67);
                          }
#line 294 "add_trail_ops.m"
                          ml_backend__add_trail_ops__succeeded = (ml_backend__add_trail_ops__V_110_110 == (MR_Integer) 1);
#line 292 "add_trail_ops.m"
                        }
#line 292 "add_trail_ops.m"
                    }
#line 297 "add_trail_ops.m"
                  if (ml_backend__add_trail_ops__succeeded)
#line 296 "add_trail_ops.m"
                    {
#line 296 "add_trail_ops.m"
                      {
#line 296 "add_trail_ops.m"
                        ml_backend__add_trail_ops__GoalExpr_212 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 296 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_212, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 296 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_212, 1) = ((MR_Box) (ml_backend__add_trail_ops__ExistQVars_58));
#line 296 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_212, 2) = ((MR_Box) (ml_backend__add_trail_ops__Cond_62));
#line 296 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_212, 3) = ((MR_Box) (ml_backend__add_trail_ops__Then1_63));
#line 296 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_212, 4) = ((MR_Box) (ml_backend__add_trail_ops__Else1_64));
#line 296 "add_trail_ops.m"
                      }
#line 296 "add_trail_ops.m"
                      *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103 = ml_backend__add_trail_ops__STATE_VARIABLE_Info_109_109;
#line 296 "add_trail_ops.m"
                    }
#line 297 "add_trail_ops.m"
                  else
#line 301 "add_trail_ops.m"
                    {
#line 301 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__Then1GoalInfo_70;
#line 301 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__Then_72;
#line 301 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__Else1GoalInfo_75;
#line 301 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__Else_76;
#line 301 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__IfThenElse_77;
#line 301 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_123_123;
#line 301 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_125_125;
#line 301 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_126_126;
#line 301 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_127_127;
#line 301 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_129_129;
#line 301 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_131_131;
#line 301 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_132_132;
#line 301 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__Context_200;
#line 301 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__TicketVar_201;
#line 301 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__StoreTicketGoal_202;
#line 301 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__ResetTicketUndoGoal_204;
#line 301 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__DiscardTicketGoal_205;
#line 306 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_69_69;
#line 329 "add_trail_ops.m"
                      MR_Word ml_backend__add_trail_ops__V_74_74;

#line 301 "add_trail_ops.m"
                      {
#line 301 "add_trail_ops.m"
                        ml_backend__add_trail_ops__new_ticket_var_3_p_0(&ml_backend__add_trail_ops__TicketVar_201, ml_backend__add_trail_ops__STATE_VARIABLE_Info_109_109, ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
#line 302 "add_trail_ops.m"
                      {
#line 302 "add_trail_ops.m"
                        ml_backend__add_trail_ops__Context_200 = hlds__hlds_goal__goal_info_get_context_1_f_0(ml_backend__add_trail_ops__GoalInfo0_7);
                      }
#line 303 "add_trail_ops.m"
                      {
#line 303 "add_trail_ops.m"
                        ml_backend__add_trail_ops__gen_store_ticket_4_p_0(ml_backend__add_trail_ops__TicketVar_201, ml_backend__add_trail_ops__Context_200, &ml_backend__add_trail_ops__StoreTicketGoal_202, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
#line 306 "add_trail_ops.m"
                      ml_backend__add_trail_ops__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Then1_63, (MR_Integer) 0)));
#line 306 "add_trail_ops.m"
                      ml_backend__add_trail_ops__Then1GoalInfo_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Then1_63, (MR_Integer) 1)));
#line 314 "add_trail_ops.m"
#line 314 "add_trail_ops.m"
                      switch (ml_backend__add_trail_ops__CondCodeModel_68) {
#line 314 "add_trail_ops.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 314 "add_trail_ops.m"
                        case (MR_Integer) 0:
#line 314 "add_trail_ops.m"
                        case (MR_Integer) 1:
#line 317 "add_trail_ops.m"
                          {
#line 317 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__PruneTicketGoal_73;
#line 317 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_112_112;
#line 317 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_114_114;
#line 317 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_115_115;
#line 317 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_116_116;
#line 317 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__ResetTicketCommitGoal_198;

#line 318 "add_trail_ops.m"
                            {
#line 318 "add_trail_ops.m"
                              ml_backend__add_trail_ops__gen_reset_ticket_commit_4_p_0(ml_backend__add_trail_ops__TicketVar_201, ml_backend__add_trail_ops__Context_200, &ml_backend__add_trail_ops__ResetTicketCommitGoal_198, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                            }
#line 320 "add_trail_ops.m"
                            {
#line 320 "add_trail_ops.m"
                              ml_backend__add_trail_ops__gen_prune_ticket_3_p_0(ml_backend__add_trail_ops__Context_200, &ml_backend__add_trail_ops__PruneTicketGoal_73, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                            }
#line 323 "add_trail_ops.m"
                            {
#line 323 "add_trail_ops.m"
                              ml_backend__add_trail_ops__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_116_116, 0) = ((MR_Box) (ml_backend__add_trail_ops__Then1_63));
#line 323 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 323 "add_trail_ops.m"
                            }
#line 323 "add_trail_ops.m"
                            {
#line 323 "add_trail_ops.m"
                              ml_backend__add_trail_ops__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_115_115, 0) = ((MR_Box) (ml_backend__add_trail_ops__PruneTicketGoal_73));
#line 323 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_115_115, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_116_116));
#line 323 "add_trail_ops.m"
                            }
#line 323 "add_trail_ops.m"
                            {
#line 323 "add_trail_ops.m"
                              ml_backend__add_trail_ops__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_114_114, 0) = ((MR_Box) (ml_backend__add_trail_ops__ResetTicketCommitGoal_198));
#line 323 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_114_114, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_115_115));
#line 323 "add_trail_ops.m"
                            }
#line 322 "add_trail_ops.m"
                            {
#line 322 "add_trail_ops.m"
                              ml_backend__add_trail_ops__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 322 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 322 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_112_112, 1) = ((MR_Box) ((MR_Integer) 0));
#line 322 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_112_112, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_114_114));
#line 322 "add_trail_ops.m"
                            }
#line 321 "add_trail_ops.m"
                            {
#line 321 "add_trail_ops.m"
                              ml_backend__add_trail_ops__Then_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 321 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Then_72, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_112_112));
#line 321 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Then_72, 1) = ((MR_Box) (ml_backend__add_trail_ops__Then1GoalInfo_70));
#line 321 "add_trail_ops.m"
                            }
#line 317 "add_trail_ops.m"
                          }
#line 314 "add_trail_ops.m"
                          break;
#line 314 "add_trail_ops.m"
                        case (MR_Integer) 2:
#line 308 "add_trail_ops.m"
                          {
#line 308 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__ResetTicketSolveGoal_71;
#line 308 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_118_118;
#line 308 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_120_120;
#line 308 "add_trail_ops.m"
                            MR_Word ml_backend__add_trail_ops__V_121_121;

#line 309 "add_trail_ops.m"
                            {
#line 309 "add_trail_ops.m"
                              ml_backend__add_trail_ops__gen_reset_ticket_solve_4_p_0(ml_backend__add_trail_ops__TicketVar_201, ml_backend__add_trail_ops__Context_200, &ml_backend__add_trail_ops__ResetTicketSolveGoal_71, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                            }
#line 312 "add_trail_ops.m"
                            {
#line 312 "add_trail_ops.m"
                              ml_backend__add_trail_ops__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_121_121, 0) = ((MR_Box) (ml_backend__add_trail_ops__Then1_63));
#line 312 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 312 "add_trail_ops.m"
                            }
#line 312 "add_trail_ops.m"
                            {
#line 312 "add_trail_ops.m"
                              ml_backend__add_trail_ops__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_120_120, 0) = ((MR_Box) (ml_backend__add_trail_ops__ResetTicketSolveGoal_71));
#line 312 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_120_120, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_121_121));
#line 312 "add_trail_ops.m"
                            }
#line 312 "add_trail_ops.m"
                            {
#line 312 "add_trail_ops.m"
                              ml_backend__add_trail_ops__V_118_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 312 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_118_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 312 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_118_118, 1) = ((MR_Box) ((MR_Integer) 0));
#line 312 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_118_118, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_120_120));
#line 312 "add_trail_ops.m"
                            }
#line 311 "add_trail_ops.m"
                            {
#line 311 "add_trail_ops.m"
                              ml_backend__add_trail_ops__Then_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 311 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Then_72, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_118_118));
#line 311 "add_trail_ops.m"
                              MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Then_72, 1) = ((MR_Box) (ml_backend__add_trail_ops__Then1GoalInfo_70));
#line 311 "add_trail_ops.m"
                            }
#line 308 "add_trail_ops.m"
                          }
#line 314 "add_trail_ops.m"
                          break;
#line 314 "add_trail_ops.m"
                      }
#line 326 "add_trail_ops.m"
                      {
#line 326 "add_trail_ops.m"
                        ml_backend__add_trail_ops__gen_reset_ticket_undo_4_p_0(ml_backend__add_trail_ops__TicketVar_201, ml_backend__add_trail_ops__Context_200, &ml_backend__add_trail_ops__ResetTicketUndoGoal_204, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
#line 328 "add_trail_ops.m"
                      {
#line 328 "add_trail_ops.m"
                        ml_backend__add_trail_ops__gen_discard_ticket_3_p_0(ml_backend__add_trail_ops__Context_200, &ml_backend__add_trail_ops__DiscardTicketGoal_205, *ml_backend__add_trail_ops__STATE_VARIABLE_Info_103);
                      }
#line 329 "add_trail_ops.m"
                      ml_backend__add_trail_ops__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Else1_64, (MR_Integer) 0)));
#line 329 "add_trail_ops.m"
                      ml_backend__add_trail_ops__Else1GoalInfo_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Else1_64, (MR_Integer) 1)));
#line 332 "add_trail_ops.m"
                      {
#line 332 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_127_127, 0) = ((MR_Box) (ml_backend__add_trail_ops__Else1_64));
#line 332 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 332 "add_trail_ops.m"
                      }
#line 332 "add_trail_ops.m"
                      {
#line 332 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_126_126, 0) = ((MR_Box) (ml_backend__add_trail_ops__DiscardTicketGoal_205));
#line 332 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_126_126, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_127_127));
#line 332 "add_trail_ops.m"
                      }
#line 332 "add_trail_ops.m"
                      {
#line 332 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_125_125, 0) = ((MR_Box) (ml_backend__add_trail_ops__ResetTicketUndoGoal_204));
#line 332 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_125_125, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_126_126));
#line 332 "add_trail_ops.m"
                      }
#line 331 "add_trail_ops.m"
                      {
#line 331 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_123_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 331 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_123_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 331 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_123_123, 1) = ((MR_Box) ((MR_Integer) 0));
#line 331 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_123_123, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_125_125));
#line 331 "add_trail_ops.m"
                      }
#line 330 "add_trail_ops.m"
                      {
#line 330 "add_trail_ops.m"
                        ml_backend__add_trail_ops__Else_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 330 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Else_76, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_123_123));
#line 330 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Else_76, 1) = ((MR_Box) (ml_backend__add_trail_ops__Else1GoalInfo_75));
#line 330 "add_trail_ops.m"
                      }
#line 335 "add_trail_ops.m"
                      {
#line 335 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_129_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 335 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_129_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 335 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_129_129, 1) = ((MR_Box) (ml_backend__add_trail_ops__ExistQVars_58));
#line 335 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_129_129, 2) = ((MR_Box) (ml_backend__add_trail_ops__Cond_62));
#line 335 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_129_129, 3) = ((MR_Box) (ml_backend__add_trail_ops__Then_72));
#line 335 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__V_129_129, 4) = ((MR_Box) (ml_backend__add_trail_ops__Else_76));
#line 335 "add_trail_ops.m"
                      }
#line 334 "add_trail_ops.m"
                      {
#line 334 "add_trail_ops.m"
                        ml_backend__add_trail_ops__IfThenElse_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 334 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__IfThenElse_77, 0) = ((MR_Box) (ml_backend__add_trail_ops__V_129_129));
#line 334 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__IfThenElse_77, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
#line 334 "add_trail_ops.m"
                      }
#line 337 "add_trail_ops.m"
                      {
#line 337 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_132_132, 0) = ((MR_Box) (ml_backend__add_trail_ops__IfThenElse_77));
#line 337 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 337 "add_trail_ops.m"
                      }
#line 337 "add_trail_ops.m"
                      {
#line 337 "add_trail_ops.m"
                        ml_backend__add_trail_ops__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_131_131, 0) = ((MR_Box) (ml_backend__add_trail_ops__StoreTicketGoal_202));
#line 337 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(1), ml_backend__add_trail_ops__V_131_131, 1) = ((MR_Box) (ml_backend__add_trail_ops__V_132_132));
#line 337 "add_trail_ops.m"
                      }
#line 337 "add_trail_ops.m"
                      {
#line 337 "add_trail_ops.m"
                        ml_backend__add_trail_ops__GoalExpr_212 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 337 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_212, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 337 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_212, 1) = ((MR_Box) ((MR_Integer) 0));
#line 337 "add_trail_ops.m"
                        MR_hl_field(MR_mktag(3), ml_backend__add_trail_ops__GoalExpr_212, 2) = ((MR_Box) (ml_backend__add_trail_ops__V_131_131));
#line 337 "add_trail_ops.m"
                      }
#line 301 "add_trail_ops.m"
                    }
#line 339 "add_trail_ops.m"
                  {
#line 339 "add_trail_ops.m"
                    MR_Word base;
#line 339 "add_trail_ops.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 339 "add_trail_ops.m"
                    *ml_backend__add_trail_ops__Goal_8 = base;
#line 339 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__add_trail_ops__GoalExpr_212));
#line 339 "add_trail_ops.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__add_trail_ops__GoalInfo0_7));
#line 339 "add_trail_ops.m"
                  }
#line 281 "add_trail_ops.m"
                }
#line 144 "add_trail_ops.m"
                break;
#line 144 "add_trail_ops.m"
              case (MR_Integer) 7:
#line 350 "add_trail_ops.m"
                {
#line 352 "add_trail_ops.m"
                  {
#line 352 "add_trail_ops.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.add_trail_ops", (MR_String) "predicate \140ml_backend.add_trail_ops.goal_expr_add_trail_ops\'/5", (MR_String) "shorthand");
#line 352 "add_trail_ops.m"
                    return;
                  }
#line 350 "add_trail_ops.m"
                }
#line 144 "add_trail_ops.m"
                break;
#line 144 "add_trail_ops.m"
            }
#line 144 "add_trail_ops.m"
            break;
#line 144 "add_trail_ops.m"
        }
#line 144 "add_trail_ops.m"
      }
#line 144 "add_trail_ops.m"
      break;
#line 144 "add_trail_ops.m"
    }
#line 139 "add_trail_ops.m"
}

#line 132 "add_trail_ops.m"
static void MR_CALL 
ml_backend__add_trail_ops__goal_add_trail_ops_4_p_0(
#line 132 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__Goal0_5,
#line 132 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__Goal_6,
#line 132 "add_trail_ops.m"
  MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_10,
#line 132 "add_trail_ops.m"
  MR_Word * ml_backend__add_trail_ops__STATE_VARIABLE_Info_11)
#line 132 "add_trail_ops.m"
{
#line 135 "add_trail_ops.m"
  {
#line 135 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 135 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal0_5, (MR_Integer) 0)));
#line 135 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal0_5, (MR_Integer) 1)));

#line 137 "add_trail_ops.m"
    {
#line 137 "add_trail_ops.m"
      ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_p_0(ml_backend__add_trail_ops__GoalExpr0_8, ml_backend__add_trail_ops__GoalInfo_9, ml_backend__add_trail_ops__Goal_6, ml_backend__add_trail_ops__STATE_VARIABLE_Info_0_10, ml_backend__add_trail_ops__STATE_VARIABLE_Info_11);
#line 137 "add_trail_ops.m"
      return;
    }
#line 135 "add_trail_ops.m"
  }
#line 132 "add_trail_ops.m"
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
#line 115 "add_trail_ops.m"
  {
#line 115 "add_trail_ops.m"
    MR_bool ml_backend__add_trail_ops__succeeded;
#line 115 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__Goal0_10;
#line 115 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__VarSet0_11;
#line 115 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__VarTypes0_12;
#line 115 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__TrailOpsInfo0_13;
#line 115 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__Goal_14;
#line 115 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__TrailOpsInfo_15;
#line 115 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__VarSet_16;
#line 115 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__VarTypes_17;
#line 115 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Proc_23_23;
#line 115 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Proc_24_24;
#line 115 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__STATE_VARIABLE_Proc_25_25;
#line 115 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__GoalExpr0_33;
#line 115 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__GoalInfo_34;
#line 122 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_18_18;
#line 122 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_19_19;
#line 122 "add_trail_ops.m"
    MR_Word ml_backend__add_trail_ops__V_20_20;

#line 116 "add_trail_ops.m"
    {
#line 116 "add_trail_ops.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ml_backend__add_trail_ops__STATE_VARIABLE_Proc_0_21, &ml_backend__add_trail_ops__Goal0_10);
    }
#line 117 "add_trail_ops.m"
    {
#line 117 "add_trail_ops.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ml_backend__add_trail_ops__STATE_VARIABLE_Proc_0_21, &ml_backend__add_trail_ops__VarSet0_11);
    }
#line 118 "add_trail_ops.m"
    {
#line 118 "add_trail_ops.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ml_backend__add_trail_ops__STATE_VARIABLE_Proc_0_21, &ml_backend__add_trail_ops__VarTypes0_12);
    }
#line 119 "add_trail_ops.m"
    {
#line 119 "add_trail_ops.m"
      ml_backend__add_trail_ops__TrailOpsInfo0_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 119 "add_trail_ops.m"
      MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__TrailOpsInfo0_13, 0) = ((MR_Box) (ml_backend__add_trail_ops__VarSet0_11));
#line 119 "add_trail_ops.m"
      MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__TrailOpsInfo0_13, 1) = ((MR_Box) (ml_backend__add_trail_ops__VarTypes0_12));
#line 119 "add_trail_ops.m"
      MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__TrailOpsInfo0_13, 2) = ((MR_Box) (ml_backend__add_trail_ops__ModuleInfo0_8));
#line 119 "add_trail_ops.m"
      MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__TrailOpsInfo0_13, 3) = ((MR_Box) ((ml_backend__add_trail_ops__OptTrailUsage_6 | ((ml_backend__add_trail_ops__GenerateInline_7 << (MR_Integer) 1)))));
#line 119 "add_trail_ops.m"
    }
#line 136 "add_trail_ops.m"
    ml_backend__add_trail_ops__GoalExpr0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal0_10, (MR_Integer) 0)));
#line 136 "add_trail_ops.m"
    ml_backend__add_trail_ops__GoalInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__Goal0_10, (MR_Integer) 1)));
#line 137 "add_trail_ops.m"
    {
#line 137 "add_trail_ops.m"
      ml_backend__add_trail_ops__goal_expr_add_trail_ops_5_p_0(ml_backend__add_trail_ops__GoalExpr0_33, ml_backend__add_trail_ops__GoalInfo_34, &ml_backend__add_trail_ops__Goal_14, ml_backend__add_trail_ops__TrailOpsInfo0_13, &ml_backend__add_trail_ops__TrailOpsInfo_15);
    }
#line 122 "add_trail_ops.m"
    ml_backend__add_trail_ops__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__TrailOpsInfo_15, (MR_Integer) 0)));
#line 122 "add_trail_ops.m"
    ml_backend__add_trail_ops__VarTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__TrailOpsInfo_15, (MR_Integer) 1)));
#line 122 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__TrailOpsInfo_15, (MR_Integer) 2)));
#line 122 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__TrailOpsInfo_15, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 122 "add_trail_ops.m"
    ml_backend__add_trail_ops__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__add_trail_ops__TrailOpsInfo_15, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 123 "add_trail_ops.m"
    {
#line 123 "add_trail_ops.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(ml_backend__add_trail_ops__Goal_14, ml_backend__add_trail_ops__STATE_VARIABLE_Proc_0_21, &ml_backend__add_trail_ops__STATE_VARIABLE_Proc_23_23);
    }
#line 124 "add_trail_ops.m"
    {
#line 124 "add_trail_ops.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(ml_backend__add_trail_ops__VarSet_16, ml_backend__add_trail_ops__STATE_VARIABLE_Proc_23_23, &ml_backend__add_trail_ops__STATE_VARIABLE_Proc_24_24);
    }
#line 125 "add_trail_ops.m"
    {
#line 125 "add_trail_ops.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(ml_backend__add_trail_ops__VarTypes_17, ml_backend__add_trail_ops__STATE_VARIABLE_Proc_24_24, &ml_backend__add_trail_ops__STATE_VARIABLE_Proc_25_25);
    }
#line 130 "add_trail_ops.m"
    {
#line 130 "add_trail_ops.m"
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, ml_backend__add_trail_ops__STATE_VARIABLE_Proc_25_25, ml_backend__add_trail_ops__STATE_VARIABLE_Proc_22);
#line 130 "add_trail_ops.m"
      return;
    }
#line 115 "add_trail_ops.m"
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
