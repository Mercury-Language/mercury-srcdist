/*
** Automatically generated from `try_expand.m'
** by the Mercury compiler,
** version rotd-2019-01-05
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.det_analysis.mih"
#include "check_hlds.det_report.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.modes.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
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
#include "hlds.make_goal.mih"
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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



struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s {
  MR_Word check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7;
  MR_bool check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded;
  jmp_buf check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__commit_0;
  MR_Word check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9;
  MR_Box check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__conv0_ArgInst_9;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__try_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__try_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__try_expand__check_hlds__try_expand__field_types_trys_info_0_0[4];

static const MR_ConstString check_hlds__try_expand__check_hlds__try_expand__field_names_trys_info_0_0[4];

static const MR_DuArgLocn check_hlds__try_expand__check_hlds__try_expand__field_locns_trys_info_0_0[4];

static const MR_DuFunctorDesc check_hlds__try_expand__check_hlds__try_expand__du_functor_desc_trys_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__try_expand__check_hlds__try_expand__du_stag_ordered_trys_info_0_0[1];

static const MR_DuPtagLayout check_hlds__try_expand__check_hlds__try_expand__du_ptag_ordered_trys_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__try_expand__check_hlds__try_expand__du_name_ordered_trys_info_0[1];

static const MR_Integer check_hlds__try_expand__check_hlds__try_expand__functor_number_map_trys_info_0[1];

static MR_bool MR_CALL 
check_hlds__try_expand__IntroducedFrom__pred__make_try_call__891__1_2_p_0(
  MR_Word PolySpecs_30,
  MR_Word HeadVar__2_51);

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
check_hlds__try_expand__expand_try_goals_in_proc_6_p_0(
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(
  MR_Word Instmap_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_96,
  MR_Word * STATE_VARIABLE_Info_97);

static MR_bool MR_CALL 
check_hlds__try_expand__expand_try_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__try_expand__expand_try_goal_5_p_0(
  MR_Word Instmap_6,
  MR_Word TryGoal_7,
  MR_Word * FinalGoal_8,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34);

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_if_then_else_9_p_0(
  MR_Word Instmap0_10,
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

static MR_bool MR_CALL 
check_hlds__try_expand__extract_intermediate_goal_parts_2_7_p_0(
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
check_hlds__try_expand__make_unreachable_call_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * Goal_4);

static void MR_CALL 
check_hlds__try_expand__expand_try_goal_2_15_p_0(
  MR_Word MaybeIO_16,
  MR_Word ResultVar_17,
  MR_Word Goal1_18,
  MR_Word Then1_19,
  MR_Word MaybeElse1_20,
  MR_Word ExcpHandling1_21,
  MR_Word Instmap_22,
  MR_Word GoalOutputVarsSet_23,
  MR_Word * FinalGoal_24,
  MR_Word STATE_VARIABLE_PredInfo_0_62,
  MR_Word * STATE_VARIABLE_PredInfo_63,
  MR_Word STATE_VARIABLE_ProcInfo_0_64,
  MR_Word * STATE_VARIABLE_ProcInfo_65,
  MR_Word STATE_VARIABLE_ModuleInfo_0_66,
  MR_Word * STATE_VARIABLE_ModuleInfo_67);

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

static MR_bool MR_CALL 
check_hlds__try_expand__make_try_call_14_p_0_1(
  MR_Box closure_arg);

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
  MR_Word STATE_VARIABLE_PredInfo_0_38,
  MR_Word * STATE_VARIABLE_PredInfo_39,
  MR_Word STATE_VARIABLE_ProcInfo_0_40,
  MR_Word * STATE_VARIABLE_ProcInfo_41,
  MR_Word STATE_VARIABLE_ModuleInfo_0_42,
  MR_Word * STATE_VARIABLE_ModuleInfo_43);

static void MR_CALL 
check_hlds__try_expand__make_try_lambda_8_p_0(
  MR_Word Body0_9,
  MR_Word OutputVarsSet_10,
  MR_Word OutputTupleType_11,
  MR_Word MaybeIO_12,
  MR_Word * LambdaVar_13,
  MR_Word * AssignLambdaVar_14,
  MR_Word STATE_VARIABLE_ProcInfo_0_41,
  MR_Word * STATE_VARIABLE_ProcInfo_42);

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_disj_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_disj_5_p_0(
  MR_Word Instmap0_6,
  MR_Word Goals0_7,
  MR_Word * Goals_8,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_pred_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_pred_5_p_0(
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_module_4_p_0_1(
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


static /* final */ const MR_Box check_hlds__try_expand_scalar_common_1[2][2];

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_2[2][8];

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_3[1][3];

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_4[1][9];

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_5[6][1];

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_7[1][5];

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_8[1][7];


/* sealed */ struct check_hlds__try_expand__vector_common_type_6_0_s {
  const MR_Word check_hlds__try_expand__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct check_hlds__try_expand__vector_common_type_6_0_s check_hlds__try_expand_vector_common_6[8];



static /* final */ const MR_Box check_hlds__try_expand_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_2[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__try_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__try_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
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

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_3[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&check_hlds__try_expand_scalar_common_2[0])),
    ((MR_Box) (check_hlds__try_expand__expand_try_goals_in_module_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_4[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__try_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__try_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_5[6][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "OutputTuple"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "TryLambda"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "try_expand"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "TryIOOutput"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "TmpOutputTuple"))
  },
};

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_7[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__try_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__try_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_8[1][7] = {
  /* row 0 */
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


static /* final */ const struct check_hlds__try_expand__vector_common_type_6_0_s check_hlds__try_expand_vector_common_6[8] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 4 },
  /* row 3 */   {     (MR_Integer) 5 },
  /* row 4 */   {     (MR_Integer) 4 },
  /* row 5 */   {     (MR_Integer) 5 },
  /* row 6 */   {     (MR_Integer) 0 },
  /* row 7 */   {     (MR_Integer) 1 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__try_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__try_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
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

static const MR_DuFunctorDescPtr check_hlds__try_expand__check_hlds__try_expand__du_stag_ordered_trys_info_0_0[1] = {
  &check_hlds__try_expand__check_hlds__try_expand__du_functor_desc_trys_info_0_0
};

static const MR_DuPtagLayout check_hlds__try_expand__check_hlds__try_expand__du_ptag_ordered_trys_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__try_expand__check_hlds__try_expand__du_stag_ordered_trys_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__try_expand__check_hlds__try_expand__du_name_ordered_trys_info_0[1] = {
  &check_hlds__try_expand__check_hlds__try_expand__du_functor_desc_trys_info_0_0
};

static const MR_Integer check_hlds__try_expand__check_hlds__try_expand__functor_number_map_trys_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__try_expand__check_hlds__try_expand__type_ctor_info_trys_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__try_expand____Unify____trys_info_0_0_10001)),
  ((MR_Box) (check_hlds__try_expand____Compare____trys_info_0_0_10001)),
  (MR_String) "check_hlds.try_expand",
  (MR_String) "trys_info",
  {     check_hlds__try_expand__check_hlds__try_expand__du_name_ordered_trys_info_0 },
  {     check_hlds__try_expand__check_hlds__try_expand__du_ptag_ordered_trys_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__try_expand__check_hlds__try_expand__functor_number_map_trys_info_0
};

static MR_bool MR_CALL 
check_hlds__try_expand__IntroducedFrom__pred__make_try_call__891__1_2_p_0(
  MR_Word PolySpecs_30,
  MR_Word HeadVar__2_51)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__try_expand_scalar_common_1[0]), ((MR_Box) (PolySpecs_30)), ((MR_Box) (HeadVar__2_51)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__try_expand____Compare____trys_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
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
      MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 1);
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
}

