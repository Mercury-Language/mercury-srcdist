/*
** Automatically generated from `try_expand.m'
** by the Mercury compiler,
** version rotd-2025-08-29
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


// :- module check_hlds.try_expand.
// :- implementation.

/*
INIT mercury__check_hlds__try_expand__init
ENDINIT
*/

#include "check_hlds.try_expand.mih"


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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.det_analysis.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.modes.mih"
#include "check_hlds.polymorphism_info.mih"
#include "check_hlds.polymorphism_type_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_util.mih"
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
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s {
  MR_Word check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7;
  MR_bool check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded;
  jmp_buf check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__commit_0;
  MR_Word check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9;
  MR_Box check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__conv0_ArgInst_9;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__try_expand__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__try_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__try_expand__check_hlds__try_expand__field_types_trys_info_0_0[4];

static const MR_ConstString check_hlds__try_expand__check_hlds__try_expand__field_names_trys_info_0_0[4];

static const MR_DuArgLocn check_hlds__try_expand__check_hlds__try_expand__field_locns_trys_info_0_0[4];

static const MR_DuFunctorDesc check_hlds__try_expand__check_hlds__try_expand__du_functor_desc_trys_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__try_expand__check_hlds__try_expand__du_stag_ordered_trys_info_0_0[1];

static const MR_DuPtagLayout check_hlds__try_expand__check_hlds__try_expand__du_ptag_ordered_trys_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__try_expand__check_hlds__try_expand__du_name_ordered_trys_info_0[1];

static const MR_Integer check_hlds__try_expand__check_hlds__try_expand__functor_number_map_trys_info_0[1];

static void MR_CALL 
check_hlds__try_expand____Compare____trys_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__try_expand____Unify____trys_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_proc_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * STATE_VARIABLE_ModuleInfo_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(
  MR_Word InstMap_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_97,
  MR_Word * STATE_VARIABLE_Info_98);

static MR_bool MR_CALL 
check_hlds__try_expand__expand_try_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__try_expand__expand_try_goal_5_p_0(
  MR_Word InstMap_6,
  MR_Word TryGoal_7,
  MR_Word * FinalGoal_8,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33);

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_if_then_else_9_p_0(
  MR_Word InstMap0_10,
  MR_Word Cond0_11,
  MR_Word * Cond_12,
  MR_Word Then0_13,
  MR_Word * Then_14,
  MR_Word Else0_15,
  MR_Word * Else_16,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_cases_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_conj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
check_hlds__try_expand__extract_intermediate_goal_parts_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ResultVar_9,
  MR_Word IntermediateGoal_10,
  MR_Word * Goal_11,
  MR_Word * Then_12,
  MR_Word * MaybeElse_13,
  MR_Word * ExcpHandling_14);

static void MR_CALL 
check_hlds__try_expand__lookup_case_goal_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ConsId_2,
  MR_Word * Goal_3);

static MR_bool MR_CALL 
check_hlds__try_expand__extract_from_succeeded_goal_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word SucceededGoal_7,
  MR_Word * Goal_8,
  MR_Word * Then_9,
  MR_Word * MaybeElse_10);

static void MR_CALL 
check_hlds__try_expand__implement_try_goal_15_p_0(
  MR_Word MaybeIO_16,
  MR_Word ResultVar_17,
  MR_Word Goal1_18,
  MR_Word Then1_19,
  MR_Word MaybeElse1_20,
  MR_Word ExcpHandling1_21,
  MR_Word InstMap_22,
  MR_Word GoalOutputVarsSet_23,
  MR_Word * FinalGoal_24,
  MR_Word STATE_VARIABLE_PredInfo_0_67,
  MR_Word * STATE_VARIABLE_PredInfo_68,
  MR_Word STATE_VARIABLE_ProcInfo_0_69,
  MR_Word * STATE_VARIABLE_ProcInfo_70,
  MR_Word STATE_VARIABLE_ModuleInfo_0_71,
  MR_Word * STATE_VARIABLE_ModuleInfo_72);

static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0(
  MR_Word TmpTupleVar_5,
  MR_Word TupleVar_6,
  MR_Word TupleArgInsts_7,
  MR_Word * CastOrUnify_8);

static void MR_CALL 
check_hlds__try_expand__make_try_call_14_p_0(
  MR_String PredName_15,
  MR_Word LambdaVar_16,
  MR_Word ResultVar_17,
  MR_Word ExtraArgs_18,
  MR_Word OutputTupleType_19,
  MR_Word GoalPurity_20,
  MR_Word Context_21,
  MR_Word * OverallGoal_22,
  MR_Word STATE_VARIABLE_PredInfo_0_34,
  MR_Word * STATE_VARIABLE_PredInfo_35,
  MR_Word STATE_VARIABLE_ProcInfo_0_36,
  MR_Word * STATE_VARIABLE_ProcInfo_37,
  MR_Word STATE_VARIABLE_ModuleInfo_0_38,
  MR_Word * STATE_VARIABLE_ModuleInfo_39);

static void MR_CALL 
check_hlds__try_expand__make_try_lambda_8_p_0(
  MR_Word Body0_9,
  MR_Word OutputVarsSet_10,
  MR_Word OutputTupleType_11,
  MR_Word MaybeIO_12,
  MR_Word * LambdaVar_13,
  MR_Word * AssignLambdaVarGoal_14,
  MR_Word STATE_VARIABLE_ProcInfo_0_39,
  MR_Word * STATE_VARIABLE_ProcInfo_40);

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_disj_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_disj_5_p_0(
  MR_Word InstMap0_6,
  MR_Word Goals0_7,
  MR_Word * Goals_8,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_pred_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_module_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
check_hlds__try_expand____Unify____trys_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__try_expand____Compare____trys_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__try_expand_scalar_common_1[3][2];

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_2[1][3];

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_3[2][1];

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_4[1][9];

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_5[1][10];

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_6[1][8];

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_8[1][7];


struct check_hlds__try_expand__vector_common_type_7_0_s {
  const MR_Word check_hlds__try_expand__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct check_hlds__try_expand__vector_common_type_7_0_s check_hlds__try_expand_vector_common_7[8];



static /* final */ const MR_Box check_hlds__try_expand_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&check_hlds__try_expand_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_3[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "try_expand")) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 0)) },
};

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_4[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__try_expand__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__try_expand__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_5[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__try_expand__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__try_expand__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_6[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__try_expand__check_hlds__try_expand__type_ctor_info_trys_info_0)),
    ((MR_Box) (&check_hlds__try_expand__check_hlds__try_expand__type_ctor_info_trys_info_0))
  },
};

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_8[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&check_hlds__try_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};


static /* final */ const struct check_hlds__try_expand__vector_common_type_7_0_s check_hlds__try_expand_vector_common_7[8] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 4 },
  /* row   3 */   { (MR_Integer) 5 },
  /* row   4 */   { (MR_Integer) 4 },
  /* row   5 */   { (MR_Integer) 5 },
  /* row   6 */   { (MR_Integer) 0 },
  /* row   7 */   { (MR_Integer) 1 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__try_expand__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__try_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__try_expand__check_hlds__try_expand__field_types_trys_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString check_hlds__try_expand__check_hlds__try_expand__field_names_trys_info_0_0[4] = {
  (MR_String) "ti_module_info",
  (MR_String) "ti_pred_info",
  (MR_String) "ti_proc_info",
  (MR_String) "ti_changed"
};

static const MR_DuArgLocn check_hlds__try_expand__check_hlds__try_expand__field_locns_trys_info_0_0[4] = {
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
  }
};

static const MR_DuFunctorDesc check_hlds__try_expand__check_hlds__try_expand__du_functor_desc_trys_info_0_0 = {
  (MR_String) "trys_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__try_expand__check_hlds__try_expand__field_types_trys_info_0_0,
  check_hlds__try_expand__check_hlds__try_expand__field_names_trys_info_0_0,
  check_hlds__try_expand__check_hlds__try_expand__field_locns_trys_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__try_expand__check_hlds__try_expand__du_stag_ordered_trys_info_0_0[1] = { &check_hlds__try_expand__check_hlds__try_expand__du_functor_desc_trys_info_0_0 };

static const MR_DuPtagLayout check_hlds__try_expand__check_hlds__try_expand__du_ptag_ordered_trys_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__try_expand__check_hlds__try_expand__du_stag_ordered_trys_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__try_expand__check_hlds__try_expand__du_name_ordered_trys_info_0[1] = { &check_hlds__try_expand__check_hlds__try_expand__du_functor_desc_trys_info_0_0 };

static const MR_Integer check_hlds__try_expand__check_hlds__try_expand__functor_number_map_trys_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__try_expand__check_hlds__try_expand__type_ctor_info_trys_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__try_expand____Unify____trys_info_0_0_10001)),
  ((MR_Box) (check_hlds__try_expand____Compare____trys_info_0_0_10001)),
  (MR_String) "check_hlds.try_expand",
  (MR_String) "trys_info",
  { check_hlds__try_expand__check_hlds__try_expand__du_name_ordered_trys_info_0 },
  { check_hlds__try_expand__check_hlds__try_expand__du_ptag_ordered_trys_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__try_expand__check_hlds__try_expand__functor_number_map_trys_info_0,

};

static void MR_CALL 
check_hlds__try_expand____Compare____trys_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 3))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_pred____Compare____pred_info_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        hlds__hlds_pred____Compare____proc_info_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Integer Var_21 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_22 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_21 < Var_22);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_21 > Var_22);
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

