/*
** Automatically generated from `post_typecheck.m'
** by the Mercury compiler,
** version rotd-2016-03-21
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


/* :- module check_hlds.post_typecheck. */
/* :- implementation. */

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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.modecheck_call.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
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



struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0_s {
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__Clauses_10;
  MR_Word * check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__LambdaHeadVar__1_25;
  MR_Cont check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__cont;
  void * check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__cont_env_ptr;
  MR_bool check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__succeeded;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__ConstraintId_17;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__ConstraintGoalId_19;
  MR_Box check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__conv0_ConstraintId_17;
  jmp_buf check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__commit_0;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__Clause_21;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__GoalInfo_23;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__GoalId_24;
  MR_Word check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__V_26_26;
  MR_Integer check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__V_35_35;
  MR_Integer check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__V_36_36;
  MR_Box check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__conv1_Clause_21;
};

struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s {
  MR_bool check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__succeeded;
  MR_Word check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ArgModes_24;
  jmp_buf check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__commit_0;
};

struct check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0_s {
  MR_Box * check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__wrapper_arg_1;
  MR_Cont check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__cont;
  void * check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__cont_env_ptr;
  MR_Word check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__conv0_LambdaHeadVar__1_25;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_clause_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_data__type_ctor_info_constraint_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__430__1_3_p_0(
  MR_Word check_hlds__post_typecheck__LambdaHeadVar__1_23,
  MR_Word check_hlds__post_typecheck__LambdaHeadVar__2_24,
  MR_Word * check_hlds__post_typecheck__LambdaHeadVar__3_25);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_2(
  void * check_hlds__post_typecheck__env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_3(
  void * check_hlds__post_typecheck__env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_5(
  void * check_hlds__post_typecheck__env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_6(
  void * check_hlds__post_typecheck__env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_4(
  void * check_hlds__post_typecheck__env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_7(
  void * check_hlds__post_typecheck__env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_1(
  void * check_hlds__post_typecheck__env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0(
  MR_Word check_hlds__post_typecheck__Clauses_10,
  MR_Word check_hlds__post_typecheck__ConstraintIds_14,
  MR_Word * check_hlds__post_typecheck__LambdaHeadVar__1_25,
  MR_Cont check_hlds__post_typecheck__cont,
  void * check_hlds__post_typecheck__cont_env_ptr);

static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_mode_9_p_0(
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
  MR_Word check_hlds__post_typecheck__PredId_2,
  MR_Integer check_hlds__post_typecheck__ProcId1_3,
  MR_Word check_hlds__post_typecheck__HeadVar__4_4,
  MR_Word * check_hlds__post_typecheck__HeadVar__5_5,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_6,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_7,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_8,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_9);

static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_p_0(
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
  MR_Word check_hlds__post_typecheck__PredId_2,
  MR_Word check_hlds__post_typecheck__HeadVar__3_3,
  MR_Word check_hlds__post_typecheck__PrevProcIds_4,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_5,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_6,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_7,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_8);

static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_modes_6_p_0(
  MR_Word check_hlds__post_typecheck__ModuleInfo_7,
  MR_Word check_hlds__post_typecheck__PredId_8,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_14,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_15,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_16,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_17);

static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0(
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
  MR_Word check_hlds__post_typecheck__PredId_9,
  MR_Integer check_hlds__post_typecheck__ProcId_10,
  MR_Word check_hlds__post_typecheck__Procs0_11,
  MR_Word * check_hlds__post_typecheck__Procs_12,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_20,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_21);

static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0_1(
  MR_Box check_hlds__post_typecheck__closure_arg,
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3,
  MR_Box check_hlds__post_typecheck__wrapper_arg_4,
  MR_Box * check_hlds__post_typecheck__wrapper_arg_5);

static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0(
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
  MR_Word check_hlds__post_typecheck__PredId_9,
  MR_Word check_hlds__post_typecheck__ErrorProcIds_10,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_17,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_18,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_20);

static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_1(
  void * check_hlds__post_typecheck__env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_2(
  void * check_hlds__post_typecheck__env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0(
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
  MR_Word check_hlds__post_typecheck__HeadVar__2_2,
  MR_Word check_hlds__post_typecheck__ArgTypes_3,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0_4,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_5,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Procs_0_6,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Procs_7);

static void MR_CALL 
check_hlds__post_typecheck__check_type_of_main_3_p_0(
  MR_Word check_hlds__post_typecheck__PredInfo_4,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_13,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_14);

static MR_Word MR_CALL 
check_hlds__post_typecheck__var_and_type_to_pieces_3_f_0(
  MR_Word check_hlds__post_typecheck__VarSet_5,
  MR_Word check_hlds__post_typecheck__TVarSet_6,
  MR_Word check_hlds__post_typecheck__HeadVar__3_3);

static MR_Box MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0_1(
  MR_Box check_hlds__post_typecheck__closure_arg,
  MR_Box check_hlds__post_typecheck__wrapper_arg_1);

static void MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0(
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
  MR_Word check_hlds__post_typecheck__PredId_9,
  MR_Word check_hlds__post_typecheck__PredInfo_10,
  MR_Word check_hlds__post_typecheck__VarSet_11,
  MR_Word check_hlds__post_typecheck__Errs_12,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_24,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_25);

static void MR_CALL 
check_hlds__post_typecheck__find_unresolved_types_in_vars_inner_8_p_0(
  MR_Word check_hlds__post_typecheck__HeadVar__1_1,
  MR_Word check_hlds__post_typecheck__ExternalTypeParams_2,
  MR_Integer check_hlds__post_typecheck__VarsToDo_3,
  MR_Word * check_hlds__post_typecheck__HeadVar__4_4,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_5,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_6,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0_7,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_8);

static void MR_CALL 
check_hlds__post_typecheck__find_unresolved_types_in_vars_6_p_0(
  MR_Word check_hlds__post_typecheck__VarTypes_7,
  MR_Word check_hlds__post_typecheck__ExternalTypeParams_8,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_14,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_15,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0_16,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_17);

static MR_Word MR_CALL 
check_hlds__post_typecheck__describe_constrained_goal_2_f_0(
  MR_Word check_hlds__post_typecheck__ModuleInfo_4,
  MR_Word check_hlds__post_typecheck__Goal_5);

static MR_Word MR_CALL 
check_hlds__post_typecheck__constrained_goals_to_error_msgs_2_f_0(
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
  MR_Word check_hlds__post_typecheck__HeadVar__2_2);

static void MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0_1(
  void * check_hlds__post_typecheck__env_ptr_arg);

static void MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0_2(
  MR_Box check_hlds__post_typecheck__closure_arg,
  MR_Box * check_hlds__post_typecheck__wrapper_arg_1,
  MR_Cont check_hlds__post_typecheck__cont,
  void * check_hlds__post_typecheck__cont_env_ptr);

static MR_Word MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0(
  MR_Word check_hlds__post_typecheck__PredInfo_4,
  MR_Word check_hlds__post_typecheck__Constraints_5);

static MR_Word MR_CALL 
check_hlds__post_typecheck__constraint_to_error_piece_2_f_0(
  MR_Word check_hlds__post_typecheck__TVarset_4,
  MR_Word check_hlds__post_typecheck__Constraint_5);

static MR_Box MR_CALL 
check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0_1(
  MR_Box check_hlds__post_typecheck__closure_arg,
  MR_Box check_hlds__post_typecheck__wrapper_arg_1);

static void MR_CALL 
check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0(
  MR_Word check_hlds__post_typecheck__ModuleInfo_7,
  MR_Word check_hlds__post_typecheck__PredId_8,
  MR_Word check_hlds__post_typecheck__PredInfo_9,
  MR_Word check_hlds__post_typecheck__Constraints_10,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_22,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_23);

static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_11_p_0_1(
  MR_Box check_hlds__post_typecheck__closure_arg,
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3);

static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_11_p_0(
  MR_Word check_hlds__post_typecheck__ModuleInfo_12,
  MR_Word check_hlds__post_typecheck__ValidPredIdSet_13,
  MR_Word check_hlds__post_typecheck__PredId_14,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_20,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_21,
  MR_Integer check_hlds__post_typecheck__STATE_VARIABLE_NumBadErrors_0_22,
  MR_Integer * check_hlds__post_typecheck__STATE_VARIABLE_NumBadErrors_23,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_0_24,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_25,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_0_26,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_27);

static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_finish_preds_5_p_0_1(
  MR_Box check_hlds__post_typecheck__closure_arg,
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3,
  MR_Box check_hlds__post_typecheck__wrapper_arg_4,
  MR_Box * check_hlds__post_typecheck__wrapper_arg_5,
  MR_Box check_hlds__post_typecheck__wrapper_arg_6,
  MR_Box * check_hlds__post_typecheck__wrapper_arg_7,
  MR_Box check_hlds__post_typecheck__wrapper_arg_8,
  MR_Box * check_hlds__post_typecheck__wrapper_arg_9);


static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_1[66][2];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_2[4][3];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_3[1][4];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_4[1][14];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_5[3][6];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_6[1][7];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_7[1][1];

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_8[1][10];




static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_1[66][2] = {
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
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "void"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "will be implicitly bound to the builtin type"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "My apologies.)"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but I\'m afraid you\'ll have to work it out yourself."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(I ought to tell you which call caused the problem,"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "because the type variables listed above didn\'t get bound."))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but I can\'t determine which version should be called,"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to a polymorphic predicate,"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The body of the clause contains a call"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "io.state"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[7])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must have type"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: arguments of main/2"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[35])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(Sorry, polymorphic modes are not supported.)"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[5])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[39])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: unbound inst variable(s)."))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[42])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[43])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ", and"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the call to"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "a goal here"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "a higher-order call here"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning: unresolved polymorphism."))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The unbound type"))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[25])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__post_typecheck_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 65 */
  {
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_7[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_1[3])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_1[4])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__post_typecheck_scalar_common_5[0])),
    ((MR_Box) (check_hlds__post_typecheck__post_typecheck_do_finish_pred_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 41)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_4[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
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

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_5[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__post_typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__post_typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__post_typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&check_hlds__post_typecheck__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_data__type_ctor_info_constraint_id_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__post_typecheck__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_7[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[31])))
  },
};

static /* final */ const MR_Box check_hlds__post_typecheck_scalar_common_8[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
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
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__list__pti_list_1__plain_hlds__hlds_clauses__type_ctor_info_clause_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_data__type_ctor_info_constraint_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__post_typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__post_typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__post_typecheck__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__430__1_3_p_0(
  MR_Word check_hlds__post_typecheck__LambdaHeadVar__1_23,
  MR_Word check_hlds__post_typecheck__LambdaHeadVar__2_24,
  MR_Word * check_hlds__post_typecheck__LambdaHeadVar__3_25)
{
  {
    MR_bool check_hlds__post_typecheck__succeeded;
    MR_Word check_hlds__post_typecheck__V_26_26;

    {
      check_hlds__post_typecheck__V_26_26 = parse_tree__builtin_lib_types__void_type_0_f_0();
    }
    {
      mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__post_typecheck_scalar_common_1[3], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (check_hlds__post_typecheck__LambdaHeadVar__1_23)), ((MR_Box) (check_hlds__post_typecheck__V_26_26)), check_hlds__post_typecheck__LambdaHeadVar__2_24, check_hlds__post_typecheck__LambdaHeadVar__3_25);
    }
  }
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_2(
  void * check_hlds__post_typecheck__env_ptr_arg)
{
  {
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

    (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__ConstraintId_17 = ((MR_Word) (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__conv0_ConstraintId_17);
    {
      check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_1(check_hlds__post_typecheck__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_3(
  void * check_hlds__post_typecheck__env_ptr_arg)
{
  {
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_5(
  void * check_hlds__post_typecheck__env_ptr_arg)
{
  {
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

    (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__Clause_21 = ((MR_Word) (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__conv1_Clause_21);
    {
      check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_4(check_hlds__post_typecheck__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_6(
  void * check_hlds__post_typecheck__env_ptr_arg)
{
  {
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

    {
      MR_Word check_hlds__post_typecheck__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), *((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__LambdaHeadVar__1_25), (MR_Integer) 0)));

      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__GoalInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), *((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__LambdaHeadVar__1_25), (MR_Integer) 1)));
      {
        (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__GoalId_24 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__GoalInfo_23);
      }
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__V_35_35 = (MR_Integer) (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__GoalId_24;
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__V_36_36 = (MR_Integer) (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__ConstraintGoalId_19;
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__succeeded = ((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__V_35_35 == (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__V_36_36);
      if ((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__succeeded)
        {
          check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_3(check_hlds__post_typecheck__env_ptr);
        }
    }
  }
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_4(
  void * check_hlds__post_typecheck__env_ptr_arg)
{
  {
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

    {
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__V_26_26 = hlds__hlds_clauses__clause_body_1_f_0((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__Clause_21);
    }
    {
      hlds__goal_util__goal_contains_goal_2_p_0((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__V_26_26, (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__LambdaHeadVar__1_25, check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_6, check_hlds__post_typecheck__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_7(
  void * check_hlds__post_typecheck__env_ptr_arg)
{
  {
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, &(check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__conv1_Clause_21, (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__Clauses_10, check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_5, check_hlds__post_typecheck__env_ptr);
          }
        }
        (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_1(
  void * check_hlds__post_typecheck__env_ptr_arg)
{
  {
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

    {
      MR_Word check_hlds__post_typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__ConstraintId_17, (MR_Integer) 0)));
      MR_Integer check_hlds__post_typecheck__V_20_20;

      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__ConstraintGoalId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__ConstraintId_17, (MR_Integer) 1)));
      check_hlds__post_typecheck__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__ConstraintId_17, (MR_Integer) 2)));
      {
        check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_7(check_hlds__post_typecheck__env_ptr);
      }
      if ((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__succeeded)
        {
          ((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__cont)((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__cont_env_ptr);
        }
    }
  }
}

static void MR_CALL 
check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0(
  MR_Word check_hlds__post_typecheck__Clauses_10,
  MR_Word check_hlds__post_typecheck__ConstraintIds_14,
  MR_Word * check_hlds__post_typecheck__LambdaHeadVar__1_25,
  MR_Cont check_hlds__post_typecheck__cont,
  void * check_hlds__post_typecheck__cont_env_ptr)
{
  {
    struct check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0_s check_hlds__post_typecheck__env;

    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__Clauses_10 = check_hlds__post_typecheck__Clauses_10;
    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__LambdaHeadVar__1_25 = check_hlds__post_typecheck__LambdaHeadVar__1_25;
    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__cont = check_hlds__post_typecheck__cont;
    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__cont_env_ptr = check_hlds__post_typecheck__cont_env_ptr;
    {
      mercury__set__member_2_p_1((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, &(check_hlds__post_typecheck__env).check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_env_0__conv0_ConstraintId_17, check_hlds__post_typecheck__ConstraintIds_14, check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0_2, &check_hlds__post_typecheck__env);
    }
  }
}

static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_mode_9_p_0(
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
  MR_Word check_hlds__post_typecheck__PredId_2,
  MR_Integer check_hlds__post_typecheck__ProcId1_3,
  MR_Word check_hlds__post_typecheck__HeadVar__4_4,
  MR_Word * check_hlds__post_typecheck__HeadVar__5_5,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_6,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_7,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_8,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__post_typecheck__succeeded;

        if ((check_hlds__post_typecheck__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__post_typecheck__HeadVar__5_5 = (MR_Integer) 0;
            *check_hlds__post_typecheck__STATE_VARIABLE_Specs_9 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_8;
            *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_7 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_6;
          }
        else
          {
            MR_Integer check_hlds__post_typecheck__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word check_hlds__post_typecheck__ProcIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__4_4, (MR_Integer) 1)));

            {
              check_hlds__post_typecheck__succeeded = check_hlds__modecheck_call__modes_are_indistinguishable_4_p_0(check_hlds__post_typecheck__ProcId_22, check_hlds__post_typecheck__ProcId1_3, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_6, check_hlds__post_typecheck__ModuleInfo_1);
            }
            if (check_hlds__post_typecheck__succeeded)
              {
                MR_Word check_hlds__post_typecheck__Status_27;
                MR_Word check_hlds__post_typecheck__Globals_28;

                {
                  hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_6, &check_hlds__post_typecheck__Status_27);
                }
                {
                  hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__post_typecheck__ModuleInfo_1, &check_hlds__post_typecheck__Globals_28);
                }
                {
                  MR_Word check_hlds__post_typecheck__V_41_41;

                  {
                    check_hlds__post_typecheck__V_41_41 = hlds__status__pred_status_defined_in_this_module_1_f_0(check_hlds__post_typecheck__Status_27);
                  }
                  check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_41_41 == (MR_Integer) 1);
                }
                if (!(check_hlds__post_typecheck__succeeded))
                  {
                    {
                      MR_Word check_hlds__post_typecheck__V_39_39;
                      MR_Word check_hlds__post_typecheck__V_40_40;

                      {
                        check_hlds__post_typecheck__succeeded = libs__globals__lookup_bool_option_3_p_1(check_hlds__post_typecheck__Globals_28, (MR_Integer) 321, (MR_Integer) 0);
                      }
                      if (check_hlds__post_typecheck__succeeded)
                        {
                          check_hlds__post_typecheck__V_39_39 = (MR_Integer) 326;
                          check_hlds__post_typecheck__V_40_40 = (MR_Integer) 0;
                          {
                            check_hlds__post_typecheck__succeeded = libs__globals__lookup_bool_option_3_p_1(check_hlds__post_typecheck__Globals_28, check_hlds__post_typecheck__V_39_39, check_hlds__post_typecheck__V_40_40);
                          }
                        }
                    }
                    if (!(check_hlds__post_typecheck__succeeded))
                      {
                        MR_Word check_hlds__post_typecheck__OpMode_29;
                        MR_Word check_hlds__post_typecheck__V_35_35;
                        MR_Word check_hlds__post_typecheck__V_36_36;

                        {
                          libs__globals__get_op_mode_2_p_0(check_hlds__post_typecheck__Globals_28, &check_hlds__post_typecheck__OpMode_29);
                        }
                        check_hlds__post_typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__post_typecheck__OpMode_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__OpMode_29, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (check_hlds__post_typecheck__succeeded)
                          {
                            check_hlds__post_typecheck__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__OpMode_29, (MR_Integer) 1)));
                            check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__V_35_35)) == (MR_mktag((MR_Integer) 1)));
                            if (check_hlds__post_typecheck__succeeded)
                              {
                                check_hlds__post_typecheck__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_35_35, (MR_Integer) 0)));
                                check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                          }
                      }
                  }
                if (check_hlds__post_typecheck__succeeded)
                  {
                    MR_Word check_hlds__post_typecheck__Spec_30;

                    {
                      check_hlds__post_typecheck__Spec_30 = check_hlds__mode_errors__report_indistinguishable_modes_error_5_f_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__ProcId1_3, check_hlds__post_typecheck__ProcId_22, check_hlds__post_typecheck__PredId_2, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_6);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_9 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__Spec_30));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_8));
                    }
                  }
                else
                  *check_hlds__post_typecheck__STATE_VARIABLE_Specs_9 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_8;
                {
                  hlds__hlds_pred__pred_info_remove_procid_3_p_0(check_hlds__post_typecheck__ProcId1_3, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_6, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_7);
                }
                *check_hlds__post_typecheck__HeadVar__5_5 = (MR_Integer) 1;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__post_typecheck__HeadVar__4__tmp_copy_4 = check_hlds__post_typecheck__ProcIds_23;

                  check_hlds__post_typecheck__HeadVar__4_4 = check_hlds__post_typecheck__HeadVar__4__tmp_copy_4;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_p_0(
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
  MR_Word check_hlds__post_typecheck__PredId_2,
  MR_Word check_hlds__post_typecheck__HeadVar__3_3,
  MR_Word check_hlds__post_typecheck__PrevProcIds_4,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_5,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_6,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_7,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__post_typecheck__succeeded;

        if ((check_hlds__post_typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__post_typecheck__STATE_VARIABLE_Specs_8 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_7;
            *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_6 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_5;
          }
        else
          {
            MR_Integer check_hlds__post_typecheck__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word check_hlds__post_typecheck__ProcIds_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word check_hlds__post_typecheck__Removed_25;
            MR_Word check_hlds__post_typecheck__PrevProcIds1_26;
            MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_31_31;
            MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_32_32;

            {
              check_hlds__post_typecheck__check_for_indistinguishable_mode_9_p_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__PredId_2, check_hlds__post_typecheck__ProcId_20, check_hlds__post_typecheck__PrevProcIds_4, &check_hlds__post_typecheck__Removed_25, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_5, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_31_31, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_7, &check_hlds__post_typecheck__STATE_VARIABLE_Specs_32_32);
            }
            switch (check_hlds__post_typecheck__Removed_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  check_hlds__post_typecheck__PrevProcIds1_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__PrevProcIds1_26, 0) = ((MR_Box) (check_hlds__post_typecheck__ProcId_20));
                  MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__PrevProcIds1_26, 1) = ((MR_Box) (check_hlds__post_typecheck__PrevProcIds_4));
                }
                break;
              case (MR_Integer) 1:
                check_hlds__post_typecheck__PrevProcIds1_26 = check_hlds__post_typecheck__PrevProcIds_4;
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__post_typecheck__HeadVar__3__tmp_copy_3 = check_hlds__post_typecheck__ProcIds_21;
              MR_Word check_hlds__post_typecheck__PrevProcIds__tmp_copy_4 = check_hlds__post_typecheck__PrevProcIds1_26;
              MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0__tmp_copy_5 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_31_31;
              MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0__tmp_copy_7 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_32_32;

              check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_7 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0__tmp_copy_7;
              check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_5 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0__tmp_copy_5;
              check_hlds__post_typecheck__PrevProcIds_4 = check_hlds__post_typecheck__PrevProcIds__tmp_copy_4;
              check_hlds__post_typecheck__HeadVar__3_3 = check_hlds__post_typecheck__HeadVar__3__tmp_copy_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__post_typecheck__check_for_indistinguishable_modes_6_p_0(
  MR_Word check_hlds__post_typecheck__ModuleInfo_7,
  MR_Word check_hlds__post_typecheck__PredId_8,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_14,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_15,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_16,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_17)
{
  {
    MR_bool check_hlds__post_typecheck__succeeded;
    MR_Word check_hlds__post_typecheck__Origin_11;
    MR_Word check_hlds__post_typecheck__V_18_18;
    MR_Word check_hlds__post_typecheck__V_12_12;

    {
      hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_14, &check_hlds__post_typecheck__Origin_11);
    }
    check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__Origin_11)) == (MR_mktag((MR_Integer) 0)));
    if (check_hlds__post_typecheck__succeeded)
      {
        check_hlds__post_typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Origin_11, (MR_Integer) 0)));
        check_hlds__post_typecheck__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Origin_11, (MR_Integer) 1)));
        check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_18_18 == (MR_Integer) 0);
      }
    if (check_hlds__post_typecheck__succeeded)
      {
        *check_hlds__post_typecheck__STATE_VARIABLE_Specs_17 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_16;
        *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_15 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_14;
      }
    else
      {
        MR_Word check_hlds__post_typecheck__ProcIds_13;

        {
          check_hlds__post_typecheck__ProcIds_13 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_14);
        }
        {
          check_hlds__post_typecheck__check_for_indistinguishable_modes_in_procs_8_p_0(check_hlds__post_typecheck__ModuleInfo_7, check_hlds__post_typecheck__PredId_8, check_hlds__post_typecheck__ProcIds_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_14, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_15, check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_16, check_hlds__post_typecheck__STATE_VARIABLE_Specs_17);
        }
      }
  }
}