static MR_bool MR_CALL 
check_hlds__try_expand____Unify____trys_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);

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
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_proc_6_p_0(
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  {
    MR_Word Goal0_13;
    MR_Word InitInstmap_14;
    MR_Word Info0_15;
    MR_Word Goal_16;
    MR_Word Info_17;
    MR_Word Changed_18;
    MR_Word STATE_VARIABLE_PredInfo_23_23;
    MR_Word STATE_VARIABLE_ProcInfo_24_24;
    MR_Word STATE_VARIABLE_ModuleInfo_26_26;
    MR_Word STATE_VARIABLE_PredInfo_27_27;
    MR_Word STATE_VARIABLE_ProcInfo_28_28;

    hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_19, PredId_7, ProcId_8, &STATE_VARIABLE_PredInfo_23_23, &STATE_VARIABLE_ProcInfo_24_24);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_24_24, &Goal0_13);
    hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ProcInfo_24_24, STATE_VARIABLE_ModuleInfo_0_19, &InitInstmap_14);
    {
      Info0_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info0_15, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_19));
      MR_hl_field(MR_mktag(0), Info0_15, 1) = ((MR_Box) (STATE_VARIABLE_PredInfo_23_23));
      MR_hl_field(MR_mktag(0), Info0_15, 2) = ((MR_Box) (STATE_VARIABLE_ProcInfo_24_24));
      MR_hl_field(MR_mktag(0), Info0_15, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(InitInstmap_14, Goal0_13, &Goal_16, Info0_15, &Info_17);
    STATE_VARIABLE_ModuleInfo_26_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_17, (MR_Integer) 0))));
    STATE_VARIABLE_PredInfo_27_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_17, (MR_Integer) 1))));
    STATE_VARIABLE_ProcInfo_28_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_17, (MR_Integer) 2))));
    Changed_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_17, (MR_Integer) 3))) & (MR_Integer) 1);
    switch (Changed_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_ModuleInfo_20 = STATE_VARIABLE_ModuleInfo_26_26;
          *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_ModuleInfo_29_29;
          MR_Word ModeSpecs_44;
          MR_Word Globals_46;
          MR_Word HasModeErrors_47;
          MR_Word STATE_VARIABLE_ProcInfo_27_49;
          MR_Word STATE_VARIABLE_ProcInfo_29_51;
          MR_Word STATE_VARIABLE_ModuleInfo_30_52;
          MR_Word STATE_VARIABLE_ModuleInfo_31_53;
          MR_Word _Changed_45;

          hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_16, STATE_VARIABLE_ProcInfo_28_28, &STATE_VARIABLE_ProcInfo_27_49);
          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_27_49, &STATE_VARIABLE_ProcInfo_29_51);
          hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_7, ProcId_8, STATE_VARIABLE_PredInfo_27_27, STATE_VARIABLE_ProcInfo_29_51, STATE_VARIABLE_ModuleInfo_26_26, &STATE_VARIABLE_ModuleInfo_30_52);
          check_hlds__modes__modecheck_proc_6_p_0(ProcId_8, PredId_7, STATE_VARIABLE_ModuleInfo_30_52, &STATE_VARIABLE_ModuleInfo_31_53, &ModeSpecs_44, &_Changed_45);
          hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_31_53, &Globals_46);
          HasModeErrors_47 = parse_tree__error_util__contains_errors_2_f_0(Globals_46, ModeSpecs_44);
          switch (HasModeErrors_47) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word _DetismSpecs_48;

                check_hlds__det_analysis__determinism_check_proc_5_p_0(ProcId_8, PredId_7, STATE_VARIABLE_ModuleInfo_31_53, &STATE_VARIABLE_ModuleInfo_29_29, &_DetismSpecs_48);
                *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
              }
              break;
            case (MR_Integer) 1:
              {
                *STATE_VARIABLE_Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ModeSpecs_44, STATE_VARIABLE_Specs_0_21);
                STATE_VARIABLE_ModuleInfo_29_29 = STATE_VARIABLE_ModuleInfo_31_53;
              }
              break;
          }
          hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(STATE_VARIABLE_ModuleInfo_29_29, STATE_VARIABLE_ModuleInfo_20);
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(
  MR_Word Instmap_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_96,
  MR_Word * STATE_VARIABLE_Info_97)
{
  {
    MR_Word GoalExpr0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0))));
    MR_Word GoalInfo0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_23 = (MR_Word) ((MR_Word) (GoalExpr0_10));
          MR_Word SubGoal_24;
          MR_Word GoalExpr_119;

          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(Instmap_6, SubGoal0_23, &SubGoal_24, STATE_VARIABLE_Info_0_96, STATE_VARIABLE_Info_97);
          GoalExpr_119 = (MR_Word) ((MR_Word) (SubGoal_24));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_119));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *Goal_8 = Goal0_7;
          *STATE_VARIABLE_Info_97 = STATE_VARIABLE_Info_0_96;
        }
        break;
      case (MR_Integer) 2:
        {
          *Goal_8 = Goal0_7;
          *STATE_VARIABLE_Info_97 = STATE_VARIABLE_Info_0_96;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *Goal_8 = Goal0_7;
              *STATE_VARIABLE_Info_97 = STATE_VARIABLE_Info_0_96;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Conjuncts0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2))));
              MR_Word Conjuncts_19;
              MR_Word GoalExpr_20;

              check_hlds__try_expand__expand_try_goals_in_conj_5_p_0(Instmap_6, Conjuncts0_18, &Conjuncts_19, STATE_VARIABLE_Info_0_96, STATE_VARIABLE_Info_97);
              {
                GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_20, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr_20, 1) = (MR_Box) ((MR_Unsigned) (ConjType_17));
                MR_hl_field(MR_mktag(3), GoalExpr_20, 2) = ((MR_Box) (Conjuncts_19));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_20));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
              MR_Word Disjuncts_22;
              MR_Word GoalExpr_118;

              check_hlds__try_expand__expand_try_goals_in_disj_5_p_0(Instmap_6, Disjuncts0_21, &Disjuncts_22, STATE_VARIABLE_Info_0_96, STATE_VARIABLE_Info_97);
              {
                GoalExpr_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_118, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExpr_118, 1) = ((MR_Box) (Disjuncts_22));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_118));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
              MR_Word CanFail_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 3))));
              MR_Word Cases_28;
              MR_Word GoalExpr_120;

              check_hlds__try_expand__expand_try_goals_in_cases_5_p_0(Instmap_6, Cases0_27, &Cases_28, STATE_VARIABLE_Info_0_96, STATE_VARIABLE_Info_97);
              {
                GoalExpr_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_120, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_120, 1) = ((MR_Box) (Var_25));
                MR_hl_field(MR_mktag(3), GoalExpr_120, 2) = (MR_Box) ((MR_Unsigned) (CanFail_26));
                MR_hl_field(MR_mktag(3), GoalExpr_120, 3) = ((MR_Box) (Cases_28));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_120));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
              MR_Word InnerGoal0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2))));

              switch (MR_tag((MR_Word) Reason_29)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word InnerGoal_132;
                    MR_Word GoalExpr_133;

                    check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(Instmap_6, InnerGoal0_30, &InnerGoal_132, STATE_VARIABLE_Info_0_96, STATE_VARIABLE_Info_97);
                    {
                      GoalExpr_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_133, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), GoalExpr_133, 1) = ((MR_Box) (Reason_29));
                      MR_hl_field(MR_mktag(3), GoalExpr_133, 2) = ((MR_Box) (InnerGoal_132));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Goal_8 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_133));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word InnerGoal_130;
                    MR_Word GoalExpr_131;

                    check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(Instmap_6, InnerGoal0_30, &InnerGoal_130, STATE_VARIABLE_Info_0_96, STATE_VARIABLE_Info_97);
                    {
                      GoalExpr_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_131, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), GoalExpr_131, 1) = ((MR_Box) (Reason_29));
                      MR_hl_field(MR_mktag(3), GoalExpr_131, 2) = ((MR_Box) (InnerGoal_130));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Goal_8 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_131));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word InnerGoal_144;
                    MR_Word GoalExpr_145;

                    check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(Instmap_6, InnerGoal0_30, &InnerGoal_144, STATE_VARIABLE_Info_0_96, STATE_VARIABLE_Info_97);
                    {
                      GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_145, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), GoalExpr_145, 1) = ((MR_Box) (Reason_29));
                      MR_hl_field(MR_mktag(3), GoalExpr_145, 2) = ((MR_Box) (InnerGoal_144));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Goal_8 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_145));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_29, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word InnerGoal_142;
                        MR_Word GoalExpr_143;

                        check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(Instmap_6, InnerGoal0_30, &InnerGoal_142, STATE_VARIABLE_Info_0_96, STATE_VARIABLE_Info_97);
                        {
                          GoalExpr_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_143, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(MR_mktag(3), GoalExpr_143, 1) = ((MR_Box) (Reason_29));
                          MR_hl_field(MR_mktag(3), GoalExpr_143, 2) = ((MR_Box) (InnerGoal_142));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          *Goal_8 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_143));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word InnerGoal_148;
                        MR_Word GoalExpr_149;

                        check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(Instmap_6, InnerGoal0_30, &InnerGoal_148, STATE_VARIABLE_Info_0_96, STATE_VARIABLE_Info_97);
                        {
                          GoalExpr_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_149, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(MR_mktag(3), GoalExpr_149, 1) = ((MR_Box) (Reason_29));
                          MR_hl_field(MR_mktag(3), GoalExpr_149, 2) = ((MR_Box) (InnerGoal_148));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          *Goal_8 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_149));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word InnerGoal_146;
                        MR_Word GoalExpr_147;

                        check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(Instmap_6, InnerGoal0_30, &InnerGoal_146, STATE_VARIABLE_Info_0_96, STATE_VARIABLE_Info_97);
                        {
                          GoalExpr_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_147, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(MR_mktag(3), GoalExpr_147, 1) = ((MR_Box) (Reason_29));
                          MR_hl_field(MR_mktag(3), GoalExpr_147, 2) = ((MR_Box) (InnerGoal_146));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          *Goal_8 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_147));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word InnerGoal_150;
                        MR_Word GoalExpr_151;

                        check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(Instmap_6, InnerGoal0_30, &InnerGoal_150, STATE_VARIABLE_Info_0_96, STATE_VARIABLE_Info_97);
                        {
                          GoalExpr_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_151, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(MR_mktag(3), GoalExpr_151, 1) = ((MR_Box) (Reason_29));
                          MR_hl_field(MR_mktag(3), GoalExpr_151, 2) = ((MR_Box) (InnerGoal_150));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          *Goal_8 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_151));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word InnerGoal_128;
                        MR_Word GoalExpr_129;

                        check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(Instmap_6, InnerGoal0_30, &InnerGoal_128, STATE_VARIABLE_Info_0_96, STATE_VARIABLE_Info_97);
                        {
                          GoalExpr_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_129, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(MR_mktag(3), GoalExpr_129, 1) = ((MR_Box) (Reason_29));
                          MR_hl_field(MR_mktag(3), GoalExpr_129, 2) = ((MR_Box) (InnerGoal_128));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          *Goal_8 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_129));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Word InnerGoal_54;
                        MR_Word GoalExpr_121;

                        check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(Instmap_6, InnerGoal0_30, &InnerGoal_54, STATE_VARIABLE_Info_0_96, STATE_VARIABLE_Info_97);
                        {
                          GoalExpr_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_121, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(MR_mktag(3), GoalExpr_121, 1) = ((MR_Box) (Reason_29));
                          MR_hl_field(MR_mktag(3), GoalExpr_121, 2) = ((MR_Box) (InnerGoal_54));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          *Goal_8 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_121));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word Var_154 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_29, (MR_Integer) 2))) & (MR_Integer) 3);

                        switch (Var_154) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            {
                              *Goal_8 = Goal0_7;
                              *STATE_VARIABLE_Info_97 = STATE_VARIABLE_Info_0_96;
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_Word InnerGoal_134;
                              MR_Word GoalExpr_135;

                              check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(Instmap_6, InnerGoal0_30, &InnerGoal_134, STATE_VARIABLE_Info_0_96, STATE_VARIABLE_Info_97);
                              {
                                GoalExpr_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), GoalExpr_135, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                                MR_hl_field(MR_mktag(3), GoalExpr_135, 1) = ((MR_Box) (Reason_29));
                                MR_hl_field(MR_mktag(3), GoalExpr_135, 2) = ((MR_Box) (InnerGoal_134));
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                *Goal_8 = base;
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_135));
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
                              }
                            }
                            break;
                          case (MR_Integer) 0:
                            {
                              {
                                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.expand_try_goals_in_goal\'/5", (MR_String) "from_ground_term_initial");
                                return;
                              }
                            }
                            break;
                          case (MR_Integer) 3:
                            {
                              MR_Word InnerGoal_136;
                              MR_Word GoalExpr_137;

                              check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(Instmap_6, InnerGoal0_30, &InnerGoal_136, STATE_VARIABLE_Info_0_96, STATE_VARIABLE_Info_97);
                              {
                                GoalExpr_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), GoalExpr_137, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                                MR_hl_field(MR_mktag(3), GoalExpr_137, 1) = ((MR_Box) (Reason_29));
                                MR_hl_field(MR_mktag(3), GoalExpr_137, 2) = ((MR_Box) (InnerGoal_136));
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                *Goal_8 = base;
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_137));
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
                              }
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Word InnerGoal_152;
                        MR_Word GoalExpr_153;

                        check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(Instmap_6, InnerGoal0_30, &InnerGoal_152, STATE_VARIABLE_Info_0_96, STATE_VARIABLE_Info_97);
                        {
                          GoalExpr_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_153, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(MR_mktag(3), GoalExpr_153, 1) = ((MR_Box) (Reason_29));
                          MR_hl_field(MR_mktag(3), GoalExpr_153, 2) = ((MR_Box) (InnerGoal_152));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          *Goal_8 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_153));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
                        }
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word InnerGoal_140;
                        MR_Word GoalExpr_141;

                        check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(Instmap_6, InnerGoal0_30, &InnerGoal_140, STATE_VARIABLE_Info_0_96, STATE_VARIABLE_Info_97);
                        {
                          GoalExpr_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_141, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(MR_mktag(3), GoalExpr_141, 1) = ((MR_Box) (Reason_29));
                          MR_hl_field(MR_mktag(3), GoalExpr_141, 2) = ((MR_Box) (InnerGoal_140));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          *Goal_8 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_141));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
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
              MR_Word Vars_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));
              MR_Word Cond0_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 2))));
              MR_Word Then0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 3))));
              MR_Word Else0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 4))));
              MR_Word Cond_60;
              MR_Word Then_61;
              MR_Word Else_62;
              MR_Word GoalExpr_124;

              check_hlds__try_expand__expand_try_goals_in_if_then_else_9_p_0(Instmap_6, Cond0_57, &Cond_60, Then0_58, &Then_61, Else0_59, &Else_62, STATE_VARIABLE_Info_0_96, STATE_VARIABLE_Info_97);
              {
                GoalExpr_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_124, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_124, 1) = ((MR_Box) (Vars_56));
                MR_hl_field(MR_mktag(3), GoalExpr_124, 2) = ((MR_Box) (Cond_60));
                MR_hl_field(MR_mktag(3), GoalExpr_124, 3) = ((MR_Box) (Then_61));
                MR_hl_field(MR_mktag(3), GoalExpr_124, 4) = ((MR_Box) (Else_62));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_124));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_10, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand0_81)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.expand_try_goals_in_goal\'/5", (MR_String) "bi_implication");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word AtomicGoalType_85 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShortHand0_81, (MR_Integer) 0))) & (MR_Integer) 3);
                    MR_Word Outer_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_81, (MR_Integer) 1))));
                    MR_Word Inner_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_81, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_88 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_81, (MR_Integer) 3))));
                    MR_Word MainGoal0_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_81, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_81, (MR_Integer) 5))));
                    MR_Word OrElseInners_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_81, (MR_Integer) 6))));
                    MR_Word MainGoal_92;
                    MR_Word OrElseGoals_93;
                    MR_Word STATE_VARIABLE_Info_101_101;
                    MR_Word Var_103;
                    MR_Word GoalExpr_125;

                    check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(Instmap_6, MainGoal0_89, &MainGoal_92, STATE_VARIABLE_Info_0_96, &STATE_VARIABLE_Info_101_101);
                    check_hlds__try_expand__expand_try_goals_in_disj_5_p_0(Instmap_6, OrElseGoals0_90, &OrElseGoals_93, STATE_VARIABLE_Info_101_101, STATE_VARIABLE_Info_97);
                    {
                      GoalExpr_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), GoalExpr_125, 0) = (MR_Box) ((MR_Unsigned) (AtomicGoalType_85));
                      MR_hl_field(MR_mktag(1), GoalExpr_125, 1) = ((MR_Box) (Outer_86));
                      MR_hl_field(MR_mktag(1), GoalExpr_125, 2) = ((MR_Box) (Inner_87));
                      MR_hl_field(MR_mktag(1), GoalExpr_125, 3) = ((MR_Box) (MaybeOutputVars_88));
                      MR_hl_field(MR_mktag(1), GoalExpr_125, 4) = ((MR_Box) (MainGoal_92));
                      MR_hl_field(MR_mktag(1), GoalExpr_125, 5) = ((MR_Box) (OrElseGoals_93));
                      MR_hl_field(MR_mktag(1), GoalExpr_125, 6) = ((MR_Box) (OrElseInners_91));
                    }
                    {
                      Var_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_103, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                      MR_hl_field(MR_mktag(3), Var_103, 1) = ((MR_Box) (GoalExpr_125));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Goal_8 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_103));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_11));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  check_hlds__try_expand__expand_try_goal_5_p_0(Instmap_6, ShortHand0_81, Goal_8, STATE_VARIABLE_Info_0_96, STATE_VARIABLE_Info_97);
                  break;
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__try_expand__expand_try_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__instmap__var_is_bound_in_instmap_delta_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goal_5_p_0(
  MR_Word Instmap_6,
  MR_Word TryGoal_7,
  MR_Word * FinalGoal_8,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34)
{
  {
    MR_bool succeeded;
    MR_Word MaybeIO_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TryGoal_7, (MR_Integer) 0))));
    MR_Word ResultVar_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TryGoal_7, (MR_Integer) 1))));
    MR_Word IntermediateGoal_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TryGoal_7, (MR_Integer) 2))));
    MR_Word Goal0_13;
    MR_Word Then0_14;
    MR_Word MaybeElse0_15;
    MR_Word ExcpHandling0_16;
    MR_Word Goal1_17;
    MR_Word InstmapAfterGoal_18;
    MR_Word Then1_19;
    MR_Word MaybeElse1_22;
    MR_Word ExcpHandling1_23;
    MR_Word GoalOutputVarsSet0_24;
    MR_Word GoalOutputVarsSet_27;
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_33, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_Info_36_36;
    MR_Word STATE_VARIABLE_Info_37_37;
    MR_Word STATE_VARIABLE_Info_38_38;
    MR_Word STATE_VARIABLE_Info_39_39;
    MR_Word Var_40;
    MR_Word STATE_VARIABLE_ModuleInfo_42_42;
    MR_Word STATE_VARIABLE_PredInfo_43_43;
    MR_Word STATE_VARIABLE_ProcInfo_44_44;
    MR_Word STATE_VARIABLE_PredInfo_45_45;
    MR_Word STATE_VARIABLE_ProcInfo_46_46;
    MR_Word STATE_VARIABLE_ModuleInfo_47_47;
    MR_Word GoalInfo_62;
    MR_Word NonLocals_63;
    MR_Word InstmapDelta_64;
    MR_Word Var_65;

    check_hlds__try_expand__extract_intermediate_goal_parts_7_p_0(Var_35, ResultVar_11, IntermediateGoal_12, &Goal0_13, &Then0_14, &MaybeElse0_15, &ExcpHandling0_16);
    check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(Instmap_6, Goal0_13, &Goal1_17, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_36_36);
    hlds__goal_util__update_instmap_3_p_0(Goal0_13, Instmap_6, &InstmapAfterGoal_18);
    check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(InstmapAfterGoal_18, Then0_14, &Then1_19, STATE_VARIABLE_Info_36_36, &STATE_VARIABLE_Info_37_37);
    if ((MaybeElse0_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeElse1_22 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Info_38_38 = STATE_VARIABLE_Info_37_37;
    }
    else
    {
      MR_Word Else0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElse0_15, (MR_Integer) 0))));
      MR_Word Else1_21;

      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(Instmap_6, Else0_20, &Else1_21, STATE_VARIABLE_Info_37_37, &STATE_VARIABLE_Info_38_38);
      {
        MaybeElse1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeElse1_22, 0) = ((MR_Box) (Else1_21));
      }
    }
    check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(Instmap_6, ExcpHandling0_16, &ExcpHandling1_23, STATE_VARIABLE_Info_38_38, &STATE_VARIABLE_Info_39_39);
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 0))));
    GoalInfo_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_13, (MR_Integer) 1))));
    NonLocals_63 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_62);
    InstmapDelta_64 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_62);
    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&check_hlds__try_expand_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (check_hlds__try_expand__expand_try_goal_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) (Instmap_6));
      MR_hl_field(MR_mktag(0), Var_65, 5) = ((MR_Box) (InstmapDelta_64));
    }
    GoalOutputVarsSet0_24 = parse_tree__set_of_var__filter_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_65, NonLocals_63);
    if ((MaybeIO_10 == (MR_Word) ((MR_Unsigned) 0U)))
      GoalOutputVarsSet_27 = GoalOutputVarsSet0_24;
    else
    {
      MR_Word IOStateVarFinal_26;
      MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIO_10, (MR_Integer) 0))));

      IOStateVarFinal_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 1))));
      parse_tree__set_of_var__delete_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), IOStateVarFinal_26, GoalOutputVarsSet0_24, &GoalOutputVarsSet_27);
    }
    STATE_VARIABLE_ModuleInfo_42_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 0))));
    STATE_VARIABLE_PredInfo_43_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 1))));
    STATE_VARIABLE_ProcInfo_44_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_39_39, (MR_Integer) 2))));
    check_hlds__try_expand__expand_try_goal_2_15_p_0(MaybeIO_10, ResultVar_11, Goal1_17, Then1_19, MaybeElse1_22, ExcpHandling1_23, InstmapAfterGoal_18, GoalOutputVarsSet_27, FinalGoal_8, STATE_VARIABLE_PredInfo_43_43, &STATE_VARIABLE_PredInfo_45_45, STATE_VARIABLE_ProcInfo_44_44, &STATE_VARIABLE_ProcInfo_46_46, STATE_VARIABLE_ModuleInfo_42_42, &STATE_VARIABLE_ModuleInfo_47_47);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_34 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_47_47));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_PredInfo_45_45));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (STATE_VARIABLE_ProcInfo_46_46));
      MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
  }
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_if_then_else_9_p_0(
  MR_Word Instmap0_10,
  MR_Word Cond0_11,
  MR_Word * Cond_12,
  MR_Word Then0_13,
  MR_Word * Then_14,
  MR_Word Else0_15,
  MR_Word * Else_16,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_Word CondInfo_19;
    MR_Word CondInstmapDelta_20;
    MR_Word InstmapAfterCond_21;
    MR_Word STATE_VARIABLE_Info_24_24;
    MR_Word STATE_VARIABLE_Info_25_25;

    check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(Instmap0_10, Cond0_11, Cond_12, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_24_24);
    CondInfo_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond0_11, (MR_Integer) 1))));
    CondInstmapDelta_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CondInfo_19);
    hlds__instmap__apply_instmap_delta_3_p_0(Instmap0_10, CondInstmapDelta_20, &InstmapAfterCond_21);
    check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(InstmapAfterCond_21, Then0_13, Then_14, STATE_VARIABLE_Info_24_24, &STATE_VARIABLE_Info_25_25);
    check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(Instmap0_10, Else0_15, Else_16, STATE_VARIABLE_Info_25_25, STATE_VARIABLE_Info_23);
  }
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
    MR_Word Case0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Cases0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Case_13;
    MR_Word Cases_14;
    MR_Word MainConsId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_11, (MR_Integer) 0))));
    MR_Word OtherConsIds_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_11, (MR_Integer) 1))));
    MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_11, (MR_Integer) 2))));
    MR_Word Goal_19;
    MR_Word STATE_VARIABLE_Info_22_22;

    check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(HeadVar__1_1, Goal0_18, &Goal_19, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_22_22);
    check_hlds__try_expand__expand_try_goals_in_cases_5_p_0(HeadVar__1_1, Cases0_12, &Cases_14, STATE_VARIABLE_Info_22_22, STATE_VARIABLE_Info_5);
    {
      Case_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_13, 0) = ((MR_Box) (MainConsId_16));
      MR_hl_field(MR_mktag(0), Case_13, 1) = ((MR_Box) (OtherConsIds_17));
      MR_hl_field(MR_mktag(0), Case_13, 2) = ((MR_Box) (Goal_19));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_14));
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
    MR_Word Goal0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_13;
    MR_Word Goals_14;
    MR_Word GoalInfo_17;
    MR_Word InstmapDelta_18;
    MR_Word Instmap_19;
    MR_Word STATE_VARIABLE_Info_22_22;

    check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(HeadVar__1_1, Goal0_11, &Goal_13, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_22_22);
    GoalInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_11, (MR_Integer) 1))));
    InstmapDelta_18 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_17);
    hlds__instmap__apply_instmap_delta_3_p_0(HeadVar__1_1, InstmapDelta_18, &Instmap_19);
    check_hlds__try_expand__expand_try_goals_in_conj_5_p_0(Instmap_19, Goals0_12, &Goals_14, STATE_VARIABLE_Info_22_22, STATE_VARIABLE_Info_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_14));
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
  {
    MR_bool succeeded;
    MR_Word GoalPrime_15;
    MR_Word ThenPrime_16;
    MR_Word MaybeElsePrime_17;
    MR_Word ExcpHandlingPrime_18;
    MR_Word TypeInfo_41_63;
    MR_Word TypeInfo_42_64;
    MR_Word Conjuncts_37;
    MR_Word MagicCall_39;
    MR_Word Switch_41;
    MR_Word Cases_48;
    MR_Word SucceededGoal_49;
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntermediateGoal_10, (MR_Integer) 0))));
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;

    succeeded = ((((MR_tag((MR_Word) Var_50)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 1))) & (MR_Integer) 1);
      Conjuncts_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 2))));
      succeeded = (Var_51 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (Conjuncts_37 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjuncts_37, (MR_Integer) 0))));
          Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjuncts_37, (MR_Integer) 1))));
          MagicCall_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_52, (MR_Integer) 0))));
          succeeded = (Var_53 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_53, (MR_Integer) 0))));
            Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_53, (MR_Integer) 1))));
            succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Switch_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_54, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) MagicCall_39)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MagicCall_39, (MR_Integer) 2))));
                succeeded = (Var_56 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_56, (MR_Integer) 0))));
                  Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_56, (MR_Integer) 1))));
                  TypeInfo_41_63 = (MR_Word) (&check_hlds__try_expand_scalar_common_1[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_41_63, ((MR_Box) (ResultVar_9)), ((MR_Box) (Var_61)));
                  if (succeeded)
                  {
                    succeeded = (Var_57 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((((MR_tag((MR_Word) Switch_41)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Switch_41, (MR_Integer) 0)))) == (MR_Integer) 4)));
                      if (succeeded)
                      {
                        Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Switch_41, (MR_Integer) 1))));
                        Var_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Switch_41, (MR_Integer) 2))) & (MR_Integer) 1);
                        Cases_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Switch_41, (MR_Integer) 3))));
                        TypeInfo_42_64 = (MR_Word) (&check_hlds__try_expand_scalar_common_1[1]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_42_64, ((MR_Box) (ResultVar_9)), ((MR_Box) (Var_62)));
                        if (succeeded)
                        {
                          succeeded = (Var_58 == (MR_Integer) 1);
                          if (succeeded)
                          {
                            Var_59 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
                            check_hlds__try_expand__lookup_case_goal_3_p_0(Cases_48, Var_59, &SucceededGoal_49);
                            succeeded = check_hlds__try_expand__extract_from_succeeded_goal_5_p_0(ModuleInfo_8, SucceededGoal_49, &GoalPrime_15, &ThenPrime_16, &MaybeElsePrime_17);
                            if (succeeded)
                            {
                              Var_60 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
                              check_hlds__try_expand__lookup_case_goal_3_p_0(Cases_48, Var_60, &ExcpHandlingPrime_18);
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
      MR_Word GoalPrime_26;
      MR_Word ThenPrime_27;
      MR_Word MaybeElsePrime_28;
      MR_Word ExcpHandlingPrime_29;
      MR_Word ScopedGoal_20;
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntermediateGoal_10, (MR_Integer) 0))));

      succeeded = ((((MR_tag((MR_Word) Var_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        ScopedGoal_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_22, (MR_Integer) 2))));
        succeeded = check_hlds__try_expand__extract_intermediate_goal_parts_2_7_p_0(ModuleInfo_8, ResultVar_9, ScopedGoal_20, &GoalPrime_26, &ThenPrime_27, &MaybeElsePrime_28, &ExcpHandlingPrime_29);
      }
      if (succeeded)
      {
        *Goal_11 = GoalPrime_26;
        *Then_12 = ThenPrime_27;
        *MaybeElse_13 = MaybeElsePrime_28;
        *ExcpHandling_14 = ExcpHandlingPrime_29;
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.extract_intermediate_goal_parts\'/7", (MR_String) "unexpected goal form");
          return;
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__try_expand__extract_intermediate_goal_parts_2_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word ResultVar_9,
  MR_Word IntermediateGoal_10,
  MR_Word * Goal_11,
  MR_Word * Then_12,
  MR_Word * MaybeElse_13,
  MR_Word * ExcpHandling_14)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_41_41;
    MR_Word TypeInfo_42_42;
    MR_Word Conjuncts_15;
    MR_Word MagicCall_17;
    MR_Word Switch_19;
    MR_Word Cases_26;
    MR_Word SucceededGoal_27;
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntermediateGoal_10, (MR_Integer) 0))));
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;

    succeeded = ((((MR_tag((MR_Word) Var_28)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_28, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_28, (MR_Integer) 1))) & (MR_Integer) 1);
      Conjuncts_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_28, (MR_Integer) 2))));
      succeeded = (Var_29 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (Conjuncts_15 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjuncts_15, (MR_Integer) 0))));
          Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjuncts_15, (MR_Integer) 1))));
          MagicCall_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0))));
          succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 0))));
            Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 1))));
            succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Switch_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) MagicCall_17)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MagicCall_17, (MR_Integer) 2))));
                succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 0))));
                  Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 1))));
                  TypeInfo_41_41 = (MR_Word) (&check_hlds__try_expand_scalar_common_1[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_41_41, ((MR_Box) (ResultVar_9)), ((MR_Box) (Var_39)));
                  if (succeeded)
                  {
                    succeeded = (Var_35 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((((MR_tag((MR_Word) Switch_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Switch_19, (MR_Integer) 0)))) == (MR_Integer) 4)));
                      if (succeeded)
                      {
                        Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Switch_19, (MR_Integer) 1))));
                        Var_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Switch_19, (MR_Integer) 2))) & (MR_Integer) 1);
                        Cases_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Switch_19, (MR_Integer) 3))));
                        TypeInfo_42_42 = (MR_Word) (&check_hlds__try_expand_scalar_common_1[1]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_42_42, ((MR_Box) (ResultVar_9)), ((MR_Box) (Var_40)));
                        if (succeeded)
                        {
                          succeeded = (Var_36 == (MR_Integer) 1);
                          if (succeeded)
                          {
                            Var_37 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
                            check_hlds__try_expand__lookup_case_goal_3_p_0(Cases_26, Var_37, &SucceededGoal_27);
                            succeeded = check_hlds__try_expand__extract_from_succeeded_goal_5_p_0(ModuleInfo_8, SucceededGoal_27, Goal_11, Then_12, MaybeElse_13);
                            if (succeeded)
                            {
                              Var_38 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
                              check_hlds__try_expand__lookup_case_goal_3_p_0(Cases_26, Var_38, ExcpHandling_14);
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
    return succeeded;
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
      MR_String Var_8;
      MR_String Var_10;

      Var_10 = mercury__string__string_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ((MR_Box) (ConsId_2)));
      Var_8 = mercury__string__f_43_43_2_f_0((MR_String) "couldn\'t find ", Var_10);
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.lookup_case_goal\'/3", Var_8);
        return;
      }
    }
    else
    {
      MR_Word Case_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalPrime_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_11, (MR_Integer) 2))));
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_11, (MR_Integer) 1))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_11, (MR_Integer) 0))));

      succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_2, Var_18);
      if (succeeded)
        succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        *Goal_3 = GoalPrime_15;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Cases_12;

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
  {
    MR_bool succeeded;
    MR_Word Conjuncts0_11;
    MR_Word DeconstructResult_13;
    MR_Word TestNullTuple_14;
    MR_Word Conjuncts1_15;
    MR_Word TestRHS_23;
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SucceededGoal_7, (MR_Integer) 0))));
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Integer Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Rest_30;
    MR_Word GoalPrime_32;
    MR_Word Then0_33;
    MR_Word Else0_34;
    MR_Word IfThenElse_28;
    MR_Word Var_57;

    succeeded = ((((MR_tag((MR_Word) Var_48)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_48, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_48, (MR_Integer) 1))) & (MR_Integer) 1);
      Conjuncts0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_48, (MR_Integer) 2))));
      succeeded = (Var_49 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (Conjuncts0_11 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          DeconstructResult_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjuncts0_11, (MR_Integer) 0))));
          Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjuncts0_11, (MR_Integer) 1))));
          succeeded = (Var_50 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            TestNullTuple_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 0))));
            Conjuncts1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 1))));
            Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeconstructResult_13, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) Var_51)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TestNullTuple_14, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Var_52)) == (MR_Integer) 1);
              if (succeeded)
              {
                TestRHS_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_52, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) TestRHS_23)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TestRHS_23, (MR_Integer) 0))));
                  Var_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), TestRHS_23, (MR_Integer) 1))) & (MR_Integer) 1);
                  Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TestRHS_23, (MR_Integer) 2))));
                  succeeded = ((((MR_tag((MR_Word) Var_53)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_53, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    Var_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_53, (MR_Integer) 1))));
                    succeeded = (Var_54 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      succeeded = (Var_55 == (MR_Integer) 0);
                      if (succeeded)
                        succeeded = (Var_56 == (MR_Word) ((MR_Unsigned) 0U));
                    }
                  }
                }
                if (succeeded)
                {
                  succeeded = (Conjuncts1_15 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjuncts1_15, (MR_Integer) 0))));
                    Rest_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjuncts1_15, (MR_Integer) 1))));
                    IfThenElse_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_57, (MR_Integer) 0))));
                    succeeded = ((((MR_tag((MR_Word) IfThenElse_28)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), IfThenElse_28, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (succeeded)
                    {
                      GoalPrime_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IfThenElse_28, (MR_Integer) 2))));
                      Then0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IfThenElse_28, (MR_Integer) 3))));
                      Else0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), IfThenElse_28, (MR_Integer) 4))));
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
                    GoalInfo_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *Goal_8, (MR_Integer) 1))));
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
                          MR_Word Var_82;
                          MR_Word Var_90;
                          MR_Word Var_91;

                          Var_82 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
                          Var_90 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_91 = mercury__term__context_init_0_f_0();
                          hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_6, Var_82, (MR_String) "unreachable", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 6, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_90, Var_91, Then_9);
                        }
                        break;
                    }
                    hlds__hlds_goal__conjoin_goal_and_goal_list_3_p_0(Else0_34, Rest_30, &Else_40);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeElse_10 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Else_40));
                    }
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word SomeGoal_41;
                    MR_Word AfterSomeGoal_42;
                    MR_Word Var_58;
                    MR_Word Var_59;
                    MR_Word Var_60;
                    MR_Word Rest_70;
                    MR_Word Then0_71;
                    MR_Word SomeThen_44;
                    MR_Word Var_61;
                    MR_Word Var_62;
                    MR_Word Var_63;

                    succeeded = (Conjuncts1_15 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      SomeGoal_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjuncts1_15, (MR_Integer) 0))));
                      AfterSomeGoal_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjuncts1_15, (MR_Integer) 1))));
                      Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SomeGoal_41, (MR_Integer) 0))));
                      succeeded = ((((MR_tag((MR_Word) Var_58)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_58, (MR_Integer) 0)))) == (MR_Integer) 5)));
                      if (succeeded)
                      {
                        Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_58, (MR_Integer) 1))));
                        *Goal_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_58, (MR_Integer) 2))));
                        succeeded = ((MR_tag((MR_Word) Var_59)) == (MR_Integer) 0);
                        if (succeeded)
                        {
                          Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_59, (MR_Integer) 0))));
                          succeeded = (Var_60 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = (AfterSomeGoal_42 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              SomeThen_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AfterSomeGoal_42, (MR_Integer) 0))));
                              Rest_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AfterSomeGoal_42, (MR_Integer) 1))));
                              Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SomeThen_44, (MR_Integer) 0))));
                              succeeded = ((((MR_tag((MR_Word) Var_61)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_61, (MR_Integer) 0)))) == (MR_Integer) 5)));
                              if (succeeded)
                              {
                                Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_61, (MR_Integer) 1))));
                                Then0_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_61, (MR_Integer) 2))));
                                succeeded = ((MR_tag((MR_Word) Var_62)) == (MR_Integer) 0);
                                if (succeeded)
                                {
                                  Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 0))));
                                  succeeded = (Var_63 == (MR_Word) ((MR_Unsigned) 0U));
                                }
                              }
                            }
                            if (succeeded)
                            {
                              hlds__hlds_goal__conjoin_goal_and_goal_list_3_p_0(Then0_71, Rest_70, Then_9);
                              *MaybeElse_10 = (MR_Word) ((MR_Unsigned) 0U);
                            }
                            else
                            {
                              MR_Word GoalInfo_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *Goal_8, (MR_Integer) 1))));
                              MR_Word GoalDetism_68;
                              MR_Word GoalMaxSoln_69;
                              MR_Word Var_47;

                              GoalDetism_68 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_67);
                              parse_tree__prog_data__determinism_components_3_p_0(GoalDetism_68, &Var_47, &GoalMaxSoln_69);
                              switch (GoalMaxSoln_69) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 3:
                                case (MR_Integer) 2:
                                case (MR_Integer) 1:
                                  {
                                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.extract_from_succeeded_goal\'/5", (MR_String) "goal not erroneous");
                                  }
                                  break;
                                case (MR_Integer) 0:
                                  {
                                    check_hlds__try_expand__make_unreachable_call_2_p_0(ModuleInfo_6, Then_9);
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
}