static MR_bool MR_CALL 
check_hlds__try_expand____Unify____trys_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 3))) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 1);

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
          succeeded = (ArgX4_9 == ArgY4_10);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_proc_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * STATE_VARIABLE_ModuleInfo_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  MR_Word Goal0_15;
  MR_Word InitInstMap_16;
  MR_Word Info0_17;
  MR_Word Goal_18;
  MR_Word Info_19;
  MR_Word Changed_20;
  MR_Word STATE_VARIABLE_PredInfo_1_25;
  MR_Word STATE_VARIABLE_ProcInfo_1_26;
  MR_Word STATE_VARIABLE_ModuleInfo_1_28;
  MR_Word STATE_VARIABLE_PredInfo_2_29;
  MR_Word STATE_VARIABLE_ProcInfo_2_30;

  hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_21, PredId_9, ProcId_10, &STATE_VARIABLE_PredInfo_1_25, &STATE_VARIABLE_ProcInfo_1_26);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_1_26, &Goal0_15);
  hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_21, STATE_VARIABLE_ProcInfo_1_26, &InitInstMap_16);
  {
    Info0_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info0_17, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_21));
    MR_hl_field(0, Info0_17, 1) = ((MR_Box) (STATE_VARIABLE_PredInfo_1_25));
    MR_hl_field(0, Info0_17, 2) = ((MR_Box) (STATE_VARIABLE_ProcInfo_1_26));
    MR_hl_field(0, Info0_17, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(InitInstMap_16, Goal0_15, &Goal_18, Info0_17, &Info_19);
  STATE_VARIABLE_ModuleInfo_1_28 = ((MR_Word) ((MR_hl_field(0, Info_19, 0))));
  STATE_VARIABLE_PredInfo_2_29 = ((MR_Word) ((MR_hl_field(0, Info_19, 1))));
  STATE_VARIABLE_ProcInfo_2_30 = ((MR_Word) ((MR_hl_field(0, Info_19, 2))));
  Changed_20 = ((MR_Unsigned) ((MR_hl_field(0, Info_19, 3))) & (MR_Integer) 1);
  switch (Changed_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_ModuleInfo_22 = STATE_VARIABLE_ModuleInfo_1_28;
        *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_ModuleInfo_2_31;
        MR_Word ProcModeErrorMap0_32;
        MR_Word ModeSpecs_35;
        MR_Word Globals_36;
        MR_Word HasModeErrors_37;
        MR_Word STATE_VARIABLE_ProcInfo_1_42;
        MR_Word STATE_VARIABLE_ProcInfo_2_44;
        MR_Word STATE_VARIABLE_ModuleInfo_1_45;
        MR_Word STATE_VARIABLE_ModuleInfo_2_46;
        MR_Word _ProcModeErrorMap0_33;
        MR_Word _Changed_34;

        hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_18, STATE_VARIABLE_ProcInfo_2_30, &STATE_VARIABLE_ProcInfo_1_42);
        hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_1_42, &STATE_VARIABLE_ProcInfo_2_44);
        hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_9, ProcId_10, STATE_VARIABLE_PredInfo_2_29, STATE_VARIABLE_ProcInfo_2_44, STATE_VARIABLE_ModuleInfo_1_28, &STATE_VARIABLE_ModuleInfo_1_45);
        mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__try_expand_scalar_common_2[0]), &ProcModeErrorMap0_32);
        check_hlds__modes__modecheck_proc_8_p_0(PredId_9, ProcId_10, STATE_VARIABLE_ModuleInfo_1_45, &STATE_VARIABLE_ModuleInfo_2_46, ProcModeErrorMap0_32, &_ProcModeErrorMap0_33, &_Changed_34, &ModeSpecs_35);
        hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_2_46, &Globals_36);
        HasModeErrors_37 = parse_tree__error_util__contains_errors_2_f_0(Globals_36, ModeSpecs_35);
        switch (HasModeErrors_37) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word _DetismSpecs_41;

              check_hlds__det_analysis__determinism_check_proc_6_p_0(ProgressStream_8, PredId_9, ProcId_10, &_DetismSpecs_41, STATE_VARIABLE_ModuleInfo_2_46, &STATE_VARIABLE_ModuleInfo_2_31);
              *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ProcTable0_38;
              MR_Word ProcTable_39;
              MR_Word UpdatedPredInfo_40;

              *STATE_VARIABLE_Specs_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ModeSpecs_35, STATE_VARIABLE_Specs_0_23);
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_2_29, &ProcTable0_38);
              mercury__map__delete_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_10)), ProcTable0_38, &ProcTable_39);
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_39, STATE_VARIABLE_PredInfo_2_29, &UpdatedPredInfo_40);
              hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_9, UpdatedPredInfo_40, STATE_VARIABLE_ModuleInfo_2_46, &STATE_VARIABLE_ModuleInfo_2_31);
            }
            break;
        }
        hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(STATE_VARIABLE_ModuleInfo_2_31, STATE_VARIABLE_ModuleInfo_22);
      }
      break;
  }
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(
  MR_Word InstMap_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_97,
  MR_Word * STATE_VARIABLE_Info_98)
{
  MR_Word GoalExpr0_10 = ((MR_Word) ((MR_hl_field(0, Goal0_7, 0))));
  MR_Word GoalInfo0_11 = ((MR_Word) ((MR_hl_field(0, Goal0_7, 1))));

  switch (MR_tag((MR_Word) GoalExpr0_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_23 = (MR_Word) ((MR_Word) (GoalExpr0_10));
        MR_Word SubGoal_24;
        MR_Word GoalExpr_118;

        check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(InstMap_6, SubGoal0_23, &SubGoal_24, STATE_VARIABLE_Info_0_97, STATE_VARIABLE_Info_98);
        GoalExpr_118 = (MR_Word) ((MR_Word) (SubGoal_24));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_118));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *Goal_8 = Goal0_7;
        *STATE_VARIABLE_Info_98 = STATE_VARIABLE_Info_0_97;
      }
      break;
    case (MR_Integer) 2:
      {
        *Goal_8 = Goal0_7;
        *STATE_VARIABLE_Info_98 = STATE_VARIABLE_Info_0_97;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_10, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            *Goal_8 = Goal0_7;
            *STATE_VARIABLE_Info_98 = STATE_VARIABLE_Info_0_97;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_17 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_10, 1))) & (MR_Integer) 1);
            MR_Word Conjuncts0_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 2))));
            MR_Word Conjuncts_19;
            MR_Word GoalExpr_20;

            check_hlds__try_expand__expand_try_goals_in_conj_5_p_0(InstMap_6, Conjuncts0_18, &Conjuncts_19, STATE_VARIABLE_Info_0_97, STATE_VARIABLE_Info_98);
            {
              GoalExpr_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_20, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_20, 1) = (MR_Box) ((MR_Unsigned) (ConjType_17));
              MR_hl_field(3, GoalExpr_20, 2) = ((MR_Box) (Conjuncts_19));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_20));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disjuncts0_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word Disjuncts_22;
            MR_Word GoalExpr_117;

            check_hlds__try_expand__expand_try_goals_in_disj_5_p_0(InstMap_6, Disjuncts0_21, &Disjuncts_22, STATE_VARIABLE_Info_0_97, STATE_VARIABLE_Info_98);
            {
              GoalExpr_117 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_117, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_117, 1) = ((MR_Box) (Disjuncts_22));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_117));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word CanFail_26 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_10, 2))) & (MR_Integer) 1);
            MR_Word Cases0_27 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 3))));
            MR_Word Cases_28;
            MR_Word GoalExpr_119;

            check_hlds__try_expand__expand_try_goals_in_cases_5_p_0(InstMap_6, Cases0_27, &Cases_28, STATE_VARIABLE_Info_0_97, STATE_VARIABLE_Info_98);
            {
              GoalExpr_119 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_119, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_119, 1) = ((MR_Box) (Var_25));
              MR_hl_field(3, GoalExpr_119, 2) = (MR_Box) ((MR_Unsigned) (CanFail_26));
              MR_hl_field(3, GoalExpr_119, 3) = ((MR_Box) (Cases_28));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_119));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_29 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word InnerGoal0_30 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 2))));

            switch (MR_tag((MR_Word) Reason_29)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word InnerGoal_129;
                  MR_Word GoalExpr_130;

                  check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(InstMap_6, InnerGoal0_30, &InnerGoal_129, STATE_VARIABLE_Info_0_97, STATE_VARIABLE_Info_98);
                  {
                    GoalExpr_130 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_130, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, GoalExpr_130, 1) = ((MR_Box) (Reason_29));
                    MR_hl_field(3, GoalExpr_130, 2) = ((MR_Box) (InnerGoal_129));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    *Goal_8 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_130));
                    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word InnerGoal_127;
                  MR_Word GoalExpr_128;

                  check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(InstMap_6, InnerGoal0_30, &InnerGoal_127, STATE_VARIABLE_Info_0_97, STATE_VARIABLE_Info_98);
                  {
                    GoalExpr_128 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_128, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, GoalExpr_128, 1) = ((MR_Box) (Reason_29));
                    MR_hl_field(3, GoalExpr_128, 2) = ((MR_Box) (InnerGoal_127));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    *Goal_8 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_128));
                    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word InnerGoal_141;
                  MR_Word GoalExpr_142;

                  check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(InstMap_6, InnerGoal0_30, &InnerGoal_141, STATE_VARIABLE_Info_0_97, STATE_VARIABLE_Info_98);
                  {
                    GoalExpr_142 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_142, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, GoalExpr_142, 1) = ((MR_Box) (Reason_29));
                    MR_hl_field(3, GoalExpr_142, 2) = ((MR_Box) (InnerGoal_141));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    *Goal_8 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_142));
                    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason_29, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word InnerGoal_139;
                      MR_Word GoalExpr_140;

                      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(InstMap_6, InnerGoal0_30, &InnerGoal_139, STATE_VARIABLE_Info_0_97, STATE_VARIABLE_Info_98);
                      {
                        GoalExpr_140 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_140, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, GoalExpr_140, 1) = ((MR_Box) (Reason_29));
                        MR_hl_field(3, GoalExpr_140, 2) = ((MR_Box) (InnerGoal_139));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Goal_8 = base;
                        MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_140));
                        MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word InnerGoal_145;
                      MR_Word GoalExpr_146;

                      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(InstMap_6, InnerGoal0_30, &InnerGoal_145, STATE_VARIABLE_Info_0_97, STATE_VARIABLE_Info_98);
                      {
                        GoalExpr_146 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_146, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, GoalExpr_146, 1) = ((MR_Box) (Reason_29));
                        MR_hl_field(3, GoalExpr_146, 2) = ((MR_Box) (InnerGoal_145));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Goal_8 = base;
                        MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_146));
                        MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word InnerGoal_143;
                      MR_Word GoalExpr_144;

                      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(InstMap_6, InnerGoal0_30, &InnerGoal_143, STATE_VARIABLE_Info_0_97, STATE_VARIABLE_Info_98);
                      {
                        GoalExpr_144 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_144, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, GoalExpr_144, 1) = ((MR_Box) (Reason_29));
                        MR_hl_field(3, GoalExpr_144, 2) = ((MR_Box) (InnerGoal_143));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Goal_8 = base;
                        MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_144));
                        MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word InnerGoal_147;
                      MR_Word GoalExpr_148;

                      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(InstMap_6, InnerGoal0_30, &InnerGoal_147, STATE_VARIABLE_Info_0_97, STATE_VARIABLE_Info_98);
                      {
                        GoalExpr_148 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_148, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, GoalExpr_148, 1) = ((MR_Box) (Reason_29));
                        MR_hl_field(3, GoalExpr_148, 2) = ((MR_Box) (InnerGoal_147));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Goal_8 = base;
                        MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_148));
                        MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
                      }
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word InnerGoal_125;
                      MR_Word GoalExpr_126;

                      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(InstMap_6, InnerGoal0_30, &InnerGoal_125, STATE_VARIABLE_Info_0_97, STATE_VARIABLE_Info_98);
                      {
                        GoalExpr_126 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_126, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, GoalExpr_126, 1) = ((MR_Box) (Reason_29));
                        MR_hl_field(3, GoalExpr_126, 2) = ((MR_Box) (InnerGoal_125));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Goal_8 = base;
                        MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_126));
                        MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
                      }
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word InnerGoal_55;
                      MR_Word GoalExpr_120;

                      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(InstMap_6, InnerGoal0_30, &InnerGoal_55, STATE_VARIABLE_Info_0_97, STATE_VARIABLE_Info_98);
                      {
                        GoalExpr_120 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_120, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, GoalExpr_120, 1) = ((MR_Box) (Reason_29));
                        MR_hl_field(3, GoalExpr_120, 2) = ((MR_Box) (InnerGoal_55));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Goal_8 = base;
                        MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_120));
                        MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
                      }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word Var_151 = ((MR_Unsigned) ((MR_hl_field(3, Reason_29, 2))) & (MR_Integer) 3);

                      switch (Var_151) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            *Goal_8 = Goal0_7;
                            *STATE_VARIABLE_Info_98 = STATE_VARIABLE_Info_0_97;
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Word InnerGoal_131;
                            MR_Word GoalExpr_132;

                            check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(InstMap_6, InnerGoal0_30, &InnerGoal_131, STATE_VARIABLE_Info_0_97, STATE_VARIABLE_Info_98);
                            {
                              GoalExpr_132 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, GoalExpr_132, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                              MR_hl_field(3, GoalExpr_132, 1) = ((MR_Box) (Reason_29));
                              MR_hl_field(3, GoalExpr_132, 2) = ((MR_Box) (InnerGoal_131));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              *Goal_8 = base;
                              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_132));
                              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
                            }
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.try_expand.expand_try_goals_in_goal\'/5", (MR_String) "from_ground_term_initial");
                            return;
                          }
                          break;
                        case (MR_Integer) 3:
                          {
                            MR_Word InnerGoal_133;
                            MR_Word GoalExpr_134;

                            check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(InstMap_6, InnerGoal0_30, &InnerGoal_133, STATE_VARIABLE_Info_0_97, STATE_VARIABLE_Info_98);
                            {
                              GoalExpr_134 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, GoalExpr_134, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                              MR_hl_field(3, GoalExpr_134, 1) = ((MR_Box) (Reason_29));
                              MR_hl_field(3, GoalExpr_134, 2) = ((MR_Box) (InnerGoal_133));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              *Goal_8 = base;
                              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_134));
                              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
                            }
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word InnerGoal_149;
                      MR_Word GoalExpr_150;

                      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(InstMap_6, InnerGoal0_30, &InnerGoal_149, STATE_VARIABLE_Info_0_97, STATE_VARIABLE_Info_98);
                      {
                        GoalExpr_150 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_150, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, GoalExpr_150, 1) = ((MR_Box) (Reason_29));
                        MR_hl_field(3, GoalExpr_150, 2) = ((MR_Box) (InnerGoal_149));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Goal_8 = base;
                        MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_150));
                        MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
                      }
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      MR_Word InnerGoal_137;
                      MR_Word GoalExpr_138;

                      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(InstMap_6, InnerGoal0_30, &InnerGoal_137, STATE_VARIABLE_Info_0_97, STATE_VARIABLE_Info_98);
                      {
                        GoalExpr_138 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_138, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, GoalExpr_138, 1) = ((MR_Box) (Reason_29));
                        MR_hl_field(3, GoalExpr_138, 2) = ((MR_Box) (InnerGoal_137));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Goal_8 = base;
                        MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_138));
                        MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
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
            MR_Word Vars_57 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));
            MR_Word Cond0_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 2))));
            MR_Word Then0_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 3))));
            MR_Word Else0_60 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 4))));
            MR_Word Cond_61;
            MR_Word Then_62;
            MR_Word Else_63;
            MR_Word GoalExpr_123;

            check_hlds__try_expand__expand_try_goals_in_if_then_else_9_p_0(InstMap_6, Cond0_58, &Cond_61, Then0_59, &Then_62, Else0_60, &Else_63, STATE_VARIABLE_Info_0_97, STATE_VARIABLE_Info_98);
            {
              GoalExpr_123 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_123, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_123, 1) = ((MR_Box) (Vars_57));
              MR_hl_field(3, GoalExpr_123, 2) = ((MR_Box) (Cond_61));
              MR_hl_field(3, GoalExpr_123, 3) = ((MR_Box) (Then_62));
              MR_hl_field(3, GoalExpr_123, 4) = ((MR_Box) (Else_63));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_123));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_82 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_10, 1))));

            switch (MR_tag((MR_Word) ShortHand0_82)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.try_expand.expand_try_goals_in_goal\'/5", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word AtomicGoalType_86 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_82, 0))) & (MR_Integer) 3);
                  MR_Word Outer_87 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, 1))));
                  MR_Word Inner_88 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, 2))));
                  MR_Word MaybeOutputVars_89 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, 3))));
                  MR_Word MainGoal0_90 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, 4))));
                  MR_Word OrElseGoals0_91 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, 5))));
                  MR_Word OrElseInners_92 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, 6))));
                  MR_Word MainGoal_93;
                  MR_Word OrElseGoals_94;
                  MR_Word STATE_VARIABLE_Info_8_112;
                  MR_Word Var_114;
                  MR_Word GoalExpr_124;

                  check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(InstMap_6, MainGoal0_90, &MainGoal_93, STATE_VARIABLE_Info_0_97, &STATE_VARIABLE_Info_8_112);
                  check_hlds__try_expand__expand_try_goals_in_disj_5_p_0(InstMap_6, OrElseGoals0_91, &OrElseGoals_94, STATE_VARIABLE_Info_8_112, STATE_VARIABLE_Info_98);
                  {
                    GoalExpr_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, GoalExpr_124, 0) = (MR_Box) ((MR_Unsigned) (AtomicGoalType_86));
                    MR_hl_field(1, GoalExpr_124, 1) = ((MR_Box) (Outer_87));
                    MR_hl_field(1, GoalExpr_124, 2) = ((MR_Box) (Inner_88));
                    MR_hl_field(1, GoalExpr_124, 3) = ((MR_Box) (MaybeOutputVars_89));
                    MR_hl_field(1, GoalExpr_124, 4) = ((MR_Box) (MainGoal_93));
                    MR_hl_field(1, GoalExpr_124, 5) = ((MR_Box) (OrElseGoals_94));
                    MR_hl_field(1, GoalExpr_124, 6) = ((MR_Box) (OrElseInners_92));
                  }
                  {
                    Var_114 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_114, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(3, Var_114, 1) = ((MR_Box) (GoalExpr_124));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    *Goal_8 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (Var_114));
                    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_11));
                  }
                }
                break;
              case (MR_Integer) 2:
                check_hlds__try_expand__expand_try_goal_5_p_0(InstMap_6, ShortHand0_82, Goal_8, STATE_VARIABLE_Info_0_97, STATE_VARIABLE_Info_98);
                break;
            }
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
check_hlds__try_expand__expand_try_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__instmap__var_is_bound_in_instmap_delta_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goal_5_p_0(
  MR_Word InstMap_6,
  MR_Word TryGoal_7,
  MR_Word * FinalGoal_8,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33)
{
  MR_bool succeeded;
  MR_Word MaybeIO_10 = ((MR_Word) ((MR_hl_field(2, TryGoal_7, 0))));
  MR_Word ResultVar_11 = ((MR_Word) ((MR_hl_field(2, TryGoal_7, 1))));
  MR_Word IntermediateGoal_12 = ((MR_Word) ((MR_hl_field(2, TryGoal_7, 2))));
  MR_Word Goal0_13;
  MR_Word Then0_14;
  MR_Word MaybeElse0_15;
  MR_Word ExcpHandling0_16;
  MR_Word Goal1_17;
  MR_Word InstMapAfterGoal_18;
  MR_Word Then1_19;
  MR_Word MaybeElse1_22;
  MR_Word ExcpHandling1_23;
  MR_Word GoalOutputVarsSet0_24;
  MR_Word GoalOutputVarsSet_27;
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_32, 0))));
  MR_Word STATE_VARIABLE_Info_1_35;
  MR_Word STATE_VARIABLE_Info_2_36;
  MR_Word STATE_VARIABLE_Info_3_37;
  MR_Word STATE_VARIABLE_Info_4_38;
  MR_Word Var_39;
  MR_Word STATE_VARIABLE_ModuleInfo_1_41;
  MR_Word STATE_VARIABLE_PredInfo_1_42;
  MR_Word STATE_VARIABLE_ProcInfo_1_43;
  MR_Word STATE_VARIABLE_PredInfo_2_44;
  MR_Word STATE_VARIABLE_ProcInfo_2_45;
  MR_Word STATE_VARIABLE_ModuleInfo_2_46;
  MR_Word GoalInfo_57;
  MR_Word NonLocals_58;
  MR_Word InstMapDelta_59;
  MR_Word Var_60;

  check_hlds__try_expand__extract_intermediate_goal_parts_7_p_0(Var_34, ResultVar_11, IntermediateGoal_12, &Goal0_13, &Then0_14, &MaybeElse0_15, &ExcpHandling0_16);
  check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(InstMap_6, Goal0_13, &Goal1_17, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_1_35);
  hlds__goal_util__apply_goal_instmap_delta_3_p_0(Goal0_13, InstMap_6, &InstMapAfterGoal_18);
  check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(InstMapAfterGoal_18, Then0_14, &Then1_19, STATE_VARIABLE_Info_1_35, &STATE_VARIABLE_Info_2_36);
  if ((MaybeElse0_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeElse1_22 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Info_3_37 = STATE_VARIABLE_Info_2_36;
  }
  else
  {
    MR_Word Else0_20 = ((MR_Word) ((MR_hl_field(1, MaybeElse0_15, 0))));
    MR_Word Else1_21;

    check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(InstMap_6, Else0_20, &Else1_21, STATE_VARIABLE_Info_2_36, &STATE_VARIABLE_Info_3_37);
    {
      MaybeElse1_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeElse1_22, 0) = ((MR_Box) (Else1_21));
    }
  }
  check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(InstMap_6, ExcpHandling0_16, &ExcpHandling1_23, STATE_VARIABLE_Info_3_37, &STATE_VARIABLE_Info_4_38);
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_4_38, 0))));
  GoalInfo_57 = ((MR_Word) ((MR_hl_field(0, Goal0_13, 1))));
  NonLocals_58 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_57);
  InstMapDelta_59 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_57);
  {
    Var_60 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_60, 0) = ((MR_Box) (&check_hlds__try_expand_scalar_common_8[0]));
    MR_hl_field(0, Var_60, 1) = ((MR_Box) (check_hlds__try_expand__expand_try_goal_5_p_0_1));
    MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_60, 3) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_60, 4) = ((MR_Box) (InstMap_6));
    MR_hl_field(0, Var_60, 5) = ((MR_Box) (InstMapDelta_59));
  }
  parse_tree__set_of_var__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_60, NonLocals_58, &GoalOutputVarsSet0_24);
  if ((MaybeIO_10 == (MR_Word) ((MR_Unsigned) 0U)))
    GoalOutputVarsSet_27 = GoalOutputVarsSet0_24;
  else
  {
    MR_Word IOStateVarFinal_26;
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(1, MaybeIO_10, 0))));

    IOStateVarFinal_26 = ((MR_Word) ((MR_hl_field(0, Var_40, 1))));
    parse_tree__set_of_var__delete_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), IOStateVarFinal_26, GoalOutputVarsSet0_24, &GoalOutputVarsSet_27);
  }
  STATE_VARIABLE_ModuleInfo_1_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_4_38, 0))));
  STATE_VARIABLE_PredInfo_1_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_4_38, 1))));
  STATE_VARIABLE_ProcInfo_1_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_4_38, 2))));
  check_hlds__try_expand__implement_try_goal_15_p_0(MaybeIO_10, ResultVar_11, Goal1_17, Then1_19, MaybeElse1_22, ExcpHandling1_23, InstMapAfterGoal_18, GoalOutputVarsSet_27, FinalGoal_8, STATE_VARIABLE_PredInfo_1_42, &STATE_VARIABLE_PredInfo_2_44, STATE_VARIABLE_ProcInfo_1_43, &STATE_VARIABLE_ProcInfo_2_45, STATE_VARIABLE_ModuleInfo_1_41, &STATE_VARIABLE_ModuleInfo_2_46);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_33 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_2_46));
    MR_hl_field(0, base, 1) = ((MR_Box) (STATE_VARIABLE_PredInfo_2_44));
    MR_hl_field(0, base, 2) = ((MR_Box) (STATE_VARIABLE_ProcInfo_2_45));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_if_then_else_9_p_0(
  MR_Word InstMap0_10,
  MR_Word Cond0_11,
  MR_Word * Cond_12,
  MR_Word Then0_13,
  MR_Word * Then_14,
  MR_Word Else0_15,
  MR_Word * Else_16,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_Word CondInfo_19;
  MR_Word CondInstMapDelta_20;
  MR_Word InstMapAfterCond_21;
  MR_Word STATE_VARIABLE_Info_1_24;
  MR_Word STATE_VARIABLE_Info_2_25;

  check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(InstMap0_10, Cond0_11, Cond_12, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_1_24);
  CondInfo_19 = ((MR_Word) ((MR_hl_field(0, Cond0_11, 1))));
  CondInstMapDelta_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CondInfo_19);
  hlds__instmap__apply_instmap_delta_3_p_0(CondInstMapDelta_20, InstMap0_10, &InstMapAfterCond_21);
  check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(InstMapAfterCond_21, Then0_13, Then_14, STATE_VARIABLE_Info_1_24, &STATE_VARIABLE_Info_2_25);
  check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(InstMap0_10, Else0_15, Else_16, STATE_VARIABLE_Info_2_25, STATE_VARIABLE_Info_23);
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_cases_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Case0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Cases0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Case_13;
    MR_Word Cases_14;
    MR_Word MainConsId_16 = ((MR_Word) ((MR_hl_field(0, Case0_11, 0))));
    MR_Word OtherConsIds_17 = ((MR_Word) ((MR_hl_field(0, Case0_11, 1))));
    MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(0, Case0_11, 2))));
    MR_Word Goal_19;
    MR_Word STATE_VARIABLE_Info_1_22;

    check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(HeadVar__1_1, Goal0_18, &Goal_19, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_1_22);
    check_hlds__try_expand__expand_try_goals_in_cases_5_p_0(HeadVar__1_1, Cases0_12, &Cases_14, STATE_VARIABLE_Info_1_22, STATE_VARIABLE_Info_5);
    {
      Case_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_13, 0) = ((MR_Box) (MainConsId_16));
      MR_hl_field(0, Case_13, 1) = ((MR_Box) (OtherConsIds_17));
      MR_hl_field(0, Case_13, 2) = ((MR_Box) (Goal_19));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_14));
    }
  }
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_conj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Goal0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Goals0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Goal_13;
    MR_Word Goals_14;
    MR_Word GoalInfo_17;
    MR_Word InstMapDelta_18;
    MR_Word InstMap_19;
    MR_Word STATE_VARIABLE_Info_1_22;

    check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(HeadVar__1_1, Goal0_11, &Goal_13, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_1_22);
    GoalInfo_17 = ((MR_Word) ((MR_hl_field(0, Goal0_11, 1))));
    InstMapDelta_18 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_17);
    hlds__instmap__apply_instmap_delta_3_p_0(InstMapDelta_18, HeadVar__1_1, &InstMap_19);
    check_hlds__try_expand__expand_try_goals_in_conj_5_p_0(InstMap_19, Goals0_12, &Goals_14, STATE_VARIABLE_Info_1_22, STATE_VARIABLE_Info_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_14));
    }
  }
}

