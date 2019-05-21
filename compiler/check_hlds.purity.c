/*
** Automatically generated from `purity.m'
** by the Mercury compiler,
** version rotd-2017-07-26
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


/* :- module check_hlds.purity. */
/* :- implementation. */

/*
INIT mercury__check_hlds__purity__init
ENDINIT
*/

#include "check_hlds.purity.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.check_promise.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.resolve_unify_functor.mih"
#include "hlds.const_struct.mih"
#include "hlds.from_ground_term_util.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__purity__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0;

static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_0;

static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_1;

static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_value_ordered_converted_unify_0[2];

static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_converted_unify_0[2];

static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_converted_unify_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__purity__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__purity__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__purity__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__purity__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo check_hlds__purity__check_hlds__purity__field_types_purity_info_0_0[8];

static const MR_ConstString check_hlds__purity__check_hlds__purity__field_names_purity_info_0_0[8];

static const MR_DuFunctorDesc check_hlds__purity__check_hlds__purity__du_functor_desc_purity_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__purity__check_hlds__purity__du_stag_ordered_purity_info_0_0[1];

static const MR_DuPtagLayout check_hlds__purity__check_hlds__purity__du_ptag_ordered_purity_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__purity__check_hlds__purity__du_name_ordered_purity_info_0[1];

static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_purity_info_0[1];

static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_0;

static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_1;

static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_value_ordered_run_post_typecheck_0[2];

static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_run_post_typecheck_0[2];

static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_run_post_typecheck_0[2];

static void MR_CALL 
check_hlds__purity____Compare____run_post_typecheck_0_0(
  MR_Word * check_hlds__purity__HeadVar__1_1,
  MR_Word check_hlds__purity__HeadVar__2_2,
  MR_Word check_hlds__purity__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__purity____Unify____run_post_typecheck_0_0(
  MR_Word check_hlds__purity__HeadVar__2_1,
  MR_Word check_hlds__purity__HeadVar__2_2);

static void MR_CALL 
check_hlds__purity____Compare____purity_info_0_0(
  MR_Word * check_hlds__purity__HeadVar__1_1,
  MR_Word check_hlds__purity__HeadVar__2_2,
  MR_Word check_hlds__purity__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_info_0_0(
  MR_Word check_hlds__purity__HeadVar__1_1,
  MR_Word check_hlds__purity__HeadVar__2_2);

static void MR_CALL 
check_hlds__purity____Compare____converted_unify_0_0(
  MR_Word * check_hlds__purity__HeadVar__1_1,
  MR_Word check_hlds__purity__HeadVar__2_2,
  MR_Word check_hlds__purity__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__purity____Unify____converted_unify_0_0(
  MR_Word check_hlds__purity__HeadVar__2_1,
  MR_Word check_hlds__purity__HeadVar__2_2);

static void MR_CALL 
check_hlds__purity__wrap_inner_outer_goals_5_p_0(
  MR_Word check_hlds__purity__Outer_6,
  MR_Word check_hlds__purity__HeadVar__2_2,
  MR_Word * check_hlds__purity__Goal_9,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_30,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_31);

static MR_bool MR_CALL 
check_hlds__purity____Unify____list__list_1_1(
  MR_Word check_hlds__purity__TypeInfo_for_T_11,
  MR_Word check_hlds__purity__HeadVar__1_1,
  MR_Word check_hlds__purity__HeadVar__2_2);

static void MR_CALL 
check_hlds__purity__check_preds_purity_5_p_0(
  MR_Word check_hlds__purity__HeadVar__1_1,
  MR_Word check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * check_hlds__purity__STATE_VARIABLE_ModuleInfo_3,
  MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0_4,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Specs_5);

static void MR_CALL 
check_hlds__purity__compute_purity_for_clauses_7_p_0(
  MR_Word check_hlds__purity__HeadVar__1_1,
  MR_Word * check_hlds__purity__HeadVar__2_2,
  MR_Word check_hlds__purity__PredInfo_3,
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_4,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_5,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_7);

static void MR_CALL 
check_hlds__purity__LCMCpr_compute_purity_for_clauses_1_7_p_0(
  MR_Word check_hlds__purity__HeadVar__1_1,
  MR_Word * check_hlds__purity__AddrOfHeadVar__2_32,
  MR_Word check_hlds__purity__PredInfo_3,
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_4,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_5,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_7);

static void MR_CALL 
check_hlds__purity__compute_purity_for_clause_6_p_0(
  MR_Word check_hlds__purity__Clause0_7,
  MR_Word * check_hlds__purity__Clause_8,
  MR_Word check_hlds__purity__PredInfo_9,
  MR_Word * check_hlds__purity__Purity_10,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_35,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_36);

static void MR_CALL 
check_hlds__purity__LCMCpr_compute_goal_purity_1_6_p_0(
  MR_Word check_hlds__purity__Goal0_7,
  MR_Word * check_hlds__purity__AddrOfGoal_29,
  MR_Word * check_hlds__purity__Purity_9,
  MR_Word * check_hlds__purity__ContainsTrace_10,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_16,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_17);

static void MR_CALL 
check_hlds__purity__LCMCpr_compute_parallel_goals_purity_1_8_p_0(
  MR_Word check_hlds__purity__HeadVar__1_1,
  MR_Word * check_hlds__purity__AddrOfHeadVar__2_90,
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8);

static void MR_CALL 
check_hlds__purity__LCMCpr_compute_cases_purity_1_8_p_0(
  MR_Word check_hlds__purity__HeadVar__1_1,
  MR_Word * check_hlds__purity__AddrOfHeadVar__2_66,
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8);

static void MR_CALL 
check_hlds__purity__LCMCpr_compute_goals_purity_1_8_p_0(
  MR_Word check_hlds__purity__HeadVar__1_1,
  MR_Word * check_hlds__purity__AddrOfHeadVar__2_63,
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8);

static void MR_CALL 
check_hlds__purity__compute_goal_purity_in_fgt_ptc_11_p_0(
  MR_Word check_hlds__purity__HeadVar__1_1,
  MR_Word check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_0_2,
  MR_Word * check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_3,
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_4,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_5,
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6,
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_7,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_8,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_9,
  MR_Word check_hlds__purity__STATE_VARIABLE_Invariants_0_10,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Invariants_11);

static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_3(
  MR_Box check_hlds__purity__closure_arg,
  MR_Box check_hlds__purity__wrapper_arg_1,
  MR_Box check_hlds__purity__wrapper_arg_2,
  MR_Box * check_hlds__purity__wrapper_arg_3);

static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_2(
  MR_Box check_hlds__purity__closure_arg,
  MR_Box check_hlds__purity__wrapper_arg_1,
  MR_Box * check_hlds__purity__wrapper_arg_2,
  MR_Box check_hlds__purity__wrapper_arg_3,
  MR_Box * check_hlds__purity__wrapper_arg_4);

static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_1(
  MR_Box check_hlds__purity__closure_arg,
  MR_Box check_hlds__purity__wrapper_arg_1,
  MR_Box * check_hlds__purity__wrapper_arg_2);

static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0(
  MR_Word check_hlds__purity__GoalExpr0_8,
  MR_Word * check_hlds__purity__GoalExpr_9,
  MR_Word check_hlds__purity__GoalInfo_10,
  MR_Word * check_hlds__purity__Purity_11,
  MR_Word * check_hlds__purity__ContainsTrace_12,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_195,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_196);

static void MR_CALL 
check_hlds__purity__compute_parallel_goals_purity_8_p_0(
  MR_Word check_hlds__purity__HeadVar__1_1,
  MR_Word * check_hlds__purity__HeadVar__2_2,
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8);

static void MR_CALL 
check_hlds__purity__compute_goals_purity_8_p_0(
  MR_Word check_hlds__purity__HeadVar__1_1,
  MR_Word * check_hlds__purity__HeadVar__2_2,
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8);

static void MR_CALL 
check_hlds__purity__compute_goal_purity_6_p_0(
  MR_Word check_hlds__purity__Goal0_7,
  MR_Word * check_hlds__purity__Goal_8,
  MR_Word * check_hlds__purity__Purity_9,
  MR_Word * check_hlds__purity__ContainsTrace_10,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_16,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_17);

static MR_Word MR_CALL 
check_hlds__purity__mismatched_outer_var_types_1_f_0(
  MR_Word check_hlds__purity__Context_3);

static void MR_CALL 
check_hlds__purity__check_outer_var_type_6_p_0(
  MR_Word check_hlds__purity__Context_7,
  MR_Word check_hlds__purity__VarTypes_8,
  MR_Word check_hlds__purity__VarSet_9,
  MR_Word check_hlds__purity__Var_10,
  MR_Word * check_hlds__purity__VarType_11,
  MR_Word * check_hlds__purity__Specs_12);

static void MR_CALL 
check_hlds__purity__perform_goal_purity_checks_6_p_0(
  MR_Word check_hlds__purity__Context_7,
  MR_Word check_hlds__purity__PredId_8,
  MR_Word check_hlds__purity__DeclaredPurity_9,
  MR_Word * check_hlds__purity__ActualPurity_10,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_17,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_18);

static MR_Word MR_CALL 
check_hlds__purity__warn_unnecessary_body_impurity_decl_4_f_0(
  MR_Word check_hlds__purity__ModuleInfo_6,
  MR_Word check_hlds__purity__PredId_7,
  MR_Word check_hlds__purity__Context_8,
  MR_Word check_hlds__purity__DeclaredPurity_9);

static MR_Word MR_CALL 
check_hlds__purity__error_missing_body_impurity_decl_3_f_0(
  MR_Word check_hlds__purity__ModuleInfo_5,
  MR_Word check_hlds__purity__PredId_6,
  MR_Word check_hlds__purity__Context_7);

static void MR_CALL 
check_hlds__purity__compute_goal_purity_in_fgt_no_ptc_4_p_0(
  MR_Word check_hlds__purity__HeadVar__1_1,
  MR_Word check_hlds__purity__Info_2,
  MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0_3,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Specs_4);

static void MR_CALL 
check_hlds__purity__purity_info_add_messages_3_p_0(
  MR_Word check_hlds__purity__Specs_4,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_10,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_11);

static void MR_CALL 
check_hlds__purity__check_var_functor_unify_purity_6_p_0(
  MR_Word check_hlds__purity__Info_7,
  MR_Word check_hlds__purity__GoalInfo_8,
  MR_Word check_hlds__purity__Var_9,
  MR_Word check_hlds__purity__ConsId_10,
  MR_Word check_hlds__purity__Args_11,
  MR_Word * check_hlds__purity__Specs_12);

static void MR_CALL 
check_hlds__purity__check_closure_purity_4_p_0(
  MR_Word check_hlds__purity__GoalInfo_5,
  MR_Word check_hlds__purity__DeclaredPurity_6,
  MR_Word check_hlds__purity__ActualPurity_7,
  MR_Word * check_hlds__purity__Specs_8);

static void MR_CALL 
check_hlds__purity__finally_resolve_pred_overloading_8_p_0(
  MR_Word check_hlds__purity__ModuleInfo_9,
  MR_Word check_hlds__purity__CallerPredInfo_10,
  MR_Word check_hlds__purity__PredId0_11,
  MR_Word check_hlds__purity__PredName0_12,
  MR_Word check_hlds__purity__Args0_13,
  MR_Word check_hlds__purity__Context_14,
  MR_Word * check_hlds__purity__PredId_15,
  MR_Word * check_hlds__purity__PredName_16);

static void MR_CALL 
check_hlds__purity__purity_info_add_message_3_p_0(
  MR_Word check_hlds__purity__Spec_4,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_8,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_9);

static void MR_CALL 
check_hlds__purity__update_purity_ct_in_goal_info_4_p_0(
  MR_Word check_hlds__purity__Purity_5,
  MR_Word check_hlds__purity__ContainsTrace_6,
  MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_0_8,
  MR_Word * check_hlds__purity__STATE_VARIABLE_GoalInfo_9);

static MR_bool MR_CALL 
check_hlds__purity__applies_to_all_modes_2_p_0(
  MR_Word check_hlds__purity__Clause_3,
  MR_Word check_hlds__purity__AllProcIds_4);

static void MR_CALL 
check_hlds__purity__perform_pred_purity_checks_7_p_0(
  MR_Word check_hlds__purity__ModuleInfo_8,
  MR_Word check_hlds__purity__PredId_9,
  MR_Word check_hlds__purity__PredInfo_10,
  MR_Word check_hlds__purity__ActualPurity_11,
  MR_Word check_hlds__purity__DeclaredPurity_12,
  MR_Word check_hlds__purity__MaybePromisedPurity_13,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Specs_29);

static MR_Word MR_CALL 
check_hlds__purity__error_not_pure_enough_4_f_0(
  MR_Word check_hlds__purity__ModuleInfo_6,
  MR_Word check_hlds__purity__PredInfo_7,
  MR_Word check_hlds__purity__PredId_8,
  MR_Word check_hlds__purity__Purity_9);

static MR_Word MR_CALL 
check_hlds__purity__warn_unnecessary_purity_promise_4_f_0(
  MR_Word check_hlds__purity__ModuleInfo_6,
  MR_Word check_hlds__purity__PredInfo_7,
  MR_Word check_hlds__purity__PredId_8,
  MR_Word check_hlds__purity__PromisedPurity_9);

static MR_Word MR_CALL 
check_hlds__purity__error_inconsistent_purity_promise_4_f_0(
  MR_Word check_hlds__purity__ModuleInfo_6,
  MR_Word check_hlds__purity__PredInfo_7,
  MR_Word check_hlds__purity__PredId_8,
  MR_Word check_hlds__purity__Purity_9);

static MR_bool MR_CALL 
check_hlds__purity____Unify____converted_unify_0_0_10001(
  MR_Box check_hlds__purity__wrapper_arg_1,
  MR_Box check_hlds__purity__wrapper_arg_2);

static void MR_CALL 
check_hlds__purity____Compare____converted_unify_0_0_10001(
  MR_Box * check_hlds__purity__wrapper_arg_1,
  MR_Box check_hlds__purity__wrapper_arg_2,
  MR_Box check_hlds__purity__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_info_0_0_10001(
  MR_Box check_hlds__purity__wrapper_arg_1,
  MR_Box check_hlds__purity__wrapper_arg_2);

static void MR_CALL 
check_hlds__purity____Compare____purity_info_0_0_10001(
  MR_Box * check_hlds__purity__wrapper_arg_1,
  MR_Box check_hlds__purity__wrapper_arg_2,
  MR_Box check_hlds__purity__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__purity____Unify____run_post_typecheck_0_0_10001(
  MR_Box check_hlds__purity__wrapper_arg_1,
  MR_Box check_hlds__purity__wrapper_arg_2);

static void MR_CALL 
check_hlds__purity____Compare____run_post_typecheck_0_0_10001(
  MR_Box * check_hlds__purity__wrapper_arg_1,
  MR_Box check_hlds__purity__wrapper_arg_2,
  MR_Box check_hlds__purity__wrapper_arg_3);


static /* final */ const MR_Box check_hlds__purity_scalar_common_1[6][3];

static /* final */ const MR_Box check_hlds__purity_scalar_common_2[66][2];

static /* final */ const MR_Box check_hlds__purity_scalar_common_3[2][1];

static /* final */ const MR_Box check_hlds__purity_scalar_common_4[1][5];

static /* final */ const MR_Box check_hlds__purity_scalar_common_5[1][8];

static /* final */ const MR_Box check_hlds__purity_scalar_common_6[1][6];




static /* final */ const MR_Box check_hlds__purity_scalar_common_1[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__purity_scalar_common_2[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__purity_scalar_common_4[0])),
    ((MR_Box) (check_hlds__purity__compute_expr_purity_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__purity_scalar_common_6[0])),
    ((MR_Box) (check_hlds__purity__compute_expr_purity_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__purity_scalar_common_2[66][2] = {
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
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "no impurity declaration."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should be promised pure and should have"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "that invokes impure or semipure code"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "pragma."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[4])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[4])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "indicator."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[4])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is sufficient."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[4])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "No purity indicator is necessary."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[4])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: declared"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but promised pure."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "A pure"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning: unnecessary"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "This"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not invoke any"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "code,"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "so there is no need for a"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "purity error:"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It must be pure."))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It must be declared"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or promised"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning: declared"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but actually"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Purity error: unification with expression"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "was declared"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but expression was not a function call."))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Purity error in closure: closure body is"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but closure was not declared"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In call to "))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "purity error: call must be in"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "an explicit unification which is preceded by"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "purity error: call must be preceded by"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In call to"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "A purity indicator of"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The type of outer variable"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be either io.state or stm_builtin.stm."))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The types of the two outer variables differ."))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 62 */
  {
    ((MR_Box) (&check_hlds__purity_scalar_common_3[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Purity error: parallel conjunct is"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but parallel conjuncts must be pure or semipure."))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__purity_scalar_common_3[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[61])))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__purity_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_marked_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__purity_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0)),
    ((MR_Box) (&check_hlds__purity__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0)),
    ((MR_Box) (&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0))
  },
};

static /* final */ const MR_Box check_hlds__purity_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0)),
    ((MR_Box) (&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__purity__pair__pti_pair_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0
  }
};

static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_0 = {
  (MR_String) "have_not_converted_unify",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_1 = {
  (MR_String) "have_converted_unify",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_value_ordered_converted_unify_0[2] = {
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_0,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_converted_unify_0[2] = {
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_1,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_converted_unify_0_0
};

static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_converted_unify_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__purity__check_hlds__purity__type_ctor_info_converted_unify_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__purity____Unify____converted_unify_0_0_10001)),
  ((MR_Box) (check_hlds__purity____Compare____converted_unify_0_0_10001)),
  (MR_String) "check_hlds.purity",
  (MR_String) "converted_unify",
  {     check_hlds__purity__check_hlds__purity__enum_name_ordered_converted_unify_0 },
  {     check_hlds__purity__check_hlds__purity__enum_value_ordered_converted_unify_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__purity__check_hlds__purity__functor_number_map_converted_unify_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__purity__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__purity__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__purity__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__purity__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__purity__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_PseudoTypeInfo check_hlds__purity__check_hlds__purity__field_types_purity_info_0_0[8] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__purity__check_hlds__purity__type_ctor_info_run_post_typecheck_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &check_hlds__purity__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &check_hlds__purity__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__purity__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_need_to_requantify_0,
  (MR_PseudoTypeInfo) &check_hlds__purity__check_hlds__purity__type_ctor_info_converted_unify_0
};

static const MR_ConstString check_hlds__purity__check_hlds__purity__field_names_purity_info_0_0[8] = {
  (MR_String) "pi_module_info",
  (MR_String) "pi_run_post_typecheck",
  (MR_String) "pi_pred_info",
  (MR_String) "pi_vartypes",
  (MR_String) "pi_varset",
  (MR_String) "pi_messages",
  (MR_String) "pi_requant",
  (MR_String) "pi_converted_unify"
};

static const MR_DuFunctorDesc check_hlds__purity__check_hlds__purity__du_functor_desc_purity_info_0_0 = {
  (MR_String) "purity_info",
  (MR_Integer) 8,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__purity__check_hlds__purity__field_types_purity_info_0_0,
  check_hlds__purity__check_hlds__purity__field_names_purity_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__purity__check_hlds__purity__du_stag_ordered_purity_info_0_0[1] = {
  &check_hlds__purity__check_hlds__purity__du_functor_desc_purity_info_0_0
};

static const MR_DuPtagLayout check_hlds__purity__check_hlds__purity__du_ptag_ordered_purity_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__purity__check_hlds__purity__du_stag_ordered_purity_info_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__purity__check_hlds__purity__du_name_ordered_purity_info_0[1] = {
  &check_hlds__purity__check_hlds__purity__du_functor_desc_purity_info_0_0
};

static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_purity_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__purity____Unify____purity_info_0_0_10001)),
  ((MR_Box) (check_hlds__purity____Compare____purity_info_0_0_10001)),
  (MR_String) "check_hlds.purity",
  (MR_String) "purity_info",
  {     check_hlds__purity__check_hlds__purity__du_name_ordered_purity_info_0 },
  {     check_hlds__purity__check_hlds__purity__du_ptag_ordered_purity_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__purity__check_hlds__purity__functor_number_map_purity_info_0
};

static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_0 = {
  (MR_String) "run_post_typecheck",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_1 = {
  (MR_String) "do_not_run_post_typecheck",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_value_ordered_run_post_typecheck_0[2] = {
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_0,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__purity__check_hlds__purity__enum_name_ordered_run_post_typecheck_0[2] = {
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_1,
  &check_hlds__purity__check_hlds__purity__enum_functor_desc_run_post_typecheck_0_0
};

static const MR_Integer check_hlds__purity__check_hlds__purity__functor_number_map_run_post_typecheck_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__purity__check_hlds__purity__type_ctor_info_run_post_typecheck_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__purity____Unify____run_post_typecheck_0_0_10001)),
  ((MR_Box) (check_hlds__purity____Compare____run_post_typecheck_0_0_10001)),
  (MR_String) "check_hlds.purity",
  (MR_String) "run_post_typecheck",
  {     check_hlds__purity__check_hlds__purity__enum_name_ordered_run_post_typecheck_0 },
  {     check_hlds__purity__check_hlds__purity__enum_value_ordered_run_post_typecheck_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__purity__check_hlds__purity__functor_number_map_run_post_typecheck_0
};

static void MR_CALL 
check_hlds__purity____Compare____run_post_typecheck_0_0(
  MR_Word * check_hlds__purity__HeadVar__1_1,
  MR_Word check_hlds__purity__HeadVar__2_2,
  MR_Word check_hlds__purity__HeadVar__3_3)
{
  {
    MR_bool check_hlds__purity__succeeded;
    MR_Integer check_hlds__purity__Cast_HeadVar1_4 = (MR_Integer) check_hlds__purity__HeadVar__2_2;
    MR_Integer check_hlds__purity__Cast_HeadVar2_5 = (MR_Integer) check_hlds__purity__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__purity__HeadVar__1_1, check_hlds__purity__Cast_HeadVar1_4, check_hlds__purity__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__purity____Unify____run_post_typecheck_0_0(
  MR_Word check_hlds__purity__HeadVar__2_1,
  MR_Word check_hlds__purity__HeadVar__2_2)
{
  {
    MR_bool check_hlds__purity__succeeded = (check_hlds__purity__HeadVar__2_1 == check_hlds__purity__HeadVar__2_2);

    return check_hlds__purity__succeeded;
  }
}

static void MR_CALL 
check_hlds__purity____Compare____purity_info_0_0(
  MR_Word * check_hlds__purity__HeadVar__1_1,
  MR_Word check_hlds__purity__HeadVar__2_2,
  MR_Word check_hlds__purity__HeadVar__3_3)
{
  {
    MR_bool check_hlds__purity__succeeded;
    MR_Integer check_hlds__purity__CastX_27 = (MR_Integer) check_hlds__purity__HeadVar__2_2;
    MR_Integer check_hlds__purity__CastY_28 = (MR_Integer) check_hlds__purity__HeadVar__3_3;

    check_hlds__purity__succeeded = (check_hlds__purity__CastX_27 == check_hlds__purity__CastY_28);
    if (check_hlds__purity__succeeded)
      *check_hlds__purity__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__purity__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__purity__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__purity__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__purity__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__purity__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__purity__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__purity__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__purity__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word check_hlds__purity__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word check_hlds__purity__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word check_hlds__purity__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word check_hlds__purity__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word check_hlds__purity__ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word check_hlds__purity__ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word check_hlds__purity__ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word check_hlds__purity__ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word check_hlds__purity__Var_20;

        {
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__purity__Var_20, check_hlds__purity__ArgX1_4, check_hlds__purity__ArgY1_5);
        }
        check_hlds__purity__succeeded = (check_hlds__purity__Var_20 == (MR_Integer) 0);
        check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
        if (check_hlds__purity__succeeded)
          *check_hlds__purity__HeadVar__1_1 = check_hlds__purity__Var_20;
        else
          {
            MR_Word check_hlds__purity__Var_21;
            MR_Integer check_hlds__purity__Var_37 = (MR_Integer) check_hlds__purity__ArgX2_6;
            MR_Integer check_hlds__purity__Var_38 = (MR_Integer) check_hlds__purity__ArgY2_7;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__purity__Var_21, check_hlds__purity__Var_37, check_hlds__purity__Var_38);
            }
            check_hlds__purity__succeeded = (check_hlds__purity__Var_21 == (MR_Integer) 0);
            check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
            if (check_hlds__purity__succeeded)
              *check_hlds__purity__HeadVar__1_1 = check_hlds__purity__Var_21;
            else
              {
                MR_Word check_hlds__purity__Var_22;

                {
                  hlds__hlds_pred____Compare____pred_info_0_0(&check_hlds__purity__Var_22, check_hlds__purity__ArgX3_8, check_hlds__purity__ArgY3_9);
                }
                check_hlds__purity__succeeded = (check_hlds__purity__Var_22 == (MR_Integer) 0);
                check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
                if (check_hlds__purity__succeeded)
                  *check_hlds__purity__HeadVar__1_1 = check_hlds__purity__Var_22;
                else
                  {
                    MR_Word check_hlds__purity__Var_23;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__purity_scalar_common_1[1], &check_hlds__purity__Var_23, ((MR_Box) (check_hlds__purity__ArgX4_10)), ((MR_Box) (check_hlds__purity__ArgY4_11)));
                    }
                    check_hlds__purity__succeeded = (check_hlds__purity__Var_23 == (MR_Integer) 0);
                    check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
                    if (check_hlds__purity__succeeded)
                      *check_hlds__purity__HeadVar__1_1 = check_hlds__purity__Var_23;
                    else
                      {
                        MR_Word check_hlds__purity__Var_24;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__purity_scalar_common_2[0], &check_hlds__purity__Var_24, ((MR_Box) (check_hlds__purity__ArgX5_12)), ((MR_Box) (check_hlds__purity__ArgY5_13)));
                        }
                        check_hlds__purity__succeeded = (check_hlds__purity__Var_24 == (MR_Integer) 0);
                        check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
                        if (check_hlds__purity__succeeded)
                          *check_hlds__purity__HeadVar__1_1 = check_hlds__purity__Var_24;
                        else
                          {
                            MR_Word check_hlds__purity__Var_25;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__purity_scalar_common_2[2], &check_hlds__purity__Var_25, ((MR_Box) (check_hlds__purity__ArgX6_14)), ((MR_Box) (check_hlds__purity__ArgY6_15)));
                            }
                            check_hlds__purity__succeeded = (check_hlds__purity__Var_25 == (MR_Integer) 0);
                            check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
                            if (check_hlds__purity__succeeded)
                              *check_hlds__purity__HeadVar__1_1 = check_hlds__purity__Var_25;
                            else
                              {
                                MR_Word check_hlds__purity__Var_26;
                                MR_Integer check_hlds__purity__Var_39 = (MR_Integer) check_hlds__purity__ArgX7_16;
                                MR_Integer check_hlds__purity__Var_40 = (MR_Integer) check_hlds__purity__ArgY7_17;

                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__purity__Var_26, check_hlds__purity__Var_39, check_hlds__purity__Var_40);
                                }
                                check_hlds__purity__succeeded = (check_hlds__purity__Var_26 == (MR_Integer) 0);
                                check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
                                if (check_hlds__purity__succeeded)
                                  *check_hlds__purity__HeadVar__1_1 = check_hlds__purity__Var_26;
                                else
                                  {
                                    MR_Integer check_hlds__purity__Var_41 = (MR_Integer) check_hlds__purity__ArgX8_18;
                                    MR_Integer check_hlds__purity__Var_42 = (MR_Integer) check_hlds__purity__ArgY8_19;

                                    {
                                      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__purity__HeadVar__1_1, check_hlds__purity__Var_41, check_hlds__purity__Var_42);
                                    }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_info_0_0(
  MR_Word check_hlds__purity__HeadVar__1_1,
  MR_Word check_hlds__purity__HeadVar__2_2)
{
  {
    MR_bool check_hlds__purity__succeeded;
    MR_Integer check_hlds__purity__CastX_19 = (MR_Integer) check_hlds__purity__HeadVar__1_1;
    MR_Integer check_hlds__purity__CastY_20 = (MR_Integer) check_hlds__purity__HeadVar__2_2;

    check_hlds__purity__succeeded = (check_hlds__purity__CastX_19 == check_hlds__purity__CastY_20);
    if (check_hlds__purity__succeeded)
      check_hlds__purity__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__purity__TypeInfo_23_23;
        MR_Word check_hlds__purity__TypeInfo_24_24;
        MR_Word check_hlds__purity__TypeInfo_25_25;
        MR_Word check_hlds__purity__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__purity__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__purity__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__purity__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__purity__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__purity__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__purity__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word check_hlds__purity__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__purity__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word check_hlds__purity__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word check_hlds__purity__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word check_hlds__purity__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word check_hlds__purity__ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word check_hlds__purity__ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word check_hlds__purity__ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word check_hlds__purity__ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 7)));

        {
          check_hlds__purity__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__purity__ArgX1_3, check_hlds__purity__ArgY1_4);
        }
        if (check_hlds__purity__succeeded)
          {
            check_hlds__purity__succeeded = (check_hlds__purity__ArgX2_5 == check_hlds__purity__ArgY2_6);
            if (check_hlds__purity__succeeded)
              {
                {
                  check_hlds__purity__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(check_hlds__purity__ArgX3_7, check_hlds__purity__ArgY3_8);
                }
                if (check_hlds__purity__succeeded)
                  {
                    check_hlds__purity__TypeInfo_23_23 = (MR_Word) &check_hlds__purity_scalar_common_1[1];
                    {
                      check_hlds__purity__succeeded = mercury__builtin__unify_2_p_0(check_hlds__purity__TypeInfo_23_23, ((MR_Box) (check_hlds__purity__ArgX4_9)), ((MR_Box) (check_hlds__purity__ArgY4_10)));
                    }
                    if (check_hlds__purity__succeeded)
                      {
                        check_hlds__purity__TypeInfo_24_24 = (MR_Word) &check_hlds__purity_scalar_common_2[0];
                        {
                          check_hlds__purity__succeeded = mercury__builtin__unify_2_p_0(check_hlds__purity__TypeInfo_24_24, ((MR_Box) (check_hlds__purity__ArgX5_11)), ((MR_Box) (check_hlds__purity__ArgY5_12)));
                        }
                        if (check_hlds__purity__succeeded)
                          {
                            check_hlds__purity__TypeInfo_25_25 = (MR_Word) &check_hlds__purity_scalar_common_2[2];
                            {
                              check_hlds__purity__succeeded = mercury__builtin__unify_2_p_0(check_hlds__purity__TypeInfo_25_25, ((MR_Box) (check_hlds__purity__ArgX6_13)), ((MR_Box) (check_hlds__purity__ArgY6_14)));
                            }
                            if (check_hlds__purity__succeeded)
                              {
                                check_hlds__purity__succeeded = (check_hlds__purity__ArgX7_15 == check_hlds__purity__ArgY7_16);
                                if (check_hlds__purity__succeeded)
                                  check_hlds__purity__succeeded = (check_hlds__purity__ArgX8_17 == check_hlds__purity__ArgY8_18);
                              }
                          }
                      }
                  }
              }
          }
      }
    return check_hlds__purity__succeeded;
  }
}

