/*
** Automatically generated from `live_vars.m'
** by the Mercury compiler,
** version rotd-2023-07-02
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


// :- module ll_backend.live_vars.
// :- implementation.

/*
INIT mercury__ll_backend__live_vars__init
ENDINIT
*/

#include "ll_backend.live_vars.mih"


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
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
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
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0_s {
  MR_bool ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__succeeded;
  MR_Word ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__Goals_26;
  jmp_buf ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__commit_0;
  MR_Word ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__DisjunctGoalInfo_36;
  MR_Word ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__DisjunctResumePoint_37;
  MR_Word ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__Locs_39;
  MR_Word ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__Var_53;
  MR_Word ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__Disjunct_55;
  MR_Box ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__conv0_Disjunct_55;
};


static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__live_vars__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_alloc_data_0_0[6];

static const MR_ConstString ll_backend__live_vars__ll_backend__live_vars__field_names_alloc_data_0_0[6];

static const MR_DuArgLocn ll_backend__live_vars__ll_backend__live_vars__field_locns_alloc_data_0_0[6];

static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_alloc_data_0_0;

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_alloc_data_0_0[1];

static const MR_DuPtagLayout ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_alloc_data_0[1];

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_alloc_data_0[1];

static const MR_Integer ll_backend__live_vars__ll_backend__live_vars__functor_number_map_alloc_data_0[1];

static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_dummy_var_info_0_0;

static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_dummy_var_info_0_1[1];

static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_dummy_var_info_0_1;

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_dummy_var_info_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_dummy_var_info_0_1[1];

static const MR_DuPtagLayout ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_dummy_var_info_0[2];

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_dummy_var_info_0[2];

static const MR_Integer ll_backend__live_vars__ll_backend__live_vars__functor_number_map_dummy_var_info_0[2];

static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_1[3];

static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_1;

static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_2[2];

static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_2;

static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_3[3];

static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_3;

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_1[1];

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_2[1];

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_3[1];

static const MR_DuPtagLayout ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_parallel_stackvars_0[4];

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_parallel_stackvars_0[4];

static const MR_Integer ll_backend__live_vars__ll_backend__live_vars__functor_number_map_parallel_stackvars_0[4];

static const MR_ConstString ll_backend__live_vars__ll_backend__live_vars__type_class_id_var_names_stack_alloc_info_1[1];

static const MR_TypeClassMethod ll_backend__live_vars__ll_backend__live_vars__type_class_id_method_ids_stack_alloc_info_1[4];

static const MR_TypeClassId ll_backend__live_vars__ll_backend__live_vars__type_class_id_stack_alloc_info_1;

static void MR_CALL 
ll_backend__live_vars____Compare____parallel_stackvars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__live_vars____Unify____parallel_stackvars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_173,
  MR_Word AllocData_15,
  MR_Word ResumeVars0_16,
  MR_Word GoalExpr0_17,
  MR_Word * GoalExpr_18,
  MR_Word GoalInfo0_19,
  MR_Word * GoalInfo_20,
  MR_Box STATE_VARIABLE_StackAlloc_0_111,
  MR_Box * STATE_VARIABLE_StackAlloc_112,
  MR_Word STATE_VARIABLE_Liveness_0_113,
  MR_Word * STATE_VARIABLE_Liveness_114,
  MR_Word STATE_VARIABLE_NondetLiveness_0_115,
  MR_Word * STATE_VARIABLE_NondetLiveness_116,
  MR_Word STATE_VARIABLE_ParStackVars_0_117,
  MR_Word * STATE_VARIABLE_ParStackVars_118);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_scope_14_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_74,
  MR_Word AllocData_15,
  MR_Word ResumeVars0_16,
  MR_Word GoalExpr0_17,
  MR_Word * GoalExpr_18,
  MR_Word GoalInfo0_19,
  MR_Word * GoalInfo_20,
  MR_Box STATE_VARIABLE_StackAlloc_0_41,
  MR_Box * STATE_VARIABLE_StackAlloc_42,
  MR_Word STATE_VARIABLE_Liveness_0_43,
  MR_Word * STATE_VARIABLE_Liveness_44,
  MR_Word STATE_VARIABLE_NondetLiveness_0_45,
  MR_Word * STATE_VARIABLE_NondetLiveness_46,
  MR_Word STATE_VARIABLE_ParStackVars_0_47,
  MR_Word * STATE_VARIABLE_ParStackVars_48);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_cases_12_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_52,
  MR_Word AllocData_1,
  MR_Word ResumeVars0_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Box STATE_VARIABLE_StackAlloc_0_5,
  MR_Box * STATE_VARIABLE_StackAlloc_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_ParStackVars_0_11,
  MR_Word * STATE_VARIABLE_ParStackVars_12);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_disjuncts_13_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_61,
  MR_Word AllocData_1,
  MR_Word ResumeVars0_2,
  MR_Word DisjGoalInfo_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Box STATE_VARIABLE_StackAlloc_0_6,
  MR_Box * STATE_VARIABLE_StackAlloc_7,
  MR_Word HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word HeadVar__10_10,
  MR_Word * HeadVar__11_11,
  MR_Word STATE_VARIABLE_ParStackVars_0_12,
  MR_Word * STATE_VARIABLE_ParStackVars_13);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_disj_14_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_disj_14_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_disj_14_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_disj_14_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_disj_14_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_56,
  MR_Word AllocData_15,
  MR_Word ResumeVars0_16,
  MR_Word GoalExpr0_17,
  MR_Word * GoalExpr_18,
  MR_Word GoalInfo0_19,
  MR_Word * GoalInfo_20,
  MR_Box STATE_VARIABLE_StackAlloc_0_40,
  MR_Box * STATE_VARIABLE_StackAlloc_41,
  MR_Word STATE_VARIABLE_Liveness_0_42,
  MR_Word * STATE_VARIABLE_Liveness_43,
  MR_Word STATE_VARIABLE_NondetLiveness_0_44,
  MR_Word * STATE_VARIABLE_NondetLiveness_45,
  MR_Word STATE_VARIABLE_ParStackVars_0_46,
  MR_Word * STATE_VARIABLE_ParStackVars_47);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_par_conj_12_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_47,
  MR_Word AllocData_1,
  MR_Word ResumeVars0_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Box STATE_VARIABLE_StackAlloc_0_5,
  MR_Box * STATE_VARIABLE_StackAlloc_6,
  MR_Word HeadVar__7_7,
  MR_Word * Liveness_8,
  MR_Word STATE_VARIABLE_NondetLiveness_0_9,
  MR_Word * STATE_VARIABLE_NondetLiveness_10,
  MR_Word STATE_VARIABLE_ParStackVars_0_11,
  MR_Word * STATE_VARIABLE_ParStackVars_12);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_conjuncts_12_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_56,
  MR_Word AllocData_1,
  MR_Word ResumeVars0_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Box STATE_VARIABLE_StackAlloc_0_5,
  MR_Box * STATE_VARIABLE_StackAlloc_6,
  MR_Word STATE_VARIABLE_Liveness_0_7,
  MR_Word * STATE_VARIABLE_Liveness_8,
  MR_Word STATE_VARIABLE_NondetLiveness_0_9,
  MR_Word * STATE_VARIABLE_NondetLiveness_10,
  MR_Word STATE_VARIABLE_ParStackVars_0_11,
  MR_Word * STATE_VARIABLE_ParStackVars_12);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_conj_14_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_57,
  MR_Word AllocData_15,
  MR_Word ResumeVars0_16,
  MR_Word GoalExpr0_17,
  MR_Word * GoalExpr_18,
  MR_Word GoalInfo0_19,
  MR_Word * GoalInfo_20,
  MR_Box STATE_VARIABLE_StackAlloc_0_35,
  MR_Box * STATE_VARIABLE_StackAlloc_36,
  MR_Word STATE_VARIABLE_Liveness_0_37,
  MR_Word * STATE_VARIABLE_Liveness_38,
  MR_Word STATE_VARIABLE_NondetLiveness_0_39,
  MR_Word * STATE_VARIABLE_NondetLiveness_40,
  MR_Word STATE_VARIABLE_ParStackVars_0_41,
  MR_Word * STATE_VARIABLE_ParStackVars_42);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_12_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_55,
  MR_Word AllocData_13,
  MR_Word ResumeVars0_14,
  MR_Word Goal0_15,
  MR_Word * Goal_16,
  MR_Box STATE_VARIABLE_StackAlloc_0_38,
  MR_Box * STATE_VARIABLE_StackAlloc_39,
  MR_Word STATE_VARIABLE_Liveness_0_40,
  MR_Word * STATE_VARIABLE_Liveness_41,
  MR_Word STATE_VARIABLE_NondetLiveness_0_42,
  MR_Word * STATE_VARIABLE_NondetLiveness_43,
  MR_Word STATE_VARIABLE_ParStackVars_0_44,
  MR_Word * STATE_VARIABLE_ParStackVars_45);

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_end_loop_control_4_p_0(
  MR_Word NewWouldDieSet_5,
  MR_Word OldParStackVars_6,
  MR_Word ParStackVars0_7,
  MR_Word * ParStackVars_8);

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_end_parallel_conjunction_4_p_0(
  MR_Word LiveSet_5,
  MR_Word OuterParStackVars_6,
  MR_Word ParStackVars0_7,
  MR_Word * ParStackVars_8);

static MR_Box MR_CALL 
ll_backend__live_vars__build_live_sets_in_foreign_proc_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_foreign_proc_14_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_63,
  MR_Word AllocData_15,
  MR_Word ResumeVars0_16,
  MR_Word GoalExpr0_17,
  MR_Word * GoalExpr_18,
  MR_Word GoalInfo0_19,
  MR_Word * GoalInfo_20,
  MR_Box STATE_VARIABLE_StackAlloc_0_42,
  MR_Box * STATE_VARIABLE_StackAlloc_43,
  MR_Word STATE_VARIABLE_Liveness_0_44,
  MR_Word * STATE_VARIABLE_Liveness_45,
  MR_Word STATE_VARIABLE_NondetLiveness_0_46,
  MR_Word * STATE_VARIABLE_NondetLiveness_47,
  MR_Word STATE_VARIABLE_ParStackVars_0_48,
  MR_Word * STATE_VARIABLE_ParStackVars_49);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_plain_call_14_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_70,
  MR_Word AllocData_15,
  MR_Word ResumeVars0_16,
  MR_Word GoalExpr0_17,
  MR_Word * GoalExpr_18,
  MR_Word GoalInfo0_19,
  MR_Word * GoalInfo_20,
  MR_Box STATE_VARIABLE_StackAlloc_0_43,
  MR_Box * STATE_VARIABLE_StackAlloc_44,
  MR_Word STATE_VARIABLE_Liveness_0_45,
  MR_Word * STATE_VARIABLE_Liveness_46,
  MR_Word STATE_VARIABLE_NondetLiveness_0_47,
  MR_Word * STATE_VARIABLE_NondetLiveness_48,
  MR_Word STATE_VARIABLE_ParStackVars_0_49,
  MR_Word * STATE_VARIABLE_ParStackVars_50);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_call_12_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_42,
  MR_Word AllocData_13,
  MR_Word ResumeVars0_14,
  MR_Word OutVars_15,
  MR_Word GoalInfo0_16,
  MR_Word * GoalInfo_17,
  MR_Box STATE_VARIABLE_StackAlloc_0_27,
  MR_Box * STATE_VARIABLE_StackAlloc_28,
  MR_Word Liveness_19,
  MR_Word STATE_VARIABLE_NondetLiveness_0_29,
  MR_Word * STATE_VARIABLE_NondetLiveness_30,
  MR_Word STATE_VARIABLE_ParStackVars_0_31,
  MR_Word * STATE_VARIABLE_ParStackVars_32);

static MR_bool MR_CALL 
ll_backend__live_vars____Unify____alloc_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__live_vars____Compare____alloc_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__live_vars____Unify____dummy_var_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__live_vars____Compare____dummy_var_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__live_vars____Unify____parallel_stackvars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__live_vars____Compare____parallel_stackvars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__live_vars_scalar_common_1[3][2];

static /* final */ const MR_Box ll_backend__live_vars_scalar_common_2[1][5];

static /* final */ const MR_Box ll_backend__live_vars_scalar_common_3[1][3];




