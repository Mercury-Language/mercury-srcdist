/*
** Automatically generated from `post_typecheck.m'
** by the Mercury compiler,
** version rotd-2019-07-16
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


// :- module check_hlds.post_typecheck.
// :- implementation.

/*
INIT mercury__check_hlds__post_typecheck__init
ENDINIT
*/

#include "check_hlds.post_typecheck.mih"


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
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_comparison.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
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
#include "int.mih"
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
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
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
#include "parse_tree.mercury_to_mercury.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0_s {
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__Clauses_10;
  MR_Word * check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__LambdaHeadVar__1_27;
  MR_Cont check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__cont;
  void * check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__cont_env_ptr;
  MR_bool check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__succeeded;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__ConstraintId_17;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__ConstraintGoalId_19;
  MR_Box check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__conv0_ConstraintId_17;
  jmp_buf check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__commit_0;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__Clause_21;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__GoalInfo_23;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__GoalId_24;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__Var_28;
  MR_Integer check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__Var_40;
  MR_Integer check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__Var_41;
  MR_Box check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__conv1_Clause_21;
};

struct check_hlds__post_typecheck__find_constrained_goals_3_f_0_3_env_0_s {
  MR_Box * check_hlds__post_typecheck__find_constrained_goals_3_f_0_3_env_0__wrapper_arg_1;
  MR_Cont check_hlds__post_typecheck__find_constrained_goals_3_f_0_3_env_0__cont;
  void * check_hlds__post_typecheck__find_constrained_goals_3_f_0_3_env_0__cont_env_ptr;
  MR_Word check_hlds__post_typecheck__find_constrained_goals_3_f_0_3_env_0__conv2_LambdaHeadVar__1_27;
};

struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s {
  MR_bool check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__succeeded;
  MR_Word check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ArgModes_24;
  jmp_buf check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__commit_0;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_constraint_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_constraint_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_constraint_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_clause_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_constraint_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__452__1_3_p_0(
  MR_Word LambdaHeadVar__1_23,
  MR_Word LambdaHeadVar__2_24,
  MR_Word * LambdaHeadVar__3_25);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0(
  MR_Word Clauses_10,
  MR_Word ConstraintIds_14,
  MR_Word * LambdaHeadVar__1_27,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word Procs0_11,
  MR_Word * Procs_12,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static MR_Word MR_CALL 
check_hlds__post_typecheck__var_and_type_to_pieces_3_f_0(
  MR_Word VarSet_5,
  MR_Word TVarSet_6,
  MR_Word HeadVar__3_3);

static void MR_CALL 
check_hlds__post_typecheck__gather_constraint_ids_4_p_0(
  MR_Word ReverseConstraintMap_5,
  MR_Word Constraint_6,
  MR_Word STATE_VARIABLE_ConstraintIdSets_0_9,
  MR_Word * STATE_VARIABLE_ConstraintIdSets_10);

static MR_Word MR_CALL 
check_hlds__post_typecheck__constraint_to_error_piece_2_f_0(
  MR_Word TVarset_4,
  MR_Word Constraint_5);

static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word ValidPredIdSet_13,
  MR_Word PredId_14,
  MR_Word STATE_VARIABLE_PredInfo_0_20,
  MR_Word * STATE_VARIABLE_PredInfo_21,
  MR_Integer STATE_VARIABLE_NumBadErrors_0_22,
  MR_Integer * STATE_VARIABLE_NumBadErrors_23,
  MR_Word STATE_VARIABLE_AlwaysSpecs_0_24,
  MR_Word * STATE_VARIABLE_AlwaysSpecs_25,
  MR_Word STATE_VARIABLE_NoTypeErrorSpecs_0_26,
  MR_Word * STATE_VARIABLE_NoTypeErrorSpecs_27);

static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_modes_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_PredInfo_0_14,
  MR_Word * STATE_VARIABLE_PredInfo_15,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredId_2,
  MR_Word HeadVar__3_3,
  MR_Word PrevProcIds_4,
  MR_Word STATE_VARIABLE_PredInfo_0_5,
  MR_Word * STATE_VARIABLE_PredInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_mode_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredId_2,
  MR_Integer ProcId1_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_PredInfo_0_6,
  MR_Word * STATE_VARIABLE_PredInfo_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9);

static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Word ErrorProcIds_10,
  MR_Word STATE_VARIABLE_PredInfo_0_17,
  MR_Word * STATE_VARIABLE_PredInfo_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
check_hlds__post_typecheck__check_type_of_main_3_p_0(
  MR_Word PredInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static MR_Box MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Word PredInfo_10,
  MR_Word VarSet_11,
  MR_Word Errs_12,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static void MR_CALL 
check_hlds__post_typecheck__find_unresolved_types_in_vars_6_p_0(
  MR_Word VarTypes_7,
  MR_Word ExternalTypeParams_8,
  MR_Word STATE_VARIABLE_UnresolvedVarsTypes_0_14,
  MR_Word * STATE_VARIABLE_UnresolvedVarsTypes_15,
  MR_Word STATE_VARIABLE_BindToVoidTVars_0_16,
  MR_Word * STATE_VARIABLE_BindToVoidTVars_17);

static void MR_CALL 
check_hlds__post_typecheck__find_unresolved_types_in_vars_inner_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ExternalTypeParams_2,
  MR_Integer VarsToDo_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_UnresolvedVarsTypes_0_5,
  MR_Word * STATE_VARIABLE_UnresolvedVarsTypes_6,
  MR_Word STATE_VARIABLE_BindToVoidTVars_0_7,
  MR_Word * STATE_VARIABLE_BindToVoidTVars_8);

static MR_Box MR_CALL 
check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word PredInfo_9,
  MR_Word Constraints_10,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static MR_Word MR_CALL 
check_hlds__post_typecheck__constrained_goals_to_error_msgs_2_f_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__post_typecheck__describe_constrained_goal_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Goal_5);

static void MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Word MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0(
  MR_Word PredInfo_4,
  MR_Word Constraints_5);

static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word ArgTypes_3,
  MR_Word STATE_VARIABLE_RevErrorProcIds_0_4,
  MR_Word * STATE_VARIABLE_RevErrorProcIds_5,
  MR_Word STATE_VARIABLE_Procs_0_6,
  MR_Word * STATE_VARIABLE_Procs_7);

static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_finish_preds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);


static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_1[67][2];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_2[5][3];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_3[1][14];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_4[2][7];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_5[3][6];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_6[1][1];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_7[1][10];