static void MR_CALL 
check_hlds__try_expand__make_unreachable_call_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * Goal_4)
{
  {
    MR_Word Var_5;
    MR_Word Var_13;
    MR_Word Var_14;

    Var_5 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    Var_13 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    Var_14 = mercury__term__context_init_0_f_0();
    hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_3, Var_5, (MR_String) "unreachable", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 6, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_13, Var_14, Goal_4);
  }
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goal_2_15_p_0(
  MR_Word MaybeIO_16,
  MR_Word ResultVar_17,
  MR_Word Goal1_18,
  MR_Word Then1_19,
  MR_Word MaybeElse1_20,
  MR_Word ExcpHandling1_21,
  MR_Word Instmap_22,
  MR_Word GoalOutputVarsSet_23,
  MR_Word * FinalGoal_24,
  MR_Word STATE_VARIABLE_PredInfo_0_62,
  MR_Word * STATE_VARIABLE_PredInfo_63,
  MR_Word STATE_VARIABLE_ProcInfo_0_64,
  MR_Word * STATE_VARIABLE_ProcInfo_65,
  MR_Word STATE_VARIABLE_ModuleInfo_0_66,
  MR_Word * STATE_VARIABLE_ModuleInfo_67)
{
  {
    MR_Word GoalOutputVars_29;
    MR_Word GoalOutputVarTypes_30;
    MR_Word OutputTupleType_31;
    MR_Word RealResultVarType_32;
    MR_Word LambdaVar_33;
    MR_Word AssignLambdaVar_34;
    MR_Word GoalInfo1_36;
    MR_Word GoalPurity_37;
    MR_Word GoalContext_38;
    MR_Word CallTryGoal_42;
    MR_Word Then_44;
    MR_Word ExcpHandling_46;
    MR_Word GoalInfo_47;
    MR_Word TmpTupleVar_48;
    MR_Word TupleVar_49;
    MR_Word DeconstructSucceeded_50;
    MR_Word TupleArgInsts_51;
    MR_Word CastOutputTuple_52;
    MR_Word DeconstructOutputs_53;
    MR_Word DeconstructsThen_54;
    MR_Word SucceededCase_55;
    MR_Word ExceptionCase_56;
    MR_Word MaybeFailedCase_59;
    MR_Word Cases_60;
    MR_Word ResultSwitch_61;
    MR_Word STATE_VARIABLE_VarTypes_68_68;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_73;
    MR_Word STATE_VARIABLE_VarTypes_76_76;
    MR_Word STATE_VARIABLE_ProcInfo_77_77;
    MR_Word STATE_VARIABLE_ProcInfo_78_78;
    MR_Word STATE_VARIABLE_ProcInfo_92_92;
    MR_Word STATE_VARIABLE_ProcInfo_105_105;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_118;
    MR_Word Var_120;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Word Var_128;
    MR_Word Var_129;
    MR_Word Var_130;

    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_64, &STATE_VARIABLE_VarTypes_68_68);
    GoalOutputVars_29 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalOutputVarsSet_23);
    hlds__vartypes__lookup_var_types_3_p_0(STATE_VARIABLE_VarTypes_68_68, GoalOutputVars_29, &GoalOutputVarTypes_30);
    {
      OutputTupleType_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), OutputTupleType_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), OutputTupleType_31, 1) = ((MR_Box) (GoalOutputVarTypes_30));
      MR_hl_field(MR_mktag(3), OutputTupleType_31, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_71 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) ((MR_String) "exception_result"));
    }
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (OutputTupleType_31));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      RealResultVarType_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RealResultVarType_32, 0) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(1), RealResultVarType_32, 1) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(1), RealResultVarType_32, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    hlds__vartypes__update_var_type_4_p_0(ResultVar_17, RealResultVarType_32, STATE_VARIABLE_VarTypes_68_68, &STATE_VARIABLE_VarTypes_76_76);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(STATE_VARIABLE_VarTypes_76_76, STATE_VARIABLE_ProcInfo_0_64, &STATE_VARIABLE_ProcInfo_77_77);
    check_hlds__try_expand__make_try_lambda_8_p_0(Goal1_18, GoalOutputVarsSet_23, OutputTupleType_31, MaybeIO_16, &LambdaVar_33, &AssignLambdaVar_34, STATE_VARIABLE_ProcInfo_77_77, &STATE_VARIABLE_ProcInfo_78_78);
    GoalInfo1_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_18, (MR_Integer) 1))));
    GoalPurity_37 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo1_36);
    GoalContext_38 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo1_36);
    if ((MaybeIO_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      check_hlds__try_expand__make_try_call_14_p_0((MR_String) "try", LambdaVar_33, ResultVar_17, (MR_Word) ((MR_Unsigned) 0U), OutputTupleType_31, GoalPurity_37, GoalContext_38, &CallTryGoal_42, STATE_VARIABLE_PredInfo_0_62, STATE_VARIABLE_PredInfo_63, STATE_VARIABLE_ProcInfo_78_78, &STATE_VARIABLE_ProcInfo_92_92, STATE_VARIABLE_ModuleInfo_0_66, STATE_VARIABLE_ModuleInfo_67);
      Then_44 = Then1_19;
      ExcpHandling_46 = ExcpHandling1_21;
    }
    else
    {
      MR_Word GoalInitialIOVar_39;
      MR_Word GoalFinalIOVar_40;
      MR_Word TryIOOutputVar_41;
      MR_Word UnifyThenInitialIOVar_43;
      MR_Word RenamingExcp_45;
      MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIO_16, (MR_Integer) 0))));
      MR_Word Var_85;
      MR_Word STATE_VARIABLE_ProcInfo_87_87;
      MR_Word Var_90;
      MR_Word Var_94;
      MR_Word Var_96;
      MR_Word Var_97;
      MR_Word Var_101;
      MR_Word Var_102;

      GoalInitialIOVar_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_84, (MR_Integer) 0))));
      GoalFinalIOVar_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_84, (MR_Integer) 1))));
      Var_85 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(Var_85, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_5[4])), &TryIOOutputVar_41, STATE_VARIABLE_ProcInfo_78_78, &STATE_VARIABLE_ProcInfo_87_87);
      {
        Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (TryIOOutputVar_41));
        MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (GoalInitialIOVar_39));
        MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_94));
      }
      check_hlds__try_expand__make_try_call_14_p_0((MR_String) "try_io", LambdaVar_33, ResultVar_17, Var_90, OutputTupleType_31, GoalPurity_37, GoalContext_38, &CallTryGoal_42, STATE_VARIABLE_PredInfo_0_62, STATE_VARIABLE_PredInfo_63, STATE_VARIABLE_ProcInfo_87_87, &STATE_VARIABLE_ProcInfo_92_92, STATE_VARIABLE_ModuleInfo_0_66, STATE_VARIABLE_ModuleInfo_67);
      {
        Var_96 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (TryIOOutputVar_41));
      }
      Var_97 = mercury__term__context_init_0_f_0();
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(GoalFinalIOVar_40, Var_96, Var_97, (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__try_expand_scalar_common_5[2])), (MR_Word) ((MR_Unsigned) 0U), &UnifyThenInitialIOVar_43);
      hlds__hlds_goal__conjoin_goals_3_p_0(UnifyThenInitialIOVar_43, Then1_19, &Then_44);
      {
        Var_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_102, 0) = ((MR_Box) (GoalInitialIOVar_39));
        MR_hl_field(MR_mktag(0), Var_102, 1) = ((MR_Box) (TryIOOutputVar_41));
      }
      {
        Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Var_102));
        MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      RenamingExcp_45 = mercury__map__from_assoc_list_1_f_0((MR_Word) (&check_hlds__try_expand_scalar_common_1[1]), (MR_Word) (&check_hlds__try_expand_scalar_common_1[1]), Var_101);
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(RenamingExcp_45, ExcpHandling1_21, &ExcpHandling_46);
    }
    hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo_47);
    hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(OutputTupleType_31, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_5[5])), &TmpTupleVar_48, STATE_VARIABLE_ProcInfo_92_92, &STATE_VARIABLE_ProcInfo_105_105);
    hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(OutputTupleType_31, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_5[0])), &TupleVar_49, STATE_VARIABLE_ProcInfo_105_105, STATE_VARIABLE_ProcInfo_65);
    Var_110 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
    {
      Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (TmpTupleVar_48));
      MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    hlds__make_goal__deconstruct_functor_4_p_0(ResultVar_17, Var_110, Var_111, &DeconstructSucceeded_50);
    hlds__instmap__instmap_lookup_vars_3_p_0(Instmap_22, GoalOutputVars_29, &TupleArgInsts_51);
    check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0(TmpTupleVar_48, TupleVar_49, TupleArgInsts_51, &CastOutputTuple_52);
    hlds__make_goal__deconstruct_tuple_3_p_0(TupleVar_49, GoalOutputVars_29, &DeconstructOutputs_53);
    {
      Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (Then_44));
      MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (DeconstructOutputs_53));
      MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_116));
    }
    {
      Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (CastOutputTuple_52));
      MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_115));
    }
    {
      Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (DeconstructSucceeded_50));
      MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_114));
    }
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_113, GoalInfo_47, &DeconstructsThen_54);
    Var_118 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
    {
      SucceededCase_55 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SucceededCase_55, 0) = ((MR_Box) (Var_118));
      MR_hl_field(MR_mktag(0), SucceededCase_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), SucceededCase_55, 2) = ((MR_Box) (DeconstructsThen_54));
    }
    Var_120 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
    {
      ExceptionCase_56 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ExceptionCase_56, 0) = ((MR_Box) (Var_120));
      MR_hl_field(MR_mktag(0), ExceptionCase_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ExceptionCase_56, 2) = ((MR_Box) (ExcpHandling_46));
    }
    if ((MaybeElse1_20 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeFailedCase_59 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Else1_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElse1_20, (MR_Integer) 0))));
      MR_Word FailedCase_58;
      MR_Word Var_122;

      Var_122 = parse_tree__builtin_lib_types__exception_failed_functor_0_f_0();
      {
        FailedCase_58 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FailedCase_58, 0) = ((MR_Box) (Var_122));
        MR_hl_field(MR_mktag(0), FailedCase_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), FailedCase_58, 2) = ((MR_Box) (Else1_57));
      }
      {
        MaybeFailedCase_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeFailedCase_59, 0) = ((MR_Box) (FailedCase_58));
        MR_hl_field(MR_mktag(1), MaybeFailedCase_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    {
      Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (ExceptionCase_56));
      MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (MaybeFailedCase_59));
    }
    {
      Cases_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Cases_60, 0) = ((MR_Box) (SucceededCase_55));
      MR_hl_field(MR_mktag(1), Cases_60, 1) = ((MR_Box) (Var_125));
    }
    {
      Var_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_126, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Var_126, 1) = ((MR_Box) (ResultVar_17));
      MR_hl_field(MR_mktag(3), Var_126, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_126, 3) = ((MR_Box) (Cases_60));
    }
    {
      ResultSwitch_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ResultSwitch_61, 0) = ((MR_Box) (Var_126));
      MR_hl_field(MR_mktag(0), ResultSwitch_61, 1) = ((MR_Box) (GoalInfo_47));
    }
    {
      Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (ResultSwitch_61));
      MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (CallTryGoal_42));
      MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (Var_130));
    }
    {
      Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (AssignLambdaVar_34));
      MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (Var_129));
    }
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_128, GoalInfo_47, FinalGoal_24);
  }
}

