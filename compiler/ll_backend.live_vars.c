/*
** Automatically generated from `live_vars.m'
** by the Mercury compiler,
** version rotd-2022-01-17
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
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
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s {
  MR_bool ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded;
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Goals_236;
  jmp_buf ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__commit_0;
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctGoalInfo_44;
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctResumePoint_45;
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Locs_47;
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Var_216;
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Disjunct_234;
  MR_Word ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Var_335;
  MR_Box ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__conv1_Disjunct_234;
};


static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__live_vars__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__live_vars__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__array__ti_array_1check_hlds__type_util__type_ctor_info_is_dummy_type_0;

static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_alloc_data_0_0[6];

static const MR_ConstString ll_backend__live_vars__ll_backend__live_vars__field_names_alloc_data_0_0[6];

static const MR_DuArgLocn ll_backend__live_vars__ll_backend__live_vars__field_locns_alloc_data_0_0[6];

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
ll_backend__live_vars__max_var_num_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_MaxVarNum_0_8,
  MR_Integer * STATE_VARIABLE_MaxVarNum_9);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_cases_12_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_54,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word ResumeVars0_3,
  MR_Word AllocData_4,
  MR_Box STATE_VARIABLE_StackAlloc_0_5,
  MR_Box * STATE_VARIABLE_StackAlloc_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_ParStackVars_0_11,
  MR_Word * STATE_VARIABLE_ParStackVars_12);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_disj_13_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_61,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word DisjGoalInfo_3,
  MR_Word ResumeVars0_4,
  MR_Word AllocData_5,
  MR_Box STATE_VARIABLE_StackAlloc_0_6,
  MR_Box * STATE_VARIABLE_StackAlloc_7,
  MR_Word HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word HeadVar__10_10,
  MR_Word * HeadVar__11_11,
  MR_Word STATE_VARIABLE_ParStackVars_0_12,
  MR_Word * STATE_VARIABLE_ParStackVars_13);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_par_conj_12_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_50,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word ResumeVars0_3,
  MR_Word AllocData_4,
  MR_Box STATE_VARIABLE_StackAlloc_0_5,
  MR_Box * STATE_VARIABLE_StackAlloc_6,
  MR_Word HeadVar__7_7,
  MR_Word * Liveness_8,
  MR_Word STATE_VARIABLE_NondetLiveness_0_9,
  MR_Word * STATE_VARIABLE_NondetLiveness_10,
  MR_Word STATE_VARIABLE_ParStackVars_0_11,
  MR_Word * STATE_VARIABLE_ParStackVars_12);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_conj_12_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_60,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word ResumeVars0_3,
  MR_Word AllocData_4,
  MR_Box STATE_VARIABLE_StackAlloc_0_5,
  MR_Box * STATE_VARIABLE_StackAlloc_6,
  MR_Word STATE_VARIABLE_Liveness_0_7,
  MR_Word * STATE_VARIABLE_Liveness_8,
  MR_Word STATE_VARIABLE_NondetLiveness_0_9,
  MR_Word * STATE_VARIABLE_NondetLiveness_10,
  MR_Word STATE_VARIABLE_ParStackVars_0_11,
  MR_Word * STATE_VARIABLE_ParStackVars_12);

static MR_Box MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_320,
  MR_Word GoalExpr0_15,
  MR_Word * GoalExpr_16,
  MR_Word GoalInfo0_17,
  MR_Word * GoalInfo_18,
  MR_Word ResumeVars0_19,
  MR_Word AllocData_20,
  MR_Box STATE_VARIABLE_StackAlloc_0_142,
  MR_Box * STATE_VARIABLE_StackAlloc_143,
  MR_Word STATE_VARIABLE_Liveness_0_144,
  MR_Word * STATE_VARIABLE_Liveness_145,
  MR_Word STATE_VARIABLE_NondetLiveness_0_146,
  MR_Word * STATE_VARIABLE_NondetLiveness_147,
  MR_Word STATE_VARIABLE_ParStackVars_0_148,
  MR_Word * STATE_VARIABLE_ParStackVars_149);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_12_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_56,
  MR_Word Goal0_13,
  MR_Word * Goal_14,
  MR_Word ResumeVars0_15,
  MR_Word AllocData_16,
  MR_Box STATE_VARIABLE_StackAlloc_0_38,
  MR_Box * STATE_VARIABLE_StackAlloc_39,
  MR_Word STATE_VARIABLE_Liveness_0_40,
  MR_Word * STATE_VARIABLE_Liveness_41,
  MR_Word STATE_VARIABLE_NondetLiveness_0_42,
  MR_Word * STATE_VARIABLE_NondetLiveness_43,
  MR_Word STATE_VARIABLE_ParStackVars_0_44,
  MR_Word * STATE_VARIABLE_ParStackVars_45);

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_recursive_call_4_p_0(
  MR_Word * MaybeNeedLC_5,
  MR_Word * DelayDeathSet_6,
  MR_Word STATE_VARIABLE_ParStackVars_0_17,
  MR_Word * STATE_VARIABLE_ParStackVars_18);

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_get_nonlocals_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_get_stackvars_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_end_loop_control_4_p_0(
  MR_Word NewWouldDieSet_5,
  MR_Word OldParStackVars_6,
  MR_Word ParStackVars0_7,
  MR_Word * ParStackVars_8);

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_start_loop_control_3_p_0(
  MR_Word NonLocals_4,
  MR_Word ParStackVars0_5,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_end_parallel_conjunction_4_p_0(
  MR_Word LiveSet_5,
  MR_Word OuterParStackVars_6,
  MR_Word ParStackVars0_7,
  MR_Word * ParStackVars_8);

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_start_parallel_conjunction_3_p_0(
  MR_Word LiveSet_4,
  MR_Word OuterParStackVars_5,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ll_backend__live_vars__record_par_conj_6_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_17,
  MR_Word NeedInParConj_7,
  MR_Word AllocData_8,
  MR_Word STATE_VARIABLE_GoalInfo_0_11,
  MR_Word * STATE_VARIABLE_GoalInfo_12,
  MR_Box STATE_VARIABLE_StackAlloc_0_13,
  MR_Box * STATE_VARIABLE_StackAlloc_14);

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_call_12_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_57,
  MR_Word OutVars_13,
  MR_Word GoalInfo0_14,
  MR_Word * GoalInfo_15,
  MR_Word ResumeVars0_16,
  MR_Word AllocData_17,
  MR_Box STATE_VARIABLE_StackAlloc_0_27,
  MR_Box * STATE_VARIABLE_StackAlloc_28,
  MR_Word Liveness_19,
  MR_Word STATE_VARIABLE_NondetLiveness_0_29,
  MR_Word * STATE_VARIABLE_NondetLiveness_30,
  MR_Word STATE_VARIABLE_ParStackVars_0_31,
  MR_Word * STATE_VARIABLE_ParStackVars_32);

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_accumulate_stack_vars_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ll_backend__live_vars__resume_locs_include_stack_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
ll_backend__live_vars__build_dummy_type_array_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__live_vars__set_dummy_array_elements_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_ArrayPtr STATE_VARIABLE_DummyTypeArray_0_3,
  MR_ArrayPtr * STATE_VARIABLE_DummyTypeArray_4,
  MR_Word STATE_VARIABLE_DummyVars_0_5,
  MR_Word * STATE_VARIABLE_DummyVars_6);

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
ll_backend__live_vars____Unify____parallel_stackvars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__live_vars____Compare____parallel_stackvars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__live_vars_scalar_common_5[0])),
    ((MR_Box) (ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__live_vars_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
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
    ((MR_Box) ((MR_Integer) 2)),
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
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__live_vars__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__live_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__live_vars__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__array__ti_array_1check_hlds__type_util__type_ctor_info_is_dummy_type_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) (&check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__live_vars__ll_backend__live_vars__field_types_alloc_data_0_0[6] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&ll_backend__live_vars__array__ti_array_1check_hlds__type_util__type_ctor_info_is_dummy_type_0)
};

static const MR_ConstString ll_backend__live_vars__ll_backend__live_vars__field_names_alloc_data_0_0[6] = {
  (MR_String) "ad_module_info",
  (MR_String) "ad_proc_info",
  (MR_String) "ad_pred_proc_id",
  (MR_String) "ad_typeinfo_liveness",
  (MR_String) "ad_opt_no_return_calls",
  (MR_String) "ad_dummy_var_array"
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
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
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

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_stag_ordered_alloc_data_0_0[1] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_alloc_data_0_0
};

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

static const MR_DuFunctorDescPtr ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_alloc_data_0[1] = {
  &ll_backend__live_vars__ll_backend__live_vars__du_functor_desc_alloc_data_0_0
};

static const MR_Integer ll_backend__live_vars__ll_backend__live_vars__functor_number_map_alloc_data_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__live_vars__ll_backend__live_vars__type_ctor_info_alloc_data_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__live_vars____Unify____alloc_data_0_0_10001)),
  ((MR_Box) (ll_backend__live_vars____Compare____alloc_data_0_0_10001)),
  (MR_String) "ll_backend.live_vars",
  (MR_String) "alloc_data",
  {     ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_alloc_data_0 },
  {     ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_alloc_data_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__live_vars__ll_backend__live_vars__functor_number_map_alloc_data_0,

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

static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) (&ll_backend__live_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__live_vars__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ll_backend__live_vars__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
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
  {     ll_backend__live_vars__ll_backend__live_vars__du_name_ordered_parallel_stackvars_0 },
  {     ll_backend__live_vars__ll_backend__live_vars__du_ptag_ordered_parallel_stackvars_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  ll_backend__live_vars__ll_backend__live_vars__functor_number_map_parallel_stackvars_0,

};

static const MR_ConstString ll_backend__live_vars__ll_backend__live_vars__type_class_id_var_names_stack_alloc_info_1[1] = {
  (MR_String) "T"
};

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
            MR_Word Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word SubResult1_17;

                  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__live_vars_scalar_common_1[2]), &SubResult1_17, ((MR_Box) (Var_90)), ((MR_Box) (ArgY1_16)));
                  succeeded = (SubResult1_17 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_17;
                  else
                  {
                    MR_Word SubResult2_20;

                    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__live_vars_scalar_common_1[3]), &SubResult2_20, ((MR_Box) (Var_89)), ((MR_Box) (ArgY2_19)));
                    succeeded = (SubResult2_20 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_20;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__live_vars_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Var_88)), ((MR_Box) (ArgY3_22)));
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
            MR_Word Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_42 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_45 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_43;

                  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__live_vars_scalar_common_1[2]), &SubResult1_43, ((MR_Box) (Var_87)), ((MR_Box) (ArgY1_42)));
                  succeeded = (SubResult1_43 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_43;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__live_vars_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Var_86)), ((MR_Box) (ArgY2_45)));
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
            MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word SubResult1_67;

                  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__live_vars_scalar_common_1[3]), &SubResult1_67, ((MR_Box) (Var_85)), ((MR_Box) (ArgY1_66)));
                  succeeded = (SubResult1_67 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_67;
                  else
                  {
                    MR_Word SubResult2_70;

                    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__live_vars_scalar_common_1[2]), &SubResult2_70, ((MR_Box) (Var_84)), ((MR_Box) (ArgY2_69)));
                    succeeded = (SubResult2_70 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_70;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__live_vars_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Var_83)), ((MR_Box) (ArgY3_72)));
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;
            MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_8;
            MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
              TypeInfo_28_28 = (MR_Word) (&ll_backend__live_vars_scalar_common_1[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
              if (succeeded)
              {
                TypeInfo_29_29 = (MR_Word) (&ll_backend__live_vars_scalar_common_1[3]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
                if (succeeded)
                {
                  TypeInfo_30_30 = (MR_Word) (&ll_backend__live_vars_scalar_common_1[2]);
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
            MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_12;
            MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_14;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              TypeInfo_26_26 = (MR_Word) (&ll_backend__live_vars_scalar_common_1[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
              if (succeeded)
              {
                TypeInfo_27_27 = (MR_Word) (&ll_backend__live_vars_scalar_common_1[2]);
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
            MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_16;
            MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_18;
            MR_Word ArgX3_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_20;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
            if (succeeded)
            {
              ArgY1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              TypeInfo_23_23 = (MR_Word) (&ll_backend__live_vars_scalar_common_1[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX1_15)), ((MR_Box) (ArgY1_16)));
              if (succeeded)
              {
                TypeInfo_24_24 = (MR_Word) (&ll_backend__live_vars_scalar_common_1[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX2_17)), ((MR_Box) (ArgY2_18)));
                if (succeeded)
                {
                  TypeInfo_25_25 = (MR_Word) (&ll_backend__live_vars_scalar_common_1[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX3_19)), ((MR_Box) (ArgY3_20)));
                }
              }
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
ll_backend__live_vars____Compare____alloc_data_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_ArrayPtr ArgX6_19 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_ArrayPtr ArgY6_20 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
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
            MR_Integer Var_29 = (MR_Integer) (ArgX4_13);
            MR_Integer Var_30 = (MR_Integer) (ArgY4_14);

            succeeded = (Var_29 < Var_30);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_29 > Var_30);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult4_15 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;
              MR_Integer Var_31 = (MR_Integer) (ArgX5_16);
              MR_Integer Var_32 = (MR_Integer) (ArgY5_17);

              succeeded = (Var_31 < Var_32);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_31 > Var_32);
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
                mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__live_vars_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__live_vars____Unify____alloc_data_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_20_20;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_ArrayPtr ArgX6_13 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_ArrayPtr ArgY6_14 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
              {
                TypeCtorInfo_20_20 = (MR_Word) (&check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0);
                succeeded = mercury__array____Unify____array_1_0(TypeCtorInfo_20_20, (MR_ArrayPtr) (ArgX6_13), (MR_ArrayPtr) (ArgY6_14));
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
ll_backend__live_vars__at_par_conj_4_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_stack_alloc_info_5, (MR_Integer) 0)), (MR_Integer) 7))));

    func_0(((MR_Box) (TypeClassInfo_for_stack_alloc_info_5)), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), HeadVar__3_3, HeadVar__4_4);
  }
}

void MR_CALL 
ll_backend__live_vars__at_resume_site_4_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_stack_alloc_info_5, (MR_Integer) 0)), (MR_Integer) 6))));

    func_0(((MR_Box) (TypeClassInfo_for_stack_alloc_info_5)), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), HeadVar__3_3, HeadVar__4_4);
  }
}

void MR_CALL 
ll_backend__live_vars__at_call_site_4_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_stack_alloc_info_5, (MR_Integer) 0)), (MR_Integer) 5))));

    func_0(((MR_Box) (TypeClassInfo_for_stack_alloc_info_5)), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), HeadVar__3_3, HeadVar__4_4);
  }
}

static void MR_CALL 
ll_backend__live_vars__max_var_num_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_MaxVarNum_0_8,
  MR_Integer * STATE_VARIABLE_MaxVarNum_9)
{
  {
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer VarNum_7;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&ll_backend__live_vars_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_VarNum_7;

    conv1_VarNum_7 = func_0(((MR_Box) ((MR_Word) (&ll_backend__live_vars_scalar_common_2[1]))), ((MR_Box) (Var_4)));
    VarNum_7 = ((MR_Integer) (conv1_VarNum_7));
    mercury__int__max_3_p_0(VarNum_7, STATE_VARIABLE_MaxVarNum_0_8, STATE_VARIABLE_MaxVarNum_9);
  }
}

void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_no_par_stack_10_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_29,
  MR_Word Goal0_11,
  MR_Word * Goal_12,
  MR_Word ResumeVars0_13,
  MR_Word AllocData_14,
  MR_Box STATE_VARIABLE_StackAlloc_0_20,
  MR_Box * STATE_VARIABLE_StackAlloc_21,
  MR_Word STATE_VARIABLE_Liveness_0_22,
  MR_Word * STATE_VARIABLE_Liveness_23,
  MR_Word STATE_VARIABLE_NondetLiveness_0_24,
  MR_Word * STATE_VARIABLE_NondetLiveness_25)
{
  {
    MR_Word _ParStackVars_19;

    ll_backend__live_vars__build_live_sets_in_goal_12_p_0(TypeClassInfo_for_stack_alloc_info_29, Goal0_11, Goal_12, ResumeVars0_13, AllocData_14, STATE_VARIABLE_StackAlloc_0_20, STATE_VARIABLE_StackAlloc_21, STATE_VARIABLE_Liveness_0_22, STATE_VARIABLE_Liveness_23, STATE_VARIABLE_NondetLiveness_0_24, STATE_VARIABLE_NondetLiveness_25, (MR_Word) ((MR_Unsigned) 0U), &_ParStackVars_19);
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_cases_12_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_54,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word ResumeVars0_3,
  MR_Word AllocData_4,
  MR_Box STATE_VARIABLE_StackAlloc_0_5,
  MR_Box * STATE_VARIABLE_StackAlloc_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_ParStackVars_0_11,
  MR_Word * STATE_VARIABLE_ParStackVars_12)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ParStackVars_12 = STATE_VARIABLE_ParStackVars_0_11;
    *HeadVar__10_10 = HeadVar__9_9;
    *HeadVar__8_8 = HeadVar__7_7;
    *STATE_VARIABLE_StackAlloc_6 = STATE_VARIABLE_StackAlloc_0_5;
  }
  else
  {
    MR_Word Case0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_29;
    MR_Word Cases_30;
    MR_Word MainConsId_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_27, (MR_Integer) 0))));
    MR_Word OtherConsIds_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_27, (MR_Integer) 1))));
    MR_Word Goal0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_27, (MR_Integer) 2))));
    MR_Word Goal_42;
    MR_Word NondetLiveness1_43;
    MR_Word NondetLiveness2_45;
    MR_Box STATE_VARIABLE_StackAlloc_50_50;
    MR_Word STATE_VARIABLE_ParStackVars_51_51;
    MR_Word _Liveness2_44;

    ll_backend__live_vars__build_live_sets_in_goal_12_p_0(TypeClassInfo_for_stack_alloc_info_54, Goal0_41, &Goal_42, ResumeVars0_3, AllocData_4, STATE_VARIABLE_StackAlloc_0_5, &STATE_VARIABLE_StackAlloc_50_50, HeadVar__7_7, HeadVar__8_8, HeadVar__9_9, &NondetLiveness1_43, STATE_VARIABLE_ParStackVars_0_11, &STATE_VARIABLE_ParStackVars_51_51);
    {
      Case_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_29, 0) = ((MR_Box) (MainConsId_39));
      MR_hl_field(MR_mktag(0), Case_29, 1) = ((MR_Box) (OtherConsIds_40));
      MR_hl_field(MR_mktag(0), Case_29, 2) = ((MR_Box) (Goal_42));
    }
    ll_backend__live_vars__build_live_sets_in_cases_12_p_0(TypeClassInfo_for_stack_alloc_info_54, Cases0_28, &Cases_30, ResumeVars0_3, AllocData_4, STATE_VARIABLE_StackAlloc_50_50, STATE_VARIABLE_StackAlloc_6, HeadVar__7_7, &_Liveness2_44, HeadVar__9_9, &NondetLiveness2_45, STATE_VARIABLE_ParStackVars_51_51, STATE_VARIABLE_ParStackVars_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_29));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_30));
    }
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NondetLiveness1_43, NondetLiveness2_45, HeadVar__10_10);
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_disj_13_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_61,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word DisjGoalInfo_3,
  MR_Word ResumeVars0_4,
  MR_Word AllocData_5,
  MR_Box STATE_VARIABLE_StackAlloc_0_6,
  MR_Box * STATE_VARIABLE_StackAlloc_7,
  MR_Word HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word HeadVar__10_10,
  MR_Word * HeadVar__11_11,
  MR_Word STATE_VARIABLE_ParStackVars_0_12,
  MR_Word * STATE_VARIABLE_ParStackVars_13)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_ParStackVars_13 = STATE_VARIABLE_ParStackVars_0_12;
      *HeadVar__11_11 = HeadVar__10_10;
      *HeadVar__9_9 = HeadVar__8_8;
      *STATE_VARIABLE_StackAlloc_7 = STATE_VARIABLE_StackAlloc_0_6;
    }
    else
    {
      MR_Word Goal0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_31;
      MR_Word Goals_32;
      MR_Word GoalInfo_43;
      MR_Word NondetLiveness1_44;
      MR_Word NondetLiveness2_46;
      MR_Word DisjCodeModel_47;
      MR_Box STATE_VARIABLE_StackAlloc_56_56;
      MR_Word STATE_VARIABLE_ParStackVars_57_57;
      MR_Word _Liveness2_45;

      ll_backend__live_vars__build_live_sets_in_goal_12_p_0(TypeClassInfo_for_stack_alloc_info_61, Goal0_29, &Goal_31, ResumeVars0_4, AllocData_5, STATE_VARIABLE_StackAlloc_0_6, &STATE_VARIABLE_StackAlloc_56_56, HeadVar__8_8, HeadVar__9_9, HeadVar__10_10, &NondetLiveness1_44, STATE_VARIABLE_ParStackVars_0_12, &STATE_VARIABLE_ParStackVars_57_57);
      GoalInfo_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_31, (MR_Integer) 1))));
      ll_backend__live_vars__build_live_sets_in_disj_13_p_0(TypeClassInfo_for_stack_alloc_info_61, Goals0_30, &Goals_32, DisjGoalInfo_3, ResumeVars0_4, AllocData_5, STATE_VARIABLE_StackAlloc_56_56, STATE_VARIABLE_StackAlloc_7, HeadVar__8_8, &_Liveness2_45, HeadVar__10_10, &NondetLiveness2_46, STATE_VARIABLE_ParStackVars_57_57, STATE_VARIABLE_ParStackVars_13);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_31));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_32));
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
              ResumePointVars_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Resume_49, (MR_Integer) 0))));
              Locs_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Resume_49, (MR_Integer) 1))) & (MR_Integer) 3);
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
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_par_conj_12_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_50,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word ResumeVars0_3,
  MR_Word AllocData_4,
  MR_Box STATE_VARIABLE_StackAlloc_0_5,
  MR_Box * STATE_VARIABLE_StackAlloc_6,
  MR_Word HeadVar__7_7,
  MR_Word * Liveness_8,
  MR_Word STATE_VARIABLE_NondetLiveness_0_9,
  MR_Word * STATE_VARIABLE_NondetLiveness_10,
  MR_Word STATE_VARIABLE_ParStackVars_0_11,
  MR_Word * STATE_VARIABLE_ParStackVars_12)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *Liveness_8 = HeadVar__7_7;
      *STATE_VARIABLE_ParStackVars_12 = STATE_VARIABLE_ParStackVars_0_11;
      *STATE_VARIABLE_NondetLiveness_10 = STATE_VARIABLE_NondetLiveness_0_9;
      *STATE_VARIABLE_StackAlloc_6 = STATE_VARIABLE_StackAlloc_0_5;
    }
    else
    {
      MR_Word Goal0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_27;
      MR_Word Goals_28;
      MR_Box STATE_VARIABLE_StackAlloc_43_43;
      MR_Word STATE_VARIABLE_NondetLiveness_44_44;
      MR_Word STATE_VARIABLE_ParStackVars_45_45;
      MR_Word STATE_VARIABLE_ParStackVars_46_46;
      MR_Word Nonlocals_54;
      MR_Word PrevSets_55;
      MR_Word CurSet_56;
      MR_Word _Liveness1_36;

      ll_backend__live_vars__build_live_sets_in_goal_12_p_0(TypeClassInfo_for_stack_alloc_info_50, Goal0_25, &Goal_27, ResumeVars0_3, AllocData_4, STATE_VARIABLE_StackAlloc_0_5, &STATE_VARIABLE_StackAlloc_43_43, HeadVar__7_7, Liveness_8, STATE_VARIABLE_NondetLiveness_0_9, &STATE_VARIABLE_NondetLiveness_44_44, STATE_VARIABLE_ParStackVars_0_11, &STATE_VARIABLE_ParStackVars_45_45);
      succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_ParStackVars_45_45)) == (MR_Integer) 1);
      if (succeeded)
      {
        Nonlocals_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_ParStackVars_45_45, (MR_Integer) 0))));
        PrevSets_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_ParStackVars_45_45, (MR_Integer) 1))));
        CurSet_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_ParStackVars_45_45, (MR_Integer) 2))));
        {
          MR_Word Var_58;
          MR_Word Var_59;

          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (CurSet_56));
            MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (PrevSets_55));
          }
          Var_59 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
          {
            STATE_VARIABLE_ParStackVars_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_ParStackVars_46_46, 0) = ((MR_Box) (Nonlocals_54));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_ParStackVars_46_46, 1) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_ParStackVars_46_46, 2) = ((MR_Box) (Var_59));
          }
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.live_vars.par_stack_vars_next_par_conjunct\'/2", (MR_String) "expected parallel_conjunction/3");
          return;
        }
      ll_backend__live_vars__build_live_sets_in_par_conj_12_p_0(TypeClassInfo_for_stack_alloc_info_50, Goals0_26, &Goals_28, ResumeVars0_3, AllocData_4, STATE_VARIABLE_StackAlloc_43_43, STATE_VARIABLE_StackAlloc_6, HeadVar__7_7, &_Liveness1_36, STATE_VARIABLE_NondetLiveness_44_44, STATE_VARIABLE_NondetLiveness_10, STATE_VARIABLE_ParStackVars_46_46, STATE_VARIABLE_ParStackVars_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_27));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_28));
      }
    }
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_conj_12_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_60,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word ResumeVars0_3,
  MR_Word AllocData_4,
  MR_Box STATE_VARIABLE_StackAlloc_0_5,
  MR_Box * STATE_VARIABLE_StackAlloc_6,
  MR_Word STATE_VARIABLE_Liveness_0_7,
  MR_Word * STATE_VARIABLE_Liveness_8,
  MR_Word STATE_VARIABLE_NondetLiveness_0_9,
  MR_Word * STATE_VARIABLE_NondetLiveness_10,
  MR_Word STATE_VARIABLE_ParStackVars_0_11,
  MR_Word * STATE_VARIABLE_ParStackVars_12)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_ParStackVars_12 = STATE_VARIABLE_ParStackVars_0_11;
      *STATE_VARIABLE_NondetLiveness_10 = STATE_VARIABLE_NondetLiveness_0_9;
      *STATE_VARIABLE_Liveness_8 = STATE_VARIABLE_Liveness_0_7;
      *STATE_VARIABLE_StackAlloc_6 = STATE_VARIABLE_StackAlloc_0_5;
    }
    else
    {
      MR_Word Goal0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_29;
      MR_Word Goals_30;
      MR_Word GoalInfo_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_27, (MR_Integer) 1))));
      MR_Word InstMapDelta_39;

      InstMapDelta_39 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_38);
      succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(InstMapDelta_39);
      if (succeeded)
      {
        ll_backend__live_vars__build_live_sets_in_goal_12_p_0(TypeClassInfo_for_stack_alloc_info_60, Goal0_27, &Goal_29, ResumeVars0_3, AllocData_4, STATE_VARIABLE_StackAlloc_0_5, STATE_VARIABLE_StackAlloc_6, STATE_VARIABLE_Liveness_0_7, STATE_VARIABLE_Liveness_8, STATE_VARIABLE_NondetLiveness_0_9, STATE_VARIABLE_NondetLiveness_10, STATE_VARIABLE_ParStackVars_0_11, STATE_VARIABLE_ParStackVars_12);
        Goals_30 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Box STATE_VARIABLE_StackAlloc_52_52;
        MR_Word STATE_VARIABLE_Liveness_53_53;
        MR_Word STATE_VARIABLE_NondetLiveness_54_54;
        MR_Word STATE_VARIABLE_ParStackVars_55_55;

        ll_backend__live_vars__build_live_sets_in_goal_12_p_0(TypeClassInfo_for_stack_alloc_info_60, Goal0_27, &Goal_29, ResumeVars0_3, AllocData_4, STATE_VARIABLE_StackAlloc_0_5, &STATE_VARIABLE_StackAlloc_52_52, STATE_VARIABLE_Liveness_0_7, &STATE_VARIABLE_Liveness_53_53, STATE_VARIABLE_NondetLiveness_0_9, &STATE_VARIABLE_NondetLiveness_54_54, STATE_VARIABLE_ParStackVars_0_11, &STATE_VARIABLE_ParStackVars_55_55);
        ll_backend__live_vars__build_live_sets_in_conj_12_p_0(TypeClassInfo_for_stack_alloc_info_60, Goals0_28, &Goals_30, ResumeVars0_3, AllocData_4, STATE_VARIABLE_StackAlloc_52_52, STATE_VARIABLE_StackAlloc_6, STATE_VARIABLE_Liveness_53_53, STATE_VARIABLE_Liveness_8, STATE_VARIABLE_NondetLiveness_54_54, STATE_VARIABLE_NondetLiveness_10, STATE_VARIABLE_ParStackVars_55_55, STATE_VARIABLE_ParStackVars_12);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_29));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_30));
      }
    }
  }
}

static MR_Box MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_2(
  void * env_ptr_arg)
{
  {
    struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s * env_ptr = (struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_4(
  void * env_ptr_arg)
{
  {
    struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s * env_ptr = (struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Disjunct_234 = ((MR_Word) ((env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__conv1_Disjunct_234));
    ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_3(env_ptr);
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_3(
  void * env_ptr_arg)
{
  {
    struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s * env_ptr = (struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Disjunct_234, (MR_Integer) 0))));
      MR_Word Var_46;
      MR_Unsigned packed_word_3;

      (env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctGoalInfo_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Disjunct_234, (MR_Integer) 1))));
      hlds__hlds_llds__goal_info_get_resume_point_2_p_0((env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctGoalInfo_44, &(env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctResumePoint_45);
      (env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = ((env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctResumePoint_45 != (MR_Word) ((MR_Unsigned) 0U));
      if ((env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
      {
        Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctResumePoint_45, (MR_Integer) 0))));
        packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), (env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctResumePoint_45, (MR_Integer) 1)));
        (env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Locs_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), (env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__DisjunctResumePoint_45, (MR_Integer) 1))) & (MR_Integer) 3);
        (env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Var_216 = (MR_Integer) 1;
        ll_backend__live_vars__resume_locs_include_stack_2_p_0((env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Locs_47, &(env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Var_335);
        (env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = ((env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Var_216 == (env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Var_335);
        if ((env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
          ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_2(env_ptr);
      }
    }
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_5(
  void * env_ptr_arg)
{
  {
    struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s * env_ptr = (struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), &(env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__conv1_Disjunct_234, (env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Goals_236, ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_4, env_ptr);
        (env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_320,
  MR_Word GoalExpr0_15,
  MR_Word * GoalExpr_16,
  MR_Word GoalInfo0_17,
  MR_Word * GoalInfo_18,
  MR_Word ResumeVars0_19,
  MR_Word AllocData_20,
  MR_Box STATE_VARIABLE_StackAlloc_0_142,
  MR_Box * STATE_VARIABLE_StackAlloc_143,
  MR_Word STATE_VARIABLE_Liveness_0_144,
  MR_Word * STATE_VARIABLE_Liveness_145,
  MR_Word STATE_VARIABLE_NondetLiveness_0_146,
  MR_Word * STATE_VARIABLE_NondetLiveness_147,
  MR_Word STATE_VARIABLE_ParStackVars_0_148,
  MR_Word * STATE_VARIABLE_ParStackVars_149)
{
  {
    struct ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0_s env;

    switch (MR_tag((MR_Word) GoalExpr0_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_66 = (MR_Word) ((MR_Word) (GoalExpr0_15));
          MR_Word SubGoal_67;

          ll_backend__live_vars__build_live_sets_in_goal_12_p_0(TypeClassInfo_for_stack_alloc_info_320, SubGoal0_66, &SubGoal_67, ResumeVars0_19, AllocData_20, STATE_VARIABLE_StackAlloc_0_142, STATE_VARIABLE_StackAlloc_143, STATE_VARIABLE_Liveness_0_144, STATE_VARIABLE_Liveness_145, STATE_VARIABLE_NondetLiveness_0_146, STATE_VARIABLE_NondetLiveness_147, STATE_VARIABLE_ParStackVars_0_148, STATE_VARIABLE_ParStackVars_149);
          *GoalExpr_16 = (MR_Word) ((MR_Word) (SubGoal_67));
          *GoalInfo_18 = GoalInfo0_17;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_15, (MR_Integer) 3))));
          MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_15, (MR_Integer) 0))));
          MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_15, (MR_Integer) 1))));
          MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_15, (MR_Integer) 2))));
          MR_Word Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_15, (MR_Integer) 4))));

          *GoalExpr_16 = GoalExpr0_15;
          *GoalInfo_18 = GoalInfo0_17;
          switch (MR_tag((MR_Word) Unification_113)) {
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
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification_113, (MR_Integer) 0))))) {
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
          *STATE_VARIABLE_StackAlloc_143 = STATE_VARIABLE_StackAlloc_0_142;
          *STATE_VARIABLE_Liveness_145 = STATE_VARIABLE_Liveness_0_144;
          *STATE_VARIABLE_NondetLiveness_147 = STATE_VARIABLE_NondetLiveness_0_146;
          *STATE_VARIABLE_ParStackVars_149 = STATE_VARIABLE_ParStackVars_0_148;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_99 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_15, (MR_Integer) 0))));
          MR_Integer ProcId_100 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_15, (MR_Integer) 1))));
          MR_Word Builtin_101 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_15, (MR_Integer) 3))) & (MR_Integer) 1);
          MR_Word CallerProcInfo_104;
          MR_Word CalleePredProcId_106;
          MR_Box STATE_VARIABLE_StackAlloc_161_161;
          MR_Word STATE_VARIABLE_ParStackVars_163_163;
          MR_Word ArgVars_265 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_15, (MR_Integer) 2))));
          MR_Word ProcInfo_266;
          MR_Word VarTypes_267;
          MR_Word ModuleInfo_268;
          MR_Word OutVars_270;
          MR_Word Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_15, (MR_Integer) 4))));
          MR_Word Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_15, (MR_Integer) 5))));
          MR_Unsigned packed_word_7 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_15, (MR_Integer) 3)));
          MR_Word Var_296;
          MR_Word Var_297;
          MR_Word Var_298;
          MR_ArrayPtr Var_299;
          MR_Unsigned packed_word_8;
          MR_Word Var_105;
          MR_Word _InVars_263;
          MR_Word _UnusedVars_264;
          MR_Word Var_305;
          MR_Word Var_306;
          MR_Word Var_307;
          MR_Word Var_308;
          MR_ArrayPtr Var_309;
          MR_Unsigned packed_word_9;
          MR_Word Var_336;
          MR_Integer Var_337;

          *GoalExpr_16 = GoalExpr0_15;
          ModuleInfo_268 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 0))));
          CallerProcInfo_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 1))));
          Var_296 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 2))));
          packed_word_8 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 3)));
          Var_297 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
          Var_298 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 3))) & (MR_Integer) 1);
          Var_299 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 4))));
          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(CallerProcInfo_104, &VarTypes_267);
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_268, PredId_99, ProcId_100, &Var_105, &ProcInfo_266);
          hlds__arg_info__partition_proc_call_args_7_p_0(ProcInfo_266, VarTypes_267, ModuleInfo_268, ArgVars_265, &_InVars_263, &OutVars_270, &_UnusedVars_264);
          switch (Builtin_101) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *GoalInfo_18 = GoalInfo0_17;
                STATE_VARIABLE_StackAlloc_161_161 = STATE_VARIABLE_StackAlloc_0_142;
                *STATE_VARIABLE_NondetLiveness_147 = STATE_VARIABLE_NondetLiveness_0_146;
                STATE_VARIABLE_ParStackVars_163_163 = STATE_VARIABLE_ParStackVars_0_148;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_160;

                Var_160 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutVars_270);
                ll_backend__live_vars__build_live_sets_in_call_12_p_0(TypeClassInfo_for_stack_alloc_info_320, Var_160, GoalInfo0_17, GoalInfo_18, ResumeVars0_19, AllocData_20, STATE_VARIABLE_StackAlloc_0_142, &STATE_VARIABLE_StackAlloc_161_161, STATE_VARIABLE_Liveness_0_144, STATE_VARIABLE_NondetLiveness_0_146, STATE_VARIABLE_NondetLiveness_147, STATE_VARIABLE_ParStackVars_0_148, &STATE_VARIABLE_ParStackVars_163_163);
              }
              break;
          }
          Var_305 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 0))));
          Var_306 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 1))));
          CalleePredProcId_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 2))));
          packed_word_9 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 3)));
          Var_307 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
          Var_308 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 3))) & (MR_Integer) 1);
          Var_309 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 4))));
          Var_336 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CalleePredProcId_106, (MR_Integer) 0))));
          Var_337 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CalleePredProcId_106, (MR_Integer) 1))));
          (env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_99, Var_336);
          if ((env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
            (env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = (ProcId_100 == Var_337);
          if ((env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
          {
            MR_Word MaybeNeedLC_107;
            MR_Word DelayDeathSet_108;

            ll_backend__live_vars__par_stack_vars_recursive_call_4_p_0(&MaybeNeedLC_107, &DelayDeathSet_108, STATE_VARIABLE_ParStackVars_163_163, STATE_VARIABLE_ParStackVars_149);
            if ((MaybeNeedLC_107 == (MR_Word) ((MR_Unsigned) 0U)))
              *STATE_VARIABLE_StackAlloc_143 = STATE_VARIABLE_StackAlloc_161_161;
            else
            {
              MR_Word NeedLC_109 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNeedLC_107, (MR_Integer) 0))));

              ll_backend__live_vars__at_recursive_call_for_loop_control_4_p_0(TypeClassInfo_for_stack_alloc_info_320, NeedLC_109, AllocData_20, STATE_VARIABLE_StackAlloc_161_161, STATE_VARIABLE_StackAlloc_143);
            }
            *STATE_VARIABLE_Liveness_145 = parse_tree__set_of_var__difference_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_0_144, DelayDeathSet_108);
          }
          else
          {
            *STATE_VARIABLE_ParStackVars_149 = STATE_VARIABLE_ParStackVars_163_163;
            *STATE_VARIABLE_Liveness_145 = STATE_VARIABLE_Liveness_0_144;
            *STATE_VARIABLE_StackAlloc_143 = STATE_VARIABLE_StackAlloc_161_161;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 1))));
              MR_Word ArgVars_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 2))));
              MR_Word Modes_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 3))));
              MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 4))));
              MR_Word Var_81 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 5))) & (MR_Integer) 7);
              MR_Unsigned packed_word_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 5)));

              *GoalExpr_16 = GoalExpr0_15;
              switch (MR_tag((MR_Word) GenericCall_77)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    MR_Word ProcInfo_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 1))));
                    MR_Word VarTypes_93;
                    MR_Word Types_94;
                    MR_Word ModuleInfo_95;
                    MR_Word OutVars_97;
                    MR_Word Var_167;
                    MR_Word Var_285 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 0))));
                    MR_Word Var_286 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 2))));
                    MR_Word Var_287 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
                    MR_Word Var_288 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 3))) & (MR_Integer) 1);
                    MR_ArrayPtr Var_289 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 4))));
                    MR_Unsigned packed_word_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 3)));
                    MR_Word Var_290;
                    MR_Word Var_291;
                    MR_Word Var_292;
                    MR_Word Var_293;
                    MR_ArrayPtr Var_294;
                    MR_Unsigned packed_word_6;
                    MR_Word _InVars_96;
                    MR_Word _UnusedVars_98;

                    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_92, &VarTypes_93);
                    hlds__vartypes__lookup_var_types_3_p_0(VarTypes_93, ArgVars_78, &Types_94);
                    ModuleInfo_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 0))));
                    Var_290 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 1))));
                    Var_291 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 2))));
                    packed_word_6 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 3)));
                    Var_292 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
                    Var_293 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 3))) & (MR_Integer) 1);
                    Var_294 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 4))));
                    hlds__arg_info__partition_generic_call_args_7_p_0(ModuleInfo_95, ArgVars_78, Types_94, Modes_79, &_InVars_96, &OutVars_97, &_UnusedVars_98);
                    Var_167 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutVars_97);
                    ll_backend__live_vars__build_live_sets_in_call_12_p_0(TypeClassInfo_for_stack_alloc_info_320, Var_167, GoalInfo0_17, GoalInfo_18, ResumeVars0_19, AllocData_20, STATE_VARIABLE_StackAlloc_0_142, STATE_VARIABLE_StackAlloc_143, STATE_VARIABLE_Liveness_0_144, STATE_VARIABLE_NondetLiveness_0_146, STATE_VARIABLE_NondetLiveness_147, STATE_VARIABLE_ParStackVars_0_148, STATE_VARIABLE_ParStackVars_149);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    *GoalInfo_18 = GoalInfo0_17;
                    *STATE_VARIABLE_StackAlloc_143 = STATE_VARIABLE_StackAlloc_0_142;
                    *STATE_VARIABLE_NondetLiveness_147 = STATE_VARIABLE_NondetLiveness_0_146;
                    *STATE_VARIABLE_ParStackVars_149 = STATE_VARIABLE_ParStackVars_0_148;
                  }
                  break;
              }
              *STATE_VARIABLE_Liveness_145 = STATE_VARIABLE_Liveness_0_144;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Attributes_135 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 1))));
              MR_Word Args_136 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 4))));
              MR_Word CodeModel_274;
              MR_Word ArgVars_275;
              MR_Word ProcInfo_276;
              MR_Word VarTypes_277;
              MR_Word ModuleInfo_278;
              MR_Word OutVars_280;
              MR_Word PredId_282 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 2))));
              MR_Integer ProcId_283 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 3))));
              MR_Word CallerProcInfo_284;
              MR_Word Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 5))));
              MR_Word Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 6))));
              MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 7))));
              MR_Word Var_311;
              MR_Word Var_312;
              MR_Word Var_313;
              MR_ArrayPtr Var_314;
              MR_Unsigned packed_word_0;
              MR_Word Var_140;
              MR_Word _InVars_272;
              MR_Word _UnusedVars_273;
              MR_Word Var_153;

              *GoalExpr_16 = GoalExpr0_15;
              ModuleInfo_278 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 0))));
              CallerProcInfo_284 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 1))));
              Var_311 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 2))));
              packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 3)));
              Var_312 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
              Var_313 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 3))) & (MR_Integer) 1);
              Var_314 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), AllocData_20, (MR_Integer) 4))));
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(CallerProcInfo_284, &VarTypes_277);
              hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_278, PredId_282, ProcId_283, &Var_140, &ProcInfo_276);
              ArgVars_275 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&ll_backend__live_vars_scalar_common_1[0]), (MR_Word) (&ll_backend__live_vars_scalar_common_2[3]), Args_136);
              hlds__arg_info__partition_proc_call_args_7_p_0(ProcInfo_276, VarTypes_277, ModuleInfo_278, ArgVars_275, &_InVars_272, &OutVars_280, &_UnusedVars_273);
              CodeModel_274 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo0_17);
              (env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = (CodeModel_274 != (MR_Integer) 2);
              if ((env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
              {
                Var_153 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_135);
                (env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = (Var_153 == (MR_Integer) 1);
              }
              if ((env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
              {
                *GoalInfo_18 = GoalInfo0_17;
                *STATE_VARIABLE_ParStackVars_149 = STATE_VARIABLE_ParStackVars_0_148;
                *STATE_VARIABLE_NondetLiveness_147 = STATE_VARIABLE_NondetLiveness_0_146;
                *STATE_VARIABLE_StackAlloc_143 = STATE_VARIABLE_StackAlloc_0_142;
              }
              else
              {
                MR_Word Var_154;

                Var_154 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutVars_280);
                ll_backend__live_vars__build_live_sets_in_call_12_p_0(TypeClassInfo_for_stack_alloc_info_320, Var_154, GoalInfo0_17, GoalInfo_18, ResumeVars0_19, AllocData_20, STATE_VARIABLE_StackAlloc_0_142, STATE_VARIABLE_StackAlloc_143, STATE_VARIABLE_Liveness_0_144, STATE_VARIABLE_NondetLiveness_0_146, STATE_VARIABLE_NondetLiveness_147, STATE_VARIABLE_ParStackVars_0_148, STATE_VARIABLE_ParStackVars_149);
              }
              *STATE_VARIABLE_Liveness_145 = STATE_VARIABLE_Liveness_0_144;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 2))));
              MR_Word Goals_27;
              MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 1)));

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
                    MR_Word Var_218;
                    MR_Word Var_219;
                    MR_Word Var_220;
                    MR_Word STATE_VARIABLE_ParStackVars_222_222;
                    MR_Box STATE_VARIABLE_StackAlloc_223_223;
                    MR_Word STATE_VARIABLE_ParStackVars_226_226;
                    MR_Word Var_227;

                    NonLocals_28 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(GoalInfo0_17);
                    {
                      Var_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_220, 0) = ((MR_Box) (ResumeVars0_19));
                      MR_hl_field(MR_mktag(1), Var_220, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_219, 0) = ((MR_Box) (STATE_VARIABLE_Liveness_0_144));
                      MR_hl_field(MR_mktag(1), Var_219, 1) = ((MR_Box) (Var_220));
                    }
                    {
                      Var_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_218, 0) = ((MR_Box) (NonLocals_28));
                      MR_hl_field(MR_mktag(1), Var_218, 1) = ((MR_Box) (Var_219));
                    }
                    LiveSet_29 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_218);
                    ll_backend__live_vars__par_stack_vars_get_nonlocals_2_p_0(STATE_VARIABLE_ParStackVars_0_148, &OuterNonLocals_30);
                    ll_backend__live_vars__par_stack_vars_start_parallel_conjunction_3_p_0(LiveSet_29, STATE_VARIABLE_ParStackVars_0_148, &STATE_VARIABLE_ParStackVars_222_222);
                    ll_backend__live_vars__build_live_sets_in_par_conj_12_p_0(TypeClassInfo_for_stack_alloc_info_320, Goals0_26, &Goals_27, ResumeVars0_19, AllocData_20, STATE_VARIABLE_StackAlloc_0_142, &STATE_VARIABLE_StackAlloc_223_223, STATE_VARIABLE_Liveness_0_144, STATE_VARIABLE_Liveness_145, STATE_VARIABLE_NondetLiveness_0_146, STATE_VARIABLE_NondetLiveness_147, STATE_VARIABLE_ParStackVars_222_222, &STATE_VARIABLE_ParStackVars_226_226);
                    ll_backend__live_vars__par_stack_vars_get_stackvars_2_p_0(STATE_VARIABLE_ParStackVars_226_226, &InnerStackVars_32);
                    InnerNonLocals_33 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LiveSet_29, OuterNonLocals_30);
                    Var_227 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InnerNonLocals_33, InnerStackVars_32);
                    NeedInParConj_34 = (MR_Word) (Var_227);
                    ll_backend__live_vars__record_par_conj_6_p_0(TypeClassInfo_for_stack_alloc_info_320, NeedInParConj_34, AllocData_20, GoalInfo0_17, GoalInfo_18, STATE_VARIABLE_StackAlloc_223_223, STATE_VARIABLE_StackAlloc_143);
                    ll_backend__live_vars__par_stack_vars_end_parallel_conjunction_4_p_0(LiveSet_29, STATE_VARIABLE_ParStackVars_0_148, STATE_VARIABLE_ParStackVars_226_226, STATE_VARIABLE_ParStackVars_149);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    *GoalInfo_18 = GoalInfo0_17;
                    ll_backend__live_vars__build_live_sets_in_conj_12_p_0(TypeClassInfo_for_stack_alloc_info_320, Goals0_26, &Goals_27, ResumeVars0_19, AllocData_20, STATE_VARIABLE_StackAlloc_0_142, STATE_VARIABLE_StackAlloc_143, STATE_VARIABLE_Liveness_0_144, STATE_VARIABLE_Liveness_145, STATE_VARIABLE_NondetLiveness_0_146, STATE_VARIABLE_NondetLiveness_147, STATE_VARIABLE_ParStackVars_0_148, STATE_VARIABLE_ParStackVars_149);
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_16 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (ConjType_25));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goals_27));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word STATE_VARIABLE_NondetLiveness_213_213;
              MR_Word Goals0_235 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 1))));

              ll_backend__live_vars__build_live_sets_in_disj_13_p_0(TypeClassInfo_for_stack_alloc_info_320, Goals0_235, &(env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Goals_236, GoalInfo0_17, ResumeVars0_19, AllocData_20, STATE_VARIABLE_StackAlloc_0_142, STATE_VARIABLE_StackAlloc_143, STATE_VARIABLE_Liveness_0_144, STATE_VARIABLE_Liveness_145, STATE_VARIABLE_NondetLiveness_0_146, &STATE_VARIABLE_NondetLiveness_213_213, STATE_VARIABLE_ParStackVars_0_148, STATE_VARIABLE_ParStackVars_149);
              if (((env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Goals_236 == (MR_Word) ((MR_Unsigned) 0U)))
                *STATE_VARIABLE_NondetLiveness_147 = STATE_VARIABLE_NondetLiveness_213_213;
              else
              {
                MR_Word FirstGoal_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Goals_236, (MR_Integer) 0))));
                MR_Word FirstGoalInfo_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstGoal_35, (MR_Integer) 1))));
                MR_Word ResumePoint_39;
                MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Goals_236, (MR_Integer) 1))));
                MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstGoal_35, (MR_Integer) 0))));

                hlds__hlds_llds__goal_info_get_resume_point_2_p_0(FirstGoalInfo_38, &ResumePoint_39);
                if ((ResumePoint_39 == (MR_Word) ((MR_Unsigned) 0U)))
                  *STATE_VARIABLE_NondetLiveness_147 = STATE_VARIABLE_NondetLiveness_213_213;
                else
                {
                  MR_Word ResumeVars_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResumePoint_39, (MR_Integer) 0))));
                  MR_Word _Locs_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ResumePoint_39, (MR_Integer) 1))) & (MR_Integer) 3);
                  MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), ResumePoint_39, (MR_Integer) 1)));
                  MR_Word Var_215;

                  Var_215 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo0_17);
                  (env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = (Var_215 == (MR_Integer) 2);
                  if ((env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
                    ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_5(&env);
                  if ((env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
                    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_NondetLiveness_213_213, ResumeVars_40, STATE_VARIABLE_NondetLiveness_147);
                  else
                    *STATE_VARIABLE_NondetLiveness_147 = STATE_VARIABLE_NondetLiveness_213_213;
                }
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_16 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__Goals_236));
              }
              *GoalInfo_18 = GoalInfo0_17;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 1))));
              MR_Word CanFail_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 3))));
              MR_Word Cases_51;
              MR_Unsigned packed_word_12 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 2)));

              ll_backend__live_vars__build_live_sets_in_cases_12_p_0(TypeClassInfo_for_stack_alloc_info_320, Cases0_50, &Cases_51, ResumeVars0_19, AllocData_20, STATE_VARIABLE_StackAlloc_0_142, STATE_VARIABLE_StackAlloc_143, STATE_VARIABLE_Liveness_0_144, STATE_VARIABLE_Liveness_145, STATE_VARIABLE_NondetLiveness_0_146, STATE_VARIABLE_NondetLiveness_147, STATE_VARIABLE_ParStackVars_0_148, STATE_VARIABLE_ParStackVars_149);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_16 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_48));
                MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) (CanFail_49));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Cases_51));
              }
              *GoalInfo_18 = GoalInfo0_17;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 1))));
              MR_Word SubGoal0_261 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 2))));
              MR_Word TermVar_69;
              MR_Word Var_171;
              MR_Unsigned packed_word_10;

              (env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = ((((MR_tag((MR_Word) Reason_68)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_68, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if ((env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
              {
                TermVar_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_68, (MR_Integer) 1))));
                packed_word_10 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_68, (MR_Integer) 2)));
                Var_171 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_68, (MR_Integer) 2))) & (MR_Integer) 3);
                (env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = (Var_171 == (MR_Integer) 1);
              }
              if ((env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
              {
                *GoalExpr_16 = GoalExpr0_15;
                *GoalInfo_18 = GoalInfo0_17;
                parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermVar_69, STATE_VARIABLE_Liveness_0_144, STATE_VARIABLE_Liveness_145);
                *STATE_VARIABLE_ParStackVars_149 = STATE_VARIABLE_ParStackVars_0_148;
                *STATE_VARIABLE_NondetLiveness_147 = STATE_VARIABLE_NondetLiveness_0_146;
                *STATE_VARIABLE_StackAlloc_143 = STATE_VARIABLE_StackAlloc_0_142;
              }
              else
              {
                MR_Word LCVar_70;
                MR_Word LCSVar_71;
                MR_Word Var_72;
                MR_Unsigned packed_word_11;

                (env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded = ((((MR_tag((MR_Word) Reason_68)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_68, (MR_Integer) 0)))) == (MR_Integer) 8)));
                if ((env).ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0_env_0__succeeded)
                {
                  LCVar_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_68, (MR_Integer) 1))));
                  LCSVar_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_68, (MR_Integer) 2))));
                  packed_word_11 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_68, (MR_Integer) 3)));
                  Var_72 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_68, (MR_Integer) 3))) & (MR_Integer) 1);
                  {
                    MR_Word LCStackVars_73;
                    MR_Word NeedInParConjSet_74;
                    MR_Word WouldDieSet_75;
                    MR_Word Var_173;
                    MR_Word Var_174;
                    MR_Word Var_175;
                    MR_Word Var_176;
                    MR_Word Var_178;
                    MR_Word Var_179;
                    MR_Word Var_180;
                    MR_Word STATE_VARIABLE_ParStackVars_182_182;
                    MR_Box STATE_VARIABLE_StackAlloc_183_183;
                    MR_Word STATE_VARIABLE_Liveness_184_184;
                    MR_Word STATE_VARIABLE_ParStackVars_186_186;
                    MR_Word NonLocals_237;
                    MR_Word InnerStackVars_239;
                    MR_Word NeedInParConj_240;
                    MR_Word SubGoal_241;

                    NonLocals_237 = hlds__hlds_goal__goal_info_get_code_gen_nonlocals_1_f_0(GoalInfo0_17);
                    {
                      Var_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_176, 0) = ((MR_Box) (ResumeVars0_19));
                      MR_hl_field(MR_mktag(1), Var_176, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_175, 0) = ((MR_Box) (STATE_VARIABLE_Liveness_0_144));
                      MR_hl_field(MR_mktag(1), Var_175, 1) = ((MR_Box) (Var_176));
                    }
                    {
                      Var_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_174, 0) = ((MR_Box) (NonLocals_237));
                      MR_hl_field(MR_mktag(1), Var_174, 1) = ((MR_Box) (Var_175));
                    }
                    Var_173 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_174);
                    {
                      Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_180, 0) = ((MR_Box) (LCSVar_71));
                      MR_hl_field(MR_mktag(1), Var_180, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_179, 0) = ((MR_Box) (LCVar_70));
                      MR_hl_field(MR_mktag(1), Var_179, 1) = ((MR_Box) (Var_180));
                    }
                    Var_178 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_179);
                    LCStackVars_73 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_173, Var_178);
                    ll_backend__live_vars__par_stack_vars_start_loop_control_3_p_0(LCStackVars_73, STATE_VARIABLE_ParStackVars_0_148, &STATE_VARIABLE_ParStackVars_182_182);
                    ll_backend__live_vars__build_live_sets_in_goal_12_p_0(TypeClassInfo_for_stack_alloc_info_320, SubGoal0_261, &SubGoal_241, ResumeVars0_19, AllocData_20, STATE_VARIABLE_StackAlloc_0_142, &STATE_VARIABLE_StackAlloc_183_183, STATE_VARIABLE_Liveness_0_144, &STATE_VARIABLE_Liveness_184_184, STATE_VARIABLE_NondetLiveness_0_146, STATE_VARIABLE_NondetLiveness_147, STATE_VARIABLE_ParStackVars_182_182, &STATE_VARIABLE_ParStackVars_186_186);
                    ll_backend__live_vars__par_stack_vars_get_stackvars_2_p_0(STATE_VARIABLE_ParStackVars_186_186, &InnerStackVars_239);
                    NeedInParConjSet_74 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCStackVars_73, InnerStackVars_239);
                    NeedInParConj_240 = (MR_Word) (NeedInParConjSet_74);
                    ll_backend__live_vars__record_par_conj_6_p_0(TypeClassInfo_for_stack_alloc_info_320, NeedInParConj_240, AllocData_20, GoalInfo0_17, GoalInfo_18, STATE_VARIABLE_StackAlloc_183_183, STATE_VARIABLE_StackAlloc_143);
                    WouldDieSet_75 = parse_tree__set_of_var__difference_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeedInParConjSet_74, STATE_VARIABLE_Liveness_184_184);
                    *STATE_VARIABLE_Liveness_145 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_184_184, WouldDieSet_75);
                    ll_backend__live_vars__par_stack_vars_end_loop_control_4_p_0(WouldDieSet_75, STATE_VARIABLE_ParStackVars_0_148, STATE_VARIABLE_ParStackVars_186_186, STATE_VARIABLE_ParStackVars_149);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *GoalExpr_16 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_68));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_241));
                    }
                  }
                }
                else
                {
                  MR_Word CodeModel_76;
                  MR_Word STATE_VARIABLE_NondetLiveness_192_192;
                  MR_Word SubGoal_243;

                  ll_backend__live_vars__build_live_sets_in_goal_12_p_0(TypeClassInfo_for_stack_alloc_info_320, SubGoal0_261, &SubGoal_243, ResumeVars0_19, AllocData_20, STATE_VARIABLE_StackAlloc_0_142, STATE_VARIABLE_StackAlloc_143, STATE_VARIABLE_Liveness_0_144, STATE_VARIABLE_Liveness_145, STATE_VARIABLE_NondetLiveness_0_146, &STATE_VARIABLE_NondetLiveness_192_192, STATE_VARIABLE_ParStackVars_0_148, STATE_VARIABLE_ParStackVars_149);
                  CodeModel_76 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo0_17);
                  switch (CodeModel_76) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                      *STATE_VARIABLE_NondetLiveness_147 = STATE_VARIABLE_NondetLiveness_0_146;
                      break;
                    case (MR_Integer) 2:
                      *STATE_VARIABLE_NondetLiveness_147 = STATE_VARIABLE_NondetLiveness_192_192;
                      break;
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_16 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_68));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_243));
                  }
                  *GoalInfo_18 = GoalInfo0_17;
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 1))));
              MR_Word Cond0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 2))));
              MR_Word Then0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 3))));
              MR_Word Else0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 4))));
              MR_Word Cond_58;
              MR_Word LivenessCond_59;
              MR_Word NondetLivenessCond_60;
              MR_Word Then_61;
              MR_Word NondetLivenessThen_63;
              MR_Word Else_64;
              MR_Word NondetLivenessElse_65;
              MR_Box STATE_VARIABLE_StackAlloc_199_199;
              MR_Word STATE_VARIABLE_ParStackVars_200_200;
              MR_Box STATE_VARIABLE_StackAlloc_201_201;
              MR_Word STATE_VARIABLE_ParStackVars_202_202;
              MR_Word _LivenessThen_62;

              ll_backend__live_vars__build_live_sets_in_goal_12_p_0(TypeClassInfo_for_stack_alloc_info_320, Cond0_53, &Cond_58, ResumeVars0_19, AllocData_20, STATE_VARIABLE_StackAlloc_0_142, &STATE_VARIABLE_StackAlloc_199_199, STATE_VARIABLE_Liveness_0_144, &LivenessCond_59, STATE_VARIABLE_NondetLiveness_0_146, &NondetLivenessCond_60, STATE_VARIABLE_ParStackVars_0_148, &STATE_VARIABLE_ParStackVars_200_200);
              ll_backend__live_vars__build_live_sets_in_goal_12_p_0(TypeClassInfo_for_stack_alloc_info_320, Then0_54, &Then_61, ResumeVars0_19, AllocData_20, STATE_VARIABLE_StackAlloc_199_199, &STATE_VARIABLE_StackAlloc_201_201, LivenessCond_59, &_LivenessThen_62, NondetLivenessCond_60, &NondetLivenessThen_63, STATE_VARIABLE_ParStackVars_200_200, &STATE_VARIABLE_ParStackVars_202_202);
              ll_backend__live_vars__build_live_sets_in_goal_12_p_0(TypeClassInfo_for_stack_alloc_info_320, Else0_55, &Else_64, ResumeVars0_19, AllocData_20, STATE_VARIABLE_StackAlloc_201_201, STATE_VARIABLE_StackAlloc_143, STATE_VARIABLE_Liveness_0_144, STATE_VARIABLE_Liveness_145, STATE_VARIABLE_NondetLiveness_0_146, &NondetLivenessElse_65, STATE_VARIABLE_ParStackVars_202_202, STATE_VARIABLE_ParStackVars_149);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NondetLivenessThen_63, NondetLivenessElse_65, STATE_VARIABLE_NondetLiveness_147);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_16 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars_52));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_58));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_61));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_64));
              }
              *GoalInfo_18 = GoalInfo0_17;
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
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_goal_12_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_56,
  MR_Word Goal0_13,
  MR_Word * Goal_14,
  MR_Word ResumeVars0_15,
  MR_Word AllocData_16,
  MR_Box STATE_VARIABLE_StackAlloc_0_38,
  MR_Box * STATE_VARIABLE_StackAlloc_39,
  MR_Word STATE_VARIABLE_Liveness_0_40,
  MR_Word * STATE_VARIABLE_Liveness_41,
  MR_Word STATE_VARIABLE_NondetLiveness_0_42,
  MR_Word * STATE_VARIABLE_NondetLiveness_43,
  MR_Word STATE_VARIABLE_ParStackVars_0_44,
  MR_Word * STATE_VARIABLE_ParStackVars_45)
{
  {
    MR_Word GoalExpr0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_13, (MR_Integer) 0))));
    MR_Word GoalInfo0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_13, (MR_Integer) 1))));
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
      ResumeVars1_29 = ResumeVars0_15;
      GoalInfo1_30 = GoalInfo0_22;
      STATE_VARIABLE_StackAlloc_49_49 = STATE_VARIABLE_StackAlloc_0_38;
    }
    else
    {
      MR_Word ResumePointVars_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResumePoint_28, (MR_Integer) 0))));
      MR_Word Locs_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ResumePoint_28, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word ResumeOnStack_34;
      MR_Word NeedInResume_35;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

      switch (Locs_32) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            ResumeVars1_29 = ResumeVars0_15;
            ResumeOnStack_34 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 2:
          {
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeVars0_15, ResumePointVars_31, &ResumeVars1_29);
            ResumeOnStack_34 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 1:
          {
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeVars0_15, ResumePointVars_31, &ResumeVars1_29);
            ResumeOnStack_34 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 3:
          {
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeVars0_15, ResumePointVars_31, &ResumeVars1_29);
            ResumeOnStack_34 = (MR_Integer) 1;
          }
          break;
      }
      {
        NeedInResume_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NeedInResume_35, 0) = (MR_Box) ((MR_Unsigned) (ResumeOnStack_34));
        MR_hl_field(MR_mktag(0), NeedInResume_35, 1) = ((MR_Box) (ResumeVars1_29));
        MR_hl_field(MR_mktag(0), NeedInResume_35, 2) = ((MR_Box) (STATE_VARIABLE_NondetLiveness_0_42));
      }
      hlds__hlds_llds__goal_info_set_need_in_resume_3_p_0(NeedInResume_35, GoalInfo0_22, &GoalInfo1_30);
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_stack_alloc_info_56, (MR_Integer) 0)), (MR_Integer) 6))));
      func_0(((MR_Box) (TypeClassInfo_for_stack_alloc_info_56)), ((MR_Box) (NeedInResume_35)), ((MR_Box) (AllocData_16)), STATE_VARIABLE_StackAlloc_0_38, &STATE_VARIABLE_StackAlloc_49_49);
    }
    switch (HasSubGoals_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_Liveness_48_48;

          parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_47_47, PostDeaths_25, &STATE_VARIABLE_Liveness_48_48);
          ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0(TypeClassInfo_for_stack_alloc_info_56, GoalExpr0_21, &GoalExpr_36, GoalInfo1_30, &GoalInfo_37, ResumeVars1_29, AllocData_16, STATE_VARIABLE_StackAlloc_49_49, STATE_VARIABLE_StackAlloc_39, STATE_VARIABLE_Liveness_48_48, &STATE_VARIABLE_Liveness_54_54, STATE_VARIABLE_NondetLiveness_0_42, STATE_VARIABLE_NondetLiveness_43, STATE_VARIABLE_ParStackVars_0_44, STATE_VARIABLE_ParStackVars_45);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word STATE_VARIABLE_Liveness_51_75;

          ll_backend__live_vars__build_live_sets_in_goal_expr_14_p_0(TypeClassInfo_for_stack_alloc_info_56, GoalExpr0_21, &GoalExpr_36, GoalInfo1_30, &GoalInfo_37, ResumeVars1_29, AllocData_16, STATE_VARIABLE_StackAlloc_49_49, STATE_VARIABLE_StackAlloc_39, STATE_VARIABLE_Liveness_47_47, &STATE_VARIABLE_Liveness_51_75, STATE_VARIABLE_NondetLiveness_0_42, STATE_VARIABLE_NondetLiveness_43, STATE_VARIABLE_ParStackVars_0_44, STATE_VARIABLE_ParStackVars_45);
          parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_51_75, PostDeaths_25, &STATE_VARIABLE_Liveness_54_54);
        }
        break;
    }
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_Liveness_54_54, PostBirths_26, STATE_VARIABLE_Liveness_41);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_36));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_37));
    }
  }
}

void MR_CALL 
ll_backend__live_vars__at_recursive_call_for_loop_control_4_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_stack_alloc_info_5, (MR_Integer) 0)), (MR_Integer) 8))));

    func_0(((MR_Box) (TypeClassInfo_for_stack_alloc_info_5)), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), HeadVar__3_3, HeadVar__4_4);
  }
}

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_recursive_call_4_p_0(
  MR_Word * MaybeNeedLC_5,
  MR_Word * DelayDeathSet_6,
  MR_Word STATE_VARIABLE_ParStackVars_0_17,
  MR_Word * STATE_VARIABLE_ParStackVars_18)
{
  switch (MR_tag((MR_Word) STATE_VARIABLE_ParStackVars_0_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *MaybeNeedLC_5 = (MR_Word) ((MR_Unsigned) 0U);
        *DelayDeathSet_6 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        *STATE_VARIABLE_ParStackVars_18 = STATE_VARIABLE_ParStackVars_0_17;
      }
      break;
    case (MR_Integer) 1:
      {
        *MaybeNeedLC_5 = (MR_Word) ((MR_Unsigned) 0U);
        *DelayDeathSet_6 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        *STATE_VARIABLE_ParStackVars_18 = STATE_VARIABLE_ParStackVars_0_17;
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
        MR_Word StackVarsList0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_ParStackVars_0_17, (MR_Integer) 0))));
        MR_Word StackVars_14;
        MR_Word StackVarsList_15;
        MR_Word NonoverlapSets_16;
        MR_Word Var_19;

        *DelayDeathSet_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_ParStackVars_0_17, (MR_Integer) 1))));
        StackVars_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_ParStackVars_0_17, (MR_Integer) 2))));
        {
          StackVarsList_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), StackVarsList_15, 0) = ((MR_Box) (StackVars_14));
          MR_hl_field(MR_mktag(1), StackVarsList_15, 1) = ((MR_Box) (StackVarsList0_13));
        }
        parse_tree__set_of_var__cartesian_product_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), StackVarsList_15, &NonoverlapSets_16);
        Var_19 = (MR_Word) (NonoverlapSets_16);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeNeedLC_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_19));
        }
        *STATE_VARIABLE_ParStackVars_18 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
}

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_get_nonlocals_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__2_2 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
      break;
    case (MR_Integer) 3:
      *HeadVar__2_2 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      break;
  }
}

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_get_stackvars_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__2_2 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      break;
    case (MR_Integer) 1:
      {
        MR_Word StackVarss_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

        *HeadVar__2_2 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), StackVarss_4);
      }
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
      break;
    case (MR_Integer) 3:
      *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
      break;
  }
}

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_end_loop_control_4_p_0(
  MR_Word NewWouldDieSet_5,
  MR_Word OldParStackVars_6,
  MR_Word ParStackVars0_7,
  MR_Word * ParStackVars_8)
{
  {
    MR_Word NewStackVars_9;

    switch (MR_tag((MR_Word) ParStackVars0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        NewStackVars_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word StackVarss_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ParStackVars0_7, (MR_Integer) 1))));

          NewStackVars_9 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), StackVarss_28);
        }
        break;
      case (MR_Integer) 2:
        NewStackVars_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ParStackVars0_7, (MR_Integer) 1))));
        break;
      case (MR_Integer) 3:
        NewStackVars_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ParStackVars0_7, (MR_Integer) 2))));
        break;
    }
    switch (MR_tag((MR_Word) OldParStackVars_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_22;
          MR_Word Var_24;

          {
            Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (NewStackVars_9));
            MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_24 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *ParStackVars_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Var_22));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (NewWouldDieSet_5));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_24));
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
          MR_Word StackVarsList_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OldParStackVars_6, (MR_Integer) 0))));
          MR_Word WouldDieSet0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OldParStackVars_6, (MR_Integer) 1))));
          MR_Word StackVarsAcc_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OldParStackVars_6, (MR_Integer) 2))));
          MR_Word WouldDieSet_13;
          MR_Word Var_21;

          WouldDieSet_13 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), WouldDieSet0_11, NewWouldDieSet_5);
          {
            Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (NewStackVars_9));
            MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (StackVarsList_10));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *ParStackVars_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Var_21));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (WouldDieSet_13));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (StackVarsAcc_12));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_start_loop_control_3_p_0(
  MR_Word NonLocals_4,
  MR_Word ParStackVars0_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word Var_14;

    Var_14 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (NonLocals_4));
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_14));
    }
    switch (MR_tag((MR_Word) ParStackVars0_5)) {
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
  }
}

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_end_parallel_conjunction_4_p_0(
  MR_Word LiveSet_5,
  MR_Word OuterParStackVars_6,
  MR_Word ParStackVars0_7,
  MR_Word * ParStackVars_8)
{
  {
    MR_Word InnerStackVars_9;

    switch (MR_tag((MR_Word) ParStackVars0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        InnerStackVars_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word StackVarss_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ParStackVars0_7, (MR_Integer) 1))));

          InnerStackVars_9 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), StackVarss_30);
        }
        break;
      case (MR_Integer) 2:
        InnerStackVars_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ParStackVars0_7, (MR_Integer) 1))));
        break;
      case (MR_Integer) 3:
        InnerStackVars_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ParStackVars0_7, (MR_Integer) 2))));
        break;
    }
    switch (MR_tag((MR_Word) OuterParStackVars_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ParStackVars_8 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word OuterNonLocals_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OuterParStackVars_6, (MR_Integer) 0))));
          MR_Word OuterLocalStackVars_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OuterParStackVars_6, (MR_Integer) 1))));
          MR_Word OuterAccStackVars0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OuterParStackVars_6, (MR_Integer) 2))));
          MR_Word OuterAccStackVars_13;
          MR_Word Var_21;
          MR_Word Var_22;

          Var_21 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OuterAccStackVars0_12, InnerStackVars_9);
          Var_22 = parse_tree__set_of_var__difference_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LiveSet_5, OuterNonLocals_10);
          OuterAccStackVars_13 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_21, Var_22);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *ParStackVars_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (OuterNonLocals_10));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (OuterLocalStackVars_11));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (OuterAccStackVars_13));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word StackVars0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OuterParStackVars_6, (MR_Integer) 1))));
          MR_Word StackVars_15;
          MR_Word Var_19;
          MR_Word Var_20;
          MR_Word OuterNonLocals_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OuterParStackVars_6, (MR_Integer) 0))));

          Var_19 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), StackVars0_14, InnerStackVars_9);
          Var_20 = parse_tree__set_of_var__difference_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LiveSet_5, OuterNonLocals_23);
          StackVars_15 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_19, Var_20);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *ParStackVars_8 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (OuterNonLocals_23));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (StackVars_15));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word StackVarsList_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OuterParStackVars_6, (MR_Integer) 0))));
          MR_Word WouldDieSet_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OuterParStackVars_6, (MR_Integer) 1))));
          MR_Word Var_18;
          MR_Word StackVars0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OuterParStackVars_6, (MR_Integer) 2))));
          MR_Word StackVars_25;

          Var_18 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), StackVars0_24, InnerStackVars_9);
          StackVars_25 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_18, LiveSet_5);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *ParStackVars_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (StackVarsList_16));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (WouldDieSet_17));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (StackVars_25));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_start_parallel_conjunction_3_p_0(
  MR_Word LiveSet_4,
  MR_Word OuterParStackVars_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word InnerNonLocals_6;
    MR_Word OuterNonLocals_7;
    MR_Word Var_9;

    Var_9 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    switch (MR_tag((MR_Word) OuterParStackVars_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        OuterNonLocals_7 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        break;
      case (MR_Integer) 1:
        OuterNonLocals_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OuterParStackVars_5, (MR_Integer) 0))));
        break;
      case (MR_Integer) 2:
        OuterNonLocals_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OuterParStackVars_5, (MR_Integer) 0))));
        break;
      case (MR_Integer) 3:
        OuterNonLocals_7 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        break;
    }
    InnerNonLocals_6 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OuterNonLocals_7, LiveSet_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InnerNonLocals_6));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_9));
    }
  }
}

static void MR_CALL 
ll_backend__live_vars__record_par_conj_6_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_17,
  MR_Word NeedInParConj_7,
  MR_Word AllocData_8,
  MR_Word STATE_VARIABLE_GoalInfo_0_11,
  MR_Word * STATE_VARIABLE_GoalInfo_12,
  MR_Box STATE_VARIABLE_StackAlloc_0_13,
  MR_Box * STATE_VARIABLE_StackAlloc_14)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    hlds__hlds_llds__goal_info_set_need_in_par_conj_3_p_0(NeedInParConj_7, STATE_VARIABLE_GoalInfo_0_11, STATE_VARIABLE_GoalInfo_12);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_stack_alloc_info_17, (MR_Integer) 0)), (MR_Integer) 7))));
    func_0(((MR_Box) (TypeClassInfo_for_stack_alloc_info_17)), ((MR_Box) (NeedInParConj_7)), ((MR_Box) (AllocData_8)), STATE_VARIABLE_StackAlloc_0_13, STATE_VARIABLE_StackAlloc_14);
  }
}

static void MR_CALL 
ll_backend__live_vars__build_live_sets_in_call_12_p_0(
  MR_Word TypeClassInfo_for_stack_alloc_info_57,
  MR_Word OutVars_13,
  MR_Word GoalInfo0_14,
  MR_Word * GoalInfo_15,
  MR_Word ResumeVars0_16,
  MR_Word AllocData_17,
  MR_Box STATE_VARIABLE_StackAlloc_0_27,
  MR_Box * STATE_VARIABLE_StackAlloc_28,
  MR_Word Liveness_19,
  MR_Word STATE_VARIABLE_NondetLiveness_0_29,
  MR_Word * STATE_VARIABLE_NondetLiveness_30,
  MR_Word STATE_VARIABLE_ParStackVars_0_31,
  MR_Word * STATE_VARIABLE_ParStackVars_32)
{
  {
    MR_bool succeeded;
    MR_Word ForwardVars0_22;
    MR_Word ForwardVars_23;
    MR_Word Detism_24;
    MR_Word NeedAcrossCall_25;
    MR_Word CodeModel_26;
    MR_Word Var_33;
    MR_Word Var_44;
    MR_Word Var_35;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Liveness_19, OutVars_13, &ForwardVars0_22);
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllocData_17, (MR_Integer) 1))));
    Var_44 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AllocData_17, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
    switch (Var_44) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ForwardVars_23 = ForwardVars0_22;
        break;
      case (MR_Integer) 1:
        {
          MR_Word VarTypes_65;
          MR_Word RttiVarMaps_66;
          MR_Word TypeInfoVarsLive_67;
          MR_Word TypeInfoVarsOut_68;
          MR_Word STATE_VARIABLE_LiveVars_16_69;

          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(Var_33, &VarTypes_65);
          hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(Var_33, &RttiVarMaps_66);
          hlds__hlds_rtti__get_typeinfo_vars_4_p_0(ForwardVars0_22, VarTypes_65, RttiVarMaps_66, &TypeInfoVarsLive_67);
          hlds__hlds_rtti__get_typeinfo_vars_4_p_0(OutVars_13, VarTypes_65, RttiVarMaps_66, &TypeInfoVarsOut_68);
          parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ForwardVars0_22, TypeInfoVarsOut_68, &STATE_VARIABLE_LiveVars_16_69);
          parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_LiveVars_16_69, TypeInfoVarsLive_67, &ForwardVars_23);
        }
        break;
    }
    Detism_24 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_14);
    succeeded = (Detism_24 == (MR_Integer) 6);
    if (succeeded)
    {
      Var_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AllocData_17, (MR_Integer) 3))) & (MR_Integer) 1);
      succeeded = (Var_35 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;

      Var_36 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      Var_37 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      Var_38 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      {
        NeedAcrossCall_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NeedAcrossCall_25, 0) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(0), NeedAcrossCall_25, 1) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), NeedAcrossCall_25, 2) = ((MR_Box) (Var_38));
      }
    }
    else
      {
        NeedAcrossCall_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NeedAcrossCall_25, 0) = ((MR_Box) (ForwardVars_23));
        MR_hl_field(MR_mktag(0), NeedAcrossCall_25, 1) = ((MR_Box) (ResumeVars0_16));
        MR_hl_field(MR_mktag(0), NeedAcrossCall_25, 2) = ((MR_Box) (STATE_VARIABLE_NondetLiveness_0_29));
      }
    hlds__hlds_llds__goal_info_set_need_across_call_3_p_0(NeedAcrossCall_25, GoalInfo0_14, GoalInfo_15);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_stack_alloc_info_57, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_stack_alloc_info_57)), ((MR_Box) (NeedAcrossCall_25)), ((MR_Box) (AllocData_17)), STATE_VARIABLE_StackAlloc_0_27, STATE_VARIABLE_StackAlloc_28);
    CodeModel_26 = hlds__code_model__goal_info_get_code_model_1_f_0(*GoalInfo_15);
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
    ll_backend__live_vars__par_stack_vars_accumulate_stack_vars_3_p_0(ForwardVars_23, STATE_VARIABLE_ParStackVars_0_31, STATE_VARIABLE_ParStackVars_32);
  }
}

static void MR_CALL 
ll_backend__live_vars__par_stack_vars_accumulate_stack_vars_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word Nonlocals_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word ParallelVars_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word AccStackVars0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
        MR_Word AccStackVars_9;
        MR_Word Var_10;

        Var_10 = parse_tree__set_of_var__difference_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1, Nonlocals_6);
        AccStackVars_9 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AccStackVars0_8, Var_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Nonlocals_6));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ParallelVars_7));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (AccStackVars_9));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word NonLocals_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word AccStackVars0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word AccStackVars_14;

        AccStackVars_14 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AccStackVars0_13, HeadVar__1_1);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (NonLocals_12));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (AccStackVars_14));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word LocalStackVars_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word WouldDieSet_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word AccStackVars0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
        MR_Word AccStackVars_19;

        AccStackVars_19 = parse_tree__set_of_var__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AccStackVars0_18, HeadVar__1_1);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (LocalStackVars_16));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (WouldDieSet_17));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (AccStackVars_19));
        }
      }
      break;
  }
}

static void MR_CALL 
ll_backend__live_vars__resume_locs_include_stack_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((&ll_backend__live_vars_vector_common_4[0 + HeadVar__1_1]))->ll_backend__live_vars__vector_common_type_4_0__vct_4_f_0;
}

static void MR_CALL 
ll_backend__live_vars__build_dummy_type_array_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_STATE_VARIABLE_MaxVarNum_9;

    ll_backend__live_vars__max_var_num_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_MaxVarNum_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_MaxVarNum_9));
  }
}

void MR_CALL 
ll_backend__live_vars__build_dummy_type_array_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTypes_6,
  MR_ArrayPtr * DummyTypeArray_7,
  MR_Word * DummyVars_8)
{
  {
    MR_Word VarsTypes_9;
    MR_Integer MaxVarNum_10;
    MR_ArrayPtr DummyTypeArray0_11;
    MR_Integer Var_14;
    MR_Box conv1_MaxVarNum_10;
    MR_ArrayPtr conv2_DummyTypeArray0_11;

    hlds__vartypes__vartypes_to_sorted_assoc_list_2_p_0(VarTypes_6, &VarsTypes_9);
    mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__live_vars_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__live_vars_scalar_common_2[2]), VarsTypes_9, ((MR_Box) ((MR_Integer) 0)), &conv1_MaxVarNum_10);
    MaxVarNum_10 = ((MR_Integer) (conv1_MaxVarNum_10));
    Var_14 = (MR_Integer) ((MR_Unsigned) MaxVarNum_10 + (MR_Unsigned) 1);
    mercury__array__init_3_p_0((MR_Word) (&check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0), Var_14, ((MR_Box) ((MR_Integer) 1)), &conv2_DummyTypeArray0_11);
    DummyTypeArray0_11 = (MR_ArrayPtr) (conv2_DummyTypeArray0_11);
    ll_backend__live_vars__set_dummy_array_elements_6_p_0(ModuleInfo_5, VarsTypes_9, DummyTypeArray0_11, DummyTypeArray_7, (MR_Word) ((MR_Unsigned) 0U), DummyVars_8);
  }
}

static void MR_CALL 
ll_backend__live_vars__set_dummy_array_elements_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_ArrayPtr STATE_VARIABLE_DummyTypeArray_0_3,
  MR_ArrayPtr * STATE_VARIABLE_DummyTypeArray_4,
  MR_Word STATE_VARIABLE_DummyVars_0_5,
  MR_Word * STATE_VARIABLE_DummyVars_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_DummyVars_6 = STATE_VARIABLE_DummyVars_0_5;
      *STATE_VARIABLE_DummyTypeArray_4 = STATE_VARIABLE_DummyTypeArray_0_3;
    }
    else
    {
      MR_Word VarType_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word VarsTypes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarType_15, (MR_Integer) 0))));
      MR_Word Type_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarType_15, (MR_Integer) 1))));
      MR_Word IsDummyType_21;
      MR_ArrayPtr STATE_VARIABLE_DummyTypeArray_27_27;
      MR_Word STATE_VARIABLE_DummyVars_28_28;
      MR_Word next_value_of_HeadVar__2_2;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_DummyTypeArray_0_3;
      MR_Word next_value_of_STATE_VARIABLE_DummyVars_0_5;

      IsDummyType_21 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_1, Type_20);
      switch (IsDummyType_21) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Var_26;
            MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&ll_backend__live_vars_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 5))));
            MR_Box conv1_Var_26;
            MR_ArrayPtr conv2_STATE_VARIABLE_DummyTypeArray_27_27;

            conv1_Var_26 = func_0(((MR_Box) ((MR_Word) (&ll_backend__live_vars_scalar_common_2[1]))), ((MR_Box) (Var_19)));
            Var_26 = ((MR_Integer) (conv1_Var_26));
            mercury__array__set_4_p_0((MR_Word) (&check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0), Var_26, ((MR_Box) (IsDummyType_21)), (MR_ArrayPtr) (STATE_VARIABLE_DummyTypeArray_0_3), &conv2_STATE_VARIABLE_DummyTypeArray_27_27);
            STATE_VARIABLE_DummyTypeArray_27_27 = (MR_ArrayPtr) (conv2_STATE_VARIABLE_DummyTypeArray_27_27);
            {
              STATE_VARIABLE_DummyVars_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_DummyVars_28_28, 0) = ((MR_Box) (Var_19));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_DummyVars_28_28, 1) = ((MR_Box) (STATE_VARIABLE_DummyVars_0_5));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_DummyTypeArray_27_27 = STATE_VARIABLE_DummyTypeArray_0_3;
            STATE_VARIABLE_DummyVars_28_28 = STATE_VARIABLE_DummyVars_0_5;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = VarsTypes_16;
      next_value_of_STATE_VARIABLE_DummyTypeArray_0_3 = STATE_VARIABLE_DummyTypeArray_27_27;
      next_value_of_STATE_VARIABLE_DummyVars_0_5 = STATE_VARIABLE_DummyVars_28_28;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_DummyTypeArray_0_3 = next_value_of_STATE_VARIABLE_DummyTypeArray_0_3;
      STATE_VARIABLE_DummyVars_0_5 = next_value_of_STATE_VARIABLE_DummyVars_0_5;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__live_vars____Unify____alloc_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__live_vars____Unify____alloc_data_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__live_vars____Compare____alloc_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__live_vars____Compare____alloc_data_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__live_vars____Unify____parallel_stackvars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__live_vars____Unify____parallel_stackvars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__live_vars____Compare____parallel_stackvars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__live_vars____Compare____parallel_stackvars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module ll_backend.live_vars.