static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0(
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
  MR_Word check_hlds__post_typecheck__PredId_9,
  MR_Integer check_hlds__post_typecheck__ProcId_10,
  MR_Word check_hlds__post_typecheck__Procs0_11,
  MR_Word * check_hlds__post_typecheck__Procs_12,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_20,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_21)
{
  {
    MR_bool check_hlds__post_typecheck__succeeded;
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_60_60 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_61_61;
    MR_Word check_hlds__post_typecheck__ProcInfo_14;
    MR_Word check_hlds__post_typecheck__Context_15;
    MR_Word check_hlds__post_typecheck__Pieces_16;
    MR_Word check_hlds__post_typecheck__Msg_17;
    MR_Word check_hlds__post_typecheck__Spec_18;
    MR_Word check_hlds__post_typecheck__V_32_32;
    MR_Word check_hlds__post_typecheck__V_33_33;
    MR_Word check_hlds__post_typecheck__V_51_51;
    MR_Word check_hlds__post_typecheck__V_52_52;
    MR_Word check_hlds__post_typecheck__V_56_56;
    MR_Box check_hlds__post_typecheck__conv0_ProcInfo_14;
    MR_Word check_hlds__post_typecheck__V_19_19;
    MR_Box check_hlds__post_typecheck__conv1_V_19_19;

    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__post_typecheck__TypeCtorInfo_60_60, check_hlds__post_typecheck__Procs0_11, check_hlds__post_typecheck__ProcId_10, &check_hlds__post_typecheck__conv0_ProcInfo_14);
    }
    check_hlds__post_typecheck__ProcInfo_14 = ((MR_Word) check_hlds__post_typecheck__conv0_ProcInfo_14);
    {
      hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__post_typecheck__ProcInfo_14, &check_hlds__post_typecheck__Context_15);
    }
    check_hlds__post_typecheck__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      check_hlds__post_typecheck__V_33_33 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__post_typecheck__ModuleInfo_8, (MR_Integer) 1, check_hlds__post_typecheck__PredId_9);
    }
    {
      check_hlds__post_typecheck__V_32_32 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_61_61, check_hlds__post_typecheck__V_33_33, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[45]));
    }
    {
      check_hlds__post_typecheck__Pieces_16 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_61_61, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[37]), check_hlds__post_typecheck__V_32_32);
    }
    {
      check_hlds__post_typecheck__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_52_52, 0) = ((MR_Box) (check_hlds__post_typecheck__Pieces_16));
    }
    {
      check_hlds__post_typecheck__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_51_51, 0) = ((MR_Box) (check_hlds__post_typecheck__V_52_52));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__post_typecheck__Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_17, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_15));
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_17, 1) = ((MR_Box) (check_hlds__post_typecheck__V_51_51));
    }
    {
      check_hlds__post_typecheck__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_56_56, 0) = ((MR_Box) (check_hlds__post_typecheck__Msg_17));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__post_typecheck__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_18, 2) = ((MR_Box) (check_hlds__post_typecheck__V_56_56));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_21 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__Spec_18));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_20));
    }
    {
      mercury__map__det_remove_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__post_typecheck__TypeCtorInfo_60_60, ((MR_Box) (check_hlds__post_typecheck__ProcId_10)), &check_hlds__post_typecheck__conv1_V_19_19, check_hlds__post_typecheck__Procs0_11, check_hlds__post_typecheck__Procs_12);
    }
    check_hlds__post_typecheck__V_19_19 = ((MR_Word) check_hlds__post_typecheck__conv1_V_19_19);
  }
}