static /* final */ const MR_Box ll_backend__live_vars_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__live_vars_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box ll_backend__live_vars_scalar_common_2[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&ll_backend__live_vars__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ll_backend__live_vars_scalar_common_3[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ll_backend__live_vars_scalar_common_2[0])),
    ((MR_Box) (ll_backend__live_vars__build_live_sets_in_foreign_proc_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__live_vars__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_alloc_data_0_0[6] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&ll_backend__live_vars__ll_backend__live_vars__type_ctor_info_dummy_var_info_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString ll_backend__live_vars__ll_backend__live_vars__field_names_alloc_data_0_0[6] = {
  (MR_String) "ad_module_info",
  (MR_String) "ad_proc_info",
  (MR_String) "ad_pred_proc_id",
  (MR_String) "ad_dummy_var_info",
  (MR_String) "ad_typeinfo_liveness",
  (MR_String) "ad_opt_no_return_calls"
};

static const MR_DuArgLocn ll_backend__live_vars__ll_backend__live_vars__field_locns_alloc_data_0_0[6] = {
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_alloc_data_0_0 = {
  (MR_String) "alloc_data",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__live_vars__ll_backend__live_vars__field_types_alloc_data_0_0,
  ll_backend__live_vars__ll_backend__live_vars__field_names_alloc_data_0_0,
  ll_backend__live_vars__ll_backend__live_vars__field_locns_alloc_data_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_alloc_data_0_0[1] = { &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_alloc_data_0_0 };

static const MR_DuPtagLayout ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_alloc_data_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_alloc_data_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_alloc_data_0[1] = { &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_alloc_data_0_0 };

static const MR_Integer ll_backend__live_vars__ll_backend__live_vars__functor_number_map_alloc_data_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__live_vars__ll_backend__live_vars__type_ctor_info_alloc_data_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__live_vars____Unify____alloc_data_0_0_10001)),
  ((MR_Box) (ll_backend__live_vars____Compare____alloc_data_0_0_10001)),
  (MR_String) "ll_backend.live_vars",
  (MR_String) "alloc_data",
  { ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_alloc_data_0 },
  { ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_alloc_data_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__live_vars__ll_backend__live_vars__functor_number_map_alloc_data_0,

};

static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_dummy_var_info_0_0 = {
  (MR_String) "no_var_is_dummy",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_dummy_var_info_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0) };

static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_dummy_var_info_0_1 = {
  (MR_String) "some_var_may_be_dummy",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ll_backend__live_vars__ll_backend__live_vars__field_types_dummy_var_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_dummy_var_info_0_0[1] = { &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_dummy_var_info_0_0 };

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_dummy_var_info_0_1[1] = { &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_dummy_var_info_0_1 };

static const MR_DuPtagLayout ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_dummy_var_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_dummy_var_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_dummy_var_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_dummy_var_info_0[2] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_dummy_var_info_0_0,
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_dummy_var_info_0_1
};

static const MR_Integer ll_backend__live_vars__ll_backend__live_vars__functor_number_map_dummy_var_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__live_vars__ll_backend__live_vars__type_ctor_info_dummy_var_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__live_vars____Unify____dummy_var_info_0_0_10001)),
  ((MR_Box) (ll_backend__live_vars____Compare____dummy_var_info_0_0_10001)),
  (MR_String) "ll_backend.live_vars",
  (MR_String) "dummy_var_info",
  { ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_dummy_var_info_0 },
  { ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_dummy_var_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__live_vars__ll_backend__live_vars__functor_number_map_dummy_var_info_0,

};

static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_0 = {
  (MR_String) "not_in_parallel_context",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_TypeInfo) (&ll_backend__live_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__live_vars__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_1[3] = {
  (MR_PseudoTypeInfo) (&ll_backend__live_vars__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__live_vars__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__live_vars__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_1 = {
  (MR_String) "parallel_conjunction",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_2[2] = {
  (MR_PseudoTypeInfo) (&ll_backend__live_vars__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__live_vars__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_2 = {
  (MR_String) "loop_control_scope",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_3[3] = {
  (MR_PseudoTypeInfo) (&ll_backend__live_vars__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__live_vars__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__live_vars__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_3 = {
  (MR_String) "after_loop_control_scope",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_0[1] = { &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_0 };

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_1[1] = { &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_1 };

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_2[1] = { &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_2 };

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_3[1] = { &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_3 };

static const MR_DuPtagLayout ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_parallel_stackvars_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_parallel_stackvars_0[4] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_3,
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_2,
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_0,
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_1
};

static const MR_Integer ll_backend__live_vars__ll_backend__live_vars__functor_number_map_parallel_stackvars_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__live_vars__ll_backend__live_vars__type_ctor_info_parallel_stackvars_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__live_vars____Unify____parallel_stackvars_0_0_10001)),
  ((MR_Box) (ll_backend__live_vars____Compare____parallel_stackvars_0_0_10001)),
  (MR_String) "ll_backend.live_vars",
  (MR_String) "parallel_stackvars",
  { ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_parallel_stackvars_0 },
  { ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_parallel_stackvars_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  ll_backend__live_vars__ll_backend__live_vars__functor_number_map_parallel_stackvars_0,

};

static const MR_ConstString ll_backend__live_vars__ll_backend__live_vars__type_class_id_var_names_stack_alloc_info_1[1] = { (MR_String) "T" };

static const MR_TypeClassMethod ll_backend__live_vars__ll_backend__live_vars__type_class_id_method_ids_stack_alloc_info_1[4] = {
  {
    (MR_String) "at_call_site",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "at_resume_site",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "at_par_conj",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "at_recursive_call_for_loop_control",
    (MR_Integer) 4,
    MR_PREDICATE
  }
};

static const MR_TypeClassId ll_backend__live_vars__ll_backend__live_vars__type_class_id_stack_alloc_info_1 = {
  (MR_String) "ll_backend.live_vars",
  (MR_String) "stack_alloc_info",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__live_vars__ll_backend__live_vars__type_class_id_var_names_stack_alloc_info_1,
  ll_backend__live_vars__ll_backend__live_vars__type_class_id_method_ids_stack_alloc_info_1
};

const MR_TypeClassDeclStruct ll_backend__live_vars__ll_backend__live_vars__type_class_decl_stack_alloc_info_1 = {
  &ll_backend__live_vars__ll_backend__live_vars__type_class_id_stack_alloc_info_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static void MR_CALL 
ll_backend__live_vars____Compare____parallel_stackvars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_73 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_74 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_73 == CastY_74);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_88 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_89 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_90 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_17;

                mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__live_vars_scalar_common_1[1]), &SubResult1_17, ((MR_Box) (Var_90)), ((MR_Box) (ArgY1_16)));
                succeeded = (SubResult1_17 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_17;
                else
                {
                  MR_Word SubResult2_20;

                  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__live_vars_scalar_common_1[2]), &SubResult2_20, ((MR_Box) (Var_89)), ((MR_Box) (ArgY2_19)));
                  succeeded = (SubResult2_20 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_20;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__live_vars_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_88)), ((MR_Box) (ArgY3_22)));
                }
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_86 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_87 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_42 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_45 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_43;

                mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__live_vars_scalar_common_1[1]), &SubResult1_43, ((MR_Box) (Var_87)), ((MR_Box) (ArgY1_42)));
                succeeded = (SubResult1_43 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_43;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__live_vars_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_86)), ((MR_Box) (ArgY2_45)));
              }
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Var_83 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_84 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_85 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 3:
              {
                MR_Word ArgY1_66 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_69 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_72 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_67;

                mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__live_vars_scalar_common_1[2]), &SubResult1_67, ((MR_Box) (Var_85)), ((MR_Box) (ArgY1_66)));
                succeeded = (SubResult1_67 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_67;
                else
                {
                  MR_Word SubResult2_70;

                  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__live_vars_scalar_common_1[1]), &SubResult2_70, ((MR_Box) (Var_84)), ((MR_Box) (ArgY2_69)));
                  succeeded = (SubResult2_70 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_70;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__live_vars_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_83)), ((MR_Box) (ArgY3_72)));
                }
              }
              break;
          }
        }
        break;
    }
}

static MR_bool MR_CALL 
ll_backend__live_vars____Unify____parallel_stackvars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_4 == CastX_3);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_28_28;
          MR_Word TypeInfo_29_29;
          MR_Word TypeInfo_30_30;
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;
          MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_8;
          MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
            TypeInfo_28_28 = (MR_Word) (&ll_backend__live_vars_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
            if (succeeded)
            {
              TypeInfo_29_29 = (MR_Word) (&ll_backend__live_vars_scalar_common_1[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
              if (succeeded)
              {
                TypeInfo_30_30 = (MR_Word) (&ll_backend__live_vars_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_26_26;
          MR_Word TypeInfo_27_27;
          MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_12;
          MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            TypeInfo_26_26 = (MR_Word) (&ll_backend__live_vars_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
            if (succeeded)
            {
              TypeInfo_27_27 = (MR_Word) (&ll_backend__live_vars_scalar_common_1[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX2_13)), ((MR_Box) (ArgY2_14)));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word TypeInfo_23_23;
          MR_Word TypeInfo_24_24;
          MR_Word TypeInfo_25_25;
          MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_16;
          MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_18;
          MR_Word ArgX3_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_20;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
            TypeInfo_23_23 = (MR_Word) (&ll_backend__live_vars_scalar_common_1[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX1_15)), ((MR_Box) (ArgY1_16)));
            if (succeeded)
            {
              TypeInfo_24_24 = (MR_Word) (&ll_backend__live_vars_scalar_common_1[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX2_17)), ((MR_Box) (ArgY2_18)));
              if (succeeded)
              {
                TypeInfo_25_25 = (MR_Word) (&ll_backend__live_vars_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX3_19)), ((MR_Box) (ArgY3_20)));
              }
            }
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
ll_backend__live_vars____Compare____alloc_data_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
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
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX6_19 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgY6_20 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_pred____Compare____proc_info_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          ll_backend__live_vars____Compare____dummy_var_info_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;
            MR_Integer Var_29 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_30 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_29 < Var_30);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_29 > Var_30);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Integer Var_31 = (MR_Integer) (ArgX6_19);
              MR_Integer Var_32 = (MR_Integer) (ArgY6_20);

              succeeded = (Var_31 < Var_32);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_31 > Var_32);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
          }
        }
      }
    }
  }
}

void MR_CALL 
ll_backend__live_vars____Compare____dummy_var_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      parse_tree__var_table____Compare____var_table_0_0(HeadVar__1_1, Var_11, ArgY1_7);
    }
  }
}

MR_bool MR_CALL 
ll_backend__live_vars____Unify____alloc_data_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
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
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX6_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgY6_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = ll_backend__live_vars____Unify____dummy_var_info_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
              succeeded = (ArgX6_13 == ArgY6_14);
          }
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
ll_backend__live_vars____Unify____dummy_var_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX1_5, ArgY1_6);
    }
  }
  return succeeded;
}