static void MR_CALL 
check_hlds__purity____Compare____converted_unify_0_0(
  MR_Word * check_hlds__purity__HeadVar__1_1,
  MR_Word check_hlds__purity__HeadVar__2_2,
  MR_Word check_hlds__purity__HeadVar__3_3)
{
  {
    MR_bool check_hlds__purity__succeeded;
    MR_Integer check_hlds__purity__Cast_HeadVar1_4 = (MR_Integer) check_hlds__purity__HeadVar__2_2;
    MR_Integer check_hlds__purity__Cast_HeadVar2_5 = (MR_Integer) check_hlds__purity__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__purity__HeadVar__1_1, check_hlds__purity__Cast_HeadVar1_4, check_hlds__purity__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__purity____Unify____converted_unify_0_0(
  MR_Word check_hlds__purity__HeadVar__2_1,
  MR_Word check_hlds__purity__HeadVar__2_2)
{
  {
    MR_bool check_hlds__purity__succeeded = (check_hlds__purity__HeadVar__2_1 == check_hlds__purity__HeadVar__2_2);

    return check_hlds__purity__succeeded;
  }
}

static void MR_CALL 
check_hlds__purity__wrap_inner_outer_goals_5_p_0(
  MR_Word check_hlds__purity__Outer_6,
  MR_Word check_hlds__purity__HeadVar__2_2,
  MR_Word * check_hlds__purity__Goal_9,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_30,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_31)
{
  {
    MR_bool check_hlds__purity__succeeded;
    MR_Word check_hlds__purity__Goal0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word check_hlds__purity__Inner_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word check_hlds__purity__GoalInfo0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_7, (MR_Integer) 1)));
    MR_Word check_hlds__purity__NonLocals0_13;
    MR_Word check_hlds__purity__Context_14;
    MR_Word check_hlds__purity__OuterDI_15;
    MR_Word check_hlds__purity__OuterUO_16;
    MR_Word check_hlds__purity__InnerDI_17;
    MR_Word check_hlds__purity__InnerUO_18;
    MR_Word check_hlds__purity__ModuleInfo_21;
    MR_Word check_hlds__purity__Clobbered_22;
    MR_Word check_hlds__purity__Unique_23;
    MR_Word check_hlds__purity__OuterToInnerGoal_24;
    MR_Word check_hlds__purity__InnerToOuterGoal_25;
    MR_Word check_hlds__purity__WrapExpr_26;
    MR_Word check_hlds__purity__NonLocals_27;
    MR_Word check_hlds__purity__GoalInfo1_28;
    MR_Word check_hlds__purity__GoalInfo_29;
    MR_Word check_hlds__purity__Var_36;
    MR_Word check_hlds__purity__Var_41;
    MR_Word check_hlds__purity__Var_43;
    MR_Word check_hlds__purity__Var_44;
    MR_Word check_hlds__purity__Var_46;
    MR_Word check_hlds__purity__Var_47;
    MR_Word check_hlds__purity__Var_48;
    MR_Word check_hlds__purity__Var_49;
    MR_Word check_hlds__purity__Var_51;
    MR_Word check_hlds__purity__Var_56;
    MR_Word check_hlds__purity__Var_58;
    MR_Word check_hlds__purity__Var_59;
    MR_Word check_hlds__purity__Var_61;
    MR_Word check_hlds__purity__Var_62;
    MR_Word check_hlds__purity__Var_63;
    MR_Word check_hlds__purity__Var_64;
    MR_Word check_hlds__purity__Var_67;
    MR_Word check_hlds__purity__Var_68;
    MR_Word check_hlds__purity__Var_69;
    MR_Word check_hlds__purity__Var_71;
    MR_Word check_hlds__purity__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_7, (MR_Integer) 0)));
    MR_Word check_hlds__purity__Var_75;
    MR_Word check_hlds__purity__Var_76;
    MR_Word check_hlds__purity__Var_77;
    MR_Word check_hlds__purity__Var_78;
    MR_Word check_hlds__purity__Var_79;
    MR_Word check_hlds__purity__Var_80;
    MR_Word check_hlds__purity__Var_81;

    {
      check_hlds__purity__NonLocals0_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__purity__GoalInfo0_12);
    }
    {
      check_hlds__purity__Context_14 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo0_12);
    }
    check_hlds__purity__OuterDI_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Outer_6, (MR_Integer) 0)));
    check_hlds__purity__OuterUO_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Outer_6, (MR_Integer) 1)));
    check_hlds__purity__InnerDI_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Inner_8, (MR_Integer) 0)));
    check_hlds__purity__InnerUO_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Inner_8, (MR_Integer) 1)));
    check_hlds__purity__ModuleInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_30, (MR_Integer) 0)));
    check_hlds__purity__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_30, (MR_Integer) 1)));
    check_hlds__purity__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_30, (MR_Integer) 2)));
    check_hlds__purity__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_30, (MR_Integer) 3)));
    check_hlds__purity__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_30, (MR_Integer) 4)));
    check_hlds__purity__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_30, (MR_Integer) 5)));
    check_hlds__purity__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_30, (MR_Integer) 6)));
    check_hlds__purity__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_30, (MR_Integer) 7)));
    check_hlds__purity__Clobbered_22 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[4]);
    check_hlds__purity__Unique_23 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_1[5]);
    {
      check_hlds__purity__Var_36 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      check_hlds__purity__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_44, 0) = ((MR_Box) (check_hlds__purity__InnerDI_17));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__purity__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_41, 0) = ((MR_Box) (check_hlds__purity__OuterDI_15));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_41, 1) = ((MR_Box) (check_hlds__purity__Var_44));
    }
    {
      check_hlds__purity__Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Var_47, 0) = ((MR_Box) (check_hlds__purity__OuterDI_15));
      MR_hl_field(MR_mktag(0), check_hlds__purity__Var_47, 1) = ((MR_Box) (check_hlds__purity__Clobbered_22));
    }
    {
      check_hlds__purity__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Var_49, 0) = ((MR_Box) (check_hlds__purity__InnerDI_17));
      MR_hl_field(MR_mktag(0), check_hlds__purity__Var_49, 1) = ((MR_Box) (check_hlds__purity__Unique_23));
    }
    {
      check_hlds__purity__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_48, 0) = ((MR_Box) (check_hlds__purity__Var_49));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__purity__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_46, 0) = ((MR_Box) (check_hlds__purity__Var_47));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_46, 1) = ((MR_Box) (check_hlds__purity__Var_48));
    }
    {
      check_hlds__purity__Var_43 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__purity__Var_46);
    }
    {
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__purity__Var_36, (MR_String) "stm_from_outer_to_inner", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__purity__Var_41, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__purity__Var_43, check_hlds__purity__ModuleInfo_21, check_hlds__purity__Context_14, &check_hlds__purity__OuterToInnerGoal_24);
    }
    {
      check_hlds__purity__Var_51 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      check_hlds__purity__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_59, 0) = ((MR_Box) (check_hlds__purity__OuterUO_16));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__purity__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_56, 0) = ((MR_Box) (check_hlds__purity__InnerUO_18));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_56, 1) = ((MR_Box) (check_hlds__purity__Var_59));
    }
    {
      check_hlds__purity__Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Var_62, 0) = ((MR_Box) (check_hlds__purity__InnerUO_18));
      MR_hl_field(MR_mktag(0), check_hlds__purity__Var_62, 1) = ((MR_Box) (check_hlds__purity__Clobbered_22));
    }
    {
      check_hlds__purity__Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Var_64, 0) = ((MR_Box) (check_hlds__purity__OuterUO_16));
      MR_hl_field(MR_mktag(0), check_hlds__purity__Var_64, 1) = ((MR_Box) (check_hlds__purity__Unique_23));
    }
    {
      check_hlds__purity__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_63, 0) = ((MR_Box) (check_hlds__purity__Var_64));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__purity__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_61, 0) = ((MR_Box) (check_hlds__purity__Var_62));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_61, 1) = ((MR_Box) (check_hlds__purity__Var_63));
    }
    {
      check_hlds__purity__Var_58 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__purity__Var_61);
    }
    {
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__purity__Var_51, (MR_String) "stm_from_inner_to_outer", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__purity__Var_56, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__purity__Var_58, check_hlds__purity__ModuleInfo_21, check_hlds__purity__Context_14, &check_hlds__purity__InnerToOuterGoal_25);
    }
    {
      check_hlds__purity__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_69, 0) = ((MR_Box) (check_hlds__purity__InnerToOuterGoal_25));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__purity__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_68, 0) = ((MR_Box) (check_hlds__purity__Goal0_7));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_68, 1) = ((MR_Box) (check_hlds__purity__Var_69));
    }
    {
      check_hlds__purity__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_67, 0) = ((MR_Box) (check_hlds__purity__OuterToInnerGoal_24));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_67, 1) = ((MR_Box) (check_hlds__purity__Var_68));
    }
    {
      check_hlds__purity__WrapExpr_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__purity__WrapExpr_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__purity__WrapExpr_26, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__purity__WrapExpr_26, 2) = ((MR_Box) (check_hlds__purity__Var_67));
    }
    {
      check_hlds__purity__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_71, 0) = ((MR_Box) (check_hlds__purity__OuterDI_15));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_71, 1) = ((MR_Box) (check_hlds__purity__Var_59));
    }
    {
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__purity__Var_71, check_hlds__purity__NonLocals0_13, &check_hlds__purity__NonLocals_27);
    }
    {
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__purity__NonLocals_27, check_hlds__purity__GoalInfo0_12, &check_hlds__purity__GoalInfo1_28);
    }
    {
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 22, check_hlds__purity__GoalInfo1_28, &check_hlds__purity__GoalInfo_29);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__purity__Goal_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__WrapExpr_26));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__GoalInfo_29));
    }
    *check_hlds__purity__STATE_VARIABLE_Info_31 = check_hlds__purity__STATE_VARIABLE_Info_0_30;
  }
}

void MR_CALL 
check_hlds__purity__repuritycheck_proc_4_p_0(
  MR_Word check_hlds__purity__ModuleInfo_5,
  MR_Word check_hlds__purity__HeadVar__2_2,
  MR_Word check_hlds__purity__STATE_VARIABLE_PredInfo_0_36,
  MR_Word * check_hlds__purity__STATE_VARIABLE_PredInfo_37)
{
  {
    MR_bool check_hlds__purity__succeeded;
    MR_Word check_hlds__purity__TypeCtorInfo_64_64;
    MR_Integer check_hlds__purity__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word check_hlds__purity__Procs0_9;
    MR_Word check_hlds__purity__ProcInfo0_10;
    MR_Word check_hlds__purity__Goal0_11;
    MR_Word check_hlds__purity__VarTypes0_12;
    MR_Word check_hlds__purity__VarSet0_13;
    MR_Word check_hlds__purity__PurityInfo0_14;
    MR_Word check_hlds__purity__Goal_15;
    MR_Word check_hlds__purity__Bodypurity_16;
    MR_Word check_hlds__purity__Var_17;
    MR_Word check_hlds__purity__PurityInfo_18;
    MR_Word check_hlds__purity__VarTypes_21;
    MR_Word check_hlds__purity__VarSet_22;
    MR_Word check_hlds__purity__NeedToRequantify_24;
    MR_Word check_hlds__purity__ProcInfo1_26;
    MR_Word check_hlds__purity__ProcInfo2_27;
    MR_Word check_hlds__purity__ProcInfo3_28;
    MR_Word check_hlds__purity__ProcInfo_29;
    MR_Word check_hlds__purity__Procs_30;
    MR_Word check_hlds__purity__OldPurity_31;
    MR_Word check_hlds__purity__Markers0_32;
    MR_Word check_hlds__purity__STATE_VARIABLE_PredInfo_42_42;
    MR_Word check_hlds__purity__STATE_VARIABLE_PredInfo_44_44;
    MR_Word check_hlds__purity__GoalExpr0_74;
    MR_Word check_hlds__purity__GoalInfo0_75;
    MR_Word check_hlds__purity__GoalExpr_76;
    MR_Word check_hlds__purity__GoalInfo_77;
    MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_10_84;
    MR_Word check_hlds__purity___PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadVar__2_2, (MR_Integer) 0)));
    MR_Box check_hlds__purity__conv0_ProcInfo0_10;
    MR_Word check_hlds__purity__Var_19;
    MR_Word check_hlds__purity__Var_20;
    MR_Word check_hlds__purity__Var_23;
    MR_Word check_hlds__purity__Var_25;

    {
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__purity__STATE_VARIABLE_PredInfo_0_36, &check_hlds__purity__Procs0_9);
    }
    check_hlds__purity__TypeCtorInfo_64_64 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__purity__TypeCtorInfo_64_64, check_hlds__purity__Procs0_9, check_hlds__purity__ProcId_7, &check_hlds__purity__conv0_ProcInfo0_10);
    }
    check_hlds__purity__ProcInfo0_10 = ((MR_Word) check_hlds__purity__conv0_ProcInfo0_10);
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__purity__ProcInfo0_10, &check_hlds__purity__Goal0_11);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__purity__ProcInfo0_10, &check_hlds__purity__VarTypes0_12);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__purity__ProcInfo0_10, &check_hlds__purity__VarSet0_13);
    }
    {
      check_hlds__purity__PurityInfo0_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 0) = ((MR_Box) (check_hlds__purity__ModuleInfo_5));
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 2) = ((MR_Box) (check_hlds__purity__STATE_VARIABLE_PredInfo_0_36));
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 3) = ((MR_Box) (check_hlds__purity__VarTypes0_12));
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 4) = ((MR_Box) (check_hlds__purity__VarSet0_13));
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 6) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_14, 7) = ((MR_Box) ((MR_Integer) 0));
    }
    check_hlds__purity__GoalExpr0_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_11, (MR_Integer) 0)));
    check_hlds__purity__GoalInfo0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_11, (MR_Integer) 1)));
    {
      check_hlds__purity__compute_expr_purity_7_p_0(check_hlds__purity__GoalExpr0_74, &check_hlds__purity__GoalExpr_76, check_hlds__purity__GoalInfo0_75, &check_hlds__purity__Bodypurity_16, &check_hlds__purity__Var_17, check_hlds__purity__PurityInfo0_14, &check_hlds__purity__PurityInfo_18);
    }
    {
      hlds__hlds_goal__goal_info_set_purity_3_p_0(check_hlds__purity__Bodypurity_16, check_hlds__purity__GoalInfo0_75, &check_hlds__purity__STATE_VARIABLE_GoalInfo_10_84);
    }
    switch (check_hlds__purity__Var_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 18, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_84, &check_hlds__purity__GoalInfo_77);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 18, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_84, &check_hlds__purity__GoalInfo_77);
          }
        }
        break;
    }
    {
      check_hlds__purity__Goal_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_15, 0) = ((MR_Box) (check_hlds__purity__GoalExpr_76));
      MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_15, 1) = ((MR_Box) (check_hlds__purity__GoalInfo_77));
    }
    check_hlds__purity__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 0)));
    check_hlds__purity__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 1)));
    check_hlds__purity__STATE_VARIABLE_PredInfo_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 2)));
    check_hlds__purity__VarTypes_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 3)));
    check_hlds__purity__VarSet_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 4)));
    check_hlds__purity__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 5)));
    check_hlds__purity__NeedToRequantify_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 6)));
    check_hlds__purity__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_18, (MR_Integer) 7)));
    {
      hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__purity__Goal_15, check_hlds__purity__ProcInfo0_10, &check_hlds__purity__ProcInfo1_26);
    }
    {
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__purity__VarTypes_21, check_hlds__purity__ProcInfo1_26, &check_hlds__purity__ProcInfo2_27);
    }
    {
      hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__purity__VarSet_22, check_hlds__purity__ProcInfo2_27, &check_hlds__purity__ProcInfo3_28);
    }
    switch (check_hlds__purity__NeedToRequantify_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        check_hlds__purity__ProcInfo_29 = check_hlds__purity__ProcInfo3_28;
        break;
      case (MR_Integer) 0:
        {
          {
            hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, check_hlds__purity__ProcInfo3_28, &check_hlds__purity__ProcInfo_29);
          }
        }
        break;
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__purity__TypeCtorInfo_64_64, check_hlds__purity__ProcId_7, ((MR_Box) (check_hlds__purity__ProcInfo_29)), check_hlds__purity__Procs0_9, &check_hlds__purity__Procs_30);
    }
    {
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__purity__Procs_30, check_hlds__purity__STATE_VARIABLE_PredInfo_42_42, &check_hlds__purity__STATE_VARIABLE_PredInfo_44_44);
    }
    {
      hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__purity__STATE_VARIABLE_PredInfo_44_44, &check_hlds__purity__OldPurity_31);
    }
    {
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__purity__STATE_VARIABLE_PredInfo_44_44, &check_hlds__purity__Markers0_32);
    }
    {
      check_hlds__purity__succeeded = parse_tree__prog_data__less_pure_2_p_0(check_hlds__purity__Bodypurity_16, check_hlds__purity__OldPurity_31);
    }
    if (check_hlds__purity__succeeded)
      {
        MR_Word check_hlds__purity__Markers_34;

        switch (check_hlds__purity__OldPurity_31) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            check_hlds__purity__Markers_34 = check_hlds__purity__Markers0_32;
            break;
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__purity__Markers1_33;

              {
                hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 17, check_hlds__purity__Markers0_32, &check_hlds__purity__Markers1_33);
              }
              {
                hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 16, check_hlds__purity__Markers1_33, &check_hlds__purity__Markers_34);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 17, check_hlds__purity__Markers0_32, &check_hlds__purity__Markers_34);
              }
            }
            break;
        }
        {
          hlds__hlds_pred__pred_info_set_markers_3_p_0(check_hlds__purity__Markers_34, check_hlds__purity__STATE_VARIABLE_PredInfo_44_44, check_hlds__purity__STATE_VARIABLE_PredInfo_37);
        }
      }
    else
      {
        MR_Word check_hlds__purity__TypeCtorInfo_66_66;
        MR_Word check_hlds__purity__Var_49;
        MR_Word check_hlds__purity__Var_50;
        MR_Word check_hlds__purity__Var_65;
        MR_Integer check_hlds__purity__Var_35;

        {
          check_hlds__purity__succeeded = parse_tree__prog_data__less_pure_2_p_0(check_hlds__purity__OldPurity_31, check_hlds__purity__Bodypurity_16);
        }
        if (check_hlds__purity__succeeded)
          {
            check_hlds__purity__Var_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              check_hlds__purity__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__purity__Var_49, 0) = NULL;
              MR_hl_field(MR_mktag(1), check_hlds__purity__Var_49, 1) = ((MR_Box) (check_hlds__purity__Var_50));
            }
            {
              check_hlds__purity__Var_65 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__purity__STATE_VARIABLE_PredInfo_44_44);
            }
            check_hlds__purity__TypeCtorInfo_66_66 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            {
              check_hlds__purity__succeeded = check_hlds__purity____Unify____list__list_1_1(check_hlds__purity__TypeCtorInfo_66_66, check_hlds__purity__Var_49, check_hlds__purity__Var_65);
            }
          }
        if (check_hlds__purity__succeeded)
          {
            MR_Word check_hlds__purity__Markers_60;

            switch (check_hlds__purity__Bodypurity_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                check_hlds__purity__Markers_60 = check_hlds__purity__Markers0_32;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__purity__Markers1_56;

                  {
                    hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 14, check_hlds__purity__Markers0_32, &check_hlds__purity__Markers1_56);
                  }
                  {
                    hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 15, check_hlds__purity__Markers1_56, &check_hlds__purity__Markers_60);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__purity__Markers1_57;

                  {
                    hlds__hlds_pred__remove_marker_3_p_0((MR_Integer) 14, check_hlds__purity__Markers0_32, &check_hlds__purity__Markers1_57);
                  }
                  {
                    hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 15, check_hlds__purity__Markers1_57, &check_hlds__purity__Markers_60);
                  }
                }
                break;
            }
            {
              hlds__hlds_pred__pred_info_set_markers_3_p_0(check_hlds__purity__Markers_60, check_hlds__purity__STATE_VARIABLE_PredInfo_44_44, check_hlds__purity__STATE_VARIABLE_PredInfo_37);
            }
          }
        else
          *check_hlds__purity__STATE_VARIABLE_PredInfo_37 = check_hlds__purity__STATE_VARIABLE_PredInfo_44_44;
      }
  }
}

static MR_bool MR_CALL 
check_hlds__purity____Unify____list__list_1_1(
  MR_Word check_hlds__purity__TypeInfo_for_T_11,
  MR_Word check_hlds__purity__HeadVar__1_1,
  MR_Word check_hlds__purity__HeadVar__2_2)
{
  {
    MR_bool check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Box check_hlds__purity__ArgX1_5;
    MR_Word check_hlds__purity__ArgX2_7;
    MR_Word check_hlds__purity__ArgY2_8;

    if (check_hlds__purity__succeeded)
      {
        check_hlds__purity__ArgX1_5 = (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_2, (MR_Integer) 0));
        check_hlds__purity__ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_2, (MR_Integer) 1)));
        (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)) = check_hlds__purity__ArgX1_5;
        check_hlds__purity__ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
        {
          check_hlds__purity__succeeded = mercury__list____Unify____list_1_0(check_hlds__purity__TypeInfo_for_T_11, check_hlds__purity__ArgX2_7, check_hlds__purity__ArgY2_8);
        }
      }
    return check_hlds__purity__succeeded;
  }
}

void MR_CALL 
check_hlds__purity__puritycheck_module_4_p_0(
  MR_Word check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * check_hlds__purity__STATE_VARIABLE_ModuleInfo_9,
  MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0_10,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Specs_11)
{
  {
    MR_bool check_hlds__purity__succeeded;
    MR_Word check_hlds__purity__PredIds_7;

    {
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_8, &check_hlds__purity__PredIds_7);
    }
    {
      check_hlds__purity__check_preds_purity_5_p_0(check_hlds__purity__PredIds_7, check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_8, check_hlds__purity__STATE_VARIABLE_ModuleInfo_9, check_hlds__purity__STATE_VARIABLE_Specs_0_10, check_hlds__purity__STATE_VARIABLE_Specs_11);
    }
  }
}

static void MR_CALL 
check_hlds__purity__check_preds_purity_5_p_0(
  MR_Word check_hlds__purity__HeadVar__1_1,
  MR_Word check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * check_hlds__purity__STATE_VARIABLE_ModuleInfo_3,
  MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0_4,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__purity__succeeded;

        if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__purity__STATE_VARIABLE_Specs_5 = check_hlds__purity__STATE_VARIABLE_Specs_0_4;
            *check_hlds__purity__STATE_VARIABLE_ModuleInfo_3 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2;
          }
        else
          {
            MR_Word check_hlds__purity__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__purity__PredIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__purity__PredInfo0_16;
            MR_Word check_hlds__purity__PredInfo_17;
            MR_Word check_hlds__purity__GoalType_19;
            MR_Word check_hlds__purity__STATE_VARIABLE_Specs_28_28;
            MR_Word check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29;
            MR_Word check_hlds__purity__STATE_VARIABLE_ModuleInfo_30_30;
            MR_Word check_hlds__purity__STATE_VARIABLE_Specs_31_31;

            {
              hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2, check_hlds__purity__PredId_12, &check_hlds__purity__PredInfo0_16);
            }
            {
              check_hlds__purity__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(check_hlds__purity__PredInfo0_16);
            }
            if (!(check_hlds__purity__succeeded))
              {
                check_hlds__purity__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(check_hlds__purity__PredInfo0_16);
              }
            if (check_hlds__purity__succeeded)
              {
                check_hlds__purity__PredInfo_17 = check_hlds__purity__PredInfo0_16;
                check_hlds__purity__STATE_VARIABLE_Specs_28_28 = check_hlds__purity__STATE_VARIABLE_Specs_0_4;
                check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2;
              }
            else
              {
                MR_Word check_hlds__purity__TypeCtorInfo_49_76;
                MR_Word check_hlds__purity__DeclaredPurity_42;
                MR_Word check_hlds__purity__MaybePromisedPurity_43;
                MR_Word check_hlds__purity__Clauses0_45;
                MR_Word check_hlds__purity__ItemNumbers_46;
                MR_Word check_hlds__purity__VarTypes0_47;
                MR_Word check_hlds__purity__VarSet0_48;
                MR_Word check_hlds__purity__PurityInfo0_49;
                MR_Word check_hlds__purity__Clauses_50;
                MR_Word check_hlds__purity__ActualPurity_51;
                MR_Word check_hlds__purity__PurityInfo_52;
                MR_Word check_hlds__purity__VarTypes_55;
                MR_Word check_hlds__purity__VarSet_56;
                MR_Word check_hlds__purity__GoalSpecs_57;
                MR_Word check_hlds__purity__ClausesRep_60;
                MR_Word check_hlds__purity__PredSpecs_61;
                MR_Word check_hlds__purity__STATE_VARIABLE_ClausesInfo_35_62;
                MR_Word check_hlds__purity__STATE_VARIABLE_ClausesInfo_36_63;
                MR_Word check_hlds__purity__STATE_VARIABLE_PredInfo_42_69;
                MR_Word check_hlds__purity__STATE_VARIABLE_ClausesInfo_43_70;
                MR_Word check_hlds__purity__STATE_VARIABLE_ClausesInfo_44_71;
                MR_Word check_hlds__purity__STATE_VARIABLE_ClausesInfo_45_72;
                MR_Word check_hlds__purity__Var_75;
                MR_Word check_hlds__purity__Var_53;
                MR_Word check_hlds__purity__Var_54;
                MR_Word check_hlds__purity__Var_58;
                MR_Word check_hlds__purity__Var_59;

                {
                  hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Purity-checking ", check_hlds__purity__PredId_12, check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2);
                }
                {
                  hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__purity__PredInfo0_16, &check_hlds__purity__DeclaredPurity_42);
                }
                {
                  hlds__hlds_pred__pred_info_get_promised_purity_2_p_0(check_hlds__purity__PredInfo0_16, &check_hlds__purity__MaybePromisedPurity_43);
                }
                {
                  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__purity__PredInfo0_16, &check_hlds__purity__STATE_VARIABLE_ClausesInfo_35_62);
                }
                {
                  hlds__hlds_clauses__clauses_info_clauses_4_p_0(&check_hlds__purity__Clauses0_45, &check_hlds__purity__ItemNumbers_46, check_hlds__purity__STATE_VARIABLE_ClausesInfo_35_62, &check_hlds__purity__STATE_VARIABLE_ClausesInfo_36_63);
                }
                {
                  hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(check_hlds__purity__STATE_VARIABLE_ClausesInfo_36_63, &check_hlds__purity__VarTypes0_47);
                }
                {
                  hlds__hlds_clauses__clauses_info_get_varset_2_p_0(check_hlds__purity__STATE_VARIABLE_ClausesInfo_36_63, &check_hlds__purity__VarSet0_48);
                }
                {
                  check_hlds__purity__PurityInfo0_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_49, 0) = ((MR_Box) (check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2));
                  MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_49, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_49, 2) = ((MR_Box) (check_hlds__purity__PredInfo0_16));
                  MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_49, 3) = ((MR_Box) (check_hlds__purity__VarTypes0_47));
                  MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_49, 4) = ((MR_Box) (check_hlds__purity__VarSet0_48));
                  MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_49, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_49, 6) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo0_49, 7) = ((MR_Box) ((MR_Integer) 0));
                }
                {
                  check_hlds__purity__compute_purity_for_clauses_7_p_0(check_hlds__purity__Clauses0_45, &check_hlds__purity__Clauses_50, check_hlds__purity__PredInfo0_16, (MR_Integer) 0, &check_hlds__purity__ActualPurity_51, check_hlds__purity__PurityInfo0_49, &check_hlds__purity__PurityInfo_52);
                }
                check_hlds__purity__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_52, (MR_Integer) 0)));
                check_hlds__purity__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_52, (MR_Integer) 1)));
                check_hlds__purity__STATE_VARIABLE_PredInfo_42_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_52, (MR_Integer) 2)));
                check_hlds__purity__VarTypes_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_52, (MR_Integer) 3)));
                check_hlds__purity__VarSet_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_52, (MR_Integer) 4)));
                check_hlds__purity__GoalSpecs_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_52, (MR_Integer) 5)));
                check_hlds__purity__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_52, (MR_Integer) 6)));
                check_hlds__purity__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__PurityInfo_52, (MR_Integer) 7)));
                {
                  hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(check_hlds__purity__VarTypes_55, check_hlds__purity__STATE_VARIABLE_ClausesInfo_36_63, &check_hlds__purity__STATE_VARIABLE_ClausesInfo_43_70);
                }
                {
                  hlds__hlds_clauses__clauses_info_set_varset_3_p_0(check_hlds__purity__VarSet_56, check_hlds__purity__STATE_VARIABLE_ClausesInfo_43_70, &check_hlds__purity__STATE_VARIABLE_ClausesInfo_44_71);
                }
                {
                  hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__purity__Clauses_50, &check_hlds__purity__ClausesRep_60);
                }
                {
                  hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(check_hlds__purity__ClausesRep_60, check_hlds__purity__ItemNumbers_46, check_hlds__purity__STATE_VARIABLE_ClausesInfo_44_71, &check_hlds__purity__STATE_VARIABLE_ClausesInfo_45_72);
                }
                {
                  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__purity__STATE_VARIABLE_ClausesInfo_45_72, check_hlds__purity__STATE_VARIABLE_PredInfo_42_69, &check_hlds__purity__PredInfo_17);
                }
                {
                  check_hlds__purity__perform_pred_purity_checks_7_p_0(check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2, check_hlds__purity__PredId_12, check_hlds__purity__PredInfo_17, check_hlds__purity__ActualPurity_51, check_hlds__purity__DeclaredPurity_42, check_hlds__purity__MaybePromisedPurity_43, &check_hlds__purity__PredSpecs_61);
                }
                check_hlds__purity__TypeCtorInfo_49_76 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
                {
                  check_hlds__purity__Var_75 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_49_76, check_hlds__purity__PredSpecs_61, check_hlds__purity__STATE_VARIABLE_Specs_0_4);
                }
                {
                  check_hlds__purity__STATE_VARIABLE_Specs_28_28 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_49_76, check_hlds__purity__GoalSpecs_57, check_hlds__purity__Var_75);
                }
                {
                  hlds__hlds_module__module_info_set_pred_info_4_p_0(check_hlds__purity__PredId_12, check_hlds__purity__PredInfo_17, check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2, &check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29);
                }
              }
            {
              hlds__hlds_pred__pred_info_get_goal_type_2_p_0(check_hlds__purity__PredInfo_17, &check_hlds__purity__GoalType_19);
            }
            switch (MR_tag((MR_Word) check_hlds__purity__GoalType_19)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(check_hlds__purity__GoalType_19)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      check_hlds__purity__STATE_VARIABLE_ModuleInfo_30_30 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29;
                      check_hlds__purity__STATE_VARIABLE_Specs_31_31 = check_hlds__purity__STATE_VARIABLE_Specs_28_28;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      check_hlds__purity__STATE_VARIABLE_ModuleInfo_30_30 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29;
                      check_hlds__purity__STATE_VARIABLE_Specs_31_31 = check_hlds__purity__STATE_VARIABLE_Specs_28_28;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      check_hlds__purity__STATE_VARIABLE_ModuleInfo_30_30 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29;
                      check_hlds__purity__STATE_VARIABLE_Specs_31_31 = check_hlds__purity__STATE_VARIABLE_Specs_28_28;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      check_hlds__purity__STATE_VARIABLE_ModuleInfo_30_30 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29;
                      check_hlds__purity__STATE_VARIABLE_Specs_31_31 = check_hlds__purity__STATE_VARIABLE_Specs_28_28;
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__purity__PromiseType_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalType_19, (MR_Integer) 0)));

                  {
                    check_hlds__check_promise__check_and_store_promise_7_p_0(check_hlds__purity__PredId_12, check_hlds__purity__PredInfo_17, check_hlds__purity__PromiseType_20, check_hlds__purity__STATE_VARIABLE_ModuleInfo_29_29, &check_hlds__purity__STATE_VARIABLE_ModuleInfo_30_30, check_hlds__purity__STATE_VARIABLE_Specs_28_28, &check_hlds__purity__STATE_VARIABLE_Specs_31_31);
                  }
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__purity__next_value_of_HeadVar__1_1 = check_hlds__purity__PredIds_13;
              MR_Word check_hlds__purity__next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = check_hlds__purity__STATE_VARIABLE_ModuleInfo_30_30;
              MR_Word check_hlds__purity__next_value_of_STATE_VARIABLE_Specs_0_4 = check_hlds__purity__STATE_VARIABLE_Specs_31_31;

              check_hlds__purity__STATE_VARIABLE_Specs_0_4 = check_hlds__purity__next_value_of_STATE_VARIABLE_Specs_0_4;
              check_hlds__purity__STATE_VARIABLE_ModuleInfo_0_2 = check_hlds__purity__next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
              check_hlds__purity__HeadVar__1_1 = check_hlds__purity__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__purity__compute_purity_for_clauses_7_p_0(
  MR_Word check_hlds__purity__HeadVar__1_1,
  MR_Word * check_hlds__purity__HeadVar__2_2,
  MR_Word check_hlds__purity__PredInfo_3,
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_4,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_5,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_7)
{
  {
    MR_bool check_hlds__purity__succeeded;

    if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__purity__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__purity__STATE_VARIABLE_Info_7 = check_hlds__purity__STATE_VARIABLE_Info_0_6;
        *check_hlds__purity__STATE_VARIABLE_Purity_5 = check_hlds__purity__STATE_VARIABLE_Purity_0_4;
      }
    else
      {
        MR_Word check_hlds__purity__Clause0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__purity__Clauses0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__purity__Clause_17;
        MR_Word check_hlds__purity__ClausePurity_22;
        MR_Word check_hlds__purity__STATE_VARIABLE_Info_27_27;
        MR_Word check_hlds__purity__STATE_VARIABLE_Purity_28_28;
        MR_Word * check_hlds__purity__AddrClauses_31;

        {
          check_hlds__purity__compute_purity_for_clause_6_p_0(check_hlds__purity__Clause0_15, &check_hlds__purity__Clause_17, check_hlds__purity__PredInfo_3, &check_hlds__purity__ClausePurity_22, check_hlds__purity__STATE_VARIABLE_Info_0_6, &check_hlds__purity__STATE_VARIABLE_Info_27_27);
        }
        {
          check_hlds__purity__STATE_VARIABLE_Purity_28_28 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__STATE_VARIABLE_Purity_0_4, check_hlds__purity__ClausePurity_22);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__purity__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__Clause_17));
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
        }
        check_hlds__purity__AddrClauses_31 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *check_hlds__purity__HeadVar__2_2, (MR_Integer) 1));
        {
          check_hlds__purity__LCMCpr_compute_purity_for_clauses_1_7_p_0(check_hlds__purity__Clauses0_16, check_hlds__purity__AddrClauses_31, check_hlds__purity__PredInfo_3, check_hlds__purity__STATE_VARIABLE_Purity_28_28, check_hlds__purity__STATE_VARIABLE_Purity_5, check_hlds__purity__STATE_VARIABLE_Info_27_27, check_hlds__purity__STATE_VARIABLE_Info_7);
        }
      }
  }
}