static void MR_CALL 
check_hlds__try_expand__extract_intermediate_goal_parts_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ResultVar_9,
  MR_Word IntermediateGoal_10,
  MR_Word * Goal_11,
  MR_Word * Then_12,
  MR_Word * MaybeElse_13,
  MR_Word * ExcpHandling_14)
{
  MR_bool succeeded;
  MR_Word GoalPrime_15;
  MR_Word ThenPrime_16;
  MR_Word MaybeElsePrime_17;
  MR_Word ExcpHandlingPrime_18;
  MR_Word TypeInfo_41_55;
  MR_Word TypeInfo_42_56;
  MR_Word Conjuncts_29;
  MR_Word MagicCall_31;
  MR_Word Switch_33;
  MR_Word Cases_40;
  MR_Word SucceededGoal_41;
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, IntermediateGoal_10, 0))));
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;

  succeeded = ((((MR_tag((MR_Word) Var_42)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_42, 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_43 = ((MR_Unsigned) ((MR_hl_field(3, Var_42, 1))) & (MR_Integer) 1);
    Conjuncts_29 = ((MR_Word) ((MR_hl_field(3, Var_42, 2))));
    succeeded = (Var_43 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (Conjuncts_29 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_44 = ((MR_Word) ((MR_hl_field(1, Conjuncts_29, 0))));
        Var_45 = ((MR_Word) ((MR_hl_field(1, Conjuncts_29, 1))));
        MagicCall_31 = ((MR_Word) ((MR_hl_field(0, Var_44, 0))));
        succeeded = (Var_45 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_46 = ((MR_Word) ((MR_hl_field(1, Var_45, 0))));
          Var_47 = ((MR_Word) ((MR_hl_field(1, Var_45, 1))));
          succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Switch_33 = ((MR_Word) ((MR_hl_field(0, Var_46, 0))));
            succeeded = ((MR_tag((MR_Word) MagicCall_31)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_48 = ((MR_Word) ((MR_hl_field(2, MagicCall_31, 2))));
              succeeded = (Var_48 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_53 = ((MR_Word) ((MR_hl_field(1, Var_48, 0))));
                Var_49 = ((MR_Word) ((MR_hl_field(1, Var_48, 1))));
                TypeInfo_41_55 = (MR_Word) (&check_hlds__try_expand_scalar_common_1[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_41_55, ((MR_Box) (ResultVar_9)), ((MR_Box) (Var_53)));
                if (succeeded)
                {
                  succeeded = (Var_49 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((((MR_tag((MR_Word) Switch_33)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Switch_33, 0)))) == (MR_Integer) 4)));
                    if (succeeded)
                    {
                      Var_54 = ((MR_Word) ((MR_hl_field(3, Switch_33, 1))));
                      Var_50 = ((MR_Unsigned) ((MR_hl_field(3, Switch_33, 2))) & (MR_Integer) 1);
                      Cases_40 = ((MR_Word) ((MR_hl_field(3, Switch_33, 3))));
                      TypeInfo_42_56 = (MR_Word) (&check_hlds__try_expand_scalar_common_1[2]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_42_56, ((MR_Box) (ResultVar_9)), ((MR_Box) (Var_54)));
                      if (succeeded)
                      {
                        succeeded = (Var_50 == (MR_Integer) 1);
                        if (succeeded)
                        {
                          Var_51 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
                          check_hlds__try_expand__lookup_case_goal_3_p_0(Cases_40, Var_51, &SucceededGoal_41);
                          succeeded = check_hlds__try_expand__extract_from_succeeded_goal_5_p_0(ModuleInfo_8, SucceededGoal_41, &GoalPrime_15, &ThenPrime_16, &MaybeElsePrime_17);
                          if (succeeded)
                          {
                            Var_52 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
                            check_hlds__try_expand__lookup_case_goal_3_p_0(Cases_40, Var_52, &ExcpHandlingPrime_18);
                            succeeded = MR_TRUE;
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
    }
  }
  if (succeeded)
  {
    *Goal_11 = GoalPrime_15;
    *Then_12 = ThenPrime_16;
    *MaybeElse_13 = MaybeElsePrime_17;
    *ExcpHandling_14 = ExcpHandlingPrime_18;
  }
  else
  {
    MR_Word GoalPrime_25;
    MR_Word ThenPrime_26;
    MR_Word MaybeElsePrime_27;
    MR_Word ExcpHandlingPrime_28;
    MR_Word TypeInfo_41_83;
    MR_Word TypeInfo_42_84;
    MR_Word ScopedGoal_20;
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, IntermediateGoal_10, 0))));
    MR_Word Conjuncts_57;
    MR_Word MagicCall_59;
    MR_Word Switch_61;
    MR_Word Cases_68;
    MR_Word SucceededGoal_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;

    succeeded = ((((MR_tag((MR_Word) Var_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_22, 0)))) == (MR_Integer) 5)));
    if (succeeded)
    {
      ScopedGoal_20 = ((MR_Word) ((MR_hl_field(3, Var_22, 2))));
      Var_70 = ((MR_Word) ((MR_hl_field(0, ScopedGoal_20, 0))));
      succeeded = ((((MR_tag((MR_Word) Var_70)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_70, 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_71 = ((MR_Unsigned) ((MR_hl_field(3, Var_70, 1))) & (MR_Integer) 1);
        Conjuncts_57 = ((MR_Word) ((MR_hl_field(3, Var_70, 2))));
        succeeded = (Var_71 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (Conjuncts_57 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_72 = ((MR_Word) ((MR_hl_field(1, Conjuncts_57, 0))));
            Var_73 = ((MR_Word) ((MR_hl_field(1, Conjuncts_57, 1))));
            MagicCall_59 = ((MR_Word) ((MR_hl_field(0, Var_72, 0))));
            succeeded = (Var_73 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_74 = ((MR_Word) ((MR_hl_field(1, Var_73, 0))));
              Var_75 = ((MR_Word) ((MR_hl_field(1, Var_73, 1))));
              succeeded = (Var_75 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Switch_61 = ((MR_Word) ((MR_hl_field(0, Var_74, 0))));
                succeeded = ((MR_tag((MR_Word) MagicCall_59)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_76 = ((MR_Word) ((MR_hl_field(2, MagicCall_59, 2))));
                  succeeded = (Var_76 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_81 = ((MR_Word) ((MR_hl_field(1, Var_76, 0))));
                    Var_77 = ((MR_Word) ((MR_hl_field(1, Var_76, 1))));
                    TypeInfo_41_83 = (MR_Word) (&check_hlds__try_expand_scalar_common_1[2]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_41_83, ((MR_Box) (ResultVar_9)), ((MR_Box) (Var_81)));
                    if (succeeded)
                    {
                      succeeded = (Var_77 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Switch_61)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Switch_61, 0)))) == (MR_Integer) 4)));
                        if (succeeded)
                        {
                          Var_82 = ((MR_Word) ((MR_hl_field(3, Switch_61, 1))));
                          Var_78 = ((MR_Unsigned) ((MR_hl_field(3, Switch_61, 2))) & (MR_Integer) 1);
                          Cases_68 = ((MR_Word) ((MR_hl_field(3, Switch_61, 3))));
                          TypeInfo_42_84 = (MR_Word) (&check_hlds__try_expand_scalar_common_1[2]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_42_84, ((MR_Box) (ResultVar_9)), ((MR_Box) (Var_82)));
                          if (succeeded)
                          {
                            succeeded = (Var_78 == (MR_Integer) 1);
                            if (succeeded)
                            {
                              Var_79 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
                              check_hlds__try_expand__lookup_case_goal_3_p_0(Cases_68, Var_79, &SucceededGoal_69);
                              succeeded = check_hlds__try_expand__extract_from_succeeded_goal_5_p_0(ModuleInfo_8, SucceededGoal_69, &GoalPrime_25, &ThenPrime_26, &MaybeElsePrime_27);
                              if (succeeded)
                              {
                                Var_80 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
                                check_hlds__try_expand__lookup_case_goal_3_p_0(Cases_68, Var_80, &ExcpHandlingPrime_28);
                                succeeded = MR_TRUE;
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
        }
      }
    }
    if (succeeded)
    {
      *Goal_11 = GoalPrime_25;
      *Then_12 = ThenPrime_26;
      *MaybeElse_13 = MaybeElsePrime_27;
      *ExcpHandling_14 = ExcpHandlingPrime_28;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.try_expand.extract_intermediate_goal_parts\'/7", (MR_String) "unexpected goal form");
        return;
      }
  }
}

static void MR_CALL 
check_hlds__try_expand__lookup_case_goal_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ConsId_2,
  MR_Word * Goal_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_7;
      MR_String Var_9;

      Var_9 = mercury__string__string_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ((MR_Box) (ConsId_2)));
      Var_7 = mercury__string__f_43_43_2_f_0((MR_String) "couldn\'t find ", Var_9);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.try_expand.lookup_case_goal\'/3", Var_7);
        return;
      }
    }
    else
    {
      MR_Word Case_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Cases_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word GoalPrime_14 = ((MR_Word) ((MR_hl_field(0, Case_10, 2))));
      MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, Case_10, 1))));
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, Case_10, 0))));

      succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_2, Var_17);
      if (succeeded)
        succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        *Goal_3 = GoalPrime_14;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Cases_11;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__try_expand__extract_from_succeeded_goal_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word SucceededGoal_7,
  MR_Word * Goal_8,
  MR_Word * Then_9,
  MR_Word * MaybeElse_10)
{
  MR_bool succeeded;
  MR_Word Conjuncts0_11;
  MR_Word DeconstructResult_13;
  MR_Word TestNullTuple_14;
  MR_Word Conjuncts1_15;
  MR_Word TestRHS_23;
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, SucceededGoal_7, 0))));
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Integer Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Rest_30;
  MR_Word GoalPrime_32;
  MR_Word Then0_33;
  MR_Word Else0_34;
  MR_Word IfThenElse_28;
  MR_Word Var_59;

  succeeded = ((((MR_tag((MR_Word) Var_50)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_50, 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_51 = ((MR_Unsigned) ((MR_hl_field(3, Var_50, 1))) & (MR_Integer) 1);
    Conjuncts0_11 = ((MR_Word) ((MR_hl_field(3, Var_50, 2))));
    succeeded = (Var_51 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (Conjuncts0_11 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        DeconstructResult_13 = ((MR_Word) ((MR_hl_field(1, Conjuncts0_11, 0))));
        Var_52 = ((MR_Word) ((MR_hl_field(1, Conjuncts0_11, 1))));
        succeeded = (Var_52 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TestNullTuple_14 = ((MR_Word) ((MR_hl_field(1, Var_52, 0))));
          Conjuncts1_15 = ((MR_Word) ((MR_hl_field(1, Var_52, 1))));
          Var_53 = ((MR_Word) ((MR_hl_field(0, DeconstructResult_13, 0))));
          succeeded = ((MR_tag((MR_Word) Var_53)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_54 = ((MR_Word) ((MR_hl_field(0, TestNullTuple_14, 0))));
            succeeded = ((MR_tag((MR_Word) Var_54)) == (MR_Integer) 1);
            if (succeeded)
            {
              TestRHS_23 = ((MR_Word) ((MR_hl_field(1, Var_54, 1))));
              succeeded = ((MR_tag((MR_Word) TestRHS_23)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_55 = ((MR_Word) ((MR_hl_field(1, TestRHS_23, 0))));
                Var_57 = ((MR_Unsigned) ((MR_hl_field(1, TestRHS_23, 1))) & (MR_Integer) 1);
                Var_58 = ((MR_Word) ((MR_hl_field(1, TestRHS_23, 2))));
                succeeded = ((((MR_tag((MR_Word) Var_55)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_55, 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  Var_56 = ((MR_Integer) ((MR_hl_field(3, Var_55, 1))));
                  succeeded = (Var_56 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    succeeded = (Var_57 == (MR_Integer) 0);
                    if (succeeded)
                      succeeded = (Var_58 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
              }
              if (succeeded)
              {
                succeeded = (Conjuncts1_15 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_59 = ((MR_Word) ((MR_hl_field(1, Conjuncts1_15, 0))));
                  Rest_30 = ((MR_Word) ((MR_hl_field(1, Conjuncts1_15, 1))));
                  IfThenElse_28 = ((MR_Word) ((MR_hl_field(0, Var_59, 0))));
                  succeeded = ((((MR_tag((MR_Word) IfThenElse_28)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IfThenElse_28, 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    GoalPrime_32 = ((MR_Word) ((MR_hl_field(3, IfThenElse_28, 2))));
                    Then0_33 = ((MR_Word) ((MR_hl_field(3, IfThenElse_28, 3))));
                    Else0_34 = ((MR_Word) ((MR_hl_field(3, IfThenElse_28, 4))));
                  }
                }
                if (succeeded)
                {
                  MR_Word GoalInfo_36;
                  MR_Word GoalDetism_37;
                  MR_Word GoalMaxSoln_39;
                  MR_Word Else_40;
                  MR_Word Var_38;

                  *Goal_8 = GoalPrime_32;
                  GoalInfo_36 = ((MR_Word) ((MR_hl_field(0, *Goal_8, 1))));
                  GoalDetism_37 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_36);
                  parse_tree__prog_data__determinism_components_3_p_0(GoalDetism_37, &Var_38, &GoalMaxSoln_39);
                  switch (GoalMaxSoln_39) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 3:
                    case (MR_Integer) 2:
                    case (MR_Integer) 1:
                      hlds__hlds_goal__conjoin_goal_and_goal_list_3_p_0(Then0_33, Rest_30, Then_9);
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word Var_74;
                        MR_Word Var_78;
                        MR_Word Var_83;

                        Var_74 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
                        Var_78 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                        Var_83 = mercury__term_context__dummy_context_0_f_0();
                        hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_6, (MR_Integer) 0, Var_74, (MR_String) "unreachable", (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_78, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 6, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Var_83, Then_9);
                      }
                      break;
                  }
                  hlds__hlds_goal__conjoin_goal_and_goal_list_3_p_0(Else0_34, Rest_30, &Else_40);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeElse_10 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Else_40));
                  }
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_Word SomeGoal_41;
                  MR_Word AfterSomeGoal_42;
                  MR_Word Var_60;
                  MR_Word Var_61;
                  MR_Word Var_62;
                  MR_Word Rest_71;
                  MR_Word Then0_72;
                  MR_Word SomeThen_45;
                  MR_Word Var_63;
                  MR_Word Var_64;
                  MR_Word Var_65;

                  succeeded = (Conjuncts1_15 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    SomeGoal_41 = ((MR_Word) ((MR_hl_field(1, Conjuncts1_15, 0))));
                    AfterSomeGoal_42 = ((MR_Word) ((MR_hl_field(1, Conjuncts1_15, 1))));
                    Var_60 = ((MR_Word) ((MR_hl_field(0, SomeGoal_41, 0))));
                    succeeded = ((((MR_tag((MR_Word) Var_60)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_60, 0)))) == (MR_Integer) 5)));
                    if (succeeded)
                    {
                      Var_61 = ((MR_Word) ((MR_hl_field(3, Var_60, 1))));
                      *Goal_8 = ((MR_Word) ((MR_hl_field(3, Var_60, 2))));
                      succeeded = ((MR_tag((MR_Word) Var_61)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_62 = ((MR_Word) ((MR_hl_field(0, Var_61, 0))));
                        succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = (AfterSomeGoal_42 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            SomeThen_45 = ((MR_Word) ((MR_hl_field(1, AfterSomeGoal_42, 0))));
                            Rest_71 = ((MR_Word) ((MR_hl_field(1, AfterSomeGoal_42, 1))));
                            Var_63 = ((MR_Word) ((MR_hl_field(0, SomeThen_45, 0))));
                            succeeded = ((((MR_tag((MR_Word) Var_63)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_63, 0)))) == (MR_Integer) 5)));
                            if (succeeded)
                            {
                              Var_64 = ((MR_Word) ((MR_hl_field(3, Var_63, 1))));
                              Then0_72 = ((MR_Word) ((MR_hl_field(3, Var_63, 2))));
                              succeeded = ((MR_tag((MR_Word) Var_64)) == (MR_Integer) 0);
                              if (succeeded)
                              {
                                Var_65 = ((MR_Word) ((MR_hl_field(0, Var_64, 0))));
                                succeeded = (Var_65 == (MR_Word) ((MR_Unsigned) 0U));
                              }
                            }
                          }
                          if (succeeded)
                          {
                            hlds__hlds_goal__conjoin_goal_and_goal_list_3_p_0(Then0_72, Rest_71, Then_9);
                            *MaybeElse_10 = (MR_Word) ((MR_Unsigned) 0U);
                          }
                          else
                          {
                            MR_Word GoalInfo_68 = ((MR_Word) ((MR_hl_field(0, *Goal_8, 1))));
                            MR_Word GoalDetism_69;
                            MR_Word GoalMaxSoln_70;
                            MR_Word Var_49;

                            GoalDetism_69 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_68);
                            parse_tree__prog_data__determinism_components_3_p_0(GoalDetism_69, &Var_49, &GoalMaxSoln_70);
                            switch (GoalMaxSoln_70) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 3:
                              case (MR_Integer) 2:
                              case (MR_Integer) 1:
                                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.try_expand.extract_from_succeeded_goal\'/5", (MR_String) "goal not erroneous");
                                break;
                              case (MR_Integer) 0:
                                {
                                  MR_Word Var_85;
                                  MR_Word Var_89;
                                  MR_Word Var_94;

                                  Var_85 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
                                  Var_89 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                                  Var_94 = mercury__term_context__dummy_context_0_f_0();
                                  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_6, (MR_Integer) 0, Var_85, (MR_String) "unreachable", (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_89, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 6, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Var_94, Then_9);
                                  *MaybeElse_10 = (MR_Word) ((MR_Unsigned) 0U);
                                }
                                break;
                            }
                          }
                          succeeded = MR_TRUE;
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
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__try_expand__implement_try_goal_15_p_0(
  MR_Word MaybeIO_16,
  MR_Word ResultVar_17,
  MR_Word Goal1_18,
  MR_Word Then1_19,
  MR_Word MaybeElse1_20,
  MR_Word ExcpHandling1_21,
  MR_Word InstMap_22,
  MR_Word GoalOutputVarsSet_23,
  MR_Word * FinalGoal_24,
  MR_Word STATE_VARIABLE_PredInfo_0_67,
  MR_Word * STATE_VARIABLE_PredInfo_68,
  MR_Word STATE_VARIABLE_ProcInfo_0_69,
  MR_Word * STATE_VARIABLE_ProcInfo_70,
  MR_Word STATE_VARIABLE_ModuleInfo_0_71,
  MR_Word * STATE_VARIABLE_ModuleInfo_72)
{
  MR_Word GoalOutputVars_29;
  MR_Word GoalOutputVarTypes_30;
  MR_Word OutputTupleType_31;
  MR_Word RealResultVarType_32;
  MR_Word ResultVarEntry0_33;
  MR_String ResultVarName_34;
  MR_Word ResultVarEntry_37;
  MR_Word LambdaVar_38;
  MR_Word AssignLambdaVar_39;
  MR_Word GoalInfo1_41;
  MR_Word GoalPurity_42;
  MR_Word GoalContext_43;
  MR_Word CallTryGoal_47;
  MR_Word Then_49;
  MR_Word ExcpHandling_51;
  MR_Word GoalInfo_52;
  MR_Word TmpTupleVar_53;
  MR_Word TupleVar_54;
  MR_Word DeconstructSucceeded_55;
  MR_Word TupleArgInsts_56;
  MR_Word CastOutputTuple_57;
  MR_Word DeconstructOutputs_58;
  MR_Word DeconstructsThen_59;
  MR_Word SucceededCase_60;
  MR_Word ExceptionCase_61;
  MR_Word MaybeFailedCase_64;
  MR_Word Cases_65;
  MR_Word ResultSwitch_66;
  MR_Word STATE_VARIABLE_VarTable_1_73;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_78;
  MR_Word STATE_VARIABLE_VarTable_2_82;
  MR_Word STATE_VARIABLE_ProcInfo_1_83;
  MR_Word STATE_VARIABLE_ProcInfo_2_84;
  MR_Word STATE_VARIABLE_ProcInfo_4_93;
  MR_Word STATE_VARIABLE_ProcInfo_6_112;
  MR_Word Var_116;
  MR_Word Var_117;
  MR_Word Var_119;
  MR_Word Var_120;
  MR_Word Var_121;
  MR_Word Var_122;
  MR_Word Var_124;
  MR_Word Var_126;
  MR_Word Var_131;
  MR_Word Var_132;
  MR_Word Var_134;
  MR_Word Var_135;
  MR_Word Var_136;

  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_69, &STATE_VARIABLE_VarTable_1_73);
  GoalOutputVars_29 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalOutputVarsSet_23);
  parse_tree__var_table__lookup_var_types_3_p_0(STATE_VARIABLE_VarTable_1_73, GoalOutputVars_29, &GoalOutputVarTypes_30);
  {
    OutputTupleType_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, OutputTupleType_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, OutputTupleType_31, 1) = ((MR_Box) (GoalOutputVarTypes_30));
    MR_hl_field(3, OutputTupleType_31, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_76 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_String) "exception_result"));
  }
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (OutputTupleType_31));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    RealResultVarType_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RealResultVarType_32, 0) = ((MR_Box) (Var_75));
    MR_hl_field(1, RealResultVarType_32, 1) = ((MR_Box) (Var_78));
    MR_hl_field(1, RealResultVarType_32, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  parse_tree__var_table__lookup_var_entry_3_p_0(STATE_VARIABLE_VarTable_1_73, ResultVar_17, &ResultVarEntry0_33);
  ResultVarName_34 = ((MR_String) ((MR_hl_field(0, ResultVarEntry0_33, 0))));
  {
    ResultVarEntry_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ResultVarEntry_37, 0) = ((MR_Box) (ResultVarName_34));
    MR_hl_field(0, ResultVarEntry_37, 1) = ((MR_Box) (RealResultVarType_32));
    MR_hl_field(0, ResultVarEntry_37, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__update_var_entry_4_p_0(ResultVar_17, ResultVarEntry_37, STATE_VARIABLE_VarTable_1_73, &STATE_VARIABLE_VarTable_2_82);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(STATE_VARIABLE_VarTable_2_82, STATE_VARIABLE_ProcInfo_0_69, &STATE_VARIABLE_ProcInfo_1_83);
  check_hlds__try_expand__make_try_lambda_8_p_0(Goal1_18, GoalOutputVarsSet_23, OutputTupleType_31, MaybeIO_16, &LambdaVar_38, &AssignLambdaVar_39, STATE_VARIABLE_ProcInfo_1_83, &STATE_VARIABLE_ProcInfo_2_84);
  GoalInfo1_41 = ((MR_Word) ((MR_hl_field(0, Goal1_18, 1))));
  GoalPurity_42 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo1_41);
  GoalContext_43 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo1_41);
  if ((MaybeIO_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    check_hlds__try_expand__make_try_call_14_p_0((MR_String) "try", LambdaVar_38, ResultVar_17, (MR_Word) ((MR_Unsigned) 0U), OutputTupleType_31, GoalPurity_42, GoalContext_43, &CallTryGoal_47, STATE_VARIABLE_PredInfo_0_67, STATE_VARIABLE_PredInfo_68, STATE_VARIABLE_ProcInfo_2_84, &STATE_VARIABLE_ProcInfo_4_93, STATE_VARIABLE_ModuleInfo_0_71, STATE_VARIABLE_ModuleInfo_72);
    Then_49 = Then1_19;
    ExcpHandling_51 = ExcpHandling1_21;
  }
  else
  {
    MR_Word GoalInitialIOVar_44;
    MR_Word GoalFinalIOVar_45;
    MR_Word TryIOOutputVar_46;
    MR_Word UnifyThenInitialIOVar_48;
    MR_Word RenamingExcp_50;
    MR_Word Var_85 = ((MR_Word) ((MR_hl_field(1, MaybeIO_16, 0))));
    MR_Word Var_87;
    MR_Word STATE_VARIABLE_ProcInfo_3_89;
    MR_Word Var_91;
    MR_Word Var_95;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_102;
    MR_Word Var_103;

    GoalInitialIOVar_44 = ((MR_Word) ((MR_hl_field(0, Var_85, 0))));
    GoalFinalIOVar_45 = ((MR_Word) ((MR_hl_field(0, Var_85, 1))));
    Var_87 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    hlds__hlds_proc_util__proc_info_create_var_from_type_6_p_0((MR_String) "TryIOOutput", Var_87, (MR_Integer) 0, &TryIOOutputVar_46, STATE_VARIABLE_ProcInfo_2_84, &STATE_VARIABLE_ProcInfo_3_89);
    {
      Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_95, 0) = ((MR_Box) (TryIOOutputVar_46));
      MR_hl_field(1, Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_91, 0) = ((MR_Box) (GoalInitialIOVar_44));
      MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_95));
    }
    check_hlds__try_expand__make_try_call_14_p_0((MR_String) "try_io", LambdaVar_38, ResultVar_17, Var_91, OutputTupleType_31, GoalPurity_42, GoalContext_43, &CallTryGoal_47, STATE_VARIABLE_PredInfo_0_67, STATE_VARIABLE_PredInfo_68, STATE_VARIABLE_ProcInfo_3_89, &STATE_VARIABLE_ProcInfo_4_93, STATE_VARIABLE_ModuleInfo_0_71, STATE_VARIABLE_ModuleInfo_72);
    {
      Var_97 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_97, 0) = ((MR_Box) (TryIOOutputVar_46));
    }
    Var_98 = mercury__term_context__dummy_context_0_f_0();
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(GoalFinalIOVar_45, Var_97, Var_98, (MR_Word) (MR_mkword(3, &check_hlds__try_expand_scalar_common_3[0])), (MR_Word) ((MR_Unsigned) 0U), &UnifyThenInitialIOVar_48);
    hlds__hlds_goal__conjoin_goals_3_p_0(UnifyThenInitialIOVar_48, Then1_19, &Then_49);
    {
      Var_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_103, 0) = ((MR_Box) (GoalInitialIOVar_44));
      MR_hl_field(0, Var_103, 1) = ((MR_Box) (TryIOOutputVar_46));
    }
    {
      Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_102, 0) = ((MR_Box) (Var_103));
      MR_hl_field(1, Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    RenamingExcp_50 = mercury__map__from_assoc_list_1_f_0((MR_Word) (&check_hlds__try_expand_scalar_common_1[2]), (MR_Word) (&check_hlds__try_expand_scalar_common_1[2]), Var_102);
    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(RenamingExcp_50, ExcpHandling1_21, &ExcpHandling_51);
  }
  hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo_52);
  hlds__hlds_proc_util__proc_info_create_var_from_type_6_p_0((MR_String) "TmpOutputTuple", OutputTupleType_31, (MR_Integer) 1, &TmpTupleVar_53, STATE_VARIABLE_ProcInfo_4_93, &STATE_VARIABLE_ProcInfo_6_112);
  hlds__hlds_proc_util__proc_info_create_var_from_type_6_p_0((MR_String) "OutputTuple", OutputTupleType_31, (MR_Integer) 1, &TupleVar_54, STATE_VARIABLE_ProcInfo_6_112, STATE_VARIABLE_ProcInfo_70);
  Var_116 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
  {
    Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_117, 0) = ((MR_Box) (TmpTupleVar_53));
    MR_hl_field(1, Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__make_goal__deconstruct_functor_4_p_0(ResultVar_17, Var_116, Var_117, &DeconstructSucceeded_55);
  hlds__instmap__instmap_lookup_vars_3_p_0(InstMap_22, GoalOutputVars_29, &TupleArgInsts_56);
  check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0(TmpTupleVar_53, TupleVar_54, TupleArgInsts_56, &CastOutputTuple_57);
  hlds__make_goal__deconstruct_tuple_3_p_0(TupleVar_54, GoalOutputVars_29, &DeconstructOutputs_58);
  {
    Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_122, 0) = ((MR_Box) (Then_49));
    MR_hl_field(1, Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_121, 0) = ((MR_Box) (DeconstructOutputs_58));
    MR_hl_field(1, Var_121, 1) = ((MR_Box) (Var_122));
  }
  {
    Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_120, 0) = ((MR_Box) (CastOutputTuple_57));
    MR_hl_field(1, Var_120, 1) = ((MR_Box) (Var_121));
  }
  {
    Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_119, 0) = ((MR_Box) (DeconstructSucceeded_55));
    MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_120));
  }
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_119, GoalInfo_52, &DeconstructsThen_59);
  Var_124 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
  {
    SucceededCase_60 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SucceededCase_60, 0) = ((MR_Box) (Var_124));
    MR_hl_field(0, SucceededCase_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, SucceededCase_60, 2) = ((MR_Box) (DeconstructsThen_59));
  }
  Var_126 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
  {
    ExceptionCase_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ExceptionCase_61, 0) = ((MR_Box) (Var_126));
    MR_hl_field(0, ExceptionCase_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ExceptionCase_61, 2) = ((MR_Box) (ExcpHandling_51));
  }
  if ((MaybeElse1_20 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeFailedCase_64 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Else1_62 = ((MR_Word) ((MR_hl_field(1, MaybeElse1_20, 0))));
    MR_Word FailedCase_63;
    MR_Word Var_128;

    Var_128 = parse_tree__builtin_lib_types__exception_failed_functor_0_f_0();
    {
      FailedCase_63 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FailedCase_63, 0) = ((MR_Box) (Var_128));
      MR_hl_field(0, FailedCase_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, FailedCase_63, 2) = ((MR_Box) (Else1_62));
    }
    {
      MaybeFailedCase_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeFailedCase_64, 0) = ((MR_Box) (FailedCase_63));
      MR_hl_field(1, MaybeFailedCase_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  {
    Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_131, 0) = ((MR_Box) (ExceptionCase_61));
    MR_hl_field(1, Var_131, 1) = ((MR_Box) (MaybeFailedCase_64));
  }
  {
    Cases_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Cases_65, 0) = ((MR_Box) (SucceededCase_60));
    MR_hl_field(1, Cases_65, 1) = ((MR_Box) (Var_131));
  }
  {
    Var_132 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_132, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_132, 1) = ((MR_Box) (ResultVar_17));
    MR_hl_field(3, Var_132, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, Var_132, 3) = ((MR_Box) (Cases_65));
  }
  {
    ResultSwitch_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ResultSwitch_66, 0) = ((MR_Box) (Var_132));
    MR_hl_field(0, ResultSwitch_66, 1) = ((MR_Box) (GoalInfo_52));
  }
  {
    Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_136, 0) = ((MR_Box) (ResultSwitch_66));
    MR_hl_field(1, Var_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_135, 0) = ((MR_Box) (CallTryGoal_47));
    MR_hl_field(1, Var_135, 1) = ((MR_Box) (Var_136));
  }
  {
    Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_134, 0) = ((MR_Box) (AssignLambdaVar_39));
    MR_hl_field(1, Var_134, 1) = ((MR_Box) (Var_135));
  }
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_134, GoalInfo_52, FinalGoal_24);
}