static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_1[67][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "void"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "will be implicitly bound to the builtin type"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "My apologies.)"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but I\'m afraid you\'ll have to work it out yourself."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(I ought to tell you which call caused the problem,"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "because the type variables listed above didn\'t get bound."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but I can\'t determine which version should be called,"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to a polymorphic predicate,"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The body of the clause contains a call"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "io.state"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[8])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must have type"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: arguments of main/2"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(Sorry, polymorphic modes are not supported.)"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[6])))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[40])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: unbound inst variable(s)."))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[41])))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[43])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the call to"))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a goal here"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[48]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a higher-order call here"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[50]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ", and"))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[58]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[60]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "warning: unresolved polymorphism."))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The unbound type"))
  },
  /* row 64 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[26])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__post_typecheck_scalar_common_1[64]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 66 */
  {
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_6[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_1[4])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_1[5])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 3 */
  {
    (MR_Box) (((((MR_Unsigned) 53U << 1)) | (MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_5[2])),
    ((MR_Box) (check_hlds__post_typecheck__post_typecheck_do_finish_pred_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_3[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__post_typecheck__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_4[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__post_typecheck__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_constraint_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_constraint_id_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_constraint_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__post_typecheck__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_5[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&check_hlds__post_typecheck__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_constraint_id_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__post_typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__post_typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__post_typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_6[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[32])))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_7[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__post_typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&check_hlds__post_typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_constraint_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_constraint_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0),
    (MR_PseudoTypeInfo) (&check_hlds__post_typecheck__set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_constraint_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_constraint_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__post_typecheck__set_ordlist__ti_set_ordlist_1hlds__hlds_class__type_ctor_info_constraint_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_clause_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_class__type_ctor_info_constraint_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__452__1_3_p_0(
  MR_Word LambdaHeadVar__1_23,
  MR_Word LambdaHeadVar__2_24,
  MR_Word * LambdaHeadVar__3_25)
{
  {
    MR_Word Var_26;

    Var_26 = parse_tree__builtin_lib_types__void_type_0_f_0();
    mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (LambdaHeadVar__1_23)), ((MR_Box) (Var_26)), LambdaHeadVar__2_24, LambdaHeadVar__3_25);
  }
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__ConstraintId_17 = ((MR_Word) ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__conv0_ConstraintId_17));
    check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_5(
  void * env_ptr_arg)
{
  {
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__Clause_21 = ((MR_Word) ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__conv1_Clause_21));
    check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_4(env_ptr);
  }
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_6(
  void * env_ptr_arg)
{
  {
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__LambdaHeadVar__1_27), (MR_Integer) 0))));

      (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__GoalInfo_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__LambdaHeadVar__1_27), (MR_Integer) 1))));
      (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__GoalId_24 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__GoalInfo_23);
      (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__Var_40 = (MR_Integer) ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__GoalId_24);
      (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__Var_41 = (MR_Integer) ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__ConstraintGoalId_19);
      (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__succeeded = ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__Var_40 == (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__Var_41);
      if ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__succeeded)
        check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_3(env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__Var_28 = hlds__hlds_clauses__clause_body_1_f_0((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__Clause_21);
    hlds__goal_util__goal_contains_goal_2_p_0((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__Var_28, (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__LambdaHeadVar__1_27, check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_6, env_ptr);
  }
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_7(
  void * env_ptr_arg)
{
  {
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), &(env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__conv1_Clause_21, (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__Clauses_10, check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_5, env_ptr);
        }
        (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__ConstraintId_17, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Integer Var_20;
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__ConstraintId_17, (MR_Integer) 0)));

      (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__ConstraintGoalId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__ConstraintId_17, (MR_Integer) 1))));
      Var_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__ConstraintId_17, (MR_Integer) 2))));
      check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_7(env_ptr);
      if ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__succeeded)
        ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__cont)((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0(
  MR_Word Clauses_10,
  MR_Word ConstraintIds_14,
  MR_Word * LambdaHeadVar__1_27,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0_s env;

    (env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__Clauses_10 = Clauses_10;
    (env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__LambdaHeadVar__1_27 = LambdaHeadVar__1_27;
    (env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__cont = cont;
    (env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
    mercury__set__member_2_p_1((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), &(env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_env_0__conv0_ConstraintId_17, ConstraintIds_14, check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0_2, &env);
  }
}

static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word Procs0_11,
  MR_Word * Procs_12,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  {
    MR_Word ProcInfo_14;
    MR_Word Context_15;
    MR_Word Pieces_16;
    MR_Word Msg_17;
    MR_Word Spec_18;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_56;
    MR_Box conv0_ProcInfo_14;
    MR_Box conv1_Var_19;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs0_11, ((MR_Box) (ProcId_10)), &conv0_ProcInfo_14);
    ProcInfo_14 = ((MR_Word) (conv0_ProcInfo_14));
    hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_14, &Context_15);
    Var_33 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_8, (MR_Integer) 1, PredId_9);
    Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_33, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[46])));
    Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[38])), Var_32);
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (Pieces_16));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_17, 0) = ((MR_Box) (Context_15));
      MR_hl_field(MR_mktag(0), Msg_17, 1) = ((MR_Box) (Var_51));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Msg_17));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), Spec_18, 2) = ((MR_Box) (Var_56));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_21 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_18));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_20));
    }
    mercury__map__det_remove_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_10)), &conv1_Var_19, Procs0_11, Procs_12);
  }
}

static MR_Word MR_CALL 
check_hlds__post_typecheck__var_and_type_to_pieces_3_f_0(
  MR_Word VarSet_5,
  MR_Word TVarSet_6,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word HeadVar__4_4;
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Type_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Var_9;
    MR_String Var_10;
    MR_Word Var_12;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_String Var_17;

    Var_10 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_5, (MR_Integer) 0, Var_7);
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_9, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_9, 1) = ((MR_Box) (Var_10));
    }
    Var_17 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_6, (MR_Integer) 0, Type_8);
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_16, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_16, 1) = ((MR_Box) (Var_17));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[6])));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[57])));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_15));
    }
    {
      HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__4_4, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), HeadVar__4_4, 1) = ((MR_Box) (Var_12));
    }
    return HeadVar__4_4;
  }
}

static void MR_CALL 
check_hlds__post_typecheck__gather_constraint_ids_4_p_0(
  MR_Word ReverseConstraintMap_5,
  MR_Word Constraint_6,
  MR_Word STATE_VARIABLE_ConstraintIdSets_0_9,
  MR_Word * STATE_VARIABLE_ConstraintIdSets_10)
{
  {
    MR_bool succeeded;
    MR_Word ConstraintIdSet_8;
    MR_Box conv0_ConstraintIdSet_8;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__post_typecheck_scalar_common_1[2]), ReverseConstraintMap_5, ((MR_Box) (Constraint_6)), &conv0_ConstraintIdSet_8);
    if (succeeded)
    {
      ConstraintIdSet_8 = ((MR_Word) (conv0_ConstraintIdSet_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ConstraintIdSets_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConstraintIdSet_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ConstraintIdSets_0_9));
      }
    else
      *STATE_VARIABLE_ConstraintIdSets_10 = STATE_VARIABLE_ConstraintIdSets_0_9;
  }
}

static MR_Word MR_CALL 
check_hlds__post_typecheck__constraint_to_error_piece_2_f_0(
  MR_Word TVarset_4,
  MR_Word Constraint_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;
    MR_String Var_7;

    Var_7 = parse_tree__mercury_to_mercury__mercury_constraint_to_string_2_f_0(TVarset_4, Constraint_5);
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_6, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_6, 1) = ((MR_Box) (Var_7));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__3_3;
  }
}

static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_25;

    check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__452__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_25);
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_25));
  }
}