static void MR_CALL 
check_hlds__purity__LCMCpr_compute_purity_for_clauses_1_7_p_0(
  MR_Word check_hlds__purity__HeadVar__1_1,
  MR_Word * check_hlds__purity__AddrOfHeadVar__2_32,
  MR_Word check_hlds__purity__PredInfo_3,
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_4,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_5,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__purity__succeeded;

        if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__purity__AddrOfHeadVar__2_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *check_hlds__purity__STATE_VARIABLE_Info_7 = check_hlds__purity__STATE_VARIABLE_Info_0_6;
            *check_hlds__purity__STATE_VARIABLE_Purity_5 = check_hlds__purity__STATE_VARIABLE_Purity_0_4;
          }
        else
          {
            MR_Word check_hlds__purity__Clause0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__purity__Clauses0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__purity__Clause_17;
            MR_Word check_hlds__purity__ClausePurity_22;
            MR_Word check_hlds__purity__STATE_VARIABLE_Info_27_27;
            MR_Word check_hlds__purity__STATE_VARIABLE_Purity_28_28;
            MR_Word * check_hlds__purity__AddrClauses_31;
            MR_Word check_hlds__purity__HeadVar__2_33;

            {
              check_hlds__purity__compute_purity_for_clause_6_p_0(check_hlds__purity__Clause0_15, &check_hlds__purity__Clause_17, check_hlds__purity__PredInfo_3, &check_hlds__purity__ClausePurity_22, check_hlds__purity__STATE_VARIABLE_Info_0_6, &check_hlds__purity__STATE_VARIABLE_Info_27_27);
            }
            {
              check_hlds__purity__STATE_VARIABLE_Purity_28_28 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__STATE_VARIABLE_Purity_0_4, check_hlds__purity__ClausePurity_22);
            }
            {
              check_hlds__purity__HeadVar__2_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_33, 0) = ((MR_Box) (check_hlds__purity__Clause_17));
              MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_33, 1) = NULL;
            }
            check_hlds__purity__AddrClauses_31 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_33, (MR_Integer) 1));
            *check_hlds__purity__AddrOfHeadVar__2_32 = check_hlds__purity__HeadVar__2_33;
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__purity__next_value_of_HeadVar__1_1 = check_hlds__purity__Clauses0_16;
              MR_Word * check_hlds__purity__next_value_of_AddrOfHeadVar__2_32 = check_hlds__purity__AddrClauses_31;
              MR_Word check_hlds__purity__next_value_of_STATE_VARIABLE_Purity_0_4 = check_hlds__purity__STATE_VARIABLE_Purity_28_28;
              MR_Word check_hlds__purity__next_value_of_STATE_VARIABLE_Info_0_6 = check_hlds__purity__STATE_VARIABLE_Info_27_27;

              check_hlds__purity__STATE_VARIABLE_Info_0_6 = check_hlds__purity__next_value_of_STATE_VARIABLE_Info_0_6;
              check_hlds__purity__STATE_VARIABLE_Purity_0_4 = check_hlds__purity__next_value_of_STATE_VARIABLE_Purity_0_4;
              check_hlds__purity__AddrOfHeadVar__2_32 = check_hlds__purity__next_value_of_AddrOfHeadVar__2_32;
              check_hlds__purity__HeadVar__1_1 = check_hlds__purity__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__purity__compute_purity_for_clause_6_p_0(
  MR_Word check_hlds__purity__Clause0_7,
  MR_Word * check_hlds__purity__Clause_8,
  MR_Word check_hlds__purity__PredInfo_9,
  MR_Word * check_hlds__purity__Purity_10,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_35,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_36)
{
  {
    MR_bool check_hlds__purity__succeeded;
    MR_Word check_hlds__purity__Goal0_12;
    MR_Word check_hlds__purity__GoalExpr0_13;
    MR_Word check_hlds__purity__GoalInfo0_14;
    MR_Word check_hlds__purity__GoalExpr1_15;
    MR_Word check_hlds__purity__BodyPurity0_16;
    MR_Word check_hlds__purity__ClausePurity_21;
    MR_Word check_hlds__purity__GoalInfo1_22;
    MR_Word check_hlds__purity__Goal1_23;
    MR_Word check_hlds__purity__NeedToRequantify_24;
    MR_Word check_hlds__purity__Goal_31;
    MR_Word check_hlds__purity__STATE_VARIABLE_Info_37_37;
    MR_Word check_hlds__purity__STATE_VARIABLE_Info_39_39;
    MR_Word check_hlds__purity__Var_44;
    MR_Word check_hlds__purity__Var_45;
    MR_Word check_hlds__purity__Var_46;
    MR_Word check_hlds__purity__Var_47;
    MR_Word check_hlds__purity__Var_48;
    MR_Word check_hlds__purity__Var_49;
    MR_Word check_hlds__purity__Var_51;
    MR_Word check_hlds__purity__Var_50;
    MR_Word check_hlds__purity__Var_17;
    MR_Word check_hlds__purity__Var_52;
    MR_Word check_hlds__purity__Var_53;
    MR_Word check_hlds__purity__Var_54;
    MR_Word check_hlds__purity__Var_55;
    MR_Word check_hlds__purity__Var_56;
    MR_Word check_hlds__purity__Var_57;
    MR_Word check_hlds__purity__Var_58;
    MR_Word check_hlds__purity__Var_89;
    MR_Word check_hlds__purity__Var_91;
    MR_Word check_hlds__purity__Var_92;
    MR_Word check_hlds__purity__Var_93;
    MR_Word check_hlds__purity__Var_90;

    {
      check_hlds__purity__Goal0_12 = hlds__hlds_clauses__clause_body_1_f_0(check_hlds__purity__Clause0_7);
    }
    check_hlds__purity__GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_12, (MR_Integer) 0)));
    check_hlds__purity__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_12, (MR_Integer) 1)));
    check_hlds__purity__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)));
    check_hlds__purity__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 1)));
    check_hlds__purity__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 2)));
    check_hlds__purity__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 3)));
    check_hlds__purity__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 4)));
    check_hlds__purity__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 5)));
    check_hlds__purity__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 6)));
    check_hlds__purity__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_35, (MR_Integer) 7)));
    {
      check_hlds__purity__STATE_VARIABLE_Info_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 0) = ((MR_Box) (check_hlds__purity__Var_44));
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 1) = ((MR_Box) (check_hlds__purity__Var_45));
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 2) = ((MR_Box) (check_hlds__purity__Var_46));
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 3) = ((MR_Box) (check_hlds__purity__Var_47));
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 4) = ((MR_Box) (check_hlds__purity__Var_48));
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 5) = ((MR_Box) (check_hlds__purity__Var_49));
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 6) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_37_37, 7) = ((MR_Box) (check_hlds__purity__Var_51));
    }
    {
      check_hlds__purity__compute_expr_purity_7_p_0(check_hlds__purity__GoalExpr0_13, &check_hlds__purity__GoalExpr1_15, check_hlds__purity__GoalInfo0_14, &check_hlds__purity__BodyPurity0_16, &check_hlds__purity__Var_17, check_hlds__purity__STATE_VARIABLE_Info_37_37, &check_hlds__purity__STATE_VARIABLE_Info_39_39);
    }
    {
      MR_Word check_hlds__purity__ProcIds_18;

      {
        check_hlds__purity__ProcIds_18 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__purity__PredInfo_9);
      }
      {
        check_hlds__purity__succeeded = check_hlds__purity__applies_to_all_modes_2_p_0(check_hlds__purity__Clause0_7, check_hlds__purity__ProcIds_18);
      }
    }
    if (!(check_hlds__purity__succeeded))
      {
        {
          MR_Word check_hlds__purity__Markers_19;

          {
            hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__purity__PredInfo_9, &check_hlds__purity__Markers_19);
          }
          {
            check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__Markers_19, (MR_Integer) 18);
          }
        }
        if (!(check_hlds__purity__succeeded))
          {
            MR_Word check_hlds__purity__GoalType_20;

            {
              hlds__hlds_pred__pred_info_get_goal_type_2_p_0(check_hlds__purity__PredInfo_9, &check_hlds__purity__GoalType_20);
            }
            check_hlds__purity__succeeded = (check_hlds__purity__GoalType_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          }
      }
    if (check_hlds__purity__succeeded)
      check_hlds__purity__ClausePurity_21 = (MR_Integer) 0;
    else
      check_hlds__purity__ClausePurity_21 = (MR_Integer) 2;
    {
      *check_hlds__purity__Purity_10 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__BodyPurity0_16, check_hlds__purity__ClausePurity_21);
    }
    {
      hlds__hlds_goal__goal_info_set_purity_3_p_0(*check_hlds__purity__Purity_10, check_hlds__purity__GoalInfo0_14, &check_hlds__purity__GoalInfo1_22);
    }
    {
      check_hlds__purity__Goal1_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_23, 0) = ((MR_Box) (check_hlds__purity__GoalExpr1_15));
      MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_23, 1) = ((MR_Box) (check_hlds__purity__GoalInfo1_22));
    }
    check_hlds__purity__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
    check_hlds__purity__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
    check_hlds__purity__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
    check_hlds__purity__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
    check_hlds__purity__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 4)));
    check_hlds__purity__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 5)));
    check_hlds__purity__NeedToRequantify_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 6)));
    check_hlds__purity__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 7)));
    switch (check_hlds__purity__NeedToRequantify_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          check_hlds__purity__Goal_31 = check_hlds__purity__Goal1_23;
          *check_hlds__purity__STATE_VARIABLE_Info_36 = check_hlds__purity__STATE_VARIABLE_Info_39_39;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__purity__ClausesInfo_25;
          MR_Word check_hlds__purity__HeadVars_26;
          MR_Word check_hlds__purity__VarTypes1_27;
          MR_Word check_hlds__purity__VarSet1_28;
          MR_Word check_hlds__purity__EmptyRttiVarmaps_29;
          MR_Word check_hlds__purity__VarSet_32;
          MR_Word check_hlds__purity__VarTypes_33;
          MR_Word check_hlds__purity__Var_73;
          MR_Word check_hlds__purity__Var_74;
          MR_Word check_hlds__purity__Var_75;
          MR_Word check_hlds__purity__Var_78;
          MR_Word check_hlds__purity__Var_79;
          MR_Word check_hlds__purity__Var_80;
          MR_Word check_hlds__purity__Var_59;
          MR_Word check_hlds__purity__Var_60;
          MR_Word check_hlds__purity__Var_61;
          MR_Word check_hlds__purity__Var_63;
          MR_Word check_hlds__purity__Var_64;
          MR_Word check_hlds__purity__Var_65;
          MR_Word check_hlds__purity___Warnings_30;
          MR_Word check_hlds__purity__Var_34;
          MR_Word check_hlds__purity__Var_76;
          MR_Word check_hlds__purity__Var_77;

          {
            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__purity__PredInfo_9, &check_hlds__purity__ClausesInfo_25);
          }
          {
            hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(check_hlds__purity__ClausesInfo_25, &check_hlds__purity__HeadVars_26);
          }
          check_hlds__purity__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
          check_hlds__purity__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
          check_hlds__purity__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
          check_hlds__purity__VarTypes1_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
          check_hlds__purity__VarSet1_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 4)));
          check_hlds__purity__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 5)));
          check_hlds__purity__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 6)));
          check_hlds__purity__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 7)));
          {
            hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&check_hlds__purity__EmptyRttiVarmaps_29);
          }
          {
            hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, check_hlds__purity__HeadVars_26, &check_hlds__purity___Warnings_30, check_hlds__purity__Goal1_23, &check_hlds__purity__Goal_31, check_hlds__purity__VarSet1_28, &check_hlds__purity__VarSet_32, check_hlds__purity__VarTypes1_27, &check_hlds__purity__VarTypes_33, check_hlds__purity__EmptyRttiVarmaps_29, &check_hlds__purity__Var_34);
          }
          check_hlds__purity__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
          check_hlds__purity__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
          check_hlds__purity__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
          check_hlds__purity__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
          check_hlds__purity__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 4)));
          check_hlds__purity__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 5)));
          check_hlds__purity__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 6)));
          check_hlds__purity__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_39_39, (MR_Integer) 7)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            *check_hlds__purity__STATE_VARIABLE_Info_36 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__Var_73));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__Var_74));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__purity__Var_75));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__purity__VarTypes_33));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__purity__VarSet_32));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__purity__Var_78));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__purity__Var_79));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__purity__Var_80));
          }
        }
        break;
    }
    check_hlds__purity__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause0_7, (MR_Integer) 0)));
    check_hlds__purity__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause0_7, (MR_Integer) 1)));
    check_hlds__purity__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause0_7, (MR_Integer) 2)));
    check_hlds__purity__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause0_7, (MR_Integer) 3)));
    check_hlds__purity__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause0_7, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__purity__Clause_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__Var_89));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__Goal_31));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__purity__Var_91));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__purity__Var_92));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__purity__Var_93));
    }
  }
}

static void MR_CALL 
check_hlds__purity__LCMCpr_compute_goal_purity_1_6_p_0(
  MR_Word check_hlds__purity__Goal0_7,
  MR_Word * check_hlds__purity__AddrOfGoal_29,
  MR_Word * check_hlds__purity__Purity_9,
  MR_Word * check_hlds__purity__ContainsTrace_10,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_16,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_17)
{
  {
    MR_bool check_hlds__purity__succeeded;
    MR_Word check_hlds__purity__Goal_8;
    MR_Word check_hlds__purity__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_7, (MR_Integer) 0)));
    MR_Word check_hlds__purity__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_7, (MR_Integer) 1)));
    MR_Word check_hlds__purity__GoalExpr_14;
    MR_Word check_hlds__purity__GoalInfo_15;
    MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_10_24;

    {
      check_hlds__purity__compute_expr_purity_7_p_0(check_hlds__purity__GoalExpr0_12, &check_hlds__purity__GoalExpr_14, check_hlds__purity__GoalInfo0_13, check_hlds__purity__Purity_9, check_hlds__purity__ContainsTrace_10, check_hlds__purity__STATE_VARIABLE_Info_0_16, check_hlds__purity__STATE_VARIABLE_Info_17);
    }
    {
      hlds__hlds_goal__goal_info_set_purity_3_p_0(*check_hlds__purity__Purity_9, check_hlds__purity__GoalInfo0_13, &check_hlds__purity__STATE_VARIABLE_GoalInfo_10_24);
    }
    switch (*check_hlds__purity__ContainsTrace_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 18, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_24, &check_hlds__purity__GoalInfo_15);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 18, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_24, &check_hlds__purity__GoalInfo_15);
          }
        }
        break;
    }
    {
      check_hlds__purity__Goal_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_8, 0) = ((MR_Box) (check_hlds__purity__GoalExpr_14));
      MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_8, 1) = ((MR_Box) (check_hlds__purity__GoalInfo_15));
    }
    *check_hlds__purity__AddrOfGoal_29 = check_hlds__purity__Goal_8;
  }
}

static void MR_CALL 
check_hlds__purity__LCMCpr_compute_parallel_goals_purity_1_8_p_0(
  MR_Word check_hlds__purity__HeadVar__1_1,
  MR_Word * check_hlds__purity__AddrOfHeadVar__2_90,
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__purity__succeeded;

        if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__purity__AddrOfHeadVar__2_90 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *check_hlds__purity__STATE_VARIABLE_Info_8 = check_hlds__purity__STATE_VARIABLE_Info_0_7;
            *check_hlds__purity__STATE_VARIABLE_ContainsTrace_6 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5;
            *check_hlds__purity__STATE_VARIABLE_Purity_4 = check_hlds__purity__STATE_VARIABLE_Purity_0_3;
          }
        else
          {
            MR_Word check_hlds__purity__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__purity__Goals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__purity__Goal_20;
            MR_Word check_hlds__purity__GoalPurity_25;
            MR_Word check_hlds__purity__GoalContainsTrace_26;
            MR_Word check_hlds__purity__STATE_VARIABLE_Info_37_37;
            MR_Word check_hlds__purity__STATE_VARIABLE_Info_38_38;
            MR_Word check_hlds__purity__STATE_VARIABLE_Purity_39_39;
            MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_40_40;
            MR_Word check_hlds__purity__GoalExpr0_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_18, (MR_Integer) 0)));
            MR_Word check_hlds__purity__GoalInfo0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_18, (MR_Integer) 1)));
            MR_Word check_hlds__purity__GoalExpr_53;
            MR_Word check_hlds__purity__GoalInfo_54;
            MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_10_61;
            MR_Word * check_hlds__purity__AddrGoals_89;
            MR_Word check_hlds__purity__HeadVar__2_91;

            {
              check_hlds__purity__compute_expr_purity_7_p_0(check_hlds__purity__GoalExpr0_51, &check_hlds__purity__GoalExpr_53, check_hlds__purity__GoalInfo0_52, &check_hlds__purity__GoalPurity_25, &check_hlds__purity__GoalContainsTrace_26, check_hlds__purity__STATE_VARIABLE_Info_0_7, &check_hlds__purity__STATE_VARIABLE_Info_37_37);
            }
            {
              hlds__hlds_goal__goal_info_set_purity_3_p_0(check_hlds__purity__GoalPurity_25, check_hlds__purity__GoalInfo0_52, &check_hlds__purity__STATE_VARIABLE_GoalInfo_10_61);
            }
            switch (check_hlds__purity__GoalContainsTrace_26) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  {
                    hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 18, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_61, &check_hlds__purity__GoalInfo_54);
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  {
                    hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 18, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_61, &check_hlds__purity__GoalInfo_54);
                  }
                }
                break;
            }
            {
              check_hlds__purity__Goal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_20, 0) = ((MR_Box) (check_hlds__purity__GoalExpr_53));
              MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_20, 1) = ((MR_Box) (check_hlds__purity__GoalInfo_54));
            }
            switch (check_hlds__purity__GoalPurity_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                {
                  MR_Word check_hlds__purity__GoalInfo0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_18, (MR_Integer) 1)));
                  MR_Word check_hlds__purity__Context_29;
                  MR_Word check_hlds__purity__Spec_30;
                  MR_String check_hlds__purity__PurityName_69;
                  MR_Word check_hlds__purity__Pieces_70;
                  MR_Word check_hlds__purity__Msg_71;
                  MR_Word check_hlds__purity__Var_74;
                  MR_Word check_hlds__purity__Var_75;
                  MR_String check_hlds__purity__Var_76;
                  MR_Word check_hlds__purity__Var_82;
                  MR_Word check_hlds__purity__Var_83;
                  MR_Word check_hlds__purity__Var_87;
                  MR_Word check_hlds__purity__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_18, (MR_Integer) 0)));

                  {
                    check_hlds__purity__Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo0_28);
                  }
                  {
                    parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__GoalPurity_25, &check_hlds__purity__PurityName_69);
                  }
                  {
                    check_hlds__purity__Var_76 = mercury__string__f_43_43_2_f_0(check_hlds__purity__PurityName_69, (MR_String) ",");
                  }
                  {
                    check_hlds__purity__Var_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), check_hlds__purity__Var_75, 0) = ((MR_Box) (check_hlds__purity__Var_76));
                  }
                  {
                    check_hlds__purity__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__purity__Var_74, 0) = ((MR_Box) (check_hlds__purity__Var_75));
                    MR_hl_field(MR_mktag(1), check_hlds__purity__Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[65])));
                  }
                  {
                    check_hlds__purity__Pieces_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[63])));
                    MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_70, 1) = ((MR_Box) (check_hlds__purity__Var_74));
                  }
                  {
                    check_hlds__purity__Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__purity__Var_83, 0) = ((MR_Box) (check_hlds__purity__Pieces_70));
                  }
                  {
                    check_hlds__purity__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__purity__Var_82, 0) = ((MR_Box) (check_hlds__purity__Var_83));
                    MR_hl_field(MR_mktag(1), check_hlds__purity__Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    check_hlds__purity__Msg_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_71, 0) = ((MR_Box) (check_hlds__purity__Context_29));
                    MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_71, 1) = ((MR_Box) (check_hlds__purity__Var_82));
                  }
                  {
                    check_hlds__purity__Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__purity__Var_87, 0) = ((MR_Box) (check_hlds__purity__Msg_71));
                    MR_hl_field(MR_mktag(1), check_hlds__purity__Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    check_hlds__purity__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
                    MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_30, 2) = ((MR_Box) (check_hlds__purity__Var_87));
                  }
                  {
                    check_hlds__purity__purity_info_add_message_3_p_0(check_hlds__purity__Spec_30, check_hlds__purity__STATE_VARIABLE_Info_37_37, &check_hlds__purity__STATE_VARIABLE_Info_38_38);
                  }
                }
                break;
              case (MR_Integer) 0:
                check_hlds__purity__STATE_VARIABLE_Info_38_38 = check_hlds__purity__STATE_VARIABLE_Info_37_37;
                break;
              case (MR_Integer) 1:
                check_hlds__purity__STATE_VARIABLE_Info_38_38 = check_hlds__purity__STATE_VARIABLE_Info_37_37;
                break;
            }
            {
              check_hlds__purity__STATE_VARIABLE_Purity_39_39 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__GoalPurity_25, check_hlds__purity__STATE_VARIABLE_Purity_0_3);
            }
            {
              check_hlds__purity__STATE_VARIABLE_ContainsTrace_40_40 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__purity__GoalContainsTrace_26, check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5);
            }
            {
              check_hlds__purity__HeadVar__2_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_91, 0) = ((MR_Box) (check_hlds__purity__Goal_20));
              MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_91, 1) = NULL;
            }
            check_hlds__purity__AddrGoals_89 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_91, (MR_Integer) 1));
            *check_hlds__purity__AddrOfHeadVar__2_90 = check_hlds__purity__HeadVar__2_91;
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__purity__next_value_of_HeadVar__1_1 = check_hlds__purity__Goals0_19;
              MR_Word * check_hlds__purity__next_value_of_AddrOfHeadVar__2_90 = check_hlds__purity__AddrGoals_89;
              MR_Word check_hlds__purity__next_value_of_STATE_VARIABLE_Purity_0_3 = check_hlds__purity__STATE_VARIABLE_Purity_39_39;
              MR_Word check_hlds__purity__next_value_of_STATE_VARIABLE_ContainsTrace_0_5 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_40_40;
              MR_Word check_hlds__purity__next_value_of_STATE_VARIABLE_Info_0_7 = check_hlds__purity__STATE_VARIABLE_Info_38_38;

              check_hlds__purity__STATE_VARIABLE_Info_0_7 = check_hlds__purity__next_value_of_STATE_VARIABLE_Info_0_7;
              check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5 = check_hlds__purity__next_value_of_STATE_VARIABLE_ContainsTrace_0_5;
              check_hlds__purity__STATE_VARIABLE_Purity_0_3 = check_hlds__purity__next_value_of_STATE_VARIABLE_Purity_0_3;
              check_hlds__purity__AddrOfHeadVar__2_90 = check_hlds__purity__next_value_of_AddrOfHeadVar__2_90;
              check_hlds__purity__HeadVar__1_1 = check_hlds__purity__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__purity__LCMCpr_compute_cases_purity_1_8_p_0(
  MR_Word check_hlds__purity__HeadVar__1_1,
  MR_Word * check_hlds__purity__AddrOfHeadVar__2_66,
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__purity__succeeded;

        if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__purity__AddrOfHeadVar__2_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *check_hlds__purity__STATE_VARIABLE_Info_8 = check_hlds__purity__STATE_VARIABLE_Info_0_7;
            *check_hlds__purity__STATE_VARIABLE_ContainsTrace_6 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5;
            *check_hlds__purity__STATE_VARIABLE_Purity_4 = check_hlds__purity__STATE_VARIABLE_Purity_0_3;
          }
        else
          {
            MR_Word check_hlds__purity__Case0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__purity__Cases0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__purity__Case_20;
            MR_Word check_hlds__purity__MainConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Case0_18, (MR_Integer) 0)));
            MR_Word check_hlds__purity__OtherConsIds_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Case0_18, (MR_Integer) 1)));
            MR_Word check_hlds__purity__Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Case0_18, (MR_Integer) 2)));
            MR_Word check_hlds__purity__Goal_28;
            MR_Word check_hlds__purity__GoalPurity_29;
            MR_Word check_hlds__purity__GoalContainsTrace_30;
            MR_Word check_hlds__purity__STATE_VARIABLE_Info_37_37;
            MR_Word check_hlds__purity__STATE_VARIABLE_Purity_38_38;
            MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_39_39;
            MR_Word check_hlds__purity__GoalExpr0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_27, (MR_Integer) 0)));
            MR_Word check_hlds__purity__GoalInfo0_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_27, (MR_Integer) 1)));
            MR_Word check_hlds__purity__GoalExpr_52;
            MR_Word check_hlds__purity__GoalInfo_53;
            MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_10_60;
            MR_Word * check_hlds__purity__AddrCases_65;
            MR_Word check_hlds__purity__HeadVar__2_67;

            {
              check_hlds__purity__compute_expr_purity_7_p_0(check_hlds__purity__GoalExpr0_50, &check_hlds__purity__GoalExpr_52, check_hlds__purity__GoalInfo0_51, &check_hlds__purity__GoalPurity_29, &check_hlds__purity__GoalContainsTrace_30, check_hlds__purity__STATE_VARIABLE_Info_0_7, &check_hlds__purity__STATE_VARIABLE_Info_37_37);
            }
            {
              hlds__hlds_goal__goal_info_set_purity_3_p_0(check_hlds__purity__GoalPurity_29, check_hlds__purity__GoalInfo0_51, &check_hlds__purity__STATE_VARIABLE_GoalInfo_10_60);
            }
            switch (check_hlds__purity__GoalContainsTrace_30) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  {
                    hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 18, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_60, &check_hlds__purity__GoalInfo_53);
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  {
                    hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 18, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_60, &check_hlds__purity__GoalInfo_53);
                  }
                }
                break;
            }
            {
              check_hlds__purity__Goal_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_28, 0) = ((MR_Box) (check_hlds__purity__GoalExpr_52));
              MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_28, 1) = ((MR_Box) (check_hlds__purity__GoalInfo_53));
            }
            {
              check_hlds__purity__Case_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__purity__Case_20, 0) = ((MR_Box) (check_hlds__purity__MainConsId_25));
              MR_hl_field(MR_mktag(0), check_hlds__purity__Case_20, 1) = ((MR_Box) (check_hlds__purity__OtherConsIds_26));
              MR_hl_field(MR_mktag(0), check_hlds__purity__Case_20, 2) = ((MR_Box) (check_hlds__purity__Goal_28));
            }
            {
              check_hlds__purity__STATE_VARIABLE_Purity_38_38 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__GoalPurity_29, check_hlds__purity__STATE_VARIABLE_Purity_0_3);
            }
            {
              check_hlds__purity__STATE_VARIABLE_ContainsTrace_39_39 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__purity__GoalContainsTrace_30, check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5);
            }
            {
              check_hlds__purity__HeadVar__2_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_67, 0) = ((MR_Box) (check_hlds__purity__Case_20));
              MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_67, 1) = NULL;
            }
            check_hlds__purity__AddrCases_65 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_67, (MR_Integer) 1));
            *check_hlds__purity__AddrOfHeadVar__2_66 = check_hlds__purity__HeadVar__2_67;
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__purity__next_value_of_HeadVar__1_1 = check_hlds__purity__Cases0_19;
              MR_Word * check_hlds__purity__next_value_of_AddrOfHeadVar__2_66 = check_hlds__purity__AddrCases_65;
              MR_Word check_hlds__purity__next_value_of_STATE_VARIABLE_Purity_0_3 = check_hlds__purity__STATE_VARIABLE_Purity_38_38;
              MR_Word check_hlds__purity__next_value_of_STATE_VARIABLE_ContainsTrace_0_5 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_39_39;
              MR_Word check_hlds__purity__next_value_of_STATE_VARIABLE_Info_0_7 = check_hlds__purity__STATE_VARIABLE_Info_37_37;

              check_hlds__purity__STATE_VARIABLE_Info_0_7 = check_hlds__purity__next_value_of_STATE_VARIABLE_Info_0_7;
              check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5 = check_hlds__purity__next_value_of_STATE_VARIABLE_ContainsTrace_0_5;
              check_hlds__purity__STATE_VARIABLE_Purity_0_3 = check_hlds__purity__next_value_of_STATE_VARIABLE_Purity_0_3;
              check_hlds__purity__AddrOfHeadVar__2_66 = check_hlds__purity__next_value_of_AddrOfHeadVar__2_66;
              check_hlds__purity__HeadVar__1_1 = check_hlds__purity__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__purity__LCMCpr_compute_goals_purity_1_8_p_0(
  MR_Word check_hlds__purity__HeadVar__1_1,
  MR_Word * check_hlds__purity__AddrOfHeadVar__2_63,
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__purity__succeeded;

        if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__purity__AddrOfHeadVar__2_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *check_hlds__purity__STATE_VARIABLE_Info_8 = check_hlds__purity__STATE_VARIABLE_Info_0_7;
            *check_hlds__purity__STATE_VARIABLE_ContainsTrace_6 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5;
            *check_hlds__purity__STATE_VARIABLE_Purity_4 = check_hlds__purity__STATE_VARIABLE_Purity_0_3;
          }
        else
          {
            MR_Word check_hlds__purity__HeadGoal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__purity__TailGoals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__purity__HeadGoal_24;
            MR_Word check_hlds__purity__GoalPurity_25;
            MR_Word check_hlds__purity__GoalContainsTrace_26;
            MR_Word check_hlds__purity__STATE_VARIABLE_Info_34_34;
            MR_Word check_hlds__purity__STATE_VARIABLE_Purity_35_35;
            MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_36_36;
            MR_Word check_hlds__purity__GoalExpr0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadGoal0_18, (MR_Integer) 0)));
            MR_Word check_hlds__purity__GoalInfo0_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadGoal0_18, (MR_Integer) 1)));
            MR_Word check_hlds__purity__GoalExpr_49;
            MR_Word check_hlds__purity__GoalInfo_50;
            MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_10_57;
            MR_Word * check_hlds__purity__AddrTailGoals_62;
            MR_Word check_hlds__purity__HeadVar__2_64;

            {
              check_hlds__purity__compute_expr_purity_7_p_0(check_hlds__purity__GoalExpr0_47, &check_hlds__purity__GoalExpr_49, check_hlds__purity__GoalInfo0_48, &check_hlds__purity__GoalPurity_25, &check_hlds__purity__GoalContainsTrace_26, check_hlds__purity__STATE_VARIABLE_Info_0_7, &check_hlds__purity__STATE_VARIABLE_Info_34_34);
            }
            {
              hlds__hlds_goal__goal_info_set_purity_3_p_0(check_hlds__purity__GoalPurity_25, check_hlds__purity__GoalInfo0_48, &check_hlds__purity__STATE_VARIABLE_GoalInfo_10_57);
            }
            switch (check_hlds__purity__GoalContainsTrace_26) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  {
                    hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 18, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_57, &check_hlds__purity__GoalInfo_50);
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  {
                    hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 18, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_57, &check_hlds__purity__GoalInfo_50);
                  }
                }
                break;
            }
            {
              check_hlds__purity__HeadGoal_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__purity__HeadGoal_24, 0) = ((MR_Box) (check_hlds__purity__GoalExpr_49));
              MR_hl_field(MR_mktag(0), check_hlds__purity__HeadGoal_24, 1) = ((MR_Box) (check_hlds__purity__GoalInfo_50));
            }
            {
              check_hlds__purity__STATE_VARIABLE_Purity_35_35 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__GoalPurity_25, check_hlds__purity__STATE_VARIABLE_Purity_0_3);
            }
            {
              check_hlds__purity__STATE_VARIABLE_ContainsTrace_36_36 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__purity__GoalContainsTrace_26, check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5);
            }
            {
              check_hlds__purity__HeadVar__2_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_64, 0) = ((MR_Box) (check_hlds__purity__HeadGoal_24));
              MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_64, 1) = NULL;
            }
            check_hlds__purity__AddrTailGoals_62 = (MR_Word *) &(MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__2_64, (MR_Integer) 1));
            *check_hlds__purity__AddrOfHeadVar__2_63 = check_hlds__purity__HeadVar__2_64;
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__purity__next_value_of_HeadVar__1_1 = check_hlds__purity__TailGoals0_19;
              MR_Word * check_hlds__purity__next_value_of_AddrOfHeadVar__2_63 = check_hlds__purity__AddrTailGoals_62;
              MR_Word check_hlds__purity__next_value_of_STATE_VARIABLE_Purity_0_3 = check_hlds__purity__STATE_VARIABLE_Purity_35_35;
              MR_Word check_hlds__purity__next_value_of_STATE_VARIABLE_ContainsTrace_0_5 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_36_36;
              MR_Word check_hlds__purity__next_value_of_STATE_VARIABLE_Info_0_7 = check_hlds__purity__STATE_VARIABLE_Info_34_34;

              check_hlds__purity__STATE_VARIABLE_Info_0_7 = check_hlds__purity__next_value_of_STATE_VARIABLE_Info_0_7;
              check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5 = check_hlds__purity__next_value_of_STATE_VARIABLE_ContainsTrace_0_5;
              check_hlds__purity__STATE_VARIABLE_Purity_0_3 = check_hlds__purity__next_value_of_STATE_VARIABLE_Purity_0_3;
              check_hlds__purity__AddrOfHeadVar__2_63 = check_hlds__purity__next_value_of_AddrOfHeadVar__2_63;
              check_hlds__purity__HeadVar__1_1 = check_hlds__purity__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__purity__compute_goal_purity_in_fgt_ptc_11_p_0(
  MR_Word check_hlds__purity__HeadVar__1_1,
  MR_Word check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_0_2,
  MR_Word * check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_3,
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_4,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_5,
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6,
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_7,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_8,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_9,
  MR_Word check_hlds__purity__STATE_VARIABLE_Invariants_0_10,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Invariants_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__purity__succeeded;

        if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__purity__STATE_VARIABLE_Invariants_11 = check_hlds__purity__STATE_VARIABLE_Invariants_0_10;
            *check_hlds__purity__STATE_VARIABLE_Info_9 = check_hlds__purity__STATE_VARIABLE_Info_0_8;
            *check_hlds__purity__STATE_VARIABLE_ContainsTrace_7 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6;
            *check_hlds__purity__STATE_VARIABLE_Purity_5 = check_hlds__purity__STATE_VARIABLE_Purity_0_4;
            *check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_3 = check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_0_2;
          }
        else
          {
            MR_Word check_hlds__purity__Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__purity__Goals0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__purity__GoalExpr0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_27, (MR_Integer) 0)));
            MR_Word check_hlds__purity__GoalInfo0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_27, (MR_Integer) 1)));
            MR_Word check_hlds__purity__XVar_44;
            MR_Word check_hlds__purity__Mode_45;
            MR_Word check_hlds__purity__Unification_46;
            MR_Word check_hlds__purity__UnifyContext_47;
            MR_Word check_hlds__purity__ConsId_48;
            MR_Word check_hlds__purity__YVars_49;
            MR_Word check_hlds__purity__ModuleInfo_50;
            MR_Word check_hlds__purity__PredInfo0_51;
            MR_Word check_hlds__purity__VarTypes0_52;
            MR_Word check_hlds__purity__VarSet0_53;
            MR_Word check_hlds__purity__PredInfo_54;
            MR_Word check_hlds__purity__VarSet_55;
            MR_Word check_hlds__purity__VarTypes_56;
            MR_Word check_hlds__purity__Goal1_57;
            MR_Word check_hlds__purity__IsPlainUnify_58;
            MR_Word check_hlds__purity__GoalExpr1_59;
            MR_Word check_hlds__purity__GoalInfo1_60;
            MR_Word check_hlds__purity__MarkedSubGoal_69;
            MR_Word check_hlds__purity__STATE_VARIABLE_Purity_100_100;
            MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_101_101;
            MR_Word check_hlds__purity__STATE_VARIABLE_Invariants_102_102;
            MR_Word check_hlds__purity__STATE_VARIABLE_Info_118_118;
            MR_Word check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_121_121;
            MR_Word check_hlds__purity__XVarPrime_36;
            MR_Word check_hlds__purity__ModePrime_38;
            MR_Word check_hlds__purity__UnificationPrime_39;
            MR_Word check_hlds__purity__UnifyContextPrime_40;
            MR_Word check_hlds__purity__ConsIdPrime_41;
            MR_Word check_hlds__purity__YVarsPrime_43;
            MR_Word check_hlds__purity__Y_37;
            MR_Word check_hlds__purity__Var_42;
            MR_Word check_hlds__purity__Var_134;
            MR_Word check_hlds__purity__Var_138;
            MR_Word check_hlds__purity__Var_139;
            MR_Word check_hlds__purity__Var_140;

            check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__GoalExpr0_34)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__purity__succeeded)
              {
                check_hlds__purity__XVarPrime_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_34, (MR_Integer) 0)));
                check_hlds__purity__Y_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_34, (MR_Integer) 1)));
                check_hlds__purity__ModePrime_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_34, (MR_Integer) 2)));
                check_hlds__purity__UnificationPrime_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_34, (MR_Integer) 3)));
                check_hlds__purity__UnifyContextPrime_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_34, (MR_Integer) 4)));
                check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__Y_37)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__purity__succeeded)
                  {
                    check_hlds__purity__ConsIdPrime_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Y_37, (MR_Integer) 0)));
                    check_hlds__purity__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Y_37, (MR_Integer) 1)));
                    check_hlds__purity__YVarsPrime_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Y_37, (MR_Integer) 2)));
                  }
              }
            if (check_hlds__purity__succeeded)
              {
                check_hlds__purity__XVar_44 = check_hlds__purity__XVarPrime_36;
                check_hlds__purity__Mode_45 = check_hlds__purity__ModePrime_38;
                check_hlds__purity__Unification_46 = check_hlds__purity__UnificationPrime_39;
                check_hlds__purity__UnifyContext_47 = check_hlds__purity__UnifyContextPrime_40;
                check_hlds__purity__ConsId_48 = check_hlds__purity__ConsIdPrime_41;
                check_hlds__purity__YVars_49 = check_hlds__purity__YVarsPrime_43;
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_goal_purity_in_fgt_ptc\'/11", (MR_String) "from_ground_term_initial conjunct is not functor unify");
                  return;
                }
              }
            check_hlds__purity__ModuleInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
            check_hlds__purity__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
            check_hlds__purity__PredInfo0_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
            check_hlds__purity__VarTypes0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
            check_hlds__purity__VarSet0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
            check_hlds__purity__Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
            check_hlds__purity__Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
            check_hlds__purity__Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
            {
              check_hlds__resolve_unify_functor__resolve_unify_functor_16_p_0(check_hlds__purity__ModuleInfo_50, check_hlds__purity__XVar_44, check_hlds__purity__ConsId_48, check_hlds__purity__YVars_49, check_hlds__purity__Mode_45, check_hlds__purity__Unification_46, check_hlds__purity__UnifyContext_47, check_hlds__purity__GoalInfo0_35, check_hlds__purity__PredInfo0_51, &check_hlds__purity__PredInfo_54, check_hlds__purity__VarSet0_53, &check_hlds__purity__VarSet_55, check_hlds__purity__VarTypes0_52, &check_hlds__purity__VarTypes_56, &check_hlds__purity__Goal1_57, &check_hlds__purity__IsPlainUnify_58);
            }
            check_hlds__purity__GoalExpr1_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_57, (MR_Integer) 0)));
            check_hlds__purity__GoalInfo1_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_57, (MR_Integer) 1)));
            switch (MR_tag((MR_Word) check_hlds__purity__IsPlainUnify_58)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(check_hlds__purity__IsPlainUnify_58)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word check_hlds__purity__STATE_VARIABLE_Info_95_95;
                      MR_Word check_hlds__purity__Goal_133;
                      MR_Word check_hlds__purity__Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
                      MR_Word check_hlds__purity__Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
                      MR_Word check_hlds__purity__Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
                      MR_Word check_hlds__purity__Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
                      MR_Word check_hlds__purity__Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
                      MR_Word check_hlds__purity__Var_170 = check_hlds__purity__Var_162;
                      MR_Word check_hlds__purity__Var_171 = check_hlds__purity__Var_163;
                      MR_Word check_hlds__purity__Var_173 = check_hlds__purity__VarTypes_56;
                      MR_Word check_hlds__purity__Var_175 = check_hlds__purity__Var_167;
                      MR_Word check_hlds__purity__Var_176 = check_hlds__purity__Var_168;
                      MR_Word check_hlds__purity__Var_177 = check_hlds__purity__Var_169;
                      MR_Word check_hlds__purity__Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
                      MR_Word check_hlds__purity__Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
                      MR_Word check_hlds__purity__Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
                      MR_Word check_hlds__purity__Var_70;
                      MR_Word check_hlds__purity__Var_71;
                      MR_Word check_hlds__purity__Var_72;
                      MR_Word check_hlds__purity__Var_73;
                      MR_Word check_hlds__purity__Var_74;

                      {
                        check_hlds__purity__STATE_VARIABLE_Info_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_95_95, 0) = ((MR_Box) (check_hlds__purity__Var_170));
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_95_95, 1) = ((MR_Box) (check_hlds__purity__Var_171));
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_95_95, 2) = ((MR_Box) (check_hlds__purity__PredInfo_54));
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_95_95, 3) = ((MR_Box) (check_hlds__purity__Var_173));
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_95_95, 4) = ((MR_Box) (check_hlds__purity__VarSet_55));
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_95_95, 5) = ((MR_Box) (check_hlds__purity__Var_175));
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_95_95, 6) = ((MR_Box) (check_hlds__purity__Var_176));
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_95_95, 7) = ((MR_Box) (check_hlds__purity__Var_177));
                      }
                      check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__GoalExpr1_59)) == (MR_mktag((MR_Integer) 1)));
                      if (check_hlds__purity__succeeded)
                        {
                          check_hlds__purity__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr1_59, (MR_Integer) 0)));
                          check_hlds__purity__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr1_59, (MR_Integer) 1)));
                          check_hlds__purity__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr1_59, (MR_Integer) 2)));
                          check_hlds__purity__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr1_59, (MR_Integer) 3)));
                          check_hlds__purity__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr1_59, (MR_Integer) 4)));
                          {
                            MR_Word check_hlds__purity__UnifySpecs_127;
                            MR_Word check_hlds__purity__GoalInfo_128;
                            MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_10_194;

                            {
                              check_hlds__purity__check_var_functor_unify_purity_6_p_0(check_hlds__purity__STATE_VARIABLE_Info_95_95, check_hlds__purity__GoalInfo0_35, check_hlds__purity__XVar_44, check_hlds__purity__ConsId_48, check_hlds__purity__YVars_49, &check_hlds__purity__UnifySpecs_127);
                            }
                            {
                              check_hlds__purity__purity_info_add_messages_3_p_0(check_hlds__purity__UnifySpecs_127, check_hlds__purity__STATE_VARIABLE_Info_95_95, &check_hlds__purity__STATE_VARIABLE_Info_118_118);
                            }
                            {
                              hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 0, check_hlds__purity__GoalInfo1_60, &check_hlds__purity__STATE_VARIABLE_GoalInfo_10_194);
                            }
                            {
                              hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 18, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_194, &check_hlds__purity__GoalInfo_128);
                            }
                            {
                              check_hlds__purity__Goal_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_133, 0) = ((MR_Box) (check_hlds__purity__GoalExpr1_59));
                              MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_133, 1) = ((MR_Box) (check_hlds__purity__GoalInfo_128));
                            }
                            check_hlds__purity__STATE_VARIABLE_ContainsTrace_101_101 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6;
                            check_hlds__purity__STATE_VARIABLE_Purity_100_100 = check_hlds__purity__STATE_VARIABLE_Purity_0_4;
                          }
                        }
                      else
                        {
                          MR_Word check_hlds__purity__GoalPurity_75;
                          MR_Word check_hlds__purity__GoalContainsTrace_76;

                          {
                            check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Goal1_57, &check_hlds__purity__Goal_133, &check_hlds__purity__GoalPurity_75, &check_hlds__purity__GoalContainsTrace_76, check_hlds__purity__STATE_VARIABLE_Info_95_95, &check_hlds__purity__STATE_VARIABLE_Info_118_118);
                          }
                          {
                            check_hlds__purity__STATE_VARIABLE_Purity_100_100 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__GoalPurity_75, check_hlds__purity__STATE_VARIABLE_Purity_0_4);
                          }
                          {
                            check_hlds__purity__STATE_VARIABLE_ContainsTrace_101_101 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__purity__GoalContainsTrace_76, check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6);
                          }
                        }
                      {
                        check_hlds__purity__MarkedSubGoal_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__purity__MarkedSubGoal_69, 0) = ((MR_Box) (check_hlds__purity__Goal_133));
                        MR_hl_field(MR_mktag(1), check_hlds__purity__MarkedSubGoal_69, 1) = ((MR_Box) (check_hlds__purity__XVar_44));
                        MR_hl_field(MR_mktag(1), check_hlds__purity__MarkedSubGoal_69, 2) = ((MR_Box) (check_hlds__purity__YVars_49));
                      }
                      check_hlds__purity__STATE_VARIABLE_Invariants_102_102 = (MR_Integer) 1;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word check_hlds__purity__UnifySpecs_66;
                      MR_Word check_hlds__purity__GoalInfo_67;
                      MR_Word check_hlds__purity__Goal_68;
                      MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_10_204;

                      {
                        check_hlds__purity__check_var_functor_unify_purity_6_p_0(check_hlds__purity__STATE_VARIABLE_Info_0_8, check_hlds__purity__GoalInfo0_35, check_hlds__purity__XVar_44, check_hlds__purity__ConsId_48, check_hlds__purity__YVars_49, &check_hlds__purity__UnifySpecs_66);
                      }
                      {
                        check_hlds__purity__purity_info_add_messages_3_p_0(check_hlds__purity__UnifySpecs_66, check_hlds__purity__STATE_VARIABLE_Info_0_8, &check_hlds__purity__STATE_VARIABLE_Info_118_118);
                      }
                      {
                        hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 0, check_hlds__purity__GoalInfo1_60, &check_hlds__purity__STATE_VARIABLE_GoalInfo_10_204);
                      }
                      {
                        hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 18, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_204, &check_hlds__purity__GoalInfo_67);
                      }
                      {
                        check_hlds__purity__Goal_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_68, 0) = ((MR_Box) (check_hlds__purity__GoalExpr1_59));
                        MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_68, 1) = ((MR_Box) (check_hlds__purity__GoalInfo_67));
                      }
                      {
                        check_hlds__purity__MarkedSubGoal_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), check_hlds__purity__MarkedSubGoal_69, 0) = ((MR_Box) (check_hlds__purity__Goal_68));
                        MR_hl_field(MR_mktag(0), check_hlds__purity__MarkedSubGoal_69, 1) = ((MR_Box) (check_hlds__purity__XVar_44));
                        MR_hl_field(MR_mktag(0), check_hlds__purity__MarkedSubGoal_69, 2) = ((MR_Box) (check_hlds__purity__YVars_49));
                      }
                      check_hlds__purity__STATE_VARIABLE_Purity_100_100 = check_hlds__purity__STATE_VARIABLE_Purity_0_4;
                      check_hlds__purity__STATE_VARIABLE_ContainsTrace_101_101 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6;
                      check_hlds__purity__STATE_VARIABLE_Invariants_102_102 = check_hlds__purity__STATE_VARIABLE_Invariants_0_10;
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__purity__Spec_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__IsPlainUnify_58, (MR_Integer) 0)));

                  {
                    check_hlds__purity__purity_info_add_message_3_p_0(check_hlds__purity__Spec_77, check_hlds__purity__STATE_VARIABLE_Info_0_8, &check_hlds__purity__STATE_VARIABLE_Info_118_118);
                  }
                  {
                    check_hlds__purity__MarkedSubGoal_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__purity__MarkedSubGoal_69, 0) = ((MR_Box) (check_hlds__purity__Goal1_57));
                    MR_hl_field(MR_mktag(1), check_hlds__purity__MarkedSubGoal_69, 1) = ((MR_Box) (check_hlds__purity__XVar_44));
                    MR_hl_field(MR_mktag(1), check_hlds__purity__MarkedSubGoal_69, 2) = ((MR_Box) (check_hlds__purity__YVars_49));
                  }
                  check_hlds__purity__STATE_VARIABLE_Invariants_102_102 = (MR_Integer) 1;
                  check_hlds__purity__STATE_VARIABLE_Purity_100_100 = check_hlds__purity__STATE_VARIABLE_Purity_0_4;
                  check_hlds__purity__STATE_VARIABLE_ContainsTrace_101_101 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6;
                }
                break;
            }
            {
              check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_121_121, 0) = ((MR_Box) (check_hlds__purity__MarkedSubGoal_69));
              MR_hl_field(MR_mktag(1), check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_121_121, 1) = ((MR_Box) (check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_0_2));
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__purity__next_value_of_HeadVar__1_1 = check_hlds__purity__Goals0_28;
              MR_Word check_hlds__purity__next_value_of_STATE_VARIABLE_RevMarkedSubGoals_0_2 = check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_121_121;
              MR_Word check_hlds__purity__next_value_of_STATE_VARIABLE_Purity_0_4 = check_hlds__purity__STATE_VARIABLE_Purity_100_100;
              MR_Word check_hlds__purity__next_value_of_STATE_VARIABLE_ContainsTrace_0_6 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_101_101;
              MR_Word check_hlds__purity__next_value_of_STATE_VARIABLE_Info_0_8 = check_hlds__purity__STATE_VARIABLE_Info_118_118;
              MR_Word check_hlds__purity__next_value_of_STATE_VARIABLE_Invariants_0_10 = check_hlds__purity__STATE_VARIABLE_Invariants_102_102;

              check_hlds__purity__STATE_VARIABLE_Invariants_0_10 = check_hlds__purity__next_value_of_STATE_VARIABLE_Invariants_0_10;
              check_hlds__purity__STATE_VARIABLE_Info_0_8 = check_hlds__purity__next_value_of_STATE_VARIABLE_Info_0_8;
              check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_6 = check_hlds__purity__next_value_of_STATE_VARIABLE_ContainsTrace_0_6;
              check_hlds__purity__STATE_VARIABLE_Purity_0_4 = check_hlds__purity__next_value_of_STATE_VARIABLE_Purity_0_4;
              check_hlds__purity__STATE_VARIABLE_RevMarkedSubGoals_0_2 = check_hlds__purity__next_value_of_STATE_VARIABLE_RevMarkedSubGoals_0_2;
              check_hlds__purity__HeadVar__1_1 = check_hlds__purity__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_3(
  MR_Box check_hlds__purity__closure_arg,
  MR_Box check_hlds__purity__wrapper_arg_1,
  MR_Box check_hlds__purity__wrapper_arg_2,
  MR_Box * check_hlds__purity__wrapper_arg_3)
{
  {
    MR_Box check_hlds__purity__closure = check_hlds__purity__closure_arg;
    MR_Word check_hlds__purity__conv4_STATE_VARIABLE_Info_9;

    {
      check_hlds__purity__purity_info_add_message_3_p_0(((MR_Word) check_hlds__purity__wrapper_arg_1), ((MR_Word) check_hlds__purity__wrapper_arg_2), &check_hlds__purity__conv4_STATE_VARIABLE_Info_9);
    }
    *check_hlds__purity__wrapper_arg_3 = ((MR_Box) (check_hlds__purity__conv4_STATE_VARIABLE_Info_9));
  }
}

