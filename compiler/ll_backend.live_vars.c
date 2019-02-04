/*
** Automatically generated from `live_vars.m'
** by the Mercury compiler,
** version rotd-2017-04-20
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


/* :- module ll_backend.live_vars. */
/* :- implementation. */

/*
INIT mercury__ll_backend__live_vars__init
ENDINIT
*/

#include "ll_backend.live_vars.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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



struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s {
  MR_bool ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded;
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Goals_238;
  jmp_buf ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__commit_0;
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctGoalInfo_44;
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctResumePoint_45;
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Locs_47;
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__V_218_218;
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Disjunct_236;
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__V_337_337;
  MR_Box ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__conv1_Disjunct_236;
};


static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__live_vars__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__live_vars__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__array__ti_array_1check_hlds__type_util__type_ctor_info_is_dummy_type_0;

static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_alloc_data_0_0[6];

static const MR_ConstString ll_backend__live_vars__ll_backend__live_vars__field_names_alloc_data_0_0[6];

static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_alloc_data_0_0;

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_alloc_data_0_0[1];

static const MR_DuPtagLayout ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_alloc_data_0[1];

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_alloc_data_0[1];

static const MR_Integer ll_backend__live_vars__ll_backend__live_vars__functor_number_map_alloc_data_0[1];

static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_0;

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

static MR_bool MR_CALL 
ll_backend__live_vars____Unify____alloc_data_0_0_10001(
  MR_Box ll_backend__live_vars__wrapper_arg_1,
  MR_Box ll_backend__live_vars__wrapper_arg_2);

static void MR_CALL 
ll_backend__live_vars____Compare____alloc_data_0_0_10001(
  MR_Box * ll_backend__live_vars__wrapper_arg_1,
  MR_Box ll_backend__live_vars__wrapper_arg_2,
  MR_Box ll_backend__live_vars__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__live_vars____Unify____parallel_stackvars_0_0_10001(
  MR_Box ll_backend__live_vars__wrapper_arg_1,
  MR_Box ll_backend__live_vars__wrapper_arg_2);

static void MR_CALL 
ll_backend__live_vars____Compare____parallel_stackvars_0_0_10001(
  MR_Box * ll_backend__live_vars__wrapper_arg_1,
  MR_Box ll_backend__live_vars__wrapper_arg_2,
  MR_Box ll_backend__live_vars__wrapper_arg_3);

static void MR_CALL 
ll_backend__live_vars____Compare____parallel_stackvars_0_0(
  MR_Word * ll_backend__live_vars__HeadVar__1_1,
  MR_Word ll_backend__live_vars__HeadVar__2_2,
  MR_Word ll_backend__live_vars__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__live_vars____Unify____parallel_stackvars_0_0(
  MR_Word ll_backend__live_vars__HeadVar__1_1,
  MR_Word ll_backend__live_vars__HeadVar__2_2);

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_recursive_call_4_p_0(
  MR_Word * ll_backend__live_vars__MaybeNeedLC_5,
  MR_Word * ll_backend__live_vars__DelayDeathSet_6,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_18);

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_get_nonlocals_2_p_0(
  MR_Word ll_backend__live_vars__HeadVar__1_1,
  MR_Word * ll_backend__live_vars__HeadVar__2_2);

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_accumulate_stack_vars_3_p_0(
  MR_Word ll_backend__live_vars__HeadVar__1_1,
  MR_Word ll_backend__live_vars__HeadVar__2_2,
  MR_Word * ll_backend__live_vars__HeadVar__3_3);

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_get_stackvars_2_p_0(
  MR_Word ll_backend__live_vars__HeadVar__1_1,
  MR_Word * ll_backend__live_vars__HeadVar__2_2);

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_end_loop_control_4_p_0(
  MR_Word ll_backend__live_vars__NewWouldDieSet_5,
  MR_Word ll_backend__live_vars__OldParStackVars_6,
  MR_Word ll_backend__live_vars__ParStackVars0_7,
  MR_Word * ll_backend__live_vars__ParStackVars_8);

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_start_loop_control_3_p_0(
  MR_Word ll_backend__live_vars__NonLocals_4,
  MR_Word ll_backend__live_vars__ParStackVars0_5,
  MR_Word * ll_backend__live_vars__HeadVar__3_3);

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_end_parallel_conjunction_4_p_0(
  MR_Word ll_backend__live_vars__LiveSet_5,
  MR_Word ll_backend__live_vars__OuterParStackVars_6,
  MR_Word ll_backend__live_vars__ParStackVars0_7,
  MR_Word * ll_backend__live_vars__ParStackVars_8);

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_start_parallel_conjunction_3_p_0(
  MR_Word ll_backend__live_vars__LiveSet_4,
  MR_Word ll_backend__live_vars__OuterParStackVars_5,
  MR_Word * ll_backend__live_vars__HeadVar__3_3);

static void MR_CALL 
ll_backend__live_vars__record_par_conj_6_p_0(
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_17,
  MR_Word ll_backend__live_vars__NeedInParConj_7,
  MR_Word ll_backend__live_vars__AllocData_8,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_GoalInfo_0_11,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_GoalInfo_12,
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_13,
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_14);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_cases_12_p_0(
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_54,
  MR_Word ll_backend__live_vars__HeadVar__1_1,
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
  MR_Word ll_backend__live_vars__ResumeVars0_3,
  MR_Word ll_backend__live_vars__AllocData_4,
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5,
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6,
  MR_Word ll_backend__live_vars__HeadVar__7_7,
  MR_Word * ll_backend__live_vars__HeadVar__8_8,
  MR_Word ll_backend__live_vars__HeadVar__9_9,
  MR_Word * ll_backend__live_vars__HeadVar__10_10,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_disj_13_p_0(
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_61,
  MR_Word ll_backend__live_vars__HeadVar__1_1,
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
  MR_Word ll_backend__live_vars__DisjGoalInfo_3,
  MR_Word ll_backend__live_vars__ResumeVars0_4,
  MR_Word ll_backend__live_vars__AllocData_5,
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_6,
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_7,
  MR_Word ll_backend__live_vars__HeadVar__8_8,
  MR_Word * ll_backend__live_vars__HeadVar__9_9,
  MR_Word ll_backend__live_vars__HeadVar__10_10,
  MR_Word * ll_backend__live_vars__HeadVar__11_11,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_12,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_13);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_par_conj_12_p_0(
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_50,
  MR_Word ll_backend__live_vars__HeadVar__1_1,
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
  MR_Word ll_backend__live_vars__ResumeVars0_3,
  MR_Word ll_backend__live_vars__AllocData_4,
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5,
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6,
  MR_Word ll_backend__live_vars__HeadVar__7_7,
  MR_Word * ll_backend__live_vars__Liveness_8,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_conj_12_p_0(
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_60,
  MR_Word ll_backend__live_vars__HeadVar__1_1,
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
  MR_Word ll_backend__live_vars__ResumeVars0_3,
  MR_Word ll_backend__live_vars__AllocData_4,
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5,
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_0_7,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_Liveness_8,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_call_12_p_0(
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_57,
  MR_Word ll_backend__live_vars__OutVars_13,
  MR_Word ll_backend__live_vars__GoalInfo0_14,
  MR_Word * ll_backend__live_vars__GoalInfo_15,
  MR_Word ll_backend__live_vars__ResumeVars0_16,
  MR_Word ll_backend__live_vars__AllocData_17,
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_27,
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_28,
  MR_Word ll_backend__live_vars__Liveness_19,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_29,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_30,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_31,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_32);

static MR_Box MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_1(
  MR_Box ll_backend__live_vars__closure_arg,
  MR_Box ll_backend__live_vars__wrapper_arg_1);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_2(
  void * ll_backend__live_vars__env_ptr_arg);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_4(
  void * ll_backend__live_vars__env_ptr_arg);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_3(
  void * ll_backend__live_vars__env_ptr_arg);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_5(
  void * ll_backend__live_vars__env_ptr_arg);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0(
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322,
  MR_Word ll_backend__live_vars__GoalExpr0_15,
  MR_Word * ll_backend__live_vars__GoalExpr_16,
  MR_Word ll_backend__live_vars__GoalInfo0_17,
  MR_Word * ll_backend__live_vars__GoalInfo_18,
  MR_Word ll_backend__live_vars__ResumeVars0_19,
  MR_Word ll_backend__live_vars__AllocData_20,
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142,
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_Liveness_145,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);

static void MR_CALL 
ll_backend__live_vars__resume_locs_include_stack_2_p_0(
  MR_Word ll_backend__live_vars__HeadVar__1_1,
  MR_Word * ll_backend__live_vars__HeadVar__2_2);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_12_p_0(
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_56,
  MR_Word ll_backend__live_vars__Goal0_13,
  MR_Word * ll_backend__live_vars__Goal_14,
  MR_Word ll_backend__live_vars__ResumeVars0_15,
  MR_Word ll_backend__live_vars__AllocData_16,
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_38,
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_39,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_0_40,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_Liveness_41,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_42,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_43,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_44,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_45);

static void MR_CALL 
ll_backend__live_vars__set_dummy_array_elements_6_p_0(
  MR_Word ll_backend__live_vars__ModuleInfo_1,
  MR_Word ll_backend__live_vars__HeadVar__2_2,
  MR_ArrayPtr ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_0_3,
  MR_ArrayPtr * ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_4,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_DummyVars_0_5,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_DummyVars_6);

static void MR_CALL 
ll_backend__live_vars__max_var_num_3_p_0(
  MR_Word ll_backend__live_vars__HeadVar__1_1,
  MR_Integer ll_backend__live_vars__STATE_VARIABLE_MaxVarNum_0_8,
  MR_Integer * ll_backend__live_vars__STATE_VARIABLE_MaxVarNum_9);

static void MR_CALL 
ll_backend__live_vars__build_dummy_type_array_4_p_0_1(
  MR_Box ll_backend__live_vars__closure_arg,
  MR_Box ll_backend__live_vars__wrapper_arg_1,
  MR_Box ll_backend__live_vars__wrapper_arg_2,
  MR_Box * ll_backend__live_vars__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__live_vars_scalar_common_1[4][2];

static /* final */ const MR_Box ll_backend__live_vars_scalar_common_2[4][3];

static /* final */ const MR_Box ll_backend__live_vars_scalar_common_3[1][6];

static /* final */ const MR_Box ll_backend__live_vars_scalar_common_5[1][5];


/* sealed */ struct ll_backend__live_vars__vector_common_type_4_0_s {
  const MR_Word ll_backend__live_vars__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct ll_backend__live_vars__vector_common_type_4_0_s ll_backend__live_vars_vector_common_4[4];



static /* final */ const MR_Box ll_backend__live_vars_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&ll_backend__live_vars_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__live_vars_scalar_common_1[2]))
  },
};

static /* final */ const MR_Box ll_backend__live_vars_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__live_vars_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_enum__enum__arity1__term__var__arity1__)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__live_vars_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__live_vars_scalar_common_3[0])),
    ((MR_Box) (ll_backend__live_vars__build_dummy_type_array_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__live_vars_scalar_common_5[0])),
    ((MR_Box) (ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__live_vars_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__live_vars__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ll_backend__live_vars_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&ll_backend__live_vars__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};


static /* final */ const struct ll_backend__live_vars__vector_common_type_4_0_s ll_backend__live_vars_vector_common_4[4] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 1 },
};


#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__live_vars__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__live_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__live_vars__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__array__ti_array_1check_hlds__type_util__type_ctor_info_is_dummy_type_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0
  }
};

static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_alloc_data_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__live_vars__array__ti_array_1check_hlds__type_util__type_ctor_info_is_dummy_type_0
};

static const MR_ConstString ll_backend__live_vars__ll_backend__live_vars__field_names_alloc_data_0_0[6] = {
  (MR_String) "ad_module_info",
  (MR_String) "ad_proc_info",
  (MR_String) "ad_pred_proc_id",
  (MR_String) "ad_typeinfo_liveness",
  (MR_String) "ad_opt_no_return_calls",
  (MR_String) "ad_dummy_var_array"
};

static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_alloc_data_0_0 = {
  (MR_String) "alloc_data",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__live_vars__ll_backend__live_vars__field_types_alloc_data_0_0,
  ll_backend__live_vars__ll_backend__live_vars__field_names_alloc_data_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_alloc_data_0_0[1] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_alloc_data_0_0
};

static const MR_DuPtagLayout ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_alloc_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_alloc_data_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_alloc_data_0[1] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_alloc_data_0_0
};

static const MR_Integer ll_backend__live_vars__ll_backend__live_vars__functor_number_map_alloc_data_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__live_vars__ll_backend__live_vars__type_ctor_info_alloc_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__live_vars____Unify____alloc_data_0_0_10001)),
  ((MR_Box) (ll_backend__live_vars____Compare____alloc_data_0_0_10001)),
  (MR_String) "ll_backend.live_vars",
  (MR_String) "alloc_data",
  {     ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_alloc_data_0 },
  {     ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_alloc_data_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__live_vars__ll_backend__live_vars__functor_number_map_alloc_data_0
};