static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0_1(
  MR_Box check_hlds__post_typecheck__closure_arg,
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3,
  MR_Box check_hlds__post_typecheck__wrapper_arg_4,
  MR_Box * check_hlds__post_typecheck__wrapper_arg_5)
{
  {
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
    MR_Word check_hlds__post_typecheck__conv1_Procs_12;
    MR_Word check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_21;

    {
      check_hlds__post_typecheck__report_unbound_inst_var_error_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 4))), ((MR_Integer) check_hlds__post_typecheck__wrapper_arg_1), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_2), &check_hlds__post_typecheck__conv1_Procs_12, ((MR_Word) check_hlds__post_typecheck__wrapper_arg_4), &check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_21);
    }
    *check_hlds__post_typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__post_typecheck__conv1_Procs_12));
    *check_hlds__post_typecheck__wrapper_arg_5 = ((MR_Box) (check_hlds__post_typecheck__conv0_STATE_VARIABLE_Specs_21));
  }
}

static void MR_CALL 
check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0(
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
  MR_Word check_hlds__post_typecheck__PredId_9,
  MR_Word check_hlds__post_typecheck__ErrorProcIds_10,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_17,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_18,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_20)
{
  {
    MR_bool check_hlds__post_typecheck__succeeded;

    if ((check_hlds__post_typecheck__ErrorProcIds_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_18 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_17;
        *check_hlds__post_typecheck__STATE_VARIABLE_Specs_20 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19;
      }
    else
      {
        MR_Word check_hlds__post_typecheck__ProcTable0_15;
        MR_Word check_hlds__post_typecheck__ProcTable_16;
        MR_Word check_hlds__post_typecheck__V_21_21;
        MR_Box check_hlds__post_typecheck__conv3_ProcTable_16;
        MR_Box check_hlds__post_typecheck__conv2_STATE_VARIABLE_Specs_20;

        {
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_17, &check_hlds__post_typecheck__ProcTable0_15);
        }
        {
          check_hlds__post_typecheck__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_21_21, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_21_21, 1) = ((MR_Box) (check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0_1));
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_21_21, 3) = ((MR_Box) (check_hlds__post_typecheck__ModuleInfo_8));
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_21_21, 4) = ((MR_Box) (check_hlds__post_typecheck__PredId_9));
        }
        {
          mercury__list__foldl2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__post_typecheck_scalar_common_2[2], (MR_Word) &check_hlds__post_typecheck_scalar_common_1[0], check_hlds__post_typecheck__V_21_21, check_hlds__post_typecheck__ErrorProcIds_10, ((MR_Box) (check_hlds__post_typecheck__ProcTable0_15)), &check_hlds__post_typecheck__conv3_ProcTable_16, ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_19)), &check_hlds__post_typecheck__conv2_STATE_VARIABLE_Specs_20);
        }
        check_hlds__post_typecheck__ProcTable_16 = ((MR_Word) check_hlds__post_typecheck__conv3_ProcTable_16);
        *check_hlds__post_typecheck__STATE_VARIABLE_Specs_20 = ((MR_Word) check_hlds__post_typecheck__conv2_STATE_VARIABLE_Specs_20);
        {
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__post_typecheck__ProcTable_16, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_17, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_18);
        }
      }
  }
}

static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_1(
  void * check_hlds__post_typecheck__env_ptr_arg)
{
  {
    struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_2(
  void * check_hlds__post_typecheck__env_ptr_arg)
{
  {
    struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word check_hlds__post_typecheck___InstVar_25;

          {
            check_hlds__inst_match__mode_list_contains_inst_var_2_p_0((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ArgModes_24, &check_hlds__post_typecheck___InstVar_25, check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_1, check_hlds__post_typecheck__env_ptr);
          }
        }
        (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0(
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
  MR_Word check_hlds__post_typecheck__HeadVar__2_2,
  MR_Word check_hlds__post_typecheck__ArgTypes_3,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0_4,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_5,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Procs_0_6,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Procs_7)
{
  {
    struct check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0_s check_hlds__post_typecheck__env;

    while (MR_TRUE)
      {
        /* tailcall optimized into a loop */
        if ((check_hlds__post_typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__post_typecheck__STATE_VARIABLE_Procs_7 = check_hlds__post_typecheck__STATE_VARIABLE_Procs_0_6;
            *check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_5 = check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0_4;
          }
        else
          {
            MR_Word check_hlds__post_typecheck__TypeCtorInfo_36_36 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
            MR_Integer check_hlds__post_typecheck__ProcId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__post_typecheck__ProcIds_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__post_typecheck__ProcInfo0_22;
            MR_Word check_hlds__post_typecheck__ArgModes0_23;
            MR_Word check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_31_31;
            MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Procs_32_32;
            MR_Box check_hlds__post_typecheck__conv0_ProcInfo0_22;

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__post_typecheck__TypeCtorInfo_36_36, check_hlds__post_typecheck__STATE_VARIABLE_Procs_0_6, check_hlds__post_typecheck__ProcId_17, &check_hlds__post_typecheck__conv0_ProcInfo0_22);
            }
            check_hlds__post_typecheck__ProcInfo0_22 = ((MR_Word) check_hlds__post_typecheck__conv0_ProcInfo0_22);
            {
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__post_typecheck__ProcInfo0_22, &check_hlds__post_typecheck__ArgModes0_23);
            }
            {
              check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__ArgTypes_3, check_hlds__post_typecheck__ArgModes0_23, &(check_hlds__post_typecheck__env).check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ArgModes_24);
            }
            {
              check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_2(&check_hlds__post_typecheck__env);
            }
            if ((check_hlds__post_typecheck__env).check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__succeeded)
              {
                {
                  check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_31_31, 0) = ((MR_Box) (check_hlds__post_typecheck__ProcId_17));
                  MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_31_31, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0_4));
                }
                check_hlds__post_typecheck__STATE_VARIABLE_Procs_32_32 = check_hlds__post_typecheck__STATE_VARIABLE_Procs_0_6;
              }
            else
              {
                MR_Word check_hlds__post_typecheck__ProcInfo_26;

                {
                  hlds__hlds_pred__proc_info_set_argmodes_3_p_0((check_hlds__post_typecheck__env).check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0_env_0__ArgModes_24, check_hlds__post_typecheck__ProcInfo0_22, &check_hlds__post_typecheck__ProcInfo_26);
                }
                {
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__post_typecheck__TypeCtorInfo_36_36, check_hlds__post_typecheck__ProcId_17, ((MR_Box) (check_hlds__post_typecheck__ProcInfo_26)), check_hlds__post_typecheck__STATE_VARIABLE_Procs_0_6, &check_hlds__post_typecheck__STATE_VARIABLE_Procs_32_32);
                }
                check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_31_31 = check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0_4;
              }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__post_typecheck__HeadVar__2__tmp_copy_2 = check_hlds__post_typecheck__ProcIds_18;
              MR_Word check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0__tmp_copy_4 = check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_31_31;
              MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Procs_0__tmp_copy_6 = check_hlds__post_typecheck__STATE_VARIABLE_Procs_32_32;

              check_hlds__post_typecheck__STATE_VARIABLE_Procs_0_6 = check_hlds__post_typecheck__STATE_VARIABLE_Procs_0__tmp_copy_6;
              check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0_4 = check_hlds__post_typecheck__STATE_VARIABLE_RevErrorProcIds_0__tmp_copy_4;
              check_hlds__post_typecheck__HeadVar__2_2 = check_hlds__post_typecheck__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
        break;
      }
  }
}

static void MR_CALL 
check_hlds__post_typecheck__check_type_of_main_3_p_0(
  MR_Word check_hlds__post_typecheck__PredInfo_4,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_13,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_14)
{
  {
    MR_bool check_hlds__post_typecheck__succeeded;
    MR_String check_hlds__post_typecheck__V_15_15;
    MR_Integer check_hlds__post_typecheck__V_16_16;

    {
      check_hlds__post_typecheck__V_15_15 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__post_typecheck__PredInfo_4);
    }
    check_hlds__post_typecheck__succeeded = (strcmp(check_hlds__post_typecheck__V_15_15, (MR_String) "main") == 0);
    if (check_hlds__post_typecheck__succeeded)
      {
        {
          check_hlds__post_typecheck__V_16_16 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__post_typecheck__PredInfo_4);
        }
        check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_16_16 == (MR_Integer) 2);
        if (check_hlds__post_typecheck__succeeded)
          {
            check_hlds__post_typecheck__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(check_hlds__post_typecheck__PredInfo_4);
          }
      }
    if (check_hlds__post_typecheck__succeeded)
      {
        MR_Word check_hlds__post_typecheck__ArgTypes_6;
        MR_Word check_hlds__post_typecheck__Arg1_7;
        MR_Word check_hlds__post_typecheck__Arg2_8;
        MR_Word check_hlds__post_typecheck__V_17_17;
        MR_Word check_hlds__post_typecheck__V_18_18;

        {
          hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__post_typecheck__PredInfo_4, &check_hlds__post_typecheck__ArgTypes_6);
        }
        check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__ArgTypes_6)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__post_typecheck__succeeded)
          {
            check_hlds__post_typecheck__Arg1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ArgTypes_6, (MR_Integer) 0)));
            check_hlds__post_typecheck__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ArgTypes_6, (MR_Integer) 1)));
            check_hlds__post_typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__post_typecheck__V_17_17)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__post_typecheck__succeeded)
              {
                check_hlds__post_typecheck__Arg2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_17_17, (MR_Integer) 0)));
                check_hlds__post_typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_17_17, (MR_Integer) 1)));
                check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (check_hlds__post_typecheck__succeeded)
                  {
                    {
                      check_hlds__post_typecheck__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(check_hlds__post_typecheck__Arg1_7);
                    }
                    if (check_hlds__post_typecheck__succeeded)
                      {
                        check_hlds__post_typecheck__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(check_hlds__post_typecheck__Arg2_8);
                      }
                  }
              }
          }
        if (check_hlds__post_typecheck__succeeded)
          *check_hlds__post_typecheck__STATE_VARIABLE_Specs_14 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_13;
        else
          {
            MR_Word check_hlds__post_typecheck__Context_9;
            MR_Word check_hlds__post_typecheck__Msg_11;
            MR_Word check_hlds__post_typecheck__Spec_12;
            MR_Word check_hlds__post_typecheck__V_38_38;

            {
              hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__post_typecheck__PredInfo_4, &check_hlds__post_typecheck__Context_9);
            }
            {
              check_hlds__post_typecheck__Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_11, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_9));
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[65])));
            }
            {
              check_hlds__post_typecheck__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_38_38, 0) = ((MR_Box) (check_hlds__post_typecheck__Msg_11));
              MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              check_hlds__post_typecheck__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
              MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_12, 2) = ((MR_Box) (check_hlds__post_typecheck__V_38_38));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__post_typecheck__STATE_VARIABLE_Specs_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__Spec_12));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_13));
            }
          }
      }
    else
      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_14 = check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_13;
  }
}