static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word ValidPredIdSet_13,
  MR_Word PredId_14,
  MR_Word STATE_VARIABLE_PredInfo_0_20,
  MR_Word * STATE_VARIABLE_PredInfo_21,
  MR_Integer STATE_VARIABLE_NumBadErrors_0_22,
  MR_Integer * STATE_VARIABLE_NumBadErrors_23,
  MR_Word STATE_VARIABLE_AlwaysSpecs_0_24,
  MR_Word * STATE_VARIABLE_AlwaysSpecs_25,
  MR_Word STATE_VARIABLE_NoTypeErrorSpecs_0_26,
  MR_Word * STATE_VARIABLE_NoTypeErrorSpecs_27)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ValidPredIdSet_13, ((MR_Box) (PredId_14)));
    if (succeeded)
    {
      MR_Word ErrorProcs_19;
      MR_Word STATE_VARIABLE_PredInfo_28_28;
      MR_Word STATE_VARIABLE_AlwaysSpecs_33_33;
      MR_Word STATE_VARIABLE_PredInfo_34_34;
      MR_Word STATE_VARIABLE_PredInfo_35_35;
      MR_Word STATE_VARIABLE_AlwaysSpecs_36_36;

      succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(STATE_VARIABLE_PredInfo_0_20);
      if (!(succeeded))
        succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(STATE_VARIABLE_PredInfo_0_20);
      if (succeeded)
      {
        check_hlds__post_typecheck__setup_vartypes_in_clauses_for_imported_pred_2_p_0(STATE_VARIABLE_PredInfo_0_20, &STATE_VARIABLE_PredInfo_28_28);
        *STATE_VARIABLE_NoTypeErrorSpecs_27 = STATE_VARIABLE_NoTypeErrorSpecs_0_26;
        STATE_VARIABLE_AlwaysSpecs_33_33 = STATE_VARIABLE_AlwaysSpecs_0_24;
        *STATE_VARIABLE_NumBadErrors_23 = STATE_VARIABLE_NumBadErrors_0_22;
      }
      else
      {
        MR_Word STATE_VARIABLE_NoTypeErrorSpecs_30_30;
        MR_Word UnprovenConstraints0_49;
        MR_Word ClausesInfo0_65;
        MR_Word ExternalTypeParams_66;
        MR_Word VarSet_67;
        MR_Word VarTypesMap0_68;
        MR_Word VarTypesList_69;
        MR_Word BindToVoidTVars0_70;
        MR_Word UnresolvedVarsTypes_71;
        MR_Word BindToVoidTVars_72;

        hlds__hlds_pred__pred_info_get_unproven_body_constraints_2_p_0(STATE_VARIABLE_PredInfo_0_20, &UnprovenConstraints0_49);
        if ((UnprovenConstraints0_49 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *STATE_VARIABLE_NumBadErrors_23 = STATE_VARIABLE_NumBadErrors_0_22;
          STATE_VARIABLE_NoTypeErrorSpecs_30_30 = STATE_VARIABLE_NoTypeErrorSpecs_0_26;
        }
        else
        {
          MR_Word UnprovenConstraints_52;
          MR_Integer NumUmprovenConstraints_53;

          mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), UnprovenConstraints0_49, &UnprovenConstraints_52);
          check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0(ModuleInfo_12, PredId_14, STATE_VARIABLE_PredInfo_0_20, UnprovenConstraints_52, STATE_VARIABLE_NoTypeErrorSpecs_0_26, &STATE_VARIABLE_NoTypeErrorSpecs_30_30);
          mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), UnprovenConstraints_52, &NumUmprovenConstraints_53);
          *STATE_VARIABLE_NumBadErrors_23 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumBadErrors_0_22 + (MR_Unsigned) NumUmprovenConstraints_53);
        }
        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_20, &ClausesInfo0_65);
        hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(STATE_VARIABLE_PredInfo_0_20, &ExternalTypeParams_66);
        hlds__hlds_clauses__clauses_info_get_varset_2_p_0(ClausesInfo0_65, &VarSet_67);
        hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(ClausesInfo0_65, &VarTypesMap0_68);
        hlds__vartypes__vartypes_to_sorted_assoc_list_2_p_0(VarTypesMap0_68, &VarTypesList_69);
        mercury__set__init_1_p_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[4]), &BindToVoidTVars0_70);
        check_hlds__post_typecheck__find_unresolved_types_in_vars_6_p_0(VarTypesList_69, ExternalTypeParams_66, (MR_Word) ((MR_Unsigned) 0U), &UnresolvedVarsTypes_71, BindToVoidTVars0_70, &BindToVoidTVars_72);
        if ((UnresolvedVarsTypes_71 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          STATE_VARIABLE_PredInfo_28_28 = STATE_VARIABLE_PredInfo_0_20;
          *STATE_VARIABLE_NoTypeErrorSpecs_27 = STATE_VARIABLE_NoTypeErrorSpecs_30_30;
        }
        else
        {
          MR_Word ProofMap0_75;
          MR_Word ConstraintMap0_76;
          MR_Word VarTypesMap_77;
          MR_Word ProofMap_78;
          MR_Word ConstraintMap_79;
          MR_Word ClausesInfo_80;
          MR_Word STATE_VARIABLE_PredInfo_33_83;
          MR_Word STATE_VARIABLE_PredInfo_34_84;
          MR_Word VoidSubst_101;
          MR_Word Var_106;
          MR_Box conv1_VoidSubst_101;

          check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0(ModuleInfo_12, PredId_14, STATE_VARIABLE_PredInfo_0_20, VarSet_67, UnresolvedVarsTypes_71, STATE_VARIABLE_NoTypeErrorSpecs_30_30, STATE_VARIABLE_NoTypeErrorSpecs_27);
          hlds__hlds_pred__pred_info_get_constraint_proof_map_2_p_0(STATE_VARIABLE_PredInfo_0_20, &ProofMap0_75);
          hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(STATE_VARIABLE_PredInfo_0_20, &ConstraintMap0_76);
          Var_106 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
          mercury__set__fold_4_p_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[4]), (MR_Word) (&check_hlds__post_typecheck_scalar_common_2[0]), (MR_Word) (&check_hlds__post_typecheck_scalar_common_2[4]), BindToVoidTVars_72, ((MR_Box) (Var_106)), &conv1_VoidSubst_101);
          VoidSubst_101 = ((MR_Word) (conv1_VoidSubst_101));
          hlds__vartypes__apply_subst_to_vartypes_3_p_0(VoidSubst_101, VarTypesMap0_68, &VarTypesMap_77);
          check_hlds__type_util__apply_subst_to_constraint_proof_map_3_p_0(VoidSubst_101, ProofMap0_75, &ProofMap_78);
          check_hlds__type_util__apply_subst_to_constraint_map_3_p_0(VoidSubst_101, ConstraintMap0_76, &ConstraintMap_79);
          hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(VarTypesMap_77, ClausesInfo0_65, &ClausesInfo_80);
          hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_80, STATE_VARIABLE_PredInfo_0_20, &STATE_VARIABLE_PredInfo_33_83);
          hlds__hlds_pred__pred_info_set_constraint_proof_map_3_p_0(ProofMap_78, STATE_VARIABLE_PredInfo_33_83, &STATE_VARIABLE_PredInfo_34_84);
          hlds__hlds_pred__pred_info_set_constraint_map_3_p_0(ConstraintMap_79, STATE_VARIABLE_PredInfo_34_84, &STATE_VARIABLE_PredInfo_28_28);
        }
        check_hlds__post_typecheck__check_type_of_main_3_p_0(STATE_VARIABLE_PredInfo_28_28, STATE_VARIABLE_AlwaysSpecs_0_24, &STATE_VARIABLE_AlwaysSpecs_33_33);
      }
      check_hlds__post_typecheck__propagate_types_into_modes_4_p_0(ModuleInfo_12, &ErrorProcs_19, STATE_VARIABLE_PredInfo_28_28, &STATE_VARIABLE_PredInfo_34_34);
      check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0(ModuleInfo_12, PredId_14, ErrorProcs_19, STATE_VARIABLE_PredInfo_34_34, &STATE_VARIABLE_PredInfo_35_35, STATE_VARIABLE_AlwaysSpecs_33_33, &STATE_VARIABLE_AlwaysSpecs_36_36);
      check_hlds__post_typecheck__check_for_indistinguishable_modes_6_p_0(ModuleInfo_12, PredId_14, STATE_VARIABLE_PredInfo_35_35, STATE_VARIABLE_PredInfo_21, STATE_VARIABLE_AlwaysSpecs_36_36, STATE_VARIABLE_AlwaysSpecs_25);
    }
    else
    {
      *STATE_VARIABLE_NoTypeErrorSpecs_27 = STATE_VARIABLE_NoTypeErrorSpecs_0_26;
      *STATE_VARIABLE_AlwaysSpecs_25 = STATE_VARIABLE_AlwaysSpecs_0_24;
      *STATE_VARIABLE_NumBadErrors_23 = STATE_VARIABLE_NumBadErrors_0_22;
      *STATE_VARIABLE_PredInfo_21 = STATE_VARIABLE_PredInfo_0_20;
    }
  }
}