static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_0 = {
  (MR_String) "not_in_parallel_context",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &ll_backend__live_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__live_vars__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_1[3] = {
  (MR_PseudoTypeInfo) &ll_backend__live_vars__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__live_vars__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__live_vars__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_1 = {
  (MR_String) "parallel_conjunction",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_2[2] = {
  (MR_PseudoTypeInfo) &ll_backend__live_vars__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__live_vars__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_2 = {
  (MR_String) "loop_control_scope",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_3[3] = {
  (MR_PseudoTypeInfo) &ll_backend__live_vars__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__live_vars__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &ll_backend__live_vars__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_3 = {
  (MR_String) "after_loop_control_scope",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  ll_backend__live_vars__ll_backend__live_vars__field_types_parallel_stackvars_0_3,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_0[1] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_0
};

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_1[1] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_1
};

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_2[1] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_2
};

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_3[1] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_parallel_stackvars_0_3
};

static const MR_DuPtagLayout ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_parallel_stackvars_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_parallel_stackvars_0_3
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__live_vars____Unify____parallel_stackvars_0_0_10001)),
  ((MR_Box) (ll_backend__live_vars____Compare____parallel_stackvars_0_0_10001)),
  (MR_String) "ll_backend.live_vars",
  (MR_String) "parallel_stackvars",
  {     ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_parallel_stackvars_0 },
  {     ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_parallel_stackvars_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  ll_backend__live_vars__ll_backend__live_vars__functor_number_map_parallel_stackvars_0
};

static const MR_ConstString ll_backend__live_vars__ll_backend__live_vars__type_class_id_var_names_stack_alloc_info_1[1] = {
  (MR_String) "T"
};

static const MR_TypeClassMethod ll_backend__live_vars__ll_backend__live_vars__type_class_id_method_ids_stack_alloc_info_1[4] = {
  {
    (MR_String) "at_call_site",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "at_resume_site",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "at_par_conj",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "at_recursive_call_for_loop_control",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
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

static MR_bool MR_CALL 
ll_backend__live_vars____Unify____alloc_data_0_0_10001(
  MR_Box ll_backend__live_vars__wrapper_arg_1,
  MR_Box ll_backend__live_vars__wrapper_arg_2)
{
  {
    MR_bool ll_backend__live_vars__succeeded;

    {
      ll_backend__live_vars__succeeded = ll_backend__live_vars____Unify____alloc_data_0_0(((MR_Word) ll_backend__live_vars__wrapper_arg_1), ((MR_Word) ll_backend__live_vars__wrapper_arg_2));
    }
    return ll_backend__live_vars__succeeded;
  }
}

static void MR_CALL 
ll_backend__live_vars____Compare____alloc_data_0_0_10001(
  MR_Box * ll_backend__live_vars__wrapper_arg_1,
  MR_Box ll_backend__live_vars__wrapper_arg_2,
  MR_Box ll_backend__live_vars__wrapper_arg_3)
{
  {
    MR_Word ll_backend__live_vars__conv0_HeadVar__1_1;

    {
      ll_backend__live_vars____Compare____alloc_data_0_0(&ll_backend__live_vars__conv0_HeadVar__1_1, ((MR_Word) ll_backend__live_vars__wrapper_arg_2), ((MR_Word) ll_backend__live_vars__wrapper_arg_3));
    }
    *ll_backend__live_vars__wrapper_arg_1 = ((MR_Box) (ll_backend__live_vars__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__live_vars____Unify____parallel_stackvars_0_0_10001(
  MR_Box ll_backend__live_vars__wrapper_arg_1,
  MR_Box ll_backend__live_vars__wrapper_arg_2)
{
  {
    MR_bool ll_backend__live_vars__succeeded;

    {
      ll_backend__live_vars__succeeded = ll_backend__live_vars____Unify____parallel_stackvars_0_0(((MR_Word) ll_backend__live_vars__wrapper_arg_1), ((MR_Word) ll_backend__live_vars__wrapper_arg_2));
    }
    return ll_backend__live_vars__succeeded;
  }
}

static void MR_CALL 
ll_backend__live_vars____Compare____parallel_stackvars_0_0_10001(
  MR_Box * ll_backend__live_vars__wrapper_arg_1,
  MR_Box ll_backend__live_vars__wrapper_arg_2,
  MR_Box ll_backend__live_vars__wrapper_arg_3)
{
  {
    MR_Word ll_backend__live_vars__conv0_HeadVar__1_1;

    {
      ll_backend__live_vars____Compare____parallel_stackvars_0_0(&ll_backend__live_vars__conv0_HeadVar__1_1, ((MR_Word) ll_backend__live_vars__wrapper_arg_2), ((MR_Word) ll_backend__live_vars__wrapper_arg_3));
    }
    *ll_backend__live_vars__wrapper_arg_1 = ((MR_Box) (ll_backend__live_vars__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
ll_backend__live_vars____Compare____parallel_stackvars_0_0(
  MR_Word * ll_backend__live_vars__HeadVar__1_1,
  MR_Word ll_backend__live_vars__HeadVar__2_2,
  MR_Word ll_backend__live_vars__HeadVar__3_3)
{
  {
    MR_bool ll_backend__live_vars__succeeded;
    MR_Integer ll_backend__live_vars__CastX_73 = (MR_Integer) ll_backend__live_vars__HeadVar__2_2;
    MR_Integer ll_backend__live_vars__CastY_74 = (MR_Integer) ll_backend__live_vars__HeadVar__3_3;

    ll_backend__live_vars__succeeded = (ll_backend__live_vars__CastX_73 == ll_backend__live_vars__CastY_74);
    if (ll_backend__live_vars__succeeded)
      *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) ll_backend__live_vars__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) ll_backend__live_vars__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ll_backend__live_vars__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word ll_backend__live_vars__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ll_backend__live_vars__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) ll_backend__live_vars__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__live_vars__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word ll_backend__live_vars__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word ll_backend__live_vars__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word ll_backend__live_vars__V_21_21;

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[2], &ll_backend__live_vars__V_21_21, ((MR_Box) (ll_backend__live_vars__V_90_90)), ((MR_Box) (ll_backend__live_vars__V_18_18)));
                  }
                  ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_21_21 == (MR_Integer) 0);
                  ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
                  if (ll_backend__live_vars__succeeded)
                    *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_21_21;
                  else
                    {
                      MR_Word ll_backend__live_vars__V_22_22;

                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[3], &ll_backend__live_vars__V_22_22, ((MR_Box) (ll_backend__live_vars__V_89_89)), ((MR_Box) (ll_backend__live_vars__V_19_19)));
                      }
                      ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_22_22 == (MR_Integer) 0);
                      ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
                      if (ll_backend__live_vars__succeeded)
                        *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_22_22;
                      else
                        {
                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[2], ll_backend__live_vars__HeadVar__1_1, ((MR_Box) (ll_backend__live_vars__V_88_88)), ((MR_Box) (ll_backend__live_vars__V_20_20)));
                          }
                        }
                    }
                }
                break;
              case (MR_Integer) 2:
                *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ll_backend__live_vars__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ll_backend__live_vars__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) ll_backend__live_vars__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__live_vars__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word ll_backend__live_vars__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word ll_backend__live_vars__V_45_45;

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[2], &ll_backend__live_vars__V_45_45, ((MR_Box) (ll_backend__live_vars__V_87_87)), ((MR_Box) (ll_backend__live_vars__V_43_43)));
                  }
                  ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_45_45 == (MR_Integer) 0);
                  ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
                  if (ll_backend__live_vars__succeeded)
                    *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_45_45;
                  else
                    {
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[2], ll_backend__live_vars__HeadVar__1_1, ((MR_Box) (ll_backend__live_vars__V_86_86)), ((MR_Box) (ll_backend__live_vars__V_44_44)));
                      }
                    }
                }
                break;
              case (MR_Integer) 3:
                *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ll_backend__live_vars__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word ll_backend__live_vars__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ll_backend__live_vars__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) ll_backend__live_vars__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ll_backend__live_vars__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word ll_backend__live_vars__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word ll_backend__live_vars__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word ll_backend__live_vars__V_71_71;

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[3], &ll_backend__live_vars__V_71_71, ((MR_Box) (ll_backend__live_vars__V_85_85)), ((MR_Box) (ll_backend__live_vars__V_68_68)));
                  }
                  ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_71_71 == (MR_Integer) 0);
                  ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
                  if (ll_backend__live_vars__succeeded)
                    *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_71_71;
                  else
                    {
                      MR_Word ll_backend__live_vars__V_72_72;

                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[2], &ll_backend__live_vars__V_72_72, ((MR_Box) (ll_backend__live_vars__V_84_84)), ((MR_Box) (ll_backend__live_vars__V_69_69)));
                      }
                      ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_72_72 == (MR_Integer) 0);
                      ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
                      if (ll_backend__live_vars__succeeded)
                        *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_72_72;
                      else
                        {
                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[2], ll_backend__live_vars__HeadVar__1_1, ((MR_Box) (ll_backend__live_vars__V_83_83)), ((MR_Box) (ll_backend__live_vars__V_70_70)));
                          }
                        }
                    }
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
ll_backend__live_vars____Unify____parallel_stackvars_0_0(
  MR_Word ll_backend__live_vars__HeadVar__1_1,
  MR_Word ll_backend__live_vars__HeadVar__2_2)
{
  {
    MR_bool ll_backend__live_vars__succeeded;
    MR_Integer ll_backend__live_vars__CastX_21 = (MR_Integer) ll_backend__live_vars__HeadVar__1_1;
    MR_Integer ll_backend__live_vars__CastY_22 = (MR_Integer) ll_backend__live_vars__HeadVar__2_2;

    ll_backend__live_vars__succeeded = (ll_backend__live_vars__CastX_21 == ll_backend__live_vars__CastY_22);
    if (ll_backend__live_vars__succeeded)
      ll_backend__live_vars__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) ll_backend__live_vars__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer ll_backend__live_vars__CastX_3 = (MR_Integer) ll_backend__live_vars__HeadVar__1_1;
            MR_Integer ll_backend__live_vars__CastY_4 = (MR_Integer) ll_backend__live_vars__HeadVar__2_2;

            ll_backend__live_vars__succeeded = (ll_backend__live_vars__CastY_4 == ll_backend__live_vars__CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ll_backend__live_vars__TypeInfo_28_28;
            MR_Word ll_backend__live_vars__TypeInfo_29_29;
            MR_Word ll_backend__live_vars__TypeInfo_30_30;
            MR_Word ll_backend__live_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__live_vars__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__live_vars__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word ll_backend__live_vars__V_8_8;
            MR_Word ll_backend__live_vars__V_9_9;
            MR_Word ll_backend__live_vars__V_10_10;

            ll_backend__live_vars__succeeded = ((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__live_vars__succeeded)
              {
                ll_backend__live_vars__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
                ll_backend__live_vars__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
                ll_backend__live_vars__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
                ll_backend__live_vars__TypeInfo_28_28 = (MR_Word) &ll_backend__live_vars_scalar_common_1[2];
                {
                  ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_28_28, ((MR_Box) (ll_backend__live_vars__V_5_5)), ((MR_Box) (ll_backend__live_vars__V_8_8)));
                }
                if (ll_backend__live_vars__succeeded)
                  {
                    ll_backend__live_vars__TypeInfo_29_29 = (MR_Word) &ll_backend__live_vars_scalar_common_1[3];
                    {
                      ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_29_29, ((MR_Box) (ll_backend__live_vars__V_6_6)), ((MR_Box) (ll_backend__live_vars__V_9_9)));
                    }
                    if (ll_backend__live_vars__succeeded)
                      {
                        ll_backend__live_vars__TypeInfo_30_30 = (MR_Word) &ll_backend__live_vars_scalar_common_1[2];
                        {
                          ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_30_30, ((MR_Box) (ll_backend__live_vars__V_7_7)), ((MR_Box) (ll_backend__live_vars__V_10_10)));
                        }
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ll_backend__live_vars__TypeInfo_26_26;
            MR_Word ll_backend__live_vars__TypeInfo_27_27;
            MR_Word ll_backend__live_vars__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__live_vars__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__live_vars__V_13_13;
            MR_Word ll_backend__live_vars__V_14_14;

            ll_backend__live_vars__succeeded = ((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (ll_backend__live_vars__succeeded)
              {
                ll_backend__live_vars__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
                ll_backend__live_vars__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
                ll_backend__live_vars__TypeInfo_26_26 = (MR_Word) &ll_backend__live_vars_scalar_common_1[2];
                {
                  ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_26_26, ((MR_Box) (ll_backend__live_vars__V_11_11)), ((MR_Box) (ll_backend__live_vars__V_13_13)));
                }
                if (ll_backend__live_vars__succeeded)
                  {
                    ll_backend__live_vars__TypeInfo_27_27 = (MR_Word) &ll_backend__live_vars_scalar_common_1[2];
                    {
                      ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_27_27, ((MR_Box) (ll_backend__live_vars__V_12_12)), ((MR_Box) (ll_backend__live_vars__V_14_14)));
                    }
                  }
              }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ll_backend__live_vars__TypeInfo_23_23;
            MR_Word ll_backend__live_vars__TypeInfo_24_24;
            MR_Word ll_backend__live_vars__TypeInfo_25_25;
            MR_Word ll_backend__live_vars__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__live_vars__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__live_vars__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word ll_backend__live_vars__V_18_18;
            MR_Word ll_backend__live_vars__V_19_19;
            MR_Word ll_backend__live_vars__V_20_20;

            ll_backend__live_vars__succeeded = ((MR_tag((MR_Word) ll_backend__live_vars__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (ll_backend__live_vars__succeeded)
              {
                ll_backend__live_vars__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
                ll_backend__live_vars__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
                ll_backend__live_vars__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
                ll_backend__live_vars__TypeInfo_23_23 = (MR_Word) &ll_backend__live_vars_scalar_common_1[3];
                {
                  ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_23_23, ((MR_Box) (ll_backend__live_vars__V_15_15)), ((MR_Box) (ll_backend__live_vars__V_18_18)));
                }
                if (ll_backend__live_vars__succeeded)
                  {
                    ll_backend__live_vars__TypeInfo_24_24 = (MR_Word) &ll_backend__live_vars_scalar_common_1[2];
                    {
                      ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_24_24, ((MR_Box) (ll_backend__live_vars__V_16_16)), ((MR_Box) (ll_backend__live_vars__V_19_19)));
                    }
                    if (ll_backend__live_vars__succeeded)
                      {
                        ll_backend__live_vars__TypeInfo_25_25 = (MR_Word) &ll_backend__live_vars_scalar_common_1[2];
                        {
                          ll_backend__live_vars__succeeded = mercury__builtin__unify_2_p_0(ll_backend__live_vars__TypeInfo_25_25, ((MR_Box) (ll_backend__live_vars__V_17_17)), ((MR_Box) (ll_backend__live_vars__V_20_20)));
                        }
                      }
                  }
              }
          }
          break;
      }
    return ll_backend__live_vars__succeeded;
  }
}

void MR_CALL 
ll_backend__live_vars____Compare____alloc_data_0_0(
  MR_Word * ll_backend__live_vars__HeadVar__1_1,
  MR_Word ll_backend__live_vars__HeadVar__2_2,
  MR_Word ll_backend__live_vars__HeadVar__3_3)
{
  {
    MR_bool ll_backend__live_vars__succeeded;
    MR_Integer ll_backend__live_vars__CastX_21 = (MR_Integer) ll_backend__live_vars__HeadVar__2_2;
    MR_Integer ll_backend__live_vars__CastY_22 = (MR_Integer) ll_backend__live_vars__HeadVar__3_3;

    ll_backend__live_vars__succeeded = (ll_backend__live_vars__CastX_21 == ll_backend__live_vars__CastY_22);
    if (ll_backend__live_vars__succeeded)
      *ll_backend__live_vars__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__live_vars__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__live_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__live_vars__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__live_vars__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__live_vars__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 4)));
        MR_ArrayPtr ll_backend__live_vars__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word ll_backend__live_vars__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__live_vars__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__live_vars__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ll_backend__live_vars__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ll_backend__live_vars__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 4)));
        MR_ArrayPtr ll_backend__live_vars__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word ll_backend__live_vars__V_16_16;

        {
          hlds__hlds_module____Compare____module_info_0_0(&ll_backend__live_vars__V_16_16, ll_backend__live_vars__V_4_4, ll_backend__live_vars__V_10_10);
        }
        ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_16_16 == (MR_Integer) 0);
        ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
        if (ll_backend__live_vars__succeeded)
          *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_16_16;
        else
          {
            MR_Word ll_backend__live_vars__V_17_17;

            {
              hlds__hlds_pred____Compare____proc_info_0_0(&ll_backend__live_vars__V_17_17, ll_backend__live_vars__V_5_5, ll_backend__live_vars__V_11_11);
            }
            ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_17_17 == (MR_Integer) 0);
            ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
            if (ll_backend__live_vars__succeeded)
              *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_17_17;
            else
              {
                MR_Word ll_backend__live_vars__V_18_18;

                {
                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&ll_backend__live_vars__V_18_18, ll_backend__live_vars__V_6_6, ll_backend__live_vars__V_12_12);
                }
                ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_18_18 == (MR_Integer) 0);
                ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
                if (ll_backend__live_vars__succeeded)
                  *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_18_18;
                else
                  {
                    MR_Word ll_backend__live_vars__V_19_19;
                    MR_Integer ll_backend__live_vars__V_29_29 = (MR_Integer) ll_backend__live_vars__V_7_7;
                    MR_Integer ll_backend__live_vars__V_30_30 = (MR_Integer) ll_backend__live_vars__V_13_13;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__live_vars__V_19_19, ll_backend__live_vars__V_29_29, ll_backend__live_vars__V_30_30);
                    }
                    ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_19_19 == (MR_Integer) 0);
                    ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
                    if (ll_backend__live_vars__succeeded)
                      *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_19_19;
                    else
                      {
                        MR_Word ll_backend__live_vars__V_20_20;
                        MR_Integer ll_backend__live_vars__V_31_31 = (MR_Integer) ll_backend__live_vars__V_8_8;
                        MR_Integer ll_backend__live_vars__V_32_32 = (MR_Integer) ll_backend__live_vars__V_14_14;

                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__live_vars__V_20_20, ll_backend__live_vars__V_31_31, ll_backend__live_vars__V_32_32);
                        }
                        ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_20_20 == (MR_Integer) 0);
                        ll_backend__live_vars__succeeded = !(ll_backend__live_vars__succeeded);
                        if (ll_backend__live_vars__succeeded)
                          *ll_backend__live_vars__HeadVar__1_1 = ll_backend__live_vars__V_20_20;
                        else
                          {
                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__live_vars_scalar_common_1[1], ll_backend__live_vars__HeadVar__1_1, ((MR_Box) (ll_backend__live_vars__V_9_9)), ((MR_Box) (ll_backend__live_vars__V_15_15)));
                            }
                          }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