static MR_Word MR_CALL 
check_hlds__post_typecheck__var_and_type_to_pieces_3_f_0(
  MR_Word check_hlds__post_typecheck__VarSet_5,
  MR_Word check_hlds__post_typecheck__TVarSet_6,
  MR_Word check_hlds__post_typecheck__HeadVar__3_3)
{
  {
    MR_bool check_hlds__post_typecheck__succeeded;
    MR_Word check_hlds__post_typecheck__HeadVar__4_4;
    MR_Word check_hlds__post_typecheck__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word check_hlds__post_typecheck__Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word check_hlds__post_typecheck__V_9_9;
    MR_String check_hlds__post_typecheck__V_10_10;
    MR_Word check_hlds__post_typecheck__V_12_12;
    MR_Word check_hlds__post_typecheck__V_15_15;
    MR_Word check_hlds__post_typecheck__V_16_16;
    MR_String check_hlds__post_typecheck__V_17_17;

    {
      check_hlds__post_typecheck__V_10_10 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__post_typecheck__VarSet_5, (MR_Integer) 0, check_hlds__post_typecheck__Var_7);
    }
    {
      check_hlds__post_typecheck__V_9_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_9_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_9_9, 1) = ((MR_Box) (check_hlds__post_typecheck__V_10_10));
    }
    {
      check_hlds__post_typecheck__V_17_17 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(check_hlds__post_typecheck__TVarSet_6, (MR_Integer) 0, check_hlds__post_typecheck__Type_8);
    }
    {
      check_hlds__post_typecheck__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_16_16, 1) = ((MR_Box) (check_hlds__post_typecheck__V_17_17));
    }
    {
      check_hlds__post_typecheck__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_15_15, 0) = ((MR_Box) (check_hlds__post_typecheck__V_16_16));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[5])));
    }
    {
      check_hlds__post_typecheck__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[48])));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_12_12, 1) = ((MR_Box) (check_hlds__post_typecheck__V_15_15));
    }
    {
      check_hlds__post_typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__post_typecheck__V_9_9));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__4_4, 1) = ((MR_Box) (check_hlds__post_typecheck__V_12_12));
    }
    return check_hlds__post_typecheck__HeadVar__4_4;
  }
}

static MR_Box MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0_1(
  MR_Box check_hlds__post_typecheck__closure_arg,
  MR_Box check_hlds__post_typecheck__wrapper_arg_1)
{
  {
    MR_Box check_hlds__post_typecheck__wrapper_arg_2;
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
    MR_Word check_hlds__post_typecheck__conv0_HeadVar__4_4;

    {
      check_hlds__post_typecheck__conv0_HeadVar__4_4 = check_hlds__post_typecheck__var_and_type_to_pieces_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_1));
    }
    check_hlds__post_typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__post_typecheck__conv0_HeadVar__4_4));
    return check_hlds__post_typecheck__wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0(
  MR_Word check_hlds__post_typecheck__ModuleInfo_8,
  MR_Word check_hlds__post_typecheck__PredId_9,
  MR_Word check_hlds__post_typecheck__PredInfo_10,
  MR_Word check_hlds__post_typecheck__VarSet_11,
  MR_Word check_hlds__post_typecheck__Errs_12,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_24,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_25)
{
  {
    MR_bool check_hlds__post_typecheck__succeeded;
    MR_Word check_hlds__post_typecheck__TypeInfo_117_117;
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_121_121;
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_122_122;
    MR_Word check_hlds__post_typecheck__TypeVarSet_14;
    MR_Word check_hlds__post_typecheck__Context_15;
    MR_Word check_hlds__post_typecheck__PredIdPieces_16;
    MR_Word check_hlds__post_typecheck__VarTypePieceLists_17;
    MR_Word check_hlds__post_typecheck__VarTypePieces_18;
    MR_Word check_hlds__post_typecheck__MainPieces_19;
    MR_Word check_hlds__post_typecheck__Msg_21;
    MR_Word check_hlds__post_typecheck__Spec_23;
    MR_Word check_hlds__post_typecheck__V_27_27;
    MR_Word check_hlds__post_typecheck__V_32_32;
    MR_Word check_hlds__post_typecheck__V_33_33;
    MR_Word check_hlds__post_typecheck__V_34_34;
    MR_Word check_hlds__post_typecheck__V_37_37;
    MR_Word check_hlds__post_typecheck__V_39_39;
    MR_Word check_hlds__post_typecheck__V_42_42;
    MR_Word check_hlds__post_typecheck__V_44_44;
    MR_Word check_hlds__post_typecheck__V_45_45;
    MR_String check_hlds__post_typecheck__V_46_46;
    MR_Word check_hlds__post_typecheck__V_53_53;
    MR_Word check_hlds__post_typecheck__V_54_54;
    MR_Word check_hlds__post_typecheck__V_57_57;
    MR_Word check_hlds__post_typecheck__V_60_60;
    MR_Word check_hlds__post_typecheck__V_61_61;
    MR_String check_hlds__post_typecheck__V_62_62;
    MR_Word check_hlds__post_typecheck__V_98_98;
    MR_Word check_hlds__post_typecheck__V_99_99;
    MR_Word check_hlds__post_typecheck__V_102_102;
    MR_Word check_hlds__post_typecheck__V_103_103;
    MR_Word check_hlds__post_typecheck__V_114_114;
    MR_Box check_hlds__post_typecheck__conv1_V_46_46;
    MR_Box check_hlds__post_typecheck__conv2_V_62_62;

    {
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__post_typecheck__PredInfo_10, &check_hlds__post_typecheck__TypeVarSet_14);
    }
    {
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__post_typecheck__PredInfo_10, &check_hlds__post_typecheck__Context_15);
    }
    {
      check_hlds__post_typecheck__PredIdPieces_16 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__post_typecheck__ModuleInfo_8, (MR_Integer) 1, check_hlds__post_typecheck__PredId_9);
    }
    check_hlds__post_typecheck__TypeInfo_117_117 = (MR_Word) &check_hlds__post_typecheck_scalar_common_2[1];
    {
      check_hlds__post_typecheck__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_27_27, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_27_27, 1) = ((MR_Box) (check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_27_27, 3) = ((MR_Box) (check_hlds__post_typecheck__VarSet_11));
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_27_27, 4) = ((MR_Box) (check_hlds__post_typecheck__TypeVarSet_14));
    }
    {
      check_hlds__post_typecheck__VarTypePieceLists_17 = mercury__list__map_2_f_0(check_hlds__post_typecheck__TypeInfo_117_117, (MR_Word) &check_hlds__post_typecheck_scalar_common_1[1], check_hlds__post_typecheck__V_27_27, check_hlds__post_typecheck__Errs_12);
    }
    check_hlds__post_typecheck__TypeCtorInfo_121_121 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      mercury__list__condense_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_121_121, check_hlds__post_typecheck__VarTypePieceLists_17, &check_hlds__post_typecheck__VarTypePieces_18);
    }
    check_hlds__post_typecheck__TypeCtorInfo_122_122 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      check_hlds__post_typecheck__conv1_V_46_46 = parse_tree__error_util__choose_number_3_f_0(check_hlds__post_typecheck__TypeInfo_117_117, check_hlds__post_typecheck__TypeCtorInfo_122_122, check_hlds__post_typecheck__Errs_12, ((MR_Box) ((MR_String) "The variable with an unbound type was:")), ((MR_Box) ((MR_String) "The variables with unbound types were:")));
    }
    check_hlds__post_typecheck__V_46_46 = ((MR_String) check_hlds__post_typecheck__conv1_V_46_46);
    {
      check_hlds__post_typecheck__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_45_45, 1) = ((MR_Box) (check_hlds__post_typecheck__V_46_46));
    }
    {
      check_hlds__post_typecheck__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_44_44, 0) = ((MR_Box) (check_hlds__post_typecheck__V_45_45));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[50])));
    }
    {
      check_hlds__post_typecheck__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_42_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_42_42, 1) = ((MR_Box) (check_hlds__post_typecheck__V_44_44));
    }
    {
      check_hlds__post_typecheck__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_39_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[61])));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_39_39, 1) = ((MR_Box) (check_hlds__post_typecheck__V_42_42));
    }
    {
      check_hlds__post_typecheck__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_37_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_37_37, 1) = ((MR_Box) (check_hlds__post_typecheck__V_39_39));
    }
    {
      check_hlds__post_typecheck__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[48])));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_34_34, 1) = ((MR_Box) (check_hlds__post_typecheck__V_37_37));
    }
    {
      check_hlds__post_typecheck__conv2_V_62_62 = parse_tree__error_util__choose_number_3_f_0(check_hlds__post_typecheck__TypeInfo_117_117, check_hlds__post_typecheck__TypeCtorInfo_122_122, check_hlds__post_typecheck__Errs_12, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
    }
    check_hlds__post_typecheck__V_62_62 = ((MR_String) check_hlds__post_typecheck__conv2_V_62_62);
    {
      check_hlds__post_typecheck__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_61_61, 1) = ((MR_Box) (check_hlds__post_typecheck__V_62_62));
    }
    {
      check_hlds__post_typecheck__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_60_60, 0) = ((MR_Box) (check_hlds__post_typecheck__V_61_61));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[11])));
    }
    {
      check_hlds__post_typecheck__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[62])));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_57_57, 1) = ((MR_Box) (check_hlds__post_typecheck__V_60_60));
    }
    {
      check_hlds__post_typecheck__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[51])));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_54_54, 1) = ((MR_Box) (check_hlds__post_typecheck__V_57_57));
    }
    {
      check_hlds__post_typecheck__V_53_53 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_121_121, check_hlds__post_typecheck__VarTypePieces_18, check_hlds__post_typecheck__V_54_54);
    }
    {
      check_hlds__post_typecheck__V_33_33 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_121_121, check_hlds__post_typecheck__V_34_34, check_hlds__post_typecheck__V_53_53);
    }
    {
      check_hlds__post_typecheck__V_32_32 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_121_121, check_hlds__post_typecheck__PredIdPieces_16, check_hlds__post_typecheck__V_33_33);
    }
    {
      check_hlds__post_typecheck__MainPieces_19 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_121_121, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[47]), check_hlds__post_typecheck__V_32_32);
    }
    {
      check_hlds__post_typecheck__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_103_103, 0) = ((MR_Box) (check_hlds__post_typecheck__MainPieces_19));
    }
    {
      check_hlds__post_typecheck__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_102_102, 0) = ((MR_Box) (check_hlds__post_typecheck__V_103_103));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[64])));
    }
    {
      check_hlds__post_typecheck__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_99_99, 0) = ((MR_Box) (((MR_Integer) 41 | (((MR_Integer) 1 << (MR_Integer) 10)))));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_99_99, 1) = ((MR_Box) (check_hlds__post_typecheck__V_102_102));
    }
    {
      check_hlds__post_typecheck__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_98_98, 0) = ((MR_Box) (check_hlds__post_typecheck__V_99_99));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__post_typecheck__Msg_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_21, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_15));
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_21, 1) = ((MR_Box) (check_hlds__post_typecheck__V_98_98));
    }
    {
      check_hlds__post_typecheck__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_114_114, 0) = ((MR_Box) (check_hlds__post_typecheck__Msg_21));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__post_typecheck__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_3[0])));
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_23, 2) = ((MR_Box) (check_hlds__post_typecheck__V_114_114));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_25 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__Spec_23));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_24));
    }
  }
}