static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_2(
  MR_Box check_hlds__purity__closure_arg,
  MR_Box check_hlds__purity__wrapper_arg_1,
  MR_Box * check_hlds__purity__wrapper_arg_2,
  MR_Box check_hlds__purity__wrapper_arg_3,
  MR_Box * check_hlds__purity__wrapper_arg_4)
{
  {
    MR_Box check_hlds__purity__closure = check_hlds__purity__closure_arg;
    MR_Word check_hlds__purity__conv2_Goal_9;
    MR_Word check_hlds__purity__conv1_STATE_VARIABLE_Info_31;

    {
      check_hlds__purity__wrap_inner_outer_goals_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__purity__wrapper_arg_1), &check_hlds__purity__conv2_Goal_9, ((MR_Word) check_hlds__purity__wrapper_arg_3), &check_hlds__purity__conv1_STATE_VARIABLE_Info_31);
    }
    *check_hlds__purity__wrapper_arg_2 = ((MR_Box) (check_hlds__purity__conv2_Goal_9));
    *check_hlds__purity__wrapper_arg_4 = ((MR_Box) (check_hlds__purity__conv1_STATE_VARIABLE_Info_31));
  }
}

static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0_1(
  MR_Box check_hlds__purity__closure_arg,
  MR_Box check_hlds__purity__wrapper_arg_1,
  MR_Box * check_hlds__purity__wrapper_arg_2)
{
  {
    MR_Box check_hlds__purity__closure = check_hlds__purity__closure_arg;
    MR_Word check_hlds__purity__conv0_HeadVar__2_2;

    {
      hlds__from_ground_term_util__project_kept_goal_2_p_0(((MR_Word) check_hlds__purity__wrapper_arg_1), &check_hlds__purity__conv0_HeadVar__2_2);
    }
    *check_hlds__purity__wrapper_arg_2 = ((MR_Box) (check_hlds__purity__conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
check_hlds__purity__compute_expr_purity_7_p_0(
  MR_Word check_hlds__purity__GoalExpr0_8,
  MR_Word * check_hlds__purity__GoalExpr_9,
  MR_Word check_hlds__purity__GoalInfo_10,
  MR_Word * check_hlds__purity__Purity_11,
  MR_Word * check_hlds__purity__ContainsTrace_12,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_195,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_196)
{
  {
    MR_bool check_hlds__purity__succeeded;

    switch (MR_tag((MR_Word) check_hlds__purity__GoalExpr0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__purity__Goal0_95 = (MR_Word) MR_body(((MR_Word) check_hlds__purity__GoalExpr0_8), (MR_Integer) 0);
          MR_Word check_hlds__purity__NotGoal0_96;
          MR_Word check_hlds__purity__Goal1_314;
          MR_Word check_hlds__purity__Var_245;
          MR_Word check_hlds__purity__Var_97;

          {
            hlds__hlds_goal__negate_goal_3_p_0(check_hlds__purity__Goal0_95, check_hlds__purity__GoalInfo_10, &check_hlds__purity__NotGoal0_96);
          }
          check_hlds__purity__Var_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__NotGoal0_96, (MR_Integer) 0)));
          check_hlds__purity__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__NotGoal0_96, (MR_Integer) 1)));
          check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__Var_245)) == (MR_mktag((MR_Integer) 0)));
          if (check_hlds__purity__succeeded)
            {
              check_hlds__purity__Goal1_314 = (MR_Word) MR_body(((MR_Word) check_hlds__purity__Var_245), (MR_Integer) 0);
              {
                MR_Word check_hlds__purity__Goal_313;

                {
                  check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Goal1_314, &check_hlds__purity__Goal_313, check_hlds__purity__Purity_11, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_195, check_hlds__purity__STATE_VARIABLE_Info_196);
                }
                *check_hlds__purity__GoalExpr_9 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__purity__Goal_313);
              }
            }
          else
            {
              MR_Word check_hlds__purity__NotGoal1_98;
              MR_Word check_hlds__purity__Var_99;

              {
                check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__NotGoal0_96, &check_hlds__purity__NotGoal1_98, check_hlds__purity__Purity_11, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_195, check_hlds__purity__STATE_VARIABLE_Info_196);
              }
              *check_hlds__purity__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__NotGoal1_98, (MR_Integer) 0)));
              check_hlds__purity__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__NotGoal1_98, (MR_Integer) 1)));
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__purity__LHSVar_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_8, (MR_Integer) 0)));
          MR_Word check_hlds__purity__RHS0_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
          MR_Word check_hlds__purity__Mode_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));
          MR_Word check_hlds__purity__Unification_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_8, (MR_Integer) 3)));
          MR_Word check_hlds__purity__UnifyContext_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_8, (MR_Integer) 4)));

          switch (MR_tag((MR_Word) check_hlds__purity__RHS0_52)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *check_hlds__purity__GoalExpr_9 = check_hlds__purity__GoalExpr0_8;
                *check_hlds__purity__Purity_11 = (MR_Integer) 0;
                *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
                *check_hlds__purity__STATE_VARIABLE_Info_196 = check_hlds__purity__STATE_VARIABLE_Info_0_195;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word check_hlds__purity__ConsId_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__RHS0_52, (MR_Integer) 0)));
                MR_Word check_hlds__purity__Args_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__RHS0_52, (MR_Integer) 2)));
                MR_Word check_hlds__purity__Goal1_83;
                MR_Word check_hlds__purity__Goal_92;
                MR_Word check_hlds__purity__STATE_VARIABLE_Info_255_255;
                MR_Word check_hlds__purity__RunPostTypecheck_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 1)));
                MR_Word check_hlds__purity__Var_387 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 0)));
                MR_Word check_hlds__purity__Var_388 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 2)));
                MR_Word check_hlds__purity__Var_389 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 3)));
                MR_Word check_hlds__purity__Var_390 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 4)));
                MR_Word check_hlds__purity__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__RHS0_52, (MR_Integer) 1)));
                MR_Word check_hlds__purity__Var_391 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 5)));
                MR_Word check_hlds__purity__Var_392 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 6)));
                MR_Word check_hlds__purity__Var_393 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 7)));
                MR_Word check_hlds__purity__Var_257;
                MR_Word check_hlds__purity__Var_90;
                MR_Word check_hlds__purity__Var_85;
                MR_Word check_hlds__purity__Var_86;
                MR_Word check_hlds__purity__Var_87;
                MR_Word check_hlds__purity__Var_88;
                MR_Word check_hlds__purity__Var_89;
                MR_Word check_hlds__purity__Var_93;

                switch (check_hlds__purity__RunPostTypecheck_298) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      {
                        check_hlds__purity__Goal1_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_83, 0) = ((MR_Box) (check_hlds__purity__GoalExpr0_8));
                        MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_83, 1) = ((MR_Box) (check_hlds__purity__GoalInfo_10));
                      }
                      check_hlds__purity__STATE_VARIABLE_Info_255_255 = check_hlds__purity__STATE_VARIABLE_Info_0_195;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word check_hlds__purity__VarSet_81;
                      MR_Word check_hlds__purity__VarTypes_82;
                      MR_Word check_hlds__purity__IsPlainUnify_84;
                      MR_Word check_hlds__purity__STATE_VARIABLE_Info_253_253;
                      MR_Word check_hlds__purity__PredInfo_292;
                      MR_Word check_hlds__purity__Var_422;
                      MR_Word check_hlds__purity__Var_423;
                      MR_Word check_hlds__purity__Var_427;
                      MR_Word check_hlds__purity__Var_428;
                      MR_Word check_hlds__purity__Var_429;
                      MR_Word check_hlds__purity__Var_430;
                      MR_Word check_hlds__purity__Var_431;
                      MR_Word check_hlds__purity__Var_433;
                      MR_Word check_hlds__purity__Var_435;
                      MR_Word check_hlds__purity__Var_436;
                      MR_Word check_hlds__purity__Var_437;
                      MR_Word check_hlds__purity__Var_438;
                      MR_Word check_hlds__purity__Var_439;
                      MR_Word check_hlds__purity__Var_441;
                      MR_Word check_hlds__purity__Var_442;
                      MR_Word check_hlds__purity__Var_443;
                      MR_Word check_hlds__purity__Var_444;
                      MR_Word check_hlds__purity__Var_424;
                      MR_Word check_hlds__purity__Var_425;
                      MR_Word check_hlds__purity__Var_426;

                      {
                        check_hlds__resolve_unify_functor__resolve_unify_functor_16_p_0(check_hlds__purity__Var_387, check_hlds__purity__LHSVar_51, check_hlds__purity__ConsId_75, check_hlds__purity__Args_77, check_hlds__purity__Mode_53, check_hlds__purity__Unification_54, check_hlds__purity__UnifyContext_55, check_hlds__purity__GoalInfo_10, check_hlds__purity__Var_388, &check_hlds__purity__PredInfo_292, check_hlds__purity__Var_390, &check_hlds__purity__VarSet_81, check_hlds__purity__Var_389, &check_hlds__purity__VarTypes_82, &check_hlds__purity__Goal1_83, &check_hlds__purity__IsPlainUnify_84);
                      }
                      check_hlds__purity__Var_422 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 0)));
                      check_hlds__purity__Var_423 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 1)));
                      check_hlds__purity__Var_424 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 2)));
                      check_hlds__purity__Var_425 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 3)));
                      check_hlds__purity__Var_426 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 4)));
                      check_hlds__purity__Var_427 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 5)));
                      check_hlds__purity__Var_428 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 6)));
                      check_hlds__purity__Var_429 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 7)));
                      check_hlds__purity__Var_430 = check_hlds__purity__Var_422;
                      check_hlds__purity__Var_431 = check_hlds__purity__Var_423;
                      check_hlds__purity__Var_433 = check_hlds__purity__VarTypes_82;
                      check_hlds__purity__Var_435 = check_hlds__purity__Var_427;
                      check_hlds__purity__Var_436 = check_hlds__purity__Var_428;
                      check_hlds__purity__Var_437 = check_hlds__purity__Var_429;
                      check_hlds__purity__Var_438 = check_hlds__purity__Var_430;
                      check_hlds__purity__Var_439 = check_hlds__purity__Var_431;
                      check_hlds__purity__Var_441 = check_hlds__purity__Var_433;
                      check_hlds__purity__Var_442 = check_hlds__purity__VarSet_81;
                      check_hlds__purity__Var_443 = check_hlds__purity__Var_435;
                      check_hlds__purity__Var_444 = check_hlds__purity__Var_436;
                      {
                        check_hlds__purity__STATE_VARIABLE_Info_253_253 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_253_253, 0) = ((MR_Box) (check_hlds__purity__Var_438));
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_253_253, 1) = ((MR_Box) (check_hlds__purity__Var_439));
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_253_253, 2) = ((MR_Box) (check_hlds__purity__PredInfo_292));
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_253_253, 3) = ((MR_Box) (check_hlds__purity__Var_441));
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_253_253, 4) = ((MR_Box) (check_hlds__purity__Var_442));
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_253_253, 5) = ((MR_Box) (check_hlds__purity__Var_443));
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_253_253, 6) = ((MR_Box) (check_hlds__purity__Var_444));
                        MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_253_253, 7) = ((MR_Box) (check_hlds__purity__Var_437));
                      }
                      switch (MR_tag((MR_Word) check_hlds__purity__IsPlainUnify_84)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          switch (MR_unmkbody(check_hlds__purity__IsPlainUnify_84)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              {
                                {
                                  check_hlds__purity__STATE_VARIABLE_Info_255_255 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_255_255, 0) = ((MR_Box) (check_hlds__purity__Var_438));
                                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_255_255, 1) = ((MR_Box) (check_hlds__purity__Var_439));
                                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_255_255, 2) = ((MR_Box) (check_hlds__purity__PredInfo_292));
                                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_255_255, 3) = ((MR_Box) (check_hlds__purity__Var_441));
                                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_255_255, 4) = ((MR_Box) (check_hlds__purity__Var_442));
                                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_255_255, 5) = ((MR_Box) (check_hlds__purity__Var_443));
                                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_255_255, 6) = ((MR_Box) (check_hlds__purity__Var_444));
                                  MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_255_255, 7) = ((MR_Box) ((MR_Integer) 1));
                                }
                              }
                              break;
                            case (MR_Integer) 1:
                              check_hlds__purity__STATE_VARIABLE_Info_255_255 = check_hlds__purity__STATE_VARIABLE_Info_253_253;
                              break;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word check_hlds__purity__Spec_290 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__IsPlainUnify_84, (MR_Integer) 0)));

                            {
                              check_hlds__purity__purity_info_add_message_3_p_0(check_hlds__purity__Spec_290, check_hlds__purity__STATE_VARIABLE_Info_253_253, &check_hlds__purity__STATE_VARIABLE_Info_255_255);
                            }
                          }
                          break;
                      }
                    }
                    break;
                }
                check_hlds__purity__Var_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_83, (MR_Integer) 0)));
                check_hlds__purity__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal1_83, (MR_Integer) 1)));
                check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__Var_257)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__purity__succeeded)
                  {
                    check_hlds__purity__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Var_257, (MR_Integer) 0)));
                    check_hlds__purity__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Var_257, (MR_Integer) 1)));
                    check_hlds__purity__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Var_257, (MR_Integer) 2)));
                    check_hlds__purity__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Var_257, (MR_Integer) 3)));
                    check_hlds__purity__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Var_257, (MR_Integer) 4)));
                    {
                      MR_Word check_hlds__purity__UnifySpecs_91;

                      {
                        check_hlds__purity__check_var_functor_unify_purity_6_p_0(check_hlds__purity__STATE_VARIABLE_Info_255_255, check_hlds__purity__GoalInfo_10, check_hlds__purity__LHSVar_51, check_hlds__purity__ConsId_75, check_hlds__purity__Args_77, &check_hlds__purity__UnifySpecs_91);
                      }
                      {
                        check_hlds__purity__purity_info_add_messages_3_p_0(check_hlds__purity__UnifySpecs_91, check_hlds__purity__STATE_VARIABLE_Info_255_255, check_hlds__purity__STATE_VARIABLE_Info_196);
                      }
                      *check_hlds__purity__Purity_11 = (MR_Integer) 0;
                      *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
                      check_hlds__purity__Goal_92 = check_hlds__purity__Goal1_83;
                    }
                  }
                else
                  {
                    check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Goal1_83, &check_hlds__purity__Goal_92, check_hlds__purity__Purity_11, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_255_255, check_hlds__purity__STATE_VARIABLE_Info_196);
                  }
                *check_hlds__purity__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_92, (MR_Integer) 0)));
                check_hlds__purity__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_92, (MR_Integer) 1)));
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word check_hlds__purity__LambdaPurity_56 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 0)))) & (MR_Integer) 3);
                MR_Word check_hlds__purity__Groundness_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                MR_Word check_hlds__purity__PredOrFunc_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                MR_Word check_hlds__purity__LambdaNonLocals_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 2)));
                MR_Word check_hlds__purity__LambdaQuantVars_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 3)));
                MR_Word check_hlds__purity__LambdaModes_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 4)));
                MR_Word check_hlds__purity__LambdaDetism_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 5)));
                MR_Word check_hlds__purity__LambdaGoal0_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__RHS0_52, (MR_Integer) 6)));
                MR_Word check_hlds__purity__LambdaGoalExpr0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__LambdaGoal0_64, (MR_Integer) 0)));
                MR_Word check_hlds__purity__LambdaGoalInfo0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__LambdaGoal0_64, (MR_Integer) 1)));
                MR_Word check_hlds__purity__LambdaGoalExpr_67;
                MR_Word check_hlds__purity__GoalPurity_68;
                MR_Word check_hlds__purity__LambdaGoal_70;
                MR_Word check_hlds__purity__RHS_71;
                MR_Word check_hlds__purity__ClosureSpecs_72;
                MR_Word check_hlds__purity__STATE_VARIABLE_Info_260_260;
                MR_Word check_hlds__purity__STATE_VARIABLE_Info_261_261;
                MR_Word check_hlds__purity__DeclaredPurity_289;
                MR_Word check_hlds__purity__Var_69;

                {
                  check_hlds__purity__compute_expr_purity_7_p_0(check_hlds__purity__LambdaGoalExpr0_65, &check_hlds__purity__LambdaGoalExpr_67, check_hlds__purity__LambdaGoalInfo0_66, &check_hlds__purity__GoalPurity_68, &check_hlds__purity__Var_69, check_hlds__purity__STATE_VARIABLE_Info_0_195, &check_hlds__purity__STATE_VARIABLE_Info_260_260);
                }
                {
                  check_hlds__purity__LambdaGoal_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__purity__LambdaGoal_70, 0) = ((MR_Box) (check_hlds__purity__LambdaGoalExpr_67));
                  MR_hl_field(MR_mktag(0), check_hlds__purity__LambdaGoal_70, 1) = ((MR_Box) (check_hlds__purity__LambdaGoalInfo0_66));
                }
                {
                  check_hlds__purity__RHS_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), check_hlds__purity__RHS_71, 0) = ((MR_Box) ((check_hlds__purity__LambdaPurity_56 | ((((check_hlds__purity__Groundness_57 << (MR_Integer) 2)) | ((check_hlds__purity__PredOrFunc_58 << (MR_Integer) 3)))))));
                  MR_hl_field(MR_mktag(2), check_hlds__purity__RHS_71, 1) = (MR_Integer) 0;
                  MR_hl_field(MR_mktag(2), check_hlds__purity__RHS_71, 2) = ((MR_Box) (check_hlds__purity__LambdaNonLocals_60));
                  MR_hl_field(MR_mktag(2), check_hlds__purity__RHS_71, 3) = ((MR_Box) (check_hlds__purity__LambdaQuantVars_61));
                  MR_hl_field(MR_mktag(2), check_hlds__purity__RHS_71, 4) = ((MR_Box) (check_hlds__purity__LambdaModes_62));
                  MR_hl_field(MR_mktag(2), check_hlds__purity__RHS_71, 5) = ((MR_Box) (check_hlds__purity__LambdaDetism_63));
                  MR_hl_field(MR_mktag(2), check_hlds__purity__RHS_71, 6) = ((MR_Box) (check_hlds__purity__LambdaGoal_70));
                }
                {
                  check_hlds__purity__check_closure_purity_4_p_0(check_hlds__purity__GoalInfo_10, check_hlds__purity__LambdaPurity_56, check_hlds__purity__GoalPurity_68, &check_hlds__purity__ClosureSpecs_72);
                }
                {
                  check_hlds__purity__purity_info_add_messages_3_p_0(check_hlds__purity__ClosureSpecs_72, check_hlds__purity__STATE_VARIABLE_Info_260_260, &check_hlds__purity__STATE_VARIABLE_Info_261_261);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__purity__GoalExpr_9 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__LHSVar_51));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__purity__RHS_71));
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__purity__Mode_53));
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__purity__Unification_54));
                  MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__purity__UnifyContext_55));
                }
                {
                  check_hlds__purity__DeclaredPurity_289 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__purity__GoalInfo_10);
                }
                switch (check_hlds__purity__DeclaredPurity_289) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 2:
                  case (MR_Integer) 1:
                    {
                      MR_Word check_hlds__purity__Context_73;
                      MR_Word check_hlds__purity__Spec_74;

                      {
                        check_hlds__purity__Context_73 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo_10);
                      }
                      {
                        check_hlds__purity__Spec_74 = check_hlds__purity__impure_unification_expr_error_2_f_0(check_hlds__purity__Context_73, check_hlds__purity__DeclaredPurity_289);
                      }
                      {
                        check_hlds__purity__purity_info_add_message_3_p_0(check_hlds__purity__Spec_74, check_hlds__purity__STATE_VARIABLE_Info_261_261, check_hlds__purity__STATE_VARIABLE_Info_196);
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    *check_hlds__purity__STATE_VARIABLE_Info_196 = check_hlds__purity__STATE_VARIABLE_Info_261_261;
                    break;
                }
                *check_hlds__purity__Purity_11 = (MR_Integer) 0;
                *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__purity__PredId0_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__GoalExpr0_8, (MR_Integer) 0)));
          MR_Integer check_hlds__purity__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
          MR_Word check_hlds__purity__ArgVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));
          MR_Word check_hlds__purity__Status_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__GoalExpr0_8, (MR_Integer) 3)));
          MR_Word check_hlds__purity__MaybeUnifyContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__GoalExpr0_8, (MR_Integer) 4)));
          MR_Word check_hlds__purity__SymName0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__GoalExpr0_8, (MR_Integer) 5)));
          MR_Word check_hlds__purity__RunPostTypecheck_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 1)));
          MR_Word check_hlds__purity__PredInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 2)));
          MR_Word check_hlds__purity__ModuleInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 0)));
          MR_Word check_hlds__purity__CallContext_26;
          MR_Word check_hlds__purity__PredId_27;
          MR_Word check_hlds__purity__DeclaredPurity_31;
          MR_Word check_hlds__purity__Var_368 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 3)));
          MR_Word check_hlds__purity__Var_369 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 4)));
          MR_Word check_hlds__purity__Var_370 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 5)));
          MR_Word check_hlds__purity__Var_371 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 6)));
          MR_Word check_hlds__purity__Var_372 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 7)));

          {
            check_hlds__purity__CallContext_26 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo_10);
          }
          switch (check_hlds__purity__RunPostTypecheck_23) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                check_hlds__purity__PredId_27 = check_hlds__purity__PredId0_17;
                *check_hlds__purity__GoalExpr_9 = check_hlds__purity__GoalExpr0_8;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word check_hlds__purity__SymName_28;
                MR_Word check_hlds__purity__Var_266;
                MR_String check_hlds__purity__Var_267;
                MR_Word check_hlds__purity__Var_268;
                MR_Word check_hlds__purity__Var_269;
                MR_Word check_hlds__purity__Var_523;
                MR_Word check_hlds__purity__InputArg_29;
                MR_Word check_hlds__purity__OutputArg_30;

                {
                  check_hlds__purity__finally_resolve_pred_overloading_8_p_0(check_hlds__purity__ModuleInfo_25, check_hlds__purity__PredInfo_24, check_hlds__purity__PredId0_17, check_hlds__purity__SymName0_22, check_hlds__purity__ArgVars_19, check_hlds__purity__CallContext_26, &check_hlds__purity__PredId_27, &check_hlds__purity__SymName_28);
                }
                check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__SymName_28)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__purity__succeeded)
                  {
                    check_hlds__purity__Var_266 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__SymName_28, (MR_Integer) 0)));
                    check_hlds__purity__Var_267 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__purity__SymName_28, (MR_Integer) 1)));
                    {
                      check_hlds__purity__Var_523 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                    }
                    {
                      check_hlds__purity__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__purity__Var_266, check_hlds__purity__Var_523);
                    }
                    if (check_hlds__purity__succeeded)
                      {
                        check_hlds__purity__succeeded = (strcmp(check_hlds__purity__Var_267, (MR_String) "unsafe_type_cast") == 0);
                        if (check_hlds__purity__succeeded)
                          {
                            check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__ArgVars_19)) == (MR_mktag((MR_Integer) 1)));
                            if (check_hlds__purity__succeeded)
                              {
                                check_hlds__purity__InputArg_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ArgVars_19, (MR_Integer) 0)));
                                check_hlds__purity__Var_268 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ArgVars_19, (MR_Integer) 1)));
                                check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__Var_268)) == (MR_mktag((MR_Integer) 1)));
                                if (check_hlds__purity__succeeded)
                                  {
                                    check_hlds__purity__OutputArg_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Var_268, (MR_Integer) 0)));
                                    check_hlds__purity__Var_269 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Var_268, (MR_Integer) 1)));
                                    check_hlds__purity__succeeded = (check_hlds__purity__Var_269 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  }
                              }
                          }
                      }
                  }
                if (check_hlds__purity__succeeded)
                  {
                    MR_Word check_hlds__purity__Var_275;
                    MR_Word check_hlds__purity__Var_276;
                    MR_Word check_hlds__purity__Var_277;
                    MR_Word check_hlds__purity__Var_278;

                    {
                      check_hlds__purity__Var_276 = parse_tree__prog_mode__in_mode_0_f_0();
                    }
                    {
                      check_hlds__purity__Var_278 = parse_tree__prog_mode__out_mode_0_f_0();
                    }
                    {
                      check_hlds__purity__Var_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_277, 0) = ((MR_Box) (check_hlds__purity__Var_278));
                      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_277, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      check_hlds__purity__Var_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_275, 0) = ((MR_Box) (check_hlds__purity__Var_276));
                      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_275, 1) = ((MR_Box) (check_hlds__purity__Var_277));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                      *check_hlds__purity__GoalExpr_9 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_3[1])));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__ArgVars_19));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__purity__Var_275));
                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) ((MR_Integer) 0));
                    }
                  }
                else
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                    *check_hlds__purity__GoalExpr_9 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__purity__PredId_27));
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__purity__ProcId_18));
                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__purity__ArgVars_19));
                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__purity__Status_20));
                    MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__purity__MaybeUnifyContext_21));
                    MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__purity__SymName_28));
                  }
              }
              break;
          }
          {
            check_hlds__purity__DeclaredPurity_31 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__purity__GoalInfo_10);
          }
          {
            check_hlds__purity__perform_goal_purity_checks_6_p_0(check_hlds__purity__CallContext_26, check_hlds__purity__PredId_27, check_hlds__purity__DeclaredPurity_31, check_hlds__purity__Purity_11, check_hlds__purity__STATE_VARIABLE_Info_0_195, check_hlds__purity__STATE_VARIABLE_Info_196);
          }
          *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__purity__GenericCall0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word check_hlds__purity___ArgVars_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word check_hlds__purity___Modes0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 3)));
              MR_Word check_hlds__purity___MaybeArgRegs_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 4)));
              MR_Word check_hlds__purity___Det_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 5)));

              *check_hlds__purity__GoalExpr_9 = check_hlds__purity__GoalExpr0_8;
              switch (MR_tag((MR_Word) check_hlds__purity__GenericCall0_33)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word check_hlds__purity__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__GenericCall0_33, (MR_Integer) 0)));
                    MR_Word check_hlds__purity__Var_39;
                    MR_Integer check_hlds__purity__Var_40;

                    *check_hlds__purity__Purity_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__GenericCall0_33, (MR_Integer) 1)));
                    check_hlds__purity__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__GenericCall0_33, (MR_Integer) 2)));
                    check_hlds__purity__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__purity__GenericCall0_33, (MR_Integer) 3)));
                  }
                  break;
                case (MR_Integer) 1:
                  *check_hlds__purity__Purity_11 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  *check_hlds__purity__Purity_11 = (MR_Integer) 0;
                  break;
              }
              *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
              *check_hlds__purity__STATE_VARIABLE_Info_196 = check_hlds__purity__STATE_VARIABLE_Info_0_195;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__purity__Attributes_159 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word check_hlds__purity__Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));
              MR_Integer check_hlds__purity__Var_161 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 3)));
              MR_Word check_hlds__purity__Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 4)));
              MR_Word check_hlds__purity__Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 5)));
              MR_Word check_hlds__purity__Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 6)));
              MR_Word check_hlds__purity__Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 7)));

              {
                *check_hlds__purity__Purity_11 = parse_tree__prog_data_foreign__get_purity_1_f_0(check_hlds__purity__Attributes_159);
              }
              *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
              *check_hlds__purity__GoalExpr_9 = check_hlds__purity__GoalExpr0_8;
              *check_hlds__purity__STATE_VARIABLE_Info_196 = check_hlds__purity__STATE_VARIABLE_Info_0_195;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__purity__ConjType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word check_hlds__purity__Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word check_hlds__purity__Goals_16;

              switch (check_hlds__purity__ConjType_14) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    {
                      check_hlds__purity__compute_parallel_goals_purity_8_p_0(check_hlds__purity__Goals0_15, &check_hlds__purity__Goals_16, (MR_Integer) 0, check_hlds__purity__Purity_11, (MR_Integer) 1, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_195, check_hlds__purity__STATE_VARIABLE_Info_196);
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      check_hlds__purity__compute_goals_purity_8_p_0(check_hlds__purity__Goals0_15, &check_hlds__purity__Goals_16, (MR_Integer) 0, check_hlds__purity__Purity_11, (MR_Integer) 1, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_195, check_hlds__purity__STATE_VARIABLE_Info_196);
                    }
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__purity__GoalExpr_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__ConjType_14));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__Goals_16));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word check_hlds__purity__Goals0_311 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word * check_hlds__purity__AddrGoals_526;

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__purity__GoalExpr_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = NULL;
              }
              check_hlds__purity__AddrGoals_526 = (MR_Word *) &(MR_hl_field(MR_mktag(3), *check_hlds__purity__GoalExpr_9, (MR_Integer) 1));
              {
                check_hlds__purity__LCMCpr_compute_goals_purity_1_8_p_0(check_hlds__purity__Goals0_311, check_hlds__purity__AddrGoals_526, (MR_Integer) 0, check_hlds__purity__Purity_11, (MR_Integer) 1, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_195, check_hlds__purity__STATE_VARIABLE_Info_196);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word check_hlds__purity__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word check_hlds__purity__Canfail_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word check_hlds__purity__Cases0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 3)));
              MR_Word * check_hlds__purity__AddrCases_529;

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__purity__GoalExpr_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Var_47));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__Canfail_48));
                MR_hl_field(MR_mktag(3), base, 3) = NULL;
              }
              check_hlds__purity__AddrCases_529 = (MR_Word *) &(MR_hl_field(MR_mktag(3), *check_hlds__purity__GoalExpr_9, (MR_Integer) 3));
              {
                check_hlds__purity__LCMCpr_compute_cases_purity_1_8_p_0(check_hlds__purity__Cases0_49, check_hlds__purity__AddrCases_529, (MR_Integer) 0, check_hlds__purity__Purity_11, (MR_Integer) 1, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_195, check_hlds__purity__STATE_VARIABLE_Info_196);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word check_hlds__purity__Reason0_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word check_hlds__purity__SubGoal0_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));

              switch (MR_tag((MR_Word) check_hlds__purity__Reason0_100)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    MR_Word * check_hlds__purity__AddrSubGoal_527;

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      *check_hlds__purity__GoalExpr_9 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Reason0_100));
                      MR_hl_field(MR_mktag(3), base, 2) = NULL;
                    }
                    check_hlds__purity__AddrSubGoal_527 = (MR_Word *) &(MR_hl_field(MR_mktag(3), *check_hlds__purity__GoalExpr_9, (MR_Integer) 2));
                    {
                      check_hlds__purity__LCMCpr_compute_goal_purity_1_6_p_0(check_hlds__purity__SubGoal0_101, check_hlds__purity__AddrSubGoal_527, check_hlds__purity__Purity_11, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_195, check_hlds__purity__STATE_VARIABLE_Info_196);
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__Reason0_100, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word check_hlds__purity__SubGoal_103;
                        MR_Word check_hlds__purity__Var_104;

                        *check_hlds__purity__Purity_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__Reason0_100, (MR_Integer) 1)));
                        {
                          check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__SubGoal0_101, &check_hlds__purity__SubGoal_103, &check_hlds__purity__Var_104, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_195, check_hlds__purity__STATE_VARIABLE_Info_196);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          *check_hlds__purity__GoalExpr_9 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Reason0_100));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__SubGoal_103));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                      {
                        MR_Word * check_hlds__purity__AddrSubGoal_527;

                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          *check_hlds__purity__GoalExpr_9 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Reason0_100));
                          MR_hl_field(MR_mktag(3), base, 2) = NULL;
                        }
                        check_hlds__purity__AddrSubGoal_527 = (MR_Word *) &(MR_hl_field(MR_mktag(3), *check_hlds__purity__GoalExpr_9, (MR_Integer) 2));
                        {
                          check_hlds__purity__LCMCpr_compute_goal_purity_1_6_p_0(check_hlds__purity__SubGoal0_101, check_hlds__purity__AddrSubGoal_527, check_hlds__purity__Purity_11, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_195, check_hlds__purity__STATE_VARIABLE_Info_196);
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word check_hlds__purity__TermVar_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__Reason0_100, (MR_Integer) 1)));
                        MR_Word check_hlds__purity__Kind0_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__Reason0_100, (MR_Integer) 2)));

                        switch (check_hlds__purity__Kind0_106) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                          case (MR_Integer) 0:
                            {
                              MR_Word check_hlds__purity__SubGoalExpr0_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__SubGoal0_101, (MR_Integer) 0)));
                              MR_Word check_hlds__purity__SubGoalInfo0_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__SubGoal0_101, (MR_Integer) 1)));
                              MR_Word check_hlds__purity__SubGoals0_110;
                              MR_Word check_hlds__purity__PostTypeCheck_111;
                              MR_Word check_hlds__purity__SubGoals0Prime_109;
                              MR_Word check_hlds__purity__Var_231;
                              MR_Word check_hlds__purity__Var_454;
                              MR_Word check_hlds__purity__Var_455;
                              MR_Word check_hlds__purity__Var_456;
                              MR_Word check_hlds__purity__Var_457;
                              MR_Word check_hlds__purity__Var_458;
                              MR_Word check_hlds__purity__Var_459;
                              MR_Word check_hlds__purity__Var_460;

                              check_hlds__purity__succeeded = ((((MR_tag((MR_Word) check_hlds__purity__SubGoalExpr0_107)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__SubGoalExpr0_107, (MR_Integer) 0)))) == (MR_Integer) 2)));
                              if (check_hlds__purity__succeeded)
                                {
                                  check_hlds__purity__Var_231 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__SubGoalExpr0_107, (MR_Integer) 1)));
                                  check_hlds__purity__SubGoals0Prime_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__SubGoalExpr0_107, (MR_Integer) 2)));
                                  check_hlds__purity__succeeded = (check_hlds__purity__Var_231 == (MR_Integer) 0);
                                }
                              if (check_hlds__purity__succeeded)
                                check_hlds__purity__SubGoals0_110 = check_hlds__purity__SubGoals0Prime_109;
                              else
                                {
                                  {
                                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_expr_purity\'/7", (MR_String) "from_ground_term_initial goal is not plain conj");
                                    return;
                                  }
                                }
                              check_hlds__purity__Var_454 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 0)));
                              check_hlds__purity__PostTypeCheck_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 1)));
                              check_hlds__purity__Var_455 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 2)));
                              check_hlds__purity__Var_456 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 3)));
                              check_hlds__purity__Var_457 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 4)));
                              check_hlds__purity__Var_458 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 5)));
                              check_hlds__purity__Var_459 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 6)));
                              check_hlds__purity__Var_460 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 7)));
                              switch (check_hlds__purity__PostTypeCheck_111) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 1:
                                  {
                                    MR_Word check_hlds__purity__Specs_121;

                                    *check_hlds__purity__GoalExpr_9 = check_hlds__purity__GoalExpr0_8;
                                    {
                                      check_hlds__purity__compute_goal_purity_in_fgt_no_ptc_4_p_0(check_hlds__purity__SubGoals0_110, check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__purity__Specs_121);
                                    }
                                    {
                                      check_hlds__purity__purity_info_add_messages_3_p_0(check_hlds__purity__Specs_121, check_hlds__purity__STATE_VARIABLE_Info_0_195, check_hlds__purity__STATE_VARIABLE_Info_196);
                                    }
                                    *check_hlds__purity__Purity_11 = (MR_Integer) 0;
                                    *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
                                  }
                                  break;
                                case (MR_Integer) 0:
                                  {
                                    MR_Word check_hlds__purity__RevMarkedSubGoals_112;
                                    MR_Word check_hlds__purity__Invariants_113;

                                    {
                                      check_hlds__purity__compute_goal_purity_in_fgt_ptc_11_p_0(check_hlds__purity__SubGoals0_110, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__purity__RevMarkedSubGoals_112, (MR_Integer) 0, check_hlds__purity__Purity_11, (MR_Integer) 1, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_195, check_hlds__purity__STATE_VARIABLE_Info_196, (MR_Integer) 0, &check_hlds__purity__Invariants_113);
                                    }
                                    switch (check_hlds__purity__Invariants_113) {
                                      default: /*NOTREACHED*/ MR_assert(0);
                                      case (MR_Integer) 1:
                                        {
                                          MR_Word check_hlds__purity__ConstructOrderMarkedSubGoals_118;
                                          MR_Word check_hlds__purity__Order_119;
                                          MR_Word check_hlds__purity__SubGoal_319;
                                          MR_Word check_hlds__purity__Var_120;

                                          switch (check_hlds__purity__Kind0_106) {
                                            default: /*NOTREACHED*/ MR_assert(0);
                                            case (MR_Integer) 1:
                                              {
                                                {
                                                  mercury__list__reverse_2_p_0((MR_Word) &hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_marked_goal_0, check_hlds__purity__RevMarkedSubGoals_112, &check_hlds__purity__ConstructOrderMarkedSubGoals_118);
                                                }
                                                check_hlds__purity__Order_119 = (MR_Integer) 0;
                                              }
                                              break;
                                            case (MR_Integer) 0:
                                              {
                                                check_hlds__purity__ConstructOrderMarkedSubGoals_118 = check_hlds__purity__RevMarkedSubGoals_112;
                                                check_hlds__purity__Order_119 = (MR_Integer) 1;
                                              }
                                              break;
                                          }
                                          {
                                            hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_p_0(check_hlds__purity__GoalInfo_10, check_hlds__purity__SubGoalInfo0_108, check_hlds__purity__ConstructOrderMarkedSubGoals_118, check_hlds__purity__Order_119, &check_hlds__purity__SubGoal_319);
                                          }
                                          *check_hlds__purity__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__SubGoal_319, (MR_Integer) 0)));
                                          check_hlds__purity__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__SubGoal_319, (MR_Integer) 1)));
                                        }
                                        break;
                                      case (MR_Integer) 0:
                                        {
                                          MR_Word check_hlds__purity__TypeCtorInfo_508_508 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                                          MR_Word check_hlds__purity__RevSubGoals_114;
                                          MR_Word check_hlds__purity__SubGoals_115;
                                          MR_Word check_hlds__purity__SubGoalExpr_116;
                                          MR_Word check_hlds__purity__SubGoalInfo_117;
                                          MR_Word check_hlds__purity__SubGoal_318;

                                          {
                                            mercury__list__map_3_p_0((MR_Word) &hlds__from_ground_term_util__hlds__from_ground_term_util__type_ctor_info_fgt_marked_goal_0, check_hlds__purity__TypeCtorInfo_508_508, (MR_Word) &check_hlds__purity_scalar_common_1[2], check_hlds__purity__RevMarkedSubGoals_112, &check_hlds__purity__RevSubGoals_114);
                                          }
                                          {
                                            mercury__list__reverse_2_p_0(check_hlds__purity__TypeCtorInfo_508_508, check_hlds__purity__RevSubGoals_114, &check_hlds__purity__SubGoals_115);
                                          }
                                          {
                                            check_hlds__purity__SubGoalExpr_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                            MR_hl_field(MR_mktag(3), check_hlds__purity__SubGoalExpr_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                            MR_hl_field(MR_mktag(3), check_hlds__purity__SubGoalExpr_116, 1) = ((MR_Box) ((MR_Integer) 0));
                                            MR_hl_field(MR_mktag(3), check_hlds__purity__SubGoalExpr_116, 2) = ((MR_Box) (check_hlds__purity__SubGoals_115));
                                          }
                                          {
                                            check_hlds__purity__update_purity_ct_in_goal_info_4_p_0(*check_hlds__purity__Purity_11, *check_hlds__purity__ContainsTrace_12, check_hlds__purity__SubGoalInfo0_108, &check_hlds__purity__SubGoalInfo_117);
                                          }
                                          {
                                            check_hlds__purity__SubGoal_318 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                            MR_hl_field(MR_mktag(0), check_hlds__purity__SubGoal_318, 0) = ((MR_Box) (check_hlds__purity__SubGoalExpr_116));
                                            MR_hl_field(MR_mktag(0), check_hlds__purity__SubGoal_318, 1) = ((MR_Box) (check_hlds__purity__SubGoalInfo_117));
                                          }
                                          {
                                            MR_Word base;
                                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                            *check_hlds__purity__GoalExpr_9 = base;
                                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Reason0_100));
                                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__SubGoal_318));
                                          }
                                        }
                                        break;
                                    }
                                  }
                                  break;
                              }
                            }
                            break;
                          case (MR_Integer) 2:
                          case (MR_Integer) 3:
                            {
                              MR_Word check_hlds__purity__HaveConvertedUnify_122;
                              MR_Word check_hlds__purity__STATE_VARIABLE_Info_227_227;
                              MR_Word check_hlds__purity__SubGoal_324;
                              MR_Word check_hlds__purity__Var_461 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 0)));
                              MR_Word check_hlds__purity__Var_462 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 1)));
                              MR_Word check_hlds__purity__Var_463 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 2)));
                              MR_Word check_hlds__purity__Var_464 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 3)));
                              MR_Word check_hlds__purity__Var_465 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 4)));
                              MR_Word check_hlds__purity__Var_466 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 5)));
                              MR_Word check_hlds__purity__Var_467 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 6)));
                              MR_Word check_hlds__purity__Var_468 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 7)));
                              MR_Word check_hlds__purity__Var_469;
                              MR_Word check_hlds__purity__Var_470;
                              MR_Word check_hlds__purity__Var_471;
                              MR_Word check_hlds__purity__Var_472;
                              MR_Word check_hlds__purity__Var_473;
                              MR_Word check_hlds__purity__Var_474;
                              MR_Word check_hlds__purity__Var_475;

                              {
                                check_hlds__purity__STATE_VARIABLE_Info_227_227 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_227_227, 0) = ((MR_Box) (check_hlds__purity__Var_461));
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_227_227, 1) = ((MR_Box) (check_hlds__purity__Var_462));
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_227_227, 2) = ((MR_Box) (check_hlds__purity__Var_463));
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_227_227, 3) = ((MR_Box) (check_hlds__purity__Var_464));
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_227_227, 4) = ((MR_Box) (check_hlds__purity__Var_465));
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_227_227, 5) = ((MR_Box) (check_hlds__purity__Var_466));
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_227_227, 6) = ((MR_Box) (check_hlds__purity__Var_467));
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_227_227, 7) = ((MR_Box) ((MR_Integer) 0));
                              }
                              {
                                check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__SubGoal0_101, &check_hlds__purity__SubGoal_324, check_hlds__purity__Purity_11, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_227_227, check_hlds__purity__STATE_VARIABLE_Info_196);
                              }
                              check_hlds__purity__Var_469 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_196, (MR_Integer) 0)));
                              check_hlds__purity__Var_470 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_196, (MR_Integer) 1)));
                              check_hlds__purity__Var_471 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_196, (MR_Integer) 2)));
                              check_hlds__purity__Var_472 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_196, (MR_Integer) 3)));
                              check_hlds__purity__Var_473 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_196, (MR_Integer) 4)));
                              check_hlds__purity__Var_474 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_196, (MR_Integer) 5)));
                              check_hlds__purity__Var_475 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_196, (MR_Integer) 6)));
                              check_hlds__purity__HaveConvertedUnify_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__purity__STATE_VARIABLE_Info_196, (MR_Integer) 7)));
                              switch (check_hlds__purity__HaveConvertedUnify_122) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 1:
                                  {
                                    MR_Word check_hlds__purity__Reason_123;

                                    {
                                      check_hlds__purity__Reason_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(3), check_hlds__purity__Reason_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                                      MR_hl_field(MR_mktag(3), check_hlds__purity__Reason_123, 1) = ((MR_Box) (check_hlds__purity__TermVar_105));
                                      MR_hl_field(MR_mktag(3), check_hlds__purity__Reason_123, 2) = ((MR_Box) ((MR_Integer) 3));
                                    }
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                      *check_hlds__purity__GoalExpr_9 = base;
                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Reason_123));
                                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__SubGoal_324));
                                    }
                                  }
                                  break;
                                case (MR_Integer) 0:
                                  {
                                    MR_Word base;
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                    *check_hlds__purity__GoalExpr_9 = base;
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Reason0_100));
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__SubGoal_324));
                                  }
                                  break;
                              }
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Word check_hlds__purity__SubGoal_328;
                        MR_Word check_hlds__purity___SubPurity_140;
                        MR_Word check_hlds__purity__Var_141;

                        {
                          check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__SubGoal0_101, &check_hlds__purity__SubGoal_328, &check_hlds__purity___SubPurity_140, &check_hlds__purity__Var_141, check_hlds__purity__STATE_VARIABLE_Info_0_195, check_hlds__purity__STATE_VARIABLE_Info_196);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          *check_hlds__purity__GoalExpr_9 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Reason0_100));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__SubGoal_328));
                        }
                        *check_hlds__purity__Purity_11 = (MR_Integer) 0;
                        *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 0;
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_expr_purity\'/7", (MR_String) "loop_control");
                          return;
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word check_hlds__purity__Vars_145 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word check_hlds__purity__Cond0_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word check_hlds__purity__Then0_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 3)));
              MR_Word check_hlds__purity__Else0_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 4)));
              MR_Word check_hlds__purity__Cond_149;
              MR_Word check_hlds__purity__Purity1_150;
              MR_Word check_hlds__purity__ContainsTrace1_151;
              MR_Word check_hlds__purity__Then_152;
              MR_Word check_hlds__purity__Purity2_153;
              MR_Word check_hlds__purity__ContainsTrace2_154;
              MR_Word check_hlds__purity__Else_155;
              MR_Word check_hlds__purity__Purity3_156;
              MR_Word check_hlds__purity__ContainsTrace3_157;
              MR_Word check_hlds__purity__Purity12_158;
              MR_Word check_hlds__purity__STATE_VARIABLE_Info_219_219;
              MR_Word check_hlds__purity__STATE_VARIABLE_Info_220_220;

              {
                check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Cond0_146, &check_hlds__purity__Cond_149, &check_hlds__purity__Purity1_150, &check_hlds__purity__ContainsTrace1_151, check_hlds__purity__STATE_VARIABLE_Info_0_195, &check_hlds__purity__STATE_VARIABLE_Info_219_219);
              }
              {
                check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Then0_147, &check_hlds__purity__Then_152, &check_hlds__purity__Purity2_153, &check_hlds__purity__ContainsTrace2_154, check_hlds__purity__STATE_VARIABLE_Info_219_219, &check_hlds__purity__STATE_VARIABLE_Info_220_220);
              }
              {
                check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__Else0_148, &check_hlds__purity__Else_155, &check_hlds__purity__Purity3_156, &check_hlds__purity__ContainsTrace3_157, check_hlds__purity__STATE_VARIABLE_Info_220_220, check_hlds__purity__STATE_VARIABLE_Info_196);
              }
              {
                check_hlds__purity__Purity12_158 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__Purity1_150, check_hlds__purity__Purity2_153);
              }
              {
                *check_hlds__purity__Purity_11 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__Purity12_158, check_hlds__purity__Purity3_156);
              }
              check_hlds__purity__succeeded = (check_hlds__purity__ContainsTrace1_151 == (MR_Integer) 0);
              if (!(check_hlds__purity__succeeded))
                {
                  check_hlds__purity__succeeded = (check_hlds__purity__ContainsTrace2_154 == (MR_Integer) 0);
                  if (!(check_hlds__purity__succeeded))
                    check_hlds__purity__succeeded = (check_hlds__purity__ContainsTrace3_157 == (MR_Integer) 0);
                }
              if (check_hlds__purity__succeeded)
                *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 0;
              else
                *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__purity__GoalExpr_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__Vars_145));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__purity__Cond_149));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__purity__Then_152));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__purity__Else_155));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word check_hlds__purity__ShortHand0_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__GoalExpr0_8, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) check_hlds__purity__ShortHand0_166)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_expr_purity\'/7", (MR_String) "bi_implication");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word check_hlds__purity__GoalType_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand0_166, (MR_Integer) 0)));
                    MR_Word check_hlds__purity__Outer_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand0_166, (MR_Integer) 1)));
                    MR_Word check_hlds__purity__Inner_169 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand0_166, (MR_Integer) 2)));
                    MR_Word check_hlds__purity__MaybeOutputVars_170 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand0_166, (MR_Integer) 3)));
                    MR_Word check_hlds__purity__MainGoal0_171 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand0_166, (MR_Integer) 4)));
                    MR_Word check_hlds__purity__OrElseGoals0_172 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand0_166, (MR_Integer) 5)));
                    MR_Word check_hlds__purity__OrElseInners_173 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand0_166, (MR_Integer) 6)));
                    MR_Word check_hlds__purity__MainGoal1_184;
                    MR_Word check_hlds__purity__OrElseGoals1_185;
                    MR_Word check_hlds__purity__MainGoal_188;
                    MR_Word check_hlds__purity__OrElseGoals_189;
                    MR_Word check_hlds__purity__ShortHand_190;
                    MR_Word check_hlds__purity__STATE_VARIABLE_Info_214_214;
                    MR_Word check_hlds__purity__STATE_VARIABLE_Info_215_215;
                    MR_Word check_hlds__purity__RunPostTypecheck_335 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 1)));
                    MR_Word check_hlds__purity__Purity1_339;
                    MR_Word check_hlds__purity__ContainsTrace1_340;
                    MR_Word check_hlds__purity__Purity2_341;
                    MR_Word check_hlds__purity__ContainsTrace2_342;
                    MR_Word check_hlds__purity__Var_478 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 3)));
                    MR_Word check_hlds__purity__Var_479 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 4)));
                    MR_Word check_hlds__purity__Var_476 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 0)));
                    MR_Word check_hlds__purity__Var_477 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 2)));
                    MR_Word check_hlds__purity__Var_480 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 5)));
                    MR_Word check_hlds__purity__Var_481 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 6)));
                    MR_Word check_hlds__purity__Var_482 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_195, (MR_Integer) 7)));

                    switch (check_hlds__purity__RunPostTypecheck_335) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          check_hlds__purity__MainGoal1_184 = check_hlds__purity__MainGoal0_171;
                          check_hlds__purity__OrElseGoals1_185 = check_hlds__purity__OrElseGoals0_172;
                          check_hlds__purity__STATE_VARIABLE_Info_214_214 = check_hlds__purity__STATE_VARIABLE_Info_0_195;
                        }
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word check_hlds__purity__TypeCtorInfo_510_510;
                          MR_Word check_hlds__purity__OuterDI_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Outer_168, (MR_Integer) 0)));
                          MR_Word check_hlds__purity__OuterUO_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Outer_168, (MR_Integer) 1)));
                          MR_Word check_hlds__purity__OuterDIType_176;
                          MR_Word check_hlds__purity__OuterDITypeSpecs_177;
                          MR_Word check_hlds__purity__OuterUOType_178;
                          MR_Word check_hlds__purity__OuterUOTypeSpecs_179;
                          MR_Word check_hlds__purity__OuterMismatchSpecs_180;
                          MR_Word check_hlds__purity__OuterTypeSpecs_181;
                          MR_Word check_hlds__purity__Var_203;
                          MR_Word check_hlds__purity__Context_329;

                          {
                            check_hlds__purity__Context_329 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo_10);
                          }
                          {
                            check_hlds__purity__check_outer_var_type_6_p_0(check_hlds__purity__Context_329, check_hlds__purity__Var_478, check_hlds__purity__Var_479, check_hlds__purity__OuterDI_174, &check_hlds__purity__OuterDIType_176, &check_hlds__purity__OuterDITypeSpecs_177);
                          }
                          {
                            check_hlds__purity__check_outer_var_type_6_p_0(check_hlds__purity__Context_329, check_hlds__purity__Var_478, check_hlds__purity__Var_479, check_hlds__purity__OuterUO_175, &check_hlds__purity__OuterUOType_178, &check_hlds__purity__OuterUOTypeSpecs_179);
                          }
                          {
                            check_hlds__purity__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__purity__OuterDIType_176, check_hlds__purity__OuterUOType_178);
                          }
                          if (check_hlds__purity__succeeded)
                            check_hlds__purity__OuterMismatchSpecs_180 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          else
                            {
                              MR_Word check_hlds__purity__Var_201;

                              {
                                check_hlds__purity__Var_201 = check_hlds__purity__mismatched_outer_var_types_1_f_0(check_hlds__purity__Context_329);
                              }
                              {
                                check_hlds__purity__OuterMismatchSpecs_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), check_hlds__purity__OuterMismatchSpecs_180, 0) = ((MR_Box) (check_hlds__purity__Var_201));
                                MR_hl_field(MR_mktag(1), check_hlds__purity__OuterMismatchSpecs_180, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                            }
                          check_hlds__purity__TypeCtorInfo_510_510 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
                          {
                            check_hlds__purity__Var_203 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_510_510, check_hlds__purity__OuterUOTypeSpecs_179, check_hlds__purity__OuterMismatchSpecs_180);
                          }
                          {
                            check_hlds__purity__OuterTypeSpecs_181 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_510_510, check_hlds__purity__OuterDITypeSpecs_177, check_hlds__purity__Var_203);
                          }
                          if ((check_hlds__purity__OuterTypeSpecs_181 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                            {
                              MR_Word check_hlds__purity__TypeCtorInfo_515_515 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                              MR_Word check_hlds__purity__AtomicGoalsAndInners_186;
                              MR_Word check_hlds__purity__AllAtomicGoals1_187;
                              MR_Word check_hlds__purity__Var_204;
                              MR_Word check_hlds__purity__Var_205;
                              MR_Word check_hlds__purity__Var_206;
                              MR_Word check_hlds__purity__STATE_VARIABLE_Info_207_207;
                              MR_Box check_hlds__purity__conv3_STATE_VARIABLE_Info_207_207;
                              MR_Word check_hlds__purity__Var_497;
                              MR_Word check_hlds__purity__Var_498;
                              MR_Word check_hlds__purity__Var_499;
                              MR_Word check_hlds__purity__Var_500;
                              MR_Word check_hlds__purity__Var_501;
                              MR_Word check_hlds__purity__Var_502;
                              MR_Word check_hlds__purity__Var_504;
                              MR_Word check_hlds__purity__Var_503;

                              {
                                check_hlds__purity__Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), check_hlds__purity__Var_204, 0) = ((MR_Box) (check_hlds__purity__MainGoal0_171));
                                MR_hl_field(MR_mktag(1), check_hlds__purity__Var_204, 1) = ((MR_Box) (check_hlds__purity__OrElseGoals0_172));
                              }
                              {
                                check_hlds__purity__Var_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), check_hlds__purity__Var_205, 0) = ((MR_Box) (check_hlds__purity__Inner_169));
                                MR_hl_field(MR_mktag(1), check_hlds__purity__Var_205, 1) = ((MR_Box) (check_hlds__purity__OrElseInners_173));
                              }
                              {
                                check_hlds__purity__AtomicGoalsAndInners_186 = mercury__assoc_list__from_corresponding_lists_2_f_0(check_hlds__purity__TypeCtorInfo_515_515, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0, check_hlds__purity__Var_204, check_hlds__purity__Var_205);
                              }
                              {
                                check_hlds__purity__Var_206 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), check_hlds__purity__Var_206, 0) = ((MR_Box) (&check_hlds__purity_scalar_common_5[0]));
                                MR_hl_field(MR_mktag(0), check_hlds__purity__Var_206, 1) = ((MR_Box) (check_hlds__purity__compute_expr_purity_7_p_0_2));
                                MR_hl_field(MR_mktag(0), check_hlds__purity__Var_206, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                MR_hl_field(MR_mktag(0), check_hlds__purity__Var_206, 3) = ((MR_Box) (check_hlds__purity__Outer_168));
                              }
                              {
                                mercury__list__map_foldl_5_p_0((MR_Word) &check_hlds__purity_scalar_common_1[0], check_hlds__purity__TypeCtorInfo_515_515, (MR_Word) &check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0, check_hlds__purity__Var_206, check_hlds__purity__AtomicGoalsAndInners_186, &check_hlds__purity__AllAtomicGoals1_187, ((MR_Box) (check_hlds__purity__STATE_VARIABLE_Info_0_195)), &check_hlds__purity__conv3_STATE_VARIABLE_Info_207_207);
                              }
                              check_hlds__purity__STATE_VARIABLE_Info_207_207 = ((MR_Word) check_hlds__purity__conv3_STATE_VARIABLE_Info_207_207);
                              if ((check_hlds__purity__AllAtomicGoals1_187 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                {
                                  {
                                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_expr_purity\'/7", (MR_String) "AllAtomicGoals1 = []");
                                    return;
                                  }
                                }
                              else
                                {
                                  check_hlds__purity__MainGoal1_184 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__AllAtomicGoals1_187, (MR_Integer) 0)));
                                  check_hlds__purity__OrElseGoals1_185 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__AllAtomicGoals1_187, (MR_Integer) 1)));
                                }
                              check_hlds__purity__Var_497 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_207_207, (MR_Integer) 0)));
                              check_hlds__purity__Var_498 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_207_207, (MR_Integer) 1)));
                              check_hlds__purity__Var_499 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_207_207, (MR_Integer) 2)));
                              check_hlds__purity__Var_500 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_207_207, (MR_Integer) 3)));
                              check_hlds__purity__Var_501 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_207_207, (MR_Integer) 4)));
                              check_hlds__purity__Var_502 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_207_207, (MR_Integer) 5)));
                              check_hlds__purity__Var_503 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_207_207, (MR_Integer) 6)));
                              check_hlds__purity__Var_504 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_207_207, (MR_Integer) 7)));
                              {
                                check_hlds__purity__STATE_VARIABLE_Info_214_214 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_214_214, 0) = ((MR_Box) (check_hlds__purity__Var_497));
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_214_214, 1) = ((MR_Box) (check_hlds__purity__Var_498));
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_214_214, 2) = ((MR_Box) (check_hlds__purity__Var_499));
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_214_214, 3) = ((MR_Box) (check_hlds__purity__Var_500));
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_214_214, 4) = ((MR_Box) (check_hlds__purity__Var_501));
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_214_214, 5) = ((MR_Box) (check_hlds__purity__Var_502));
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_214_214, 6) = ((MR_Box) ((MR_Integer) 0));
                                MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_214_214, 7) = ((MR_Box) (check_hlds__purity__Var_504));
                              }
                            }
                          else
                            {
                              MR_Box check_hlds__purity__conv5_STATE_VARIABLE_Info_214_214;

                              {
                                mercury__list__foldl_4_p_0(check_hlds__purity__TypeCtorInfo_510_510, (MR_Word) &check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0, (MR_Word) &check_hlds__purity_scalar_common_1[3], check_hlds__purity__OuterTypeSpecs_181, ((MR_Box) (check_hlds__purity__STATE_VARIABLE_Info_0_195)), &check_hlds__purity__conv5_STATE_VARIABLE_Info_214_214);
                              }
                              check_hlds__purity__STATE_VARIABLE_Info_214_214 = ((MR_Word) check_hlds__purity__conv5_STATE_VARIABLE_Info_214_214);
                              check_hlds__purity__MainGoal1_184 = check_hlds__purity__MainGoal0_171;
                              check_hlds__purity__OrElseGoals1_185 = check_hlds__purity__OrElseGoals0_172;
                            }
                        }
                        break;
                    }
                    {
                      check_hlds__purity__compute_goal_purity_6_p_0(check_hlds__purity__MainGoal1_184, &check_hlds__purity__MainGoal_188, &check_hlds__purity__Purity1_339, &check_hlds__purity__ContainsTrace1_340, check_hlds__purity__STATE_VARIABLE_Info_214_214, &check_hlds__purity__STATE_VARIABLE_Info_215_215);
                    }
                    {
                      check_hlds__purity__compute_goals_purity_8_p_0(check_hlds__purity__OrElseGoals1_185, &check_hlds__purity__OrElseGoals_189, (MR_Integer) 0, &check_hlds__purity__Purity2_341, (MR_Integer) 1, &check_hlds__purity__ContainsTrace2_342, check_hlds__purity__STATE_VARIABLE_Info_215_215, check_hlds__purity__STATE_VARIABLE_Info_196);
                    }
                    {
                      *check_hlds__purity__Purity_11 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__Purity1_339, check_hlds__purity__Purity2_341);
                    }
                    check_hlds__purity__succeeded = (check_hlds__purity__ContainsTrace1_340 == (MR_Integer) 0);
                    if (!(check_hlds__purity__succeeded))
                      check_hlds__purity__succeeded = (check_hlds__purity__ContainsTrace2_342 == (MR_Integer) 0);
                    if (check_hlds__purity__succeeded)
                      *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 0;
                    else
                      *check_hlds__purity__ContainsTrace_12 = (MR_Integer) 1;
                    {
                      check_hlds__purity__ShortHand_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand_190, 0) = ((MR_Box) (check_hlds__purity__GoalType_167));
                      MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand_190, 1) = ((MR_Box) (check_hlds__purity__Outer_168));
                      MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand_190, 2) = ((MR_Box) (check_hlds__purity__Inner_169));
                      MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand_190, 3) = ((MR_Box) (check_hlds__purity__MaybeOutputVars_170));
                      MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand_190, 4) = ((MR_Box) (check_hlds__purity__MainGoal_188));
                      MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand_190, 5) = ((MR_Box) (check_hlds__purity__OrElseGoals_189));
                      MR_hl_field(MR_mktag(1), check_hlds__purity__ShortHand_190, 6) = ((MR_Box) (check_hlds__purity__OrElseInners_173));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *check_hlds__purity__GoalExpr_9 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__ShortHand_190));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word check_hlds__purity__MaybeIO_191 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__ShortHand0_166, (MR_Integer) 0)));
                    MR_Word check_hlds__purity__ResultVar_192 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__ShortHand0_166, (MR_Integer) 1)));
                    MR_Word check_hlds__purity__SubGoal0_343 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__purity__ShortHand0_166, (MR_Integer) 2)));
                    MR_Word check_hlds__purity__ShortHand_345;
                    MR_Word * check_hlds__purity__AddrSubGoal_528;

                    {
                      check_hlds__purity__ShortHand_345 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), check_hlds__purity__ShortHand_345, 0) = ((MR_Box) (check_hlds__purity__MaybeIO_191));
                      MR_hl_field(MR_mktag(2), check_hlds__purity__ShortHand_345, 1) = ((MR_Box) (check_hlds__purity__ResultVar_192));
                      MR_hl_field(MR_mktag(2), check_hlds__purity__ShortHand_345, 2) = NULL;
                    }
                    check_hlds__purity__AddrSubGoal_528 = (MR_Word *) &(MR_hl_field(MR_mktag(2), check_hlds__purity__ShortHand_345, (MR_Integer) 2));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *check_hlds__purity__GoalExpr_9 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__purity__ShortHand_345));
                    }
                    {
                      check_hlds__purity__LCMCpr_compute_goal_purity_1_6_p_0(check_hlds__purity__SubGoal0_343, check_hlds__purity__AddrSubGoal_528, check_hlds__purity__Purity_11, check_hlds__purity__ContainsTrace_12, check_hlds__purity__STATE_VARIABLE_Info_0_195, check_hlds__purity__STATE_VARIABLE_Info_196);
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
check_hlds__purity__compute_parallel_goals_purity_8_p_0(
  MR_Word check_hlds__purity__HeadVar__1_1,
  MR_Word * check_hlds__purity__HeadVar__2_2,
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8)
{
  {
    MR_bool check_hlds__purity__succeeded;

    if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__purity__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__purity__STATE_VARIABLE_Info_8 = check_hlds__purity__STATE_VARIABLE_Info_0_7;
        *check_hlds__purity__STATE_VARIABLE_ContainsTrace_6 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5;
        *check_hlds__purity__STATE_VARIABLE_Purity_4 = check_hlds__purity__STATE_VARIABLE_Purity_0_3;
      }
    else
      {
        MR_Word check_hlds__purity__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__purity__Goals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__purity__Goal_20;
        MR_Word check_hlds__purity__GoalPurity_25;
        MR_Word check_hlds__purity__GoalContainsTrace_26;
        MR_Word check_hlds__purity__STATE_VARIABLE_Info_37_37;
        MR_Word check_hlds__purity__STATE_VARIABLE_Info_38_38;
        MR_Word check_hlds__purity__STATE_VARIABLE_Purity_39_39;
        MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_40_40;
        MR_Word check_hlds__purity__GoalExpr0_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_18, (MR_Integer) 0)));
        MR_Word check_hlds__purity__GoalInfo0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_18, (MR_Integer) 1)));
        MR_Word check_hlds__purity__GoalExpr_53;
        MR_Word check_hlds__purity__GoalInfo_54;
        MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_10_61;
        MR_Word * check_hlds__purity__AddrGoals_89;

        {
          check_hlds__purity__compute_expr_purity_7_p_0(check_hlds__purity__GoalExpr0_51, &check_hlds__purity__GoalExpr_53, check_hlds__purity__GoalInfo0_52, &check_hlds__purity__GoalPurity_25, &check_hlds__purity__GoalContainsTrace_26, check_hlds__purity__STATE_VARIABLE_Info_0_7, &check_hlds__purity__STATE_VARIABLE_Info_37_37);
        }
        {
          hlds__hlds_goal__goal_info_set_purity_3_p_0(check_hlds__purity__GoalPurity_25, check_hlds__purity__GoalInfo0_52, &check_hlds__purity__STATE_VARIABLE_GoalInfo_10_61);
        }
        switch (check_hlds__purity__GoalContainsTrace_26) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              {
                hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 18, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_61, &check_hlds__purity__GoalInfo_54);
              }
            }
            break;
          case (MR_Integer) 0:
            {
              {
                hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 18, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_61, &check_hlds__purity__GoalInfo_54);
              }
            }
            break;
        }
        {
          check_hlds__purity__Goal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_20, 0) = ((MR_Box) (check_hlds__purity__GoalExpr_53));
          MR_hl_field(MR_mktag(0), check_hlds__purity__Goal_20, 1) = ((MR_Box) (check_hlds__purity__GoalInfo_54));
        }
        switch (check_hlds__purity__GoalPurity_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__purity__GoalInfo0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_18, (MR_Integer) 1)));
              MR_Word check_hlds__purity__Context_29;
              MR_Word check_hlds__purity__Spec_30;
              MR_String check_hlds__purity__PurityName_69;
              MR_Word check_hlds__purity__Pieces_70;
              MR_Word check_hlds__purity__Msg_71;
              MR_Word check_hlds__purity__Var_74;
              MR_Word check_hlds__purity__Var_75;
              MR_String check_hlds__purity__Var_76;
              MR_Word check_hlds__purity__Var_82;
              MR_Word check_hlds__purity__Var_83;
              MR_Word check_hlds__purity__Var_87;
              MR_Word check_hlds__purity__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_18, (MR_Integer) 0)));

              {
                check_hlds__purity__Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo0_28);
              }
              {
                parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__GoalPurity_25, &check_hlds__purity__PurityName_69);
              }
              {
                check_hlds__purity__Var_76 = mercury__string__f_43_43_2_f_0(check_hlds__purity__PurityName_69, (MR_String) ",");
              }
              {
                check_hlds__purity__Var_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), check_hlds__purity__Var_75, 0) = ((MR_Box) (check_hlds__purity__Var_76));
              }
              {
                check_hlds__purity__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__purity__Var_74, 0) = ((MR_Box) (check_hlds__purity__Var_75));
                MR_hl_field(MR_mktag(1), check_hlds__purity__Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[65])));
              }
              {
                check_hlds__purity__Pieces_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[63])));
                MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_70, 1) = ((MR_Box) (check_hlds__purity__Var_74));
              }
              {
                check_hlds__purity__Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__purity__Var_83, 0) = ((MR_Box) (check_hlds__purity__Pieces_70));
              }
              {
                check_hlds__purity__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__purity__Var_82, 0) = ((MR_Box) (check_hlds__purity__Var_83));
                MR_hl_field(MR_mktag(1), check_hlds__purity__Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__purity__Msg_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_71, 0) = ((MR_Box) (check_hlds__purity__Context_29));
                MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_71, 1) = ((MR_Box) (check_hlds__purity__Var_82));
              }
              {
                check_hlds__purity__Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__purity__Var_87, 0) = ((MR_Box) (check_hlds__purity__Msg_71));
                MR_hl_field(MR_mktag(1), check_hlds__purity__Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__purity__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
                MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_30, 2) = ((MR_Box) (check_hlds__purity__Var_87));
              }
              {
                check_hlds__purity__purity_info_add_message_3_p_0(check_hlds__purity__Spec_30, check_hlds__purity__STATE_VARIABLE_Info_37_37, &check_hlds__purity__STATE_VARIABLE_Info_38_38);
              }
            }
            break;
          case (MR_Integer) 0:
            check_hlds__purity__STATE_VARIABLE_Info_38_38 = check_hlds__purity__STATE_VARIABLE_Info_37_37;
            break;
          case (MR_Integer) 1:
            check_hlds__purity__STATE_VARIABLE_Info_38_38 = check_hlds__purity__STATE_VARIABLE_Info_37_37;
            break;
        }
        {
          check_hlds__purity__STATE_VARIABLE_Purity_39_39 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__GoalPurity_25, check_hlds__purity__STATE_VARIABLE_Purity_0_3);
        }
        {
          check_hlds__purity__STATE_VARIABLE_ContainsTrace_40_40 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__purity__GoalContainsTrace_26, check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__purity__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__Goal_20));
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
        }
        check_hlds__purity__AddrGoals_89 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *check_hlds__purity__HeadVar__2_2, (MR_Integer) 1));
        {
          check_hlds__purity__LCMCpr_compute_parallel_goals_purity_1_8_p_0(check_hlds__purity__Goals0_19, check_hlds__purity__AddrGoals_89, check_hlds__purity__STATE_VARIABLE_Purity_39_39, check_hlds__purity__STATE_VARIABLE_Purity_4, check_hlds__purity__STATE_VARIABLE_ContainsTrace_40_40, check_hlds__purity__STATE_VARIABLE_ContainsTrace_6, check_hlds__purity__STATE_VARIABLE_Info_38_38, check_hlds__purity__STATE_VARIABLE_Info_8);
        }
      }
  }
}