ll_backend__live_vars____Unify____alloc_data_0_0(
  MR_Word ll_backend__live_vars__HeadVar__1_1,
  MR_Word ll_backend__live_vars__HeadVar__2_2)
{
  {
    MR_bool ll_backend__live_vars__succeeded;
    MR_Integer ll_backend__live_vars__CastX_15 = (MR_Integer) ll_backend__live_vars__HeadVar__1_1;
    MR_Integer ll_backend__live_vars__CastY_16 = (MR_Integer) ll_backend__live_vars__HeadVar__2_2;

    ll_backend__live_vars__succeeded = (ll_backend__live_vars__CastX_15 == ll_backend__live_vars__CastY_16);
    if (ll_backend__live_vars__succeeded)
      ll_backend__live_vars__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__live_vars__TypeCtorInfo_20_20;
        MR_Word ll_backend__live_vars__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__live_vars__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__live_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ll_backend__live_vars__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ll_backend__live_vars__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 4)));
        MR_ArrayPtr ll_backend__live_vars__V_8_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word ll_backend__live_vars__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__live_vars__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__live_vars__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ll_backend__live_vars__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ll_backend__live_vars__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 4)));
        MR_ArrayPtr ll_backend__live_vars__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 5)));

        {
          ll_backend__live_vars__succeeded = hlds__hlds_module____Unify____module_info_0_0(ll_backend__live_vars__V_3_3, ll_backend__live_vars__V_9_9);
        }
        if (ll_backend__live_vars__succeeded)
          {
            {
              ll_backend__live_vars__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ll_backend__live_vars__V_4_4, ll_backend__live_vars__V_10_10);
            }
            if (ll_backend__live_vars__succeeded)
              {
                {
                  ll_backend__live_vars__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ll_backend__live_vars__V_5_5, ll_backend__live_vars__V_11_11);
                }
                if (ll_backend__live_vars__succeeded)
                  {
                    ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_6_6 == ll_backend__live_vars__V_12_12);
                    if (ll_backend__live_vars__succeeded)
                      {
                        ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_7_7 == ll_backend__live_vars__V_13_13);
                        if (ll_backend__live_vars__succeeded)
                          {
                            ll_backend__live_vars__TypeCtorInfo_20_20 = (MR_Word) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0;
                            {
                              ll_backend__live_vars__succeeded = mercury__array____Unify____array_1_0(ll_backend__live_vars__TypeCtorInfo_20_20, (MR_ArrayPtr) ll_backend__live_vars__V_8_8, (MR_ArrayPtr) ll_backend__live_vars__V_14_14);
                            }
                          }
                      }
                  }
              }
          }
      }
    return ll_backend__live_vars__succeeded;
  }
}

void MR_CALL 
ll_backend__live_vars__at_recursive_call_for_loop_control_4_p_0(
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5,
  MR_Word ll_backend__live_vars__HeadVar__1_1,
  MR_Word ll_backend__live_vars__HeadVar__2_2,
  MR_Box ll_backend__live_vars__HeadVar__3_3,
  MR_Box * ll_backend__live_vars__HeadVar__4_4)
{
  {
    MR_bool ll_backend__live_vars__succeeded;
    void MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5, (MR_Integer) 0)), (MR_Integer) 8)));

    {
      ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5), ((MR_Box) (ll_backend__live_vars__HeadVar__1_1)), ((MR_Box) (ll_backend__live_vars__HeadVar__2_2)), ll_backend__live_vars__HeadVar__3_3, ll_backend__live_vars__HeadVar__4_4);
    }
  }
}

void MR_CALL 
ll_backend__live_vars__at_par_conj_4_p_0(
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5,
  MR_Word ll_backend__live_vars__HeadVar__1_1,
  MR_Word ll_backend__live_vars__HeadVar__2_2,
  MR_Box ll_backend__live_vars__HeadVar__3_3,
  MR_Box * ll_backend__live_vars__HeadVar__4_4)
{
  {
    MR_bool ll_backend__live_vars__succeeded;
    void MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5, (MR_Integer) 0)), (MR_Integer) 7)));

    {
      ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5), ((MR_Box) (ll_backend__live_vars__HeadVar__1_1)), ((MR_Box) (ll_backend__live_vars__HeadVar__2_2)), ll_backend__live_vars__HeadVar__3_3, ll_backend__live_vars__HeadVar__4_4);
    }
  }
}

void MR_CALL 
ll_backend__live_vars__at_resume_site_4_p_0(
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5,
  MR_Word ll_backend__live_vars__HeadVar__1_1,
  MR_Word ll_backend__live_vars__HeadVar__2_2,
  MR_Box ll_backend__live_vars__HeadVar__3_3,
  MR_Box * ll_backend__live_vars__HeadVar__4_4)
{
  {
    MR_bool ll_backend__live_vars__succeeded;
    void MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5, (MR_Integer) 0)), (MR_Integer) 6)));

    {
      ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5), ((MR_Box) (ll_backend__live_vars__HeadVar__1_1)), ((MR_Box) (ll_backend__live_vars__HeadVar__2_2)), ll_backend__live_vars__HeadVar__3_3, ll_backend__live_vars__HeadVar__4_4);
    }
  }
}

void MR_CALL 
ll_backend__live_vars__at_call_site_4_p_0(
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5,
  MR_Word ll_backend__live_vars__HeadVar__1_1,
  MR_Word ll_backend__live_vars__HeadVar__2_2,
  MR_Box ll_backend__live_vars__HeadVar__3_3,
  MR_Box * ll_backend__live_vars__HeadVar__4_4)
{
  {
    MR_bool ll_backend__live_vars__succeeded;
    void MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5, (MR_Integer) 0)), (MR_Integer) 5)));

    {
      ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_5), ((MR_Box) (ll_backend__live_vars__HeadVar__1_1)), ((MR_Box) (ll_backend__live_vars__HeadVar__2_2)), ll_backend__live_vars__HeadVar__3_3, ll_backend__live_vars__HeadVar__4_4);
    }
  }
}

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_recursive_call_4_p_0(
  MR_Word * ll_backend__live_vars__MaybeNeedLC_5,
  MR_Word * ll_backend__live_vars__DelayDeathSet_6,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_18)
{
  {
    MR_bool ll_backend__live_vars__succeeded;

    switch (MR_tag((MR_Word) ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ll_backend__live_vars__MaybeNeedLC_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            *ll_backend__live_vars__DelayDeathSet_6 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
          *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_18 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17;
        }
        break;
      case (MR_Integer) 1:
        {
          *ll_backend__live_vars__MaybeNeedLC_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            *ll_backend__live_vars__DelayDeathSet_6 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
          *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_18 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17;
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.live_vars", (MR_String) "predicate \140ll_backend.live_vars.par_stack_vars_recursive_call\'/4", (MR_String) "recursive call in loop control scope");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ll_backend__live_vars__StackVarsList0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17, (MR_Integer) 0)));
          MR_Word ll_backend__live_vars__StackVars_14;
          MR_Word ll_backend__live_vars__StackVarsList_15;
          MR_Word ll_backend__live_vars__NonoverlapSets_16;
          MR_Word ll_backend__live_vars__V_19_19;

          *ll_backend__live_vars__DelayDeathSet_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17, (MR_Integer) 1)));
          ll_backend__live_vars__StackVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_17, (MR_Integer) 2)));
          {
            ll_backend__live_vars__StackVarsList_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__live_vars__StackVarsList_15, 0) = ((MR_Box) (ll_backend__live_vars__StackVars_14));
            MR_hl_field(MR_mktag(1), ll_backend__live_vars__StackVarsList_15, 1) = ((MR_Box) (ll_backend__live_vars__StackVarsList0_13));
          }
          {
            parse_tree__set_of_var__cartesian_product_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__StackVarsList_15, &ll_backend__live_vars__NonoverlapSets_16);
          }
          ll_backend__live_vars__V_19_19 = (MR_Word) ll_backend__live_vars__NonoverlapSets_16;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__live_vars__MaybeNeedLC_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__V_19_19));
          }
          *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_get_nonlocals_2_p_0(
  MR_Word ll_backend__live_vars__HeadVar__1_1,
  MR_Word * ll_backend__live_vars__HeadVar__2_2)
{
  {
    MR_bool ll_backend__live_vars__succeeded;

    switch (MR_tag((MR_Word) ll_backend__live_vars__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            *ll_backend__live_vars__HeadVar__2_2 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__live_vars__V_4_4;
          MR_Word ll_backend__live_vars__V_5_5;

          *ll_backend__live_vars__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
          ll_backend__live_vars__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
          ll_backend__live_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 2)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__live_vars__V_7_7;

          *ll_backend__live_vars__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
          ll_backend__live_vars__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
        }
        break;
      case (MR_Integer) 3:
        {
          {
            *ll_backend__live_vars__HeadVar__2_2 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_accumulate_stack_vars_3_p_0(
  MR_Word ll_backend__live_vars__HeadVar__1_1,
  MR_Word ll_backend__live_vars__HeadVar__2_2,
  MR_Word * ll_backend__live_vars__HeadVar__3_3)
{
  {
    MR_bool ll_backend__live_vars__succeeded;

    switch (MR_tag((MR_Word) ll_backend__live_vars__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ll_backend__live_vars__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__live_vars__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          MR_Word ll_backend__live_vars__Nonlocals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word ll_backend__live_vars__ParallelVars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
          MR_Word ll_backend__live_vars__AccStackVars0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
          MR_Word ll_backend__live_vars__AccStackVars_9;
          MR_Word ll_backend__live_vars__V_10_10;

          {
            ll_backend__live_vars__V_10_10 = parse_tree__set_of_var__difference_2_f_0(ll_backend__live_vars__TypeCtorInfo_20_20, ll_backend__live_vars__HeadVar__1_1, ll_backend__live_vars__Nonlocals_6);
          }
          {
            ll_backend__live_vars__AccStackVars_9 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_20_20, ll_backend__live_vars__AccStackVars0_8, ll_backend__live_vars__V_10_10);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__live_vars__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__Nonlocals_6));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__live_vars__ParallelVars_7));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ll_backend__live_vars__AccStackVars_9));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__live_vars__NonLocals_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word ll_backend__live_vars__AccStackVars0_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
          MR_Word ll_backend__live_vars__AccStackVars_14;

          {
            ll_backend__live_vars__AccStackVars_14 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__AccStackVars0_13, ll_backend__live_vars__HeadVar__1_1);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__live_vars__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__live_vars__NonLocals_12));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__live_vars__AccStackVars_14));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ll_backend__live_vars__LocalStackVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word ll_backend__live_vars__WouldDieSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
          MR_Word ll_backend__live_vars__AccStackVars0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 2)));
          MR_Word ll_backend__live_vars__AccStackVars_19;

          {
            ll_backend__live_vars__AccStackVars_19 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__AccStackVars0_18, ll_backend__live_vars__HeadVar__1_1);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__live_vars__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (ll_backend__live_vars__LocalStackVars_16));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__WouldDieSet_17));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__AccStackVars_19));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_get_stackvars_2_p_0(
  MR_Word ll_backend__live_vars__HeadVar__1_1,
  MR_Word * ll_backend__live_vars__HeadVar__2_2)
{
  {
    MR_bool ll_backend__live_vars__succeeded;

    switch (MR_tag((MR_Word) ll_backend__live_vars__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            *ll_backend__live_vars__HeadVar__2_2 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__live_vars__StackVarss_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word ll_backend__live_vars__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word ll_backend__live_vars__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 2)));

          {
            *ll_backend__live_vars__HeadVar__2_2 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__StackVarss_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__live_vars__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));

          *ll_backend__live_vars__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ll_backend__live_vars__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word ll_backend__live_vars__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));

          *ll_backend__live_vars__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 2)));
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_end_loop_control_4_p_0(
  MR_Word ll_backend__live_vars__NewWouldDieSet_5,
  MR_Word ll_backend__live_vars__OldParStackVars_6,
  MR_Word ll_backend__live_vars__ParStackVars0_7,
  MR_Word * ll_backend__live_vars__ParStackVars_8)
{
  {
    MR_bool ll_backend__live_vars__succeeded;
    MR_Word ll_backend__live_vars__NewStackVars_9;

    switch (MR_tag((MR_Word) ll_backend__live_vars__ParStackVars0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            ll_backend__live_vars__NewStackVars_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__live_vars__StackVarss_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 1)));
          MR_Word ll_backend__live_vars__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 0)));
          MR_Word ll_backend__live_vars__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 2)));

          {
            ll_backend__live_vars__NewStackVars_9 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__StackVarss_29);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__live_vars__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 0)));

          ll_backend__live_vars__NewStackVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 1)));
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ll_backend__live_vars__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 0)));
          MR_Word ll_backend__live_vars__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 1)));

          ll_backend__live_vars__NewStackVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 2)));
        }
        break;
    }
    switch (MR_tag((MR_Word) ll_backend__live_vars__OldParStackVars_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__live_vars__V_23_23;
          MR_Word ll_backend__live_vars__V_25_25;

          {
            ll_backend__live_vars__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_23_23, 0) = ((MR_Box) (ll_backend__live_vars__NewStackVars_9));
            MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ll_backend__live_vars__V_25_25 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__live_vars__ParStackVars_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (ll_backend__live_vars__V_23_23));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__NewWouldDieSet_5));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__V_25_25));
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.live_vars", (MR_String) "predicate \140ll_backend.live_vars.par_stack_vars_end_loop_control\'/4", (MR_String) "Loop control scope found in other parallel context");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ll_backend__live_vars__StackVarsList_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__OldParStackVars_6, (MR_Integer) 0)));
          MR_Word ll_backend__live_vars__WouldDieSet0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__OldParStackVars_6, (MR_Integer) 1)));
          MR_Word ll_backend__live_vars__StackVarsAcc_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__OldParStackVars_6, (MR_Integer) 2)));
          MR_Word ll_backend__live_vars__WouldDieSet_13;
          MR_Word ll_backend__live_vars__V_22_22;

          {
            ll_backend__live_vars__WouldDieSet_13 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__WouldDieSet0_11, ll_backend__live_vars__NewWouldDieSet_5);
          }
          {
            ll_backend__live_vars__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_22_22, 0) = ((MR_Box) (ll_backend__live_vars__NewStackVars_9));
            MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_22_22, 1) = ((MR_Box) (ll_backend__live_vars__StackVarsList_10));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__live_vars__ParStackVars_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (ll_backend__live_vars__V_22_22));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__WouldDieSet_13));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__StackVarsAcc_12));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_start_loop_control_3_p_0(
  MR_Word ll_backend__live_vars__NonLocals_4,
  MR_Word ll_backend__live_vars__ParStackVars0_5,
  MR_Word * ll_backend__live_vars__HeadVar__3_3)
{
  {
    MR_bool ll_backend__live_vars__succeeded;
    MR_Word ll_backend__live_vars__V_14_14;

    {
      ll_backend__live_vars__V_14_14 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__live_vars__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__live_vars__NonLocals_4));
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__live_vars__V_14_14));
    }
    switch (MR_tag((MR_Word) ll_backend__live_vars__ParStackVars0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.live_vars", (MR_String) "predicate \140ll_backend.live_vars.par_stack_vars_start_loop_control\'/3", (MR_String) "Loop control scope found in other parallel context");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_end_parallel_conjunction_4_p_0(
  MR_Word ll_backend__live_vars__LiveSet_5,
  MR_Word ll_backend__live_vars__OuterParStackVars_6,
  MR_Word ll_backend__live_vars__ParStackVars0_7,
  MR_Word * ll_backend__live_vars__ParStackVars_8)
{
  {
    MR_bool ll_backend__live_vars__succeeded;
    MR_Word ll_backend__live_vars__InnerStackVars_9;

    switch (MR_tag((MR_Word) ll_backend__live_vars__ParStackVars0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            ll_backend__live_vars__InnerStackVars_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__live_vars__StackVarss_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 1)));
          MR_Word ll_backend__live_vars__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 0)));
          MR_Word ll_backend__live_vars__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 2)));

          {
            ll_backend__live_vars__InnerStackVars_9 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__StackVarss_30);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__live_vars__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 0)));

          ll_backend__live_vars__InnerStackVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 1)));
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ll_backend__live_vars__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 0)));
          MR_Word ll_backend__live_vars__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 1)));

          ll_backend__live_vars__InnerStackVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__ParStackVars0_7, (MR_Integer) 2)));
        }
        break;
    }
    switch (MR_tag((MR_Word) ll_backend__live_vars__OuterParStackVars_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ll_backend__live_vars__ParStackVars_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__live_vars__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          MR_Word ll_backend__live_vars__OuterNonLocals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 0)));
          MR_Word ll_backend__live_vars__OuterLocalStackVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 1)));
          MR_Word ll_backend__live_vars__OuterAccStackVars0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 2)));
          MR_Word ll_backend__live_vars__OuterAccStackVars_13;
          MR_Word ll_backend__live_vars__V_21_21;
          MR_Word ll_backend__live_vars__V_22_22;

          {
            ll_backend__live_vars__V_21_21 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_26_26, ll_backend__live_vars__OuterAccStackVars0_12, ll_backend__live_vars__InnerStackVars_9);
          }
          {
            ll_backend__live_vars__V_22_22 = parse_tree__set_of_var__difference_2_f_0(ll_backend__live_vars__TypeCtorInfo_26_26, ll_backend__live_vars__LiveSet_5, ll_backend__live_vars__OuterNonLocals_10);
          }
          {
            ll_backend__live_vars__OuterAccStackVars_13 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_26_26, ll_backend__live_vars__V_21_21, ll_backend__live_vars__V_22_22);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__live_vars__ParStackVars_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__OuterNonLocals_10));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__live_vars__OuterLocalStackVars_11));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ll_backend__live_vars__OuterAccStackVars_13));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__live_vars__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          MR_Word ll_backend__live_vars__StackVars0_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 1)));
          MR_Word ll_backend__live_vars__StackVars_15;
          MR_Word ll_backend__live_vars__V_19_19;
          MR_Word ll_backend__live_vars__V_20_20;
          MR_Word ll_backend__live_vars__OuterNonLocals_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 0)));

          {
            ll_backend__live_vars__V_19_19 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_27_27, ll_backend__live_vars__StackVars0_14, ll_backend__live_vars__InnerStackVars_9);
          }
          {
            ll_backend__live_vars__V_20_20 = parse_tree__set_of_var__difference_2_f_0(ll_backend__live_vars__TypeCtorInfo_27_27, ll_backend__live_vars__LiveSet_5, ll_backend__live_vars__OuterNonLocals_23);
          }
          {
            ll_backend__live_vars__StackVars_15 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_27_27, ll_backend__live_vars__V_19_19, ll_backend__live_vars__V_20_20);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__live_vars__ParStackVars_8 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__live_vars__OuterNonLocals_23));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__live_vars__StackVars_15));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ll_backend__live_vars__TypeCtorInfo_28_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          MR_Word ll_backend__live_vars__StackVarsList_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 0)));
          MR_Word ll_backend__live_vars__WouldDieSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 1)));
          MR_Word ll_backend__live_vars__V_18_18;
          MR_Word ll_backend__live_vars__StackVars0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__OuterParStackVars_6, (MR_Integer) 2)));
          MR_Word ll_backend__live_vars__StackVars_25;

          {
            ll_backend__live_vars__V_18_18 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_28_28, ll_backend__live_vars__StackVars0_24, ll_backend__live_vars__InnerStackVars_9);
          }
          {
            ll_backend__live_vars__StackVars_25 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_28_28, ll_backend__live_vars__V_18_18, ll_backend__live_vars__LiveSet_5);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__live_vars__ParStackVars_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (ll_backend__live_vars__StackVarsList_16));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__WouldDieSet_17));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__StackVars_25));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_start_parallel_conjunction_3_p_0(
  MR_Word ll_backend__live_vars__LiveSet_4,
  MR_Word ll_backend__live_vars__OuterParStackVars_5,
  MR_Word * ll_backend__live_vars__HeadVar__3_3)
{
  {
    MR_bool ll_backend__live_vars__succeeded;
    MR_Word ll_backend__live_vars__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word ll_backend__live_vars__InnerNonLocals_6;
    MR_Word ll_backend__live_vars__OuterNonLocals_7;
    MR_Word ll_backend__live_vars__V_9_9;

    {
      ll_backend__live_vars__V_9_9 = parse_tree__set_of_var__init_0_f_0(ll_backend__live_vars__TypeCtorInfo_10_10);
    }
    switch (MR_tag((MR_Word) ll_backend__live_vars__OuterParStackVars_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            ll_backend__live_vars__OuterNonLocals_7 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__live_vars__V_12_12;
          MR_Word ll_backend__live_vars__V_13_13;

          ll_backend__live_vars__OuterNonLocals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__OuterParStackVars_5, (MR_Integer) 0)));
          ll_backend__live_vars__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__OuterParStackVars_5, (MR_Integer) 1)));
          ll_backend__live_vars__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__OuterParStackVars_5, (MR_Integer) 2)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__live_vars__V_15_15;

          ll_backend__live_vars__OuterNonLocals_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__OuterParStackVars_5, (MR_Integer) 0)));
          ll_backend__live_vars__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__OuterParStackVars_5, (MR_Integer) 1)));
        }
        break;
      case (MR_Integer) 3:
        {
          {
            ll_backend__live_vars__OuterNonLocals_7 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          }
        }
        break;
    }
    {
      ll_backend__live_vars__InnerNonLocals_6 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_10_10, ll_backend__live_vars__OuterNonLocals_7, ll_backend__live_vars__LiveSet_4);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__live_vars__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__InnerNonLocals_6));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ll_backend__live_vars__V_9_9));
    }
  }
}