static void MR_CALL 
check_hlds__post_typecheck__find_unresolved_types_in_vars_inner_8_p_0(
  MR_Word check_hlds__post_typecheck__HeadVar__1_1,
  MR_Word check_hlds__post_typecheck__ExternalTypeParams_2,
  MR_Integer check_hlds__post_typecheck__VarsToDo_3,
  MR_Word * check_hlds__post_typecheck__HeadVar__4_4,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_5,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_6,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0_7,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__post_typecheck__succeeded;

        if ((check_hlds__post_typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__post_typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_8 = check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0_7;
            *check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_6 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_5;
          }
        else
          {
            MR_Word check_hlds__post_typecheck__Type_18;
            MR_Word check_hlds__post_typecheck__VarTypes_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__post_typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__post_typecheck__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_32_32, (MR_Integer) 0)));

            check_hlds__post_typecheck__Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_32_32, (MR_Integer) 1)));
            check_hlds__post_typecheck__succeeded = (check_hlds__post_typecheck__VarsToDo_3 < (MR_Integer) 0);
            if (check_hlds__post_typecheck__succeeded)
              {
                *check_hlds__post_typecheck__HeadVar__4_4 = check_hlds__post_typecheck__HeadVar__1_1;
                *check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_8 = check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0_7;
                *check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_6 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_5;
              }
            else
              {
                MR_Word check_hlds__post_typecheck__TypeInfo_42_42;
                MR_Word check_hlds__post_typecheck__TVars_25;
                MR_Word check_hlds__post_typecheck__TVarsSet0_26;
                MR_Word check_hlds__post_typecheck__TVarsSet1_27;
                MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_35_35;
                MR_Word check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_37_37;
                MR_Integer check_hlds__post_typecheck__V_38_38;

                {
                  parse_tree__prog_type__type_vars_2_p_0(check_hlds__post_typecheck__Type_18, &check_hlds__post_typecheck__TVars_25);
                }
                check_hlds__post_typecheck__TypeInfo_42_42 = (MR_Word) &check_hlds__post_typecheck_scalar_common_1[3];
                {
                  mercury__set__list_to_set_2_p_0(check_hlds__post_typecheck__TypeInfo_42_42, check_hlds__post_typecheck__TVars_25, &check_hlds__post_typecheck__TVarsSet0_26);
                }
                {
                  mercury__set__delete_list_3_p_0(check_hlds__post_typecheck__TypeInfo_42_42, check_hlds__post_typecheck__ExternalTypeParams_2, check_hlds__post_typecheck__TVarsSet0_26, &check_hlds__post_typecheck__TVarsSet1_27);
                }
                {
                  check_hlds__post_typecheck__succeeded = mercury__set__is_empty_1_p_0(check_hlds__post_typecheck__TypeInfo_42_42, check_hlds__post_typecheck__TVarsSet1_27);
                }
                if (check_hlds__post_typecheck__succeeded)
                  {
                    check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_37_37 = check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0_7;
                    check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_35_35 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_5;
                  }
                else
                  {
                    {
                      check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_35_35, 0) = ((MR_Box) (check_hlds__post_typecheck__V_32_32));
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_35_35, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_5));
                    }
                    {
                      mercury__set__union_3_p_0(check_hlds__post_typecheck__TypeInfo_42_42, check_hlds__post_typecheck__TVarsSet1_27, check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0_7, &check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_37_37);
                    }
                  }
                check_hlds__post_typecheck__V_38_38 = (check_hlds__post_typecheck__VarsToDo_3 - (MR_Integer) 1);
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__post_typecheck__HeadVar__1__tmp_copy_1 = check_hlds__post_typecheck__VarTypes_19;
                  MR_Integer check_hlds__post_typecheck__VarsToDo__tmp_copy_3 = check_hlds__post_typecheck__V_38_38;
                  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0__tmp_copy_5 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_35_35;
                  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0__tmp_copy_7 = check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_37_37;

                  check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0_7 = check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0__tmp_copy_7;
                  check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_5 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0__tmp_copy_5;
                  check_hlds__post_typecheck__VarsToDo_3 = check_hlds__post_typecheck__VarsToDo__tmp_copy_3;
                  check_hlds__post_typecheck__HeadVar__1_1 = check_hlds__post_typecheck__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__post_typecheck__find_unresolved_types_in_vars_6_p_0(
  MR_Word check_hlds__post_typecheck__VarTypes_7,
  MR_Word check_hlds__post_typecheck__ExternalTypeParams_8,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_14,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_15,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0_16,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__post_typecheck__succeeded;
        MR_Word check_hlds__post_typecheck__LeftOverVarTypes_11;
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_19_19;
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_20_20;

        {
          check_hlds__post_typecheck__find_unresolved_types_in_vars_inner_8_p_0(check_hlds__post_typecheck__VarTypes_7, check_hlds__post_typecheck__ExternalTypeParams_8, (MR_Integer) 1000, &check_hlds__post_typecheck__LeftOverVarTypes_11, check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_14, &check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_19_19, check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0_16, &check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_20_20);
        }
        if ((check_hlds__post_typecheck__LeftOverVarTypes_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_15 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_19_19;
            *check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_17 = check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_20_20;
          }
        else
          {
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__post_typecheck__VarTypes__tmp_copy_7 = check_hlds__post_typecheck__LeftOverVarTypes_11;
              MR_Word check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0__tmp_copy_14 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_19_19;
              MR_Word check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0__tmp_copy_16 = check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_20_20;

              check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0_16 = check_hlds__post_typecheck__STATE_VARIABLE_BindToVoidTVars_0__tmp_copy_16;
              check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0_14 = check_hlds__post_typecheck__STATE_VARIABLE_UnresolvedVarsTypes_0__tmp_copy_14;
              check_hlds__post_typecheck__VarTypes_7 = check_hlds__post_typecheck__VarTypes__tmp_copy_7;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
check_hlds__post_typecheck__describe_constrained_goal_2_f_0(
  MR_Word check_hlds__post_typecheck__ModuleInfo_4,
  MR_Word check_hlds__post_typecheck__Goal_5)
{
  {
    MR_bool check_hlds__post_typecheck__succeeded;
    MR_Word check_hlds__post_typecheck__Pieces_6;
    MR_Word check_hlds__post_typecheck__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Goal_5, (MR_Integer) 0)));
    MR_Word check_hlds__post_typecheck__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Goal_5, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) check_hlds__post_typecheck__GoalExpr_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[58]);
        }
        break;
      case (MR_Integer) 1:
        {
          check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[58]);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__post_typecheck__PredId_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 0)));
          MR_Word check_hlds__post_typecheck__CallPieces_108;
          MR_Integer check_hlds__post_typecheck__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 1)));
          MR_Word check_hlds__post_typecheck__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 2)));
          MR_Word check_hlds__post_typecheck__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 3)));
          MR_Word check_hlds__post_typecheck__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 4)));
          MR_Word check_hlds__post_typecheck__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 5)));

          {
            check_hlds__post_typecheck__CallPieces_108 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__post_typecheck__ModuleInfo_4, (MR_Integer) 0, check_hlds__post_typecheck__PredId_9);
          }
          {
            check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[56])));
            MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_6, 1) = ((MR_Box) (check_hlds__post_typecheck__CallPieces_108));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__post_typecheck__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 1)));
              MR_Word check_hlds__post_typecheck__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 5)));
              MR_Word check_hlds__post_typecheck__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 4)));
              MR_Word check_hlds__post_typecheck__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 3)));
              MR_Word check_hlds__post_typecheck__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 2)));

              switch (MR_tag((MR_Word) check_hlds__post_typecheck__V_127_127)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[60]);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word check_hlds__post_typecheck__SimpleCallId_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_127_127, (MR_Integer) 3)));
                    MR_Word check_hlds__post_typecheck__V_78_78;
                    MR_Word check_hlds__post_typecheck__CallPieces_93;
                    MR_Word check_hlds__post_typecheck__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_127_127, (MR_Integer) 0)));
                    MR_Integer check_hlds__post_typecheck__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_127_127, (MR_Integer) 1)));
                    MR_Word check_hlds__post_typecheck__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_127_127, (MR_Integer) 2)));

                    {
                      check_hlds__post_typecheck__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_78_78, 1) = ((MR_Box) (check_hlds__post_typecheck__SimpleCallId_24));
                    }
                    {
                      check_hlds__post_typecheck__CallPieces_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__CallPieces_93, 0) = ((MR_Box) (check_hlds__post_typecheck__V_78_78));
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__CallPieces_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[56])));
                      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_6, 1) = ((MR_Box) (check_hlds__post_typecheck__CallPieces_93));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[58]);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[58]);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__post_typecheck__CallPieces_15;
              MR_Word check_hlds__post_typecheck__PredId_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 2)));
              MR_Word check_hlds__post_typecheck__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 1)));
              MR_Integer check_hlds__post_typecheck__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 3)));
              MR_Word check_hlds__post_typecheck__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 4)));
              MR_Word check_hlds__post_typecheck__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 5)));
              MR_Word check_hlds__post_typecheck__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 6)));
              MR_Word check_hlds__post_typecheck__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__GoalExpr_7, (MR_Integer) 7)));

              {
                check_hlds__post_typecheck__CallPieces_15 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__post_typecheck__ModuleInfo_4, (MR_Integer) 0, check_hlds__post_typecheck__PredId_83);
              }
              {
                check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[56])));
                MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Pieces_6, 1) = ((MR_Box) (check_hlds__post_typecheck__CallPieces_15));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[58]);
            }
            break;
          case (MR_Integer) 3:
            {
              check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[58]);
            }
            break;
          case (MR_Integer) 4:
            {
              check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[58]);
            }
            break;
          case (MR_Integer) 5:
            {
              check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[58]);
            }
            break;
          case (MR_Integer) 6:
            {
              check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[58]);
            }
            break;
          case (MR_Integer) 7:
            {
              check_hlds__post_typecheck__Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[58]);
            }
            break;
        }
        break;
    }
    return check_hlds__post_typecheck__Pieces_6;
  }
}

static MR_Word MR_CALL 
check_hlds__post_typecheck__constrained_goals_to_error_msgs_2_f_0(
  MR_Word check_hlds__post_typecheck__ModuleInfo_1,
  MR_Word check_hlds__post_typecheck__HeadVar__2_2)
{
  {
    MR_bool check_hlds__post_typecheck__succeeded;
    MR_Word check_hlds__post_typecheck__HeadVar__3_3;

    if ((check_hlds__post_typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      check_hlds__post_typecheck__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__post_typecheck__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__post_typecheck__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__post_typecheck__Msg_8;
        MR_Word check_hlds__post_typecheck__Msgs_9;
        MR_Word check_hlds__post_typecheck__Words_13;
        MR_Word check_hlds__post_typecheck__Suffix_14;
        MR_Word check_hlds__post_typecheck__GoalInfo_17;
        MR_Word check_hlds__post_typecheck__Context_18;
        MR_Word check_hlds__post_typecheck__V_24_24;
        MR_Word check_hlds__post_typecheck__V_27_27;
        MR_Word check_hlds__post_typecheck__V_28_28;
        MR_Word check_hlds__post_typecheck__V_29_29;
        MR_Word check_hlds__post_typecheck__V_30_30;
        MR_Word check_hlds__post_typecheck__V_16_16;

        if ((check_hlds__post_typecheck__Goals_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              check_hlds__post_typecheck__Words_13 = check_hlds__post_typecheck__describe_constrained_goal_2_f_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__Goal_6);
            }
            check_hlds__post_typecheck__Suffix_14 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[53]);
          }
        else
          {
            MR_Word check_hlds__post_typecheck__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Goals_7, (MR_Integer) 1)));
            MR_Word check_hlds__post_typecheck__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Goals_7, (MR_Integer) 0)));

            if ((check_hlds__post_typecheck__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  check_hlds__post_typecheck__Words_13 = check_hlds__post_typecheck__describe_constrained_goal_2_f_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__Goal_6);
                }
                check_hlds__post_typecheck__Suffix_14 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[54]);
              }
            else
              {
                {
                  check_hlds__post_typecheck__Words_13 = check_hlds__post_typecheck__describe_constrained_goal_2_f_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__Goal_6);
                }
                check_hlds__post_typecheck__Suffix_14 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[55]);
              }
          }
        check_hlds__post_typecheck__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Goal_6, (MR_Integer) 0)));
        check_hlds__post_typecheck__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Goal_6, (MR_Integer) 1)));
        {
          check_hlds__post_typecheck__Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__post_typecheck__GoalInfo_17);
        }
        {
          check_hlds__post_typecheck__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_24_24, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_18));
        }
        {
          check_hlds__post_typecheck__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_30_30, 0) = ((MR_Box) (check_hlds__post_typecheck__Suffix_14));
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__post_typecheck__V_29_29 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__post_typecheck__Words_13, check_hlds__post_typecheck__V_30_30);
        }
        {
          check_hlds__post_typecheck__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_28_28, 0) = ((MR_Box) (check_hlds__post_typecheck__V_29_29));
        }
        {
          check_hlds__post_typecheck__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_27_27, 0) = ((MR_Box) (check_hlds__post_typecheck__V_28_28));
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__post_typecheck__Msg_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Msg_8, 0) = ((MR_Box) (check_hlds__post_typecheck__V_24_24));
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Msg_8, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Msg_8, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__Msg_8, 3) = ((MR_Box) (check_hlds__post_typecheck__V_27_27));
        }
        {
          check_hlds__post_typecheck__Msgs_9 = check_hlds__post_typecheck__constrained_goals_to_error_msgs_2_f_0(check_hlds__post_typecheck__ModuleInfo_1, check_hlds__post_typecheck__Goals_7);
        }
        {
          check_hlds__post_typecheck__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__post_typecheck__Msg_8));
          MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, 1) = ((MR_Box) (check_hlds__post_typecheck__Msgs_9));
        }
      }
    return check_hlds__post_typecheck__HeadVar__3_3;
  }
}