static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_modes_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_PredInfo_0_14,
  MR_Word * STATE_VARIABLE_PredInfo_15,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  {
    MR_bool succeeded;
    MR_Word Origin_11;
    MR_Word Var_18;

    hlds__hlds_pred__pred_info_get_origin_2_p_0(STATE_VARIABLE_PredInfo_0_14, &Origin_11);
    succeeded = ((MR_tag((MR_Word) Origin_11)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Origin_11, (MR_Integer) 0))) & (MR_Integer) 3);
      succeeded = (Var_18 == (MR_Integer) 0);
    }
    if (succeeded)
    {
      *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_0_16;
      *STATE_VARIABLE_PredInfo_15 = STATE_VARIABLE_PredInfo_0_14;
    }
    else
    {
      MR_Word ProcIds_13;

      ProcIds_13 = hlds__hlds_pred__pred_info_procids_1_f_0(STATE_VARIABLE_PredInfo_0_14);
      check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_p_0(ModuleInfo_7, PredId_8, ProcIds_13, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_PredInfo_0_14, STATE_VARIABLE_PredInfo_15, STATE_VARIABLE_Specs_0_16, STATE_VARIABLE_Specs_17);
    }
  }
}

static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredId_2,
  MR_Word HeadVar__3_3,
  MR_Word PrevProcIds_4,
  MR_Word STATE_VARIABLE_PredInfo_0_5,
  MR_Word * STATE_VARIABLE_PredInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_PredInfo_6 = STATE_VARIABLE_PredInfo_0_5;
    }
    else
    {
      MR_Integer ProcId_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ProcIds_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Removed_25;
      MR_Word PrevProcIds1_26;
      MR_Word STATE_VARIABLE_PredInfo_31_31;
      MR_Word STATE_VARIABLE_Specs_32_32;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_PrevProcIds_4;
      MR_Word next_value_of_STATE_VARIABLE_PredInfo_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      check_hlds__post_typecheck__check_for_indistinguishable_mode_9_p_0(ModuleInfo_1, PredId_2, ProcId_20, PrevProcIds_4, &Removed_25, STATE_VARIABLE_PredInfo_0_5, &STATE_VARIABLE_PredInfo_31_31, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_32_32);
      switch (Removed_25) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            PrevProcIds1_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), PrevProcIds1_26, 0) = ((MR_Box) (ProcId_20));
            MR_hl_field(MR_mktag(1), PrevProcIds1_26, 1) = ((MR_Box) (PrevProcIds_4));
          }
          break;
        case (MR_Integer) 1:
          PrevProcIds1_26 = PrevProcIds_4;
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ProcIds_21;
      next_value_of_PrevProcIds_4 = PrevProcIds1_26;
      next_value_of_STATE_VARIABLE_PredInfo_0_5 = STATE_VARIABLE_PredInfo_31_31;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_32_32;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      PrevProcIds_4 = next_value_of_PrevProcIds_4;
      STATE_VARIABLE_PredInfo_0_5 = next_value_of_STATE_VARIABLE_PredInfo_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_mode_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredId_2,
  MR_Integer ProcId1_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_PredInfo_0_6,
  MR_Word * STATE_VARIABLE_PredInfo_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Integer) 0;
      *STATE_VARIABLE_Specs_9 = STATE_VARIABLE_Specs_0_8;
      *STATE_VARIABLE_PredInfo_7 = STATE_VARIABLE_PredInfo_0_6;
    }
    else
    {
      MR_Integer ProcId_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ProcIds_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));

      succeeded = check_hlds__mode_comparison__modes_are_indistinguishable_4_p_0(ProcId_22, ProcId1_3, STATE_VARIABLE_PredInfo_0_6, ModuleInfo_1);
      if (succeeded)
      {
        MR_Word Status_27;
        MR_Word Globals_28;

        hlds__hlds_pred__pred_info_get_status_2_p_0(STATE_VARIABLE_PredInfo_0_6, &Status_27);
        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_1, &Globals_28);
        {
          MR_Word Var_41;

          Var_41 = hlds__status__pred_status_defined_in_this_module_1_f_0(Status_27);
          succeeded = (Var_41 == (MR_Integer) 1);
        }
        if (!(succeeded))
        {
          {
            MR_Word Var_39;
            MR_Word Var_40;

            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_28, (MR_Integer) 348, (MR_Integer) 0);
            if (succeeded)
            {
              Var_39 = (MR_Integer) 353;
              Var_40 = (MR_Integer) 0;
              succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_28, Var_39, Var_40);
            }
          }
          if (!(succeeded))
          {
            MR_Word OpMode_29;
            MR_Word Var_35;
            MR_Word Var_36;

            libs__globals__get_op_mode_2_p_0(Globals_28, &OpMode_29);
            succeeded = ((MR_tag((MR_Word) OpMode_29)) == (MR_Integer) 3);
            if (succeeded)
            {
              Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_29, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Var_35)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_35, (MR_Integer) 0))));
                succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word Spec_30;

          Spec_30 = check_hlds__mode_errors__report_indistinguishable_modes_error_5_f_0(ModuleInfo_1, ProcId1_3, ProcId_22, PredId_2, STATE_VARIABLE_PredInfo_0_6);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_9 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_30));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_8));
          }
        }
        else
          *STATE_VARIABLE_Specs_9 = STATE_VARIABLE_Specs_0_8;
        hlds__hlds_pred__pred_info_remove_procid_3_p_0(ProcId1_3, STATE_VARIABLE_PredInfo_0_6, STATE_VARIABLE_PredInfo_7);
        *HeadVar__5_5 = (MR_Integer) 1;
      }
      else
      {
        MR_Word next_value_of_HeadVar__4_4 = ProcIds_23;

        // direct tailcall eliminated
        ;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Procs_12;
    MR_Word conv0_STATE_VARIABLE_Specs_21;

    check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Procs_12, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_21);
    *wrapper_arg_3 = ((MR_Box) (conv1_Procs_12));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_21));
  }
}