static void MR_CALL 
ll_backend__live_vars__record_par_conj_6_p_0(
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_17,
  MR_Word ll_backend__live_vars__NeedInParConj_7,
  MR_Word ll_backend__live_vars__AllocData_8,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_GoalInfo_0_11,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_GoalInfo_12,
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_13,
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_14)
{
  {
    MR_bool ll_backend__live_vars__succeeded;
    void MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      hlds__hlds_llds__goal_info_set_need_in_par_conj_3_p_0(ll_backend__live_vars__NeedInParConj_7, ll_backend__live_vars__STATE_VARIABLE_GoalInfo_0_11, ll_backend__live_vars__STATE_VARIABLE_GoalInfo_12);
    }
    ll_backend__live_vars__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_17, (MR_Integer) 0)), (MR_Integer) 7)));
    {
      ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_17), ((MR_Box) (ll_backend__live_vars__NeedInParConj_7)), ((MR_Box) (ll_backend__live_vars__AllocData_8)), ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_13, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_14);
    }
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_cases_12_p_0(
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_54,
  MR_Word ll_backend__live_vars__HeadVar__1_1,
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
  MR_Word ll_backend__live_vars__ResumeVars0_3,
  MR_Word ll_backend__live_vars__AllocData_4,
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5,
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6,
  MR_Word ll_backend__live_vars__HeadVar__7_7,
  MR_Word * ll_backend__live_vars__HeadVar__8_8,
  MR_Word ll_backend__live_vars__HeadVar__9_9,
  MR_Word * ll_backend__live_vars__HeadVar__10_10,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12)
{
  {
    MR_bool ll_backend__live_vars__succeeded;

    if ((ll_backend__live_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__live_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11;
        *ll_backend__live_vars__HeadVar__10_10 = ll_backend__live_vars__HeadVar__9_9;
        *ll_backend__live_vars__HeadVar__8_8 = ll_backend__live_vars__HeadVar__7_7;
        *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5;
      }
    else
      {
        MR_Word ll_backend__live_vars__Case0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__live_vars__Cases0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__live_vars__Case_29;
        MR_Word ll_backend__live_vars__Cases_30;
        MR_Word ll_backend__live_vars__MainConsId_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Case0_27, (MR_Integer) 0)));
        MR_Word ll_backend__live_vars__OtherConsIds_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Case0_27, (MR_Integer) 1)));
        MR_Word ll_backend__live_vars__Goal0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Case0_27, (MR_Integer) 2)));
        MR_Word ll_backend__live_vars__Goal_42;
        MR_Word ll_backend__live_vars__NondetLiveness1_43;
        MR_Word ll_backend__live_vars__NondetLiveness2_45;
        MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_50_50;
        MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_51_51;
        MR_Word ll_backend__live_vars___Liveness2_44;

        {
          ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_54, ll_backend__live_vars__Goal0_41, &ll_backend__live_vars__Goal_42, ll_backend__live_vars__ResumeVars0_3, ll_backend__live_vars__AllocData_4, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_50_50, ll_backend__live_vars__HeadVar__7_7, ll_backend__live_vars__HeadVar__8_8, ll_backend__live_vars__HeadVar__9_9, &ll_backend__live_vars__NondetLiveness1_43, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_51_51);
        }
        {
          ll_backend__live_vars__Case_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__Case_29, 0) = ((MR_Box) (ll_backend__live_vars__MainConsId_39));
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__Case_29, 1) = ((MR_Box) (ll_backend__live_vars__OtherConsIds_40));
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__Case_29, 2) = ((MR_Box) (ll_backend__live_vars__Goal_42));
        }
        {
          ll_backend__live_vars__build_live_sets_in_cases_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_54, ll_backend__live_vars__Cases0_28, &ll_backend__live_vars__Cases_30, ll_backend__live_vars__ResumeVars0_3, ll_backend__live_vars__AllocData_4, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_50_50, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6, ll_backend__live_vars__HeadVar__7_7, &ll_backend__live_vars___Liveness2_44, ll_backend__live_vars__HeadVar__9_9, &ll_backend__live_vars__NondetLiveness2_45, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_51_51, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__live_vars__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__Case_29));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__live_vars__Cases_30));
        }
        {
          parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__NondetLiveness1_43, ll_backend__live_vars__NondetLiveness2_45, ll_backend__live_vars__HeadVar__10_10);
        }
      }
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_disj_13_p_0(
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_61,
  MR_Word ll_backend__live_vars__HeadVar__1_1,
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
  MR_Word ll_backend__live_vars__DisjGoalInfo_3,
  MR_Word ll_backend__live_vars__ResumeVars0_4,
  MR_Word ll_backend__live_vars__AllocData_5,
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_6,
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_7,
  MR_Word ll_backend__live_vars__HeadVar__8_8,
  MR_Word * ll_backend__live_vars__HeadVar__9_9,
  MR_Word ll_backend__live_vars__HeadVar__10_10,
  MR_Word * ll_backend__live_vars__HeadVar__11_11,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_12,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_13)
{
  {
    MR_bool ll_backend__live_vars__succeeded;

    if ((ll_backend__live_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__live_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_13 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_12;
        *ll_backend__live_vars__HeadVar__11_11 = ll_backend__live_vars__HeadVar__10_10;
        *ll_backend__live_vars__HeadVar__9_9 = ll_backend__live_vars__HeadVar__8_8;
        *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_7 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_6;
      }
    else
      {
        MR_Word ll_backend__live_vars__Goal0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__live_vars__Goals0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__live_vars__Goal_31;
        MR_Word ll_backend__live_vars__Goals_32;
        MR_Word ll_backend__live_vars__GoalInfo_43;
        MR_Word ll_backend__live_vars__NondetLiveness1_44;
        MR_Word ll_backend__live_vars__NondetLiveness2_46;
        MR_Word ll_backend__live_vars__DisjCodeModel_47;
        MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_56_56;
        MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_57_57;
        MR_Word ll_backend__live_vars__V_42_42;
        MR_Word ll_backend__live_vars___Liveness2_45;

        {
          ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_61, ll_backend__live_vars__Goal0_29, &ll_backend__live_vars__Goal_31, ll_backend__live_vars__ResumeVars0_4, ll_backend__live_vars__AllocData_5, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_6, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_56_56, ll_backend__live_vars__HeadVar__8_8, ll_backend__live_vars__HeadVar__9_9, ll_backend__live_vars__HeadVar__10_10, &ll_backend__live_vars__NondetLiveness1_44, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_12, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_57_57);
        }
        ll_backend__live_vars__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Goal_31, (MR_Integer) 0)));
        ll_backend__live_vars__GoalInfo_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Goal_31, (MR_Integer) 1)));
        {
          ll_backend__live_vars__build_live_sets_in_disj_13_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_61, ll_backend__live_vars__Goals0_30, &ll_backend__live_vars__Goals_32, ll_backend__live_vars__DisjGoalInfo_3, ll_backend__live_vars__ResumeVars0_4, ll_backend__live_vars__AllocData_5, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_56_56, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_7, ll_backend__live_vars__HeadVar__8_8, &ll_backend__live_vars___Liveness2_45, ll_backend__live_vars__HeadVar__10_10, &ll_backend__live_vars__NondetLiveness2_46, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_57_57, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_13);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__live_vars__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__Goal_31));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__live_vars__Goals_32));
        }
        {
          ll_backend__live_vars__DisjCodeModel_47 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__live_vars__DisjGoalInfo_3);
        }
        switch (ll_backend__live_vars__DisjCodeModel_47) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *ll_backend__live_vars__HeadVar__11_11 = ll_backend__live_vars__HeadVar__10_10;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__live_vars__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
              MR_Word ll_backend__live_vars__NondetLiveness3_48;
              MR_Word ll_backend__live_vars__Resume_49;
              MR_Word ll_backend__live_vars__ResumePointVars_50;
              MR_Word ll_backend__live_vars__Locs_51;
              MR_Word ll_backend__live_vars__V_60_60;

              {
                parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_62_62, ll_backend__live_vars__NondetLiveness1_44, ll_backend__live_vars__NondetLiveness2_46, &ll_backend__live_vars__NondetLiveness3_48);
              }
              {
                hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__live_vars__GoalInfo_43, &ll_backend__live_vars__Resume_49);
              }
              ll_backend__live_vars__succeeded = ((MR_tag((MR_Word) ll_backend__live_vars__Resume_49)) == (MR_mktag((MR_Integer) 1)));
              if (ll_backend__live_vars__succeeded)
                {
                  ll_backend__live_vars__ResumePointVars_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__Resume_49, (MR_Integer) 0)));
                  ll_backend__live_vars__Locs_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__Resume_49, (MR_Integer) 1)));
                  ll_backend__live_vars__V_60_60 = (MR_Integer) 1;
                  switch (ll_backend__live_vars__Locs_51) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 2:
                      {
                        ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_60_60 == (MR_Integer) 1);
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_60_60 == (MR_Integer) 0);
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_60_60 == (MR_Integer) 1);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_60_60 == (MR_Integer) 1);
                      }
                      break;
                  }
                }
              if (ll_backend__live_vars__succeeded)
                {
                  parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_62_62, ll_backend__live_vars__NondetLiveness3_48, ll_backend__live_vars__ResumePointVars_50, ll_backend__live_vars__HeadVar__11_11);
                }
              else
                *ll_backend__live_vars__HeadVar__11_11 = ll_backend__live_vars__NondetLiveness3_48;
            }
            break;
        }
      }
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_par_conj_12_p_0(
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_50,
  MR_Word ll_backend__live_vars__HeadVar__1_1,
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
  MR_Word ll_backend__live_vars__ResumeVars0_3,
  MR_Word ll_backend__live_vars__AllocData_4,
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5,
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6,
  MR_Word ll_backend__live_vars__HeadVar__7_7,
  MR_Word * ll_backend__live_vars__Liveness_8,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12)
{
  {
    MR_bool ll_backend__live_vars__succeeded;

    if ((ll_backend__live_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__live_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__live_vars__Liveness_8 = ll_backend__live_vars__HeadVar__7_7;
        *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11;
        *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9;
        *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5;
      }
    else
      {
        MR_Word ll_backend__live_vars__Goal0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__live_vars__Goals0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__live_vars__Goal_27;
        MR_Word ll_backend__live_vars__Goals_28;
        MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_43_43;
        MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_44_44;
        MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_45_45;
        MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_46_46;
        MR_Word ll_backend__live_vars__Nonlocals_54;
        MR_Word ll_backend__live_vars__PrevSets_55;
        MR_Word ll_backend__live_vars__CurSet_56;
        MR_Word ll_backend__live_vars___Liveness1_36;

        {
          ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_50, ll_backend__live_vars__Goal0_25, &ll_backend__live_vars__Goal_27, ll_backend__live_vars__ResumeVars0_3, ll_backend__live_vars__AllocData_4, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_43_43, ll_backend__live_vars__HeadVar__7_7, ll_backend__live_vars__Liveness_8, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9, &ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_44_44, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_45_45);
        }
        ll_backend__live_vars__succeeded = ((MR_tag((MR_Word) ll_backend__live_vars__STATE_VARIABLE_ParStackVars_45_45)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__live_vars__succeeded)
          {
            ll_backend__live_vars__Nonlocals_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_45_45, (MR_Integer) 0)));
            ll_backend__live_vars__PrevSets_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_45_45, (MR_Integer) 1)));
            ll_backend__live_vars__CurSet_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_45_45, (MR_Integer) 2)));
            {
              MR_Word ll_backend__live_vars__V_58_58;
              MR_Word ll_backend__live_vars__V_59_59;

              {
                ll_backend__live_vars__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_58_58, 0) = ((MR_Box) (ll_backend__live_vars__CurSet_56));
                MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_58_58, 1) = ((MR_Box) (ll_backend__live_vars__PrevSets_55));
              }
              {
                ll_backend__live_vars__V_59_59 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              }
              {
                ll_backend__live_vars__STATE_VARIABLE_ParStackVars_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_46_46, 0) = ((MR_Box) (ll_backend__live_vars__Nonlocals_54));
                MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_46_46, 1) = ((MR_Box) (ll_backend__live_vars__V_58_58));
                MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_ParStackVars_46_46, 2) = ((MR_Box) (ll_backend__live_vars__V_59_59));
              }
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.live_vars", (MR_String) "predicate \140ll_backend.live_vars.par_stack_vars_next_par_conjunct\'/2", (MR_String) "expected parallel_conjunction/3");
              return;
            }
          }
        {
          ll_backend__live_vars__build_live_sets_in_par_conj_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_50, ll_backend__live_vars__Goals0_26, &ll_backend__live_vars__Goals_28, ll_backend__live_vars__ResumeVars0_3, ll_backend__live_vars__AllocData_4, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_43_43, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6, ll_backend__live_vars__HeadVar__7_7, &ll_backend__live_vars___Liveness1_36, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_44_44, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_46_46, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__live_vars__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__Goal_27));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__live_vars__Goals_28));
        }
      }
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_conj_12_p_0(
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_60,
  MR_Word ll_backend__live_vars__HeadVar__1_1,
  MR_Word * ll_backend__live_vars__HeadVar__2_2,
  MR_Word ll_backend__live_vars__ResumeVars0_3,
  MR_Word ll_backend__live_vars__AllocData_4,
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5,
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_0_7,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_Liveness_8,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12)
{
  {
    MR_bool ll_backend__live_vars__succeeded;

    if ((ll_backend__live_vars__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__live_vars__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11;
        *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9;
        *ll_backend__live_vars__STATE_VARIABLE_Liveness_8 = ll_backend__live_vars__STATE_VARIABLE_Liveness_0_7;
        *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5;
      }
    else
      {
        MR_Word ll_backend__live_vars__Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__live_vars__Goals0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__live_vars__Goal_29;
        MR_Word ll_backend__live_vars__Goals_30;
        MR_Word ll_backend__live_vars__GoalInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Goal0_27, (MR_Integer) 1)));
        MR_Word ll_backend__live_vars__InstMapDelta_39;
        MR_Word ll_backend__live_vars__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Goal0_27, (MR_Integer) 0)));

        {
          ll_backend__live_vars__InstMapDelta_39 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__live_vars__GoalInfo_38);
        }
        {
          ll_backend__live_vars__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(ll_backend__live_vars__InstMapDelta_39);
        }
        if (ll_backend__live_vars__succeeded)
          {
            {
              ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_60, ll_backend__live_vars__Goal0_27, &ll_backend__live_vars__Goal_29, ll_backend__live_vars__ResumeVars0_3, ll_backend__live_vars__AllocData_4, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_7, ll_backend__live_vars__STATE_VARIABLE_Liveness_8, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12);
            }
            ll_backend__live_vars__Goals_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_52_52;
            MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_53_53;
            MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_54_54;
            MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_55_55;

            {
              ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_60, ll_backend__live_vars__Goal0_27, &ll_backend__live_vars__Goal_29, ll_backend__live_vars__ResumeVars0_3, ll_backend__live_vars__AllocData_4, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_5, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_52_52, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_7, &ll_backend__live_vars__STATE_VARIABLE_Liveness_53_53, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_9, &ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_54_54, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_11, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_55_55);
            }
            {
              ll_backend__live_vars__build_live_sets_in_conj_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_60, ll_backend__live_vars__Goals0_28, &ll_backend__live_vars__Goals_30, ll_backend__live_vars__ResumeVars0_3, ll_backend__live_vars__AllocData_4, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_52_52, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_6, ll_backend__live_vars__STATE_VARIABLE_Liveness_53_53, ll_backend__live_vars__STATE_VARIABLE_Liveness_8, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_54_54, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_10, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_55_55, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_12);
            }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__live_vars__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__live_vars__Goal_29));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__live_vars__Goals_30));
        }
      }
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_call_12_p_0(
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_57,
  MR_Word ll_backend__live_vars__OutVars_13,
  MR_Word ll_backend__live_vars__GoalInfo0_14,
  MR_Word * ll_backend__live_vars__GoalInfo_15,
  MR_Word ll_backend__live_vars__ResumeVars0_16,
  MR_Word ll_backend__live_vars__AllocData_17,
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_27,
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_28,
  MR_Word ll_backend__live_vars__Liveness_19,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_29,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_30,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_31,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_32)
{
  {
    MR_bool ll_backend__live_vars__succeeded;
    MR_Word ll_backend__live_vars__TypeCtorInfo_58_58 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word ll_backend__live_vars__ForwardVars0_22;
    MR_Word ll_backend__live_vars__ForwardVars_23;
    MR_Word ll_backend__live_vars__Detism_24;
    MR_Word ll_backend__live_vars__NeedAcrossCall_25;
    MR_Word ll_backend__live_vars__CodeModel_26;
    MR_Word ll_backend__live_vars__V_33_33;
    MR_Word ll_backend__live_vars__V_44_44;
    MR_Word ll_backend__live_vars__V_42_42;
    MR_Word ll_backend__live_vars__V_43_43;
    MR_Word ll_backend__live_vars__V_45_45;
    MR_ArrayPtr ll_backend__live_vars__V_46_46;
    MR_Word ll_backend__live_vars__V_35_35;
    MR_Word ll_backend__live_vars__V_52_52;
    MR_Word ll_backend__live_vars__V_53_53;
    MR_Word ll_backend__live_vars__V_54_54;
    MR_Word ll_backend__live_vars__V_55_55;
    MR_ArrayPtr ll_backend__live_vars__V_56_56;
    void MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    {
      parse_tree__set_of_var__difference_3_p_0(ll_backend__live_vars__TypeCtorInfo_58_58, ll_backend__live_vars__Liveness_19, ll_backend__live_vars__OutVars_13, &ll_backend__live_vars__ForwardVars0_22);
    }
    ll_backend__live_vars__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 0)));
    ll_backend__live_vars__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 1)));
    ll_backend__live_vars__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 2)));
    ll_backend__live_vars__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 3)));
    ll_backend__live_vars__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 4)));
    ll_backend__live_vars__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 5)));
    switch (ll_backend__live_vars__V_44_44) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__live_vars__ForwardVars_23 = ll_backend__live_vars__ForwardVars0_22;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__live_vars__TypeCtorInfo_18_71;
          MR_Word ll_backend__live_vars__VarTypes_65;
          MR_Word ll_backend__live_vars__RttiVarMaps_66;
          MR_Word ll_backend__live_vars__TypeInfoVarsLive_67;
          MR_Word ll_backend__live_vars__TypeInfoVarsOut_68;
          MR_Word ll_backend__live_vars__STATE_VARIABLE_LiveVars_16_69;

          {
            hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__live_vars__V_33_33, &ll_backend__live_vars__VarTypes_65);
          }
          {
            hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ll_backend__live_vars__V_33_33, &ll_backend__live_vars__RttiVarMaps_66);
          }
          {
            hlds__hlds_rtti__get_typeinfo_vars_4_p_0(ll_backend__live_vars__ForwardVars0_22, ll_backend__live_vars__VarTypes_65, ll_backend__live_vars__RttiVarMaps_66, &ll_backend__live_vars__TypeInfoVarsLive_67);
          }
          {
            hlds__hlds_rtti__get_typeinfo_vars_4_p_0(ll_backend__live_vars__OutVars_13, ll_backend__live_vars__VarTypes_65, ll_backend__live_vars__RttiVarMaps_66, &ll_backend__live_vars__TypeInfoVarsOut_68);
          }
          ll_backend__live_vars__TypeCtorInfo_18_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          {
            parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_18_71, ll_backend__live_vars__ForwardVars0_22, ll_backend__live_vars__TypeInfoVarsOut_68, &ll_backend__live_vars__STATE_VARIABLE_LiveVars_16_69);
          }
          {
            parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_18_71, ll_backend__live_vars__STATE_VARIABLE_LiveVars_16_69, ll_backend__live_vars__TypeInfoVarsLive_67, &ll_backend__live_vars__ForwardVars_23);
          }
        }
        break;
    }
    {
      ll_backend__live_vars__Detism_24 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(ll_backend__live_vars__GoalInfo0_14);
    }
    ll_backend__live_vars__succeeded = (ll_backend__live_vars__Detism_24 == (MR_Integer) 6);
    if (ll_backend__live_vars__succeeded)
      {
        ll_backend__live_vars__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 0)));
        ll_backend__live_vars__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 1)));
        ll_backend__live_vars__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 2)));
        ll_backend__live_vars__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 3)));
        ll_backend__live_vars__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 4)));
        ll_backend__live_vars__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_17, (MR_Integer) 5)));
        ll_backend__live_vars__succeeded = (ll_backend__live_vars__V_35_35 == (MR_Integer) 1);
      }
    if (ll_backend__live_vars__succeeded)
      {
        MR_Word ll_backend__live_vars__V_36_36;
        MR_Word ll_backend__live_vars__V_37_37;
        MR_Word ll_backend__live_vars__V_38_38;

        {
          ll_backend__live_vars__V_36_36 = parse_tree__set_of_var__init_0_f_0(ll_backend__live_vars__TypeCtorInfo_58_58);
        }
        {
          ll_backend__live_vars__V_37_37 = parse_tree__set_of_var__init_0_f_0(ll_backend__live_vars__TypeCtorInfo_58_58);
        }
        {
          ll_backend__live_vars__V_38_38 = parse_tree__set_of_var__init_0_f_0(ll_backend__live_vars__TypeCtorInfo_58_58);
        }
        {
          ll_backend__live_vars__NeedAcrossCall_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedAcrossCall_25, 0) = ((MR_Box) (ll_backend__live_vars__V_36_36));
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedAcrossCall_25, 1) = ((MR_Box) (ll_backend__live_vars__V_37_37));
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedAcrossCall_25, 2) = ((MR_Box) (ll_backend__live_vars__V_38_38));
        }
      }
    else
      {
        ll_backend__live_vars__NeedAcrossCall_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedAcrossCall_25, 0) = ((MR_Box) (ll_backend__live_vars__ForwardVars_23));
        MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedAcrossCall_25, 1) = ((MR_Box) (ll_backend__live_vars__ResumeVars0_16));
        MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedAcrossCall_25, 2) = ((MR_Box) (ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_29));
      }
    {
      hlds__hlds_llds__goal_info_set_need_across_call_3_p_0(ll_backend__live_vars__NeedAcrossCall_25, ll_backend__live_vars__GoalInfo0_14, ll_backend__live_vars__GoalInfo_15);
    }
    ll_backend__live_vars__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_57, (MR_Integer) 0)), (MR_Integer) 5)));
    {
      ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_57), ((MR_Box) (ll_backend__live_vars__NeedAcrossCall_25)), ((MR_Box) (ll_backend__live_vars__AllocData_17)), ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_27, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_28);
    }
    {
      ll_backend__live_vars__CodeModel_26 = hlds__code_model__goal_info_get_code_model_1_f_0(*ll_backend__live_vars__GoalInfo_15);
    }
    switch (ll_backend__live_vars__CodeModel_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_30 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_29;
        break;
      case (MR_Integer) 2:
        {
          parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_58_58, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_29, ll_backend__live_vars__ForwardVars_23, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_30);
        }
        break;
      case (MR_Integer) 1:
        *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_30 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_29;
        break;
    }
    {
      ll_backend__live_vars__par_stack_vars_accumulate_stack_vars_3_p_0(ll_backend__live_vars__ForwardVars_23, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_31, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_32);
    }
  }
}