static void MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0_1(
  void * check_hlds__post_typecheck__env_ptr_arg)
{
  {
    struct check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0_s * check_hlds__post_typecheck__env_ptr = (struct check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0_s *) check_hlds__post_typecheck__env_ptr_arg;

    *((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__conv0_LambdaHeadVar__1_25));
    {
      ((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__cont)((check_hlds__post_typecheck__env_ptr)->check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0_2(
  MR_Box check_hlds__post_typecheck__closure_arg,
  MR_Box * check_hlds__post_typecheck__wrapper_arg_1,
  MR_Cont check_hlds__post_typecheck__cont,
  void * check_hlds__post_typecheck__cont_env_ptr)
{
  {
    struct check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0_s check_hlds__post_typecheck__env;

    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__wrapper_arg_1 = check_hlds__post_typecheck__wrapper_arg_1;
    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__cont = check_hlds__post_typecheck__cont;
    (check_hlds__post_typecheck__env).check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__cont_env_ptr = check_hlds__post_typecheck__cont_env_ptr;
    {
      MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;

      {
        check_hlds__post_typecheck__IntroducedFrom__pred__find_constrained_goals__256__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 4))), &(check_hlds__post_typecheck__env).check_hlds__post_typecheck__find_constrained_goals_3_f_0_2_env_0__conv0_LambdaHeadVar__1_25, check_hlds__post_typecheck__find_constrained_goals_2_f_0_1, &check_hlds__post_typecheck__env);
      }
    }
  }
}

static MR_Word MR_CALL 
check_hlds__post_typecheck__find_constrained_goals_2_f_0(
  MR_Word check_hlds__post_typecheck__PredInfo_4,
  MR_Word check_hlds__post_typecheck__Constraints_5)
{
  {
    MR_bool check_hlds__post_typecheck__succeeded;
    MR_Word check_hlds__post_typecheck__Goals_6;
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_28_28;
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_29_29;
    MR_Word check_hlds__post_typecheck__ClausesInfo_7;
    MR_Word check_hlds__post_typecheck__ClausesRep_8;
    MR_Word check_hlds__post_typecheck__Clauses_10;
    MR_Word check_hlds__post_typecheck__ConstraintMap_11;
    MR_Word check_hlds__post_typecheck__ReverseConstraintMap_12;
    MR_Word check_hlds__post_typecheck__ConstraintIdSets_13;
    MR_Word check_hlds__post_typecheck__ConstraintIds_14;
    MR_Word check_hlds__post_typecheck__FindGoals_15;
    MR_Word check_hlds__post_typecheck___ItemNumbers_9;

    {
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__post_typecheck__PredInfo_4, &check_hlds__post_typecheck__ClausesInfo_7);
    }
    {
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__post_typecheck__ClausesInfo_7, &check_hlds__post_typecheck__ClausesRep_8, &check_hlds__post_typecheck___ItemNumbers_9);
    }
    {
      hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(check_hlds__post_typecheck__ClausesRep_8, &check_hlds__post_typecheck__Clauses_10);
    }
    {
      hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(check_hlds__post_typecheck__PredInfo_4, &check_hlds__post_typecheck__ConstraintMap_11);
    }
    check_hlds__post_typecheck__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0;
    check_hlds__post_typecheck__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    {
      check_hlds__post_typecheck__ReverseConstraintMap_12 = mercury__map__reverse_map_1_f_0(check_hlds__post_typecheck__TypeCtorInfo_28_28, check_hlds__post_typecheck__TypeCtorInfo_29_29, check_hlds__post_typecheck__ConstraintMap_11);
    }
    {
      mercury__map__apply_to_list_3_p_0(check_hlds__post_typecheck__TypeCtorInfo_29_29, (MR_Word) &check_hlds__post_typecheck_scalar_common_1[2], check_hlds__post_typecheck__Constraints_5, check_hlds__post_typecheck__ReverseConstraintMap_12, &check_hlds__post_typecheck__ConstraintIdSets_13);
    }
    {
      check_hlds__post_typecheck__ConstraintIds_14 = mercury__set__union_list_1_f_0(check_hlds__post_typecheck__TypeCtorInfo_28_28, check_hlds__post_typecheck__ConstraintIdSets_13);
    }
    {
      check_hlds__post_typecheck__FindGoals_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FindGoals_15, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FindGoals_15, 1) = ((MR_Box) (check_hlds__post_typecheck__find_constrained_goals_2_f_0_2));
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FindGoals_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FindGoals_15, 3) = ((MR_Box) (check_hlds__post_typecheck__Clauses_10));
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__FindGoals_15, 4) = ((MR_Box) (check_hlds__post_typecheck__ConstraintIds_14));
    }
    {
      mercury__solutions__solutions_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__post_typecheck__FindGoals_15, &check_hlds__post_typecheck__Goals_6);
    }
    return check_hlds__post_typecheck__Goals_6;
  }
}

static MR_Word MR_CALL 
check_hlds__post_typecheck__constraint_to_error_piece_2_f_0(
  MR_Word check_hlds__post_typecheck__TVarset_4,
  MR_Word check_hlds__post_typecheck__Constraint_5)
{
  {
    MR_bool check_hlds__post_typecheck__succeeded;
    MR_Word check_hlds__post_typecheck__HeadVar__3_3;
    MR_Word check_hlds__post_typecheck__V_6_6;
    MR_String check_hlds__post_typecheck__V_7_7;

    {
      check_hlds__post_typecheck__V_7_7 = parse_tree__mercury_to_mercury__mercury_constraint_to_string_2_f_0(check_hlds__post_typecheck__TVarset_4, check_hlds__post_typecheck__Constraint_5);
    }
    {
      check_hlds__post_typecheck__V_6_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_6_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_6_6, 1) = ((MR_Box) (check_hlds__post_typecheck__V_7_7));
    }
    {
      check_hlds__post_typecheck__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__post_typecheck__V_6_6));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return check_hlds__post_typecheck__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0_1(
  MR_Box check_hlds__post_typecheck__closure_arg,
  MR_Box check_hlds__post_typecheck__wrapper_arg_1)
{
  {
    MR_Box check_hlds__post_typecheck__wrapper_arg_2;
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
    MR_Word check_hlds__post_typecheck__conv1_HeadVar__3_3;

    {
      check_hlds__post_typecheck__conv1_HeadVar__3_3 = check_hlds__post_typecheck__constraint_to_error_piece_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_1));
    }
    check_hlds__post_typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__post_typecheck__conv1_HeadVar__3_3));
    return check_hlds__post_typecheck__wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0(
  MR_Word check_hlds__post_typecheck__ModuleInfo_7,
  MR_Word check_hlds__post_typecheck__PredId_8,
  MR_Word check_hlds__post_typecheck__PredInfo_9,
  MR_Word check_hlds__post_typecheck__Constraints_10,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_22,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_Specs_23)
{
  {
    MR_bool check_hlds__post_typecheck__succeeded;
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_75_75;
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_76_76;
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_77_77;
    MR_Word check_hlds__post_typecheck__TVarSet_12;
    MR_Word check_hlds__post_typecheck__Context_13;
    MR_Word check_hlds__post_typecheck__PredIdPieces_14;
    MR_Word check_hlds__post_typecheck__Pieces_15;
    MR_Word check_hlds__post_typecheck__Msg_16;
    MR_String check_hlds__post_typecheck__DueTo_17;
    MR_Word check_hlds__post_typecheck__ContextMsgStart_18;
    MR_Word check_hlds__post_typecheck__ConstrainedGoals_19;
    MR_Word check_hlds__post_typecheck__ContextMsgs_20;
    MR_Word check_hlds__post_typecheck__Spec_21;
    MR_Word check_hlds__post_typecheck__V_29_29;
    MR_Word check_hlds__post_typecheck__V_30_30;
    MR_Word check_hlds__post_typecheck__V_31_31;
    MR_Word check_hlds__post_typecheck__V_34_34;
    MR_Word check_hlds__post_typecheck__V_36_36;
    MR_Word check_hlds__post_typecheck__V_37_37;
    MR_String check_hlds__post_typecheck__V_38_38;
    MR_String check_hlds__post_typecheck__V_40_40;
    MR_Word check_hlds__post_typecheck__V_47_47;
    MR_Word check_hlds__post_typecheck__V_48_48;
    MR_Word check_hlds__post_typecheck__V_49_49;
    MR_Word check_hlds__post_typecheck__V_50_50;
    MR_Word check_hlds__post_typecheck__V_56_56;
    MR_Word check_hlds__post_typecheck__V_57_57;
    MR_Word check_hlds__post_typecheck__V_61_61;
    MR_Word check_hlds__post_typecheck__V_64_64;
    MR_Word check_hlds__post_typecheck__V_65_65;
    MR_Word check_hlds__post_typecheck__V_66_66;
    MR_Word check_hlds__post_typecheck__V_67_67;
    MR_Word check_hlds__post_typecheck__V_72_72;
    MR_Word check_hlds__post_typecheck__V_73_73;
    MR_Box check_hlds__post_typecheck__conv0_V_40_40;
    MR_Box check_hlds__post_typecheck__conv2_DueTo_17;

    {
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__post_typecheck__PredInfo_9, &check_hlds__post_typecheck__TVarSet_12);
    }
    {
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__post_typecheck__PredInfo_9, &check_hlds__post_typecheck__Context_13);
    }
    {
      check_hlds__post_typecheck__PredIdPieces_14 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__post_typecheck__ModuleInfo_7, (MR_Integer) 1, check_hlds__post_typecheck__PredId_8);
    }
    check_hlds__post_typecheck__TypeCtorInfo_75_75 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    check_hlds__post_typecheck__TypeCtorInfo_76_76 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    check_hlds__post_typecheck__TypeCtorInfo_77_77 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      check_hlds__post_typecheck__conv0_V_40_40 = parse_tree__error_util__choose_number_3_f_0(check_hlds__post_typecheck__TypeCtorInfo_76_76, check_hlds__post_typecheck__TypeCtorInfo_77_77, check_hlds__post_typecheck__Constraints_10, ((MR_Box) ((MR_String) "constraint:")), ((MR_Box) ((MR_String) "constraints:")));
    }
    check_hlds__post_typecheck__V_40_40 = ((MR_String) check_hlds__post_typecheck__conv0_V_40_40);
    {
      check_hlds__post_typecheck__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) "type error: unsatisfied typeclass ", check_hlds__post_typecheck__V_40_40);
    }
    {
      check_hlds__post_typecheck__V_37_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), check_hlds__post_typecheck__V_37_37, 0) = ((MR_Box) (check_hlds__post_typecheck__V_38_38));
    }
    {
      check_hlds__post_typecheck__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_36_36, 0) = ((MR_Box) (check_hlds__post_typecheck__V_37_37));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[50])));
    }
    {
      check_hlds__post_typecheck__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_34_34, 1) = ((MR_Box) (check_hlds__post_typecheck__V_36_36));
    }
    {
      check_hlds__post_typecheck__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_31_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__post_typecheck_scalar_common_1[48])));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_31_31, 1) = ((MR_Box) (check_hlds__post_typecheck__V_34_34));
    }
    {
      check_hlds__post_typecheck__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_50_50, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_50_50, 1) = ((MR_Box) (check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_50_50, 3) = ((MR_Box) (check_hlds__post_typecheck__TVarSet_12));
    }
    {
      check_hlds__post_typecheck__V_49_49 = mercury__list__map_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_76_76, (MR_Word) &check_hlds__post_typecheck_scalar_common_1[1], check_hlds__post_typecheck__V_50_50, check_hlds__post_typecheck__Constraints_10);
    }
    {
      check_hlds__post_typecheck__V_48_48 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(check_hlds__post_typecheck__V_49_49, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    {
      check_hlds__post_typecheck__V_47_47 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_75_75, check_hlds__post_typecheck__V_48_48, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[52]));
    }
    {
      check_hlds__post_typecheck__V_30_30 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_75_75, check_hlds__post_typecheck__V_31_31, check_hlds__post_typecheck__V_47_47);
    }
    {
      check_hlds__post_typecheck__V_29_29 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_75_75, check_hlds__post_typecheck__PredIdPieces_14, check_hlds__post_typecheck__V_30_30);
    }
    {
      check_hlds__post_typecheck__Pieces_15 = mercury__list__f_43_43_2_f_0(check_hlds__post_typecheck__TypeCtorInfo_75_75, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__post_typecheck_scalar_common_1[47]), check_hlds__post_typecheck__V_29_29);
    }
    {
      check_hlds__post_typecheck__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_57_57, 0) = ((MR_Box) (check_hlds__post_typecheck__Pieces_15));
    }
    {
      check_hlds__post_typecheck__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_56_56, 0) = ((MR_Box) (check_hlds__post_typecheck__V_57_57));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__post_typecheck__Msg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_16, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_13));
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Msg_16, 1) = ((MR_Box) (check_hlds__post_typecheck__V_56_56));
    }
    {
      check_hlds__post_typecheck__conv2_DueTo_17 = parse_tree__error_util__choose_number_3_f_0(check_hlds__post_typecheck__TypeCtorInfo_76_76, check_hlds__post_typecheck__TypeCtorInfo_77_77, check_hlds__post_typecheck__Constraints_10, ((MR_Box) ((MR_String) "The constraint is due to:")), ((MR_Box) ((MR_String) "The constraints are due to:")));
    }
    check_hlds__post_typecheck__DueTo_17 = ((MR_String) check_hlds__post_typecheck__conv2_DueTo_17);
    {
      check_hlds__post_typecheck__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_61_61, 0) = ((MR_Box) (check_hlds__post_typecheck__Context_13));
    }
    {
      check_hlds__post_typecheck__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), check_hlds__post_typecheck__V_67_67, 1) = ((MR_Box) (check_hlds__post_typecheck__DueTo_17));
    }
    {
      check_hlds__post_typecheck__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_66_66, 0) = ((MR_Box) (check_hlds__post_typecheck__V_67_67));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__post_typecheck__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_65_65, 0) = ((MR_Box) (check_hlds__post_typecheck__V_66_66));
    }
    {
      check_hlds__post_typecheck__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_64_64, 0) = ((MR_Box) (check_hlds__post_typecheck__V_65_65));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__post_typecheck__ContextMsgStart_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ContextMsgStart_18, 0) = ((MR_Box) (check_hlds__post_typecheck__V_61_61));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ContextMsgStart_18, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ContextMsgStart_18, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__ContextMsgStart_18, 3) = ((MR_Box) (check_hlds__post_typecheck__V_64_64));
    }
    {
      check_hlds__post_typecheck__ConstrainedGoals_19 = check_hlds__post_typecheck__find_constrained_goals_2_f_0(check_hlds__post_typecheck__PredInfo_9, check_hlds__post_typecheck__Constraints_10);
    }
    {
      check_hlds__post_typecheck__ContextMsgs_20 = check_hlds__post_typecheck__constrained_goals_to_error_msgs_2_f_0(check_hlds__post_typecheck__ModuleInfo_7, check_hlds__post_typecheck__ConstrainedGoals_19);
    }
    {
      check_hlds__post_typecheck__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_73_73, 0) = ((MR_Box) (check_hlds__post_typecheck__ContextMsgStart_18));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_73_73, 1) = ((MR_Box) (check_hlds__post_typecheck__ContextMsgs_20));
    }
    {
      check_hlds__post_typecheck__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_72_72, 0) = ((MR_Box) (check_hlds__post_typecheck__Msg_16));
      MR_hl_field(MR_mktag(1), check_hlds__post_typecheck__V_72_72, 1) = ((MR_Box) (check_hlds__post_typecheck__V_73_73));
    }
    {
      check_hlds__post_typecheck__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__Spec_21, 2) = ((MR_Box) (check_hlds__post_typecheck__V_72_72));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__post_typecheck__STATE_VARIABLE_Specs_23 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__post_typecheck__Spec_21));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_Specs_0_22));
    }
  }
}