static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Word ErrorProcIds_10,
  MR_Word STATE_VARIABLE_PredInfo_0_17,
  MR_Word * STATE_VARIABLE_PredInfo_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  if ((ErrorProcIds_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_PredInfo_18 = STATE_VARIABLE_PredInfo_0_17;
    *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
  }
  else
  {
    MR_Word ProcTable0_15;
    MR_Word ProcTable_16;
    MR_Word Var_21;
    MR_Box conv3_ProcTable_16;
    MR_Box conv2_STATE_VARIABLE_Specs_20;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_0_17, &ProcTable0_15);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ModuleInfo_8));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (PredId_9));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&check_hlds__post_typecheck_scalar_common_2[2]), (MR_Word) (&check_hlds__post_typecheck_scalar_common_1[0]), Var_21, ErrorProcIds_10, ((MR_Box) (ProcTable0_15)), &conv3_ProcTable_16, ((MR_Box) (STATE_VARIABLE_Specs_0_19)), &conv2_STATE_VARIABLE_Specs_20);
    ProcTable_16 = ((MR_Word) (conv3_ProcTable_16));
    *STATE_VARIABLE_Specs_20 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_20));
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_16, STATE_VARIABLE_PredInfo_0_17, STATE_VARIABLE_PredInfo_18);
  }
}

static void MR_CALL 
check_hlds__post_typecheck__check_type_of_main_3_p_0(
  MR_Word PredInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  {
    MR_bool succeeded;
    MR_String Var_15;
    MR_Integer Var_16;

    Var_15 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_4);
    succeeded = (strcmp(Var_15, (MR_String) "main") == 0);
    if (succeeded)
    {
      Var_16 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_4);
      succeeded = (Var_16 == (MR_Integer) 2);
      if (succeeded)
        succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(PredInfo_4);
    }
    if (succeeded)
    {
      MR_Word ArgTypes_6;
      MR_Word Arg1_7;
      MR_Word Arg2_8;
      MR_Word Var_17;
      MR_Word Var_18;

      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_4, &ArgTypes_6);
      succeeded = (ArgTypes_6 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Arg1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_6, (MR_Integer) 0))));
        Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_6, (MR_Integer) 1))));
        succeeded = (Var_17 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Arg2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 0))));
          Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 1))));
          succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(Arg1_7);
            if (succeeded)
              succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(Arg2_8);
          }
        }
      }
      if (succeeded)
        *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
      else
      {
        MR_Word Context_9;
        MR_Word Msg_11;
        MR_Word Spec_12;
        MR_Word Var_38;

        hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_4, &Context_9);
        {
          Msg_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_11, 0) = ((MR_Box) (Context_9));
          MR_hl_field(MR_mktag(0), Msg_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[66])));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Msg_11));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_38));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_12));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
        }
      }
    }
    else
      *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
  }
}

static MR_Box MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    conv0_HeadVar__4_4 = check_hlds__post_typecheck__var_and_type_to_pieces_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Word PredInfo_10,
  MR_Word VarSet_11,
  MR_Word Errs_12,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  {
    MR_Word TypeVarSet_14;
    MR_Word Context_15;
    MR_Word PredIdPieces_16;
    MR_Word VarTypePieceLists_17;
    MR_Word VarTypePieces_18;
    MR_Word MainPieces_19;
    MR_Word Msg_21;
    MR_Word Spec_23;
    MR_Word Var_27;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_37;
    MR_Word Var_39;
    MR_Word Var_42;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_String Var_46;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_57;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_String Var_62;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_114;
    MR_Box conv1_Var_46;
    MR_Box conv2_Var_62;

    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_10, &TypeVarSet_14);
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_10, &Context_15);
    PredIdPieces_16 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_8, (MR_Integer) 1, PredId_9);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (VarSet_11));
      MR_hl_field(MR_mktag(0), Var_27, 4) = ((MR_Box) (TypeVarSet_14));
    }
    VarTypePieceLists_17 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_2[1]), (MR_Word) (&check_hlds__post_typecheck_scalar_common_1[1]), Var_27, Errs_12);
    mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), VarTypePieceLists_17, &VarTypePieces_18);
    conv1_Var_46 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_2[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Errs_12, ((MR_Box) ((MR_String) "The variable with an unbound type was:")), ((MR_Box) ((MR_String) "The variables with unbound types were:")));
    Var_46 = ((MR_String) (conv1_Var_46));
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[59])));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[62])));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_42));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[57])));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
    }
    conv2_Var_62 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_2[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Errs_12, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
    Var_62 = ((MR_String) (conv2_Var_62));
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (Var_62));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[12])));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[63])));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[60])));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
    }
    Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), VarTypePieces_18, Var_54);
    Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_34, Var_53);
    Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredIdPieces_16, Var_33);
    MainPieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[56])), Var_32);
    {
      Var_103 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (MainPieces_19));
    }
    {
      Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Var_103));
      MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[65])));
    }
    {
      Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_99, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 53) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Var_102));
    }
    {
      Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Var_99));
      MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_21, 0) = ((MR_Box) (Context_15));
      MR_hl_field(MR_mktag(0), Msg_21, 1) = ((MR_Box) (Var_98));
    }
    {
      Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (Msg_21));
      MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_2[3])));
      MR_hl_field(MR_mktag(0), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), Spec_23, 2) = ((MR_Box) (Var_114));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_25 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_23));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
    }
  }
}

