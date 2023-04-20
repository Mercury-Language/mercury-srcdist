/*
** Automatically generated from `post_typecheck.m'
** by the Mercury compiler,
** version 22.01.6-beta-2023-04-20
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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "ops.mih"
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
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_mode_type_prop.mih"
#include "check_hlds.mode_comparison.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
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
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
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
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0_s {
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__Clauses_10;
  MR_Word * check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__LambdaHeadVar__1_27;
  MR_Cont check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__cont;
  void * check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__cont_env_ptr;
  MR_bool check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__succeeded;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__ConstraintId_17;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__ConstraintGoalId_19;
  MR_Box check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__conv0_ConstraintId_17;
  jmp_buf check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__commit_0;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__Clause_21;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__GoalInfo_23;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__GoalId_24;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__Var_28;
  MR_Integer check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__Var_40;
  MR_Integer check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__Var_41;
  MR_Box check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__conv1_Clause_21;
};

struct check_hlds__post_typecheck__find_constrained_goals_3_f_0_3_env_0_s {
  MR_Box * check_hlds__post_typecheck__find_constrained_goals_3_f_0_3_env_0__wrapper_arg_1;
  MR_Cont check_hlds__post_typecheck__find_constrained_goals_3_f_0_3_env_0__cont;
  void * check_hlds__post_typecheck__find_constrained_goals_3_f_0_3_env_0__cont_env_ptr;
  MR_Word check_hlds__post_typecheck__find_constrained_goals_3_f_0_3_env_0__conv2_LambdaHeadVar__1_27;
};

struct check_hlds__post_typecheck__propagate_checked_types_into_procs_modes_9_p_0_env_0_s {
  MR_bool check_hlds__post_typecheck__propagate_checked_types_into_procs_modes_9_p_0_env_0__succeeded;
  MR_Word check_hlds__post_typecheck__propagate_checked_types_into_procs_modes_9_p_0_env_0__ArgModes_55;
  jmp_buf check_hlds__post_typecheck__propagate_checked_types_into_procs_modes_9_p_0_env_0__commit_0;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

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

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__503__1_3_p_0(
  MR_Word LambdaHeadVar__1_23,
  MR_Word LambdaHeadVar__2_24,
  MR_Word * LambdaHeadVar__3_25);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0(
  MR_Word Clauses_10,
  MR_Word ConstraintIds_14,
  MR_Word * LambdaHeadVar__1_27,
  MR_Cont cont,
  void * cont_env_ptr);

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
check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word Procs0_11,
  MR_Word * Procs_12,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

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
  MR_Word STATE_VARIABLE_PredInfo_0_21,
  MR_Word * STATE_VARIABLE_PredInfo_22,
  MR_Integer STATE_VARIABLE_NumBadErrors_0_23,
  MR_Integer * STATE_VARIABLE_NumBadErrors_24,
  MR_Word STATE_VARIABLE_AlwaysSpecs_0_25,
  MR_Word * STATE_VARIABLE_AlwaysSpecs_26,
  MR_Word STATE_VARIABLE_NoTypeErrorSpecs_0_27,
  MR_Word * STATE_VARIABLE_NoTypeErrorSpecs_28);

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

static MR_Word MR_CALL 
check_hlds__post_typecheck__report_indistinguishable_modes_error_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Integer OldProcId_8,
  MR_Integer NewProcId_9,
  MR_Word PredId_10,
  MR_Word PredInfo_11);

static void MR_CALL 
check_hlds__post_typecheck__check_type_of_main_3_p_0(
  MR_Word PredInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

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
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

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
check_hlds__post_typecheck__propagate_checked_types_into_lambda_modes_in_clauses_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTypes_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6);

static void MR_CALL 
check_hlds__post_typecheck__propagate_checked_types_into_lambda_modes_in_cases_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTypes_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6);

static void MR_CALL 
check_hlds__post_typecheck__propagate_checked_types_into_lambda_modes_in_goals_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTypes_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6);

static void MR_CALL 
check_hlds__post_typecheck__propagate_checked_types_into_lambda_modes_in_goal_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarTypes_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_Specs_0_92,
  MR_Word * STATE_VARIABLE_Specs_93);

static void MR_CALL 
check_hlds__post_typecheck__propagate_checked_types_into_var_modes_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTypes_2,
  MR_Word Args_3,
  MR_Integer ArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
check_hlds__post_typecheck__propagate_checked_types_into_procs_modes_9_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__propagate_checked_types_into_procs_modes_9_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__propagate_checked_types_into_procs_modes_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevErrorProcIds_0_4,
  MR_Word * STATE_VARIABLE_RevErrorProcIds_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7,
  MR_Word STATE_VARIABLE_Procs_0_8,
  MR_Word * STATE_VARIABLE_Procs_9);

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


static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_1[81][2];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_2[5][3];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_3[1][1];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_4[1][14];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_5[1][10];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_6[2][7];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_7[3][6];




static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_1[81][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(Sorry, polymorphic modes are not supported.)"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: unbound inst variable(s)."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[17])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 30U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 30U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The constraint is due to:"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The constraints are due to:"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ", and"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the call to"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a goal here"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[34]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a higher-order call here"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "warning: unresolved polymorphism."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The unbound type"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[12])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "void"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "will be implicitly bound to the builtin type"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "My apologies.)"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[45]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but I\'m afraid you\'ll have to work it out yourself."))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[46])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(I ought to tell you which call caused the problem,"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[48])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "because the type variables listed above didn\'t get bound."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[50])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but I can\'t determine which version should be called,"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to a polymorphic predicate,"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[54])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The body of the clause contains a call"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[56])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "io.state"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[40])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must have type"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[60])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "main/2"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[62])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: both arguments of"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[64])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In mode declarations for "))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[67]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: duplicate mode declaration."))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[12])))
  },
  /* row 71 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[70])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[71])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Modes"))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "are indistinguishable."))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[75]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Here is the conflicting mode declaration."))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[77]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 79 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[58])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__post_typecheck_scalar_common_1[79]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_1[4])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_1[5])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_1[5])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_7[2])),
    ((MR_Box) (check_hlds__post_typecheck__post_typecheck_do_finish_pred_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_3[1][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_4[1][14] = {
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

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_5[1][10] = {
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

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_6[2][7] = {
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

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_7[3][6] = {
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



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



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

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
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
check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__503__1_3_p_0(
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
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__ConstraintId_17 = ((MR_Word) ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__conv0_ConstraintId_17));
    check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_5(
  void * env_ptr_arg)
{
  {
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__Clause_21 = ((MR_Word) ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__conv1_Clause_21));
    check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_4(env_ptr);
  }
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_6(
  void * env_ptr_arg)
{
  {
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__LambdaHeadVar__1_27), (MR_Integer) 0))));

      (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__GoalInfo_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__LambdaHeadVar__1_27), (MR_Integer) 1))));
      (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__GoalId_24 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__GoalInfo_23);
      (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__Var_40 = (MR_Integer) ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__GoalId_24);
      (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__Var_41 = (MR_Integer) ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__ConstraintGoalId_19);
      (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__succeeded = ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__Var_40 == (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__Var_41);
      if ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__succeeded)
        check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_3(env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__Var_28 = hlds__hlds_clauses__clause_body_1_f_0((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__Clause_21);
    hlds__goal_util__goal_contains_goal_2_p_0((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__Var_28, (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__LambdaHeadVar__1_27, check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_6, env_ptr);
  }
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_7(
  void * env_ptr_arg)
{
  {
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), &(env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__conv1_Clause_21, (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__Clauses_10, check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_5, env_ptr);
        (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__ConstraintId_17, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Integer Var_20;
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__ConstraintId_17, (MR_Integer) 0)));

      (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__ConstraintGoalId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__ConstraintId_17, (MR_Integer) 1))));
      Var_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__ConstraintId_17, (MR_Integer) 2))));
      check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_7(env_ptr);
      if ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__succeeded)
        ((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__cont)((env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0(
  MR_Word Clauses_10,
  MR_Word ConstraintIds_14,
  MR_Word * LambdaHeadVar__1_27,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0_s env;

    (env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__Clauses_10 = Clauses_10;
    (env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__LambdaHeadVar__1_27 = LambdaHeadVar__1_27;
    (env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__cont = cont;
    (env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
    mercury__set__member_2_p_1((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), &(env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_env_0__conv0_ConstraintId_17, ConstraintIds_14, check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0_2, &env);
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
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[12])));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[19])));
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
check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word Procs0_11,
  MR_Word * Procs_12,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_Word ProcInfo_14;
    MR_Word Context_15;
    MR_Word Pieces_16;
    MR_Word Spec_17;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Box conv0_ProcInfo_14;
    MR_Box conv1_Var_18;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs0_11, ((MR_Box) (ProcId_10)), &conv0_ProcInfo_14);
    ProcInfo_14 = ((MR_Word) (conv0_ProcInfo_14));
    hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_14, &Context_15);
    Var_32 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_8, (MR_Integer) 1, PredId_9);
    Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_32, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[20])));
    Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[11])), Var_31);
    {
      Spec_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.post_typecheck.report_unbound_inst_var_error\'/7"));
      MR_hl_field(MR_mktag(1), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(1), Spec_17, 3) = ((MR_Box) (Context_15));
      MR_hl_field(MR_mktag(1), Spec_17, 4) = ((MR_Box) (Pieces_16));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_20 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_19));
    }
    mercury__map__det_remove_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_10)), &conv1_Var_18, Procs0_11, Procs_12);
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

    check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__503__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_25);
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_25));
  }
}

static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word ValidPredIdSet_13,
  MR_Word PredId_14,
  MR_Word STATE_VARIABLE_PredInfo_0_21,
  MR_Word * STATE_VARIABLE_PredInfo_22,
  MR_Integer STATE_VARIABLE_NumBadErrors_0_23,
  MR_Integer * STATE_VARIABLE_NumBadErrors_24,
  MR_Word STATE_VARIABLE_AlwaysSpecs_0_25,
  MR_Word * STATE_VARIABLE_AlwaysSpecs_26,
  MR_Word STATE_VARIABLE_NoTypeErrorSpecs_0_27,
  MR_Word * STATE_VARIABLE_NoTypeErrorSpecs_28)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ValidPredIdSet_13, ((MR_Box) (PredId_14)));
    if (succeeded)
    {
      MR_Word ErrorProcs_19;
      MR_Word InstForTypeSpecs_20;
      MR_Word STATE_VARIABLE_PredInfo_29_29;
      MR_Word STATE_VARIABLE_NoTypeErrorSpecs_33_33;
      MR_Word STATE_VARIABLE_AlwaysSpecs_34_34;
      MR_Word STATE_VARIABLE_PredInfo_35_35;
      MR_Word STATE_VARIABLE_PredInfo_37_37;
      MR_Word STATE_VARIABLE_AlwaysSpecs_38_38;

      succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(STATE_VARIABLE_PredInfo_0_21);
      if (!(succeeded))
        succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(STATE_VARIABLE_PredInfo_0_21);
      if (succeeded)
      {
        check_hlds__post_typecheck__setup_vartypes_in_clauses_for_imported_pred_2_p_0(STATE_VARIABLE_PredInfo_0_21, &STATE_VARIABLE_PredInfo_29_29);
        STATE_VARIABLE_NoTypeErrorSpecs_33_33 = STATE_VARIABLE_NoTypeErrorSpecs_0_27;
        STATE_VARIABLE_AlwaysSpecs_34_34 = STATE_VARIABLE_AlwaysSpecs_0_25;
        *STATE_VARIABLE_NumBadErrors_24 = STATE_VARIABLE_NumBadErrors_0_23;
      }
      else
      {
        MR_Word STATE_VARIABLE_NoTypeErrorSpecs_31_31;
        MR_Word UnprovenConstraints0_52;
        MR_Word ClausesInfo0_68;
        MR_Word ExternalTypeParams_69;
        MR_Word VarSet_70;
        MR_Word VarTypesMap0_71;
        MR_Word VarTypesList_72;
        MR_Word BindToVoidTVars0_73;
        MR_Word UnresolvedVarsTypes_74;
        MR_Word BindToVoidTVars_75;

        hlds__hlds_pred__pred_info_get_unproven_body_constraints_2_p_0(STATE_VARIABLE_PredInfo_0_21, &UnprovenConstraints0_52);
        if ((UnprovenConstraints0_52 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *STATE_VARIABLE_NumBadErrors_24 = STATE_VARIABLE_NumBadErrors_0_23;
          STATE_VARIABLE_NoTypeErrorSpecs_31_31 = STATE_VARIABLE_NoTypeErrorSpecs_0_27;
        }
        else
        {
          MR_Word UnprovenConstraints_55;
          MR_Integer NumUnprovenConstraints_56;

          mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), UnprovenConstraints0_52, &UnprovenConstraints_55);
          check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0(ModuleInfo_12, PredId_14, STATE_VARIABLE_PredInfo_0_21, UnprovenConstraints_55, STATE_VARIABLE_NoTypeErrorSpecs_0_27, &STATE_VARIABLE_NoTypeErrorSpecs_31_31);
          mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), UnprovenConstraints_55, &NumUnprovenConstraints_56);
          *STATE_VARIABLE_NumBadErrors_24 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumBadErrors_0_23 + (MR_Unsigned) NumUnprovenConstraints_56);
        }
        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_21, &ClausesInfo0_68);
        hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(STATE_VARIABLE_PredInfo_0_21, &ExternalTypeParams_69);
        hlds__hlds_clauses__clauses_info_get_varset_2_p_0(ClausesInfo0_68, &VarSet_70);
        hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(ClausesInfo0_68, &VarTypesMap0_71);
        hlds__vartypes__vartypes_to_sorted_assoc_list_2_p_0(VarTypesMap0_71, &VarTypesList_72);
        mercury__set__init_1_p_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[4]), &BindToVoidTVars0_73);
        check_hlds__post_typecheck__find_unresolved_types_in_vars_6_p_0(VarTypesList_72, ExternalTypeParams_69, (MR_Word) ((MR_Unsigned) 0U), &UnresolvedVarsTypes_74, BindToVoidTVars0_73, &BindToVoidTVars_75);
        if ((UnresolvedVarsTypes_74 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          STATE_VARIABLE_PredInfo_29_29 = STATE_VARIABLE_PredInfo_0_21;
          STATE_VARIABLE_NoTypeErrorSpecs_33_33 = STATE_VARIABLE_NoTypeErrorSpecs_31_31;
        }
        else
        {
          MR_Word ProofMap0_78;
          MR_Word ConstraintMap0_79;
          MR_Word VarTypesMap_80;
          MR_Word ProofMap_81;
          MR_Word ConstraintMap_82;
          MR_Word ClausesInfo_83;
          MR_Word STATE_VARIABLE_PredInfo_33_86;
          MR_Word STATE_VARIABLE_PredInfo_34_87;
          MR_Word VoidSubst_104;
          MR_Word Var_109;
          MR_Box conv1_VoidSubst_104;

          check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0(ModuleInfo_12, PredId_14, STATE_VARIABLE_PredInfo_0_21, VarSet_70, UnresolvedVarsTypes_74, STATE_VARIABLE_NoTypeErrorSpecs_31_31, &STATE_VARIABLE_NoTypeErrorSpecs_33_33);
          hlds__hlds_pred__pred_info_get_constraint_proof_map_2_p_0(STATE_VARIABLE_PredInfo_0_21, &ProofMap0_78);
          hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(STATE_VARIABLE_PredInfo_0_21, &ConstraintMap0_79);
          Var_109 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
          mercury__set__fold_4_p_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_1[4]), (MR_Word) (&check_hlds__post_typecheck_scalar_common_2[1]), (MR_Word) (&check_hlds__post_typecheck_scalar_common_2[4]), BindToVoidTVars_75, ((MR_Box) (Var_109)), &conv1_VoidSubst_104);
          VoidSubst_104 = ((MR_Word) (conv1_VoidSubst_104));
          hlds__vartypes__apply_subst_to_vartypes_3_p_0(VoidSubst_104, VarTypesMap0_71, &VarTypesMap_80);
          check_hlds__type_util__apply_subst_to_constraint_proof_map_3_p_0(VoidSubst_104, ProofMap0_78, &ProofMap_81);
          check_hlds__type_util__apply_subst_to_constraint_map_3_p_0(VoidSubst_104, ConstraintMap0_79, &ConstraintMap_82);
          hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(VarTypesMap_80, ClausesInfo0_68, &ClausesInfo_83);
          hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_83, STATE_VARIABLE_PredInfo_0_21, &STATE_VARIABLE_PredInfo_33_86);
          hlds__hlds_pred__pred_info_set_constraint_proof_map_3_p_0(ProofMap_81, STATE_VARIABLE_PredInfo_33_86, &STATE_VARIABLE_PredInfo_34_87);
          hlds__hlds_pred__pred_info_set_constraint_map_3_p_0(ConstraintMap_82, STATE_VARIABLE_PredInfo_34_87, &STATE_VARIABLE_PredInfo_29_29);
        }
        check_hlds__post_typecheck__check_type_of_main_3_p_0(STATE_VARIABLE_PredInfo_29_29, STATE_VARIABLE_AlwaysSpecs_0_25, &STATE_VARIABLE_AlwaysSpecs_34_34);
      }
      check_hlds__post_typecheck__propagate_checked_types_into_pred_modes_5_p_0(ModuleInfo_12, &ErrorProcs_19, &InstForTypeSpecs_20, STATE_VARIABLE_PredInfo_29_29, &STATE_VARIABLE_PredInfo_35_35);
      *STATE_VARIABLE_NoTypeErrorSpecs_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), InstForTypeSpecs_20, STATE_VARIABLE_NoTypeErrorSpecs_33_33);
      check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0(ModuleInfo_12, PredId_14, ErrorProcs_19, STATE_VARIABLE_PredInfo_35_35, &STATE_VARIABLE_PredInfo_37_37, STATE_VARIABLE_AlwaysSpecs_34_34, &STATE_VARIABLE_AlwaysSpecs_38_38);
      check_hlds__post_typecheck__check_for_indistinguishable_modes_6_p_0(ModuleInfo_12, PredId_14, STATE_VARIABLE_PredInfo_37_37, STATE_VARIABLE_PredInfo_22, STATE_VARIABLE_AlwaysSpecs_38_38, STATE_VARIABLE_AlwaysSpecs_26);
    }
    else
    {
      *STATE_VARIABLE_NoTypeErrorSpecs_28 = STATE_VARIABLE_NoTypeErrorSpecs_0_27;
      *STATE_VARIABLE_AlwaysSpecs_26 = STATE_VARIABLE_AlwaysSpecs_0_25;
      *STATE_VARIABLE_NumBadErrors_24 = STATE_VARIABLE_NumBadErrors_0_23;
      *STATE_VARIABLE_PredInfo_22 = STATE_VARIABLE_PredInfo_0_21;
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
    succeeded = ((MR_tag((MR_Word) Origin_11)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Origin_11, (MR_Integer) 0))) & (MR_Integer) 3);
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

      ProcIds_13 = hlds__hlds_pred__pred_info_all_procids_1_f_0(STATE_VARIABLE_PredInfo_0_14);
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

            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_28, (MR_Integer) 492, (MR_Integer) 0);
            if (succeeded)
            {
              Var_39 = (MR_Integer) 497;
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

          Spec_30 = check_hlds__post_typecheck__report_indistinguishable_modes_error_5_f_0(ModuleInfo_1, ProcId1_3, ProcId_22, PredId_2, STATE_VARIABLE_PredInfo_0_6);
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

static MR_Word MR_CALL 
check_hlds__post_typecheck__report_indistinguishable_modes_error_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Integer OldProcId_8,
  MR_Integer NewProcId_9,
  MR_Word PredId_10,
  MR_Word PredInfo_11)
{
  {
    MR_Word Spec_12;
    MR_Word Procs_13;
    MR_Word OldProcInfo_14;
    MR_Word NewProcInfo_15;
    MR_Word OldContext_16;
    MR_Word NewContext_17;
    MR_Word MainPieces_18;
    MR_Word VerbosePieces_19;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_String Var_43;
    MR_Word Var_45;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_String Var_50;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Box conv0_OldProcInfo_14;
    MR_Box conv1_NewProcInfo_15;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_11, &Procs_13);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_13, ((MR_Box) (OldProcId_8)), &conv0_OldProcInfo_14);
    OldProcInfo_14 = ((MR_Word) (conv0_OldProcInfo_14));
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_13, ((MR_Box) (NewProcId_9)), &conv1_NewProcInfo_15);
    NewProcInfo_15 = ((MR_Word) (conv1_NewProcInfo_15));
    hlds__hlds_pred__proc_info_get_context_2_p_0(OldProcInfo_14, &OldContext_16);
    hlds__hlds_pred__proc_info_get_context_2_p_0(NewProcInfo_15, &NewContext_17);
    Var_26 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_7, (MR_Integer) 0, PredId_10);
    Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_26, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[72])));
    MainPieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[68])), Var_25);
    Var_43 = check_hlds__mode_errors__mode_decl_to_string_3_f_0((MR_Integer) 0, OldProcId_8, PredInfo_11);
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (Var_43));
    }
    Var_50 = check_hlds__mode_errors__mode_decl_to_string_3_f_0((MR_Integer) 0, NewProcId_9, PredInfo_11);
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[76])));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[74])));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_45));
    }
    {
      VerbosePieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), VerbosePieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[73])));
      MR_hl_field(MR_mktag(1), VerbosePieces_19, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (MainPieces_18));
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_68, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), Var_68, 1) = ((MR_Box) (VerbosePieces_19));
    }
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_67));
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_64, 0) = ((MR_Box) (NewContext_17));
      MR_hl_field(MR_mktag(2), Var_64, 1) = ((MR_Box) (Var_65));
    }
    {
      Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (OldContext_16));
      MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[78])));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_71));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.post_typecheck.report_indistinguishable_modes_error\'/5"));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_3[0])));
      MR_hl_field(MR_mktag(0), Spec_12, 3) = ((MR_Box) (Var_63));
    }
    return Spec_12;
  }
}

static void MR_CALL 
check_hlds__post_typecheck__check_type_of_main_3_p_0(
  MR_Word PredInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  {
    MR_bool succeeded;
    MR_String Var_14;
    MR_Integer Var_15;

    Var_14 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_4);
    succeeded = (strcmp(Var_14, (MR_String) "main") == 0);
    if (succeeded)
    {
      Var_15 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_4);
      succeeded = (Var_15 == (MR_Integer) 2);
      if (succeeded)
        succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(PredInfo_4);
    }
    if (succeeded)
    {
      MR_Word ArgTypes_6;
      MR_Word ArgType1_7;
      MR_Word ArgType2_8;
      MR_Word Var_16;
      MR_Word Var_17;

      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_4, &ArgTypes_6);
      succeeded = (ArgTypes_6 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgType1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_6, (MR_Integer) 0))));
        Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_6, (MR_Integer) 1))));
        succeeded = (Var_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgType2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 0))));
          Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 1))));
          succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(ArgType1_7);
            if (succeeded)
              succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(ArgType2_8);
          }
        }
      }
      if (succeeded)
        *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
      else
      {
        MR_Word Context_9;
        MR_Word Spec_11;

        hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_4, &Context_9);
        {
          Spec_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.post_typecheck.check_type_of_main\'/3"));
          MR_hl_field(MR_mktag(1), Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 48U));
          MR_hl_field(MR_mktag(1), Spec_11, 3) = ((MR_Box) (Context_9));
          MR_hl_field(MR_mktag(1), Spec_11, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[66])));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_13 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_12));
        }
      }
    }
    else
      *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
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
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  {
    MR_Word TypeVarSet_14;
    MR_Word Context_15;
    MR_Word PredIdPieces_16;
    MR_Word VarTypePieceLists_17;
    MR_Word VarTypePieces_18;
    MR_Word MainPieces_19;
    MR_Word Msg_21;
    MR_Word Spec_22;
    MR_Word Var_26;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_String Var_45;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_56;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_String Var_61;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_108;
    MR_Box conv1_Var_45;
    MR_Box conv2_Var_61;

    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_10, &TypeVarSet_14);
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_10, &Context_15);
    PredIdPieces_16 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_8, (MR_Integer) 1, PredId_9);
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (VarSet_11));
      MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (TypeVarSet_14));
    }
    VarTypePieceLists_17 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_2[2]), (MR_Word) (&check_hlds__post_typecheck_scalar_common_1[1]), Var_26, Errs_12);
    mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), VarTypePieceLists_17, &VarTypePieces_18);
    conv1_Var_45 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_2[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Errs_12, ((MR_Box) ((MR_String) "The variable with an unbound type was:")), ((MR_Box) ((MR_String) "The variables with unbound types were:")));
    Var_45 = ((MR_String) (conv1_Var_45));
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (Var_45));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[23])));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[38])));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[19])));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
    }
    conv2_Var_61 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_2[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Errs_12, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
    Var_61 = ((MR_String) (conv2_Var_61));
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[44])));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[39])));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[24])));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
    }
    Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), VarTypePieces_18, Var_53);
    Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_33, Var_52);
    Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredIdPieces_16, Var_32);
    MainPieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[21])), Var_31);
    {
      Var_98 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (MainPieces_19));
    }
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Var_98));
      MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[80])));
    }
    {
      Msg_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Msg_21, 0) = ((MR_Box) (Context_15));
      MR_hl_field(MR_mktag(2), Msg_21, 1) = ((MR_Box) (Var_97));
    }
    {
      Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Msg_21));
      MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.post_typecheck.report_unresolved_type_warning\'/7"));
      MR_hl_field(MR_mktag(3), Spec_22, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 57) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(3), Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Spec_22, 3) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(3), Spec_22, 4) = ((MR_Box) (Var_108));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_24 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_22));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
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
        Var_38 = (MR_Integer) ((MR_Unsigned) VarsToDo_3 - (MR_Unsigned) 1);
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
    MR_Word MainPieces_15;
    MR_Word MainMsg_16;
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
    MR_Word Var_70;
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
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[23])));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[19])));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (TVarSet_12));
    }
    Var_52 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__post_typecheck_scalar_common_1[1]), Var_53, Constraints_10);
    Var_51 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(Var_52, (MR_Word) ((MR_Unsigned) 0U));
    Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_51, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[25])));
    Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_34, Var_50);
    Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredIdPieces_14, Var_33);
    MainPieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[21])), Var_32);
    {
      MainMsg_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MainMsg_16, 0) = ((MR_Box) (Context_13));
      MR_hl_field(MR_mktag(0), MainMsg_16, 1) = ((MR_Box) (MainPieces_15));
    }
    ConstrainedGoals_17 = check_hlds__post_typecheck__find_constrained_goals_2_f_0(PredInfo_9, Constraints_10);
    if ((ConstrainedGoals_17 == (MR_Word) ((MR_Unsigned) 0U)))
      ContextMsgs_18 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word DueToPieces_21;
      MR_Word ContextMsgsPrefix_22;
      MR_Word ContextMsgsList_23;
      MR_Box conv2_DueToPieces_21;

      conv2_DueToPieces_21 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__post_typecheck_scalar_common_1[1]), Constraints_10, ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[27]))), ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[29]))));
      DueToPieces_21 = ((MR_Word) (conv2_DueToPieces_21));
      {
        ContextMsgsPrefix_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ContextMsgsPrefix_22, 0) = ((MR_Box) (Context_13));
        MR_hl_field(MR_mktag(0), ContextMsgsPrefix_22, 1) = ((MR_Box) (DueToPieces_21));
      }
      ContextMsgsList_23 = check_hlds__post_typecheck__constrained_goals_to_error_msgs_2_f_0(ModuleInfo_7, ConstrainedGoals_17);
      {
        ContextMsgs_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ContextMsgs_18, 0) = ((MR_Box) (ContextMsgsPrefix_22));
        MR_hl_field(MR_mktag(1), ContextMsgs_18, 1) = ((MR_Box) (ContextMsgsList_23));
      }
    }
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (MainMsg_16));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (ContextMsgs_18));
    }
    {
      Spec_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.post_typecheck.report_unsatisfied_constraints\'/6"));
      MR_hl_field(MR_mktag(0), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(0), Spec_24, 3) = ((MR_Box) (Var_70));
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
        Suffix_14 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[30]));
      }
      else
      {
        MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_7, (MR_Integer) 1))));

        if ((Var_34 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          Words_13 = check_hlds__post_typecheck__describe_constrained_goal_2_f_0(ModuleInfo_1, Goal_6);
          Suffix_14 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[31]));
        }
        else
        {
          Words_13 = check_hlds__post_typecheck__describe_constrained_goal_2_f_0(ModuleInfo_1, Goal_6);
          Suffix_14 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[32]));
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
        Msg_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Msg_8, 0) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(3), Msg_8, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Msg_8, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Msg_8, 3) = ((MR_Box) (Var_27));
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
        Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[35]));
        break;
      case (MR_Integer) 1:
        Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[35]));
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 0))));
          MR_Word CallPieces_108;

          CallPieces_108 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_4, (MR_Integer) 0, PredId_9);
          {
            Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[33])));
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
                  Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[37]));
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word PFSymNameArity_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_127, (MR_Integer) 3))));
                    MR_Word Var_78;
                    MR_Word CallPieces_93;

                    {
                      Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                      MR_hl_field(MR_mktag(3), Var_78, 1) = ((MR_Box) (PFSymNameArity_24));
                    }
                    {
                      CallPieces_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), CallPieces_93, 0) = ((MR_Box) (Var_78));
                      MR_hl_field(MR_mktag(1), CallPieces_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[33])));
                      MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (CallPieces_93));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[35]));
                  break;
                case (MR_Integer) 3:
                  Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[35]));
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
                MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[33])));
                MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (CallPieces_15));
              }
            }
            break;
          case (MR_Integer) 2:
            Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[35]));
            break;
          case (MR_Integer) 3:
            Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[35]));
            break;
          case (MR_Integer) 4:
            Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[35]));
            break;
          case (MR_Integer) 5:
            Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[35]));
            break;
          case (MR_Integer) 6:
            Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[35]));
            break;
          case (MR_Integer) 7:
            Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[35]));
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

      check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__314__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &(env).check_hlds__post_typecheck__find_constrained_goals_3_f_0_3_env_0__conv2_LambdaHeadVar__1_27, check_hlds__post_typecheck__find_constrained_goals_2_f_0_2, &env);
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
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (check_hlds__post_typecheck__find_constrained_goals_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (ReverseConstraintMap_12));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__post_typecheck_scalar_common_1[3]), Var_25, Constraints_5, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_ConstraintIdSets_13);
    ConstraintIdSets_13 = ((MR_Word) (conv1_ConstraintIdSets_13));
    ConstraintIds_14 = mercury__set__union_list_1_f_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), ConstraintIdSets_13);
    {
      FindGoals_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FindGoals_15, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), FindGoals_15, 1) = ((MR_Box) (check_hlds__post_typecheck__find_constrained_goals_2_f_0_3));
      MR_hl_field(MR_mktag(0), FindGoals_15, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), FindGoals_15, 3) = ((MR_Box) (Clauses_10));
      MR_hl_field(MR_mktag(0), FindGoals_15, 4) = ((MR_Box) (ConstraintIds_14));
    }
    mercury__solutions__solutions_2_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), FindGoals_15, &Goals_6);
    return Goals_6;
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
    MR_Word conv0_STATE_VARIABLE_Specs_20;

    check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Procs_12, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_20);
    *wrapper_arg_3 = ((MR_Box) (conv1_Procs_12));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_20));
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
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ModuleInfo_8));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (PredId_9));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&check_hlds__post_typecheck_scalar_common_2[0]), (MR_Word) (&check_hlds__post_typecheck_scalar_common_1[0]), Var_21, ErrorProcIds_10, ((MR_Box) (ProcTable0_15)), &conv3_ProcTable_16, ((MR_Box) (STATE_VARIABLE_Specs_0_19)), &conv2_STATE_VARIABLE_Specs_20);
    ProcTable_16 = ((MR_Word) (conv3_ProcTable_16));
    *STATE_VARIABLE_Specs_20 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_20));
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_16, STATE_VARIABLE_PredInfo_0_17, STATE_VARIABLE_PredInfo_18);
  }
}

void MR_CALL 
check_hlds__post_typecheck__propagate_checked_types_into_pred_modes_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word * ErrorProcIds_7,
  MR_Word * STATE_VARIABLE_Specs_24,
  MR_Word STATE_VARIABLE_PredInfo_0_25,
  MR_Word * STATE_VARIABLE_PredInfo_26)
{
  {
    MR_bool succeeded;
    MR_Word Procs0_10;
    MR_Word ProcIds_11;
    MR_Word RevErrorProcIds_12;
    MR_Word Procs_13;
    MR_Word Markers_14;
    MR_Word STATE_VARIABLE_Specs_29_29;
    MR_Word STATE_VARIABLE_PredInfo_30_30;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_0_25, &Procs0_10);
    ProcIds_11 = hlds__hlds_pred__pred_info_all_procids_1_f_0(STATE_VARIABLE_PredInfo_0_25);
    check_hlds__post_typecheck__propagate_checked_types_into_procs_modes_9_p_0(ModuleInfo_6, STATE_VARIABLE_PredInfo_0_25, ProcIds_11, (MR_Word) ((MR_Unsigned) 0U), &RevErrorProcIds_12, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_29_29, Procs0_10, &Procs_13);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), RevErrorProcIds_12, ErrorProcIds_7);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(Procs_13, STATE_VARIABLE_PredInfo_0_25, &STATE_VARIABLE_PredInfo_30_30);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_30_30, &Markers_14);
    succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_14, (MR_Integer) 27);
    if (succeeded)
    {
      MR_Word ClausesInfo0_15;
      MR_Word FoundSyntaxError_16;

      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_30_30, &ClausesInfo0_15);
      hlds__hlds_clauses__clauses_info_get_had_syntax_errors_2_p_0(ClausesInfo0_15, &FoundSyntaxError_16);
      switch (FoundSyntaxError_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ClausesRep0_17;
            MR_Word ItemNums_18;
            MR_Word Clauses0_19;
            MR_Word VarTypes_20;
            MR_Word Clauses_21;
            MR_Word ClausesRep_22;
            MR_Word ClausesInfo_23;

            hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo0_15, &ClausesRep0_17, &ItemNums_18);
            hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(ClausesRep0_17, &Clauses0_19);
            VarTypes_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo0_15, (MR_Integer) 3))));
            check_hlds__post_typecheck__propagate_checked_types_into_lambda_modes_in_clauses_6_p_0(ModuleInfo_6, VarTypes_20, Clauses0_19, &Clauses_21, STATE_VARIABLE_Specs_29_29, STATE_VARIABLE_Specs_24);
            hlds__hlds_clauses__set_clause_list_2_p_0(Clauses_21, &ClausesRep_22);
            hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(ClausesRep_22, ItemNums_18, ClausesInfo0_15, &ClausesInfo_23);
            hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_23, STATE_VARIABLE_PredInfo_30_30, STATE_VARIABLE_PredInfo_26);
          }
          break;
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_29_29;
            *STATE_VARIABLE_PredInfo_26 = STATE_VARIABLE_PredInfo_30_30;
          }
          break;
      }
    }
    else
    {
      *STATE_VARIABLE_PredInfo_26 = STATE_VARIABLE_PredInfo_30_30;
      *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_29_29;
    }
  }
}

static void MR_CALL 
check_hlds__post_typecheck__propagate_checked_types_into_lambda_modes_in_clauses_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTypes_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
  }
  else
  {
    MR_Word Clause0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Clauses0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Clause_16;
    MR_Word Clauses_17;
    MR_Word STATE_VARIABLE_Specs_21_21;
    MR_Word Lang_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_14, (MR_Integer) 2))));

    if ((Lang_30 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Goal0_31;
      MR_Word Goal_32;
      MR_Word Var_39;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;

      Goal0_31 = hlds__hlds_clauses__clause_body_1_f_0(Clause0_14);
      check_hlds__post_typecheck__propagate_checked_types_into_lambda_modes_in_goal_6_p_0(ModuleInfo_1, VarTypes_2, Goal0_31, &Goal_32, STATE_VARIABLE_Specs_0_5, &STATE_VARIABLE_Specs_21_21);
      Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_14, (MR_Integer) 0))));
      Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_14, (MR_Integer) 2))));
      Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_14, (MR_Integer) 3))));
      Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_14, (MR_Integer) 4))));
      {
        Clause_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Clause_16, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(0), Clause_16, 1) = ((MR_Box) (Goal_32));
        MR_hl_field(MR_mktag(0), Clause_16, 2) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(0), Clause_16, 3) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(0), Clause_16, 4) = ((MR_Box) (Var_43));
      }
    }
    else
    {
      Clause_16 = Clause0_14;
      STATE_VARIABLE_Specs_21_21 = STATE_VARIABLE_Specs_0_5;
    }
    check_hlds__post_typecheck__propagate_checked_types_into_lambda_modes_in_clauses_6_p_0(ModuleInfo_1, VarTypes_2, Clauses0_15, &Clauses_17, STATE_VARIABLE_Specs_21_21, STATE_VARIABLE_Specs_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Clause_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Clauses_17));
    }
  }
}

static void MR_CALL 
check_hlds__post_typecheck__propagate_checked_types_into_lambda_modes_in_cases_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTypes_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
  }
  else
  {
    MR_Word Case0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Cases0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Case_16;
    MR_Word Cases_17;
    MR_Word MainConsId0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_14, (MR_Integer) 0))));
    MR_Word OtherConsIds0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_14, (MR_Integer) 1))));
    MR_Word Goal0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_14, (MR_Integer) 2))));
    MR_Word Goal_22;
    MR_Word STATE_VARIABLE_Specs_25_25;

    check_hlds__post_typecheck__propagate_checked_types_into_lambda_modes_in_goal_6_p_0(ModuleInfo_1, VarTypes_2, Goal0_21, &Goal_22, STATE_VARIABLE_Specs_0_5, &STATE_VARIABLE_Specs_25_25);
    {
      Case_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_16, 0) = ((MR_Box) (MainConsId0_19));
      MR_hl_field(MR_mktag(0), Case_16, 1) = ((MR_Box) (OtherConsIds0_20));
      MR_hl_field(MR_mktag(0), Case_16, 2) = ((MR_Box) (Goal_22));
    }
    check_hlds__post_typecheck__propagate_checked_types_into_lambda_modes_in_cases_6_p_0(ModuleInfo_1, VarTypes_2, Cases0_15, &Cases_17, STATE_VARIABLE_Specs_25_25, STATE_VARIABLE_Specs_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_17));
    }
  }
}

static void MR_CALL 
check_hlds__post_typecheck__propagate_checked_types_into_lambda_modes_in_goals_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTypes_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
  }
  else
  {
    MR_Word Goal0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Goals0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Goal_16;
    MR_Word Goals_17;
    MR_Word STATE_VARIABLE_Specs_21_21;

    check_hlds__post_typecheck__propagate_checked_types_into_lambda_modes_in_goal_6_p_0(ModuleInfo_1, VarTypes_2, Goal0_14, &Goal_16, STATE_VARIABLE_Specs_0_5, &STATE_VARIABLE_Specs_21_21);
    check_hlds__post_typecheck__propagate_checked_types_into_lambda_modes_in_goals_6_p_0(ModuleInfo_1, VarTypes_2, Goals0_15, &Goals_17, STATE_VARIABLE_Specs_21_21, STATE_VARIABLE_Specs_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_17));
    }
  }
}

static void MR_CALL 
check_hlds__post_typecheck__propagate_checked_types_into_lambda_modes_in_goal_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarTypes_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_Specs_0_92,
  MR_Word * STATE_VARIABLE_Specs_93)
{
  {
    MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 0))));
    MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_72 = (MR_Word) ((MR_Word) (GoalExpr0_12));
          MR_Word SubGoal_73;
          MR_Word GoalExpr_114;

          check_hlds__post_typecheck__propagate_checked_types_into_lambda_modes_in_goal_6_p_0(ModuleInfo_7, VarTypes_8, SubGoal0_72, &SubGoal_73, STATE_VARIABLE_Specs_0_92, STATE_VARIABLE_Specs_93);
          GoalExpr_114 = (MR_Word) ((MR_Word) (SubGoal_73));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_114));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_12, (MR_Integer) 0))));
          MR_Word RHS0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_12, (MR_Integer) 1))));
          MR_Word UnifyMode0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_12, (MR_Integer) 2))));
          MR_Word Unification0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_12, (MR_Integer) 3))));
          MR_Word UniContext0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_12, (MR_Integer) 4))));

          switch (MR_tag((MR_Word) RHS0_15)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                *Goal_10 = Goal0_9;
                *STATE_VARIABLE_Specs_93 = STATE_VARIABLE_Specs_0_92;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word PorF0_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Word ClosureVars0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 2))));
                MR_Word ArgVarsModes0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 3))));
                MR_Word Detism0_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 4))) & (MR_Integer) 7);
                MR_Word LambdaGoal0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 5))));
                MR_Integer NumArgs_31;
                MR_Word Context_32;
                MR_Word Args_33;
                MR_Word ArgVarsModes_34;
                MR_Word LambdaGoal_35;
                MR_Word RHS_36;
                MR_Word GoalExpr_37;
                MR_Word STATE_VARIABLE_Specs_108_108;
                MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 0)));

                mercury__list__length_2_p_0((MR_Word) (&check_hlds__post_typecheck_scalar_common_2[3]), ArgVarsModes0_28, &NumArgs_31);
                Context_32 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_13);
                {
                  Args_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Args_33, 0) = (MR_Box) ((MR_Unsigned) (PorF0_25));
                  MR_hl_field(MR_mktag(1), Args_33, 1) = ((MR_Box) (NumArgs_31));
                  MR_hl_field(MR_mktag(1), Args_33, 2) = ((MR_Box) (Context_32));
                }
                check_hlds__post_typecheck__propagate_checked_types_into_var_modes_8_p_0(ModuleInfo_7, VarTypes_8, Args_33, (MR_Integer) 1, ArgVarsModes0_28, &ArgVarsModes_34, STATE_VARIABLE_Specs_0_92, &STATE_VARIABLE_Specs_108_108);
                check_hlds__post_typecheck__propagate_checked_types_into_lambda_modes_in_goal_6_p_0(ModuleInfo_7, VarTypes_8, LambdaGoal0_30, &LambdaGoal_35, STATE_VARIABLE_Specs_108_108, STATE_VARIABLE_Specs_93);
                {
                  RHS_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), RHS_36, 0) = (MR_Box) (packed_word_3);
                  MR_hl_field(MR_mktag(2), RHS_36, 1) = NULL;
                  MR_hl_field(MR_mktag(2), RHS_36, 2) = ((MR_Box) (ClosureVars0_27));
                  MR_hl_field(MR_mktag(2), RHS_36, 3) = ((MR_Box) (ArgVarsModes_34));
                  MR_hl_field(MR_mktag(2), RHS_36, 4) = (MR_Box) ((MR_Unsigned) (Detism0_29));
                  MR_hl_field(MR_mktag(2), RHS_36, 5) = ((MR_Box) (LambdaGoal_35));
                }
                {
                  GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), GoalExpr_37, 0) = ((MR_Box) (LHS0_14));
                  MR_hl_field(MR_mktag(1), GoalExpr_37, 1) = ((MR_Box) (RHS_36));
                  MR_hl_field(MR_mktag(1), GoalExpr_37, 2) = ((MR_Box) (UnifyMode0_16));
                  MR_hl_field(MR_mktag(1), GoalExpr_37, 3) = ((MR_Box) (Unification0_17));
                  MR_hl_field(MR_mktag(1), GoalExpr_37, 4) = ((MR_Box) (UniContext0_18));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Goal_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_37));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *Goal_10 = Goal0_9;
          *STATE_VARIABLE_Specs_93 = STATE_VARIABLE_Specs_0_92;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *Goal_10 = Goal0_9;
              *STATE_VARIABLE_Specs_93 = STATE_VARIABLE_Specs_0_92;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Conjuncts0_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
              MR_Word Conjuncts_58;
              MR_Word GoalExpr_110;

              check_hlds__post_typecheck__propagate_checked_types_into_lambda_modes_in_goals_6_p_0(ModuleInfo_7, VarTypes_8, Conjuncts0_57, &Conjuncts_58, STATE_VARIABLE_Specs_0_92, STATE_VARIABLE_Specs_93);
              {
                GoalExpr_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_110, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr_110, 1) = (MR_Box) ((MR_Unsigned) (ConjType_56));
                MR_hl_field(MR_mktag(3), GoalExpr_110, 2) = ((MR_Box) (Conjuncts_58));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_110));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
              MR_Word Disjuncts_60;
              MR_Word GoalExpr_111;

              check_hlds__post_typecheck__propagate_checked_types_into_lambda_modes_in_goals_6_p_0(ModuleInfo_7, VarTypes_8, Disjuncts0_59, &Disjuncts_60, STATE_VARIABLE_Specs_0_92, STATE_VARIABLE_Specs_93);
              {
                GoalExpr_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_111, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExpr_111, 1) = ((MR_Box) (Disjuncts_60));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_111));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
              MR_Word CanFail0_62 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3))));
              MR_Word Cases_64;
              MR_Word GoalExpr_112;

              check_hlds__post_typecheck__propagate_checked_types_into_lambda_modes_in_cases_6_p_0(ModuleInfo_7, VarTypes_8, Cases0_63, &Cases_64, STATE_VARIABLE_Specs_0_92, STATE_VARIABLE_Specs_93);
              {
                GoalExpr_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_112, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_112, 1) = ((MR_Box) (Var0_61));
                MR_hl_field(MR_mktag(3), GoalExpr_112, 2) = (MR_Box) ((MR_Unsigned) (CanFail0_62));
                MR_hl_field(MR_mktag(3), GoalExpr_112, 3) = ((MR_Box) (Cases_64));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_112));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason0_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
              MR_Word GoalExpr_115;
              MR_Word SubGoal0_116 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
              MR_Word SubGoal_117;

              check_hlds__post_typecheck__propagate_checked_types_into_lambda_modes_in_goal_6_p_0(ModuleInfo_7, VarTypes_8, SubGoal0_116, &SubGoal_117, STATE_VARIABLE_Specs_0_92, STATE_VARIABLE_Specs_93);
              {
                GoalExpr_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_115, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_115, 1) = ((MR_Box) (Reason0_74));
                MR_hl_field(MR_mktag(3), GoalExpr_115, 2) = ((MR_Box) (SubGoal_117));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_115));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
              MR_Word Cond0_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
              MR_Word Then0_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3))));
              MR_Word Else0_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 4))));
              MR_Word Cond_69;
              MR_Word Then_70;
              MR_Word Else_71;
              MR_Word STATE_VARIABLE_Specs_101_101;
              MR_Word STATE_VARIABLE_Specs_102_102;
              MR_Word GoalExpr_113;

              check_hlds__post_typecheck__propagate_checked_types_into_lambda_modes_in_goal_6_p_0(ModuleInfo_7, VarTypes_8, Cond0_66, &Cond_69, STATE_VARIABLE_Specs_0_92, &STATE_VARIABLE_Specs_101_101);
              check_hlds__post_typecheck__propagate_checked_types_into_lambda_modes_in_goal_6_p_0(ModuleInfo_7, VarTypes_8, Then0_67, &Then_70, STATE_VARIABLE_Specs_101_101, &STATE_VARIABLE_Specs_102_102);
              check_hlds__post_typecheck__propagate_checked_types_into_lambda_modes_in_goal_6_p_0(ModuleInfo_7, VarTypes_8, Else0_68, &Else_71, STATE_VARIABLE_Specs_102_102, STATE_VARIABLE_Specs_93);
              {
                GoalExpr_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_113, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_113, 1) = ((MR_Box) (Vars0_65));
                MR_hl_field(MR_mktag(3), GoalExpr_113, 2) = ((MR_Box) (Cond_69));
                MR_hl_field(MR_mktag(3), GoalExpr_113, 3) = ((MR_Box) (Then_70));
                MR_hl_field(MR_mktag(3), GoalExpr_113, 4) = ((MR_Box) (Else_71));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_113));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
              MR_Word ShortHand_80;
              MR_Word GoalExpr_122;

              switch (MR_tag((MR_Word) ShortHand0_75)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA0_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand0_75, (MR_Integer) 0))));
                    MR_Word GoalB0_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand0_75, (MR_Integer) 1))));
                    MR_Word GoalA_78;
                    MR_Word GoalB_79;
                    MR_Word STATE_VARIABLE_Specs_97_97;

                    check_hlds__post_typecheck__propagate_checked_types_into_lambda_modes_in_goal_6_p_0(ModuleInfo_7, VarTypes_8, GoalA0_76, &GoalA_78, STATE_VARIABLE_Specs_0_92, &STATE_VARIABLE_Specs_97_97);
                    check_hlds__post_typecheck__propagate_checked_types_into_lambda_modes_in_goal_6_p_0(ModuleInfo_7, VarTypes_8, GoalB0_77, &GoalB_79, STATE_VARIABLE_Specs_97_97, STATE_VARIABLE_Specs_93);
                    {
                      ShortHand_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ShortHand_80, 0) = ((MR_Box) (GoalA_78));
                      MR_hl_field(MR_mktag(0), ShortHand_80, 1) = ((MR_Box) (GoalB_79));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word AtomicGoalType0_81 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShortHand0_75, (MR_Integer) 0))) & (MR_Integer) 3);
                    MR_Word OuterVars0_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_75, (MR_Integer) 1))));
                    MR_Word InnerVars0_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_75, (MR_Integer) 2))));
                    MR_Word OutputVars0_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_75, (MR_Integer) 3))));
                    MR_Word MainGoal0_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_75, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_75, (MR_Integer) 5))));
                    MR_Word OrElseInners0_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_75, (MR_Integer) 6))));
                    MR_Word MainGoal_88;
                    MR_Word OrElseGoals_89;
                    MR_Word STATE_VARIABLE_Specs_95_95;

                    check_hlds__post_typecheck__propagate_checked_types_into_lambda_modes_in_goal_6_p_0(ModuleInfo_7, VarTypes_8, MainGoal0_85, &MainGoal_88, STATE_VARIABLE_Specs_0_92, &STATE_VARIABLE_Specs_95_95);
                    check_hlds__post_typecheck__propagate_checked_types_into_lambda_modes_in_goals_6_p_0(ModuleInfo_7, VarTypes_8, OrElseGoals0_86, &OrElseGoals_89, STATE_VARIABLE_Specs_95_95, STATE_VARIABLE_Specs_93);
                    {
                      ShortHand_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ShortHand_80, 0) = (MR_Box) ((MR_Unsigned) (AtomicGoalType0_81));
                      MR_hl_field(MR_mktag(1), ShortHand_80, 1) = ((MR_Box) (OuterVars0_82));
                      MR_hl_field(MR_mktag(1), ShortHand_80, 2) = ((MR_Box) (InnerVars0_83));
                      MR_hl_field(MR_mktag(1), ShortHand_80, 3) = ((MR_Box) (OutputVars0_84));
                      MR_hl_field(MR_mktag(1), ShortHand_80, 4) = ((MR_Box) (MainGoal_88));
                      MR_hl_field(MR_mktag(1), ShortHand_80, 5) = ((MR_Box) (OrElseGoals_89));
                      MR_hl_field(MR_mktag(1), ShortHand_80, 6) = ((MR_Box) (OrElseInners0_87));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIOVars0_90 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_75, (MR_Integer) 0))));
                    MR_Word ResultVars0_91 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_75, (MR_Integer) 1))));
                    MR_Word SubGoal0_118 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_75, (MR_Integer) 2))));
                    MR_Word SubGoal_119;

                    check_hlds__post_typecheck__propagate_checked_types_into_lambda_modes_in_goal_6_p_0(ModuleInfo_7, VarTypes_8, SubGoal0_118, &SubGoal_119, STATE_VARIABLE_Specs_0_92, STATE_VARIABLE_Specs_93);
                    {
                      ShortHand_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ShortHand_80, 0) = ((MR_Box) (MaybeIOVars0_90));
                      MR_hl_field(MR_mktag(2), ShortHand_80, 1) = ((MR_Box) (ResultVars0_91));
                      MR_hl_field(MR_mktag(2), ShortHand_80, 2) = ((MR_Box) (SubGoal_119));
                    }
                  }
                  break;
              }
              {
                GoalExpr_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_122, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), GoalExpr_122, 1) = ((MR_Box) (ShortHand_80));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_122));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__post_typecheck__propagate_checked_types_into_var_modes_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarTypes_2,
  MR_Word Args_3,
  MR_Integer ArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
  }
  else
  {
    MR_Word Var_20;
    MR_Word Mode0_21;
    MR_Word VarsModes0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
    MR_Word Mode_23;
    MR_Word VarsModes_24;
    MR_Word Type_26;
    MR_Word Context_27;
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
    MR_Word Var_31;
    MR_Word STATE_VARIABLE_Specs_32_32;
    MR_Integer Var_33;

    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0))));
    Mode0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1))));
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_2, Var_20, &Type_26);
    {
      Context_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Context_27, 0) = ((MR_Box) (Args_3));
      MR_hl_field(MR_mktag(0), Context_27, 1) = ((MR_Box) (ArgNum_4));
    }
    check_hlds__inst_mode_type_prop__propagate_checked_type_into_mode_7_p_0(ModuleInfo_1, Context_27, Type_26, Mode0_21, &Mode_23, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_32_32);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (Mode_23));
    }
    Var_33 = (MR_Integer) ((MR_Unsigned) ArgNum_4 + (MR_Unsigned) 1);
    check_hlds__post_typecheck__propagate_checked_types_into_var_modes_8_p_0(ModuleInfo_1, VarTypes_2, Args_3, Var_33, VarsModes0_22, &VarsModes_24, STATE_VARIABLE_Specs_32_32, STATE_VARIABLE_Specs_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (VarsModes_24));
    }
  }
}

static void MR_CALL 
check_hlds__post_typecheck__propagate_checked_types_into_procs_modes_9_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__post_typecheck__propagate_checked_types_into_procs_modes_9_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__propagate_checked_types_into_procs_modes_9_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__post_typecheck__propagate_checked_types_into_procs_modes_9_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__post_typecheck__propagate_checked_types_into_procs_modes_9_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__post_typecheck__propagate_checked_types_into_procs_modes_9_p_0_env_0_s * env_ptr = (struct check_hlds__post_typecheck__propagate_checked_types_into_procs_modes_9_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->check_hlds__post_typecheck__propagate_checked_types_into_procs_modes_9_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word _InstVar_56;

          check_hlds__inst_match__mode_list_contains_inst_var_2_p_0((env_ptr)->check_hlds__post_typecheck__propagate_checked_types_into_procs_modes_9_p_0_env_0__ArgModes_55, &_InstVar_56, check_hlds__post_typecheck__propagate_checked_types_into_procs_modes_9_p_0_1, env_ptr);
        }
        (env_ptr)->check_hlds__post_typecheck__propagate_checked_types_into_procs_modes_9_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__post_typecheck__propagate_checked_types_into_procs_modes_9_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__post_typecheck__propagate_checked_types_into_procs_modes_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevErrorProcIds_0_4,
  MR_Word * STATE_VARIABLE_RevErrorProcIds_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7,
  MR_Word STATE_VARIABLE_Procs_0_8,
  MR_Word * STATE_VARIABLE_Procs_9)
{
  {
    struct check_hlds__post_typecheck__propagate_checked_types_into_procs_modes_9_p_0_env_0_s env;

    while (MR_TRUE)
    {
      // setup for model_det tailcalls optimized into a loop
      ;
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_Procs_9 = STATE_VARIABLE_Procs_0_8;
        *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
        *STATE_VARIABLE_RevErrorProcIds_5 = STATE_VARIABLE_RevErrorProcIds_0_4;
      }
      else
      {
        MR_Integer ProcId_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ProcIds_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_RevErrorProcIds_34_34;
        MR_Word STATE_VARIABLE_Specs_35_35;
        MR_Word STATE_VARIABLE_Procs_36_36;
        MR_Word ArgTypes_52;
        MR_Word ProcInfo0_53;
        MR_Word ArgModes0_54;
        MR_Word Var_58;
        MR_Box conv0_ProcInfo0_53;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_STATE_VARIABLE_RevErrorProcIds_0_4;
        MR_Word next_value_of_STATE_VARIABLE_Specs_0_6;
        MR_Word next_value_of_STATE_VARIABLE_Procs_0_8;

        hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_2, &ArgTypes_52);
        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_Procs_0_8, ((MR_Box) (ProcId_23)), &conv0_ProcInfo0_53);
        ProcInfo0_53 = ((MR_Word) (conv0_ProcInfo0_53));
        hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo0_53, &ArgModes0_54);
        {
          Var_58 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (PredInfo_2));
        }
        check_hlds__inst_mode_type_prop__propagate_checked_types_into_modes_7_p_0(ModuleInfo_1, Var_58, ArgTypes_52, ArgModes0_54, &(env).check_hlds__post_typecheck__propagate_checked_types_into_procs_modes_9_p_0_env_0__ArgModes_55, STATE_VARIABLE_Specs_0_6, &STATE_VARIABLE_Specs_35_35);
        check_hlds__post_typecheck__propagate_checked_types_into_procs_modes_9_p_0_2(&env);
        if ((env).check_hlds__post_typecheck__propagate_checked_types_into_procs_modes_9_p_0_env_0__succeeded)
        {
          {
            STATE_VARIABLE_RevErrorProcIds_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevErrorProcIds_34_34, 0) = ((MR_Box) (ProcId_23));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevErrorProcIds_34_34, 1) = ((MR_Box) (STATE_VARIABLE_RevErrorProcIds_0_4));
          }
          STATE_VARIABLE_Procs_36_36 = STATE_VARIABLE_Procs_0_8;
        }
        else
        {
          MR_Word ProcInfo_57;

          hlds__hlds_pred__proc_info_set_argmodes_3_p_0((env).check_hlds__post_typecheck__propagate_checked_types_into_procs_modes_9_p_0_env_0__ArgModes_55, ProcInfo0_53, &ProcInfo_57);
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_23)), ((MR_Box) (ProcInfo_57)), STATE_VARIABLE_Procs_0_8, &STATE_VARIABLE_Procs_36_36);
          STATE_VARIABLE_RevErrorProcIds_34_34 = STATE_VARIABLE_RevErrorProcIds_0_4;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = ProcIds_24;
        next_value_of_STATE_VARIABLE_RevErrorProcIds_0_4 = STATE_VARIABLE_RevErrorProcIds_34_34;
        next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_35_35;
        next_value_of_STATE_VARIABLE_Procs_0_8 = STATE_VARIABLE_Procs_36_36;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_RevErrorProcIds_0_4 = next_value_of_STATE_VARIABLE_RevErrorProcIds_0_4;
        STATE_VARIABLE_Specs_0_6 = next_value_of_STATE_VARIABLE_Specs_0_6;
        STATE_VARIABLE_Procs_0_8 = next_value_of_STATE_VARIABLE_Procs_0_8;
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
    MR_Word conv3_STATE_VARIABLE_PredInfo_22;
    MR_Integer conv2_STATE_VARIABLE_NumBadErrors_24;
    MR_Word conv1_STATE_VARIABLE_AlwaysSpecs_26;
    MR_Word conv0_STATE_VARIABLE_NoTypeErrorSpecs_28;

    check_hlds__post_typecheck__post_typecheck_do_finish_pred_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_PredInfo_22, ((MR_Integer) (wrapper_arg_4)), &conv2_STATE_VARIABLE_NumBadErrors_24, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_AlwaysSpecs_26, ((MR_Word) (wrapper_arg_8)), &conv0_STATE_VARIABLE_NoTypeErrorSpecs_28);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_PredInfo_22));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_NumBadErrors_24));
    *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_AlwaysSpecs_26));
    *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_NoTypeErrorSpecs_28));
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
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_4[0]));
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