static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s * env_ptr = (struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_3(
  void * env_ptr_arg)
{
  struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s * env_ptr = (struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9 = ((MR_Word) ((env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__conv0_ArgInst_9));
  check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_2(env_ptr);
}

static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_2(
  void * env_ptr_arg)
{
  struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s * env_ptr = (struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_13;
    MR_Word Var_10;

    (env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9)) == (MR_Integer) 1);
    if ((env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded)
    {
      Var_13 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9, 1))));
      (env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 0U));
    }
    (env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = !((env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded);
    if ((env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded)
      check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_4(
  void * env_ptr_arg)
{
  struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s * env_ptr = (struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &(env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__conv0_ArgInst_9, (env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7, check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_3, env_ptr);
      (env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0(
  MR_Word TmpTupleVar_5,
  MR_Word TupleVar_6,
  MR_Word TupleArgInsts_7,
  MR_Word * CastOrUnify_8)
{
  struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s env;

  (env).check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7 = TupleArgInsts_7;
  check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_4(&env);
  if ((env).check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded)
  {
    MR_Integer TupleArity_11;
    MR_Word TupleInst_12;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_21;
    MR_Word Var_22;

    TupleArity_11 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (env).check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7);
    {
      Var_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_18, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_18, 1) = ((MR_Box) (TupleArity_11));
    }
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(0, Var_17, 1) = ((MR_Box) ((env).check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7));
    }
    {
      Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_16, 0) = ((MR_Box) (Var_17));
      MR_hl_field(1, Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      TupleInst_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, TupleInst_12, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(2, TupleInst_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, TupleInst_12, 2) = ((MR_Box) (Var_16));
    }
    Var_21 = parse_tree__prog_mode__ground_inst_0_f_0();
    Var_22 = mercury__term_context__dummy_context_0_f_0();
    hlds__goal_util__generate_cast_with_insts_7_p_0((MR_Integer) 1, TmpTupleVar_5, TupleVar_6, Var_21, TupleInst_12, Var_22, CastOrUnify_8);
  }
  else
  {
    MR_Word Var_23;
    MR_Word Var_24;

    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_23, 0) = ((MR_Box) (TmpTupleVar_5));
    }
    Var_24 = mercury__term_context__dummy_context_0_f_0();
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(TupleVar_6, Var_23, Var_24, (MR_Word) (MR_mkword(3, &check_hlds__try_expand_scalar_common_3[0])), (MR_Word) ((MR_Unsigned) 0U), CastOrUnify_8);
  }
}

static void MR_CALL 
check_hlds__try_expand__make_try_call_14_p_0(
  MR_String PredName_15,
  MR_Word LambdaVar_16,
  MR_Word ResultVar_17,
  MR_Word ExtraArgs_18,
  MR_Word OutputTupleType_19,
  MR_Word GoalPurity_20,
  MR_Word Context_21,
  MR_Word * OverallGoal_22,
  MR_Word STATE_VARIABLE_PredInfo_0_34,
  MR_Word * STATE_VARIABLE_PredInfo_35,
  MR_Word STATE_VARIABLE_ProcInfo_0_36,
  MR_Word * STATE_VARIABLE_ProcInfo_37,
  MR_Word STATE_VARIABLE_ModuleInfo_0_38,
  MR_Word * STATE_VARIABLE_ModuleInfo_39)
{
  MR_Word TypeInfoVar_26;
  MR_Word MakeTypeInfoGoals_27;
  MR_Word CallGoal0_30;
  MR_Word GoalInfo_31;
  MR_Word CallGoal_32;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_56;
  MR_Word Var_57;

  check_hlds__polymorphism_type_info__polymorphism_make_type_info_var_mi_10_p_0(OutputTupleType_19, Context_21, &TypeInfoVar_26, &MakeTypeInfoGoals_27, STATE_VARIABLE_ModuleInfo_0_38, STATE_VARIABLE_ModuleInfo_39, STATE_VARIABLE_PredInfo_0_34, STATE_VARIABLE_PredInfo_35, STATE_VARIABLE_ProcInfo_0_36, STATE_VARIABLE_ProcInfo_37);
  Var_45 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (TypeInfoVar_26));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (ResultVar_17));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (LambdaVar_16));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_53));
  }
  Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__try_expand_scalar_common_1[2]), Var_52, ExtraArgs_18);
  Var_48 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  hlds__goal_util__generate_plain_call_13_p_0(*STATE_VARIABLE_ModuleInfo_39, (MR_Integer) 0, Var_45, PredName_15, Var_46, Var_47, Var_48, (MR_Word) (MR_mkword(1, &check_hlds__try_expand_scalar_common_3[1])), (MR_Integer) 4, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_21, &CallGoal0_30);
  hlds__hlds_goal__goal_info_init_2_p_0(Context_21, &GoalInfo_31);
  switch (GoalPurity_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      {
        MR_Word ScopeReason_33;
        MR_Word Var_55;

        {
          ScopeReason_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ScopeReason_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, ScopeReason_33, 1) = (MR_Box) ((MR_Unsigned) (GoalPurity_20));
        }
        {
          Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_55, 1) = ((MR_Box) (ScopeReason_33));
          MR_hl_field(3, Var_55, 2) = ((MR_Box) (CallGoal0_30));
        }
        {
          CallGoal_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CallGoal_32, 0) = ((MR_Box) (Var_55));
          MR_hl_field(0, CallGoal_32, 1) = ((MR_Box) (GoalInfo_31));
        }
      }
      break;
    case (MR_Integer) 0:
      CallGoal_32 = CallGoal0_30;
      break;
  }
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (CallGoal_32));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), MakeTypeInfoGoals_27, Var_57);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_56, GoalInfo_31, OverallGoal_22);
}