static MR_Box MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_1(
  MR_Box ll_backend__live_vars__closure_arg,
  MR_Box ll_backend__live_vars__wrapper_arg_1)
{
  {
    MR_Box ll_backend__live_vars__wrapper_arg_2;
    MR_Box ll_backend__live_vars__closure = ll_backend__live_vars__closure_arg;
    MR_Word ll_backend__live_vars__conv0_HeadVar__2_2;

    {
      ll_backend__live_vars__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) ll_backend__live_vars__wrapper_arg_1));
    }
    ll_backend__live_vars__wrapper_arg_2 = ((MR_Box) (ll_backend__live_vars__conv0_HeadVar__2_2));
    return ll_backend__live_vars__wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_2(
  void * ll_backend__live_vars__env_ptr_arg)
{
  {
    struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s * ll_backend__live_vars__env_ptr = (struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s *) ll_backend__live_vars__env_ptr_arg;

    MR_builtin_longjmp((ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_4(
  void * ll_backend__live_vars__env_ptr_arg)
{
  {
    struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s * ll_backend__live_vars__env_ptr = (struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s *) ll_backend__live_vars__env_ptr_arg;

    (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Disjunct_236 = ((MR_Word) (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__conv1_Disjunct_236);
    {
      ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_3(ll_backend__live_vars__env_ptr);
    }
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_3(
  void * ll_backend__live_vars__env_ptr_arg)
{
  {
    struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s * ll_backend__live_vars__env_ptr = (struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s *) ll_backend__live_vars__env_ptr_arg;

    {
      MR_Word ll_backend__live_vars__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Disjunct_236, (MR_Integer) 0)));
      MR_Word ll_backend__live_vars__V_46_46;

      (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctGoalInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Disjunct_236, (MR_Integer) 1)));
      {
        hlds__hlds_llds__goal_info_get_resume_point_2_p_0((ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctGoalInfo_44, &(ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctResumePoint_45);
      }
      (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = ((MR_tag((MR_Word) (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctResumePoint_45)) == (MR_mktag((MR_Integer) 1)));
      if ((ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
        {
          {
            ll_backend__live_vars__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctResumePoint_45, (MR_Integer) 0)));
            (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Locs_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctResumePoint_45, (MR_Integer) 1)));
          }
          {
            (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__V_218_218 = (MR_Integer) 1;
            {
              ll_backend__live_vars__resume_locs_include_stack_2_p_0((ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Locs_47, &(ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__V_337_337);
            }
            (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = ((ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__V_218_218 == (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__V_337_337);
            if ((ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
              {
                ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_2(ll_backend__live_vars__env_ptr);
              }
          }
        }
    }
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_5(
  void * ll_backend__live_vars__env_ptr_arg)
{
  {
    struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s * ll_backend__live_vars__env_ptr = (struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s *) ll_backend__live_vars__env_ptr_arg;

    if (MR_builtin_setjmp((ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__conv1_Disjunct_236, (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Goals_238, ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_4, ll_backend__live_vars__env_ptr);
          }
        }
        (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ll_backend__live_vars__env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0(
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322,
  MR_Word ll_backend__live_vars__GoalExpr0_15,
  MR_Word * ll_backend__live_vars__GoalExpr_16,
  MR_Word ll_backend__live_vars__GoalInfo0_17,
  MR_Word * ll_backend__live_vars__GoalInfo_18,
  MR_Word ll_backend__live_vars__ResumeVars0_19,
  MR_Word ll_backend__live_vars__AllocData_20,
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142,
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_Liveness_145,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149)
{
  {
    struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s ll_backend__live_vars__env;

    switch (MR_tag((MR_Word) ll_backend__live_vars__GoalExpr0_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__live_vars__SubGoal0_66 = (MR_Word) MR_body(((MR_Word) ll_backend__live_vars__GoalExpr0_15), (MR_Integer) 0);
          MR_Word ll_backend__live_vars__SubGoal_67;

          {
            ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__SubGoal0_66, &ll_backend__live_vars__SubGoal_67, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_Liveness_145, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
          }
          *ll_backend__live_vars__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ll_backend__live_vars__SubGoal_67);
          *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__live_vars__Unification_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 3)));
          MR_Word ll_backend__live_vars__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 0)));
          MR_Word ll_backend__live_vars__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));
          MR_Word ll_backend__live_vars__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 2)));
          MR_Word ll_backend__live_vars__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 4)));

          *ll_backend__live_vars__GoalExpr_16 = ll_backend__live_vars__GoalExpr0_15;
          *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
          switch (MR_tag((MR_Word) ll_backend__live_vars__Unification_113)) {
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
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Unification_113, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.live_vars", (MR_String) "predicate \140ll_backend.live_vars.build_live_sets_in_goal_expr\'/14", (MR_String) "complicated_unify");
                      return;
                    }
                  }
                  break;
              }
              break;
          }
          *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142;
          *ll_backend__live_vars__STATE_VARIABLE_Liveness_145 = ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144;
          *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146;
          *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__live_vars__PredId_99 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 0)));
          MR_Integer ll_backend__live_vars__ProcId_100 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));
          MR_Word ll_backend__live_vars__Builtin_101 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 3)));
          MR_Word ll_backend__live_vars__CallerProcInfo_104;
          MR_Word ll_backend__live_vars__CalleePredProcId_106;
          MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_163_163;
          MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_165_165;
          MR_Word ll_backend__live_vars__ArgVars_267 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 2)));
          MR_Word ll_backend__live_vars__ProcInfo_268;
          MR_Word ll_backend__live_vars__VarTypes_269;
          MR_Word ll_backend__live_vars__ModuleInfo_270;
          MR_Word ll_backend__live_vars__OutVars_272;
          MR_Word ll_backend__live_vars__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 4)));
          MR_Word ll_backend__live_vars__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 5)));
          MR_Word ll_backend__live_vars__V_298_298;
          MR_Word ll_backend__live_vars__V_299_299;
          MR_Word ll_backend__live_vars__V_300_300;
          MR_ArrayPtr ll_backend__live_vars__V_301_301;
          MR_Word ll_backend__live_vars__V_105_105;
          MR_Word ll_backend__live_vars___InVars_265;
          MR_Word ll_backend__live_vars___UnusedVars_266;
          MR_Word ll_backend__live_vars__V_307_307;
          MR_Word ll_backend__live_vars__V_308_308;
          MR_Word ll_backend__live_vars__V_309_309;
          MR_Word ll_backend__live_vars__V_310_310;
          MR_ArrayPtr ll_backend__live_vars__V_311_311;
          MR_Word ll_backend__live_vars__V_338_338;
          MR_Integer ll_backend__live_vars__V_339_339;

          *ll_backend__live_vars__GoalExpr_16 = ll_backend__live_vars__GoalExpr0_15;
          ll_backend__live_vars__ModuleInfo_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 0)));
          ll_backend__live_vars__CallerProcInfo_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 1)));
          ll_backend__live_vars__V_298_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 2)));
          ll_backend__live_vars__V_299_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 3)));
          ll_backend__live_vars__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 4)));
          ll_backend__live_vars__V_301_301 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 5)));
          {
            hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__live_vars__CallerProcInfo_104, &ll_backend__live_vars__VarTypes_269);
          }
          {
            hlds__hlds_module__module_info_pred_proc_info_5_p_0(ll_backend__live_vars__ModuleInfo_270, ll_backend__live_vars__PredId_99, ll_backend__live_vars__ProcId_100, &ll_backend__live_vars__V_105_105, &ll_backend__live_vars__ProcInfo_268);
          }
          {
            hlds__arg_info__partition_proc_call_args_7_p_0(ll_backend__live_vars__ProcInfo_268, ll_backend__live_vars__VarTypes_269, ll_backend__live_vars__ModuleInfo_270, ll_backend__live_vars__ArgVars_267, &ll_backend__live_vars___InVars_265, &ll_backend__live_vars__OutVars_272, &ll_backend__live_vars___UnusedVars_266);
          }
          switch (ll_backend__live_vars__Builtin_101) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
                ll_backend__live_vars__STATE_VARIABLE_StackAlloc_163_163 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142;
                *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146;
                ll_backend__live_vars__STATE_VARIABLE_ParStackVars_165_165 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ll_backend__live_vars__V_162_162;

                {
                  ll_backend__live_vars__V_162_162 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__OutVars_272);
                }
                {
                  ll_backend__live_vars__build_live_sets_in_call_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__V_162_162, ll_backend__live_vars__GoalInfo0_17, ll_backend__live_vars__GoalInfo_18, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_163_163, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_165_165);
                }
              }
              break;
          }
          ll_backend__live_vars__V_307_307 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 0)));
          ll_backend__live_vars__V_308_308 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 1)));
          ll_backend__live_vars__CalleePredProcId_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 2)));
          ll_backend__live_vars__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 3)));
          ll_backend__live_vars__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 4)));
          ll_backend__live_vars__V_311_311 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 5)));
          ll_backend__live_vars__V_338_338 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__CalleePredProcId_106, (MR_Integer) 0)));
          ll_backend__live_vars__V_339_339 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__CalleePredProcId_106, (MR_Integer) 1)));
          {
            (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ll_backend__live_vars__PredId_99, ll_backend__live_vars__V_338_338);
          }
          if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
            (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = (ll_backend__live_vars__ProcId_100 == ll_backend__live_vars__V_339_339);
          if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
            {
              MR_Word ll_backend__live_vars__MaybeNeedLC_107;
              MR_Word ll_backend__live_vars__DelayDeathSet_108;

              {
                ll_backend__live_vars__par_stack_vars_recursive_call_4_p_0(&ll_backend__live_vars__MaybeNeedLC_107, &ll_backend__live_vars__DelayDeathSet_108, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_165_165, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
              }
              if ((ll_backend__live_vars__MaybeNeedLC_107 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_163_163;
              else
                {
                  MR_Word ll_backend__live_vars__NeedLC_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__MaybeNeedLC_107, (MR_Integer) 0)));

                  {
                    ll_backend__live_vars__at_recursive_call_for_loop_control_4_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__NeedLC_109, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_163_163, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143);
                  }
                }
              {
                *ll_backend__live_vars__STATE_VARIABLE_Liveness_145 = parse_tree__set_of_var__difference_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__DelayDeathSet_108);
              }
            }
          else
            {
              *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_165_165;
              *ll_backend__live_vars__STATE_VARIABLE_Liveness_145 = ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144;
              *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_163_163;
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__live_vars__GenericCall_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));
              MR_Word ll_backend__live_vars__ArgVars_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 2)));
              MR_Word ll_backend__live_vars__Modes_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 3)));
              MR_Word ll_backend__live_vars__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 4)));
              MR_Word ll_backend__live_vars__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 5)));

              *ll_backend__live_vars__GoalExpr_16 = ll_backend__live_vars__GoalExpr0_15;
              switch (MR_tag((MR_Word) ll_backend__live_vars__GenericCall_77)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    MR_Word ll_backend__live_vars__ProcInfo_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 1)));
                    MR_Word ll_backend__live_vars__VarTypes_93;
                    MR_Word ll_backend__live_vars__Types_94;
                    MR_Word ll_backend__live_vars__ModuleInfo_95;
                    MR_Word ll_backend__live_vars__OutVars_97;
                    MR_Word ll_backend__live_vars__V_169_169;
                    MR_Word ll_backend__live_vars__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 0)));
                    MR_Word ll_backend__live_vars__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 2)));
                    MR_Word ll_backend__live_vars__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 3)));
                    MR_Word ll_backend__live_vars__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 4)));
                    MR_ArrayPtr ll_backend__live_vars__V_291_291 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 5)));
                    MR_Word ll_backend__live_vars__V_292_292;
                    MR_Word ll_backend__live_vars__V_293_293;
                    MR_Word ll_backend__live_vars__V_294_294;
                    MR_Word ll_backend__live_vars__V_295_295;
                    MR_ArrayPtr ll_backend__live_vars__V_296_296;
                    MR_Word ll_backend__live_vars___InVars_96;
                    MR_Word ll_backend__live_vars___UnusedVars_98;

                    {
                      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__live_vars__ProcInfo_92, &ll_backend__live_vars__VarTypes_93);
                    }
                    {
                      hlds__vartypes__lookup_var_types_3_p_0(ll_backend__live_vars__VarTypes_93, ll_backend__live_vars__ArgVars_78, &ll_backend__live_vars__Types_94);
                    }
                    ll_backend__live_vars__ModuleInfo_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 0)));
                    ll_backend__live_vars__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 1)));
                    ll_backend__live_vars__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 2)));
                    ll_backend__live_vars__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 3)));
                    ll_backend__live_vars__V_295_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 4)));
                    ll_backend__live_vars__V_296_296 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 5)));
                    {
                      hlds__arg_info__partition_generic_call_args_7_p_0(ll_backend__live_vars__ModuleInfo_95, ll_backend__live_vars__ArgVars_78, ll_backend__live_vars__Types_94, ll_backend__live_vars__Modes_79, &ll_backend__live_vars___InVars_96, &ll_backend__live_vars__OutVars_97, &ll_backend__live_vars___UnusedVars_98);
                    }
                    {
                      ll_backend__live_vars__V_169_169 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__OutVars_97);
                    }
                    {
                      ll_backend__live_vars__build_live_sets_in_call_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__V_169_169, ll_backend__live_vars__GoalInfo0_17, ll_backend__live_vars__GoalInfo_18, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
                    *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142;
                    *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146;
                    *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148;
                  }
                  break;
              }
              *ll_backend__live_vars__STATE_VARIABLE_Liveness_145 = ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__live_vars__Attributes_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));
              MR_Word ll_backend__live_vars__Args_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 4)));
              MR_Word ll_backend__live_vars__CodeModel_276;
              MR_Word ll_backend__live_vars__ArgVars_277;
              MR_Word ll_backend__live_vars__ProcInfo_278;
              MR_Word ll_backend__live_vars__VarTypes_279;
              MR_Word ll_backend__live_vars__ModuleInfo_280;
              MR_Word ll_backend__live_vars__OutVars_282;
              MR_Word ll_backend__live_vars__PredId_284 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 2)));
              MR_Integer ll_backend__live_vars__ProcId_285 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 3)));
              MR_Word ll_backend__live_vars__CallerProcInfo_286;
              MR_Word ll_backend__live_vars__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 5)));
              MR_Word ll_backend__live_vars__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 6)));
              MR_Word ll_backend__live_vars__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 7)));
              MR_Word ll_backend__live_vars__V_313_313;
              MR_Word ll_backend__live_vars__V_314_314;
              MR_Word ll_backend__live_vars__V_315_315;
              MR_ArrayPtr ll_backend__live_vars__V_316_316;
              MR_Word ll_backend__live_vars__V_140_140;
              MR_Word ll_backend__live_vars___InVars_274;
              MR_Word ll_backend__live_vars___UnusedVars_275;
              MR_Word ll_backend__live_vars__V_154_154;

              *ll_backend__live_vars__GoalExpr_16 = ll_backend__live_vars__GoalExpr0_15;
              ll_backend__live_vars__ModuleInfo_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 0)));
              ll_backend__live_vars__CallerProcInfo_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 1)));
              ll_backend__live_vars__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 2)));
              ll_backend__live_vars__V_314_314 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 3)));
              ll_backend__live_vars__V_315_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 4)));
              ll_backend__live_vars__V_316_316 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__AllocData_20, (MR_Integer) 5)));
              {
                hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ll_backend__live_vars__CallerProcInfo_286, &ll_backend__live_vars__VarTypes_279);
              }
              {
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(ll_backend__live_vars__ModuleInfo_280, ll_backend__live_vars__PredId_284, ll_backend__live_vars__ProcId_285, &ll_backend__live_vars__V_140_140, &ll_backend__live_vars__ProcInfo_278);
              }
              {
                ll_backend__live_vars__ArgVars_277 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &ll_backend__live_vars_scalar_common_1[0], (MR_Word) &ll_backend__live_vars_scalar_common_2[3], ll_backend__live_vars__Args_136);
              }
              {
                hlds__arg_info__partition_proc_call_args_7_p_0(ll_backend__live_vars__ProcInfo_278, ll_backend__live_vars__VarTypes_279, ll_backend__live_vars__ModuleInfo_280, ll_backend__live_vars__ArgVars_277, &ll_backend__live_vars___InVars_274, &ll_backend__live_vars__OutVars_282, &ll_backend__live_vars___UnusedVars_275);
              }
              {
                ll_backend__live_vars__CodeModel_276 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__live_vars__GoalInfo0_17);
              }
              (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = (ll_backend__live_vars__CodeModel_276 == (MR_Integer) 2);
              (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = !((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded);
              if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
                {
                  {
                    ll_backend__live_vars__V_154_154 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(ll_backend__live_vars__Attributes_135);
                  }
                  (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = (ll_backend__live_vars__V_154_154 == (MR_Integer) 1);
                }
              if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
                {
                  *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
                  *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148;
                  *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146;
                  *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142;
                }
              else
                {
                  MR_Word ll_backend__live_vars__V_155_155;

                  {
                    ll_backend__live_vars__V_155_155 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__OutVars_282);
                  }
                  {
                    ll_backend__live_vars__build_live_sets_in_call_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__V_155_155, ll_backend__live_vars__GoalInfo0_17, ll_backend__live_vars__GoalInfo_18, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
                  }
                }
              *ll_backend__live_vars__STATE_VARIABLE_Liveness_145 = ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__live_vars__ConjType_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));
              MR_Word ll_backend__live_vars__Goals0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 2)));
              MR_Word ll_backend__live_vars__Goals_27;

              switch (ll_backend__live_vars__ConjType_25) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word ll_backend__live_vars__TypeCtorInfo_323_323;
                    MR_Word ll_backend__live_vars__NonLocals_28;
                    MR_Word ll_backend__live_vars__LiveSet_29;
                    MR_Word ll_backend__live_vars__OuterNonLocals_30;
                    MR_Word ll_backend__live_vars__InnerStackVars_32;
                    MR_Word ll_backend__live_vars__InnerNonLocals_33;
                    MR_Word ll_backend__live_vars__NeedInParConj_34;
                    MR_Word ll_backend__live_vars__V_220_220;
                    MR_Word ll_backend__live_vars__V_221_221;
                    MR_Word ll_backend__live_vars__V_222_222;
                    MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_224_224;
                    MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_225_225;
                    MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_228_228;
                    MR_Word ll_backend__live_vars__V_229_229;

                    {
                      ll_backend__live_vars__NonLocals_28 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(ll_backend__live_vars__GoalInfo0_17);
                    }
                    ll_backend__live_vars__TypeCtorInfo_323_323 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                    {
                      ll_backend__live_vars__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_222_222, 0) = ((MR_Box) (ll_backend__live_vars__ResumeVars0_19));
                      MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_222_222, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      ll_backend__live_vars__V_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_221_221, 0) = ((MR_Box) (ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144));
                      MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_221_221, 1) = ((MR_Box) (ll_backend__live_vars__V_222_222));
                    }
                    {
                      ll_backend__live_vars__V_220_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_220_220, 0) = ((MR_Box) (ll_backend__live_vars__NonLocals_28));
                      MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_220_220, 1) = ((MR_Box) (ll_backend__live_vars__V_221_221));
                    }
                    {
                      ll_backend__live_vars__LiveSet_29 = parse_tree__set_of_var__union_list_1_f_0(ll_backend__live_vars__TypeCtorInfo_323_323, ll_backend__live_vars__V_220_220);
                    }
                    {
                      ll_backend__live_vars__par_stack_vars_get_nonlocals_2_p_0(ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, &ll_backend__live_vars__OuterNonLocals_30);
                    }
                    {
                      ll_backend__live_vars__par_stack_vars_start_parallel_conjunction_3_p_0(ll_backend__live_vars__LiveSet_29, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_224_224);
                    }
                    {
                      ll_backend__live_vars__build_live_sets_in_par_conj_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__Goals0_26, &ll_backend__live_vars__Goals_27, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_225_225, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_Liveness_145, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_224_224, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_228_228);
                    }
                    {
                      ll_backend__live_vars__par_stack_vars_get_stackvars_2_p_0(ll_backend__live_vars__STATE_VARIABLE_ParStackVars_228_228, &ll_backend__live_vars__InnerStackVars_32);
                    }
                    {
                      ll_backend__live_vars__InnerNonLocals_33 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_323_323, ll_backend__live_vars__LiveSet_29, ll_backend__live_vars__OuterNonLocals_30);
                    }
                    {
                      ll_backend__live_vars__V_229_229 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_323_323, ll_backend__live_vars__InnerNonLocals_33, ll_backend__live_vars__InnerStackVars_32);
                    }
                    ll_backend__live_vars__NeedInParConj_34 = (MR_Word) ll_backend__live_vars__V_229_229;
                    {
                      ll_backend__live_vars__record_par_conj_6_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__NeedInParConj_34, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__GoalInfo0_17, ll_backend__live_vars__GoalInfo_18, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_225_225, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143);
                    }
                    {
                      ll_backend__live_vars__par_stack_vars_end_parallel_conjunction_4_p_0(ll_backend__live_vars__LiveSet_29, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_228_228, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
                    {
                      ll_backend__live_vars__build_live_sets_in_conj_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__Goals0_26, &ll_backend__live_vars__Goals_27, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_Liveness_145, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
                    }
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__live_vars__GoalExpr_16 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__ConjType_25));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__Goals_27));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_215_215;
              MR_Word ll_backend__live_vars__Goals0_237 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));

              {
                ll_backend__live_vars__build_live_sets_in_disj_13_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__Goals0_237, &(ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Goals_238, ll_backend__live_vars__GoalInfo0_17, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_Liveness_145, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, &ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_215_215, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
              }
              if (((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Goals_238 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_215_215;
              else
                {
                  MR_Word ll_backend__live_vars__FirstGoal_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Goals_238, (MR_Integer) 0)));
                  MR_Word ll_backend__live_vars__FirstGoalInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__FirstGoal_35, (MR_Integer) 1)));
                  MR_Word ll_backend__live_vars__ResumePoint_39;
                  MR_Word ll_backend__live_vars__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Goals_238, (MR_Integer) 1)));
                  MR_Word ll_backend__live_vars__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__FirstGoal_35, (MR_Integer) 0)));

                  {
                    hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__live_vars__FirstGoalInfo_38, &ll_backend__live_vars__ResumePoint_39);
                  }
                  if ((ll_backend__live_vars__ResumePoint_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_215_215;
                  else
                    {
                      MR_Word ll_backend__live_vars__ResumeVars_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ResumePoint_39, (MR_Integer) 0)));
                      MR_Word ll_backend__live_vars___Locs_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ResumePoint_39, (MR_Integer) 1)));
                      MR_Word ll_backend__live_vars__V_217_217;

                      {
                        ll_backend__live_vars__V_217_217 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__live_vars__GoalInfo0_17);
                      }
                      (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = (ll_backend__live_vars__V_217_217 == (MR_Integer) 2);
                      if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
                        {
                          ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_5(&ll_backend__live_vars__env);
                        }
                      if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
                        {
                          {
                            parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_215_215, ll_backend__live_vars__ResumeVars_40, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147);
                          }
                        }
                      else
                        *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_215_215;
                    }
                }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__live_vars__GoalExpr_16 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Goals_238));
              }
              *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__live_vars__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));
              MR_Word ll_backend__live_vars__CanFail_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 2)));
              MR_Word ll_backend__live_vars__Cases0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 3)));
              MR_Word ll_backend__live_vars__Cases_51;

              {
                ll_backend__live_vars__build_live_sets_in_cases_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__Cases0_50, &ll_backend__live_vars__Cases_51, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_Liveness_145, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__live_vars__GoalExpr_16 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__Var_48));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__CanFail_49));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__live_vars__Cases_51));
              }
              *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__live_vars__Reason_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));
              MR_Word ll_backend__live_vars__SubGoal0_263 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 2)));
              MR_Word ll_backend__live_vars__TermVar_69;
              MR_Word ll_backend__live_vars__V_173_173;

              (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = ((((MR_tag((MR_Word) ll_backend__live_vars__Reason_68)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Reason_68, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
                {
                  ll_backend__live_vars__TermVar_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Reason_68, (MR_Integer) 1)));
                  ll_backend__live_vars__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Reason_68, (MR_Integer) 2)));
                  (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = (ll_backend__live_vars__V_173_173 == (MR_Integer) 1);
                }
              if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
                {
                  *ll_backend__live_vars__GoalExpr_16 = ll_backend__live_vars__GoalExpr0_15;
                  *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
                  {
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__TermVar_69, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_Liveness_145);
                  }
                  *ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149 = ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148;
                  *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146;
                  *ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142;
                }
              else
                {
                  MR_Word ll_backend__live_vars__LCVar_70;
                  MR_Word ll_backend__live_vars__LCSVar_71;
                  MR_Word ll_backend__live_vars__V_72_72;

                  (ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = ((((MR_tag((MR_Word) ll_backend__live_vars__Reason_68)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Reason_68, (MR_Integer) 0)))) == (MR_Integer) 8)));
                  if ((ll_backend__live_vars__env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
                    {
                      ll_backend__live_vars__LCVar_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Reason_68, (MR_Integer) 1)));
                      ll_backend__live_vars__LCSVar_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Reason_68, (MR_Integer) 2)));
                      ll_backend__live_vars__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__Reason_68, (MR_Integer) 3)));
                      {
                        MR_Word ll_backend__live_vars__TypeCtorInfo_328_328;
                        MR_Word ll_backend__live_vars__LCStackVars_73;
                        MR_Word ll_backend__live_vars__NeedInParConjSet_74;
                        MR_Word ll_backend__live_vars__WouldDieSet_75;
                        MR_Word ll_backend__live_vars__V_175_175;
                        MR_Word ll_backend__live_vars__V_176_176;
                        MR_Word ll_backend__live_vars__V_177_177;
                        MR_Word ll_backend__live_vars__V_178_178;
                        MR_Word ll_backend__live_vars__V_180_180;
                        MR_Word ll_backend__live_vars__V_181_181;
                        MR_Word ll_backend__live_vars__V_182_182;
                        MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_184_184;
                        MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_185_185;
                        MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_186_186;
                        MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_188_188;
                        MR_Word ll_backend__live_vars__NonLocals_239;
                        MR_Word ll_backend__live_vars__InnerStackVars_241;
                        MR_Word ll_backend__live_vars__NeedInParConj_242;
                        MR_Word ll_backend__live_vars__SubGoal_243;

                        {
                          ll_backend__live_vars__NonLocals_239 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(ll_backend__live_vars__GoalInfo0_17);
                        }
                        ll_backend__live_vars__TypeCtorInfo_328_328 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                        {
                          ll_backend__live_vars__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_178_178, 0) = ((MR_Box) (ll_backend__live_vars__ResumeVars0_19));
                          MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_178_178, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          ll_backend__live_vars__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_177_177, 0) = ((MR_Box) (ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144));
                          MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_177_177, 1) = ((MR_Box) (ll_backend__live_vars__V_178_178));
                        }
                        {
                          ll_backend__live_vars__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_176_176, 0) = ((MR_Box) (ll_backend__live_vars__NonLocals_239));
                          MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_176_176, 1) = ((MR_Box) (ll_backend__live_vars__V_177_177));
                        }
                        {
                          ll_backend__live_vars__V_175_175 = parse_tree__set_of_var__union_list_1_f_0(ll_backend__live_vars__TypeCtorInfo_328_328, ll_backend__live_vars__V_176_176);
                        }
                        {
                          ll_backend__live_vars__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_182_182, 0) = ((MR_Box) (ll_backend__live_vars__LCSVar_71));
                          MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_182_182, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          ll_backend__live_vars__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_181_181, 0) = ((MR_Box) (ll_backend__live_vars__LCVar_70));
                          MR_hl_field(MR_mktag(1), ll_backend__live_vars__V_181_181, 1) = ((MR_Box) (ll_backend__live_vars__V_182_182));
                        }
                        {
                          ll_backend__live_vars__V_180_180 = parse_tree__set_of_var__list_to_set_1_f_0(ll_backend__live_vars__TypeCtorInfo_328_328, ll_backend__live_vars__V_181_181);
                        }
                        {
                          ll_backend__live_vars__LCStackVars_73 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_328_328, ll_backend__live_vars__V_175_175, ll_backend__live_vars__V_180_180);
                        }
                        {
                          ll_backend__live_vars__par_stack_vars_start_loop_control_3_p_0(ll_backend__live_vars__LCStackVars_73, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_184_184);
                        }
                        {
                          ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__SubGoal0_263, &ll_backend__live_vars__SubGoal_243, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_185_185, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, &ll_backend__live_vars__STATE_VARIABLE_Liveness_186_186, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_184_184, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_188_188);
                        }
                        {
                          ll_backend__live_vars__par_stack_vars_get_stackvars_2_p_0(ll_backend__live_vars__STATE_VARIABLE_ParStackVars_188_188, &ll_backend__live_vars__InnerStackVars_241);
                        }
                        {
                          ll_backend__live_vars__NeedInParConjSet_74 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_328_328, ll_backend__live_vars__LCStackVars_73, ll_backend__live_vars__InnerStackVars_241);
                        }
                        ll_backend__live_vars__NeedInParConj_242 = (MR_Word) ll_backend__live_vars__NeedInParConjSet_74;
                        {
                          ll_backend__live_vars__record_par_conj_6_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__NeedInParConj_242, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__GoalInfo0_17, ll_backend__live_vars__GoalInfo_18, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_185_185, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143);
                        }
                        {
                          ll_backend__live_vars__WouldDieSet_75 = parse_tree__set_of_var__difference_2_f_0(ll_backend__live_vars__TypeCtorInfo_328_328, ll_backend__live_vars__NeedInParConjSet_74, ll_backend__live_vars__STATE_VARIABLE_Liveness_186_186);
                        }
                        {
                          *ll_backend__live_vars__STATE_VARIABLE_Liveness_145 = parse_tree__set_of_var__union_2_f_0(ll_backend__live_vars__TypeCtorInfo_328_328, ll_backend__live_vars__STATE_VARIABLE_Liveness_186_186, ll_backend__live_vars__WouldDieSet_75);
                        }
                        {
                          ll_backend__live_vars__par_stack_vars_end_loop_control_4_p_0(ll_backend__live_vars__WouldDieSet_75, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_188_188, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          *ll_backend__live_vars__GoalExpr_16 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__Reason_68));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__SubGoal_243));
                        }
                      }
                    }
                  else
                    {
                      MR_Word ll_backend__live_vars__CodeModel_76;
                      MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_194_194;
                      MR_Word ll_backend__live_vars__SubGoal_245;

                      {
                        ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__SubGoal0_263, &ll_backend__live_vars__SubGoal_245, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_Liveness_145, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, &ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_194_194, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
                      }
                      {
                        ll_backend__live_vars__CodeModel_76 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__live_vars__GoalInfo0_17);
                      }
                      switch (ll_backend__live_vars__CodeModel_76) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                        case (MR_Integer) 1:
                          *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146;
                          break;
                        case (MR_Integer) 2:
                          *ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147 = ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_194_194;
                          break;
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        *ll_backend__live_vars__GoalExpr_16 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__Reason_68));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__SubGoal_245));
                      }
                      *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
                    }
                }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__live_vars__Vars_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 1)));
              MR_Word ll_backend__live_vars__Cond0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 2)));
              MR_Word ll_backend__live_vars__Then0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 3)));
              MR_Word ll_backend__live_vars__Else0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__live_vars__GoalExpr0_15, (MR_Integer) 4)));
              MR_Word ll_backend__live_vars__Cond_58;
              MR_Word ll_backend__live_vars__LivenessCond_59;
              MR_Word ll_backend__live_vars__NondetLivenessCond_60;
              MR_Word ll_backend__live_vars__Then_61;
              MR_Word ll_backend__live_vars__NondetLivenessThen_63;
              MR_Word ll_backend__live_vars__Else_64;
              MR_Word ll_backend__live_vars__NondetLivenessElse_65;
              MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_201_201;
              MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_202_202;
              MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_203_203;
              MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_204_204;
              MR_Word ll_backend__live_vars___LivenessThen_62;

              {
                ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__Cond0_53, &ll_backend__live_vars__Cond_58, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_142, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_201_201, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, &ll_backend__live_vars__LivenessCond_59, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, &ll_backend__live_vars__NondetLivenessCond_60, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_148, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_202_202);
              }
              {
                ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__Then0_54, &ll_backend__live_vars__Then_61, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_201_201, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_203_203, ll_backend__live_vars__LivenessCond_59, &ll_backend__live_vars___LivenessThen_62, ll_backend__live_vars__NondetLivenessCond_60, &ll_backend__live_vars__NondetLivenessThen_63, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_202_202, &ll_backend__live_vars__STATE_VARIABLE_ParStackVars_204_204);
              }
              {
                ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_322, ll_backend__live_vars__Else0_55, &ll_backend__live_vars__Else_64, ll_backend__live_vars__ResumeVars0_19, ll_backend__live_vars__AllocData_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_203_203, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_143, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_144, ll_backend__live_vars__STATE_VARIABLE_Liveness_145, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_146, &ll_backend__live_vars__NondetLivenessElse_65, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_204_204, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_149);
              }
              {
                parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__live_vars__NondetLivenessThen_63, ll_backend__live_vars__NondetLivenessElse_65, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_147);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__live_vars__GoalExpr_16 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__live_vars__Vars_52));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__live_vars__Cond_58));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__live_vars__Then_61));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__live_vars__Else_64));
              }
              *ll_backend__live_vars__GoalInfo_18 = ll_backend__live_vars__GoalInfo0_17;
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.live_vars", (MR_String) "predicate \140ll_backend.live_vars.build_live_sets_in_goal_expr\'/14", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__live_vars__resume_locs_include_stack_2_p_0(
  MR_Word ll_backend__live_vars__HeadVar__1_1,
  MR_Word * ll_backend__live_vars__HeadVar__2_2)
{
  {
    MR_bool ll_backend__live_vars__succeeded;

    *ll_backend__live_vars__HeadVar__2_2 = ((&ll_backend__live_vars_vector_common_4[0 + ll_backend__live_vars__HeadVar__1_1]))->ll_backend__live_vars__vector_common_type_4_0__vct_4_f_0;
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_12_p_0(
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_56,
  MR_Word ll_backend__live_vars__Goal0_13,
  MR_Word * ll_backend__live_vars__Goal_14,
  MR_Word ll_backend__live_vars__ResumeVars0_15,
  MR_Word ll_backend__live_vars__AllocData_16,
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_38,
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_39,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_0_40,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_Liveness_41,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_42,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_43,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_44,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_ParStackVars_45)
{
  {
    MR_bool ll_backend__live_vars__succeeded;
    MR_Word ll_backend__live_vars__TypeCtorInfo_57_57;
    MR_Word ll_backend__live_vars__GoalExpr0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Goal0_13, (MR_Integer) 0)));
    MR_Word ll_backend__live_vars__GoalInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__Goal0_13, (MR_Integer) 1)));
    MR_Word ll_backend__live_vars__PreDeaths_23;
    MR_Word ll_backend__live_vars__PreBirths_24;
    MR_Word ll_backend__live_vars__PostDeaths_25;
    MR_Word ll_backend__live_vars__PostBirths_26;
    MR_Word ll_backend__live_vars__HasSubGoals_27;
    MR_Word ll_backend__live_vars__ResumePoint_28;
    MR_Word ll_backend__live_vars__ResumeVars1_29;
    MR_Word ll_backend__live_vars__GoalInfo1_30;
    MR_Word ll_backend__live_vars__GoalExpr_36;
    MR_Word ll_backend__live_vars__GoalInfo_37;
    MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_46_46;
    MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_47_47;
    MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_49_49;
    MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_54_54;

    {
      hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(ll_backend__live_vars__GoalInfo0_22, &ll_backend__live_vars__PreDeaths_23);
    }
    {
      hlds__hlds_llds__goal_info_get_pre_births_2_p_0(ll_backend__live_vars__GoalInfo0_22, &ll_backend__live_vars__PreBirths_24);
    }
    {
      hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(ll_backend__live_vars__GoalInfo0_22, &ll_backend__live_vars__PostDeaths_25);
    }
    {
      hlds__hlds_llds__goal_info_get_post_births_2_p_0(ll_backend__live_vars__GoalInfo0_22, &ll_backend__live_vars__PostBirths_26);
    }
    ll_backend__live_vars__TypeCtorInfo_57_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      parse_tree__set_of_var__difference_3_p_0(ll_backend__live_vars__TypeCtorInfo_57_57, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_40, ll_backend__live_vars__PreDeaths_23, &ll_backend__live_vars__STATE_VARIABLE_Liveness_46_46);
    }
    {
      parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_57_57, ll_backend__live_vars__STATE_VARIABLE_Liveness_46_46, ll_backend__live_vars__PreBirths_24, &ll_backend__live_vars__STATE_VARIABLE_Liveness_47_47);
    }
    {
      ll_backend__live_vars__HasSubGoals_27 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(ll_backend__live_vars__GoalExpr0_21);
    }
    {
      hlds__hlds_llds__goal_info_get_resume_point_2_p_0(ll_backend__live_vars__GoalInfo0_22, &ll_backend__live_vars__ResumePoint_28);
    }
    if ((ll_backend__live_vars__ResumePoint_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ll_backend__live_vars__ResumeVars1_29 = ll_backend__live_vars__ResumeVars0_15;
        ll_backend__live_vars__GoalInfo1_30 = ll_backend__live_vars__GoalInfo0_22;
        ll_backend__live_vars__STATE_VARIABLE_StackAlloc_49_49 = ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_38;
      }
    else
      {
        MR_Word ll_backend__live_vars__ResumePointVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ResumePoint_28, (MR_Integer) 0)));
        MR_Word ll_backend__live_vars__Locs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__ResumePoint_28, (MR_Integer) 1)));
        MR_Word ll_backend__live_vars__ResumeOnStack_34;
        MR_Word ll_backend__live_vars__NeedInResume_35;
        void MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        switch (ll_backend__live_vars__Locs_32) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
              {
                parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_57_57, ll_backend__live_vars__ResumeVars0_15, ll_backend__live_vars__ResumePointVars_31, &ll_backend__live_vars__ResumeVars1_29);
              }
              ll_backend__live_vars__ResumeOnStack_34 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 0:
            {
              ll_backend__live_vars__ResumeVars1_29 = ll_backend__live_vars__ResumeVars0_15;
              ll_backend__live_vars__ResumeOnStack_34 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 3:
            {
              {
                parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_57_57, ll_backend__live_vars__ResumeVars0_15, ll_backend__live_vars__ResumePointVars_31, &ll_backend__live_vars__ResumeVars1_29);
              }
              ll_backend__live_vars__ResumeOnStack_34 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_57_57, ll_backend__live_vars__ResumeVars0_15, ll_backend__live_vars__ResumePointVars_31, &ll_backend__live_vars__ResumeVars1_29);
              }
              ll_backend__live_vars__ResumeOnStack_34 = (MR_Integer) 1;
            }
            break;
        }
        {
          ll_backend__live_vars__NeedInResume_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedInResume_35, 0) = ((MR_Box) (ll_backend__live_vars__ResumeOnStack_34));
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedInResume_35, 1) = ((MR_Box) (ll_backend__live_vars__ResumeVars1_29));
          MR_hl_field(MR_mktag(0), ll_backend__live_vars__NeedInResume_35, 2) = ((MR_Box) (ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_42));
        }
        {
          hlds__hlds_llds__goal_info_set_need_in_resume_3_p_0(ll_backend__live_vars__NeedInResume_35, ll_backend__live_vars__GoalInfo0_22, &ll_backend__live_vars__GoalInfo1_30);
        }
        ll_backend__live_vars__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_56, (MR_Integer) 0)), (MR_Integer) 6)));
        {
          ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_56), ((MR_Box) (ll_backend__live_vars__NeedInResume_35)), ((MR_Box) (ll_backend__live_vars__AllocData_16)), ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_38, &ll_backend__live_vars__STATE_VARIABLE_StackAlloc_49_49);
        }
      }
    switch (ll_backend__live_vars__HasSubGoals_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_48_48;

          {
            parse_tree__set_of_var__difference_3_p_0(ll_backend__live_vars__TypeCtorInfo_57_57, ll_backend__live_vars__STATE_VARIABLE_Liveness_47_47, ll_backend__live_vars__PostDeaths_25, &ll_backend__live_vars__STATE_VARIABLE_Liveness_48_48);
          }
          {
            ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_56, ll_backend__live_vars__GoalExpr0_21, &ll_backend__live_vars__GoalExpr_36, ll_backend__live_vars__GoalInfo1_30, &ll_backend__live_vars__GoalInfo_37, ll_backend__live_vars__ResumeVars1_29, ll_backend__live_vars__AllocData_16, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_49_49, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_39, ll_backend__live_vars__STATE_VARIABLE_Liveness_48_48, &ll_backend__live_vars__STATE_VARIABLE_Liveness_54_54, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_42, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_43, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_44, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_45);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_51_75;

          {
            ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_56, ll_backend__live_vars__GoalExpr0_21, &ll_backend__live_vars__GoalExpr_36, ll_backend__live_vars__GoalInfo1_30, &ll_backend__live_vars__GoalInfo_37, ll_backend__live_vars__ResumeVars1_29, ll_backend__live_vars__AllocData_16, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_49_49, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_39, ll_backend__live_vars__STATE_VARIABLE_Liveness_47_47, &ll_backend__live_vars__STATE_VARIABLE_Liveness_51_75, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_42, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_43, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_0_44, ll_backend__live_vars__STATE_VARIABLE_ParStackVars_45);
          }
          {
            parse_tree__set_of_var__difference_3_p_0(ll_backend__live_vars__TypeCtorInfo_57_57, ll_backend__live_vars__STATE_VARIABLE_Liveness_51_75, ll_backend__live_vars__PostDeaths_25, &ll_backend__live_vars__STATE_VARIABLE_Liveness_54_54);
          }
        }
        break;
    }
    {
      parse_tree__set_of_var__union_3_p_0(ll_backend__live_vars__TypeCtorInfo_57_57, ll_backend__live_vars__STATE_VARIABLE_Liveness_54_54, ll_backend__live_vars__PostBirths_26, ll_backend__live_vars__STATE_VARIABLE_Liveness_41);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__live_vars__Goal_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__live_vars__GoalExpr_36));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__live_vars__GoalInfo_37));
    }
  }
}