static void MR_CALL 
check_hlds__post_typecheck__find_unresolved_types_in_vars_6_p_0(
  MR_Word VarTypes_7,
  MR_Word ExternalTypeParams_8,
  MR_Word STATE_VARIABLE_UnresolvedVarsTypes_0_14,
  MR_Word * STATE_VARIABLE_UnresolvedVarsTypes_15,
  MR_Word STATE_VARIABLE_BindToVoidTVars_0_16,
  MR_Word * STATE_VARIABLE_BindToVoidTVars_17)
{
  while (MR_TRUE)
  {
    MR_Word LeftOverVarTypes_11;
    MR_Word STATE_VARIABLE_UnresolvedVarsTypes_19_19;
    MR_Word STATE_VARIABLE_BindToVoidTVars_20_20;

    // setup for model_det tailcalls optimized into a loop
    ;
    check_hlds__post_typecheck__find_unresolved_types_in_vars_inner_8_p_0(VarTypes_7, ExternalTypeParams_8, (MR_Integer) 1000, &LeftOverVarTypes_11, STATE_VARIABLE_UnresolvedVarsTypes_0_14, &STATE_VARIABLE_UnresolvedVarsTypes_19_19, STATE_VARIABLE_BindToVoidTVars_0_16, &STATE_VARIABLE_BindToVoidTVars_20_20);
    if ((LeftOverVarTypes_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_UnresolvedVarsTypes_15 = STATE_VARIABLE_UnresolvedVarsTypes_19_19;
      *STATE_VARIABLE_BindToVoidTVars_17 = STATE_VARIABLE_BindToVoidTVars_20_20;
    }
    else
    {
      MR_Word next_value_of_VarTypes_7 = LeftOverVarTypes_11;
      MR_Word next_value_of_STATE_VARIABLE_UnresolvedVarsTypes_0_14 = STATE_VARIABLE_UnresolvedVarsTypes_19_19;
      MR_Word next_value_of_STATE_VARIABLE_BindToVoidTVars_0_16 = STATE_VARIABLE_BindToVoidTVars_20_20;

      // direct tailcall eliminated
      ;
      VarTypes_7 = next_value_of_VarTypes_7;
      STATE_VARIABLE_UnresolvedVarsTypes_0_14 = next_value_of_STATE_VARIABLE_UnresolvedVarsTypes_0_14;
      STATE_VARIABLE_BindToVoidTVars_0_16 = next_value_of_STATE_VARIABLE_BindToVoidTVars_0_16;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__post_typecheck__find_unresolved_types_in_vars_inner_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ExternalTypeParams_2,
  MR_Integer VarsToDo_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_UnresolvedVarsTypes_0_5,
  MR_Word * STATE_VARIABLE_UnresolvedVarsTypes_6,
  MR_Word STATE_VARIABLE_BindToVoidTVars_0_7,
  MR_Word * STATE_VARIABLE_BindToVoidTVars_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_BindToVoidTVars_8 = STATE_VARIABLE_BindToVoidTVars_0_7;
      *STATE_VARIABLE_UnresolvedVarsTypes_6 = STATE_VARIABLE_UnresolvedVarsTypes_0_5;
    }
    else
    {
      MR_Word Type_18;
      MR_Word VarTypes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      Type_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 1))));
      succeeded = (VarsToDo_3 < (MR_Integer) 0);
      if (succeeded)
      {
        *HeadVar__4_4 = HeadVar__1_1;
        *STATE_VARIABLE_BindToVoidTVars_8 = STATE_VARIABLE_BindToVoidTVars_0_7;
        *STATE_VARIABLE_UnresolvedVarsTypes_6 = STATE_VARIABLE_UnresolvedVarsTypes_0_5;
      }
      else
      {
        MR_Word TVars_25;
        MR_Word TVarsSet0_26;
        MR_Word TVarsSet1_27;
        MR_Word STATE_VARIABLE_UnresolvedVarsTypes_35_35;
        MR_Word STATE_VARIABLE_BindToVoidTVars_37_37;
        MR_Integer Var_38;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Integer next_value_of_VarsToDo_3;
        MR_Word next_value_of_STATE_VARIABLE_UnresolvedVarsTypes_0_5;
        MR_Word next_value_of_STATE_VARIABLE_BindToVoidTVars_0_7;

        parse_tree__prog_type__type_vars_2_p_0(Type_18, &TVars_25);
        mercury__set__list_to_set_2_p_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[4]), TVars_25, &TVarsSet0_26);
        mercury__set__delete_list_3_p_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[4]), ExternalTypeParams_2, TVarsSet0_26, &TVarsSet1_27);
        succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[4]), TVarsSet1_27);
        if (succeeded)
        {
          STATE_VARIABLE_BindToVoidTVars_37_37 = STATE_VARIABLE_BindToVoidTVars_0_7;
          STATE_VARIABLE_UnresolvedVarsTypes_35_35 = STATE_VARIABLE_UnresolvedVarsTypes_0_5;
        }
        else
        {
          {
            STATE_VARIABLE_UnresolvedVarsTypes_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_UnresolvedVarsTypes_35_35, 0) = ((MR_Box) (Var_32));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_UnresolvedVarsTypes_35_35, 1) = ((MR_Box) (STATE_VARIABLE_UnresolvedVarsTypes_0_5));
          }
          mercury__set__union_3_p_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[4]), TVarsSet1_27, STATE_VARIABLE_BindToVoidTVars_0_7, &STATE_VARIABLE_BindToVoidTVars_37_37);
        }
        Var_38 = (MR_Integer) ((MR_Unsigned) VarsToDo_3 - (MR_Unsigned) (MR_Integer) 1);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = VarTypes_19;
        next_value_of_VarsToDo_3 = Var_38;
        next_value_of_STATE_VARIABLE_UnresolvedVarsTypes_0_5 = STATE_VARIABLE_UnresolvedVarsTypes_35_35;
        next_value_of_STATE_VARIABLE_BindToVoidTVars_0_7 = STATE_VARIABLE_BindToVoidTVars_37_37;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        VarsToDo_3 = next_value_of_VarsToDo_3;
        STATE_VARIABLE_UnresolvedVarsTypes_0_5 = next_value_of_STATE_VARIABLE_UnresolvedVarsTypes_0_5;
        STATE_VARIABLE_BindToVoidTVars_0_7 = next_value_of_STATE_VARIABLE_BindToVoidTVars_0_7;
        continue;
      }
    }
    break;
  }
}

static MR_Box MR_CALL 
check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    conv1_HeadVar__3_3 = check_hlds__post_typecheck__constraint_to_error_piece_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word PredInfo_9,
  MR_Word Constraints_10,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  {
    MR_Word TVarSet_12;
    MR_Word Context_13;
    MR_Word PredIdPieces_14;
    MR_Word Pieces_15;
    MR_Word Msg_16;
    MR_Word ConstrainedGoals_17;
    MR_Word ContextMsgs_18;
    MR_Word Spec_24;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_37;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_String Var_41;
    MR_String Var_43;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_75;
    MR_Box conv0_Var_43;

    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_9, &TVarSet_12);
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_9, &Context_13);
    PredIdPieces_14 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_7, (MR_Integer) 1, PredId_8);
    conv0_Var_43 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Constraints_10, ((MR_Box) ((MR_String) "constraint:")), ((MR_Box) ((MR_String) "constraints:")));
    Var_43 = ((MR_String) (conv0_Var_43));
    Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "type error: unsatisfied typeclass ", Var_43);
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_40, 0) = ((MR_Box) (Var_41));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[59])));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[57])));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (TVarSet_12));
    }
    Var_52 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__post_typecheck_scalar_common_1[1]), Var_53, Constraints_10);
    Var_51 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(Var_52, (MR_Word) ((MR_Unsigned) 0U));
    Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_51, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[61])));
    Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_34, Var_50);
    Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredIdPieces_14, Var_33);
    Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[56])), Var_32);
    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (Pieces_15));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_16, 0) = ((MR_Box) (Context_13));
      MR_hl_field(MR_mktag(0), Msg_16, 1) = ((MR_Box) (Var_59));
    }
    ConstrainedGoals_17 = check_hlds__post_typecheck__find_constrained_goals_2_f_0(PredInfo_9, Constraints_10);
    if ((ConstrainedGoals_17 == (MR_Word) ((MR_Unsigned) 0U)))
      ContextMsgs_18 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String DueTo_21;
      MR_Word ContextMsgsPrefix_22;
      MR_Word ContextMsgsList_23;
      MR_Word Var_64;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Box conv2_DueTo_21;

      conv2_DueTo_21 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Constraints_10, ((MR_Box) ((MR_String) "The constraint is due to:")), ((MR_Box) ((MR_String) "The constraints are due to:")));
      DueTo_21 = ((MR_String) (conv2_DueTo_21));
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Context_13));
      }
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (DueTo_21));
      }
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_68 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (Var_69));
      }
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        ContextMsgsPrefix_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ContextMsgsPrefix_22, 0) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(1), ContextMsgsPrefix_22, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(1), ContextMsgsPrefix_22, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), ContextMsgsPrefix_22, 3) = ((MR_Box) (Var_67));
      }
      ContextMsgsList_23 = check_hlds__post_typecheck__constrained_goals_to_error_msgs_2_f_0(ModuleInfo_7, ConstrainedGoals_17);
      {
        ContextMsgs_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ContextMsgs_18, 0) = ((MR_Box) (ContextMsgsPrefix_22));
        MR_hl_field(MR_mktag(1), ContextMsgs_18, 1) = ((MR_Box) (ContextMsgsList_23));
      }
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Msg_16));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (ContextMsgs_18));
    }
    {
      Spec_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), Spec_24, 2) = ((MR_Box) (Var_75));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_26 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_24));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_25));
    }
  }
}