static void MR_CALL 
check_hlds__try_expand__make_try_lambda_8_p_0(
  MR_Word Body0_9,
  MR_Word OutputVarsSet_10,
  MR_Word OutputTupleType_11,
  MR_Word MaybeIO_12,
  MR_Word * LambdaVar_13,
  MR_Word * AssignLambdaVarGoal_14,
  MR_Word STATE_VARIABLE_ProcInfo_0_39,
  MR_Word * STATE_VARIABLE_ProcInfo_40)
{
  MR_Word BodyInfo0_17 = ((MR_Word) ((MR_hl_field(0, Body0_9, 1))));
  MR_Word NonLocals0_18;
  MR_Word NonLocals1_19;
  MR_Word OutputTupleVar_20;
  MR_Word LambdaParamsModes_23;
  MR_Word LambdaParamTypes_24;
  MR_Word NonLocals_25;
  MR_Word LambdaType_26;
  MR_Word MakeOutputTuple_27;
  MR_Word LambdaBody0_28;
  MR_Word VarTable0_29;
  MR_Word VarTable_30;
  MR_Word Renaming_31;
  MR_Word LambdaBody_32;
  MR_Word BodyGoalInfo_34;
  MR_Word BodyDetism_35;
  MR_Word LambdaDetism_36;
  MR_Word RHS_37;
  MR_Word AssignLambdaVarGoal0_38;
  MR_Word STATE_VARIABLE_ProcInfo_1_43;
  MR_Word STATE_VARIABLE_ProcInfo_2_68;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_72;
  MR_Word Var_77;
  MR_Word Var_78;

  NonLocals0_18 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(BodyInfo0_17);
  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals0_18, OutputVarsSet_10, &NonLocals1_19);
  hlds__hlds_proc_util__proc_info_create_var_from_type_6_p_0((MR_String) "OutputTuple", OutputTupleType_11, (MR_Integer) 1, &OutputTupleVar_20, STATE_VARIABLE_ProcInfo_0_39, &STATE_VARIABLE_ProcInfo_1_43);
  if ((MaybeIO_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_59;
    MR_Word Var_60;

    Var_60 = parse_tree__prog_mode__out_mode_0_f_0();
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_59, 0) = ((MR_Box) (OutputTupleVar_20));
      MR_hl_field(0, Var_59, 1) = ((MR_Box) (Var_60));
    }
    {
      LambdaParamsModes_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, LambdaParamsModes_23, 0) = ((MR_Box) (Var_59));
      MR_hl_field(1, LambdaParamsModes_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      LambdaParamTypes_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, LambdaParamTypes_24, 0) = ((MR_Box) (OutputTupleType_11));
      MR_hl_field(1, LambdaParamTypes_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    NonLocals_25 = NonLocals0_18;
  }
  else
  {
    MR_Word IOVarInitial_21;
    MR_Word IOVarFinal_22;
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(1, MaybeIO_12, 0))));
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;

    IOVarInitial_21 = ((MR_Word) ((MR_hl_field(0, Var_44, 0))));
    IOVarFinal_22 = ((MR_Word) ((MR_hl_field(0, Var_44, 1))));
    Var_46 = parse_tree__prog_mode__out_mode_0_f_0();
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_45, 0) = ((MR_Box) (OutputTupleVar_20));
      MR_hl_field(0, Var_45, 1) = ((MR_Box) (Var_46));
    }
    Var_49 = parse_tree__prog_mode__di_mode_0_f_0();
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_48, 0) = ((MR_Box) (IOVarInitial_21));
      MR_hl_field(0, Var_48, 1) = ((MR_Box) (Var_49));
    }
    Var_52 = parse_tree__prog_mode__uo_mode_0_f_0();
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_51, 0) = ((MR_Box) (IOVarFinal_22));
      MR_hl_field(0, Var_51, 1) = ((MR_Box) (Var_52));
    }
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
    }
    {
      LambdaParamsModes_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, LambdaParamsModes_23, 0) = ((MR_Box) (Var_45));
      MR_hl_field(1, LambdaParamsModes_23, 1) = ((MR_Box) (Var_47));
    }
    Var_55 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    Var_57 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_56));
    }
    {
      LambdaParamTypes_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, LambdaParamTypes_24, 0) = ((MR_Box) (OutputTupleType_11));
      MR_hl_field(1, LambdaParamTypes_24, 1) = ((MR_Box) (Var_54));
    }
    parse_tree__set_of_var__delete_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), IOVarFinal_22, NonLocals1_19, &NonLocals_25);
  }
  {
    LambdaType_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LambdaType_26, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, LambdaType_26, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, LambdaType_26, 2) = ((MR_Box) (LambdaParamTypes_24));
    MR_hl_field(3, LambdaType_26, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, LambdaType_26, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  hlds__hlds_proc_util__proc_info_create_var_from_type_6_p_0((MR_String) "TryLambda", LambdaType_26, (MR_Integer) 1, LambdaVar_13, STATE_VARIABLE_ProcInfo_1_43, &STATE_VARIABLE_ProcInfo_2_68);
  Var_69 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputVarsSet_10);
  hlds__make_goal__construct_tuple_3_p_0(OutputTupleVar_20, Var_69, &MakeOutputTuple_27);
  hlds__hlds_goal__conjoin_goals_3_p_0(Body0_9, MakeOutputTuple_27, &LambdaBody0_28);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_2_68, &VarTable0_29);
  Var_70 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputVarsSet_10);
  Var_72 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__try_expand_scalar_common_1[2]), (MR_Word) (&check_hlds__try_expand_scalar_common_1[2]));
  hlds__goal_util__clone_variables_6_p_0(Var_70, VarTable0_29, VarTable0_29, &VarTable_30, Var_72, &Renaming_31);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_30, STATE_VARIABLE_ProcInfo_2_68, STATE_VARIABLE_ProcInfo_40);
  hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Renaming_31, LambdaBody0_28, &LambdaBody_32);
  BodyGoalInfo_34 = ((MR_Word) ((MR_hl_field(0, LambdaBody_32, 1))));
  BodyDetism_35 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(BodyGoalInfo_34);
  LambdaDetism_36 = ((&check_hlds__try_expand_vector_common_7[0 + BodyDetism_35]))->check_hlds__try_expand__vector_common_type_7_0__vct_7_f_0;
  Var_77 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_25);
  {
    RHS_37 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, RHS_37, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
    MR_hl_field(2, RHS_37, 1) = ((MR_Box) (Var_77));
    MR_hl_field(2, RHS_37, 2) = ((MR_Box) (LambdaParamsModes_23));
    MR_hl_field(2, RHS_37, 3) = (MR_Box) ((MR_Unsigned) (LambdaDetism_36));
    MR_hl_field(2, RHS_37, 4) = ((MR_Box) (LambdaBody_32));
  }
  Var_78 = mercury__term_context__dummy_context_0_f_0();
  hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(*LambdaVar_13, RHS_37, Var_78, (MR_Word) (MR_mkword(3, &check_hlds__try_expand_scalar_common_3[0])), (MR_Word) ((MR_Unsigned) 0U), &AssignLambdaVarGoal0_38);
  hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 28, AssignLambdaVarGoal0_38, AssignLambdaVarGoal_14);
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_disj_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Goal_8;
  MR_Word conv0_STATE_VARIABLE_Info_98;

  check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Goal_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_98);
  *wrapper_arg_2 = ((MR_Box) (conv1_Goal_8));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_98));
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_disj_5_p_0(
  MR_Word InstMap0_6,
  MR_Word Goals0_7,
  MR_Word * Goals_8,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  MR_Word Var_12;
  MR_Box conv2_STATE_VARIABLE_Info_11;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&check_hlds__try_expand_scalar_common_6[0]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (check_hlds__try_expand__expand_try_goals_in_disj_5_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (InstMap0_6));
  }
  mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__try_expand__check_hlds__try_expand__type_ctor_info_trys_info_0), Var_12, Goals0_7, Goals_8, ((MR_Box) (STATE_VARIABLE_Info_0_10)), &conv2_STATE_VARIABLE_Info_11);
  *STATE_VARIABLE_Info_11 = ((MR_Word) (conv2_STATE_VARIABLE_Info_11));
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_22;
  MR_Word conv0_STATE_VARIABLE_Specs_24;

  check_hlds__try_expand__expand_try_goals_in_proc_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_22, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_24);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_22));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_24));
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_pred_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  MR_Word PredInfo_11;
  MR_Word ProcIds_12;
  MR_Word Var_17;
  MR_Box conv3_STATE_VARIABLE_ModuleInfo_14;
  MR_Box conv2_STATE_VARIABLE_Specs_16;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_13, PredId_8, &PredInfo_11);
  ProcIds_12 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo_11);
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&check_hlds__try_expand_scalar_common_5[0]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (check_hlds__try_expand__expand_try_goals_in_pred_6_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (ProgressStream_7));
    MR_hl_field(0, Var_17, 4) = ((MR_Box) (PredId_8));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__try_expand_scalar_common_1[0]), Var_17, ProcIds_12, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_13)), &conv3_STATE_VARIABLE_ModuleInfo_14, ((MR_Box) (STATE_VARIABLE_Specs_0_15)), &conv2_STATE_VARIABLE_Specs_16);
  *STATE_VARIABLE_ModuleInfo_14 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_14));
  *STATE_VARIABLE_Specs_16 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_16));
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_module_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_14;
  MR_Word conv1_STATE_VARIABLE_Specs_16;

  check_hlds__try_expand__expand_try_goals_in_pred_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_14, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Specs_16);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_14));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_16));
}