static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_11_p_0_1(
  MR_Box check_hlds__post_typecheck__closure_arg,
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3)
{
  {
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
    MR_Word check_hlds__post_typecheck__conv0_LambdaHeadVar__3_25;

    {
      check_hlds__post_typecheck__IntroducedFrom__pred__bind_type_vars_to_void__430__1_3_p_0(((MR_Word) check_hlds__post_typecheck__wrapper_arg_1), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_2), &check_hlds__post_typecheck__conv0_LambdaHeadVar__3_25);
    }
    *check_hlds__post_typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__post_typecheck__conv0_LambdaHeadVar__3_25));
  }
}

static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_do_finish_pred_11_p_0(
  MR_Word check_hlds__post_typecheck__ModuleInfo_12,
  MR_Word check_hlds__post_typecheck__ValidPredIdSet_13,
  MR_Word check_hlds__post_typecheck__PredId_14,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_20,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_21,
  MR_Integer check_hlds__post_typecheck__STATE_VARIABLE_NumBadErrors_0_22,
  MR_Integer * check_hlds__post_typecheck__STATE_VARIABLE_NumBadErrors_23,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_0_24,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_25,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_0_26,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_27)
{
  {
    MR_bool check_hlds__post_typecheck__succeeded;

    {
      check_hlds__post_typecheck__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__post_typecheck__ValidPredIdSet_13, ((MR_Box) (check_hlds__post_typecheck__PredId_14)));
    }
    if (check_hlds__post_typecheck__succeeded)
      {
        MR_Word check_hlds__post_typecheck__ErrorProcs_19;
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_28_28;
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_33_33;
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_34_34;
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_35_35;
        MR_Word check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_36_36;

        {
          check_hlds__post_typecheck__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_20);
        }
        if (!(check_hlds__post_typecheck__succeeded))
          {
            check_hlds__post_typecheck__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_20);
          }
        if (check_hlds__post_typecheck__succeeded)
          {
            {
              check_hlds__post_typecheck__setup_vartypes_in_clauses_for_imported_pred_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_20, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_28_28);
            }
            *check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_27 = check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_0_26;
            check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_33_33 = check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_0_24;
            *check_hlds__post_typecheck__STATE_VARIABLE_NumBadErrors_23 = check_hlds__post_typecheck__STATE_VARIABLE_NumBadErrors_0_22;
          }
        else
          {
            MR_Word check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_30_30;
            MR_Word check_hlds__post_typecheck__UnprovenConstraints0_49;
            MR_Word check_hlds__post_typecheck__ClausesInfo0_65;
            MR_Word check_hlds__post_typecheck__ExternalTypeParams_66;
            MR_Word check_hlds__post_typecheck__VarSet_67;
            MR_Word check_hlds__post_typecheck__VarTypesMap0_68;
            MR_Word check_hlds__post_typecheck__VarTypesList_69;
            MR_Word check_hlds__post_typecheck__BindToVoidTVars0_70;
            MR_Word check_hlds__post_typecheck__UnresolvedVarsTypes_71;
            MR_Word check_hlds__post_typecheck__BindToVoidTVars_72;

            {
              hlds__hlds_pred__pred_info_get_unproven_body_constraints_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_20, &check_hlds__post_typecheck__UnprovenConstraints0_49);
            }
            if ((check_hlds__post_typecheck__UnprovenConstraints0_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                *check_hlds__post_typecheck__STATE_VARIABLE_NumBadErrors_23 = check_hlds__post_typecheck__STATE_VARIABLE_NumBadErrors_0_22;
                check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_30_30 = check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_0_26;
              }
            else
              {
                MR_Word check_hlds__post_typecheck__TypeCtorInfo_24_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
                MR_Word check_hlds__post_typecheck__UnprovenConstraints_52;
                MR_Integer check_hlds__post_typecheck__NumUmprovenConstraints_53;

                {
                  mercury__list__sort_and_remove_dups_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_24_56, check_hlds__post_typecheck__UnprovenConstraints0_49, &check_hlds__post_typecheck__UnprovenConstraints_52);
                }
                {
                  check_hlds__post_typecheck__report_unsatisfied_constraints_6_p_0(check_hlds__post_typecheck__ModuleInfo_12, check_hlds__post_typecheck__PredId_14, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_20, check_hlds__post_typecheck__UnprovenConstraints_52, check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_0_26, &check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_30_30);
                }
                {
                  mercury__list__length_2_p_0(check_hlds__post_typecheck__TypeCtorInfo_24_56, check_hlds__post_typecheck__UnprovenConstraints_52, &check_hlds__post_typecheck__NumUmprovenConstraints_53);
                }
                *check_hlds__post_typecheck__STATE_VARIABLE_NumBadErrors_23 = (check_hlds__post_typecheck__STATE_VARIABLE_NumBadErrors_0_22 + check_hlds__post_typecheck__NumUmprovenConstraints_53);
              }
            {
              hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_20, &check_hlds__post_typecheck__ClausesInfo0_65);
            }
            {
              hlds__hlds_pred__pred_info_get_external_type_params_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_20, &check_hlds__post_typecheck__ExternalTypeParams_66);
            }
            {
              hlds__hlds_clauses__clauses_info_get_varset_2_p_0(check_hlds__post_typecheck__ClausesInfo0_65, &check_hlds__post_typecheck__VarSet_67);
            }
            {
              hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(check_hlds__post_typecheck__ClausesInfo0_65, &check_hlds__post_typecheck__VarTypesMap0_68);
            }
            {
              hlds__vartypes__vartypes_to_assoc_list_2_p_0(check_hlds__post_typecheck__VarTypesMap0_68, &check_hlds__post_typecheck__VarTypesList_69);
            }
            {
              mercury__set__init_1_p_0((MR_Word) &check_hlds__post_typecheck_scalar_common_1[3], &check_hlds__post_typecheck__BindToVoidTVars0_70);
            }
            {
              check_hlds__post_typecheck__find_unresolved_types_in_vars_6_p_0(check_hlds__post_typecheck__VarTypesList_69, check_hlds__post_typecheck__ExternalTypeParams_66, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__post_typecheck__UnresolvedVarsTypes_71, check_hlds__post_typecheck__BindToVoidTVars0_70, &check_hlds__post_typecheck__BindToVoidTVars_72);
            }
            if ((check_hlds__post_typecheck__UnresolvedVarsTypes_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_28_28 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_20;
                *check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_27 = check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_30_30;
              }
            else
              {
                MR_Word check_hlds__post_typecheck__TypeInfo_36_115;
                MR_Word check_hlds__post_typecheck__ProofMap0_75;
                MR_Word check_hlds__post_typecheck__ConstraintMap0_76;
                MR_Word check_hlds__post_typecheck__VarTypesMap_77;
                MR_Word check_hlds__post_typecheck__ProofMap_78;
                MR_Word check_hlds__post_typecheck__ConstraintMap_79;
                MR_Word check_hlds__post_typecheck__ClausesInfo_80;
                MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_33_83;
                MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_34_84;
                MR_Word check_hlds__post_typecheck__VoidSubst_101;
                MR_Word check_hlds__post_typecheck__V_106_106;
                MR_Box check_hlds__post_typecheck__conv1_VoidSubst_101;

                {
                  check_hlds__post_typecheck__report_unresolved_type_warning_7_p_0(check_hlds__post_typecheck__ModuleInfo_12, check_hlds__post_typecheck__PredId_14, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_20, check_hlds__post_typecheck__VarSet_67, check_hlds__post_typecheck__UnresolvedVarsTypes_71, check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_30_30, check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_27);
                }
                {
                  hlds__hlds_pred__pred_info_get_constraint_proof_map_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_20, &check_hlds__post_typecheck__ProofMap0_75);
                }
                {
                  hlds__hlds_pred__pred_info_get_constraint_map_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_20, &check_hlds__post_typecheck__ConstraintMap0_76);
                }
                check_hlds__post_typecheck__TypeInfo_36_115 = (MR_Word) &check_hlds__post_typecheck_scalar_common_1[3];
                {
                  check_hlds__post_typecheck__V_106_106 = mercury__map__init_0_f_0(check_hlds__post_typecheck__TypeInfo_36_115, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                }
                {
                  mercury__set__fold_4_p_0(check_hlds__post_typecheck__TypeInfo_36_115, (MR_Word) &check_hlds__post_typecheck_scalar_common_2[0], (MR_Word) &check_hlds__post_typecheck_scalar_common_2[3], check_hlds__post_typecheck__BindToVoidTVars_72, ((MR_Box) (check_hlds__post_typecheck__V_106_106)), &check_hlds__post_typecheck__conv1_VoidSubst_101);
                }
                check_hlds__post_typecheck__VoidSubst_101 = ((MR_Word) check_hlds__post_typecheck__conv1_VoidSubst_101);
                {
                  hlds__vartypes__apply_subst_to_vartypes_3_p_0(check_hlds__post_typecheck__VoidSubst_101, check_hlds__post_typecheck__VarTypesMap0_68, &check_hlds__post_typecheck__VarTypesMap_77);
                }
                {
                  check_hlds__type_util__apply_subst_to_constraint_proof_map_3_p_0(check_hlds__post_typecheck__VoidSubst_101, check_hlds__post_typecheck__ProofMap0_75, &check_hlds__post_typecheck__ProofMap_78);
                }
                {
                  check_hlds__type_util__apply_subst_to_constraint_map_3_p_0(check_hlds__post_typecheck__VoidSubst_101, check_hlds__post_typecheck__ConstraintMap0_76, &check_hlds__post_typecheck__ConstraintMap_79);
                }
                {
                  hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(check_hlds__post_typecheck__VarTypesMap_77, check_hlds__post_typecheck__ClausesInfo0_65, &check_hlds__post_typecheck__ClausesInfo_80);
                }
                {
                  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__post_typecheck__ClausesInfo_80, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_20, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_33_83);
                }
                {
                  hlds__hlds_pred__pred_info_set_constraint_proof_map_3_p_0(check_hlds__post_typecheck__ProofMap_78, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_33_83, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_34_84);
                }
                {
                  hlds__hlds_pred__pred_info_set_constraint_map_3_p_0(check_hlds__post_typecheck__ConstraintMap_79, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_34_84, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_28_28);
                }
              }
            {
              check_hlds__post_typecheck__check_type_of_main_3_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_28_28, check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_0_24, &check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_33_33);
            }
          }
        {
          check_hlds__post_typecheck__propagate_types_into_modes_4_p_0(check_hlds__post_typecheck__ModuleInfo_12, &check_hlds__post_typecheck__ErrorProcs_19, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_28_28, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_34_34);
        }
        {
          check_hlds__post_typecheck__report_unbound_inst_vars_7_p_0(check_hlds__post_typecheck__ModuleInfo_12, check_hlds__post_typecheck__PredId_14, check_hlds__post_typecheck__ErrorProcs_19, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_34_34, &check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_35_35, check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_33_33, &check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_36_36);
        }
        {
          check_hlds__post_typecheck__check_for_indistinguishable_modes_6_p_0(check_hlds__post_typecheck__ModuleInfo_12, check_hlds__post_typecheck__PredId_14, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_35_35, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_21, check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_36_36, check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_25);
        }
      }
    else
      {
        *check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_27 = check_hlds__post_typecheck__STATE_VARIABLE_NoTypeErrorSpecs_0_26;
        *check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_25 = check_hlds__post_typecheck__STATE_VARIABLE_AlwaysSpecs_0_24;
        *check_hlds__post_typecheck__STATE_VARIABLE_NumBadErrors_23 = check_hlds__post_typecheck__STATE_VARIABLE_NumBadErrors_0_22;
        *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_21 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_20;
      }
  }
}