void MR_CALL 
ll_backend__live_vars__at_recursive_call_for_loop_control_4_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_stack_alloc_info_5, (MR_Integer) 0)), (MR_Integer) 8))));

  func_0(((MR_Box) (TypeClassInfo_for_stack_alloc_info_5)), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
ll_backend__live_vars__at_par_conj_4_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_stack_alloc_info_5, (MR_Integer) 0)), (MR_Integer) 7))));

  func_0(((MR_Box) (TypeClassInfo_for_stack_alloc_info_5)), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
ll_backend__live_vars__at_resume_site_4_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_stack_alloc_info_5, (MR_Integer) 0)), (MR_Integer) 6))));

  func_0(((MR_Box) (TypeClassInfo_for_stack_alloc_info_5)), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
ll_backend__live_vars__at_call_site_4_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_stack_alloc_info_5, (MR_Integer) 0)), (MR_Integer) 5))));

  func_0(((MR_Box) (TypeClassInfo_for_stack_alloc_info_5)), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_26,
  MR_Word AllocData_11,
  MR_Word ResumeVars0_12,
  MR_Word Goal0_13,
  MR_Word * Goal_14,
  MR_Box STATE_VARIABLE_StackAlloc_0_20,
  MR_Box * STATE_VARIABLE_StackAlloc_21,
  MR_Word STATE_VARIABLE_Liveness_0_22,
  MR_Word * STATE_VARIABLE_Liveness_23,
  MR_Word STATE_VARIABLE_NondetLiveness_0_24,
  MR_Word * STATE_VARIABLE_NondetLiveness_25)
{
  MR_Word _ParStackVars_19;

  ll_backend__live_vars__build_live_sets_in_goal_12_p_0(TypeClassInfo_for_stack_alloc_info_26, AllocData_11, ResumeVars0_12, Goal0_13, Goal_14, STATE_VARIABLE_StackAlloc_0_20, STATE_VARIABLE_StackAlloc_21, STATE_VARIABLE_Liveness_0_22, STATE_VARIABLE_Liveness_23, STATE_VARIABLE_NondetLiveness_0_24, STATE_VARIABLE_NondetLiveness_25, (MR_Word) ((MR_Unsigned) 0U), &_ParStackVars_19);
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_173,
  MR_Word AllocData_15,
  MR_Word ResumeVars0_16,
  MR_Word GoalExpr0_17,
  MR_Word * GoalExpr_18,
  MR_Word GoalInfo0_19,
  MR_Word * GoalInfo_20,
  MR_Box STATE_VARIABLE_StackAlloc_0_111,
  MR_Box * STATE_VARIABLE_StackAlloc_112,
  MR_Word STATE_VARIABLE_Liveness_0_113,
  MR_Word * STATE_VARIABLE_Liveness_114,
  MR_Word STATE_VARIABLE_NondetLiveness_0_115,
  MR_Word * STATE_VARIABLE_NondetLiveness_116,
  MR_Word STATE_VARIABLE_ParStackVars_0_117,
  MR_Word * STATE_VARIABLE_ParStackVars_118)
{
  switch (MR_tag((MR_Word) GoalExpr0_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_106 = (MR_Word) ((MR_Word) (GoalExpr0_17));
        MR_Word SubGoal_107;

        ll_backend__live_vars__build_live_sets_in_goal_12_p_0(TypeClassInfo_for_stack_alloc_info_173, AllocData_15, ResumeVars0_16, SubGoal0_106, &SubGoal_107, STATE_VARIABLE_StackAlloc_0_111, STATE_VARIABLE_StackAlloc_112, STATE_VARIABLE_Liveness_0_113, STATE_VARIABLE_Liveness_114, STATE_VARIABLE_NondetLiveness_0_115, STATE_VARIABLE_NondetLiveness_116, STATE_VARIABLE_ParStackVars_0_117, STATE_VARIABLE_ParStackVars_118);
        *GoalExpr_18 = (MR_Word) ((MR_Word) (SubGoal_107));
        *GoalInfo_20 = GoalInfo0_19;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Unification_28 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_17, (MR_Integer) 3))));

        *GoalExpr_18 = GoalExpr0_17;
        *GoalInfo_20 = GoalInfo0_19;
        switch (MR_tag((MR_Word) Unification_28)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
            }
            break;
          case (MR_Integer) 2:
            {
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, Unification_28, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.live_vars.build_live_sets_in_goal_expr\'/14", (MR_String) "complicated_unify");
                  return;
                }
                break;
            }
            break;
        }
        *STATE_VARIABLE_StackAlloc_112 = STATE_VARIABLE_StackAlloc_0_111;
        *STATE_VARIABLE_Liveness_114 = STATE_VARIABLE_Liveness_0_113;
        *STATE_VARIABLE_NondetLiveness_116 = STATE_VARIABLE_NondetLiveness_0_115;
        *STATE_VARIABLE_ParStackVars_118 = STATE_VARIABLE_ParStackVars_0_117;
      }
      break;
    case (MR_Integer) 2:
      ll_backend__live_vars__build_live_sets_in_plain_call_14_p_0(TypeClassInfo_for_stack_alloc_info_173, AllocData_15, ResumeVars0_16, GoalExpr0_17, GoalExpr_18, GoalInfo0_19, GoalInfo_20, STATE_VARIABLE_StackAlloc_0_111, STATE_VARIABLE_StackAlloc_112, STATE_VARIABLE_Liveness_0_113, STATE_VARIABLE_Liveness_114, STATE_VARIABLE_NondetLiveness_0_115, STATE_VARIABLE_NondetLiveness_116, STATE_VARIABLE_ParStackVars_0_117, STATE_VARIABLE_ParStackVars_118);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_56 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))));
            MR_Word ArgVars_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 2))));
            MR_Word Modes_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 3))));

            *GoalExpr_18 = GoalExpr0_17;
            switch (MR_tag((MR_Word) GenericCall_56)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_Word ModuleInfo_71 = ((MR_Word) ((MR_hl_field(0, AllocData_15, (MR_Integer) 0))));
                  MR_Word ProcInfo_72 = ((MR_Word) ((MR_hl_field(0, AllocData_15, (MR_Integer) 1))));
                  MR_Word VarTable_73;
                  MR_Word Types_74;
                  MR_Word OutVars_76;
                  MR_Word Var_125;
                  MR_Word _InVars_75;
                  MR_Word _UnusedVars_77;

                  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_72, &VarTable_73);
                  parse_tree__var_table__lookup_var_types_3_p_0(VarTable_73, ArgVars_57, &Types_74);
                  hlds__arg_info__partition_generic_call_args_7_p_0(ModuleInfo_71, ArgVars_57, Types_74, Modes_58, &_InVars_75, &OutVars_76, &_UnusedVars_77);
                  Var_125 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutVars_76);
                  ll_backend__live_vars__build_live_sets_in_call_12_p_0(TypeClassInfo_for_stack_alloc_info_173, AllocData_15, ResumeVars0_16, Var_125, GoalInfo0_19, GoalInfo_20, STATE_VARIABLE_StackAlloc_0_111, STATE_VARIABLE_StackAlloc_112, STATE_VARIABLE_Liveness_0_113, STATE_VARIABLE_NondetLiveness_0_115, STATE_VARIABLE_NondetLiveness_116, STATE_VARIABLE_ParStackVars_0_117, STATE_VARIABLE_ParStackVars_118);
                }
                break;
              case (MR_Integer) 3:
                {
                  *GoalInfo_20 = GoalInfo0_19;
                  *STATE_VARIABLE_StackAlloc_112 = STATE_VARIABLE_StackAlloc_0_111;
                  *STATE_VARIABLE_NondetLiveness_116 = STATE_VARIABLE_NondetLiveness_0_115;
                  *STATE_VARIABLE_ParStackVars_118 = STATE_VARIABLE_ParStackVars_0_117;
                }
                break;
            }
            *STATE_VARIABLE_Liveness_114 = STATE_VARIABLE_Liveness_0_113;
          }
          break;
        case (MR_Integer) 1:
          ll_backend__live_vars__build_live_sets_in_foreign_proc_14_p_0(TypeClassInfo_for_stack_alloc_info_173, AllocData_15, ResumeVars0_16, GoalExpr0_17, GoalExpr_18, GoalInfo0_19, GoalInfo_20, STATE_VARIABLE_StackAlloc_0_111, STATE_VARIABLE_StackAlloc_112, STATE_VARIABLE_Liveness_0_113, STATE_VARIABLE_Liveness_114, STATE_VARIABLE_NondetLiveness_0_115, STATE_VARIABLE_NondetLiveness_116, STATE_VARIABLE_ParStackVars_0_117, STATE_VARIABLE_ParStackVars_118);
          break;
        case (MR_Integer) 2:
          ll_backend__live_vars__build_live_sets_in_conj_14_p_0(TypeClassInfo_for_stack_alloc_info_173, AllocData_15, ResumeVars0_16, GoalExpr0_17, GoalExpr_18, GoalInfo0_19, GoalInfo_20, STATE_VARIABLE_StackAlloc_0_111, STATE_VARIABLE_StackAlloc_112, STATE_VARIABLE_Liveness_0_113, STATE_VARIABLE_Liveness_114, STATE_VARIABLE_NondetLiveness_0_115, STATE_VARIABLE_NondetLiveness_116, STATE_VARIABLE_ParStackVars_0_117, STATE_VARIABLE_ParStackVars_118);
          break;
        case (MR_Integer) 3:
          ll_backend__live_vars__build_live_sets_in_disj_14_p_0(TypeClassInfo_for_stack_alloc_info_173, AllocData_15, ResumeVars0_16, GoalExpr0_17, GoalExpr_18, GoalInfo0_19, GoalInfo_20, STATE_VARIABLE_StackAlloc_0_111, STATE_VARIABLE_StackAlloc_112, STATE_VARIABLE_Liveness_0_113, STATE_VARIABLE_Liveness_114, STATE_VARIABLE_NondetLiveness_0_115, STATE_VARIABLE_NondetLiveness_116, STATE_VARIABLE_ParStackVars_0_117, STATE_VARIABLE_ParStackVars_118);
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_88 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))));
            MR_Word CanFail_89 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_90 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 3))));
            MR_Word Cases_91;

            ll_backend__live_vars__build_live_sets_in_cases_12_p_0(TypeClassInfo_for_stack_alloc_info_173, AllocData_15, ResumeVars0_16, Cases0_90, &Cases_91, STATE_VARIABLE_StackAlloc_0_111, STATE_VARIABLE_StackAlloc_112, STATE_VARIABLE_Liveness_0_113, STATE_VARIABLE_Liveness_114, STATE_VARIABLE_NondetLiveness_0_115, STATE_VARIABLE_NondetLiveness_116, STATE_VARIABLE_ParStackVars_0_117, STATE_VARIABLE_ParStackVars_118);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_18 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Var_88));
              MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (CanFail_89));
              MR_hl_field(3, base, 3) = ((MR_Box) (Cases_91));
            }
            *GoalInfo_20 = GoalInfo0_19;
          }
          break;
        case (MR_Integer) 5:
          ll_backend__live_vars__build_live_sets_in_scope_14_p_0(TypeClassInfo_for_stack_alloc_info_173, AllocData_15, ResumeVars0_16, GoalExpr0_17, GoalExpr_18, GoalInfo0_19, GoalInfo_20, STATE_VARIABLE_StackAlloc_0_111, STATE_VARIABLE_StackAlloc_112, STATE_VARIABLE_Liveness_0_113, STATE_VARIABLE_Liveness_114, STATE_VARIABLE_NondetLiveness_0_115, STATE_VARIABLE_NondetLiveness_116, STATE_VARIABLE_ParStackVars_0_117, STATE_VARIABLE_ParStackVars_118);
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_92 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))));
            MR_Word Cond0_93 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 2))));
            MR_Word Then0_94 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 3))));
            MR_Word Else0_95 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 4))));
            MR_Word Cond_98;
            MR_Word LivenessCond_99;
            MR_Word NondetLivenessCond_100;
            MR_Word Then_101;
            MR_Word NondetLivenessThen_103;
            MR_Word Else_104;
            MR_Word NondetLivenessElse_105;
            MR_Box STATE_VARIABLE_StackAlloc_145_145;
            MR_Word STATE_VARIABLE_ParStackVars_146_146;
            MR_Box STATE_VARIABLE_StackAlloc_147_147;
            MR_Word STATE_VARIABLE_ParStackVars_148_148;
            MR_Word _LivenessThen_102;

            ll_backend__live_vars__build_live_sets_in_goal_12_p_0(TypeClassInfo_for_stack_alloc_info_173, AllocData_15, ResumeVars0_16, Cond0_93, &Cond_98, STATE_VARIABLE_StackAlloc_0_111, &STATE_VARIABLE_StackAlloc_145_145, STATE_VARIABLE_Liveness_0_113, &LivenessCond_99, STATE_VARIABLE_NondetLiveness_0_115, &NondetLivenessCond_100, STATE_VARIABLE_ParStackVars_0_117, &STATE_VARIABLE_ParStackVars_146_146);
            ll_backend__live_vars__build_live_sets_in_goal_12_p_0(TypeClassInfo_for_stack_alloc_info_173, AllocData_15, ResumeVars0_16, Then0_94, &Then_101, STATE_VARIABLE_StackAlloc_145_145, &STATE_VARIABLE_StackAlloc_147_147, LivenessCond_99, &_LivenessThen_102, NondetLivenessCond_100, &NondetLivenessThen_103, STATE_VARIABLE_ParStackVars_146_146, &STATE_VARIABLE_ParStackVars_148_148);
            ll_backend__live_vars__build_live_sets_in_goal_12_p_0(TypeClassInfo_for_stack_alloc_info_173, AllocData_15, ResumeVars0_16, Else0_95, &Else_104, STATE_VARIABLE_StackAlloc_147_147, STATE_VARIABLE_StackAlloc_112, STATE_VARIABLE_Liveness_0_113, STATE_VARIABLE_Liveness_114, STATE_VARIABLE_NondetLiveness_0_115, &NondetLivenessElse_105, STATE_VARIABLE_ParStackVars_148_148, STATE_VARIABLE_ParStackVars_118);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NondetLivenessThen_103, NondetLivenessElse_105, STATE_VARIABLE_NondetLiveness_116);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_18 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Vars_92));
              MR_hl_field(3, base, 2) = ((MR_Box) (Cond_98));
              MR_hl_field(3, base, 3) = ((MR_Box) (Then_101));
              MR_hl_field(3, base, 4) = ((MR_Box) (Else_104));
            }
            *GoalInfo_20 = GoalInfo0_19;
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.live_vars.build_live_sets_in_goal_expr\'/14", (MR_String) "shorthand");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_scope_14_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_74,
  MR_Word AllocData_15,
  MR_Word ResumeVars0_16,
  MR_Word GoalExpr0_17,
  MR_Word * GoalExpr_18,
  MR_Word GoalInfo0_19,
  MR_Word * GoalInfo_20,
  MR_Box STATE_VARIABLE_StackAlloc_0_41,
  MR_Box * STATE_VARIABLE_StackAlloc_42,
  MR_Word STATE_VARIABLE_Liveness_0_43,
  MR_Word * STATE_VARIABLE_Liveness_44,
  MR_Word STATE_VARIABLE_NondetLiveness_0_45,
  MR_Word * STATE_VARIABLE_NondetLiveness_46,
  MR_Word STATE_VARIABLE_ParStackVars_0_47,
  MR_Word * STATE_VARIABLE_ParStackVars_48)
{
  MR_bool succeeded;
  MR_Word Reason_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))));
  MR_Word SubGoal0_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 2))));
  MR_Word TermVar_27;
  MR_Word Var_49;

  succeeded = ((((MR_tag((MR_Word) Reason_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_25, (MR_Integer) 0)))) == (MR_Integer) 6)));
  if (succeeded)
  {
    TermVar_27 = ((MR_Word) ((MR_hl_field(3, Reason_25, (MR_Integer) 1))));
    Var_49 = ((MR_Unsigned) ((MR_hl_field(3, Reason_25, (MR_Integer) 2))) & (MR_Integer) 3);
    succeeded = (Var_49 == (MR_Integer) 1);
  }
  if (succeeded)
  {
    *GoalExpr_18 = GoalExpr0_17;
    *GoalInfo_20 = GoalInfo0_19;
    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermVar_27, STATE_VARIABLE_Liveness_0_43, STATE_VARIABLE_Liveness_44);
    *STATE_VARIABLE_ParStackVars_48 = STATE_VARIABLE_ParStackVars_0_47;
    *STATE_VARIABLE_NondetLiveness_46 = STATE_VARIABLE_NondetLiveness_0_45;
    *STATE_VARIABLE_StackAlloc_42 = STATE_VARIABLE_StackAlloc_0_41;
  }
  else
  {
    MR_Word LCVar_28;
    MR_Word LCSVar_29;

    succeeded = ((((MR_tag((MR_Word) Reason_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_25, (MR_Integer) 0)))) == (MR_Integer) 8)));
    if (succeeded)
    {
      LCVar_28 = ((MR_Word) ((MR_hl_field(3, Reason_25, (MR_Integer) 1))));
      LCSVar_29 = ((MR_Word) ((MR_hl_field(3, Reason_25, (MR_Integer) 2))));
      {
        MR_Word NonLocals_31;
        MR_Word LCStackVars_33;
        MR_Word SubGoal_34;
        MR_Word InnerStackVars_35;
        MR_Word NeedInParConjSet_36;
        MR_Word NeedInParConj_37;
        MR_Word WouldDieSet_38;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word STATE_VARIABLE_ParStackVars_60_60;
        MR_Box STATE_VARIABLE_StackAlloc_61_61;
        MR_Word STATE_VARIABLE_Liveness_62_62;
        MR_Word STATE_VARIABLE_ParStackVars_64_64;
        MR_Word Var_85;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        NonLocals_31 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(GoalInfo0_19);
        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (ResumeVars0_16));
          MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = ((MR_Box) (STATE_VARIABLE_Liveness_0_43));
          MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_54));
        }
        {
          Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_52, 0) = ((MR_Box) (NonLocals_31));
          MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_53));
        }
        Var_51 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_52);
        {
          Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_58, 0) = ((MR_Box) (LCSVar_29));
          MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_57, 0) = ((MR_Box) (LCVar_28));
          MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_58));
        }
        Var_56 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_57);
        LCStackVars_33 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_51, Var_56);
        Var_85 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        {
          STATE_VARIABLE_ParStackVars_60_60 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, STATE_VARIABLE_ParStackVars_60_60, 0) = ((MR_Box) (LCStackVars_33));
          MR_hl_field(2, STATE_VARIABLE_ParStackVars_60_60, 1) = ((MR_Box) (Var_85));
        }
        switch (MR_tag((MR_Word) STATE_VARIABLE_ParStackVars_0_47)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.live_vars.par_stack_vars_start_loop_control\'/3", (MR_String) "Loop control scope found in other parallel context");
              return;
            }
            break;
          case (MR_Integer) 3:
            {
            }
            break;
        }
        ll_backend__live_vars__build_live_sets_in_goal_12_p_0(TypeClassInfo_for_stack_alloc_info_74, AllocData_15, ResumeVars0_16, SubGoal0_26, &SubGoal_34, STATE_VARIABLE_StackAlloc_0_41, &STATE_VARIABLE_StackAlloc_61_61, STATE_VARIABLE_Liveness_0_43, &STATE_VARIABLE_Liveness_62_62, STATE_VARIABLE_NondetLiveness_0_45, STATE_VARIABLE_NondetLiveness_46, STATE_VARIABLE_ParStackVars_60_60, &STATE_VARIABLE_ParStackVars_64_64);
        switch (MR_tag((MR_Word) STATE_VARIABLE_ParStackVars_64_64)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            InnerStackVars_35 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            break;
          case (MR_Integer) 1:
            {
              MR_Word StackVarss_90 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_ParStackVars_64_64, (MR_Integer) 1))));

              InnerStackVars_35 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), StackVarss_90);
            }
            break;
          case (MR_Integer) 2:
            InnerStackVars_35 = ((MR_Word) ((MR_hl_field(2, STATE_VARIABLE_ParStackVars_64_64, (MR_Integer) 1))));
            break;
          case (MR_Integer) 3:
            InnerStackVars_35 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_ParStackVars_64_64, (MR_Integer) 2))));
            break;
        }
        NeedInParConjSet_36 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCStackVars_33, InnerStackVars_35);
        NeedInParConj_37 = (MR_Word) (NeedInParConjSet_36);
        hlds__hlds_llds__goal_info_set_need_in_par_conj_3_p_0(NeedInParConj_37, GoalInfo0_19, GoalInfo_20);
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_stack_alloc_info_74, (MR_Integer) 0)), (MR_Integer) 7))));
        func_0(((MR_Box) (TypeClassInfo_for_stack_alloc_info_74)), ((MR_Box) (NeedInParConj_37)), ((MR_Box) (AllocData_15)), STATE_VARIABLE_StackAlloc_61_61, STATE_VARIABLE_StackAlloc_42);
        WouldDieSet_38 = parse_tree__set_of_var__difference_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeedInParConjSet_36, STATE_VARIABLE_Liveness_62_62);
        *STATE_VARIABLE_Liveness_44 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_62_62, WouldDieSet_38);
        ll_backend__live_vars__par_stack_vars_end_loop_control_4_p_0(WouldDieSet_38, STATE_VARIABLE_ParStackVars_0_47, STATE_VARIABLE_ParStackVars_64_64, STATE_VARIABLE_ParStackVars_48);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_18 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Reason_25));
          MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_34));
        }
      }
    }
    else
    {
      MR_Word CodeModel_40;
      MR_Word STATE_VARIABLE_NondetLiveness_70_70;
      MR_Word SubGoal_73;

      ll_backend__live_vars__build_live_sets_in_goal_12_p_0(TypeClassInfo_for_stack_alloc_info_74, AllocData_15, ResumeVars0_16, SubGoal0_26, &SubGoal_73, STATE_VARIABLE_StackAlloc_0_41, STATE_VARIABLE_StackAlloc_42, STATE_VARIABLE_Liveness_0_43, STATE_VARIABLE_Liveness_44, STATE_VARIABLE_NondetLiveness_0_45, &STATE_VARIABLE_NondetLiveness_70_70, STATE_VARIABLE_ParStackVars_0_47, STATE_VARIABLE_ParStackVars_48);
      CodeModel_40 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo0_19);
      switch (CodeModel_40) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          *STATE_VARIABLE_NondetLiveness_46 = STATE_VARIABLE_NondetLiveness_0_45;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_NondetLiveness_46 = STATE_VARIABLE_NondetLiveness_70_70;
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_18 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, base, 1) = ((MR_Box) (Reason_25));
        MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_73));
      }
      *GoalInfo_20 = GoalInfo0_19;
    }
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_cases_12_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_52,
  MR_Word AllocData_1,
  MR_Word ResumeVars0_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Box STATE_VARIABLE_StackAlloc_0_5,
  MR_Box * STATE_VARIABLE_StackAlloc_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_ParStackVars_0_11,
  MR_Word * STATE_VARIABLE_ParStackVars_12)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ParStackVars_12 = STATE_VARIABLE_ParStackVars_0_11;
    *HeadVar__10_10 = HeadVar__9_9;
    *HeadVar__8_8 = HeadVar__7_7;
    *STATE_VARIABLE_StackAlloc_6 = STATE_VARIABLE_StackAlloc_0_5;
  }
  else
  {
    MR_Word Case0_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Cases0_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Case_31;
    MR_Word Cases_32;
    MR_Word MainConsId_39 = ((MR_Word) ((MR_hl_field(0, Case0_29, (MR_Integer) 0))));
    MR_Word OtherConsIds_40 = ((MR_Word) ((MR_hl_field(0, Case0_29, (MR_Integer) 1))));
    MR_Word Goal0_41 = ((MR_Word) ((MR_hl_field(0, Case0_29, (MR_Integer) 2))));
    MR_Word Goal_42;
    MR_Word NondetLiveness1_43;
    MR_Word NondetLiveness2_45;
    MR_Box STATE_VARIABLE_StackAlloc_50_50;
    MR_Word STATE_VARIABLE_ParStackVars_51_51;
    MR_Word _Liveness2_44;

    ll_backend__live_vars__build_live_sets_in_goal_12_p_0(TypeClassInfo_for_stack_alloc_info_52, AllocData_1, ResumeVars0_2, Goal0_41, &Goal_42, STATE_VARIABLE_StackAlloc_0_5, &STATE_VARIABLE_StackAlloc_50_50, HeadVar__7_7, HeadVar__8_8, HeadVar__9_9, &NondetLiveness1_43, STATE_VARIABLE_ParStackVars_0_11, &STATE_VARIABLE_ParStackVars_51_51);
    {
      Case_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_31, 0) = ((MR_Box) (MainConsId_39));
      MR_hl_field(0, Case_31, 1) = ((MR_Box) (OtherConsIds_40));
      MR_hl_field(0, Case_31, 2) = ((MR_Box) (Goal_42));
    }
    ll_backend__live_vars__build_live_sets_in_cases_12_p_0(TypeClassInfo_for_stack_alloc_info_52, AllocData_1, ResumeVars0_2, Cases0_30, &Cases_32, STATE_VARIABLE_StackAlloc_50_50, STATE_VARIABLE_StackAlloc_6, HeadVar__7_7, &_Liveness2_44, HeadVar__9_9, &NondetLiveness2_45, STATE_VARIABLE_ParStackVars_51_51, STATE_VARIABLE_ParStackVars_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_31));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_32));
    }
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NondetLiveness1_43, NondetLiveness2_45, HeadVar__10_10);
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_disjuncts_13_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_61,
  MR_Word AllocData_1,
  MR_Word ResumeVars0_2,
  MR_Word DisjGoalInfo_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Box STATE_VARIABLE_StackAlloc_0_6,
  MR_Box * STATE_VARIABLE_StackAlloc_7,
  MR_Word HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word HeadVar__10_10,
  MR_Word * HeadVar__11_11,
  MR_Word STATE_VARIABLE_ParStackVars_0_12,
  MR_Word * STATE_VARIABLE_ParStackVars_13)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ParStackVars_13 = STATE_VARIABLE_ParStackVars_0_12;
    *HeadVar__11_11 = HeadVar__10_10;
    *HeadVar__9_9 = HeadVar__8_8;
    *STATE_VARIABLE_StackAlloc_7 = STATE_VARIABLE_StackAlloc_0_6;
  }
  else
  {
    MR_Word Goal0_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Goals0_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Goal_34;
    MR_Word Goals_35;
    MR_Word GoalInfo_43;
    MR_Word NondetLiveness1_44;
    MR_Word NondetLiveness2_46;
    MR_Word DisjCodeModel_47;
    MR_Box STATE_VARIABLE_StackAlloc_56_56;
    MR_Word STATE_VARIABLE_ParStackVars_57_57;
    MR_Word _Liveness2_45;

    ll_backend__live_vars__build_live_sets_in_goal_12_p_0(TypeClassInfo_for_stack_alloc_info_61, AllocData_1, ResumeVars0_2, Goal0_32, &Goal_34, STATE_VARIABLE_StackAlloc_0_6, &STATE_VARIABLE_StackAlloc_56_56, HeadVar__8_8, HeadVar__9_9, HeadVar__10_10, &NondetLiveness1_44, STATE_VARIABLE_ParStackVars_0_12, &STATE_VARIABLE_ParStackVars_57_57);
    GoalInfo_43 = ((MR_Word) ((MR_hl_field(0, Goal_34, (MR_Integer) 1))));
    ll_backend__live_vars__build_live_sets_in_disjuncts_13_p_0(TypeClassInfo_for_stack_alloc_info_61, AllocData_1, ResumeVars0_2, DisjGoalInfo_3, Goals0_33, &Goals_35, STATE_VARIABLE_StackAlloc_56_56, STATE_VARIABLE_StackAlloc_7, HeadVar__8_8, &_Liveness2_45, HeadVar__10_10, &NondetLiveness2_46, STATE_VARIABLE_ParStackVars_57_57, STATE_VARIABLE_ParStackVars_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_34));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_35));
    }
    DisjCodeModel_47 = hlds__code_model__goal_info_get_code_model_1_f_0(DisjGoalInfo_3);
    switch (DisjCodeModel_47) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        *HeadVar__11_11 = HeadVar__10_10;
        break;
      case (MR_Integer) 2:
        {
          MR_Word NondetLiveness3_48;
          MR_Word Resume_49;
          MR_Word ResumePointVars_50;
          MR_Word Locs_51;
          MR_Word Var_60;

          parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NondetLiveness1_44, NondetLiveness2_46, &NondetLiveness3_48);
          hlds__hlds_llds__goal_info_get_resume_point_2_p_0(GoalInfo_43, &Resume_49);
          succeeded = (Resume_49 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ResumePointVars_50 = ((MR_Word) ((MR_hl_field(1, Resume_49, (MR_Integer) 0))));
            Locs_51 = ((MR_Unsigned) ((MR_hl_field(1, Resume_49, (MR_Integer) 1))) & (MR_Integer) 3);
            Var_60 = (MR_Integer) 1;
            switch (Locs_51) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                succeeded = (Var_60 == (MR_Integer) 0);
                break;
              case (MR_Integer) 2:
                succeeded = (Var_60 == (MR_Integer) 1);
                break;
              case (MR_Integer) 1:
                succeeded = (Var_60 == (MR_Integer) 1);
                break;
              case (MR_Integer) 3:
                succeeded = (Var_60 == (MR_Integer) 1);
                break;
            }
          }
          if (succeeded)
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NondetLiveness3_48, ResumePointVars_50, HeadVar__11_11);
          else
            *HeadVar__11_11 = NondetLiveness3_48;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_disj_14_p_0_1(
  void * env_ptr_arg)
{
  struct ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0_s * env_ptr = (struct ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_disj_14_p_0_3(
  void * env_ptr_arg)
{
  struct ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0_s * env_ptr = (struct ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__Disjunct_55 = ((MR_Word) ((env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__conv0_Disjunct_55));
  ll_backend__live_vars__build_live_sets_in_disj_14_p_0_2(env_ptr);
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_disj_14_p_0_2(
  void * env_ptr_arg)
{
  struct ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0_s * env_ptr = (struct ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__Disjunct_55, (MR_Integer) 0))));
    MR_Word Var_38;
    MR_Unsigned packed_word_1;

    (env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__DisjunctGoalInfo_36 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__Disjunct_55, (MR_Integer) 1))));
    hlds__hlds_llds__goal_info_get_resume_point_2_p_0((env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__DisjunctGoalInfo_36, &(env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__DisjunctResumePoint_37);
    (env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__succeeded = ((env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__DisjunctResumePoint_37 != (MR_Word) ((MR_Unsigned) 0U));
    if ((env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__succeeded)
    {
      Var_38 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__DisjunctResumePoint_37, (MR_Integer) 0))));
      packed_word_1 = (MR_Unsigned) ((MR_hl_field(1, (env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__DisjunctResumePoint_37, (MR_Integer) 1)));
      (env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__Locs_39 = ((MR_Unsigned) ((MR_hl_field(1, (env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__DisjunctResumePoint_37, (MR_Integer) 1))) & (MR_Integer) 3);
      (env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__Var_53 = (MR_Integer) 1;
      switch ((env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__Locs_39) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          (env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__succeeded = ((env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__Var_53 == (MR_Integer) 0);
          break;
        case (MR_Integer) 2:
          (env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__succeeded = ((env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__Var_53 == (MR_Integer) 1);
          break;
        case (MR_Integer) 1:
          (env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__succeeded = ((env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__Var_53 == (MR_Integer) 1);
          break;
        case (MR_Integer) 3:
          (env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__succeeded = ((env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__Var_53 == (MR_Integer) 1);
          break;
      }
      if ((env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__succeeded)
        ll_backend__live_vars__build_live_sets_in_disj_14_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_disj_14_p_0_4(
  void * env_ptr_arg)
{
  struct ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0_s * env_ptr = (struct ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), &(env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__conv0_Disjunct_55, (env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__Goals_26, ll_backend__live_vars__build_live_sets_in_disj_14_p_0_3, env_ptr);
      (env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_disj_14_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_56,
  MR_Word AllocData_15,
  MR_Word ResumeVars0_16,
  MR_Word GoalExpr0_17,
  MR_Word * GoalExpr_18,
  MR_Word GoalInfo0_19,
  MR_Word * GoalInfo_20,
  MR_Box STATE_VARIABLE_StackAlloc_0_40,
  MR_Box * STATE_VARIABLE_StackAlloc_41,
  MR_Word STATE_VARIABLE_Liveness_0_42,
  MR_Word * STATE_VARIABLE_Liveness_43,
  MR_Word STATE_VARIABLE_NondetLiveness_0_44,
  MR_Word * STATE_VARIABLE_NondetLiveness_45,
  MR_Word STATE_VARIABLE_ParStackVars_0_46,
  MR_Word * STATE_VARIABLE_ParStackVars_47)
{
  struct ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0_s env;

  {
    MR_Word Goals0_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_NondetLiveness_50_50;

    ll_backend__live_vars__build_live_sets_in_disjuncts_13_p_0(TypeClassInfo_for_stack_alloc_info_56, AllocData_15, ResumeVars0_16, GoalInfo0_19, Goals0_25, &(env).ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__Goals_26, STATE_VARIABLE_StackAlloc_0_40, STATE_VARIABLE_StackAlloc_41, STATE_VARIABLE_Liveness_0_42, STATE_VARIABLE_Liveness_43, STATE_VARIABLE_NondetLiveness_0_44, &STATE_VARIABLE_NondetLiveness_50_50, STATE_VARIABLE_ParStackVars_0_46, STATE_VARIABLE_ParStackVars_47);
    if (((env).ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__Goals_26 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_NondetLiveness_45 = STATE_VARIABLE_NondetLiveness_50_50;
    else
    {
      MR_Word FirstGoal_27 = ((MR_Word) ((MR_hl_field(1, (env).ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__Goals_26, (MR_Integer) 0))));
      MR_Word FirstGoalInfo_30 = ((MR_Word) ((MR_hl_field(0, FirstGoal_27, (MR_Integer) 1))));
      MR_Word ResumePoint_31;
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(1, (env).ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__Goals_26, (MR_Integer) 1))));
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, FirstGoal_27, (MR_Integer) 0))));

      hlds__hlds_llds__goal_info_get_resume_point_2_p_0(FirstGoalInfo_30, &ResumePoint_31);
      if ((ResumePoint_31 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_NondetLiveness_45 = STATE_VARIABLE_NondetLiveness_50_50;
      else
      {
        MR_Word ResumeVars_32 = ((MR_Word) ((MR_hl_field(1, ResumePoint_31, (MR_Integer) 0))));
        MR_Word _Locs_33 = ((MR_Unsigned) ((MR_hl_field(1, ResumePoint_31, (MR_Integer) 1))) & (MR_Integer) 3);
        MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(1, ResumePoint_31, (MR_Integer) 1)));
        MR_Word Var_52;

        Var_52 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo0_19);
        (env).ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__succeeded = (Var_52 == (MR_Integer) 2);
        if ((env).ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__succeeded)
          ll_backend__live_vars__build_live_sets_in_disj_14_p_0_4(&env);
        if ((env).ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__succeeded)
          parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_NondetLiveness_50_50, ResumeVars_32, STATE_VARIABLE_NondetLiveness_45);
        else
          *STATE_VARIABLE_NondetLiveness_45 = STATE_VARIABLE_NondetLiveness_50_50;
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *GoalExpr_18 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, base, 1) = ((MR_Box) ((env).ll_backend__live_vars__build_live_sets_in_disj_14_p_0_env_0__Goals_26));
    }
    *GoalInfo_20 = GoalInfo0_19;
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_par_conj_12_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_47,
  MR_Word AllocData_1,
  MR_Word ResumeVars0_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Box STATE_VARIABLE_StackAlloc_0_5,
  MR_Box * STATE_VARIABLE_StackAlloc_6,
  MR_Word HeadVar__7_7,
  MR_Word * Liveness_8,
  MR_Word STATE_VARIABLE_NondetLiveness_0_9,
  MR_Word * STATE_VARIABLE_NondetLiveness_10,
  MR_Word STATE_VARIABLE_ParStackVars_0_11,
  MR_Word * STATE_VARIABLE_ParStackVars_12)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *Liveness_8 = HeadVar__7_7;
    *STATE_VARIABLE_ParStackVars_12 = STATE_VARIABLE_ParStackVars_0_11;
    *STATE_VARIABLE_NondetLiveness_10 = STATE_VARIABLE_NondetLiveness_0_9;
    *STATE_VARIABLE_StackAlloc_6 = STATE_VARIABLE_StackAlloc_0_5;
  }
  else
  {
    MR_Word Goal0_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Goals0_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Goal_29;
    MR_Word Goals_30;
    MR_Box STATE_VARIABLE_StackAlloc_43_43;
    MR_Word STATE_VARIABLE_NondetLiveness_44_44;
    MR_Word STATE_VARIABLE_ParStackVars_45_45;
    MR_Word STATE_VARIABLE_ParStackVars_46_46;
    MR_Word Nonlocals_48;
    MR_Word PrevSets_49;
    MR_Word CurSet_50;
    MR_Word _Liveness1_36;

    ll_backend__live_vars__build_live_sets_in_goal_12_p_0(TypeClassInfo_for_stack_alloc_info_47, AllocData_1, ResumeVars0_2, Goal0_27, &Goal_29, STATE_VARIABLE_StackAlloc_0_5, &STATE_VARIABLE_StackAlloc_43_43, HeadVar__7_7, Liveness_8, STATE_VARIABLE_NondetLiveness_0_9, &STATE_VARIABLE_NondetLiveness_44_44, STATE_VARIABLE_ParStackVars_0_11, &STATE_VARIABLE_ParStackVars_45_45);
    succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_ParStackVars_45_45)) == (MR_Integer) 1);
    if (succeeded)
    {
      Nonlocals_48 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_ParStackVars_45_45, (MR_Integer) 0))));
      PrevSets_49 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_ParStackVars_45_45, (MR_Integer) 1))));
      CurSet_50 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_ParStackVars_45_45, (MR_Integer) 2))));
      {
        MR_Word Var_51;
        MR_Word Var_52;

        {
          Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_51, 0) = ((MR_Box) (CurSet_50));
          MR_hl_field(1, Var_51, 1) = ((MR_Box) (PrevSets_49));
        }
        Var_52 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        {
          STATE_VARIABLE_ParStackVars_46_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_ParStackVars_46_46, 0) = ((MR_Box) (Nonlocals_48));
          MR_hl_field(1, STATE_VARIABLE_ParStackVars_46_46, 1) = ((MR_Box) (Var_51));
          MR_hl_field(1, STATE_VARIABLE_ParStackVars_46_46, 2) = ((MR_Box) (Var_52));
        }
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.live_vars.par_stack_vars_next_par_conjunct\'/2", (MR_String) "expected parallel_conjunction/3");
        return;
      }
    ll_backend__live_vars__build_live_sets_in_par_conj_12_p_0(TypeClassInfo_for_stack_alloc_info_47, AllocData_1, ResumeVars0_2, Goals0_28, &Goals_30, STATE_VARIABLE_StackAlloc_43_43, STATE_VARIABLE_StackAlloc_6, HeadVar__7_7, &_Liveness1_36, STATE_VARIABLE_NondetLiveness_44_44, STATE_VARIABLE_NondetLiveness_10, STATE_VARIABLE_ParStackVars_46_46, STATE_VARIABLE_ParStackVars_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_29));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_30));
    }
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_conjuncts_12_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_56,
  MR_Word AllocData_1,
  MR_Word ResumeVars0_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Box STATE_VARIABLE_StackAlloc_0_5,
  MR_Box * STATE_VARIABLE_StackAlloc_6,
  MR_Word STATE_VARIABLE_Liveness_0_7,
  MR_Word * STATE_VARIABLE_Liveness_8,
  MR_Word STATE_VARIABLE_NondetLiveness_0_9,
  MR_Word * STATE_VARIABLE_NondetLiveness_10,
  MR_Word STATE_VARIABLE_ParStackVars_0_11,
  MR_Word * STATE_VARIABLE_ParStackVars_12)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ParStackVars_12 = STATE_VARIABLE_ParStackVars_0_11;
    *STATE_VARIABLE_NondetLiveness_10 = STATE_VARIABLE_NondetLiveness_0_9;
    *STATE_VARIABLE_Liveness_8 = STATE_VARIABLE_Liveness_0_7;
    *STATE_VARIABLE_StackAlloc_6 = STATE_VARIABLE_StackAlloc_0_5;
  }
  else
  {
    MR_Word Goal0_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Goals0_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Goal_31;
    MR_Word Goals_32;
    MR_Word GoalInfo_38 = ((MR_Word) ((MR_hl_field(0, Goal0_29, (MR_Integer) 1))));
    MR_Word InstMapDelta_39;

    InstMapDelta_39 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_38);
    succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(InstMapDelta_39);
    if (succeeded)
    {
      ll_backend__live_vars__build_live_sets_in_goal_12_p_0(TypeClassInfo_for_stack_alloc_info_56, AllocData_1, ResumeVars0_2, Goal0_29, &Goal_31, STATE_VARIABLE_StackAlloc_0_5, STATE_VARIABLE_StackAlloc_6, STATE_VARIABLE_Liveness_0_7, STATE_VARIABLE_Liveness_8, STATE_VARIABLE_NondetLiveness_0_9, STATE_VARIABLE_NondetLiveness_10, STATE_VARIABLE_ParStackVars_0_11, STATE_VARIABLE_ParStackVars_12);
      Goals_32 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Box STATE_VARIABLE_StackAlloc_52_52;
      MR_Word STATE_VARIABLE_Liveness_53_53;
      MR_Word STATE_VARIABLE_NondetLiveness_54_54;
      MR_Word STATE_VARIABLE_ParStackVars_55_55;

      ll_backend__live_vars__build_live_sets_in_goal_12_p_0(TypeClassInfo_for_stack_alloc_info_56, AllocData_1, ResumeVars0_2, Goal0_29, &Goal_31, STATE_VARIABLE_StackAlloc_0_5, &STATE_VARIABLE_StackAlloc_52_52, STATE_VARIABLE_Liveness_0_7, &STATE_VARIABLE_Liveness_53_53, STATE_VARIABLE_NondetLiveness_0_9, &STATE_VARIABLE_NondetLiveness_54_54, STATE_VARIABLE_ParStackVars_0_11, &STATE_VARIABLE_ParStackVars_55_55);
      ll_backend__live_vars__build_live_sets_in_conjuncts_12_p_0(TypeClassInfo_for_stack_alloc_info_56, AllocData_1, ResumeVars0_2, Goals0_30, &Goals_32, STATE_VARIABLE_StackAlloc_52_52, STATE_VARIABLE_StackAlloc_6, STATE_VARIABLE_Liveness_53_53, STATE_VARIABLE_Liveness_8, STATE_VARIABLE_NondetLiveness_54_54, STATE_VARIABLE_NondetLiveness_10, STATE_VARIABLE_ParStackVars_55_55, STATE_VARIABLE_ParStackVars_12);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_31));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_32));
    }
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_conj_14_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_57,
  MR_Word AllocData_15,
  MR_Word ResumeVars0_16,
  MR_Word GoalExpr0_17,
  MR_Word * GoalExpr_18,
  MR_Word GoalInfo0_19,
  MR_Word * GoalInfo_20,
  MR_Box STATE_VARIABLE_StackAlloc_0_35,
  MR_Box * STATE_VARIABLE_StackAlloc_36,
  MR_Word STATE_VARIABLE_Liveness_0_37,
  MR_Word * STATE_VARIABLE_Liveness_38,
  MR_Word STATE_VARIABLE_NondetLiveness_0_39,
  MR_Word * STATE_VARIABLE_NondetLiveness_40,
  MR_Word STATE_VARIABLE_ParStackVars_0_41,
  MR_Word * STATE_VARIABLE_ParStackVars_42)
{
  MR_Word ConjType_25 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Goals0_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 2))));
  MR_Word Goals_27;

  switch (ConjType_25) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word NonLocals_28;
        MR_Word LiveSet_29;
        MR_Word OuterNonLocals_30;
        MR_Word InnerStackVars_32;
        MR_Word InnerNonLocals_33;
        MR_Word NeedInParConj_34;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word STATE_VARIABLE_ParStackVars_51_51;
        MR_Box STATE_VARIABLE_StackAlloc_52_52;
        MR_Word STATE_VARIABLE_ParStackVars_55_55;
        MR_Word Var_56;
        MR_Word InnerNonLocals_69;
        MR_Word OuterNonLocals_70;
        MR_Word Var_72;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        NonLocals_28 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(GoalInfo0_19);
        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (ResumeVars0_16));
          MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_48, 0) = ((MR_Box) (STATE_VARIABLE_Liveness_0_37));
          MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_49));
        }
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (NonLocals_28));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_48));
        }
        LiveSet_29 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_47);
        Var_72 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        switch (MR_tag((MR_Word) STATE_VARIABLE_ParStackVars_0_41)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              OuterNonLocals_30 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
              OuterNonLocals_70 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            }
            break;
          case (MR_Integer) 1:
            {
              OuterNonLocals_30 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_ParStackVars_0_41, (MR_Integer) 0))));
              OuterNonLocals_70 = OuterNonLocals_30;
            }
            break;
          case (MR_Integer) 2:
            {
              OuterNonLocals_30 = ((MR_Word) ((MR_hl_field(2, STATE_VARIABLE_ParStackVars_0_41, (MR_Integer) 0))));
              OuterNonLocals_70 = OuterNonLocals_30;
            }
            break;
          case (MR_Integer) 3:
            {
              OuterNonLocals_30 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
              OuterNonLocals_70 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            }
            break;
        }
        InnerNonLocals_69 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OuterNonLocals_70, LiveSet_29);
        {
          STATE_VARIABLE_ParStackVars_51_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_ParStackVars_51_51, 0) = ((MR_Box) (InnerNonLocals_69));
          MR_hl_field(1, STATE_VARIABLE_ParStackVars_51_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, STATE_VARIABLE_ParStackVars_51_51, 2) = ((MR_Box) (Var_72));
        }
        ll_backend__live_vars__build_live_sets_in_par_conj_12_p_0(TypeClassInfo_for_stack_alloc_info_57, AllocData_15, ResumeVars0_16, Goals0_26, &Goals_27, STATE_VARIABLE_StackAlloc_0_35, &STATE_VARIABLE_StackAlloc_52_52, STATE_VARIABLE_Liveness_0_37, STATE_VARIABLE_Liveness_38, STATE_VARIABLE_NondetLiveness_0_39, STATE_VARIABLE_NondetLiveness_40, STATE_VARIABLE_ParStackVars_51_51, &STATE_VARIABLE_ParStackVars_55_55);
        switch (MR_tag((MR_Word) STATE_VARIABLE_ParStackVars_55_55)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            InnerStackVars_32 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
            break;
          case (MR_Integer) 1:
            {
              MR_Word StackVarss_85 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_ParStackVars_55_55, (MR_Integer) 1))));

              InnerStackVars_32 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), StackVarss_85);
            }
            break;
          case (MR_Integer) 2:
            InnerStackVars_32 = ((MR_Word) ((MR_hl_field(2, STATE_VARIABLE_ParStackVars_55_55, (MR_Integer) 1))));
            break;
          case (MR_Integer) 3:
            InnerStackVars_32 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_ParStackVars_55_55, (MR_Integer) 2))));
            break;
        }
        InnerNonLocals_33 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LiveSet_29, OuterNonLocals_30);
        Var_56 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InnerNonLocals_33, InnerStackVars_32);
        NeedInParConj_34 = (MR_Word) (Var_56);
        hlds__hlds_llds__goal_info_set_need_in_par_conj_3_p_0(NeedInParConj_34, GoalInfo0_19, GoalInfo_20);
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_stack_alloc_info_57, (MR_Integer) 0)), (MR_Integer) 7))));
        func_0(((MR_Box) (TypeClassInfo_for_stack_alloc_info_57)), ((MR_Box) (NeedInParConj_34)), ((MR_Box) (AllocData_15)), STATE_VARIABLE_StackAlloc_52_52, STATE_VARIABLE_StackAlloc_36);
        ll_backend__live_vars__par_stack_vars_end_parallel_conjunction_4_p_0(LiveSet_29, STATE_VARIABLE_ParStackVars_0_41, STATE_VARIABLE_ParStackVars_55_55, STATE_VARIABLE_ParStackVars_42);
      }
      break;
    case (MR_Integer) 0:
      {
        *GoalInfo_20 = GoalInfo0_19;
        ll_backend__live_vars__build_live_sets_in_conjuncts_12_p_0(TypeClassInfo_for_stack_alloc_info_57, AllocData_15, ResumeVars0_16, Goals0_26, &Goals_27, STATE_VARIABLE_StackAlloc_0_35, STATE_VARIABLE_StackAlloc_36, STATE_VARIABLE_Liveness_0_37, STATE_VARIABLE_Liveness_38, STATE_VARIABLE_NondetLiveness_0_39, STATE_VARIABLE_NondetLiveness_40, STATE_VARIABLE_ParStackVars_0_41, STATE_VARIABLE_ParStackVars_42);
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *GoalExpr_18 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (ConjType_25));
    MR_hl_field(3, base, 2) = ((MR_Box) (Goals_27));
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_12_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_55,
  MR_Word AllocData_13,
  MR_Word ResumeVars0_14,
  MR_Word Goal0_15,
  MR_Word * Goal_16,
  MR_Box STATE_VARIABLE_StackAlloc_0_38,
  MR_Box * STATE_VARIABLE_StackAlloc_39,
  MR_Word STATE_VARIABLE_Liveness_0_40,
  MR_Word * STATE_VARIABLE_Liveness_41,
  MR_Word STATE_VARIABLE_NondetLiveness_0_42,
  MR_Word * STATE_VARIABLE_NondetLiveness_43,
  MR_Word STATE_VARIABLE_ParStackVars_0_44,
  MR_Word * STATE_VARIABLE_ParStackVars_45)
{
  MR_Word GoalExpr0_21 = ((MR_Word) ((MR_hl_field(0, Goal0_15, (MR_Integer) 0))));
  MR_Word GoalInfo0_22 = ((MR_Word) ((MR_hl_field(0, Goal0_15, (MR_Integer) 1))));
  MR_Word PreDeaths_23;
  MR_Word PreBirths_24;
  MR_Word PostDeaths_25;
  MR_Word PostBirths_26;
  MR_Word HasSubGoals_27;
  MR_Word ResumePoint_28;
  MR_Word ResumeVars1_29;
  MR_Word GoalInfo1_30;
  MR_Word GoalExpr_36;
  MR_Word GoalInfo_37;
  MR_Word STATE_VARIABLE_Liveness_46_46;
  MR_Word STATE_VARIABLE_Liveness_47_47;
  MR_Box STATE_VARIABLE_StackAlloc_49_49;
  MR_Word STATE_VARIABLE_Liveness_54_54;

  hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(GoalInfo0_22, &PreDeaths_23);
  hlds__hlds_llds__goal_info_get_pre_births_2_p_0(GoalInfo0_22, &PreBirths_24);
  hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(GoalInfo0_22, &PostDeaths_25);
  hlds__hlds_llds__goal_info_get_post_births_2_p_0(GoalInfo0_22, &PostBirths_26);
  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_0_40, PreDeaths_23, &STATE_VARIABLE_Liveness_46_46);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_46_46, PreBirths_24, &STATE_VARIABLE_Liveness_47_47);
  HasSubGoals_27 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(GoalExpr0_21);
  hlds__hlds_llds__goal_info_get_resume_point_2_p_0(GoalInfo0_22, &ResumePoint_28);
  if ((ResumePoint_28 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    ResumeVars1_29 = ResumeVars0_14;
    GoalInfo1_30 = GoalInfo0_22;
    STATE_VARIABLE_StackAlloc_49_49 = STATE_VARIABLE_StackAlloc_0_38;
  }
  else
  {
    MR_Word ResumePointVars_31 = ((MR_Word) ((MR_hl_field(1, ResumePoint_28, (MR_Integer) 0))));
    MR_Word Locs_32 = ((MR_Unsigned) ((MR_hl_field(1, ResumePoint_28, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ResumeOnStack_34;
    MR_Word NeedInResume_35;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    switch (Locs_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ResumeVars1_29 = ResumeVars0_14;
          ResumeOnStack_34 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 2:
        {
          parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeVars0_14, ResumePointVars_31, &ResumeVars1_29);
          ResumeOnStack_34 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 1:
        {
          parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeVars0_14, ResumePointVars_31, &ResumeVars1_29);
          ResumeOnStack_34 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 3:
        {
          parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeVars0_14, ResumePointVars_31, &ResumeVars1_29);
          ResumeOnStack_34 = (MR_Integer) 1;
        }
        break;
    }
    {
      NeedInResume_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NeedInResume_35, 0) = (MR_Box) ((MR_Unsigned) (ResumeOnStack_34));
      MR_hl_field(0, NeedInResume_35, 1) = ((MR_Box) (ResumeVars1_29));
      MR_hl_field(0, NeedInResume_35, 2) = ((MR_Box) (STATE_VARIABLE_NondetLiveness_0_42));
    }
    hlds__hlds_llds__goal_info_set_need_in_resume_3_p_0(NeedInResume_35, GoalInfo0_22, &GoalInfo1_30);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_stack_alloc_info_55, (MR_Integer) 0)), (MR_Integer) 6))));
    func_0(((MR_Box) (TypeClassInfo_for_stack_alloc_info_55)), ((MR_Box) (NeedInResume_35)), ((MR_Box) (AllocData_13)), STATE_VARIABLE_StackAlloc_0_38, &STATE_VARIABLE_StackAlloc_49_49);
  }
  switch (HasSubGoals_27) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_Liveness_48_48;

        parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_47_47, PostDeaths_25, &STATE_VARIABLE_Liveness_48_48);
        ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0(TypeClassInfo_for_stack_alloc_info_55, AllocData_13, ResumeVars1_29, GoalExpr0_21, &GoalExpr_36, GoalInfo1_30, &GoalInfo_37, STATE_VARIABLE_StackAlloc_49_49, STATE_VARIABLE_StackAlloc_39, STATE_VARIABLE_Liveness_48_48, &STATE_VARIABLE_Liveness_54_54, STATE_VARIABLE_NondetLiveness_0_42, STATE_VARIABLE_NondetLiveness_43, STATE_VARIABLE_ParStackVars_0_44, STATE_VARIABLE_ParStackVars_45);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word STATE_VARIABLE_Liveness_51_64;

        ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0(TypeClassInfo_for_stack_alloc_info_55, AllocData_13, ResumeVars1_29, GoalExpr0_21, &GoalExpr_36, GoalInfo1_30, &GoalInfo_37, STATE_VARIABLE_StackAlloc_49_49, STATE_VARIABLE_StackAlloc_39, STATE_VARIABLE_Liveness_47_47, &STATE_VARIABLE_Liveness_51_64, STATE_VARIABLE_NondetLiveness_0_42, STATE_VARIABLE_NondetLiveness_43, STATE_VARIABLE_ParStackVars_0_44, STATE_VARIABLE_ParStackVars_45);
        parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_51_64, PostDeaths_25, &STATE_VARIABLE_Liveness_54_54);
      }
      break;
  }
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_54_54, PostBirths_26, STATE_VARIABLE_Liveness_41);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_36));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_37));
  }
}

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_end_loop_control_4_p_0(
  MR_Word NewWouldDieSet_5,
  MR_Word OldParStackVars_6,
  MR_Word ParStackVars0_7,
  MR_Word * ParStackVars_8)
{
  MR_Word NewStackVars_9;

  switch (MR_tag((MR_Word) ParStackVars0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      NewStackVars_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      break;
    case (MR_Integer) 1:
      {
        MR_Word StackVarss_28 = ((MR_Word) ((MR_hl_field(1, ParStackVars0_7, (MR_Integer) 1))));

        NewStackVars_9 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), StackVarss_28);
      }
      break;
    case (MR_Integer) 2:
      NewStackVars_9 = ((MR_Word) ((MR_hl_field(2, ParStackVars0_7, (MR_Integer) 1))));
      break;
    case (MR_Integer) 3:
      NewStackVars_9 = ((MR_Word) ((MR_hl_field(3, ParStackVars0_7, (MR_Integer) 2))));
      break;
  }
  switch (MR_tag((MR_Word) OldParStackVars_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_19;
        MR_Word Var_21;

        {
          Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_19, 0) = ((MR_Box) (NewStackVars_9));
          MR_hl_field(1, Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_21 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *ParStackVars_8 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) (Var_19));
          MR_hl_field(3, base, 1) = ((MR_Box) (NewWouldDieSet_5));
          MR_hl_field(3, base, 2) = ((MR_Box) (Var_21));
        }
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.live_vars.par_stack_vars_end_loop_control\'/4", (MR_String) "Loop control scope found in other parallel context");
        return;
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word StackVarsList_10 = ((MR_Word) ((MR_hl_field(3, OldParStackVars_6, (MR_Integer) 0))));
        MR_Word WouldDieSet0_11 = ((MR_Word) ((MR_hl_field(3, OldParStackVars_6, (MR_Integer) 1))));
        MR_Word StackVarsAcc_12 = ((MR_Word) ((MR_hl_field(3, OldParStackVars_6, (MR_Integer) 2))));
        MR_Word WouldDieSet_13;
        MR_Word Var_22;

        WouldDieSet_13 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), WouldDieSet0_11, NewWouldDieSet_5);
        {
          Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_22, 0) = ((MR_Box) (NewStackVars_9));
          MR_hl_field(1, Var_22, 1) = ((MR_Box) (StackVarsList_10));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *ParStackVars_8 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) (Var_22));
          MR_hl_field(3, base, 1) = ((MR_Box) (WouldDieSet_13));
          MR_hl_field(3, base, 2) = ((MR_Box) (StackVarsAcc_12));
        }
      }
      break;
  }
}

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_end_parallel_conjunction_4_p_0(
  MR_Word LiveSet_5,
  MR_Word OuterParStackVars_6,
  MR_Word ParStackVars0_7,
  MR_Word * ParStackVars_8)
{
  MR_Word InnerStackVars_9;

  switch (MR_tag((MR_Word) ParStackVars0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      InnerStackVars_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      break;
    case (MR_Integer) 1:
      {
        MR_Word StackVarss_30 = ((MR_Word) ((MR_hl_field(1, ParStackVars0_7, (MR_Integer) 1))));

        InnerStackVars_9 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), StackVarss_30);
      }
      break;
    case (MR_Integer) 2:
      InnerStackVars_9 = ((MR_Word) ((MR_hl_field(2, ParStackVars0_7, (MR_Integer) 1))));
      break;
    case (MR_Integer) 3:
      InnerStackVars_9 = ((MR_Word) ((MR_hl_field(3, ParStackVars0_7, (MR_Integer) 2))));
      break;
  }
  switch (MR_tag((MR_Word) OuterParStackVars_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *ParStackVars_8 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word OuterNonLocals_10 = ((MR_Word) ((MR_hl_field(1, OuterParStackVars_6, (MR_Integer) 0))));
        MR_Word OuterLocalStackVars_11 = ((MR_Word) ((MR_hl_field(1, OuterParStackVars_6, (MR_Integer) 1))));
        MR_Word OuterAccStackVars0_12 = ((MR_Word) ((MR_hl_field(1, OuterParStackVars_6, (MR_Integer) 2))));
        MR_Word OuterAccStackVars_13;
        MR_Word Var_18;
        MR_Word Var_19;

        Var_18 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OuterAccStackVars0_12, InnerStackVars_9);
        Var_19 = parse_tree__set_of_var__difference_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LiveSet_5, OuterNonLocals_10);
        OuterAccStackVars_13 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_18, Var_19);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *ParStackVars_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (OuterNonLocals_10));
          MR_hl_field(1, base, 1) = ((MR_Box) (OuterLocalStackVars_11));
          MR_hl_field(1, base, 2) = ((MR_Box) (OuterAccStackVars_13));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word StackVars0_14 = ((MR_Word) ((MR_hl_field(2, OuterParStackVars_6, (MR_Integer) 1))));
        MR_Word StackVars_15;
        MR_Word Var_20;
        MR_Word Var_21;
        MR_Word OuterNonLocals_23 = ((MR_Word) ((MR_hl_field(2, OuterParStackVars_6, (MR_Integer) 0))));

        Var_20 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), StackVars0_14, InnerStackVars_9);
        Var_21 = parse_tree__set_of_var__difference_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LiveSet_5, OuterNonLocals_23);
        StackVars_15 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_20, Var_21);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ParStackVars_8 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (OuterNonLocals_23));
          MR_hl_field(2, base, 1) = ((MR_Box) (StackVars_15));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word StackVarsList_16 = ((MR_Word) ((MR_hl_field(3, OuterParStackVars_6, (MR_Integer) 0))));
        MR_Word WouldDieSet_17 = ((MR_Word) ((MR_hl_field(3, OuterParStackVars_6, (MR_Integer) 1))));
        MR_Word Var_22;
        MR_Word StackVars0_24 = ((MR_Word) ((MR_hl_field(3, OuterParStackVars_6, (MR_Integer) 2))));
        MR_Word StackVars_25;

        Var_22 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), StackVars0_24, InnerStackVars_9);
        StackVars_25 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_22, LiveSet_5);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *ParStackVars_8 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) (StackVarsList_16));
          MR_hl_field(3, base, 1) = ((MR_Box) (WouldDieSet_17));
          MR_hl_field(3, base, 2) = ((MR_Box) (StackVars_25));
        }
      }
      break;
  }
}