static void MR_CALL 
check_hlds__purity__compute_goals_purity_8_p_0(
  MR_Word check_hlds__purity__HeadVar__1_1,
  MR_Word * check_hlds__purity__HeadVar__2_2,
  MR_Word check_hlds__purity__STATE_VARIABLE_Purity_0_3,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Purity_4,
  MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5,
  MR_Word * check_hlds__purity__STATE_VARIABLE_ContainsTrace_6,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_7,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_8)
{
  {
    MR_bool check_hlds__purity__succeeded;

    if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__purity__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__purity__STATE_VARIABLE_Info_8 = check_hlds__purity__STATE_VARIABLE_Info_0_7;
        *check_hlds__purity__STATE_VARIABLE_ContainsTrace_6 = check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5;
        *check_hlds__purity__STATE_VARIABLE_Purity_4 = check_hlds__purity__STATE_VARIABLE_Purity_0_3;
      }
    else
      {
        MR_Word check_hlds__purity__HeadGoal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__purity__TailGoals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__purity__HeadGoal_24;
        MR_Word check_hlds__purity__GoalPurity_25;
        MR_Word check_hlds__purity__GoalContainsTrace_26;
        MR_Word check_hlds__purity__STATE_VARIABLE_Info_34_34;
        MR_Word check_hlds__purity__STATE_VARIABLE_Purity_35_35;
        MR_Word check_hlds__purity__STATE_VARIABLE_ContainsTrace_36_36;
        MR_Word check_hlds__purity__GoalExpr0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadGoal0_18, (MR_Integer) 0)));
        MR_Word check_hlds__purity__GoalInfo0_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__HeadGoal0_18, (MR_Integer) 1)));
        MR_Word check_hlds__purity__GoalExpr_49;
        MR_Word check_hlds__purity__GoalInfo_50;
        MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_10_57;
        MR_Word * check_hlds__purity__AddrTailGoals_62;

        {
          check_hlds__purity__compute_expr_purity_7_p_0(check_hlds__purity__GoalExpr0_47, &check_hlds__purity__GoalExpr_49, check_hlds__purity__GoalInfo0_48, &check_hlds__purity__GoalPurity_25, &check_hlds__purity__GoalContainsTrace_26, check_hlds__purity__STATE_VARIABLE_Info_0_7, &check_hlds__purity__STATE_VARIABLE_Info_34_34);
        }
        {
          hlds__hlds_goal__goal_info_set_purity_3_p_0(check_hlds__purity__GoalPurity_25, check_hlds__purity__GoalInfo0_48, &check_hlds__purity__STATE_VARIABLE_GoalInfo_10_57);
        }
        switch (check_hlds__purity__GoalContainsTrace_26) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              {
                hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 18, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_57, &check_hlds__purity__GoalInfo_50);
              }
            }
            break;
          case (MR_Integer) 0:
            {
              {
                hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 18, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_57, &check_hlds__purity__GoalInfo_50);
              }
            }
            break;
        }
        {
          check_hlds__purity__HeadGoal_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__purity__HeadGoal_24, 0) = ((MR_Box) (check_hlds__purity__GoalExpr_49));
          MR_hl_field(MR_mktag(0), check_hlds__purity__HeadGoal_24, 1) = ((MR_Box) (check_hlds__purity__GoalInfo_50));
        }
        {
          check_hlds__purity__STATE_VARIABLE_Purity_35_35 = parse_tree__prog_data__worst_purity_2_f_0(check_hlds__purity__GoalPurity_25, check_hlds__purity__STATE_VARIABLE_Purity_0_3);
        }
        {
          check_hlds__purity__STATE_VARIABLE_ContainsTrace_36_36 = hlds__hlds_goal__worst_contains_trace_2_f_0(check_hlds__purity__GoalContainsTrace_26, check_hlds__purity__STATE_VARIABLE_ContainsTrace_0_5);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__purity__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__HeadGoal_24));
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
        }
        check_hlds__purity__AddrTailGoals_62 = (MR_Word *) &(MR_hl_field(MR_mktag(1), *check_hlds__purity__HeadVar__2_2, (MR_Integer) 1));
        {
          check_hlds__purity__LCMCpr_compute_goals_purity_1_8_p_0(check_hlds__purity__TailGoals0_19, check_hlds__purity__AddrTailGoals_62, check_hlds__purity__STATE_VARIABLE_Purity_35_35, check_hlds__purity__STATE_VARIABLE_Purity_4, check_hlds__purity__STATE_VARIABLE_ContainsTrace_36_36, check_hlds__purity__STATE_VARIABLE_ContainsTrace_6, check_hlds__purity__STATE_VARIABLE_Info_34_34, check_hlds__purity__STATE_VARIABLE_Info_8);
        }
      }
  }
}