static void MR_CALL 
ll_backend__live_vars__set_dummy_array_elements_6_p_0(
  MR_Word ll_backend__live_vars__ModuleInfo_1,
  MR_Word ll_backend__live_vars__HeadVar__2_2,
  MR_ArrayPtr ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_0_3,
  MR_ArrayPtr * ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_4,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_DummyVars_0_5,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_DummyVars_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__live_vars__succeeded;

        if ((ll_backend__live_vars__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__live_vars__STATE_VARIABLE_DummyVars_6 = ll_backend__live_vars__STATE_VARIABLE_DummyVars_0_5;
            *ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_4 = ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_0_3;
          }
        else
          {
            MR_Word ll_backend__live_vars__VarType_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__live_vars__VarsTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__live_vars__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ll_backend__live_vars__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__VarType_15, (MR_Integer) 0)));
            MR_Word ll_backend__live_vars__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__VarType_15, (MR_Integer) 1)));
            MR_Word ll_backend__live_vars__IsDummyType_21;
            MR_ArrayPtr ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_27_27;
            MR_Word ll_backend__live_vars__STATE_VARIABLE_DummyVars_28_28;

            {
              ll_backend__live_vars__IsDummyType_21 = check_hlds__type_util__check_dummy_type_2_f_0(ll_backend__live_vars__ModuleInfo_1, ll_backend__live_vars__Type_20);
            }
            switch (ll_backend__live_vars__IsDummyType_21) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ll_backend__live_vars__TypeClassInfo_for_enum_31 = (MR_Word) &ll_backend__live_vars_scalar_common_2[1];
                  MR_Integer ll_backend__live_vars__V_26_26;
                  MR_Box MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_enum_31, (MR_Integer) 0)), (MR_Integer) 5)));
                  MR_Box ll_backend__live_vars__conv1_V_26_26;
                  MR_ArrayPtr ll_backend__live_vars__conv2_STATE_VARIABLE_DummyTypeArray_27_27;

                  {
                    ll_backend__live_vars__conv1_V_26_26 = ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_enum_31), ((MR_Box) (ll_backend__live_vars__Var_19)));
                  }
                  ll_backend__live_vars__V_26_26 = ((MR_Integer) ll_backend__live_vars__conv1_V_26_26);
                  {
                    mercury__array__set_4_p_0((MR_Word) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0, ll_backend__live_vars__V_26_26, ((MR_Box) (ll_backend__live_vars__IsDummyType_21)), (MR_ArrayPtr) ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_0_3, &ll_backend__live_vars__conv2_STATE_VARIABLE_DummyTypeArray_27_27);
                  }
                  ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_27_27 = (MR_ArrayPtr) ll_backend__live_vars__conv2_STATE_VARIABLE_DummyTypeArray_27_27;
                  {
                    ll_backend__live_vars__STATE_VARIABLE_DummyVars_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_DummyVars_28_28, 0) = ((MR_Box) (ll_backend__live_vars__Var_19));
                    MR_hl_field(MR_mktag(1), ll_backend__live_vars__STATE_VARIABLE_DummyVars_28_28, 1) = ((MR_Box) (ll_backend__live_vars__STATE_VARIABLE_DummyVars_0_5));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_27_27 = ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_0_3;
                  ll_backend__live_vars__STATE_VARIABLE_DummyVars_28_28 = ll_backend__live_vars__STATE_VARIABLE_DummyVars_0_5;
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__live_vars__HeadVar__2__tmp_copy_2 = ll_backend__live_vars__VarsTypes_16;
              MR_ArrayPtr ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_0__tmp_copy_3 = ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_27_27;
              MR_Word ll_backend__live_vars__STATE_VARIABLE_DummyVars_0__tmp_copy_5 = ll_backend__live_vars__STATE_VARIABLE_DummyVars_28_28;

              ll_backend__live_vars__STATE_VARIABLE_DummyVars_0_5 = ll_backend__live_vars__STATE_VARIABLE_DummyVars_0__tmp_copy_5;
              ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_0_3 = ll_backend__live_vars__STATE_VARIABLE_DummyTypeArray_0__tmp_copy_3;
              ll_backend__live_vars__HeadVar__2_2 = ll_backend__live_vars__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__live_vars__max_var_num_3_p_0(
  MR_Word ll_backend__live_vars__HeadVar__1_1,
  MR_Integer ll_backend__live_vars__STATE_VARIABLE_MaxVarNum_0_8,
  MR_Integer * ll_backend__live_vars__STATE_VARIABLE_MaxVarNum_9)
{
  {
    MR_bool ll_backend__live_vars__succeeded;
    MR_Word ll_backend__live_vars__TypeClassInfo_for_enum_11 = (MR_Word) &ll_backend__live_vars_scalar_common_2[1];
    MR_Word ll_backend__live_vars__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer ll_backend__live_vars__VarNum_7;
    MR_Word ll_backend__live_vars___Type_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__live_vars__HeadVar__1_1, (MR_Integer) 1)));
    MR_Box MR_CALL (* ll_backend__live_vars__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__live_vars__TypeClassInfo_for_enum_11, (MR_Integer) 0)), (MR_Integer) 5)));
    MR_Box ll_backend__live_vars__conv1_VarNum_7;

    {
      ll_backend__live_vars__conv1_VarNum_7 = ll_backend__live_vars__func_0(((MR_Box) ll_backend__live_vars__TypeClassInfo_for_enum_11), ((MR_Box) (ll_backend__live_vars__Var_4)));
    }
    ll_backend__live_vars__VarNum_7 = ((MR_Integer) ll_backend__live_vars__conv1_VarNum_7);
    {
      mercury__int__max_3_p_0(ll_backend__live_vars__VarNum_7, ll_backend__live_vars__STATE_VARIABLE_MaxVarNum_0_8, ll_backend__live_vars__STATE_VARIABLE_MaxVarNum_9);
    }
  }
}