static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s * env_ptr = (struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s * env_ptr = (struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9 = ((MR_Word) ((env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__conv0_ArgInst_9));
    check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_2(env_ptr);
  }
}

static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s * env_ptr = (struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_13;
      MR_Word Var_10;
      MR_Unsigned packed_word_0;

      (env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), (env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if ((env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded)
      {
        packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), (env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9, (MR_Integer) 1)));
        Var_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), (env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9, (MR_Integer) 1))) & (MR_Integer) 7);
        Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9, (MR_Integer) 2))));
        (env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 0U));
      }
      (env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = !((env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded);
      if ((env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded)
        check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s * env_ptr = (struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), &(env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__conv0_ArgInst_9, (env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7, check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_3, env_ptr);
        }
        (env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0(
  MR_Word TmpTupleVar_5,
  MR_Word TupleVar_6,
  MR_Word TupleArgInsts_7,
  MR_Word * CastOrUnify_8)
{
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
        Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (TupleArity_11));
      }
      {
        Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) ((env).check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7));
      }
      {
        Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_17));
        MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        TupleInst_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TupleInst_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), TupleInst_12, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), TupleInst_12, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), TupleInst_12, 3) = ((MR_Box) (Var_16));
      }
      Var_21 = parse_tree__prog_mode__ground_inst_0_f_0();
      Var_22 = mercury__term__context_init_0_f_0();
      hlds__goal_util__generate_cast_with_insts_7_p_0((MR_Integer) 1, TmpTupleVar_5, TupleVar_6, Var_21, TupleInst_12, Var_22, CastOrUnify_8);
    }
    else
    {
      MR_Word Var_23;
      MR_Word Var_24;

      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (TmpTupleVar_5));
      }
      Var_24 = mercury__term__context_init_0_f_0();
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(TupleVar_6, Var_23, Var_24, (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__try_expand_scalar_common_5[2])), (MR_Word) ((MR_Unsigned) 0U), CastOrUnify_8);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__try_expand__make_try_call_14_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__try_expand__IntroducedFrom__pred__make_try_call__891__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
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
  MR_Word STATE_VARIABLE_PredInfo_0_38,
  MR_Word * STATE_VARIABLE_PredInfo_39,
  MR_Word STATE_VARIABLE_ProcInfo_0_40,
  MR_Word * STATE_VARIABLE_ProcInfo_41,
  MR_Word STATE_VARIABLE_ModuleInfo_0_42,
  MR_Word * STATE_VARIABLE_ModuleInfo_43)
{
  {
    MR_bool succeeded;
    MR_Word PolyInfo0_26;
    MR_Word TypeInfoVar_27;
    MR_Word MakeTypeInfoGoals_28;
    MR_Word PolyInfo_29;
    MR_Word PolySpecs_30;
    MR_Word Args_32;
    MR_Word CallGoal0_34;
    MR_Word GoalInfo_35;
    MR_Word CallGoal_36;
    MR_Word Var_47;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_57;
    MR_Word Var_61;
    MR_Word Var_63;
    MR_Word Var_64;

    check_hlds__polymorphism__create_poly_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_42, STATE_VARIABLE_PredInfo_0_38, STATE_VARIABLE_ProcInfo_0_40, &PolyInfo0_26);
    check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(OutputTupleType_19, Context_21, &TypeInfoVar_27, &MakeTypeInfoGoals_28, PolyInfo0_26, &PolyInfo_29);
    check_hlds__polymorphism__poly_info_extract_7_p_0(PolyInfo_29, &PolySpecs_30, STATE_VARIABLE_PredInfo_0_38, STATE_VARIABLE_PredInfo_39, STATE_VARIABLE_ProcInfo_0_40, STATE_VARIABLE_ProcInfo_41, STATE_VARIABLE_ModuleInfo_43);
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&check_hlds__try_expand_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (check_hlds__try_expand__make_try_call_14_p_0_1));
      MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (PolySpecs_30));
      MR_hl_field(MR_mktag(0), Var_47, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_4_p_0(Var_47, (MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.make_try_call\'/14", (MR_String) "got errors while making type_info_var");
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (ResultVar_17));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (LambdaVar_16));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (TypeInfoVar_27));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_54));
    }
    Args_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__try_expand_scalar_common_1[1]), Var_53, ExtraArgs_18);
    Var_57 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    Var_61 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    hlds__goal_util__generate_simple_call_12_p_0(*STATE_VARIABLE_ModuleInfo_43, Var_57, PredName_15, (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_5[3])), (MR_Integer) 4, (MR_Integer) 0, Args_32, (MR_Word) ((MR_Unsigned) 0U), Var_61, Context_21, &CallGoal0_34);
    hlds__hlds_goal__goal_info_init_2_p_0(Context_21, &GoalInfo_35);
    switch (GoalPurity_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Word ScopeReason_37;
          MR_Word Var_62;

          {
            ScopeReason_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ScopeReason_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), ScopeReason_37, 1) = (MR_Box) ((MR_Unsigned) (GoalPurity_20));
          }
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (ScopeReason_37));
            MR_hl_field(MR_mktag(3), Var_62, 2) = ((MR_Box) (CallGoal0_34));
          }
          {
            CallGoal_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CallGoal_36, 0) = ((MR_Box) (Var_62));
            MR_hl_field(MR_mktag(0), CallGoal_36, 1) = ((MR_Box) (GoalInfo_35));
          }
        }
        break;
      case (MR_Integer) 0:
        CallGoal_36 = CallGoal0_34;
        break;
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (CallGoal_36));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), MakeTypeInfoGoals_28, Var_64);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_63, GoalInfo_35, OverallGoal_22);
  }
}