static void MR_CALL 
check_hlds__purity__compute_goal_purity_6_p_0(
  MR_Word check_hlds__purity__Goal0_7,
  MR_Word * check_hlds__purity__Goal_8,
  MR_Word * check_hlds__purity__Purity_9,
  MR_Word * check_hlds__purity__ContainsTrace_10,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_16,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_17)
{
  {
    MR_bool check_hlds__purity__succeeded;
    MR_Word check_hlds__purity__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_7, (MR_Integer) 0)));
    MR_Word check_hlds__purity__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_7, (MR_Integer) 1)));
    MR_Word check_hlds__purity__GoalExpr_14;
    MR_Word check_hlds__purity__GoalInfo_15;
    MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_10_24;

    {
      check_hlds__purity__compute_expr_purity_7_p_0(check_hlds__purity__GoalExpr0_12, &check_hlds__purity__GoalExpr_14, check_hlds__purity__GoalInfo0_13, check_hlds__purity__Purity_9, check_hlds__purity__ContainsTrace_10, check_hlds__purity__STATE_VARIABLE_Info_0_16, check_hlds__purity__STATE_VARIABLE_Info_17);
    }
    {
      hlds__hlds_goal__goal_info_set_purity_3_p_0(*check_hlds__purity__Purity_9, check_hlds__purity__GoalInfo0_13, &check_hlds__purity__STATE_VARIABLE_GoalInfo_10_24);
    }
    switch (*check_hlds__purity__ContainsTrace_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 18, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_24, &check_hlds__purity__GoalInfo_15);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 18, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_24, &check_hlds__purity__GoalInfo_15);
          }
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__purity__Goal_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__GoalExpr_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__GoalInfo_15));
    }
  }
}

static MR_Word MR_CALL 
check_hlds__purity__mismatched_outer_var_types_1_f_0(
  MR_Word check_hlds__purity__Context_3)
{
  {
    MR_bool check_hlds__purity__succeeded;
    MR_Word check_hlds__purity__Spec_4;
    MR_Word check_hlds__purity__Msg_6;
    MR_Word check_hlds__purity__Var_15;

    {
      check_hlds__purity__Msg_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_6, 0) = ((MR_Box) (check_hlds__purity__Context_3));
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[62])));
    }
    {
      check_hlds__purity__Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_15, 0) = ((MR_Box) (check_hlds__purity__Msg_6));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__purity__Spec_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_4, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_4, 2) = ((MR_Box) (check_hlds__purity__Var_15));
    }
    return check_hlds__purity__Spec_4;
  }
}

static void MR_CALL 
check_hlds__purity__check_outer_var_type_6_p_0(
  MR_Word check_hlds__purity__Context_7,
  MR_Word check_hlds__purity__VarTypes_8,
  MR_Word check_hlds__purity__VarSet_9,
  MR_Word check_hlds__purity__Var_10,
  MR_Word * check_hlds__purity__VarType_11,
  MR_Word * check_hlds__purity__Specs_12)
{
  {
    MR_bool check_hlds__purity__succeeded;

    {
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__purity__VarTypes_8, check_hlds__purity__Var_10, check_hlds__purity__VarType_11);
    }
    {
      MR_Word check_hlds__purity__Var_15;

      {
        check_hlds__purity__Var_15 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
      }
      {
        check_hlds__purity__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(*check_hlds__purity__VarType_11, check_hlds__purity__Var_15);
      }
    }
    if (!(check_hlds__purity__succeeded))
      {
        MR_Word check_hlds__purity__Var_16;

        {
          check_hlds__purity__Var_16 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
        }
        {
          check_hlds__purity__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(*check_hlds__purity__VarType_11, check_hlds__purity__Var_16);
        }
      }
    if (check_hlds__purity__succeeded)
      *check_hlds__purity__Specs_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__purity__Spec_13;
        MR_Word check_hlds__purity__Pieces_23;
        MR_Word check_hlds__purity__Msg_24;
        MR_Word check_hlds__purity__Var_27;
        MR_Word check_hlds__purity__Var_28;
        MR_String check_hlds__purity__Var_29;
        MR_Word check_hlds__purity__Var_34;
        MR_Word check_hlds__purity__Var_35;
        MR_Word check_hlds__purity__Var_39;

        {
          check_hlds__purity__Var_29 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__purity__VarSet_9, check_hlds__purity__Var_10);
        }
        {
          check_hlds__purity__Var_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), check_hlds__purity__Var_28, 0) = ((MR_Box) (check_hlds__purity__Var_29));
        }
        {
          check_hlds__purity__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Var_27, 0) = ((MR_Box) (check_hlds__purity__Var_28));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[59])));
        }
        {
          check_hlds__purity__Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[57])));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_23, 1) = ((MR_Box) (check_hlds__purity__Var_27));
        }
        {
          check_hlds__purity__Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__purity__Var_35, 0) = ((MR_Box) (check_hlds__purity__Pieces_23));
        }
        {
          check_hlds__purity__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Var_34, 0) = ((MR_Box) (check_hlds__purity__Var_35));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__purity__Msg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_24, 0) = ((MR_Box) (check_hlds__purity__Context_7));
          MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_24, 1) = ((MR_Box) (check_hlds__purity__Var_34));
        }
        {
          check_hlds__purity__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Var_39, 0) = ((MR_Box) (check_hlds__purity__Msg_24));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__purity__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
          MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_13, 2) = ((MR_Box) (check_hlds__purity__Var_39));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__purity__Specs_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__Spec_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
  }
}

static void MR_CALL 
check_hlds__purity__perform_goal_purity_checks_6_p_0(
  MR_Word check_hlds__purity__Context_7,
  MR_Word check_hlds__purity__PredId_8,
  MR_Word check_hlds__purity__DeclaredPurity_9,
  MR_Word * check_hlds__purity__ActualPurity_10,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_17,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_18)
{
  {
    MR_bool check_hlds__purity__succeeded;
    MR_Word check_hlds__purity__ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
    MR_Word check_hlds__purity__PredInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
    MR_Word check_hlds__purity__CalleePredInfo_14;
    MR_Word check_hlds__purity__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
    MR_Word check_hlds__purity__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
    MR_Word check_hlds__purity__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
    MR_Word check_hlds__purity__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
    MR_Word check_hlds__purity__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
    MR_Word check_hlds__purity__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__purity__ModuleInfo_12, check_hlds__purity__PredId_8, &check_hlds__purity__CalleePredInfo_14);
    }
    {
      hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__purity__CalleePredInfo_14, check_hlds__purity__ActualPurity_10);
    }
    check_hlds__purity__succeeded = (*check_hlds__purity__ActualPurity_10 == check_hlds__purity__DeclaredPurity_9);
    if (check_hlds__purity__succeeded)
      *check_hlds__purity__STATE_VARIABLE_Info_18 = check_hlds__purity__STATE_VARIABLE_Info_0_17;
    else
      {
        {
          check_hlds__purity__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__purity__PredInfo_13);
        }
        if (check_hlds__purity__succeeded)
          *check_hlds__purity__STATE_VARIABLE_Info_18 = check_hlds__purity__STATE_VARIABLE_Info_0_17;
        else
          {
            {
              check_hlds__purity__succeeded = parse_tree__prog_data__less_pure_2_p_0(*check_hlds__purity__ActualPurity_10, check_hlds__purity__DeclaredPurity_9);
            }
            if (check_hlds__purity__succeeded)
              {
                MR_Word check_hlds__purity__Spec_15;
                MR_Word check_hlds__purity__Msgs0_44;
                MR_Word check_hlds__purity__Msgs_45;
                MR_Word check_hlds__purity__Var_47;
                MR_Word check_hlds__purity__Var_48;
                MR_Word check_hlds__purity__Var_49;
                MR_Word check_hlds__purity__Var_50;
                MR_Word check_hlds__purity__Var_51;
                MR_Word check_hlds__purity__Var_52;
                MR_Word check_hlds__purity__Var_53;

                {
                  check_hlds__purity__Spec_15 = check_hlds__purity__error_missing_body_impurity_decl_3_f_0(check_hlds__purity__ModuleInfo_12, check_hlds__purity__PredId_8, check_hlds__purity__Context_7);
                }
                check_hlds__purity__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
                check_hlds__purity__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
                check_hlds__purity__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
                check_hlds__purity__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
                check_hlds__purity__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
                check_hlds__purity__Msgs0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
                check_hlds__purity__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
                check_hlds__purity__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
                {
                  check_hlds__purity__Msgs_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_45, 0) = ((MR_Box) (check_hlds__purity__Spec_15));
                  MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_45, 1) = ((MR_Box) (check_hlds__purity__Msgs0_44));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                  *check_hlds__purity__STATE_VARIABLE_Info_18 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__Var_47));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__Var_48));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__purity__Var_49));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__purity__Var_50));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__purity__Var_51));
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__purity__Msgs_45));
                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__purity__Var_52));
                  MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__purity__Var_53));
                }
              }
            else
              {
                MR_Word check_hlds__purity__Markers_16;

                {
                  hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__purity__PredInfo_13, &check_hlds__purity__Markers_16);
                }
                {
                  check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__Markers_16, (MR_Integer) 11);
                }
                if (!(check_hlds__purity__succeeded))
                  {
                    {
                      check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__Markers_16, (MR_Integer) 12);
                    }
                    if (!(check_hlds__purity__succeeded))
                      {
                        {
                          check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__Markers_16, (MR_Integer) 24);
                        }
                      }
                  }
                if (check_hlds__purity__succeeded)
                  *check_hlds__purity__STATE_VARIABLE_Info_18 = check_hlds__purity__STATE_VARIABLE_Info_0_17;
                else
                  {
                    MR_Word check_hlds__purity__Spec_24;
                    MR_Word check_hlds__purity__Msgs0_66;
                    MR_Word check_hlds__purity__Msgs_67;
                    MR_Word check_hlds__purity__Var_69;
                    MR_Word check_hlds__purity__Var_70;
                    MR_Word check_hlds__purity__Var_71;
                    MR_Word check_hlds__purity__Var_72;
                    MR_Word check_hlds__purity__Var_73;
                    MR_Word check_hlds__purity__Var_74;
                    MR_Word check_hlds__purity__Var_75;

                    {
                      check_hlds__purity__Spec_24 = check_hlds__purity__warn_unnecessary_body_impurity_decl_4_f_0(check_hlds__purity__ModuleInfo_12, check_hlds__purity__PredId_8, check_hlds__purity__Context_7, check_hlds__purity__DeclaredPurity_9);
                    }
                    check_hlds__purity__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
                    check_hlds__purity__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
                    check_hlds__purity__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
                    check_hlds__purity__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
                    check_hlds__purity__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
                    check_hlds__purity__Msgs0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
                    check_hlds__purity__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
                    check_hlds__purity__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
                    {
                      check_hlds__purity__Msgs_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_67, 0) = ((MR_Box) (check_hlds__purity__Spec_24));
                      MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_67, 1) = ((MR_Box) (check_hlds__purity__Msgs0_66));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                      *check_hlds__purity__STATE_VARIABLE_Info_18 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__Var_69));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__Var_70));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__purity__Var_71));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__purity__Var_72));
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__purity__Var_73));
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__purity__Msgs_67));
                      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__purity__Var_74));
                      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__purity__Var_75));
                    }
                  }
              }
          }
      }
  }
}