static MR_Word MR_CALL 
check_hlds__post_typecheck__constrained_goals_to_error_msgs_2_f_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Goal_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Msg_8;
      MR_Word Msgs_9;
      MR_Word Words_13;
      MR_Word Suffix_14;
      MR_Word GoalInfo_17;
      MR_Word Context_18;
      MR_Word Var_24;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_30;

      if ((Goals_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Words_13 = check_hlds__post_typecheck__describe_constrained_goal_2_f_0(ModuleInfo_1, Goal_6);
        Suffix_14 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[52]));
      }
      else
      {
        MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_7, (MR_Integer) 1))));

        if ((Var_34 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          Words_13 = check_hlds__post_typecheck__describe_constrained_goal_2_f_0(ModuleInfo_1, Goal_6);
          Suffix_14 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[53]));
        }
        else
        {
          Words_13 = check_hlds__post_typecheck__describe_constrained_goal_2_f_0(ModuleInfo_1, Goal_6);
          Suffix_14 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[54]));
        }
      }
      GoalInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 1))));
      Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_17);
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Context_18));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Suffix_14));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Words_13, Var_30);
      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (Var_29));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Msg_8, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(1), Msg_8, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(1), Msg_8, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(1), Msg_8, 3) = ((MR_Box) (Var_27));
      }
      Msgs_9 = check_hlds__post_typecheck__constrained_goals_to_error_msgs_2_f_0(ModuleInfo_1, Goals_7);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Msg_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Msgs_9));
      }
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
check_hlds__post_typecheck__describe_constrained_goal_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Goal_5)
{
  {
    MR_Word Pieces_6;
    MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) GoalExpr_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[49]));
        break;
      case (MR_Integer) 1:
        Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[49]));
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 0))));
          MR_Word CallPieces_108;

          CallPieces_108 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_4, (MR_Integer) 0, PredId_9);
          {
            Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[47])));
            MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (CallPieces_108));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) Var_127)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[51]));
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word SimpleCallId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_127, (MR_Integer) 3))));
                    MR_Word Var_78;
                    MR_Word CallPieces_93;

                    {
                      Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) ((MR_Unsigned) 15U));
                      MR_hl_field(MR_mktag(3), Var_78, 1) = ((MR_Box) (SimpleCallId_24));
                    }
                    {
                      CallPieces_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), CallPieces_93, 0) = ((MR_Box) (Var_78));
                      MR_hl_field(MR_mktag(1), CallPieces_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[47])));
                      MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (CallPieces_93));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[49]));
                  break;
                case (MR_Integer) 3:
                  Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[49]));
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word CallPieces_15;
              MR_Word PredId_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));

              CallPieces_15 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_4, (MR_Integer) 0, PredId_83);
              {
                Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[47])));
                MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (CallPieces_15));
              }
            }
            break;
          case (MR_Integer) 2:
            Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[49]));
            break;
          case (MR_Integer) 3:
            Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[49]));
            break;
          case (MR_Integer) 4:
            Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[49]));
            break;
          case (MR_Integer) 5:
            Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[49]));
            break;
          case (MR_Integer) 6:
            Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[49]));
            break;
          case (MR_Integer) 7:
            Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[49]));
            break;
        }
        break;
    }
    return Pieces_6;
  }
}

static void MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__post_typecheck__find_constrained_goals_3_f_0_3_env_0_s * env_ptr = (struct check_hlds__post_typecheck__find_constrained_goals_3_f_0_3_env_0_s *) (env_ptr_arg);

    *((env_ptr)->check_hlds__post_typecheck__find_constrained_goals_3_f_0_3_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->check_hlds__post_typecheck__find_constrained_goals_3_f_0_3_env_0__conv2_LambdaHeadVar__1_27));
    ((env_ptr)->check_hlds__post_typecheck__find_constrained_goals_3_f_0_3_env_0__cont)((env_ptr)->check_hlds__post_typecheck__find_constrained_goals_3_f_0_3_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct check_hlds__post_typecheck__find_constrained_goals_3_f_0_3_env_0_s env;

    (env).check_hlds__post_typecheck__find_constrained_goals_3_f_0_3_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).check_hlds__post_typecheck__find_constrained_goals_3_f_0_3_env_0__cont = cont;
    (env).check_hlds__post_typecheck__find_constrained_goals_3_f_0_3_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__264__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &(env).check_hlds__post_typecheck__find_constrained_goals_3_f_0_3_env_0__conv2_LambdaHeadVar__1_27, check_hlds__post_typecheck__find_constrained_goals_2_f_0_2, &env);
    }
  }
}

static void MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ConstraintIdSets_10;

    check_hlds__post_typecheck__gather_constraint_ids_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ConstraintIdSets_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ConstraintIdSets_10));
  }
}

static MR_Word MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0(
  MR_Word PredInfo_4,
  MR_Word Constraints_5)
{
  {
    MR_Word Goals_6;
    MR_Word ClausesInfo_7;
    MR_Word ClausesRep_8;
    MR_Word Clauses_10;
    MR_Word ConstraintMap_11;
    MR_Word ReverseConstraintMap_12;
    MR_Word ConstraintIdSets_13;
    MR_Word ConstraintIds_14;
    MR_Word FindGoals_15;
    MR_Word Var_25;
    MR_Word _ItemNumbers_9;
    MR_Box conv1_ConstraintIdSets_13;

    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_4, &ClausesInfo_7);
    hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_7, &ClausesRep_8, &_ItemNumbers_9);
    hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(ClausesRep_8, &Clauses_10);
    hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(PredInfo_4, &ConstraintMap_11);
    ReverseConstraintMap_12 = mercury__map__reverse_map_1_f_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ConstraintMap_11);
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (check_hlds__post_typecheck__find_constrained_goals_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (ReverseConstraintMap_12));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__post_typecheck_scalar_common_1[3]), Var_25, Constraints_5, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_ConstraintIdSets_13);
    ConstraintIdSets_13 = ((MR_Word) (conv1_ConstraintIdSets_13));
    ConstraintIds_14 = mercury__set__union_list_1_f_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), ConstraintIdSets_13);
    {
      FindGoals_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FindGoals_15, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), FindGoals_15, 1) = ((MR_Box) (check_hlds__post_typecheck__find_constrained_goals_2_f_0_3));
      MR_hl_field(MR_mktag(0), FindGoals_15, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), FindGoals_15, 3) = ((MR_Box) (Clauses_10));
      MR_hl_field(MR_mktag(0), FindGoals_15, 4) = ((MR_Box) (ConstraintIds_14));
    }
    mercury__solutions__solutions_2_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), FindGoals_15, &Goals_6);
    return Goals_6;
  }
}

void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_modes_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word * ErrorProcIds_6,
  MR_Word STATE_VARIABLE_PredInfo_0_13,
  MR_Word * STATE_VARIABLE_PredInfo_14)
{
  {
    MR_Word ArgTypes_8;
    MR_Word Procs0_9;
    MR_Word ProcIds_10;
    MR_Word RevErrorProcIds_11;
    MR_Word Procs_12;

    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(STATE_VARIABLE_PredInfo_0_13, &ArgTypes_8);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_0_13, &Procs0_9);
    ProcIds_10 = hlds__hlds_pred__pred_info_procids_1_f_0(STATE_VARIABLE_PredInfo_0_13);
    check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0(ModuleInfo_5, ProcIds_10, ArgTypes_8, (MR_Word) ((MR_Unsigned) 0U), &RevErrorProcIds_11, Procs0_9, &Procs_12);
    *ErrorProcIds_6 = mercury__list__reverse_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), RevErrorProcIds_11);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(Procs_12, STATE_VARIABLE_PredInfo_0_13, STATE_VARIABLE_PredInfo_14);
  }
}