void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_p_0(
  MR_Word ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_29,
  MR_Word ll_backend__live_vars__Goal0_11,
  MR_Word * ll_backend__live_vars__Goal_12,
  MR_Word ll_backend__live_vars__ResumeVars0_13,
  MR_Word ll_backend__live_vars__AllocData_14,
  MR_Box ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_20,
  MR_Box * ll_backend__live_vars__STATE_VARIABLE_StackAlloc_21,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_Liveness_0_22,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_Liveness_23,
  MR_Word ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_24,
  MR_Word * ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_25)
{
  {
    MR_bool ll_backend__live_vars__succeeded;
    MR_Word ll_backend__live_vars___ParStackVars_19;

    {
      ll_backend__live_vars__build_live_sets_in_goal_12_p_0(ll_backend__live_vars__TypeClassInfo_for_stack_alloc_info_29, ll_backend__live_vars__Goal0_11, ll_backend__live_vars__Goal_12, ll_backend__live_vars__ResumeVars0_13, ll_backend__live_vars__AllocData_14, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_0_20, ll_backend__live_vars__STATE_VARIABLE_StackAlloc_21, ll_backend__live_vars__STATE_VARIABLE_Liveness_0_22, ll_backend__live_vars__STATE_VARIABLE_Liveness_23, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_0_24, ll_backend__live_vars__STATE_VARIABLE_NondetLiveness_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__live_vars___ParStackVars_19);
    }
  }
}