static MR_Word MR_CALL 
check_hlds__purity__warn_unnecessary_body_impurity_decl_4_f_0(
  MR_Word check_hlds__purity__ModuleInfo_6,
  MR_Word check_hlds__purity__PredId_7,
  MR_Word check_hlds__purity__Context_8,
  MR_Word check_hlds__purity__DeclaredPurity_9)
{
  {
    MR_bool check_hlds__purity__succeeded;
    MR_Word check_hlds__purity__Spec_10;
    MR_Word check_hlds__purity__TypeCtorInfo_65_65;
    MR_Word check_hlds__purity__PredInfo_11;
    MR_Word check_hlds__purity__ActualPurity_12;
    MR_String check_hlds__purity__DeclaredPurityName_13;
    MR_String check_hlds__purity__ActualPurityName_14;
    MR_Word check_hlds__purity__PredPieces_15;
    MR_Word check_hlds__purity__Pieces1_16;
    MR_Word check_hlds__purity__Pieces2_17;
    MR_Word check_hlds__purity__Msg_18;
    MR_Word check_hlds__purity__Var_24;
    MR_Word check_hlds__purity__Var_25;
    MR_Word check_hlds__purity__Var_28;
    MR_Word check_hlds__purity__Var_30;
    MR_Word check_hlds__purity__Var_33;
    MR_Word check_hlds__purity__Var_34;
    MR_Word check_hlds__purity__Var_56;
    MR_Word check_hlds__purity__Var_57;
    MR_Word check_hlds__purity__Var_58;
    MR_Word check_hlds__purity__Var_59;
    MR_Word check_hlds__purity__Var_63;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__purity__ModuleInfo_6, check_hlds__purity__PredId_7, &check_hlds__purity__PredInfo_11);
    }
    {
      hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__purity__PredInfo_11, &check_hlds__purity__ActualPurity_12);
    }
    {
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__DeclaredPurity_9, &check_hlds__purity__DeclaredPurityName_13);
    }
    {
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__ActualPurity_12, &check_hlds__purity__ActualPurityName_14);
    }
    {
      check_hlds__purity__PredPieces_15 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__purity__ModuleInfo_6, (MR_Integer) 0, check_hlds__purity__PredId_7);
    }
    check_hlds__purity__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      check_hlds__purity__Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__purity__Var_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__purity__Var_34, 1) = ((MR_Box) (check_hlds__purity__DeclaredPurityName_13));
    }
    {
      check_hlds__purity__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_33, 0) = ((MR_Box) (check_hlds__purity__Var_34));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[18])));
    }
    {
      check_hlds__purity__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[29])));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_30, 1) = ((MR_Box) (check_hlds__purity__Var_33));
    }
    {
      check_hlds__purity__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_28, 1) = ((MR_Box) (check_hlds__purity__Var_30));
    }
    {
      check_hlds__purity__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[55])));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_25, 1) = ((MR_Box) (check_hlds__purity__Var_28));
    }
    {
      check_hlds__purity__Var_24 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_65_65, check_hlds__purity__PredPieces_15, check_hlds__purity__Var_25);
    }
    {
      check_hlds__purity__Pieces1_16 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_65_65, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[54]), check_hlds__purity__Var_24);
    }
    switch (check_hlds__purity__ActualPurity_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__purity__Var_43;
          MR_Word check_hlds__purity__Var_44;

          {
            check_hlds__purity__Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__purity__Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), check_hlds__purity__Var_44, 1) = ((MR_Box) (check_hlds__purity__ActualPurityName_14));
          }
          {
            check_hlds__purity__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__purity__Var_43, 0) = ((MR_Box) (check_hlds__purity__Var_44));
            MR_hl_field(MR_mktag(1), check_hlds__purity__Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[20])));
          }
          {
            check_hlds__purity__Pieces2_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[56])));
            MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_17, 1) = ((MR_Box) (check_hlds__purity__Var_43));
          }
        }
        break;
      case (MR_Integer) 0:
        check_hlds__purity__Pieces2_17 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[22]);
        break;
    }
    {
      check_hlds__purity__Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Var_57, 0) = ((MR_Box) (check_hlds__purity__Pieces1_16));
    }
    {
      check_hlds__purity__Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Var_59, 0) = ((MR_Box) (check_hlds__purity__Pieces2_17));
    }
    {
      check_hlds__purity__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_58, 0) = ((MR_Box) (check_hlds__purity__Var_59));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__purity__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_56, 0) = ((MR_Box) (check_hlds__purity__Var_57));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_56, 1) = ((MR_Box) (check_hlds__purity__Var_58));
    }
    {
      check_hlds__purity__Msg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 0) = ((MR_Box) (check_hlds__purity__Context_8));
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 1) = ((MR_Box) (check_hlds__purity__Var_56));
    }
    {
      check_hlds__purity__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_63, 0) = ((MR_Box) (check_hlds__purity__Msg_18));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__purity__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 2) = ((MR_Box) (check_hlds__purity__Var_63));
    }
    return check_hlds__purity__Spec_10;
  }
}

static MR_Word MR_CALL 
check_hlds__purity__error_missing_body_impurity_decl_3_f_0(
  MR_Word check_hlds__purity__ModuleInfo_5,
  MR_Word check_hlds__purity__PredId_6,
  MR_Word check_hlds__purity__Context_7)
{
  {
    MR_bool check_hlds__purity__succeeded;
    MR_Word check_hlds__purity__Spec_8;
    MR_Word check_hlds__purity__TypeCtorInfo_63_63;
    MR_Word check_hlds__purity__PredInfo_9;
    MR_Word check_hlds__purity__PredOrFunc_10;
    MR_Word check_hlds__purity__Purity_11;
    MR_String check_hlds__purity__PurityName_12;
    MR_Word check_hlds__purity__PredPieces_13;
    MR_Word check_hlds__purity__Pieces1_14;
    MR_Word check_hlds__purity__Pieces2_15;
    MR_Word check_hlds__purity__Msg_16;
    MR_Word check_hlds__purity__Var_18;
    MR_Word check_hlds__purity__Var_21;
    MR_Word check_hlds__purity__Var_22;
    MR_Word check_hlds__purity__Var_24;
    MR_Word check_hlds__purity__Var_54;
    MR_Word check_hlds__purity__Var_55;
    MR_Word check_hlds__purity__Var_56;
    MR_Word check_hlds__purity__Var_57;
    MR_Word check_hlds__purity__Var_61;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__purity__ModuleInfo_5, check_hlds__purity__PredId_6, &check_hlds__purity__PredInfo_9);
    }
    {
      check_hlds__purity__PredOrFunc_10 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__purity__PredInfo_9);
    }
    {
      hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__purity__PredInfo_9, &check_hlds__purity__Purity_11);
    }
    {
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__Purity_11, &check_hlds__purity__PurityName_12);
    }
    {
      check_hlds__purity__PredPieces_13 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__purity__ModuleInfo_5, (MR_Integer) 0, check_hlds__purity__PredId_6);
    }
    check_hlds__purity__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      check_hlds__purity__Var_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), check_hlds__purity__Var_22, 0) = ((MR_Box) (check_hlds__purity__PurityName_12));
    }
    {
      check_hlds__purity__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_21, 0) = ((MR_Box) (check_hlds__purity__Var_22));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__purity__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[49])));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_18, 1) = ((MR_Box) (check_hlds__purity__Var_21));
    }
    {
      check_hlds__purity__Var_24 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_63_63, check_hlds__purity__PredPieces_13, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[6]));
    }
    {
      check_hlds__purity__Pieces1_14 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_63_63, check_hlds__purity__Var_18, check_hlds__purity__Var_24);
    }
    switch (check_hlds__purity__PredOrFunc_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__purity__Var_33;
          MR_Word check_hlds__purity__Var_36;
          MR_Word check_hlds__purity__Var_37;

          {
            check_hlds__purity__Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__purity__Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), check_hlds__purity__Var_37, 1) = ((MR_Box) (check_hlds__purity__PurityName_12));
          }
          {
            check_hlds__purity__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__purity__Var_36, 0) = ((MR_Box) (check_hlds__purity__Var_37));
            MR_hl_field(MR_mktag(1), check_hlds__purity__Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[18])));
          }
          {
            check_hlds__purity__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__purity__Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[51])));
            MR_hl_field(MR_mktag(1), check_hlds__purity__Var_33, 1) = ((MR_Box) (check_hlds__purity__Var_36));
          }
          {
            check_hlds__purity__Pieces2_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[50])));
            MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_15, 1) = ((MR_Box) (check_hlds__purity__Var_33));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__purity__Var_46;
          MR_Word check_hlds__purity__Var_47;

          {
            check_hlds__purity__Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__purity__Var_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), check_hlds__purity__Var_47, 1) = ((MR_Box) (check_hlds__purity__PurityName_12));
          }
          {
            check_hlds__purity__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__purity__Var_46, 0) = ((MR_Box) (check_hlds__purity__Var_47));
            MR_hl_field(MR_mktag(1), check_hlds__purity__Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[18])));
          }
          {
            check_hlds__purity__Pieces2_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[52])));
            MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_15, 1) = ((MR_Box) (check_hlds__purity__Var_46));
          }
        }
        break;
    }
    {
      check_hlds__purity__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Var_55, 0) = ((MR_Box) (check_hlds__purity__Pieces1_14));
    }
    {
      check_hlds__purity__Var_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Var_57, 0) = ((MR_Box) (check_hlds__purity__Pieces2_15));
    }
    {
      check_hlds__purity__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_56, 0) = ((MR_Box) (check_hlds__purity__Var_57));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__purity__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_54, 0) = ((MR_Box) (check_hlds__purity__Var_55));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_54, 1) = ((MR_Box) (check_hlds__purity__Var_56));
    }
    {
      check_hlds__purity__Msg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_16, 0) = ((MR_Box) (check_hlds__purity__Context_7));
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_16, 1) = ((MR_Box) (check_hlds__purity__Var_54));
    }
    {
      check_hlds__purity__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_61, 0) = ((MR_Box) (check_hlds__purity__Msg_16));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__purity__Spec_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_8, 2) = ((MR_Box) (check_hlds__purity__Var_61));
    }
    return check_hlds__purity__Spec_8;
  }
}

static void MR_CALL 
check_hlds__purity__compute_goal_purity_in_fgt_no_ptc_4_p_0(
  MR_Word check_hlds__purity__HeadVar__1_1,
  MR_Word check_hlds__purity__Info_2,
  MR_Word check_hlds__purity__STATE_VARIABLE_Specs_0_3,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Specs_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__purity__succeeded;

        if ((check_hlds__purity__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__purity__STATE_VARIABLE_Specs_4 = check_hlds__purity__STATE_VARIABLE_Specs_0_3;
        else
          {
            MR_Word check_hlds__purity__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__purity__Goals0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__purity__GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_9, (MR_Integer) 0)));
            MR_Word check_hlds__purity__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Goal0_9, (MR_Integer) 1)));
            MR_Word check_hlds__purity__XVar_23;
            MR_Word check_hlds__purity__ConsId_24;
            MR_Word check_hlds__purity__YVars_25;
            MR_Word check_hlds__purity__UnifySpecs_26;
            MR_Word check_hlds__purity__STATE_VARIABLE_Specs_32_32;
            MR_Word check_hlds__purity__XVarPrime_15;
            MR_Word check_hlds__purity__ConsIdPrime_20;
            MR_Word check_hlds__purity__YVarsPrime_22;
            MR_Word check_hlds__purity__Y_16;
            MR_Word check_hlds__purity__Var_17;
            MR_Word check_hlds__purity__Var_18;
            MR_Word check_hlds__purity__Var_19;
            MR_Word check_hlds__purity__Var_21;

            check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__GoalExpr0_13)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__purity__succeeded)
              {
                check_hlds__purity__XVarPrime_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_13, (MR_Integer) 0)));
                check_hlds__purity__Y_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_13, (MR_Integer) 1)));
                check_hlds__purity__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_13, (MR_Integer) 2)));
                check_hlds__purity__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_13, (MR_Integer) 3)));
                check_hlds__purity__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__GoalExpr0_13, (MR_Integer) 4)));
                check_hlds__purity__succeeded = ((MR_tag((MR_Word) check_hlds__purity__Y_16)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__purity__succeeded)
                  {
                    check_hlds__purity__ConsIdPrime_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Y_16, (MR_Integer) 0)));
                    check_hlds__purity__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Y_16, (MR_Integer) 1)));
                    check_hlds__purity__YVarsPrime_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__Y_16, (MR_Integer) 2)));
                  }
              }
            if (check_hlds__purity__succeeded)
              {
                check_hlds__purity__XVar_23 = check_hlds__purity__XVarPrime_15;
                check_hlds__purity__ConsId_24 = check_hlds__purity__ConsIdPrime_20;
                check_hlds__purity__YVars_25 = check_hlds__purity__YVarsPrime_22;
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "predicate \140check_hlds.purity.compute_goal_purity_in_fgt_no_ptc\'/4", (MR_String) "from_ground_term_initial conjunct is not functor unify");
                  return;
                }
              }
            {
              check_hlds__purity__check_var_functor_unify_purity_6_p_0(check_hlds__purity__Info_2, check_hlds__purity__GoalInfo0_14, check_hlds__purity__XVar_23, check_hlds__purity__ConsId_24, check_hlds__purity__YVars_25, &check_hlds__purity__UnifySpecs_26);
            }
            {
              check_hlds__purity__STATE_VARIABLE_Specs_32_32 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__purity__UnifySpecs_26, check_hlds__purity__STATE_VARIABLE_Specs_0_3);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__purity__next_value_of_HeadVar__1_1 = check_hlds__purity__Goals0_10;
              MR_Word check_hlds__purity__next_value_of_STATE_VARIABLE_Specs_0_3 = check_hlds__purity__STATE_VARIABLE_Specs_32_32;

              check_hlds__purity__STATE_VARIABLE_Specs_0_3 = check_hlds__purity__next_value_of_STATE_VARIABLE_Specs_0_3;
              check_hlds__purity__HeadVar__1_1 = check_hlds__purity__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__purity__purity_info_add_messages_3_p_0(
  MR_Word check_hlds__purity__Specs_4,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_10,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_11)
{
  {
    MR_bool check_hlds__purity__succeeded;

    if ((check_hlds__purity__Specs_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__purity__STATE_VARIABLE_Info_11 = check_hlds__purity__STATE_VARIABLE_Info_0_10;
    else
      {
        MR_Word check_hlds__purity__Msgs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
        MR_Word check_hlds__purity__Msgs_9;
        MR_Word check_hlds__purity__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
        MR_Word check_hlds__purity__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
        MR_Word check_hlds__purity__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
        MR_Word check_hlds__purity__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
        MR_Word check_hlds__purity__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
        MR_Word check_hlds__purity__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
        MR_Word check_hlds__purity__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
        MR_Word check_hlds__purity__Var_20;
        MR_Word check_hlds__purity__Var_21;
        MR_Word check_hlds__purity__Var_22;
        MR_Word check_hlds__purity__Var_23;
        MR_Word check_hlds__purity__Var_24;
        MR_Word check_hlds__purity__Var_26;
        MR_Word check_hlds__purity__Var_27;
        MR_Word check_hlds__purity__Var_25;

        {
          check_hlds__purity__Msgs_9 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__purity__Specs_4, check_hlds__purity__Msgs0_8);
        }
        check_hlds__purity__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
        check_hlds__purity__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
        check_hlds__purity__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
        check_hlds__purity__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
        check_hlds__purity__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
        check_hlds__purity__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
        check_hlds__purity__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
        check_hlds__purity__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__purity__STATE_VARIABLE_Info_11 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__Var_20));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__Var_21));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__purity__Var_22));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__purity__Var_23));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__purity__Var_24));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__purity__Msgs_9));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__purity__Var_26));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__purity__Var_27));
        }
      }
  }
}

static void MR_CALL 
check_hlds__purity__check_var_functor_unify_purity_6_p_0(
  MR_Word check_hlds__purity__Info_7,
  MR_Word check_hlds__purity__GoalInfo_8,
  MR_Word check_hlds__purity__Var_9,
  MR_Word check_hlds__purity__ConsId_10,
  MR_Word check_hlds__purity__Args_11,
  MR_Word * check_hlds__purity__Specs_12)
{
  {
    MR_bool check_hlds__purity__succeeded;
    MR_Word check_hlds__purity__VarTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 3)));
    MR_Word check_hlds__purity__TypeOfVar_14;
    MR_Word check_hlds__purity__PredInfo_15;
    MR_Word check_hlds__purity__CallerMarkers_16;
    MR_Word check_hlds__purity__Context_17;
    MR_Word check_hlds__purity__ClosureSpecs_34;
    MR_Word check_hlds__purity__DeclaredPurity_35;
    MR_Word check_hlds__purity__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 0)));
    MR_Word check_hlds__purity__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 1)));
    MR_Word check_hlds__purity__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 2)));
    MR_Word check_hlds__purity__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 4)));
    MR_Word check_hlds__purity__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 5)));
    MR_Word check_hlds__purity__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 6)));
    MR_Word check_hlds__purity__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 7)));
    MR_Word check_hlds__purity__Var_46;
    MR_Word check_hlds__purity__Var_47;
    MR_Word check_hlds__purity__Var_48;
    MR_Word check_hlds__purity__Var_49;
    MR_Word check_hlds__purity__Var_50;
    MR_Word check_hlds__purity__Var_51;
    MR_Word check_hlds__purity__Var_52;
    MR_Word check_hlds__purity__PName_18;
    MR_Word check_hlds__purity__TypePurity_21;
    MR_Word check_hlds__purity__PredOrFunc_22;
    MR_Word check_hlds__purity__VarArgTypes_24;
    MR_Integer check_hlds__purity__Var_19;
    MR_Word check_hlds__purity__Var_20;

    {
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__purity__VarTypes_13, check_hlds__purity__Var_9, &check_hlds__purity__TypeOfVar_14);
    }
    check_hlds__purity__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 0)));
    check_hlds__purity__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 1)));
    check_hlds__purity__PredInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 2)));
    check_hlds__purity__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 3)));
    check_hlds__purity__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 4)));
    check_hlds__purity__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 5)));
    check_hlds__purity__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 6)));
    check_hlds__purity__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 7)));
    {
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__purity__PredInfo_15, &check_hlds__purity__CallerMarkers_16);
    }
    {
      check_hlds__purity__Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo_8);
    }
    check_hlds__purity__succeeded = ((((MR_tag((MR_Word) check_hlds__purity__ConsId_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__ConsId_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (check_hlds__purity__succeeded)
      {
        check_hlds__purity__PName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__ConsId_10, (MR_Integer) 1)));
        check_hlds__purity__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__purity__ConsId_10, (MR_Integer) 2)));
        check_hlds__purity__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__ConsId_10, (MR_Integer) 3)));
        {
          check_hlds__purity__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__purity__TypeOfVar_14, &check_hlds__purity__TypePurity_21, &check_hlds__purity__PredOrFunc_22, &check_hlds__purity__VarArgTypes_24);
        }
      }
    if (check_hlds__purity__succeeded)
      {
        MR_Word check_hlds__purity__TVarSet_25;
        MR_Word check_hlds__purity__ExistQTVars_26;
        MR_Word check_hlds__purity__ExternalTypeParams_27;
        MR_Word check_hlds__purity__ArgTypes0_28;
        MR_Word check_hlds__purity__PredArgTypes_29;
        MR_Word check_hlds__purity__ModuleInfo_30;
        MR_Word check_hlds__purity__Var_53;
        MR_Word check_hlds__purity__Var_54;
        MR_Word check_hlds__purity__Var_55;
        MR_Word check_hlds__purity__Var_56;
        MR_Word check_hlds__purity__Var_57;
        MR_Word check_hlds__purity__Var_58;
        MR_Word check_hlds__purity__Var_59;
        MR_Word check_hlds__purity__CalleePredId_31;
        MR_Word check_hlds__purity__Var_37;

        {
          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__purity__PredInfo_15, &check_hlds__purity__TVarSet_25);
        }
        {
          hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(check_hlds__purity__PredInfo_15, &check_hlds__purity__ExistQTVars_26);
        }
        {
          hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(check_hlds__purity__PredInfo_15, &check_hlds__purity__ExternalTypeParams_27);
        }
        {
          hlds__vartypes__lookup_var_types_3_p_0(check_hlds__purity__VarTypes_13, check_hlds__purity__Args_11, &check_hlds__purity__ArgTypes0_28);
        }
        {
          mercury__list__append_3_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__purity__ArgTypes0_28, check_hlds__purity__VarArgTypes_24, &check_hlds__purity__PredArgTypes_29);
        }
        check_hlds__purity__ModuleInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 0)));
        check_hlds__purity__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 1)));
        check_hlds__purity__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 2)));
        check_hlds__purity__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 3)));
        check_hlds__purity__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 4)));
        check_hlds__purity__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 5)));
        check_hlds__purity__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 6)));
        check_hlds__purity__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Info_7, (MR_Integer) 7)));
        {
          check_hlds__purity__Var_37 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(check_hlds__purity__CallerMarkers_16);
        }
        {
          check_hlds__purity__succeeded = hlds__pred_table__get_pred_id_by_types_10_p_0(check_hlds__purity__Var_37, check_hlds__purity__PName_18, check_hlds__purity__PredOrFunc_22, check_hlds__purity__TVarSet_25, check_hlds__purity__ExistQTVars_26, check_hlds__purity__PredArgTypes_29, check_hlds__purity__ExternalTypeParams_27, check_hlds__purity__ModuleInfo_30, check_hlds__purity__Context_17, &check_hlds__purity__CalleePredId_31);
        }
        if (check_hlds__purity__succeeded)
          {
            MR_Word check_hlds__purity__CalleePredInfo_32;
            MR_Word check_hlds__purity__CalleePurity_33;

            {
              hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__purity__ModuleInfo_30, check_hlds__purity__CalleePredId_31, &check_hlds__purity__CalleePredInfo_32);
            }
            {
              hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__purity__CalleePredInfo_32, &check_hlds__purity__CalleePurity_33);
            }
            {
              check_hlds__purity__check_closure_purity_4_p_0(check_hlds__purity__GoalInfo_8, check_hlds__purity__TypePurity_21, check_hlds__purity__CalleePurity_33, &check_hlds__purity__ClosureSpecs_34);
            }
          }
        else
          check_hlds__purity__ClosureSpecs_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      check_hlds__purity__ClosureSpecs_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      check_hlds__purity__DeclaredPurity_35 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__purity__GoalInfo_8);
    }
    switch (check_hlds__purity__DeclaredPurity_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          {
            check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__CallerMarkers_16, (MR_Integer) 24);
          }
          if (check_hlds__purity__succeeded)
            *check_hlds__purity__Specs_12 = check_hlds__purity__ClosureSpecs_34;
          else
            {
              MR_Word check_hlds__purity__Spec_36;

              {
                check_hlds__purity__Spec_36 = check_hlds__purity__impure_unification_expr_error_2_f_0(check_hlds__purity__Context_17, check_hlds__purity__DeclaredPurity_35);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__purity__Specs_12 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__Spec_36));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__purity__ClosureSpecs_34));
              }
            }
        }
        break;
      case (MR_Integer) 0:
        *check_hlds__purity__Specs_12 = check_hlds__purity__ClosureSpecs_34;
        break;
    }
  }
}

static void MR_CALL 
check_hlds__purity__check_closure_purity_4_p_0(
  MR_Word check_hlds__purity__GoalInfo_5,
  MR_Word check_hlds__purity__DeclaredPurity_6,
  MR_Word check_hlds__purity__ActualPurity_7,
  MR_Word * check_hlds__purity__Specs_8)
{
  {
    MR_bool check_hlds__purity__succeeded;

    {
      check_hlds__purity__succeeded = parse_tree__prog_data__less_pure_2_p_0(check_hlds__purity__ActualPurity_7, check_hlds__purity__DeclaredPurity_6);
    }
    if (check_hlds__purity__succeeded)
      {
        MR_Word check_hlds__purity__Context_9;
        MR_Word check_hlds__purity__Spec_10;
        MR_String check_hlds__purity__ActualPurityName_16;
        MR_Word check_hlds__purity__Pieces_17;
        MR_Word check_hlds__purity__Msg_18;
        MR_Word check_hlds__purity__Var_21;
        MR_Word check_hlds__purity__Var_22;
        MR_Word check_hlds__purity__Var_23;
        MR_Word check_hlds__purity__Var_26;
        MR_Word check_hlds__purity__Var_29;
        MR_Word check_hlds__purity__Var_37;
        MR_Word check_hlds__purity__Var_38;
        MR_Word check_hlds__purity__Var_42;

        {
          check_hlds__purity__Context_9 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__purity__GoalInfo_5);
        }
        {
          parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__ActualPurity_7, &check_hlds__purity__ActualPurityName_16);
        }
        {
          check_hlds__purity__Var_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), check_hlds__purity__Var_22, 0) = ((MR_Box) (check_hlds__purity__ActualPurityName_16));
        }
        {
          check_hlds__purity__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Var_29, 0) = ((MR_Box) (check_hlds__purity__Var_22));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[16])));
        }
        {
          check_hlds__purity__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[48])));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Var_26, 1) = ((MR_Box) (check_hlds__purity__Var_29));
        }
        {
          check_hlds__purity__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[47])));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Var_23, 1) = ((MR_Box) (check_hlds__purity__Var_26));
        }
        {
          check_hlds__purity__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Var_21, 0) = ((MR_Box) (check_hlds__purity__Var_22));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Var_21, 1) = ((MR_Box) (check_hlds__purity__Var_23));
        }
        {
          check_hlds__purity__Pieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[46])));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_17, 1) = ((MR_Box) (check_hlds__purity__Var_21));
        }
        {
          check_hlds__purity__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__purity__Var_38, 0) = ((MR_Box) (check_hlds__purity__Pieces_17));
        }
        {
          check_hlds__purity__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Var_37, 0) = ((MR_Box) (check_hlds__purity__Var_38));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__purity__Msg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 0) = ((MR_Box) (check_hlds__purity__Context_9));
          MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 1) = ((MR_Box) (check_hlds__purity__Var_37));
        }
        {
          check_hlds__purity__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Var_42, 0) = ((MR_Box) (check_hlds__purity__Msg_18));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__purity__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
          MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 2) = ((MR_Box) (check_hlds__purity__Var_42));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__purity__Specs_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__Spec_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    else
      *check_hlds__purity__Specs_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static void MR_CALL 
check_hlds__purity__finally_resolve_pred_overloading_8_p_0(
  MR_Word check_hlds__purity__ModuleInfo_9,
  MR_Word check_hlds__purity__CallerPredInfo_10,
  MR_Word check_hlds__purity__PredId0_11,
  MR_Word check_hlds__purity__PredName0_12,
  MR_Word check_hlds__purity__Args0_13,
  MR_Word check_hlds__purity__Context_14,
  MR_Word * check_hlds__purity__PredId_15,
  MR_Word * check_hlds__purity__PredName_16)
{
  {
    MR_bool check_hlds__purity__succeeded;
    MR_Word check_hlds__purity__Var_27;

    {
      check_hlds__purity__Var_27 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
    {
      check_hlds__purity__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__purity__PredId0_11, check_hlds__purity__Var_27);
    }
    if (check_hlds__purity__succeeded)
      {
        MR_Word check_hlds__purity__TVarSet_17;
        MR_Word check_hlds__purity__ExistQVars_18;
        MR_Word check_hlds__purity__ExternalTypeParams_19;
        MR_Word check_hlds__purity__Markers_20;
        MR_Word check_hlds__purity__ClausesInfo_21;
        MR_Word check_hlds__purity__VarTypes_22;
        MR_Word check_hlds__purity__ArgTypes_23;

        {
          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__purity__CallerPredInfo_10, &check_hlds__purity__TVarSet_17);
        }
        {
          hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(check_hlds__purity__CallerPredInfo_10, &check_hlds__purity__ExistQVars_18);
        }
        {
          hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(check_hlds__purity__CallerPredInfo_10, &check_hlds__purity__ExternalTypeParams_19);
        }
        {
          hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__purity__CallerPredInfo_10, &check_hlds__purity__Markers_20);
        }
        {
          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__purity__CallerPredInfo_10, &check_hlds__purity__ClausesInfo_21);
        }
        {
          hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(check_hlds__purity__ClausesInfo_21, &check_hlds__purity__VarTypes_22);
        }
        {
          hlds__vartypes__lookup_var_types_3_p_0(check_hlds__purity__VarTypes_22, check_hlds__purity__Args0_13, &check_hlds__purity__ArgTypes_23);
        }
        {
          hlds__pred_table__resolve_pred_overloading_10_p_0(check_hlds__purity__ModuleInfo_9, check_hlds__purity__Markers_20, check_hlds__purity__TVarSet_17, check_hlds__purity__ExistQVars_18, check_hlds__purity__ArgTypes_23, check_hlds__purity__ExternalTypeParams_19, check_hlds__purity__Context_14, check_hlds__purity__PredName0_12, check_hlds__purity__PredName_16, check_hlds__purity__PredId_15);
        }
      }
    else
      {
        MR_Word check_hlds__purity__PredInfo_24;
        MR_Word check_hlds__purity__PredModule_25;
        MR_String check_hlds__purity__PredBaseName_26;

        *check_hlds__purity__PredId_15 = check_hlds__purity__PredId0_11;
        {
          hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__purity__ModuleInfo_9, *check_hlds__purity__PredId_15, &check_hlds__purity__PredInfo_24);
        }
        {
          check_hlds__purity__PredModule_25 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__purity__PredInfo_24);
        }
        {
          check_hlds__purity__PredBaseName_26 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__purity__PredInfo_24);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__purity__PredName_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__PredModule_25));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__purity__PredBaseName_26));
        }
      }
  }
}

static void MR_CALL 
check_hlds__purity__purity_info_add_message_3_p_0(
  MR_Word check_hlds__purity__Spec_4,
  MR_Word check_hlds__purity__STATE_VARIABLE_Info_0_8,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Info_9)
{
  {
    MR_bool check_hlds__purity__succeeded;
    MR_Word check_hlds__purity__Msgs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word check_hlds__purity__Msgs_7;
    MR_Word check_hlds__purity__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word check_hlds__purity__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word check_hlds__purity__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word check_hlds__purity__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word check_hlds__purity__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word check_hlds__purity__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word check_hlds__purity__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));

    {
      check_hlds__purity__Msgs_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_7, 0) = ((MR_Box) (check_hlds__purity__Spec_4));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Msgs_7, 1) = ((MR_Box) (check_hlds__purity__Msgs0_6));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__purity__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__purity__Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__purity__Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__purity__Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__purity__Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__purity__Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__purity__Msgs_7));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__purity__Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__purity__Var_17));
    }
  }
}

static void MR_CALL 
check_hlds__purity__update_purity_ct_in_goal_info_4_p_0(
  MR_Word check_hlds__purity__Purity_5,
  MR_Word check_hlds__purity__ContainsTrace_6,
  MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_0_8,
  MR_Word * check_hlds__purity__STATE_VARIABLE_GoalInfo_9)
{
  {
    MR_bool check_hlds__purity__succeeded;
    MR_Word check_hlds__purity__STATE_VARIABLE_GoalInfo_10_10;

    {
      hlds__hlds_goal__goal_info_set_purity_3_p_0(check_hlds__purity__Purity_5, check_hlds__purity__STATE_VARIABLE_GoalInfo_0_8, &check_hlds__purity__STATE_VARIABLE_GoalInfo_10_10);
    }
    switch (check_hlds__purity__ContainsTrace_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 18, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_10, check_hlds__purity__STATE_VARIABLE_GoalInfo_9);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 18, check_hlds__purity__STATE_VARIABLE_GoalInfo_10_10, check_hlds__purity__STATE_VARIABLE_GoalInfo_9);
          }
        }
        break;
    }
  }
}

MR_Word MR_CALL 
check_hlds__purity__impure_unification_expr_error_2_f_0(
  MR_Word check_hlds__purity__Context_4,
  MR_Word check_hlds__purity__Purity_5)
{
  {
    MR_bool check_hlds__purity__succeeded;
    MR_Word check_hlds__purity__Spec_6;
    MR_String check_hlds__purity__PurityName_7;
    MR_Word check_hlds__purity__Pieces_8;
    MR_Word check_hlds__purity__Msg_9;
    MR_Word check_hlds__purity__Var_12;
    MR_Word check_hlds__purity__Var_15;
    MR_Word check_hlds__purity__Var_16;
    MR_String check_hlds__purity__Var_17;
    MR_Word check_hlds__purity__Var_23;
    MR_Word check_hlds__purity__Var_24;
    MR_Word check_hlds__purity__Var_28;

    {
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__Purity_5, &check_hlds__purity__PurityName_7);
    }
    {
      check_hlds__purity__Var_17 = mercury__string__f_43_43_2_f_0(check_hlds__purity__PurityName_7, (MR_String) ",");
    }
    {
      check_hlds__purity__Var_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), check_hlds__purity__Var_16, 0) = ((MR_Box) (check_hlds__purity__Var_17));
    }
    {
      check_hlds__purity__Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_15, 0) = ((MR_Box) (check_hlds__purity__Var_16));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[45])));
    }
    {
      check_hlds__purity__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[43])));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_12, 1) = ((MR_Box) (check_hlds__purity__Var_15));
    }
    {
      check_hlds__purity__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[42])));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces_8, 1) = ((MR_Box) (check_hlds__purity__Var_12));
    }
    {
      check_hlds__purity__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Var_24, 0) = ((MR_Box) (check_hlds__purity__Pieces_8));
    }
    {
      check_hlds__purity__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_23, 0) = ((MR_Box) (check_hlds__purity__Var_24));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__purity__Msg_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_9, 0) = ((MR_Box) (check_hlds__purity__Context_4));
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_9, 1) = ((MR_Box) (check_hlds__purity__Var_23));
    }
    {
      check_hlds__purity__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_28, 0) = ((MR_Box) (check_hlds__purity__Msg_9));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__purity__Spec_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_6, 2) = ((MR_Box) (check_hlds__purity__Var_28));
    }
    return check_hlds__purity__Spec_6;
  }
}

static MR_bool MR_CALL 
check_hlds__purity__applies_to_all_modes_2_p_0(
  MR_Word check_hlds__purity__Clause_3,
  MR_Word check_hlds__purity__AllProcIds_4)
{
  {
    MR_bool check_hlds__purity__succeeded;
    MR_Word check_hlds__purity__ApplicableProcIds_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause_3, (MR_Integer) 0)));
    MR_Word check_hlds__purity__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause_3, (MR_Integer) 1)));
    MR_Word check_hlds__purity__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause_3, (MR_Integer) 2)));
    MR_Word check_hlds__purity__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause_3, (MR_Integer) 3)));
    MR_Word check_hlds__purity__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__purity__Clause_3, (MR_Integer) 4)));

    if ((check_hlds__purity__ApplicableProcIds_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      check_hlds__purity__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__purity__ClauseProcIds_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__ApplicableProcIds_5, (MR_Integer) 0)));
        MR_Word check_hlds__purity__SortedClauseProcIds_7;

        {
          mercury__list__sort_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__purity__ClauseProcIds_6, &check_hlds__purity__SortedClauseProcIds_7);
        }
        {
          check_hlds__purity__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__purity_scalar_common_2[3], ((MR_Box) (check_hlds__purity__SortedClauseProcIds_7)), ((MR_Box) (check_hlds__purity__AllProcIds_4)));
        }
      }
    return check_hlds__purity__succeeded;
  }
}