static void MR_CALL 
check_hlds__try_expand__make_try_lambda_8_p_0(
  MR_Word Body0_9,
  MR_Word OutputVarsSet_10,
  MR_Word OutputTupleType_11,
  MR_Word MaybeIO_12,
  MR_Word * LambdaVar_13,
  MR_Word * AssignLambdaVar_14,
  MR_Word STATE_VARIABLE_ProcInfo_0_41,
  MR_Word * STATE_VARIABLE_ProcInfo_42)
{
  {
    MR_Word BodyInfo0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Body0_9, (MR_Integer) 1))));
    MR_Word NonLocals0_18;
    MR_Word NonLocals1_19;
    MR_Word OutputTupleVar_20;
    MR_Word LambdaParams_23;
    MR_Word LambdaParamTypes_24;
    MR_Word LambdaParamModes_25;
    MR_Word NonLocals_26;
    MR_Word LambdaType_27;
    MR_Word MakeOutputTuple_28;
    MR_Word LambdaBody0_29;
    MR_Word VarSet0_30;
    MR_Word VarTypes0_31;
    MR_Word VarSet_32;
    MR_Word VarTypes_33;
    MR_Word Renaming_34;
    MR_Word LambdaBody_35;
    MR_Word BodyGoalInfo_37;
    MR_Word BodyDetism_38;
    MR_Word LambdaDetism_39;
    MR_Word RHS_40;
    MR_Word STATE_VARIABLE_ProcInfo_44_44;
    MR_Word STATE_VARIABLE_ProcInfo_70_70;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_76;
    MR_Word STATE_VARIABLE_ProcInfo_77_77;
    MR_Word Var_83;
    MR_Word Var_84;

    NonLocals0_18 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(BodyInfo0_17);
    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals0_18, OutputVarsSet_10, &NonLocals1_19);
    hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(OutputTupleType_11, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_5[0])), &OutputTupleVar_20, STATE_VARIABLE_ProcInfo_0_41, &STATE_VARIABLE_ProcInfo_44_44);
    if ((MaybeIO_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_48;

      {
        LambdaParams_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), LambdaParams_23, 0) = ((MR_Box) (OutputTupleVar_20));
        MR_hl_field(MR_mktag(1), LambdaParams_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        LambdaParamTypes_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), LambdaParamTypes_24, 0) = ((MR_Box) (OutputTupleType_11));
        MR_hl_field(MR_mktag(1), LambdaParamTypes_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_48 = parse_tree__prog_mode__out_mode_0_f_0();
      {
        LambdaParamModes_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), LambdaParamModes_25, 0) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(1), LambdaParamModes_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      NonLocals_26 = NonLocals0_18;
    }
    else
    {
      MR_Word IOVarInitial_21;
      MR_Word IOVarFinal_22;
      MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIO_12, (MR_Integer) 0))));
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;

      IOVarInitial_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 0))));
      IOVarFinal_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 1))));
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (IOVarFinal_22));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (IOVarInitial_21));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_52));
      }
      {
        LambdaParams_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), LambdaParams_23, 0) = ((MR_Box) (OutputTupleVar_20));
        MR_hl_field(MR_mktag(1), LambdaParams_23, 1) = ((MR_Box) (Var_51));
      }
      Var_55 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
      Var_57 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_56));
      }
      {
        LambdaParamTypes_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), LambdaParamTypes_24, 0) = ((MR_Box) (OutputTupleType_11));
        MR_hl_field(MR_mktag(1), LambdaParamTypes_24, 1) = ((MR_Box) (Var_54));
      }
      Var_59 = parse_tree__prog_mode__out_mode_0_f_0();
      Var_61 = parse_tree__prog_mode__di_mode_0_f_0();
      Var_63 = parse_tree__prog_mode__uo_mode_0_f_0();
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_62));
      }
      {
        LambdaParamModes_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), LambdaParamModes_25, 0) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(1), LambdaParamModes_25, 1) = ((MR_Box) (Var_60));
      }
      parse_tree__set_of_var__delete_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), IOVarFinal_22, NonLocals1_19, &NonLocals_26);
    }
    {
      LambdaType_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaType_27, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), LambdaType_27, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), LambdaType_27, 2) = ((MR_Box) (LambdaParamTypes_24));
      MR_hl_field(MR_mktag(3), LambdaType_27, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), LambdaType_27, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), LambdaType_27, 5) = NULL;
    }
    hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(LambdaType_27, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_5[1])), LambdaVar_13, STATE_VARIABLE_ProcInfo_44_44, &STATE_VARIABLE_ProcInfo_70_70);
    Var_72 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputVarsSet_10);
    hlds__make_goal__construct_tuple_3_p_0(OutputTupleVar_20, Var_72, &MakeOutputTuple_28);
    hlds__hlds_goal__conjoin_goals_3_p_0(Body0_9, MakeOutputTuple_28, &LambdaBody0_29);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_70_70, &VarSet0_30);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_70_70, &VarTypes0_31);
    Var_73 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputVarsSet_10);
    Var_76 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__try_expand_scalar_common_1[1]), (MR_Word) (&check_hlds__try_expand_scalar_common_1[1]));
    hlds__goal_util__clone_variables_9_p_0(Var_73, VarSet0_30, VarTypes0_31, VarSet0_30, &VarSet_32, VarTypes0_31, &VarTypes_33, Var_76, &Renaming_34);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_32, STATE_VARIABLE_ProcInfo_70_70, &STATE_VARIABLE_ProcInfo_77_77);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_33, STATE_VARIABLE_ProcInfo_77_77, STATE_VARIABLE_ProcInfo_42);
    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Renaming_34, LambdaBody0_29, &LambdaBody_35);
    BodyGoalInfo_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaBody_35, (MR_Integer) 1))));
    BodyDetism_38 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(BodyGoalInfo_37);
    LambdaDetism_39 = ((&check_hlds__try_expand_vector_common_6[0 + BodyDetism_38]))->check_hlds__try_expand__vector_common_type_6_0__vct_6_f_0;
    Var_83 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_26);
    {
      RHS_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), RHS_40, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
      MR_hl_field(MR_mktag(2), RHS_40, 1) = NULL;
      MR_hl_field(MR_mktag(2), RHS_40, 2) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(2), RHS_40, 3) = ((MR_Box) (LambdaParams_23));
      MR_hl_field(MR_mktag(2), RHS_40, 4) = ((MR_Box) (LambdaParamModes_25));
      MR_hl_field(MR_mktag(2), RHS_40, 5) = (MR_Box) ((MR_Unsigned) (LambdaDetism_39));
      MR_hl_field(MR_mktag(2), RHS_40, 6) = ((MR_Box) (LambdaBody_35));
    }
    Var_84 = mercury__term__context_init_0_f_0();
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(*LambdaVar_13, RHS_40, Var_84, (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__try_expand_scalar_common_5[2])), (MR_Word) ((MR_Unsigned) 0U), AssignLambdaVar_14);
  }
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_disj_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Goal_8;
    MR_Word conv0_STATE_VARIABLE_Info_97;

    check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Goal_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_97);
    *wrapper_arg_2 = ((MR_Box) (conv1_Goal_8));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_97));
  }
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_disj_5_p_0(
  MR_Word Instmap0_6,
  MR_Word Goals0_7,
  MR_Word * Goals_8,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  {
    MR_Word Var_12;
    MR_Box conv2_STATE_VARIABLE_Info_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&check_hlds__try_expand_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (check_hlds__try_expand__expand_try_goals_in_disj_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Instmap0_6));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__try_expand__check_hlds__try_expand__type_ctor_info_trys_info_0), Var_12, Goals0_7, Goals_8, ((MR_Box) (STATE_VARIABLE_Info_0_10)), &conv2_STATE_VARIABLE_Info_11);
    *STATE_VARIABLE_Info_11 = ((MR_Word) (conv2_STATE_VARIABLE_Info_11));
  }
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_pred_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ModuleInfo_20;
    MR_Word conv0_STATE_VARIABLE_Specs_22;

    check_hlds__try_expand__expand_try_goals_in_proc_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_20, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_22);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_20));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_22));
  }
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_pred_5_p_0(
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  {
    MR_Word PredInfo_9;
    MR_Word ProcIds_10;
    MR_Word Var_15;
    MR_Box conv3_STATE_VARIABLE_ModuleInfo_12;
    MR_Box conv2_STATE_VARIABLE_Specs_14;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_11, PredId_6, &PredInfo_9);
    ProcIds_10 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(PredInfo_9);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&check_hlds__try_expand_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (check_hlds__try_expand__expand_try_goals_in_pred_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (PredId_6));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__try_expand_scalar_common_1[0]), Var_15, ProcIds_10, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_11)), &conv3_STATE_VARIABLE_ModuleInfo_12, ((MR_Box) (STATE_VARIABLE_Specs_0_13)), &conv2_STATE_VARIABLE_Specs_14);
    *STATE_VARIABLE_ModuleInfo_12 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_12));
    *STATE_VARIABLE_Specs_14 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_14));
  }
}