static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word _InstVar_25;

          check_hlds__inst_match__mode_list_contains_inst_var_2_p_0((env_ptr)->check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ArgModes_24, &_InstVar_25, check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_1, env_ptr);
        }
        (env_ptr)->check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word ArgTypes_3,
  MR_Word STATE_VARIABLE_RevErrorProcIds_0_4,
  MR_Word * STATE_VARIABLE_RevErrorProcIds_5,
  MR_Word STATE_VARIABLE_Procs_0_6,
  MR_Word * STATE_VARIABLE_Procs_7)
{
  {
    struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s env;

    while (MR_TRUE)
    {
      // setup for model_det tailcalls optimized into a loop
      ;
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_Procs_7 = STATE_VARIABLE_Procs_0_6;
        *STATE_VARIABLE_RevErrorProcIds_5 = STATE_VARIABLE_RevErrorProcIds_0_4;
      }
      else
      {
        MR_Integer ProcId_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word ProcIds_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word ProcInfo0_22;
        MR_Word ArgModes0_23;
        MR_Word STATE_VARIABLE_RevErrorProcIds_31_31;
        MR_Word STATE_VARIABLE_Procs_32_32;
        MR_Box conv0_ProcInfo0_22;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_RevErrorProcIds_0_4;
        MR_Word next_value_of_STATE_VARIABLE_Procs_0_6;

        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_Procs_0_6, ((MR_Box) (ProcId_17)), &conv0_ProcInfo0_22);
        ProcInfo0_22 = ((MR_Word) (conv0_ProcInfo0_22));
        hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo0_22, &ArgModes0_23);
        check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(ModuleInfo_1, ArgTypes_3, ArgModes0_23, &(env).check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ArgModes_24);
        check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_2(&env);
        if ((env).check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__succeeded)
        {
          {
            STATE_VARIABLE_RevErrorProcIds_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevErrorProcIds_31_31, 0) = ((MR_Box) (ProcId_17));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevErrorProcIds_31_31, 1) = ((MR_Box) (STATE_VARIABLE_RevErrorProcIds_0_4));
          }
          STATE_VARIABLE_Procs_32_32 = STATE_VARIABLE_Procs_0_6;
        }
        else
        {
          MR_Word ProcInfo_26;

          hlds__hlds_pred__proc_info_set_argmodes_3_p_0((env).check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ArgModes_24, ProcInfo0_22, &ProcInfo_26);
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_17)), ((MR_Box) (ProcInfo_26)), STATE_VARIABLE_Procs_0_6, &STATE_VARIABLE_Procs_32_32);
          STATE_VARIABLE_RevErrorProcIds_31_31 = STATE_VARIABLE_RevErrorProcIds_0_4;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = ProcIds_18;
        next_value_of_STATE_VARIABLE_RevErrorProcIds_0_4 = STATE_VARIABLE_RevErrorProcIds_31_31;
        next_value_of_STATE_VARIABLE_Procs_0_6 = STATE_VARIABLE_Procs_32_32;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_RevErrorProcIds_0_4 = next_value_of_STATE_VARIABLE_RevErrorProcIds_0_4;
        STATE_VARIABLE_Procs_0_6 = next_value_of_STATE_VARIABLE_Procs_0_6;
        continue;
      }
      break;
    }
  }
}

void MR_CALL 
check_hlds__post_typecheck__setup_vartypes_in_clauses_for_imported_pred_2_p_0(
  MR_Word STATE_VARIABLE_PredInfo_0_9,
  MR_Word * STATE_VARIABLE_PredInfo_10)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(STATE_VARIABLE_PredInfo_0_9);
    if (succeeded)
      *STATE_VARIABLE_PredInfo_10 = STATE_VARIABLE_PredInfo_0_9;
    else
    {
      MR_Word ClausesInfo0_4;
      MR_Word HeadVars_5;
      MR_Word ArgTypes_6;
      MR_Word VarTypes_7;
      MR_Word ClausesInfo_8;

      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_9, &ClausesInfo0_4);
      hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(ClausesInfo0_4, &HeadVars_5);
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(STATE_VARIABLE_PredInfo_0_9, &ArgTypes_6);
      hlds__vartypes__vartypes_from_corresponding_lists_3_p_0(HeadVars_5, ArgTypes_6, &VarTypes_7);
      hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(VarTypes_7, ClausesInfo0_4, &ClausesInfo_8);
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_8, STATE_VARIABLE_PredInfo_0_9, STATE_VARIABLE_PredInfo_10);
    }
  }
}

static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_finish_preds_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_PredInfo_21;
    MR_Integer conv2_STATE_VARIABLE_NumBadErrors_23;
    MR_Word conv1_STATE_VARIABLE_AlwaysSpecs_25;
    MR_Word conv0_STATE_VARIABLE_NoTypeErrorSpecs_27;

    check_hlds__post_typecheck__post_typecheck_do_finish_pred_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_PredInfo_21, ((MR_Integer) (wrapper_arg_4)), &conv2_STATE_VARIABLE_NumBadErrors_23, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_AlwaysSpecs_25, ((MR_Word) (wrapper_arg_8)), &conv0_STATE_VARIABLE_NoTypeErrorSpecs_27);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_PredInfo_21));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_NumBadErrors_23));
    *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_AlwaysSpecs_25));
    *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_NoTypeErrorSpecs_27));
  }
}

void MR_CALL 
check_hlds__post_typecheck__post_typecheck_finish_preds_5_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15,
  MR_Integer * NumBadErrors_7,
  MR_Word * AlwaysSpecs_8,
  MR_Word * NoTypeErrorSpecs_9)
{
  {
    MR_Word ValidPredIds_10;
    MR_Word ValidPredIdSet_11;
    MR_Word PredMap0_12;
    MR_Word PredMap_13;
    MR_Word Var_16;
    MR_Box conv6_NumBadErrors_7;
    MR_Box conv5_AlwaysSpecs_8;
    MR_Box conv4_NoTypeErrorSpecs_9;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_14, &ValidPredIds_10);
    ValidPredIdSet_11 = mercury__set_tree234__list_to_set_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ValidPredIds_10);
    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_14, &PredMap0_12);
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (check_hlds__post_typecheck__post_typecheck_finish_preds_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_14));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (ValidPredIdSet_11));
    }
    mercury__map__map_foldl3_9_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__post_typecheck_scalar_common_1[0]), (MR_Word) (&check_hlds__post_typecheck_scalar_common_1[0]), Var_16, PredMap0_12, &PredMap_13, ((MR_Box) ((MR_Integer) 0)), &conv6_NumBadErrors_7, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_AlwaysSpecs_8, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_NoTypeErrorSpecs_9);
    *NumBadErrors_7 = ((MR_Integer) (conv6_NumBadErrors_7));
    *AlwaysSpecs_8 = ((MR_Word) (conv5_AlwaysSpecs_8));
    *NoTypeErrorSpecs_9 = ((MR_Word) (conv4_NoTypeErrorSpecs_9));
    hlds__hlds_module__module_info_set_preds_3_p_0(PredMap_13, STATE_VARIABLE_ModuleInfo_0_14, STATE_VARIABLE_ModuleInfo_15);
  }
}

void mercury__check_hlds__post_typecheck__init(void)
{
}

void mercury__check_hlds__post_typecheck__init_type_tables(void)
{
}

void mercury__check_hlds__post_typecheck__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__post_typecheck__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.post_typecheck.