static MR_Box MR_CALL 
ll_backend__live_vars__build_live_sets_in_foreign_proc_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_foreign_proc_14_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_63,
  MR_Word AllocData_15,
  MR_Word ResumeVars0_16,
  MR_Word GoalExpr0_17,
  MR_Word * GoalExpr_18,
  MR_Word GoalInfo0_19,
  MR_Word * GoalInfo_20,
  MR_Box STATE_VARIABLE_StackAlloc_0_42,
  MR_Box * STATE_VARIABLE_StackAlloc_43,
  MR_Word STATE_VARIABLE_Liveness_0_44,
  MR_Word * STATE_VARIABLE_Liveness_45,
  MR_Word STATE_VARIABLE_NondetLiveness_0_46,
  MR_Word * STATE_VARIABLE_NondetLiveness_47,
  MR_Word STATE_VARIABLE_ParStackVars_0_48,
  MR_Word * STATE_VARIABLE_ParStackVars_49)
{
  MR_bool succeeded;
  MR_Word Attributes_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))));
  MR_Word PredId_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 2))));
  MR_Integer ProcId_27 = ((MR_Integer) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 3))));
  MR_Word Args_28 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 4))));
  MR_Word ModuleInfo_32;
  MR_Word CallerProcInfo_33;
  MR_Word VarTable_34;
  MR_Word ProcInfo_36;
  MR_Word ArgVars_37;
  MR_Word OutVars_39;
  MR_Word CodeModel_41;
  MR_Word Var_35;
  MR_Word _InVars_38;
  MR_Word _UnusedVars_40;
  MR_Word Var_51;

  *GoalExpr_18 = GoalExpr0_17;
  ModuleInfo_32 = ((MR_Word) ((MR_hl_field(0, AllocData_15, (MR_Integer) 0))));
  CallerProcInfo_33 = ((MR_Word) ((MR_hl_field(0, AllocData_15, (MR_Integer) 1))));
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(CallerProcInfo_33, &VarTable_34);
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_32, PredId_26, ProcId_27, &Var_35, &ProcInfo_36);
  ArgVars_37 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&ll_backend__live_vars_scalar_common_1[0]), (MR_Word) (&ll_backend__live_vars_scalar_common_3[0]), Args_28);
  hlds__arg_info__partition_proc_call_args_7_p_0(ModuleInfo_32, ProcInfo_36, VarTable_34, ArgVars_37, &_InVars_38, &OutVars_39, &_UnusedVars_40);
  CodeModel_41 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo0_19);
  succeeded = (CodeModel_41 != (MR_Integer) 2);
  if (succeeded)
  {
    Var_51 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_25);
    succeeded = (Var_51 == (MR_Integer) 1);
  }
  if (succeeded)
  {
    *GoalInfo_20 = GoalInfo0_19;
    *STATE_VARIABLE_ParStackVars_49 = STATE_VARIABLE_ParStackVars_0_48;
    *STATE_VARIABLE_NondetLiveness_47 = STATE_VARIABLE_NondetLiveness_0_46;
    *STATE_VARIABLE_StackAlloc_43 = STATE_VARIABLE_StackAlloc_0_42;
  }
  else
  {
    MR_Word Var_52;

    Var_52 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutVars_39);
    ll_backend__live_vars__build_live_sets_in_call_12_p_0(TypeClassInfo_for_stack_alloc_info_63, AllocData_15, ResumeVars0_16, Var_52, GoalInfo0_19, GoalInfo_20, STATE_VARIABLE_StackAlloc_0_42, STATE_VARIABLE_StackAlloc_43, STATE_VARIABLE_Liveness_0_44, STATE_VARIABLE_NondetLiveness_0_46, STATE_VARIABLE_NondetLiveness_47, STATE_VARIABLE_ParStackVars_0_48, STATE_VARIABLE_ParStackVars_49);
  }
  *STATE_VARIABLE_Liveness_45 = STATE_VARIABLE_Liveness_0_44;
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_plain_call_14_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_70,
  MR_Word AllocData_15,
  MR_Word ResumeVars0_16,
  MR_Word GoalExpr0_17,
  MR_Word * GoalExpr_18,
  MR_Word GoalInfo0_19,
  MR_Word * GoalInfo_20,
  MR_Box STATE_VARIABLE_StackAlloc_0_43,
  MR_Box * STATE_VARIABLE_StackAlloc_44,
  MR_Word STATE_VARIABLE_Liveness_0_45,
  MR_Word * STATE_VARIABLE_Liveness_46,
  MR_Word STATE_VARIABLE_NondetLiveness_0_47,
  MR_Word * STATE_VARIABLE_NondetLiveness_48,
  MR_Word STATE_VARIABLE_ParStackVars_0_49,
  MR_Word * STATE_VARIABLE_ParStackVars_50)
{
  MR_bool succeeded;
  MR_Word PredId_25 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_17, (MR_Integer) 0))));
  MR_Integer ProcId_26 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_17, (MR_Integer) 1))));
  MR_Word ArgVars_27 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_17, (MR_Integer) 2))));
  MR_Word Builtin_28 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_17, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_Word ModuleInfo_31;
  MR_Word CallerProcInfo_32;
  MR_Word VarTable_33;
  MR_Word ProcInfo_35;
  MR_Word OutVars_37;
  MR_Word CalleePredProcId_39;
  MR_Box STATE_VARIABLE_StackAlloc_52_52;
  MR_Word STATE_VARIABLE_ParStackVars_54_54;
  MR_Word Var_34;
  MR_Word _InVars_36;
  MR_Word _UnusedVars_38;
  MR_Word Var_73;
  MR_Integer Var_74;

  *GoalExpr_18 = GoalExpr0_17;
  ModuleInfo_31 = ((MR_Word) ((MR_hl_field(0, AllocData_15, (MR_Integer) 0))));
  CallerProcInfo_32 = ((MR_Word) ((MR_hl_field(0, AllocData_15, (MR_Integer) 1))));
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(CallerProcInfo_32, &VarTable_33);
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_31, PredId_25, ProcId_26, &Var_34, &ProcInfo_35);
  hlds__arg_info__partition_proc_call_args_7_p_0(ModuleInfo_31, ProcInfo_35, VarTable_33, ArgVars_27, &_InVars_36, &OutVars_37, &_UnusedVars_38);
  switch (Builtin_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *GoalInfo_20 = GoalInfo0_19;
        STATE_VARIABLE_StackAlloc_52_52 = STATE_VARIABLE_StackAlloc_0_43;
        *STATE_VARIABLE_NondetLiveness_48 = STATE_VARIABLE_NondetLiveness_0_47;
        STATE_VARIABLE_ParStackVars_54_54 = STATE_VARIABLE_ParStackVars_0_49;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_51;

        Var_51 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutVars_37);
        ll_backend__live_vars__build_live_sets_in_call_12_p_0(TypeClassInfo_for_stack_alloc_info_70, AllocData_15, ResumeVars0_16, Var_51, GoalInfo0_19, GoalInfo_20, STATE_VARIABLE_StackAlloc_0_43, &STATE_VARIABLE_StackAlloc_52_52, STATE_VARIABLE_Liveness_0_45, STATE_VARIABLE_NondetLiveness_0_47, STATE_VARIABLE_NondetLiveness_48, STATE_VARIABLE_ParStackVars_0_49, &STATE_VARIABLE_ParStackVars_54_54);
      }
      break;
  }
  CalleePredProcId_39 = ((MR_Word) ((MR_hl_field(0, AllocData_15, (MR_Integer) 2))));
  Var_73 = ((MR_Word) ((MR_hl_field(0, CalleePredProcId_39, (MR_Integer) 0))));
  Var_74 = ((MR_Integer) ((MR_hl_field(0, CalleePredProcId_39, (MR_Integer) 1))));
  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_25, Var_73);
  if (succeeded)
    succeeded = (ProcId_26 == Var_74);
  if (succeeded)
  {
    MR_Word DelayDeathSet_41;

    switch (MR_tag((MR_Word) STATE_VARIABLE_ParStackVars_54_54)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          DelayDeathSet_41 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
          *STATE_VARIABLE_ParStackVars_50 = STATE_VARIABLE_ParStackVars_54_54;
          *STATE_VARIABLE_StackAlloc_44 = STATE_VARIABLE_StackAlloc_52_52;
        }
        break;
      case (MR_Integer) 1:
        {
          DelayDeathSet_41 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
          *STATE_VARIABLE_ParStackVars_50 = STATE_VARIABLE_ParStackVars_54_54;
          *STATE_VARIABLE_StackAlloc_44 = STATE_VARIABLE_StackAlloc_52_52;
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.live_vars.par_stack_vars_recursive_call\'/4", (MR_String) "recursive call in loop control scope");
          return;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word NeedLC_42;
          MR_Word StackVarsList0_82 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_ParStackVars_54_54, (MR_Integer) 0))));
          MR_Word StackVars_83;
          MR_Word StackVarsList_84;
          MR_Word NonoverlapSets_85;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

          DelayDeathSet_41 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_ParStackVars_54_54, (MR_Integer) 1))));
          StackVars_83 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_ParStackVars_54_54, (MR_Integer) 2))));
          {
            StackVarsList_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, StackVarsList_84, 0) = ((MR_Box) (StackVars_83));
            MR_hl_field(1, StackVarsList_84, 1) = ((MR_Box) (StackVarsList0_82));
          }
          parse_tree__set_of_var__cartesian_product_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), StackVarsList_84, &NonoverlapSets_85);
          NeedLC_42 = (MR_Word) (NonoverlapSets_85);
          *STATE_VARIABLE_ParStackVars_50 = (MR_Word) ((MR_Unsigned) 0U);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_stack_alloc_info_70, (MR_Integer) 0)), (MR_Integer) 8))));
          func_0(((MR_Box) (TypeClassInfo_for_stack_alloc_info_70)), ((MR_Box) (NeedLC_42)), ((MR_Box) (AllocData_15)), STATE_VARIABLE_StackAlloc_52_52, STATE_VARIABLE_StackAlloc_44);
        }
        break;
    }
    *STATE_VARIABLE_Liveness_46 = parse_tree__set_of_var__difference_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_0_45, DelayDeathSet_41);
  }
  else
  {
    *STATE_VARIABLE_ParStackVars_50 = STATE_VARIABLE_ParStackVars_54_54;
    *STATE_VARIABLE_Liveness_46 = STATE_VARIABLE_Liveness_0_45;
    *STATE_VARIABLE_StackAlloc_44 = STATE_VARIABLE_StackAlloc_52_52;
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_call_12_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_42,
  MR_Word AllocData_13,
  MR_Word ResumeVars0_14,
  MR_Word OutVars_15,
  MR_Word GoalInfo0_16,
  MR_Word * GoalInfo_17,
  MR_Box STATE_VARIABLE_StackAlloc_0_27,
  MR_Box * STATE_VARIABLE_StackAlloc_28,
  MR_Word Liveness_19,
  MR_Word STATE_VARIABLE_NondetLiveness_0_29,
  MR_Word * STATE_VARIABLE_NondetLiveness_30,
  MR_Word STATE_VARIABLE_ParStackVars_0_31,
  MR_Word * STATE_VARIABLE_ParStackVars_32)
{
  MR_bool succeeded;
  MR_Word ForwardVars0_22;
  MR_Word ForwardVars_23;
  MR_Word Detism_24;
  MR_Word NeedAcrossCall_25;
  MR_Word CodeModel_26;
  MR_Word TypeInfoLiveness_44;
  MR_Word Var_52;
  MR_Word Var_33;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Liveness_19, OutVars_15, &ForwardVars0_22);
  Var_52 = ((MR_Word) ((MR_hl_field(0, AllocData_13, (MR_Integer) 1))));
  TypeInfoLiveness_44 = ((((MR_Unsigned) ((MR_hl_field(0, AllocData_13, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
  switch (TypeInfoLiveness_44) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ForwardVars_23 = ForwardVars0_22;
      break;
    case (MR_Integer) 1:
      {
        MR_Word VarTable_46;
        MR_Word RttiVarMaps_47;
        MR_Word TypeInfoVarsLive_48;
        MR_Word TypeInfoVarsOut_49;
        MR_Word STATE_VARIABLE_LiveVars_16_50;

        hlds__hlds_pred__proc_info_get_var_table_2_p_0(Var_52, &VarTable_46);
        hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(Var_52, &RttiVarMaps_47);
        hlds__hlds_rtti__get_typeinfo_vars_4_p_0(VarTable_46, RttiVarMaps_47, ForwardVars0_22, &TypeInfoVarsLive_48);
        hlds__hlds_rtti__get_typeinfo_vars_4_p_0(VarTable_46, RttiVarMaps_47, OutVars_15, &TypeInfoVarsOut_49);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ForwardVars0_22, TypeInfoVarsOut_49, &STATE_VARIABLE_LiveVars_16_50);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_LiveVars_16_50, TypeInfoVarsLive_48, &ForwardVars_23);
      }
      break;
  }
  Detism_24 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_16);
  succeeded = (Detism_24 == (MR_Integer) 6);
  if (succeeded)
  {
    Var_33 = ((MR_Unsigned) ((MR_hl_field(0, AllocData_13, (MR_Integer) 4))) & (MR_Integer) 1);
    succeeded = (Var_33 == (MR_Integer) 1);
  }
  if (succeeded)
  {
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;

    Var_34 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    Var_35 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    Var_36 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    {
      NeedAcrossCall_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NeedAcrossCall_25, 0) = ((MR_Box) (Var_34));
      MR_hl_field(0, NeedAcrossCall_25, 1) = ((MR_Box) (Var_35));
      MR_hl_field(0, NeedAcrossCall_25, 2) = ((MR_Box) (Var_36));
    }
  }
  else
    {
      NeedAcrossCall_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NeedAcrossCall_25, 0) = ((MR_Box) (ForwardVars_23));
      MR_hl_field(0, NeedAcrossCall_25, 1) = ((MR_Box) (ResumeVars0_14));
      MR_hl_field(0, NeedAcrossCall_25, 2) = ((MR_Box) (STATE_VARIABLE_NondetLiveness_0_29));
    }
  hlds__hlds_llds__goal_info_set_need_across_call_3_p_0(NeedAcrossCall_25, GoalInfo0_16, GoalInfo_17);
  func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_stack_alloc_info_42, (MR_Integer) 0)), (MR_Integer) 5))));
  func_0(((MR_Box) (TypeClassInfo_for_stack_alloc_info_42)), ((MR_Box) (NeedAcrossCall_25)), ((MR_Box) (AllocData_13)), STATE_VARIABLE_StackAlloc_0_27, STATE_VARIABLE_StackAlloc_28);
  CodeModel_26 = hlds__code_model__goal_info_get_code_model_1_f_0(*GoalInfo_17);
  switch (CodeModel_26) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_NondetLiveness_30 = STATE_VARIABLE_NondetLiveness_0_29;
      break;
    case (MR_Integer) 2:
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_NondetLiveness_0_29, ForwardVars_23, STATE_VARIABLE_NondetLiveness_30);
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_NondetLiveness_30 = STATE_VARIABLE_NondetLiveness_0_29;
      break;
  }
  switch (MR_tag((MR_Word) STATE_VARIABLE_ParStackVars_0_31)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_ParStackVars_32 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word Nonlocals_64 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_ParStackVars_0_31, (MR_Integer) 0))));
        MR_Word ParallelVars_65 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_ParStackVars_0_31, (MR_Integer) 1))));
        MR_Word AccStackVars0_66 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_ParStackVars_0_31, (MR_Integer) 2))));
        MR_Word AccStackVars_67;
        MR_Word Var_68;

        Var_68 = parse_tree__set_of_var__difference_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ForwardVars_23, Nonlocals_64);
        AccStackVars_67 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AccStackVars0_66, Var_68);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ParStackVars_32 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Nonlocals_64));
          MR_hl_field(1, base, 1) = ((MR_Box) (ParallelVars_65));
          MR_hl_field(1, base, 2) = ((MR_Box) (AccStackVars_67));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word NonLocals_70 = ((MR_Word) ((MR_hl_field(2, STATE_VARIABLE_ParStackVars_0_31, (MR_Integer) 0))));
        MR_Word AccStackVars0_71 = ((MR_Word) ((MR_hl_field(2, STATE_VARIABLE_ParStackVars_0_31, (MR_Integer) 1))));
        MR_Word AccStackVars_72;

        AccStackVars_72 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AccStackVars0_71, ForwardVars_23);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ParStackVars_32 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (NonLocals_70));
          MR_hl_field(2, base, 1) = ((MR_Box) (AccStackVars_72));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word LocalStackVars_74 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_ParStackVars_0_31, (MR_Integer) 0))));
        MR_Word WouldDieSet_75 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_ParStackVars_0_31, (MR_Integer) 1))));
        MR_Word AccStackVars0_76 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_ParStackVars_0_31, (MR_Integer) 2))));
        MR_Word AccStackVars_77;

        AccStackVars_77 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AccStackVars0_76, ForwardVars_23);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ParStackVars_32 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) (LocalStackVars_74));
          MR_hl_field(3, base, 1) = ((MR_Box) (WouldDieSet_75));
          MR_hl_field(3, base, 2) = ((MR_Box) (AccStackVars_77));
        }
      }
      break;
  }
}

static MR_bool MR_CALL 
ll_backend__live_vars____Unify____alloc_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__live_vars____Unify____alloc_data_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__live_vars____Compare____alloc_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__live_vars____Compare____alloc_data_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__live_vars____Unify____dummy_var_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__live_vars____Unify____dummy_var_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__live_vars____Compare____dummy_var_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__live_vars____Compare____dummy_var_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__live_vars____Unify____parallel_stackvars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__live_vars____Unify____parallel_stackvars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__live_vars____Compare____parallel_stackvars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__live_vars____Compare____parallel_stackvars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ll_backend__live_vars__init(void)
{
}

void mercury__ll_backend__live_vars__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__live_vars__ll_backend__live_vars__type_ctor_info_alloc_data_0);
	MR_register_type_ctor_info(&ll_backend__live_vars__ll_backend__live_vars__type_ctor_info_dummy_var_info_0);
	MR_register_type_ctor_info(&ll_backend__live_vars__ll_backend__live_vars__type_ctor_info_parallel_stackvars_0);
}

void mercury__ll_backend__live_vars__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__live_vars__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.live_vars.