static void MR_CALL 
ll_backend__live_vars__build_dummy_type_array_4_p_0_1(
  MR_Box ll_backend__live_vars__closure_arg,
  MR_Box ll_backend__live_vars__wrapper_arg_1,
  MR_Box ll_backend__live_vars__wrapper_arg_2,
  MR_Box * ll_backend__live_vars__wrapper_arg_3)
{
  {
    MR_Box ll_backend__live_vars__closure = ll_backend__live_vars__closure_arg;
    MR_Integer ll_backend__live_vars__conv0_STATE_VARIABLE_MaxVarNum_9;

    {
      ll_backend__live_vars__max_var_num_3_p_0(((MR_Word) ll_backend__live_vars__wrapper_arg_1), ((MR_Integer) ll_backend__live_vars__wrapper_arg_2), &ll_backend__live_vars__conv0_STATE_VARIABLE_MaxVarNum_9);
    }
    *ll_backend__live_vars__wrapper_arg_3 = ((MR_Box) (ll_backend__live_vars__conv0_STATE_VARIABLE_MaxVarNum_9));
  }
}

void MR_CALL 
ll_backend__live_vars__build_dummy_type_array_4_p_0(
  MR_Word ll_backend__live_vars__ModuleInfo_5,
  MR_Word ll_backend__live_vars__VarTypes_6,
  MR_ArrayPtr * ll_backend__live_vars__DummyTypeArray_7,
  MR_Word * ll_backend__live_vars__DummyVars_8)
{
  {
    MR_bool ll_backend__live_vars__succeeded;
    MR_Word ll_backend__live_vars__VarsTypes_9;
    MR_Integer ll_backend__live_vars__MaxVarNum_10;
    MR_ArrayPtr ll_backend__live_vars__DummyTypeArray0_11;
    MR_Integer ll_backend__live_vars__V_14_14;
    MR_Box ll_backend__live_vars__conv1_MaxVarNum_10;
    MR_ArrayPtr ll_backend__live_vars__conv2_DummyTypeArray0_11;

    {
      hlds__vartypes__vartypes_to_assoc_list_2_p_0(ll_backend__live_vars__VarTypes_6, &ll_backend__live_vars__VarsTypes_9);
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &ll_backend__live_vars_scalar_common_2[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__live_vars_scalar_common_2[2], ll_backend__live_vars__VarsTypes_9, ((MR_Box) ((MR_Integer) 0)), &ll_backend__live_vars__conv1_MaxVarNum_10);
    }
    ll_backend__live_vars__MaxVarNum_10 = ((MR_Integer) ll_backend__live_vars__conv1_MaxVarNum_10);
    ll_backend__live_vars__V_14_14 = (ll_backend__live_vars__MaxVarNum_10 + (MR_Integer) 1);
    {
      mercury__array__init_3_p_0((MR_Word) &check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0, ll_backend__live_vars__V_14_14, ((MR_Box) ((MR_Integer) 1)), &ll_backend__live_vars__conv2_DummyTypeArray0_11);
    }
    ll_backend__live_vars__DummyTypeArray0_11 = (MR_ArrayPtr) ll_backend__live_vars__conv2_DummyTypeArray0_11;
    {
      ll_backend__live_vars__set_dummy_array_elements_6_p_0(ll_backend__live_vars__ModuleInfo_5, ll_backend__live_vars__VarsTypes_9, ll_backend__live_vars__DummyTypeArray0_11, ll_backend__live_vars__DummyTypeArray_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__live_vars__DummyVars_8);
    }
  }
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

/* :- end_module ll_backend.live_vars. */