static void MR_CALL 
check_hlds__purity__perform_pred_purity_checks_7_p_0(
  MR_Word check_hlds__purity__ModuleInfo_8,
  MR_Word check_hlds__purity__PredId_9,
  MR_Word check_hlds__purity__PredInfo_10,
  MR_Word check_hlds__purity__ActualPurity_11,
  MR_Word check_hlds__purity__DeclaredPurity_12,
  MR_Word check_hlds__purity__MaybePromisedPurity_13,
  MR_Word * check_hlds__purity__STATE_VARIABLE_Specs_29)
{
  {
    MR_bool check_hlds__purity__succeeded;
    MR_Word check_hlds__purity__ComparisonResult_23;
    MR_Word check_hlds__purity__STATE_VARIABLE_Specs_30_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word check_hlds__purity__STATE_VARIABLE_Specs_32_32;

    if ((check_hlds__purity__MaybePromisedPurity_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      check_hlds__purity__STATE_VARIABLE_Specs_32_32 = check_hlds__purity__STATE_VARIABLE_Specs_30_30;
    else
      {
        MR_Word check_hlds__purity__PromisedPurity_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__purity__MaybePromisedPurity_13, (MR_Integer) 0)));
        MR_Word check_hlds__purity__STATE_VARIABLE_Specs_31_31;
        MR_Word check_hlds__purity__Origin_17;

        check_hlds__purity__succeeded = (check_hlds__purity__DeclaredPurity_12 == check_hlds__purity__PromisedPurity_15);
        if (check_hlds__purity__succeeded)
          check_hlds__purity__STATE_VARIABLE_Specs_31_31 = check_hlds__purity__STATE_VARIABLE_Specs_30_30;
        else
          {
            MR_Word check_hlds__purity__InconsistentPromiseSpec_16;

            {
              check_hlds__purity__InconsistentPromiseSpec_16 = check_hlds__purity__error_inconsistent_purity_promise_4_f_0(check_hlds__purity__ModuleInfo_8, check_hlds__purity__PredInfo_10, check_hlds__purity__PredId_9, check_hlds__purity__DeclaredPurity_12);
            }
            {
              check_hlds__purity__STATE_VARIABLE_Specs_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__purity__STATE_VARIABLE_Specs_31_31, 0) = ((MR_Box) (check_hlds__purity__InconsistentPromiseSpec_16));
              MR_hl_field(MR_mktag(1), check_hlds__purity__STATE_VARIABLE_Specs_31_31, 1) = ((MR_Box) (check_hlds__purity__STATE_VARIABLE_Specs_30_30));
            }
          }
        check_hlds__purity__succeeded = (check_hlds__purity__ActualPurity_11 == check_hlds__purity__PromisedPurity_15);
        if (check_hlds__purity__succeeded)
          {
            {
              hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__purity__PredInfo_10, &check_hlds__purity__Origin_17);
            }
            if (((MR_tag((MR_Word) check_hlds__purity__Origin_17)) == (MR_mktag((MR_Integer) 2))))
              check_hlds__purity__succeeded = MR_TRUE;
            else
            if (((((MR_tag((MR_Word) check_hlds__purity__Origin_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__purity__Origin_17, (MR_Integer) 0)))) == (MR_Integer) 0))))
              check_hlds__purity__succeeded = MR_TRUE;
            else
              check_hlds__purity__succeeded = MR_FALSE;
            check_hlds__purity__succeeded = !(check_hlds__purity__succeeded);
          }
        if (check_hlds__purity__succeeded)
          {
            MR_Word check_hlds__purity__UnnecessaryPromiseSpec_22;

            {
              check_hlds__purity__UnnecessaryPromiseSpec_22 = check_hlds__purity__warn_unnecessary_purity_promise_4_f_0(check_hlds__purity__ModuleInfo_8, check_hlds__purity__PredInfo_10, check_hlds__purity__PredId_9, check_hlds__purity__PromisedPurity_15);
            }
            {
              check_hlds__purity__STATE_VARIABLE_Specs_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__purity__STATE_VARIABLE_Specs_32_32, 0) = ((MR_Box) (check_hlds__purity__UnnecessaryPromiseSpec_22));
              MR_hl_field(MR_mktag(1), check_hlds__purity__STATE_VARIABLE_Specs_32_32, 1) = ((MR_Box) (check_hlds__purity__STATE_VARIABLE_Specs_31_31));
            }
          }
        else
          check_hlds__purity__STATE_VARIABLE_Specs_32_32 = check_hlds__purity__STATE_VARIABLE_Specs_31_31;
      }
    switch (check_hlds__purity__ActualPurity_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        switch (check_hlds__purity__DeclaredPurity_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            check_hlds__purity__ComparisonResult_23 = (MR_Integer) 0;
            break;
          case (MR_Integer) 0:
            check_hlds__purity__ComparisonResult_23 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            check_hlds__purity__ComparisonResult_23 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 0:
        switch (check_hlds__purity__DeclaredPurity_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            check_hlds__purity__ComparisonResult_23 = (MR_Integer) 2;
            break;
          case (MR_Integer) 0:
            check_hlds__purity__ComparisonResult_23 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            check_hlds__purity__ComparisonResult_23 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (check_hlds__purity__DeclaredPurity_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            check_hlds__purity__ComparisonResult_23 = (MR_Integer) 2;
            break;
          case (MR_Integer) 0:
            check_hlds__purity__ComparisonResult_23 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            check_hlds__purity__ComparisonResult_23 = (MR_Integer) 0;
            break;
        }
        break;
    }
    switch (check_hlds__purity__ComparisonResult_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        if ((check_hlds__purity__MaybePromisedPurity_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__purity__NotPureEnoughSpec_25;

            {
              check_hlds__purity__NotPureEnoughSpec_25 = check_hlds__purity__error_not_pure_enough_4_f_0(check_hlds__purity__ModuleInfo_8, check_hlds__purity__PredInfo_10, check_hlds__purity__PredId_9, check_hlds__purity__ActualPurity_11);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__purity__STATE_VARIABLE_Specs_29 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__NotPureEnoughSpec_25));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__purity__STATE_VARIABLE_Specs_32_32));
            }
          }
        else
          *check_hlds__purity__STATE_VARIABLE_Specs_29 = check_hlds__purity__STATE_VARIABLE_Specs_32_32;
        break;
      case (MR_Integer) 0:
        *check_hlds__purity__STATE_VARIABLE_Specs_29 = check_hlds__purity__STATE_VARIABLE_Specs_32_32;
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__purity__Markers_26;
          MR_Word check_hlds__purity__GoalType_27;

          {
            hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__purity__PredInfo_10, &check_hlds__purity__Markers_26);
          }
          {
            hlds__hlds_pred__pred_info_get_goal_type_2_p_0(check_hlds__purity__PredInfo_10, &check_hlds__purity__GoalType_27);
          }
          if ((check_hlds__purity__GoalType_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
            check_hlds__purity__succeeded = MR_TRUE;
          else
          if ((check_hlds__purity__GoalType_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
            check_hlds__purity__succeeded = MR_TRUE;
          else
            check_hlds__purity__succeeded = MR_FALSE;
          if (!(check_hlds__purity__succeeded))
            {
              {
                check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__Markers_26, (MR_Integer) 0);
              }
              if (!(check_hlds__purity__succeeded))
                {
                  {
                    check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__Markers_26, (MR_Integer) 12);
                  }
                  if (!(check_hlds__purity__succeeded))
                    {
                      {
                        check_hlds__purity__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__purity__Markers_26, (MR_Integer) 11);
                      }
                    }
                }
            }
          if (check_hlds__purity__succeeded)
            *check_hlds__purity__STATE_VARIABLE_Specs_29 = check_hlds__purity__STATE_VARIABLE_Specs_32_32;
          else
            {
              MR_Word check_hlds__purity__TypeCtorInfo_22_88;
              MR_Word check_hlds__purity__TooPureSpec_28;
              MR_Word check_hlds__purity__Context_44;
              MR_Word check_hlds__purity__PredContextPieces_45;
              MR_String check_hlds__purity__DeclaredPurityName_46;
              MR_String check_hlds__purity__ActualPurityName_47;
              MR_Word check_hlds__purity__Pieces_48;
              MR_Word check_hlds__purity__Msg_49;
              MR_Word check_hlds__purity__Var_50;
              MR_Word check_hlds__purity__Var_53;
              MR_Word check_hlds__purity__Var_54;
              MR_Word check_hlds__purity__Var_55;
              MR_Word check_hlds__purity__Var_58;
              MR_Word check_hlds__purity__Var_59;
              MR_String check_hlds__purity__Var_60;
              MR_Word check_hlds__purity__Var_63;
              MR_Word check_hlds__purity__Var_64;
              MR_Word check_hlds__purity__Var_68;
              MR_Word check_hlds__purity__PredPieces_75;
              MR_Word check_hlds__purity__Var_81;

              {
                hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__purity__PredInfo_10, &check_hlds__purity__Context_44);
              }
              {
                check_hlds__purity__PredPieces_75 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__purity__ModuleInfo_8, (MR_Integer) 1, check_hlds__purity__PredId_9);
              }
              check_hlds__purity__TypeCtorInfo_22_88 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              {
                check_hlds__purity__Var_81 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_88, check_hlds__purity__PredPieces_75, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[6]));
              }
              {
                check_hlds__purity__PredContextPieces_45 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_88, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[24]), check_hlds__purity__Var_81);
              }
              {
                parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__DeclaredPurity_12, &check_hlds__purity__DeclaredPurityName_46);
              }
              {
                parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__ActualPurity_11, &check_hlds__purity__ActualPurityName_47);
              }
              {
                check_hlds__purity__Var_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), check_hlds__purity__Var_54, 0) = ((MR_Box) (check_hlds__purity__DeclaredPurityName_46));
              }
              {
                check_hlds__purity__Var_60 = mercury__string__f_43_43_2_f_0(check_hlds__purity__ActualPurityName_47, (MR_String) ".");
              }
              {
                check_hlds__purity__Var_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), check_hlds__purity__Var_59, 0) = ((MR_Box) (check_hlds__purity__Var_60));
              }
              {
                check_hlds__purity__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__purity__Var_58, 0) = ((MR_Box) (check_hlds__purity__Var_59));
                MR_hl_field(MR_mktag(1), check_hlds__purity__Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__purity__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__purity__Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[41])));
                MR_hl_field(MR_mktag(1), check_hlds__purity__Var_55, 1) = ((MR_Box) (check_hlds__purity__Var_58));
              }
              {
                check_hlds__purity__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__purity__Var_53, 0) = ((MR_Box) (check_hlds__purity__Var_54));
                MR_hl_field(MR_mktag(1), check_hlds__purity__Var_53, 1) = ((MR_Box) (check_hlds__purity__Var_55));
              }
              {
                check_hlds__purity__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__purity__Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[40])));
                MR_hl_field(MR_mktag(1), check_hlds__purity__Var_50, 1) = ((MR_Box) (check_hlds__purity__Var_53));
              }
              {
                check_hlds__purity__Pieces_48 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__purity__PredContextPieces_45, check_hlds__purity__Var_50);
              }
              {
                check_hlds__purity__Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__purity__Var_64, 0) = ((MR_Box) (check_hlds__purity__Pieces_48));
              }
              {
                check_hlds__purity__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__purity__Var_63, 0) = ((MR_Box) (check_hlds__purity__Var_64));
                MR_hl_field(MR_mktag(1), check_hlds__purity__Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__purity__Msg_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_49, 0) = ((MR_Box) (check_hlds__purity__Context_44));
                MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_49, 1) = ((MR_Box) (check_hlds__purity__Var_63));
              }
              {
                check_hlds__purity__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__purity__Var_68, 0) = ((MR_Box) (check_hlds__purity__Msg_49));
                MR_hl_field(MR_mktag(1), check_hlds__purity__Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__purity__TooPureSpec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__purity__TooPureSpec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                MR_hl_field(MR_mktag(0), check_hlds__purity__TooPureSpec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
                MR_hl_field(MR_mktag(0), check_hlds__purity__TooPureSpec_28, 2) = ((MR_Box) (check_hlds__purity__Var_68));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__purity__STATE_VARIABLE_Specs_29 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__purity__TooPureSpec_28));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__purity__STATE_VARIABLE_Specs_32_32));
              }
            }
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
check_hlds__purity__error_not_pure_enough_4_f_0(
  MR_Word check_hlds__purity__ModuleInfo_6,
  MR_Word check_hlds__purity__PredInfo_7,
  MR_Word check_hlds__purity__PredId_8,
  MR_Word check_hlds__purity__Purity_9)
{
  {
    MR_bool check_hlds__purity__succeeded;
    MR_Word check_hlds__purity__Spec_10;
    MR_Word check_hlds__purity__TypeCtorInfo_22_81;
    MR_Word check_hlds__purity__Context_11;
    MR_Word check_hlds__purity__PredOrFunc_12;
    MR_String check_hlds__purity__PredOrFuncStr_13;
    MR_Word check_hlds__purity__PredContextPieces_14;
    MR_Word check_hlds__purity__DeclaredPurity_15;
    MR_String check_hlds__purity__PurityName_16;
    MR_String check_hlds__purity__DeclaredPurityName_17;
    MR_Word check_hlds__purity__Pieces1_18;
    MR_Word check_hlds__purity__Pieces2_19;
    MR_Word check_hlds__purity__Msg_20;
    MR_Word check_hlds__purity__Var_23;
    MR_Word check_hlds__purity__Var_24;
    MR_Word check_hlds__purity__Var_25;
    MR_Word check_hlds__purity__Var_28;
    MR_Word check_hlds__purity__Var_29;
    MR_Word check_hlds__purity__Var_53;
    MR_Word check_hlds__purity__Var_54;
    MR_Word check_hlds__purity__Var_55;
    MR_Word check_hlds__purity__Var_56;
    MR_Word check_hlds__purity__Var_57;
    MR_Word check_hlds__purity__Var_58;
    MR_Word check_hlds__purity__Var_62;
    MR_Word check_hlds__purity__PredPieces_68;
    MR_Word check_hlds__purity__Var_74;

    {
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__purity__PredInfo_7, &check_hlds__purity__Context_11);
    }
    {
      check_hlds__purity__PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__purity__PredInfo_7);
    }
    {
      check_hlds__purity__PredOrFuncStr_13 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(check_hlds__purity__PredOrFunc_12);
    }
    {
      check_hlds__purity__PredPieces_68 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__purity__ModuleInfo_6, (MR_Integer) 1, check_hlds__purity__PredId_8);
    }
    check_hlds__purity__TypeCtorInfo_22_81 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      check_hlds__purity__Var_74 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_81, check_hlds__purity__PredPieces_68, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[6]));
    }
    {
      check_hlds__purity__PredContextPieces_14 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_81, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[24]), check_hlds__purity__Var_74);
    }
    {
      hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__purity__PredInfo_7, &check_hlds__purity__DeclaredPurity_15);
    }
    {
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__Purity_9, &check_hlds__purity__PurityName_16);
    }
    {
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__DeclaredPurity_15, &check_hlds__purity__DeclaredPurityName_17);
    }
    {
      check_hlds__purity__Var_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), check_hlds__purity__Var_24, 0) = ((MR_Box) (check_hlds__purity__PredOrFuncStr_13));
    }
    {
      check_hlds__purity__Var_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), check_hlds__purity__Var_29, 0) = ((MR_Box) (check_hlds__purity__PurityName_16));
    }
    {
      check_hlds__purity__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_28, 0) = ((MR_Box) (check_hlds__purity__Var_29));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[16])));
    }
    {
      check_hlds__purity__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[35])));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_25, 1) = ((MR_Box) (check_hlds__purity__Var_28));
    }
    {
      check_hlds__purity__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_23, 0) = ((MR_Box) (check_hlds__purity__Var_24));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_23, 1) = ((MR_Box) (check_hlds__purity__Var_25));
    }
    {
      check_hlds__purity__Pieces1_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces1_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[34])));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces1_18, 1) = ((MR_Box) (check_hlds__purity__Var_23));
    }
    {
      check_hlds__purity__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__purity__PredInfo_7);
    }
    if (check_hlds__purity__succeeded)
      {
        check_hlds__purity__Pieces2_19 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[37]);
      }
    else
      {
        MR_Word check_hlds__purity__Var_41;
        MR_Word check_hlds__purity__Var_42;
        MR_Word check_hlds__purity__Var_43;
        MR_Word check_hlds__purity__Var_46;
        MR_Word check_hlds__purity__Var_47;
        MR_String check_hlds__purity__Var_48;

        {
          check_hlds__purity__Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__purity__Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), check_hlds__purity__Var_42, 1) = ((MR_Box) (check_hlds__purity__PurityName_16));
        }
        {
          check_hlds__purity__Var_48 = mercury__string__f_43_43_2_f_0(check_hlds__purity__DeclaredPurityName_17, (MR_String) ".");
        }
        {
          check_hlds__purity__Var_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), check_hlds__purity__Var_47, 0) = ((MR_Box) (check_hlds__purity__Var_48));
        }
        {
          check_hlds__purity__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Var_46, 0) = ((MR_Box) (check_hlds__purity__Var_47));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[4])));
        }
        {
          check_hlds__purity__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[39])));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Var_43, 1) = ((MR_Box) (check_hlds__purity__Var_46));
        }
        {
          check_hlds__purity__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Var_41, 0) = ((MR_Box) (check_hlds__purity__Var_42));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Var_41, 1) = ((MR_Box) (check_hlds__purity__Var_43));
        }
        {
          check_hlds__purity__Pieces2_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[38])));
          MR_hl_field(MR_mktag(1), check_hlds__purity__Pieces2_19, 1) = ((MR_Box) (check_hlds__purity__Var_41));
        }
      }
    {
      check_hlds__purity__Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Var_54, 0) = ((MR_Box) (check_hlds__purity__PredContextPieces_14));
    }
    {
      check_hlds__purity__Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Var_56, 0) = ((MR_Box) (check_hlds__purity__Pieces1_18));
    }
    {
      check_hlds__purity__Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Var_58, 0) = ((MR_Box) (check_hlds__purity__Pieces2_19));
    }
    {
      check_hlds__purity__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_57, 0) = ((MR_Box) (check_hlds__purity__Var_58));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__purity__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_55, 0) = ((MR_Box) (check_hlds__purity__Var_56));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_55, 1) = ((MR_Box) (check_hlds__purity__Var_57));
    }
    {
      check_hlds__purity__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_53, 0) = ((MR_Box) (check_hlds__purity__Var_54));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_53, 1) = ((MR_Box) (check_hlds__purity__Var_55));
    }
    {
      check_hlds__purity__Msg_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_20, 0) = ((MR_Box) (check_hlds__purity__Context_11));
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_20, 1) = ((MR_Box) (check_hlds__purity__Var_53));
    }
    {
      check_hlds__purity__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_62, 0) = ((MR_Box) (check_hlds__purity__Msg_20));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__purity__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 2) = ((MR_Box) (check_hlds__purity__Var_62));
    }
    return check_hlds__purity__Spec_10;
  }
}

static MR_Word MR_CALL 
check_hlds__purity__warn_unnecessary_purity_promise_4_f_0(
  MR_Word check_hlds__purity__ModuleInfo_6,
  MR_Word check_hlds__purity__PredInfo_7,
  MR_Word check_hlds__purity__PredId_8,
  MR_Word check_hlds__purity__PromisedPurity_9)
{
  {
    MR_bool check_hlds__purity__succeeded;
    MR_Word check_hlds__purity__Spec_10;
    MR_Word check_hlds__purity__TypeCtorInfo_22_84;
    MR_Word check_hlds__purity__Context_11;
    MR_Word check_hlds__purity__PredContextPieces_12;
    MR_String check_hlds__purity__Pragma_13;
    MR_String check_hlds__purity__CodeStr_14;
    MR_Word check_hlds__purity__PredOrFunc_15;
    MR_Word check_hlds__purity__MainPieces_16;
    MR_Word check_hlds__purity__VerbosePieces_17;
    MR_Word check_hlds__purity__Msg_18;
    MR_Word check_hlds__purity__Var_24;
    MR_Word check_hlds__purity__Var_25;
    MR_Word check_hlds__purity__Var_34;
    MR_Word check_hlds__purity__Var_35;
    MR_Word check_hlds__purity__Var_36;
    MR_Word check_hlds__purity__Var_39;
    MR_Word check_hlds__purity__Var_40;
    MR_Word check_hlds__purity__Var_41;
    MR_Word check_hlds__purity__Var_44;
    MR_Word check_hlds__purity__Var_55;
    MR_Word check_hlds__purity__Var_56;
    MR_Word check_hlds__purity__Var_57;
    MR_Word check_hlds__purity__Var_58;
    MR_Word check_hlds__purity__Var_59;
    MR_Word check_hlds__purity__Var_60;
    MR_Word check_hlds__purity__Var_65;
    MR_Word check_hlds__purity__PredPieces_71;
    MR_Word check_hlds__purity__Var_77;

    {
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__purity__PredInfo_7, &check_hlds__purity__Context_11);
    }
    {
      check_hlds__purity__PredPieces_71 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__purity__ModuleInfo_6, (MR_Integer) 1, check_hlds__purity__PredId_8);
    }
    check_hlds__purity__TypeCtorInfo_22_84 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      check_hlds__purity__Var_77 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_84, check_hlds__purity__PredPieces_71, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[6]));
    }
    {
      check_hlds__purity__PredContextPieces_12 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_84, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[24]), check_hlds__purity__Var_77);
    }
    switch (check_hlds__purity__PromisedPurity_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.purity", (MR_String) "function \140check_hlds.purity.warn_unnecessary_purity_promise\'/4", (MR_String) "promise_impure");
          }
        }
        break;
      case (MR_Integer) 0:
        {
          check_hlds__purity__Pragma_13 = (MR_String) "promise_pure";
          check_hlds__purity__CodeStr_14 = (MR_String) "impure or semipure";
        }
        break;
      case (MR_Integer) 1:
        {
          check_hlds__purity__Pragma_13 = (MR_String) "promise_semipure";
          check_hlds__purity__CodeStr_14 = (MR_String) "impure";
        }
        break;
    }
    {
      check_hlds__purity__PredOrFunc_15 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__purity__PredInfo_7);
    }
    {
      check_hlds__purity__Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__purity__Var_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__purity__Var_25, 1) = ((MR_Box) (check_hlds__purity__Pragma_13));
    }
    {
      check_hlds__purity__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_24, 0) = ((MR_Box) (check_hlds__purity__Var_25));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[14])));
    }
    {
      check_hlds__purity__MainPieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__MainPieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[29])));
      MR_hl_field(MR_mktag(1), check_hlds__purity__MainPieces_16, 1) = ((MR_Box) (check_hlds__purity__Var_24));
    }
    {
      check_hlds__purity__Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__purity__Var_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
      MR_hl_field(MR_mktag(3), check_hlds__purity__Var_35, 1) = ((MR_Box) (check_hlds__purity__PredOrFunc_15));
    }
    {
      check_hlds__purity__Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), check_hlds__purity__Var_40, 0) = ((MR_Box) (check_hlds__purity__CodeStr_14));
    }
    {
      check_hlds__purity__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[33])));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_44, 1) = ((MR_Box) (check_hlds__purity__Var_24));
    }
    {
      check_hlds__purity__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[32])));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_41, 1) = ((MR_Box) (check_hlds__purity__Var_44));
    }
    {
      check_hlds__purity__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_39, 0) = ((MR_Box) (check_hlds__purity__Var_40));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_39, 1) = ((MR_Box) (check_hlds__purity__Var_41));
    }
    {
      check_hlds__purity__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[31])));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_36, 1) = ((MR_Box) (check_hlds__purity__Var_39));
    }
    {
      check_hlds__purity__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_34, 0) = ((MR_Box) (check_hlds__purity__Var_35));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_34, 1) = ((MR_Box) (check_hlds__purity__Var_36));
    }
    {
      check_hlds__purity__VerbosePieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__VerbosePieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[30])));
      MR_hl_field(MR_mktag(1), check_hlds__purity__VerbosePieces_17, 1) = ((MR_Box) (check_hlds__purity__Var_34));
    }
    {
      check_hlds__purity__Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Var_56, 0) = ((MR_Box) (check_hlds__purity__PredContextPieces_12));
    }
    {
      check_hlds__purity__Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Var_58, 0) = ((MR_Box) (check_hlds__purity__MainPieces_16));
    }
    {
      check_hlds__purity__Var_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), check_hlds__purity__Var_60, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), check_hlds__purity__Var_60, 1) = ((MR_Box) (check_hlds__purity__VerbosePieces_17));
    }
    {
      check_hlds__purity__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_59, 0) = ((MR_Box) (check_hlds__purity__Var_60));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__purity__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_57, 0) = ((MR_Box) (check_hlds__purity__Var_58));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_57, 1) = ((MR_Box) (check_hlds__purity__Var_59));
    }
    {
      check_hlds__purity__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_55, 0) = ((MR_Box) (check_hlds__purity__Var_56));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_55, 1) = ((MR_Box) (check_hlds__purity__Var_57));
    }
    {
      check_hlds__purity__Msg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 0) = ((MR_Box) (check_hlds__purity__Context_11));
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 1) = ((MR_Box) (check_hlds__purity__Var_55));
    }
    {
      check_hlds__purity__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_65, 0) = ((MR_Box) (check_hlds__purity__Msg_18));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__purity__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 2) = ((MR_Box) (check_hlds__purity__Var_65));
    }
    return check_hlds__purity__Spec_10;
  }
}

static MR_Word MR_CALL 
check_hlds__purity__error_inconsistent_purity_promise_4_f_0(
  MR_Word check_hlds__purity__ModuleInfo_6,
  MR_Word check_hlds__purity__PredInfo_7,
  MR_Word check_hlds__purity__PredId_8,
  MR_Word check_hlds__purity__Purity_9)
{
  {
    MR_bool check_hlds__purity__succeeded;
    MR_Word check_hlds__purity__Spec_10;
    MR_Word check_hlds__purity__TypeCtorInfo_22_70;
    MR_Word check_hlds__purity__Context_11;
    MR_Word check_hlds__purity__PredOrFunc_12;
    MR_String check_hlds__purity__PredOrFuncStr_13;
    MR_String check_hlds__purity__PurityName_14;
    MR_Word check_hlds__purity__PredContextPieces_15;
    MR_Word check_hlds__purity__MainPieces_16;
    MR_Word check_hlds__purity__VerbosePieces_17;
    MR_Word check_hlds__purity__Msg_18;
    MR_Word check_hlds__purity__Var_19;
    MR_Word check_hlds__purity__Var_22;
    MR_Word check_hlds__purity__Var_23;
    MR_Word check_hlds__purity__Var_30;
    MR_Word check_hlds__purity__Var_31;
    MR_Word check_hlds__purity__Var_42;
    MR_Word check_hlds__purity__Var_43;
    MR_Word check_hlds__purity__Var_44;
    MR_Word check_hlds__purity__Var_45;
    MR_Word check_hlds__purity__Var_50;
    MR_Word check_hlds__purity__PredPieces_57;
    MR_Word check_hlds__purity__Var_63;

    {
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__purity__PredInfo_7, &check_hlds__purity__Context_11);
    }
    {
      check_hlds__purity__PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__purity__PredInfo_7);
    }
    {
      check_hlds__purity__PredOrFuncStr_13 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(check_hlds__purity__PredOrFunc_12);
    }
    {
      parse_tree__prog_out__purity_name_2_p_0(check_hlds__purity__Purity_9, &check_hlds__purity__PurityName_14);
    }
    {
      check_hlds__purity__PredPieces_57 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__purity__ModuleInfo_6, (MR_Integer) 1, check_hlds__purity__PredId_8);
    }
    check_hlds__purity__TypeCtorInfo_22_70 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      check_hlds__purity__Var_63 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_70, check_hlds__purity__PredPieces_57, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[6]));
    }
    {
      check_hlds__purity__PredContextPieces_15 = mercury__list__f_43_43_2_f_0(check_hlds__purity__TypeCtorInfo_22_70, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[24]), check_hlds__purity__Var_63);
    }
    {
      check_hlds__purity__Var_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), check_hlds__purity__Var_23, 0) = ((MR_Box) (check_hlds__purity__PurityName_14));
    }
    {
      check_hlds__purity__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_22, 0) = ((MR_Box) (check_hlds__purity__Var_23));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[27])));
    }
    {
      check_hlds__purity__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[25])));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_19, 1) = ((MR_Box) (check_hlds__purity__Var_22));
    }
    {
      check_hlds__purity__MainPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__purity__PredContextPieces_15, check_hlds__purity__Var_19);
    }
    {
      check_hlds__purity__Var_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), check_hlds__purity__Var_31, 0) = ((MR_Box) (check_hlds__purity__PredOrFuncStr_13));
    }
    {
      check_hlds__purity__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_30, 0) = ((MR_Box) (check_hlds__purity__Var_31));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__purity_scalar_common_2[12])));
    }
    {
      check_hlds__purity__VerbosePieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__VerbosePieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__purity_scalar_common_2[28])));
      MR_hl_field(MR_mktag(1), check_hlds__purity__VerbosePieces_17, 1) = ((MR_Box) (check_hlds__purity__Var_30));
    }
    {
      check_hlds__purity__Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Var_43, 0) = ((MR_Box) (check_hlds__purity__MainPieces_16));
    }
    {
      check_hlds__purity__Var_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), check_hlds__purity__Var_45, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), check_hlds__purity__Var_45, 1) = ((MR_Box) (check_hlds__purity__VerbosePieces_17));
    }
    {
      check_hlds__purity__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_44, 0) = ((MR_Box) (check_hlds__purity__Var_45));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__purity__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_42, 0) = ((MR_Box) (check_hlds__purity__Var_43));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_42, 1) = ((MR_Box) (check_hlds__purity__Var_44));
    }
    {
      check_hlds__purity__Msg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 0) = ((MR_Box) (check_hlds__purity__Context_11));
      MR_hl_field(MR_mktag(0), check_hlds__purity__Msg_18, 1) = ((MR_Box) (check_hlds__purity__Var_42));
    }
    {
      check_hlds__purity__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_50, 0) = ((MR_Box) (check_hlds__purity__Msg_18));
      MR_hl_field(MR_mktag(1), check_hlds__purity__Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__purity__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
      MR_hl_field(MR_mktag(0), check_hlds__purity__Spec_10, 2) = ((MR_Box) (check_hlds__purity__Var_50));
    }
    return check_hlds__purity__Spec_10;
  }
}

static MR_bool MR_CALL 
check_hlds__purity____Unify____converted_unify_0_0_10001(
  MR_Box check_hlds__purity__wrapper_arg_1,
  MR_Box check_hlds__purity__wrapper_arg_2)
{
  {
    MR_bool check_hlds__purity__succeeded;

    {
      check_hlds__purity__succeeded = check_hlds__purity____Unify____converted_unify_0_0(((MR_Word) check_hlds__purity__wrapper_arg_1), ((MR_Word) check_hlds__purity__wrapper_arg_2));
    }
    return check_hlds__purity__succeeded;
  }
}

static void MR_CALL 
check_hlds__purity____Compare____converted_unify_0_0_10001(
  MR_Box * check_hlds__purity__wrapper_arg_1,
  MR_Box check_hlds__purity__wrapper_arg_2,
  MR_Box check_hlds__purity__wrapper_arg_3)
{
  {
    MR_Word check_hlds__purity__conv0_HeadVar__1_1;

    {
      check_hlds__purity____Compare____converted_unify_0_0(&check_hlds__purity__conv0_HeadVar__1_1, ((MR_Word) check_hlds__purity__wrapper_arg_2), ((MR_Word) check_hlds__purity__wrapper_arg_3));
    }
    *check_hlds__purity__wrapper_arg_1 = ((MR_Box) (check_hlds__purity__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__purity____Unify____purity_info_0_0_10001(
  MR_Box check_hlds__purity__wrapper_arg_1,
  MR_Box check_hlds__purity__wrapper_arg_2)
{
  {
    MR_bool check_hlds__purity__succeeded;

    {
      check_hlds__purity__succeeded = check_hlds__purity____Unify____purity_info_0_0(((MR_Word) check_hlds__purity__wrapper_arg_1), ((MR_Word) check_hlds__purity__wrapper_arg_2));
    }
    return check_hlds__purity__succeeded;
  }
}

static void MR_CALL 
check_hlds__purity____Compare____purity_info_0_0_10001(
  MR_Box * check_hlds__purity__wrapper_arg_1,
  MR_Box check_hlds__purity__wrapper_arg_2,
  MR_Box check_hlds__purity__wrapper_arg_3)
{
  {
    MR_Word check_hlds__purity__conv0_HeadVar__1_1;

    {
      check_hlds__purity____Compare____purity_info_0_0(&check_hlds__purity__conv0_HeadVar__1_1, ((MR_Word) check_hlds__purity__wrapper_arg_2), ((MR_Word) check_hlds__purity__wrapper_arg_3));
    }
    *check_hlds__purity__wrapper_arg_1 = ((MR_Box) (check_hlds__purity__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__purity____Unify____run_post_typecheck_0_0_10001(
  MR_Box check_hlds__purity__wrapper_arg_1,
  MR_Box check_hlds__purity__wrapper_arg_2)
{
  {
    MR_bool check_hlds__purity__succeeded;

    {
      check_hlds__purity__succeeded = check_hlds__purity____Unify____run_post_typecheck_0_0(((MR_Word) check_hlds__purity__wrapper_arg_1), ((MR_Word) check_hlds__purity__wrapper_arg_2));
    }
    return check_hlds__purity__succeeded;
  }
}

static void MR_CALL 
check_hlds__purity____Compare____run_post_typecheck_0_0_10001(
  MR_Box * check_hlds__purity__wrapper_arg_1,
  MR_Box check_hlds__purity__wrapper_arg_2,
  MR_Box check_hlds__purity__wrapper_arg_3)
{
  {
    MR_Word check_hlds__purity__conv0_HeadVar__1_1;

    {
      check_hlds__purity____Compare____run_post_typecheck_0_0(&check_hlds__purity__conv0_HeadVar__1_1, ((MR_Word) check_hlds__purity__wrapper_arg_2), ((MR_Word) check_hlds__purity__wrapper_arg_3));
    }
    *check_hlds__purity__wrapper_arg_1 = ((MR_Box) (check_hlds__purity__conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__purity__init(void)
{
}

void mercury__check_hlds__purity__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__purity__check_hlds__purity__type_ctor_info_converted_unify_0);
	MR_register_type_ctor_info(&check_hlds__purity__check_hlds__purity__type_ctor_info_purity_info_0);
	MR_register_type_ctor_info(&check_hlds__purity__check_hlds__purity__type_ctor_info_run_post_typecheck_0);
}

void mercury__check_hlds__purity__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__purity__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module check_hlds.purity. */