MR_bool MR_CALL 
check_hlds__try_expand__try_expand_may_introduce_calls_2_p_0(
  MR_String HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((strcmp(HeadVar__1_1, (MR_String) "try") == 0))
      succeeded = (HeadVar__2_2 == (MR_Integer) 2);
    else
    if ((strcmp(HeadVar__1_1, (MR_String) "try_io") == 0))
      succeeded = (HeadVar__2_2 == (MR_Integer) 4);
    else
    if ((strcmp(HeadVar__1_1, (MR_String) "unreachable") == 0))
      succeeded = (HeadVar__2_2 == (MR_Integer) 0);
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_module_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ModuleInfo_12;
    MR_Word conv1_STATE_VARIABLE_Specs_14;

    check_hlds__try_expand__expand_try_goals_in_pred_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_12, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Specs_14);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_12));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_14));
  }
}

void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_module_4_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  {
    MR_bool succeeded;
    MR_Word AvailModuleMap_7;
    MR_Word Var_16;
    MR_Box conv0_Var_8;

    hlds__hlds_module__module_info_get_avail_module_map_2_p_0(STATE_VARIABLE_ModuleInfo_0_12, &AvailModuleMap_7);
    Var_16 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0), AvailModuleMap_7, ((MR_Box) (Var_16)), &conv0_Var_8);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
    {
      MR_Word OptionsToRestore_10;
      MR_Word PredIds_11;
      MR_Word STATE_VARIABLE_Globals_17_17;
      MR_Word STATE_VARIABLE_Globals_18_18;
      MR_Word STATE_VARIABLE_ModuleInfo_19_19;
      MR_Word STATE_VARIABLE_ModuleInfo_21_21;
      MR_Word STATE_VARIABLE_Globals_23_23;
      MR_Word STATE_VARIABLE_Globals_24_24;
      MR_Box conv4_STATE_VARIABLE_ModuleInfo_21_21;
      MR_Box conv3_STATE_VARIABLE_Specs_15;

      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_12, &STATE_VARIABLE_Globals_17_17);
      check_hlds__det_report__disable_det_warnings_3_p_0(&OptionsToRestore_10, STATE_VARIABLE_Globals_17_17, &STATE_VARIABLE_Globals_18_18);
      hlds__hlds_module__module_info_set_globals_3_p_0(STATE_VARIABLE_Globals_18_18, STATE_VARIABLE_ModuleInfo_0_12, &STATE_VARIABLE_ModuleInfo_19_19);
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_19_19, &PredIds_11);
      mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__try_expand_scalar_common_1[0]), (MR_Word) (&check_hlds__try_expand_scalar_common_3[0]), PredIds_11, ((MR_Box) (STATE_VARIABLE_ModuleInfo_19_19)), &conv4_STATE_VARIABLE_ModuleInfo_21_21, ((MR_Box) (STATE_VARIABLE_Specs_0_14)), &conv3_STATE_VARIABLE_Specs_15);
      STATE_VARIABLE_ModuleInfo_21_21 = ((MR_Word) (conv4_STATE_VARIABLE_ModuleInfo_21_21));
      *STATE_VARIABLE_Specs_15 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_15));
      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_21_21, &STATE_VARIABLE_Globals_23_23);
      check_hlds__det_report__restore_det_warnings_3_p_0(OptionsToRestore_10, STATE_VARIABLE_Globals_23_23, &STATE_VARIABLE_Globals_24_24);
      hlds__hlds_module__module_info_set_globals_3_p_0(STATE_VARIABLE_Globals_24_24, STATE_VARIABLE_ModuleInfo_21_21, STATE_VARIABLE_ModuleInfo_13);
    }
    else
    {
      *STATE_VARIABLE_Specs_15 = STATE_VARIABLE_Specs_0_14;
      *STATE_VARIABLE_ModuleInfo_13 = STATE_VARIABLE_ModuleInfo_0_12;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__try_expand____Unify____trys_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__try_expand____Unify____trys_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__try_expand____Compare____trys_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__try_expand____Compare____trys_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