void MR_CALL 
check_hlds__post_typecheck__propagate_types_into_modes_4_p_0(
  MR_Word check_hlds__post_typecheck__ModuleInfo_5,
  MR_Word * check_hlds__post_typecheck__ErrorProcIds_6,
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_13,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_14)
{
  {
    MR_bool check_hlds__post_typecheck__succeeded;
    MR_Word check_hlds__post_typecheck__ArgTypes_8;
    MR_Word check_hlds__post_typecheck__Procs0_9;
    MR_Word check_hlds__post_typecheck__ProcIds_10;
    MR_Word check_hlds__post_typecheck__RevErrorProcIds_11;
    MR_Word check_hlds__post_typecheck__Procs_12;

    {
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_13, &check_hlds__post_typecheck__ArgTypes_8);
    }
    {
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_13, &check_hlds__post_typecheck__Procs0_9);
    }
    {
      check_hlds__post_typecheck__ProcIds_10 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_13);
    }
    {
      check_hlds__post_typecheck__propagate_types_into_proc_modes_7_p_0(check_hlds__post_typecheck__ModuleInfo_5, check_hlds__post_typecheck__ProcIds_10, check_hlds__post_typecheck__ArgTypes_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__post_typecheck__RevErrorProcIds_11, check_hlds__post_typecheck__Procs0_9, &check_hlds__post_typecheck__Procs_12);
    }
    {
      *check_hlds__post_typecheck__ErrorProcIds_6 = mercury__list__reverse_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__post_typecheck__RevErrorProcIds_11);
    }
    {
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(check_hlds__post_typecheck__Procs_12, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_13, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_14);
    }
  }
}

void MR_CALL 
check_hlds__post_typecheck__setup_vartypes_in_clauses_for_imported_pred_2_p_0(
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_9,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_10)
{
  {
    MR_bool check_hlds__post_typecheck__succeeded;

    {
      check_hlds__post_typecheck__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_9);
    }
    if (check_hlds__post_typecheck__succeeded)
      *check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_10 = check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_9;
    else
      {
        MR_Word check_hlds__post_typecheck__ClausesInfo0_4;
        MR_Word check_hlds__post_typecheck__HeadVars_5;
        MR_Word check_hlds__post_typecheck__ArgTypes_6;
        MR_Word check_hlds__post_typecheck__VarTypes_7;
        MR_Word check_hlds__post_typecheck__ClausesInfo_8;

        {
          hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_9, &check_hlds__post_typecheck__ClausesInfo0_4);
        }
        {
          hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(check_hlds__post_typecheck__ClausesInfo0_4, &check_hlds__post_typecheck__HeadVars_5);
        }
        {
          hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_9, &check_hlds__post_typecheck__ArgTypes_6);
        }
        {
          hlds__vartypes__vartypes_from_corresponding_lists_3_p_0(check_hlds__post_typecheck__HeadVars_5, check_hlds__post_typecheck__ArgTypes_6, &check_hlds__post_typecheck__VarTypes_7);
        }
        {
          hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(check_hlds__post_typecheck__VarTypes_7, check_hlds__post_typecheck__ClausesInfo0_4, &check_hlds__post_typecheck__ClausesInfo_8);
        }
        {
          hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__post_typecheck__ClausesInfo_8, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_0_9, check_hlds__post_typecheck__STATE_VARIABLE_PredInfo_10);
        }
      }
  }
}

static void MR_CALL 
check_hlds__post_typecheck__post_typecheck_finish_preds_5_p_0_1(
  MR_Box check_hlds__post_typecheck__closure_arg,
  MR_Box check_hlds__post_typecheck__wrapper_arg_1,
  MR_Box check_hlds__post_typecheck__wrapper_arg_2,
  MR_Box * check_hlds__post_typecheck__wrapper_arg_3,
  MR_Box check_hlds__post_typecheck__wrapper_arg_4,
  MR_Box * check_hlds__post_typecheck__wrapper_arg_5,
  MR_Box check_hlds__post_typecheck__wrapper_arg_6,
  MR_Box * check_hlds__post_typecheck__wrapper_arg_7,
  MR_Box check_hlds__post_typecheck__wrapper_arg_8,
  MR_Box * check_hlds__post_typecheck__wrapper_arg_9)
{
  {
    MR_Box check_hlds__post_typecheck__closure = check_hlds__post_typecheck__closure_arg;
    MR_Word check_hlds__post_typecheck__conv3_STATE_VARIABLE_PredInfo_21;
    MR_Integer check_hlds__post_typecheck__conv2_STATE_VARIABLE_NumBadErrors_23;
    MR_Word check_hlds__post_typecheck__conv1_STATE_VARIABLE_AlwaysSpecs_25;
    MR_Word check_hlds__post_typecheck__conv0_STATE_VARIABLE_NoTypeErrorSpecs_27;

    {
      check_hlds__post_typecheck__post_typecheck_do_finish_pred_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_1), ((MR_Word) check_hlds__post_typecheck__wrapper_arg_2), &check_hlds__post_typecheck__conv3_STATE_VARIABLE_PredInfo_21, ((MR_Integer) check_hlds__post_typecheck__wrapper_arg_4), &check_hlds__post_typecheck__conv2_STATE_VARIABLE_NumBadErrors_23, ((MR_Word) check_hlds__post_typecheck__wrapper_arg_6), &check_hlds__post_typecheck__conv1_STATE_VARIABLE_AlwaysSpecs_25, ((MR_Word) check_hlds__post_typecheck__wrapper_arg_8), &check_hlds__post_typecheck__conv0_STATE_VARIABLE_NoTypeErrorSpecs_27);
    }
    *check_hlds__post_typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__post_typecheck__conv3_STATE_VARIABLE_PredInfo_21));
    *check_hlds__post_typecheck__wrapper_arg_5 = ((MR_Box) (check_hlds__post_typecheck__conv2_STATE_VARIABLE_NumBadErrors_23));
    *check_hlds__post_typecheck__wrapper_arg_7 = ((MR_Box) (check_hlds__post_typecheck__conv1_STATE_VARIABLE_AlwaysSpecs_25));
    *check_hlds__post_typecheck__wrapper_arg_9 = ((MR_Box) (check_hlds__post_typecheck__conv0_STATE_VARIABLE_NoTypeErrorSpecs_27));
  }
}

void MR_CALL 
check_hlds__post_typecheck__post_typecheck_finish_preds_5_p_0(
  MR_Word check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_15,
  MR_Integer * check_hlds__post_typecheck__NumBadErrors_7,
  MR_Word * check_hlds__post_typecheck__AlwaysSpecs_8,
  MR_Word * check_hlds__post_typecheck__NoTypeErrorSpecs_9)
{
  {
    MR_bool check_hlds__post_typecheck__succeeded;
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_21_21;
    MR_Word check_hlds__post_typecheck__TypeCtorInfo_31_31;
    MR_Word check_hlds__post_typecheck__TypeInfo_33_33;
    MR_Word check_hlds__post_typecheck__ValidPredIds_10;
    MR_Word check_hlds__post_typecheck__ValidPredIdSet_11;
    MR_Word check_hlds__post_typecheck__PredMap0_12;
    MR_Word check_hlds__post_typecheck__PredMap_13;
    MR_Word check_hlds__post_typecheck__V_16_16;
    MR_Box check_hlds__post_typecheck__conv6_NumBadErrors_7;
    MR_Box check_hlds__post_typecheck__conv5_AlwaysSpecs_8;
    MR_Box check_hlds__post_typecheck__conv4_NoTypeErrorSpecs_9;

    {
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_14, &check_hlds__post_typecheck__ValidPredIds_10);
    }
    check_hlds__post_typecheck__TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    {
      check_hlds__post_typecheck__ValidPredIdSet_11 = mercury__set_tree234__list_to_set_1_f_0(check_hlds__post_typecheck__TypeCtorInfo_21_21, check_hlds__post_typecheck__ValidPredIds_10);
    }
    {
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_14, &check_hlds__post_typecheck__PredMap0_12);
    }
    {
      check_hlds__post_typecheck__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_16_16, 0) = ((MR_Box) (&check_hlds__post_typecheck_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_16_16, 1) = ((MR_Box) (check_hlds__post_typecheck__post_typecheck_finish_preds_5_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_16_16, 3) = ((MR_Box) (check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_14));
      MR_hl_field(MR_mktag(0), check_hlds__post_typecheck__V_16_16, 4) = ((MR_Box) (check_hlds__post_typecheck__ValidPredIdSet_11));
    }
    check_hlds__post_typecheck__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    check_hlds__post_typecheck__TypeInfo_33_33 = (MR_Word) &check_hlds__post_typecheck_scalar_common_1[0];
    {
      mercury__map__map_foldl3_9_p_0(check_hlds__post_typecheck__TypeCtorInfo_21_21, check_hlds__post_typecheck__TypeCtorInfo_31_31, check_hlds__post_typecheck__TypeCtorInfo_31_31, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__post_typecheck__TypeInfo_33_33, check_hlds__post_typecheck__TypeInfo_33_33, check_hlds__post_typecheck__V_16_16, check_hlds__post_typecheck__PredMap0_12, &check_hlds__post_typecheck__PredMap_13, ((MR_Box) ((MR_Integer) 0)), &check_hlds__post_typecheck__conv6_NumBadErrors_7, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__post_typecheck__conv5_AlwaysSpecs_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__post_typecheck__conv4_NoTypeErrorSpecs_9);
    }
    *check_hlds__post_typecheck__NumBadErrors_7 = ((MR_Integer) check_hlds__post_typecheck__conv6_NumBadErrors_7);
    *check_hlds__post_typecheck__AlwaysSpecs_8 = ((MR_Word) check_hlds__post_typecheck__conv5_AlwaysSpecs_8);
    *check_hlds__post_typecheck__NoTypeErrorSpecs_9 = ((MR_Word) check_hlds__post_typecheck__conv4_NoTypeErrorSpecs_9);
    {
      hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__post_typecheck__PredMap_13, check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_0_14, check_hlds__post_typecheck__STATE_VARIABLE_ModuleInfo_15);
    }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.post_typecheck. */