void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_module_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  MR_bool succeeded;
  MR_Word AvailModuleMap_9;
  MR_Word Var_18;
  MR_Box conv0_Var_10;

  hlds__hlds_module__module_info_get_avail_module_map_2_p_0(STATE_VARIABLE_ModuleInfo_0_14, &AvailModuleMap_9);
  Var_18 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0), AvailModuleMap_9, ((MR_Box) (Var_18)), &conv0_Var_10);
  if (succeeded)
    succeeded = MR_TRUE;
  if (succeeded)
  {
    MR_Word OptionsToRestore_12;
    MR_Word PredIds_13;
    MR_Word STATE_VARIABLE_Globals_1_19;
    MR_Word STATE_VARIABLE_Globals_2_20;
    MR_Word STATE_VARIABLE_ModuleInfo_1_21;
    MR_Word Var_22;
    MR_Word STATE_VARIABLE_ModuleInfo_2_23;
    MR_Word STATE_VARIABLE_Globals_3_25;
    MR_Word STATE_VARIABLE_Globals_4_26;
    MR_Box conv4_STATE_VARIABLE_ModuleInfo_2_23;
    MR_Box conv3_STATE_VARIABLE_Specs_17;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_14, &STATE_VARIABLE_Globals_1_19);
    check_hlds__det_analysis__disable_det_warnings_3_p_0(&OptionsToRestore_12, STATE_VARIABLE_Globals_1_19, &STATE_VARIABLE_Globals_2_20);
    hlds__hlds_module__module_info_set_globals_3_p_0(STATE_VARIABLE_Globals_2_20, STATE_VARIABLE_ModuleInfo_0_14, &STATE_VARIABLE_ModuleInfo_1_21);
    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_1_21, &PredIds_13);
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_22, 0) = ((MR_Box) (&check_hlds__try_expand_scalar_common_4[0]));
      MR_hl_field(0, Var_22, 1) = ((MR_Box) (check_hlds__try_expand__expand_try_goals_in_module_5_p_0_1));
      MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_22, 3) = ((MR_Box) (ProgressStream_6));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__try_expand_scalar_common_1[0]), Var_22, PredIds_13, ((MR_Box) (STATE_VARIABLE_ModuleInfo_1_21)), &conv4_STATE_VARIABLE_ModuleInfo_2_23, ((MR_Box) (STATE_VARIABLE_Specs_0_16)), &conv3_STATE_VARIABLE_Specs_17);
    STATE_VARIABLE_ModuleInfo_2_23 = ((MR_Word) (conv4_STATE_VARIABLE_ModuleInfo_2_23));
    *STATE_VARIABLE_Specs_17 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_17));
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_2_23, &STATE_VARIABLE_Globals_3_25);
    check_hlds__det_analysis__restore_det_warnings_3_p_0(OptionsToRestore_12, STATE_VARIABLE_Globals_3_25, &STATE_VARIABLE_Globals_4_26);
    hlds__hlds_module__module_info_set_globals_3_p_0(STATE_VARIABLE_Globals_4_26, STATE_VARIABLE_ModuleInfo_2_23, STATE_VARIABLE_ModuleInfo_15);
  }
  else
  {
    *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_0_16;
    *STATE_VARIABLE_ModuleInfo_15 = STATE_VARIABLE_ModuleInfo_0_14;
  }
}

static MR_bool MR_CALL 
check_hlds__try_expand____Unify____trys_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__try_expand____Unify____trys_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__try_expand____Compare____trys_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__try_expand____Compare____trys_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__try_expand__init(void)
{
}

void mercury__check_hlds__try_expand__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__try_expand__check_hlds__try_expand__type_ctor_info_trys_info_0);
}

void mercury__check_hlds__try_expand__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__try_expand__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.try_expand.
