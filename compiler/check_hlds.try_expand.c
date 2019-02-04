/*
** Automatically generated from `try_expand.m'
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


/* :- module check_hlds.try_expand. */
/* :- implementation. */

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
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
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

static const MR_DuFunctorDesc check_hlds__try_expand__check_hlds__try_expand__du_functor_desc_trys_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__try_expand__check_hlds__try_expand__du_stag_ordered_trys_info_0_0[1];

static const MR_DuPtagLayout check_hlds__try_expand__check_hlds__try_expand__du_ptag_ordered_trys_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__try_expand__check_hlds__try_expand__du_name_ordered_trys_info_0[1];

static const MR_Integer check_hlds__try_expand__check_hlds__try_expand__functor_number_map_trys_info_0[1];

static MR_bool MR_CALL 
check_hlds__try_expand____Unify____trys_info_0_0_10001(
  MR_Box check_hlds__try_expand__wrapper_arg_1,
  MR_Box check_hlds__try_expand__wrapper_arg_2);

static void MR_CALL 
check_hlds__try_expand____Compare____trys_info_0_0_10001(
  MR_Box * check_hlds__try_expand__wrapper_arg_1,
  MR_Box check_hlds__try_expand__wrapper_arg_2,
  MR_Box check_hlds__try_expand__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__try_expand__IntroducedFrom__pred__make_try_call__891__1_2_p_0(
  MR_Word check_hlds__try_expand__PolySpecs_30,
  MR_Word check_hlds__try_expand__HeadVar__2_51);

static void MR_CALL 
check_hlds__try_expand____Compare____trys_info_0_0(
  MR_Word * check_hlds__try_expand__HeadVar__1_1,
  MR_Word check_hlds__try_expand__HeadVar__2_2,
  MR_Word check_hlds__try_expand__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__try_expand____Unify____trys_info_0_0(
  MR_Word check_hlds__try_expand__HeadVar__1_1,
  MR_Word check_hlds__try_expand__HeadVar__2_2);

static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_1(
  void * check_hlds__try_expand__env_ptr_arg);

static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_3(
  void * check_hlds__try_expand__env_ptr_arg);

static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_2(
  void * check_hlds__try_expand__env_ptr_arg);

static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_4(
  void * check_hlds__try_expand__env_ptr_arg);

static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0(
  MR_Word check_hlds__try_expand__TmpTupleVar_5,
  MR_Word check_hlds__try_expand__TupleVar_6,
  MR_Word check_hlds__try_expand__TupleArgInsts_7,
  MR_Word * check_hlds__try_expand__CastOrUnify_8);

static void MR_CALL 
check_hlds__try_expand__make_unreachable_call_2_p_0(
  MR_Word check_hlds__try_expand__ModuleInfo_3,
  MR_Word * check_hlds__try_expand__Goal_4);

static MR_bool MR_CALL 
check_hlds__try_expand__make_try_call_14_p_0_1(
  MR_Box check_hlds__try_expand__closure_arg);

static void MR_CALL 
check_hlds__try_expand__make_try_call_14_p_0(
  MR_String check_hlds__try_expand__PredName_15,
  MR_Word check_hlds__try_expand__LambdaVar_16,
  MR_Word check_hlds__try_expand__ResultVar_17,
  MR_Word check_hlds__try_expand__ExtraArgs_18,
  MR_Word check_hlds__try_expand__OutputTupleType_19,
  MR_Word check_hlds__try_expand__GoalPurity_20,
  MR_Word check_hlds__try_expand__Context_21,
  MR_Word * check_hlds__try_expand__OverallGoal_22,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_38,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_PredInfo_39,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_40,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_41,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_42,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_43);

static void MR_CALL 
check_hlds__try_expand__make_try_lambda_8_p_0(
  MR_Word check_hlds__try_expand__Body0_9,
  MR_Word check_hlds__try_expand__OutputVarsSet_10,
  MR_Word check_hlds__try_expand__OutputTupleType_11,
  MR_Word check_hlds__try_expand__MaybeIO_12,
  MR_Word * check_hlds__try_expand__LambdaVar_13,
  MR_Word * check_hlds__try_expand__AssignLambdaVar_14,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_41,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_42);

static void MR_CALL 
check_hlds__try_expand__lookup_case_goal_3_p_0(
  MR_Word check_hlds__try_expand__HeadVar__1_1,
  MR_Word check_hlds__try_expand__ConsId_2,
  MR_Word * check_hlds__try_expand__Goal_3);

static MR_bool MR_CALL 
check_hlds__try_expand__extract_from_succeeded_goal_5_p_0(
  MR_Word check_hlds__try_expand__ModuleInfo_6,
  MR_Word check_hlds__try_expand__SucceededGoal_7,
  MR_Word * check_hlds__try_expand__Goal_8,
  MR_Word * check_hlds__try_expand__Then_9,
  MR_Word * check_hlds__try_expand__MaybeElse_10);

static MR_bool MR_CALL 
check_hlds__try_expand__extract_intermediate_goal_parts_2_7_p_0(
  MR_Word check_hlds__try_expand__ModuleInfo_8,
  MR_Word check_hlds__try_expand__ResultVar_9,
  MR_Word check_hlds__try_expand__IntermediateGoal_10,
  MR_Word * check_hlds__try_expand__Goal_11,
  MR_Word * check_hlds__try_expand__Then_12,
  MR_Word * check_hlds__try_expand__MaybeElse_13,
  MR_Word * check_hlds__try_expand__ExcpHandling_14);

static void MR_CALL 
check_hlds__try_expand__extract_intermediate_goal_parts_7_p_0(
  MR_Word check_hlds__try_expand__ModuleInfo_8,
  MR_Word check_hlds__try_expand__ResultVar_9,
  MR_Word check_hlds__try_expand__IntermediateGoal_10,
  MR_Word * check_hlds__try_expand__Goal_11,
  MR_Word * check_hlds__try_expand__Then_12,
  MR_Word * check_hlds__try_expand__MaybeElse_13,
  MR_Word * check_hlds__try_expand__ExcpHandling_14);

static void MR_CALL 
check_hlds__try_expand__expand_try_goal_2_15_p_0(
  MR_Word check_hlds__try_expand__MaybeIO_16,
  MR_Word check_hlds__try_expand__ResultVar_17,
  MR_Word check_hlds__try_expand__Goal1_18,
  MR_Word check_hlds__try_expand__Then1_19,
  MR_Word check_hlds__try_expand__MaybeElse1_20,
  MR_Word check_hlds__try_expand__ExcpHandling1_21,
  MR_Word check_hlds__try_expand__Instmap_22,
  MR_Word check_hlds__try_expand__GoalOutputVarsSet_23,
  MR_Word * check_hlds__try_expand__FinalGoal_24,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_62,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_PredInfo_63,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_64,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_65,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_66,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_67);

static MR_bool MR_CALL 
check_hlds__try_expand__expand_try_goal_5_p_0_1(
  MR_Box check_hlds__try_expand__closure_arg,
  MR_Box check_hlds__try_expand__wrapper_arg_1);

static void MR_CALL 
check_hlds__try_expand__expand_try_goal_5_p_0(
  MR_Word check_hlds__try_expand__Instmap_6,
  MR_Word check_hlds__try_expand__TryGoal_7,
  MR_Word * check_hlds__try_expand__FinalGoal_8,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_33,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_34);

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_if_then_else_9_p_0(
  MR_Word check_hlds__try_expand__Instmap0_10,
  MR_Word check_hlds__try_expand__Cond0_11,
  MR_Word * check_hlds__try_expand__Cond_12,
  MR_Word check_hlds__try_expand__Then0_13,
  MR_Word * check_hlds__try_expand__Then_14,
  MR_Word check_hlds__try_expand__Else0_15,
  MR_Word * check_hlds__try_expand__Else_16,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_22,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_23);

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_cases_5_p_0(
  MR_Word check_hlds__try_expand__HeadVar__1_1,
  MR_Word check_hlds__try_expand__HeadVar__2_2,
  MR_Word * check_hlds__try_expand__HeadVar__3_3,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_5);

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_disj_5_p_0_1(
  MR_Box check_hlds__try_expand__closure_arg,
  MR_Box check_hlds__try_expand__wrapper_arg_1,
  MR_Box * check_hlds__try_expand__wrapper_arg_2,
  MR_Box check_hlds__try_expand__wrapper_arg_3,
  MR_Box * check_hlds__try_expand__wrapper_arg_4);

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_disj_5_p_0(
  MR_Word check_hlds__try_expand__Instmap0_6,
  MR_Word check_hlds__try_expand__Goals0_7,
  MR_Word * check_hlds__try_expand__Goals_8,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_10,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_11);

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_conj_5_p_0(
  MR_Word check_hlds__try_expand__HeadVar__1_1,
  MR_Word check_hlds__try_expand__HeadVar__2_2,
  MR_Word * check_hlds__try_expand__HeadVar__3_3,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_5);

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(
  MR_Word check_hlds__try_expand__Instmap_6,
  MR_Word check_hlds__try_expand__Goal0_7,
  MR_Word * check_hlds__try_expand__Goal_8,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_96,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_97);

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_proc_6_p_0(
  MR_Word check_hlds__try_expand__PredId_7,
  MR_Integer check_hlds__try_expand__ProcId_8,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_20,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Specs_0_21,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Specs_22);

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_pred_5_p_0_1(
  MR_Box check_hlds__try_expand__closure_arg,
  MR_Box check_hlds__try_expand__wrapper_arg_1,
  MR_Box check_hlds__try_expand__wrapper_arg_2,
  MR_Box * check_hlds__try_expand__wrapper_arg_3,
  MR_Box check_hlds__try_expand__wrapper_arg_4,
  MR_Box * check_hlds__try_expand__wrapper_arg_5);

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_pred_5_p_0(
  MR_Word check_hlds__try_expand__PredId_6,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_12,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Specs_0_13,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Specs_14);

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_module_4_p_0_1(
  MR_Box check_hlds__try_expand__closure_arg,
  MR_Box check_hlds__try_expand__wrapper_arg_1,
  MR_Box check_hlds__try_expand__wrapper_arg_2,
  MR_Box * check_hlds__try_expand__wrapper_arg_3,
  MR_Box check_hlds__try_expand__wrapper_arg_4,
  MR_Box * check_hlds__try_expand__wrapper_arg_5);


static /* final */ const MR_Box check_hlds__try_expand_scalar_common_1[2][2];

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_2[2][8];

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_3[1][3];

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_4[1][9];

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_5[1][7];

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_6[6][1];

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_8[1][5];


/* sealed */ struct check_hlds__try_expand__vector_common_type_7_0_s {
  const MR_Word check_hlds__try_expand__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct check_hlds__try_expand__vector_common_type_7_0_s check_hlds__try_expand_vector_common_7[8];



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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_4[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__try_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__try_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&check_hlds__try_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_6[6][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "TryIOOutput"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "try_expand"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "TmpOutputTuple"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "OutputTuple"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "TryLambda"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_8[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__try_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__try_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};


static /* final */ const struct check_hlds__try_expand__vector_common_type_7_0_s check_hlds__try_expand_vector_common_7[8] = {
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
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__try_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo check_hlds__try_expand__check_hlds__try_expand__field_types_trys_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_ConstString check_hlds__try_expand__check_hlds__try_expand__field_names_trys_info_0_0[4] = {
  (MR_String) "ti_module_info",
  (MR_String) "ti_pred_info",
  (MR_String) "ti_proc_info",
  (MR_String) "ti_changed"
};

static const MR_DuFunctorDesc check_hlds__try_expand__check_hlds__try_expand__du_functor_desc_trys_info_0_0 = {
  (MR_String) "trys_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__try_expand__check_hlds__try_expand__field_types_trys_info_0_0,
  check_hlds__try_expand__check_hlds__try_expand__field_names_trys_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__try_expand__check_hlds__try_expand__du_stag_ordered_trys_info_0_0[1] = {
  &check_hlds__try_expand__check_hlds__try_expand__du_functor_desc_trys_info_0_0
};

static const MR_DuPtagLayout check_hlds__try_expand__check_hlds__try_expand__du_ptag_ordered_trys_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__try_expand__check_hlds__try_expand__du_stag_ordered_trys_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__try_expand____Unify____trys_info_0_0_10001)),
  ((MR_Box) (check_hlds__try_expand____Compare____trys_info_0_0_10001)),
  (MR_String) "check_hlds.try_expand",
  (MR_String) "trys_info",
  {     check_hlds__try_expand__check_hlds__try_expand__du_name_ordered_trys_info_0 },
  {     check_hlds__try_expand__check_hlds__try_expand__du_ptag_ordered_trys_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__try_expand__check_hlds__try_expand__functor_number_map_trys_info_0
};

static MR_bool MR_CALL 
check_hlds__try_expand____Unify____trys_info_0_0_10001(
  MR_Box check_hlds__try_expand__wrapper_arg_1,
  MR_Box check_hlds__try_expand__wrapper_arg_2)
{
  {
    MR_bool check_hlds__try_expand__succeeded;

    {
      check_hlds__try_expand__succeeded = check_hlds__try_expand____Unify____trys_info_0_0(((MR_Word) check_hlds__try_expand__wrapper_arg_1), ((MR_Word) check_hlds__try_expand__wrapper_arg_2));
    }
    return check_hlds__try_expand__succeeded;
  }
}

static void MR_CALL 
check_hlds__try_expand____Compare____trys_info_0_0_10001(
  MR_Box * check_hlds__try_expand__wrapper_arg_1,
  MR_Box check_hlds__try_expand__wrapper_arg_2,
  MR_Box check_hlds__try_expand__wrapper_arg_3)
{
  {
    MR_Word check_hlds__try_expand__conv0_HeadVar__1_1;

    {
      check_hlds__try_expand____Compare____trys_info_0_0(&check_hlds__try_expand__conv0_HeadVar__1_1, ((MR_Word) check_hlds__try_expand__wrapper_arg_2), ((MR_Word) check_hlds__try_expand__wrapper_arg_3));
    }
    *check_hlds__try_expand__wrapper_arg_1 = ((MR_Box) (check_hlds__try_expand__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__try_expand__IntroducedFrom__pred__make_try_call__891__1_2_p_0(
  MR_Word check_hlds__try_expand__PolySpecs_30,
  MR_Word check_hlds__try_expand__HeadVar__2_51)
{
  {
    MR_bool check_hlds__try_expand__succeeded;

    {
      check_hlds__try_expand__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__try_expand_scalar_common_1[0], ((MR_Box) (check_hlds__try_expand__PolySpecs_30)), ((MR_Box) (check_hlds__try_expand__HeadVar__2_51)));
    }
    return check_hlds__try_expand__succeeded;
  }
}

static void MR_CALL 
check_hlds__try_expand____Compare____trys_info_0_0(
  MR_Word * check_hlds__try_expand__HeadVar__1_1,
  MR_Word check_hlds__try_expand__HeadVar__2_2,
  MR_Word check_hlds__try_expand__HeadVar__3_3)
{
  {
    MR_bool check_hlds__try_expand__succeeded;
    MR_Integer check_hlds__try_expand__CastX_15 = (MR_Integer) check_hlds__try_expand__HeadVar__2_2;
    MR_Integer check_hlds__try_expand__CastY_16 = (MR_Integer) check_hlds__try_expand__HeadVar__3_3;

    check_hlds__try_expand__succeeded = (check_hlds__try_expand__CastX_15 == check_hlds__try_expand__CastY_16);
    if (check_hlds__try_expand__succeeded)
      *check_hlds__try_expand__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__try_expand__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__try_expand__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__try_expand__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__try_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__try_expand__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__try_expand__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__try_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__try_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word check_hlds__try_expand__V_12_12;

        {
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__try_expand__V_12_12, check_hlds__try_expand__V_4_4, check_hlds__try_expand__V_8_8);
        }
        check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_12_12 == (MR_Integer) 0);
        check_hlds__try_expand__succeeded = !(check_hlds__try_expand__succeeded);
        if (check_hlds__try_expand__succeeded)
          *check_hlds__try_expand__HeadVar__1_1 = check_hlds__try_expand__V_12_12;
        else
          {
            MR_Word check_hlds__try_expand__V_13_13;

            {
              hlds__hlds_pred____Compare____pred_info_0_0(&check_hlds__try_expand__V_13_13, check_hlds__try_expand__V_5_5, check_hlds__try_expand__V_9_9);
            }
            check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_13_13 == (MR_Integer) 0);
            check_hlds__try_expand__succeeded = !(check_hlds__try_expand__succeeded);
            if (check_hlds__try_expand__succeeded)
              *check_hlds__try_expand__HeadVar__1_1 = check_hlds__try_expand__V_13_13;
            else
              {
                MR_Word check_hlds__try_expand__V_14_14;

                {
                  hlds__hlds_pred____Compare____proc_info_0_0(&check_hlds__try_expand__V_14_14, check_hlds__try_expand__V_6_6, check_hlds__try_expand__V_10_10);
                }
                check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_14_14 == (MR_Integer) 0);
                check_hlds__try_expand__succeeded = !(check_hlds__try_expand__succeeded);
                if (check_hlds__try_expand__succeeded)
                  *check_hlds__try_expand__HeadVar__1_1 = check_hlds__try_expand__V_14_14;
                else
                  {
                    MR_Integer check_hlds__try_expand__V_21_21 = (MR_Integer) check_hlds__try_expand__V_7_7;
                    MR_Integer check_hlds__try_expand__V_22_22 = (MR_Integer) check_hlds__try_expand__V_11_11;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__try_expand__HeadVar__1_1, check_hlds__try_expand__V_21_21, check_hlds__try_expand__V_22_22);
                    }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__try_expand____Unify____trys_info_0_0(
  MR_Word check_hlds__try_expand__HeadVar__1_1,
  MR_Word check_hlds__try_expand__HeadVar__2_2)
{
  {
    MR_bool check_hlds__try_expand__succeeded;
    MR_Integer check_hlds__try_expand__CastX_11 = (MR_Integer) check_hlds__try_expand__HeadVar__1_1;
    MR_Integer check_hlds__try_expand__CastY_12 = (MR_Integer) check_hlds__try_expand__HeadVar__2_2;

    check_hlds__try_expand__succeeded = (check_hlds__try_expand__CastX_11 == check_hlds__try_expand__CastY_12);
    if (check_hlds__try_expand__succeeded)
      check_hlds__try_expand__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__try_expand__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__try_expand__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__try_expand__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__try_expand__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word check_hlds__try_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__try_expand__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__try_expand__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__try_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 3)));

        {
          check_hlds__try_expand__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__try_expand__V_3_3, check_hlds__try_expand__V_7_7);
        }
        if (check_hlds__try_expand__succeeded)
          {
            {
              check_hlds__try_expand__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(check_hlds__try_expand__V_4_4, check_hlds__try_expand__V_8_8);
            }
            if (check_hlds__try_expand__succeeded)
              {
                {
                  check_hlds__try_expand__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(check_hlds__try_expand__V_5_5, check_hlds__try_expand__V_9_9);
                }
                if (check_hlds__try_expand__succeeded)
                  check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_6_6 == check_hlds__try_expand__V_10_10);
              }
          }
      }
    return check_hlds__try_expand__succeeded;
  }
}

static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_1(
  void * check_hlds__try_expand__env_ptr_arg)
{
  {
    struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s * check_hlds__try_expand__env_ptr = (struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s *) check_hlds__try_expand__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_3(
  void * check_hlds__try_expand__env_ptr_arg)
{
  {
    struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s * check_hlds__try_expand__env_ptr = (struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s *) check_hlds__try_expand__env_ptr_arg;

    (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9 = ((MR_Word) (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__conv0_ArgInst_9);
    {
      check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_2(check_hlds__try_expand__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_2(
  void * check_hlds__try_expand__env_ptr_arg)
{
  {
    struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s * check_hlds__try_expand__env_ptr = (struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s *) check_hlds__try_expand__env_ptr_arg;

    {
      MR_Word check_hlds__try_expand__V_13_13;
      MR_Word check_hlds__try_expand__V_10_10;

      (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if ((check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded)
        {
          {
            check_hlds__try_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9, (MR_Integer) 1)));
            check_hlds__try_expand__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9, (MR_Integer) 2)));
          }
          (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = (check_hlds__try_expand__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = !((check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded);
      if ((check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded)
        {
          check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_1(check_hlds__try_expand__env_ptr);
        }
    }
  }
}

static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_4(
  void * check_hlds__try_expand__env_ptr_arg)
{
  {
    struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s * check_hlds__try_expand__env_ptr = (struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s *) check_hlds__try_expand__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__conv0_ArgInst_9, (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7, check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_3, check_hlds__try_expand__env_ptr);
          }
        }
        (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0(
  MR_Word check_hlds__try_expand__TmpTupleVar_5,
  MR_Word check_hlds__try_expand__TupleVar_6,
  MR_Word check_hlds__try_expand__TupleArgInsts_7,
  MR_Word * check_hlds__try_expand__CastOrUnify_8)
{
  {
    struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s check_hlds__try_expand__env;

    (check_hlds__try_expand__env).check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7 = check_hlds__try_expand__TupleArgInsts_7;
    {
      check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_4(&check_hlds__try_expand__env);
    }
    if ((check_hlds__try_expand__env).check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded)
      {
        MR_Integer check_hlds__try_expand__TupleArity_11;
        MR_Word check_hlds__try_expand__TupleInst_12;
        MR_Word check_hlds__try_expand__V_16_16;
        MR_Word check_hlds__try_expand__V_17_17;
        MR_Word check_hlds__try_expand__V_18_18;
        MR_Word check_hlds__try_expand__V_21_21;
        MR_Word check_hlds__try_expand__V_22_22;

        {
          check_hlds__try_expand__TupleArity_11 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (check_hlds__try_expand__env).check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7);
        }
        {
          check_hlds__try_expand__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_18_18, 1) = ((MR_Box) (check_hlds__try_expand__TupleArity_11));
        }
        {
          check_hlds__try_expand__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_17_17, 0) = ((MR_Box) (check_hlds__try_expand__V_18_18));
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_17_17, 1) = ((MR_Box) ((check_hlds__try_expand__env).check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7));
        }
        {
          check_hlds__try_expand__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_16_16, 0) = ((MR_Box) (check_hlds__try_expand__V_17_17));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__try_expand__TupleInst_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__TupleInst_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__TupleInst_12, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__TupleInst_12, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__TupleInst_12, 3) = ((MR_Box) (check_hlds__try_expand__V_16_16));
        }
        {
          check_hlds__try_expand__V_21_21 = parse_tree__prog_mode__ground_inst_0_f_0();
        }
        {
          check_hlds__try_expand__V_22_22 = mercury__term__context_init_0_f_0();
        }
        {
          hlds__goal_util__generate_cast_with_insts_7_p_0((MR_Integer) 1, check_hlds__try_expand__TmpTupleVar_5, check_hlds__try_expand__TupleVar_6, check_hlds__try_expand__V_21_21, check_hlds__try_expand__TupleInst_12, check_hlds__try_expand__V_22_22, check_hlds__try_expand__CastOrUnify_8);
        }
      }
    else
      {
        MR_Word check_hlds__try_expand__V_23_23;
        MR_Word check_hlds__try_expand__V_24_24;

        {
          check_hlds__try_expand__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_23_23, 0) = ((MR_Box) (check_hlds__try_expand__TmpTupleVar_5));
        }
        {
          check_hlds__try_expand__V_24_24 = mercury__term__context_init_0_f_0();
        }
        {
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__try_expand__TupleVar_6, check_hlds__try_expand__V_23_23, check_hlds__try_expand__V_24_24, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__try_expand_scalar_common_6[1]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__CastOrUnify_8);
        }
      }
  }
}

static void MR_CALL 
check_hlds__try_expand__make_unreachable_call_2_p_0(
  MR_Word check_hlds__try_expand__ModuleInfo_3,
  MR_Word * check_hlds__try_expand__Goal_4)
{
  {
    MR_bool check_hlds__try_expand__succeeded;
    MR_Word check_hlds__try_expand__V_5_5;
    MR_Word check_hlds__try_expand__V_13_13;
    MR_Word check_hlds__try_expand__V_14_14;

    {
      check_hlds__try_expand__V_5_5 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
    {
      check_hlds__try_expand__V_13_13 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
    {
      check_hlds__try_expand__V_14_14 = mercury__term__context_init_0_f_0();
    }
    {
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__try_expand__V_5_5, (MR_String) "unreachable", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__V_13_13, check_hlds__try_expand__ModuleInfo_3, check_hlds__try_expand__V_14_14, check_hlds__try_expand__Goal_4);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__try_expand__make_try_call_14_p_0_1(
  MR_Box check_hlds__try_expand__closure_arg)
{
  {
    MR_bool check_hlds__try_expand__succeeded;
    MR_Box check_hlds__try_expand__closure = check_hlds__try_expand__closure_arg;

    {
      check_hlds__try_expand__succeeded = check_hlds__try_expand__IntroducedFrom__pred__make_try_call__891__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__closure, (MR_Integer) 4))));
    }
    return check_hlds__try_expand__succeeded;
  }
}

static void MR_CALL 
check_hlds__try_expand__make_try_call_14_p_0(
  MR_String check_hlds__try_expand__PredName_15,
  MR_Word check_hlds__try_expand__LambdaVar_16,
  MR_Word check_hlds__try_expand__ResultVar_17,
  MR_Word check_hlds__try_expand__ExtraArgs_18,
  MR_Word check_hlds__try_expand__OutputTupleType_19,
  MR_Word check_hlds__try_expand__GoalPurity_20,
  MR_Word check_hlds__try_expand__Context_21,
  MR_Word * check_hlds__try_expand__OverallGoal_22,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_38,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_PredInfo_39,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_40,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_41,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_42,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_43)
{
  {
    MR_bool check_hlds__try_expand__succeeded;
    MR_Word check_hlds__try_expand__PolyInfo0_26;
    MR_Word check_hlds__try_expand__TypeInfoVar_27;
    MR_Word check_hlds__try_expand__MakeTypeInfoGoals_28;
    MR_Word check_hlds__try_expand__PolyInfo_29;
    MR_Word check_hlds__try_expand__PolySpecs_30;
    MR_Word check_hlds__try_expand__Args_32;
    MR_Word check_hlds__try_expand__CallGoal0_34;
    MR_Word check_hlds__try_expand__GoalInfo_35;
    MR_Word check_hlds__try_expand__CallGoal_36;
    MR_Word check_hlds__try_expand__V_47_47;
    MR_Word check_hlds__try_expand__V_53_53;
    MR_Word check_hlds__try_expand__V_54_54;
    MR_Word check_hlds__try_expand__V_55_55;
    MR_Word check_hlds__try_expand__V_57_57;
    MR_Word check_hlds__try_expand__V_61_61;
    MR_Word check_hlds__try_expand__V_63_63;
    MR_Word check_hlds__try_expand__V_64_64;

    {
      check_hlds__polymorphism__create_poly_info_4_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_42, check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_38, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_40, &check_hlds__try_expand__PolyInfo0_26);
    }
    {
      check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(check_hlds__try_expand__OutputTupleType_19, check_hlds__try_expand__Context_21, &check_hlds__try_expand__TypeInfoVar_27, &check_hlds__try_expand__MakeTypeInfoGoals_28, check_hlds__try_expand__PolyInfo0_26, &check_hlds__try_expand__PolyInfo_29);
    }
    {
      check_hlds__polymorphism__poly_info_extract_7_p_0(check_hlds__try_expand__PolyInfo_29, &check_hlds__try_expand__PolySpecs_30, check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_38, check_hlds__try_expand__STATE_VARIABLE_PredInfo_39, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_40, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_41, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_43);
    }
    {
      check_hlds__try_expand__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_47_47, 0) = ((MR_Box) (&check_hlds__try_expand_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_47_47, 1) = ((MR_Box) (check_hlds__try_expand__make_try_call_14_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_47_47, 3) = ((MR_Box) (check_hlds__try_expand__PolySpecs_30));
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_47_47, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__require__expect_4_p_0(check_hlds__try_expand__V_47_47, (MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.make_try_call\'/14", (MR_String) "got errors while making type_info_var");
    }
    {
      check_hlds__try_expand__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_55_55, 0) = ((MR_Box) (check_hlds__try_expand__ResultVar_17));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__try_expand__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_54_54, 0) = ((MR_Box) (check_hlds__try_expand__LambdaVar_16));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_54_54, 1) = ((MR_Box) (check_hlds__try_expand__V_55_55));
    }
    {
      check_hlds__try_expand__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_53_53, 0) = ((MR_Box) (check_hlds__try_expand__TypeInfoVar_27));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_53_53, 1) = ((MR_Box) (check_hlds__try_expand__V_54_54));
    }
    {
      check_hlds__try_expand__Args_32 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__try_expand_scalar_common_1[1], check_hlds__try_expand__V_53_53, check_hlds__try_expand__ExtraArgs_18);
    }
    {
      check_hlds__try_expand__V_57_57 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
    {
      check_hlds__try_expand__V_61_61 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
    {
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__try_expand__V_57_57, check_hlds__try_expand__PredName_15, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[5]), (MR_Integer) 4, (MR_Integer) 0, check_hlds__try_expand__Args_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__V_61_61, *check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_43, check_hlds__try_expand__Context_21, &check_hlds__try_expand__CallGoal0_34);
    }
    {
      hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__try_expand__Context_21, &check_hlds__try_expand__GoalInfo_35);
    }
    switch (check_hlds__try_expand__GoalPurity_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__try_expand__ScopeReason_37;
          MR_Word check_hlds__try_expand__V_62_62;

          {
            check_hlds__try_expand__ScopeReason_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__try_expand__ScopeReason_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), check_hlds__try_expand__ScopeReason_37, 1) = ((MR_Box) (check_hlds__try_expand__GoalPurity_20));
          }
          {
            check_hlds__try_expand__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_62_62, 1) = ((MR_Box) (check_hlds__try_expand__ScopeReason_37));
            MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_62_62, 2) = ((MR_Box) (check_hlds__try_expand__CallGoal0_34));
          }
          {
            check_hlds__try_expand__CallGoal_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__try_expand__CallGoal_36, 0) = ((MR_Box) (check_hlds__try_expand__V_62_62));
            MR_hl_field(MR_mktag(0), check_hlds__try_expand__CallGoal_36, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo_35));
          }
        }
        break;
      case (MR_Integer) 0:
        check_hlds__try_expand__CallGoal_36 = check_hlds__try_expand__CallGoal0_34;
        break;
    }
    {
      check_hlds__try_expand__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_64_64, 0) = ((MR_Box) (check_hlds__try_expand__CallGoal_36));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__try_expand__V_63_63 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__try_expand__MakeTypeInfoGoals_28, check_hlds__try_expand__V_64_64);
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__try_expand__V_63_63, check_hlds__try_expand__GoalInfo_35, check_hlds__try_expand__OverallGoal_22);
    }
  }
}

static void MR_CALL 
check_hlds__try_expand__make_try_lambda_8_p_0(
  MR_Word check_hlds__try_expand__Body0_9,
  MR_Word check_hlds__try_expand__OutputVarsSet_10,
  MR_Word check_hlds__try_expand__OutputTupleType_11,
  MR_Word check_hlds__try_expand__MaybeIO_12,
  MR_Word * check_hlds__try_expand__LambdaVar_13,
  MR_Word * check_hlds__try_expand__AssignLambdaVar_14,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_41,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_42)
{
  {
    MR_bool check_hlds__try_expand__succeeded;
    MR_Word check_hlds__try_expand__TypeCtorInfo_88_88;
    MR_Word check_hlds__try_expand__TypeInfo_89_89;
    MR_Word check_hlds__try_expand__BodyInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Body0_9, (MR_Integer) 1)));
    MR_Word check_hlds__try_expand__NonLocals0_18;
    MR_Word check_hlds__try_expand__NonLocals1_19;
    MR_Word check_hlds__try_expand__OutputTupleVar_20;
    MR_Word check_hlds__try_expand__LambdaParams_23;
    MR_Word check_hlds__try_expand__LambdaParamTypes_24;
    MR_Word check_hlds__try_expand__LambdaParamModes_25;
    MR_Word check_hlds__try_expand__NonLocals_26;
    MR_Word check_hlds__try_expand__LambdaType_27;
    MR_Word check_hlds__try_expand__MakeOutputTuple_28;
    MR_Word check_hlds__try_expand__LambdaBody0_29;
    MR_Word check_hlds__try_expand__VarSet0_30;
    MR_Word check_hlds__try_expand__VarTypes0_31;
    MR_Word check_hlds__try_expand__VarSet_32;
    MR_Word check_hlds__try_expand__VarTypes_33;
    MR_Word check_hlds__try_expand__Renaming_34;
    MR_Word check_hlds__try_expand__LambdaBody_35;
    MR_Word check_hlds__try_expand__BodyGoalInfo_37;
    MR_Word check_hlds__try_expand__BodyDetism_38;
    MR_Word check_hlds__try_expand__LambdaDetism_39;
    MR_Word check_hlds__try_expand__RHS_40;
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44;
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_70_70;
    MR_Word check_hlds__try_expand__V_72_72;
    MR_Word check_hlds__try_expand__V_73_73;
    MR_Word check_hlds__try_expand__V_76_76;
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_77_77;
    MR_Word check_hlds__try_expand__V_83_83;
    MR_Word check_hlds__try_expand__V_84_84;
    MR_Word check_hlds__try_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Body0_9, (MR_Integer) 0)));
    MR_Word check_hlds__try_expand__V_36_36;

    {
      check_hlds__try_expand__NonLocals0_18 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__try_expand__BodyInfo0_17);
    }
    check_hlds__try_expand__TypeCtorInfo_88_88 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      parse_tree__set_of_var__difference_3_p_0(check_hlds__try_expand__TypeCtorInfo_88_88, check_hlds__try_expand__NonLocals0_18, check_hlds__try_expand__OutputVarsSet_10, &check_hlds__try_expand__NonLocals1_19);
    }
    {
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(check_hlds__try_expand__OutputTupleType_11, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[3]), &check_hlds__try_expand__OutputTupleVar_20, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_41, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44);
    }
    if ((check_hlds__try_expand__MaybeIO_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word check_hlds__try_expand__V_48_48;

        {
          check_hlds__try_expand__LambdaParams_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParams_23, 0) = ((MR_Box) (check_hlds__try_expand__OutputTupleVar_20));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParams_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__try_expand__LambdaParamTypes_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamTypes_24, 0) = ((MR_Box) (check_hlds__try_expand__OutputTupleType_11));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamTypes_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__try_expand__V_48_48 = parse_tree__prog_mode__out_mode_0_f_0();
        }
        {
          check_hlds__try_expand__LambdaParamModes_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamModes_25, 0) = ((MR_Box) (check_hlds__try_expand__V_48_48));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamModes_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        check_hlds__try_expand__NonLocals_26 = check_hlds__try_expand__NonLocals0_18;
      }
    else
      {
        MR_Word check_hlds__try_expand__IOVarInitial_21;
        MR_Word check_hlds__try_expand__IOVarFinal_22;
        MR_Word check_hlds__try_expand__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeIO_12, (MR_Integer) 0)));
        MR_Word check_hlds__try_expand__V_51_51;
        MR_Word check_hlds__try_expand__V_52_52;
        MR_Word check_hlds__try_expand__V_54_54;
        MR_Word check_hlds__try_expand__V_55_55;
        MR_Word check_hlds__try_expand__V_56_56;
        MR_Word check_hlds__try_expand__V_57_57;
        MR_Word check_hlds__try_expand__V_59_59;
        MR_Word check_hlds__try_expand__V_60_60;
        MR_Word check_hlds__try_expand__V_61_61;
        MR_Word check_hlds__try_expand__V_62_62;
        MR_Word check_hlds__try_expand__V_63_63;

        check_hlds__try_expand__IOVarInitial_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_50_50, (MR_Integer) 0)));
        check_hlds__try_expand__IOVarFinal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_50_50, (MR_Integer) 1)));
        {
          check_hlds__try_expand__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, 0) = ((MR_Box) (check_hlds__try_expand__IOVarFinal_22));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__try_expand__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, 0) = ((MR_Box) (check_hlds__try_expand__IOVarInitial_21));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, 1) = ((MR_Box) (check_hlds__try_expand__V_52_52));
        }
        {
          check_hlds__try_expand__LambdaParams_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParams_23, 0) = ((MR_Box) (check_hlds__try_expand__OutputTupleVar_20));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParams_23, 1) = ((MR_Box) (check_hlds__try_expand__V_51_51));
        }
        {
          check_hlds__try_expand__V_55_55 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
        }
        {
          check_hlds__try_expand__V_57_57 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
        }
        {
          check_hlds__try_expand__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_56_56, 0) = ((MR_Box) (check_hlds__try_expand__V_57_57));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__try_expand__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_54_54, 0) = ((MR_Box) (check_hlds__try_expand__V_55_55));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_54_54, 1) = ((MR_Box) (check_hlds__try_expand__V_56_56));
        }
        {
          check_hlds__try_expand__LambdaParamTypes_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamTypes_24, 0) = ((MR_Box) (check_hlds__try_expand__OutputTupleType_11));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamTypes_24, 1) = ((MR_Box) (check_hlds__try_expand__V_54_54));
        }
        {
          check_hlds__try_expand__V_59_59 = parse_tree__prog_mode__out_mode_0_f_0();
        }
        {
          check_hlds__try_expand__V_61_61 = parse_tree__prog_mode__di_mode_0_f_0();
        }
        {
          check_hlds__try_expand__V_63_63 = parse_tree__prog_mode__uo_mode_0_f_0();
        }
        {
          check_hlds__try_expand__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_62_62, 0) = ((MR_Box) (check_hlds__try_expand__V_63_63));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__try_expand__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_60_60, 0) = ((MR_Box) (check_hlds__try_expand__V_61_61));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_60_60, 1) = ((MR_Box) (check_hlds__try_expand__V_62_62));
        }
        {
          check_hlds__try_expand__LambdaParamModes_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamModes_25, 0) = ((MR_Box) (check_hlds__try_expand__V_59_59));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamModes_25, 1) = ((MR_Box) (check_hlds__try_expand__V_60_60));
        }
        {
          parse_tree__set_of_var__delete_3_p_0(check_hlds__try_expand__TypeCtorInfo_88_88, check_hlds__try_expand__IOVarFinal_22, check_hlds__try_expand__NonLocals1_19, &check_hlds__try_expand__NonLocals_26);
        }
      }
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    {
      check_hlds__try_expand__LambdaType_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__LambdaType_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__LambdaType_27, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__LambdaType_27, 2) = ((MR_Box) (check_hlds__try_expand__LambdaParamTypes_24));
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__LambdaType_27, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__LambdaType_27, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__LambdaType_27, 5) = NULL;
    }
    {
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(check_hlds__try_expand__LambdaType_27, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[4]), check_hlds__try_expand__LambdaVar_13, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_70_70);
    }
    {
      check_hlds__try_expand__V_72_72 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__try_expand__TypeCtorInfo_88_88, check_hlds__try_expand__OutputVarsSet_10);
    }
    {
      hlds__make_goal__construct_tuple_3_p_0(check_hlds__try_expand__OutputTupleVar_20, check_hlds__try_expand__V_72_72, &check_hlds__try_expand__MakeOutputTuple_28);
    }
    {
      hlds__hlds_goal__conjoin_goals_3_p_0(check_hlds__try_expand__Body0_9, check_hlds__try_expand__MakeOutputTuple_28, &check_hlds__try_expand__LambdaBody0_29);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ProcInfo_70_70, &check_hlds__try_expand__VarSet0_30);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ProcInfo_70_70, &check_hlds__try_expand__VarTypes0_31);
    }
    {
      check_hlds__try_expand__V_73_73 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__try_expand__TypeCtorInfo_88_88, check_hlds__try_expand__OutputVarsSet_10);
    }
    check_hlds__try_expand__TypeInfo_89_89 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
    {
      check_hlds__try_expand__V_76_76 = mercury__map__init_0_f_0(check_hlds__try_expand__TypeInfo_89_89, check_hlds__try_expand__TypeInfo_89_89);
    }
    {
      hlds__goal_util__clone_variables_9_p_0(check_hlds__try_expand__V_73_73, check_hlds__try_expand__VarSet0_30, check_hlds__try_expand__VarTypes0_31, check_hlds__try_expand__VarSet0_30, &check_hlds__try_expand__VarSet_32, check_hlds__try_expand__VarTypes0_31, &check_hlds__try_expand__VarTypes_33, check_hlds__try_expand__V_76_76, &check_hlds__try_expand__Renaming_34);
    }
    {
      hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__try_expand__VarSet_32, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_70_70, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_77_77);
    }
    {
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__try_expand__VarTypes_33, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_77_77, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_42);
    }
    {
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(check_hlds__try_expand__Renaming_34, check_hlds__try_expand__LambdaBody0_29, &check_hlds__try_expand__LambdaBody_35);
    }
    check_hlds__try_expand__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__LambdaBody_35, (MR_Integer) 0)));
    check_hlds__try_expand__BodyGoalInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__LambdaBody_35, (MR_Integer) 1)));
    {
      check_hlds__try_expand__BodyDetism_38 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__try_expand__BodyGoalInfo_37);
    }
    check_hlds__try_expand__LambdaDetism_39 = ((&check_hlds__try_expand_vector_common_7[0 + check_hlds__try_expand__BodyDetism_38]))->check_hlds__try_expand__vector_common_type_7_0__vct_7_f_0;
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    {
      check_hlds__try_expand__V_83_83 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__try_expand__TypeCtorInfo_88_88, check_hlds__try_expand__NonLocals_26);
    }
    {
      check_hlds__try_expand__RHS_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 0) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((MR_Integer) 0 << (MR_Integer) 3)))))));
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 1) = (MR_Integer) 0;
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 2) = ((MR_Box) (check_hlds__try_expand__V_83_83));
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 3) = ((MR_Box) (check_hlds__try_expand__LambdaParams_23));
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 4) = ((MR_Box) (check_hlds__try_expand__LambdaParamModes_25));
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 5) = ((MR_Box) (check_hlds__try_expand__LambdaDetism_39));
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 6) = ((MR_Box) (check_hlds__try_expand__LambdaBody_35));
    }
    {
      check_hlds__try_expand__V_84_84 = mercury__term__context_init_0_f_0();
    }
    {
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(*check_hlds__try_expand__LambdaVar_13, check_hlds__try_expand__RHS_40, check_hlds__try_expand__V_84_84, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__try_expand_scalar_common_6[1]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__AssignLambdaVar_14);
    }
  }
}

static void MR_CALL 
check_hlds__try_expand__lookup_case_goal_3_p_0(
  MR_Word check_hlds__try_expand__HeadVar__1_1,
  MR_Word check_hlds__try_expand__ConsId_2,
  MR_Word * check_hlds__try_expand__Goal_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__try_expand__succeeded;

        if ((check_hlds__try_expand__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_String check_hlds__try_expand__V_8_8;
            MR_String check_hlds__try_expand__V_10_10;

            {
              check_hlds__try_expand__V_10_10 = mercury__string__string_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, ((MR_Box) (check_hlds__try_expand__ConsId_2)));
            }
            {
              check_hlds__try_expand__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "couldn\'t find ", check_hlds__try_expand__V_10_10);
            }
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.lookup_case_goal\'/3", check_hlds__try_expand__V_8_8);
              return;
            }
          }
        else
          {
            MR_Word check_hlds__try_expand__Case_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__try_expand__Cases_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__try_expand__GoalPrime_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case_11, (MR_Integer) 2)));
            MR_Word check_hlds__try_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case_11, (MR_Integer) 1)));
            MR_Word check_hlds__try_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case_11, (MR_Integer) 0)));

            {
              check_hlds__try_expand__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__try_expand__ConsId_2, check_hlds__try_expand__V_18_18);
            }
            if (check_hlds__try_expand__succeeded)
              check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (check_hlds__try_expand__succeeded)
              *check_hlds__try_expand__Goal_3 = check_hlds__try_expand__GoalPrime_15;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__try_expand__HeadVar__1__tmp_copy_1 = check_hlds__try_expand__Cases_12;

                  check_hlds__try_expand__HeadVar__1_1 = check_hlds__try_expand__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__try_expand__extract_from_succeeded_goal_5_p_0(
  MR_Word check_hlds__try_expand__ModuleInfo_6,
  MR_Word check_hlds__try_expand__SucceededGoal_7,
  MR_Word * check_hlds__try_expand__Goal_8,
  MR_Word * check_hlds__try_expand__Then_9,
  MR_Word * check_hlds__try_expand__MaybeElse_10)
{
  {
    MR_bool check_hlds__try_expand__succeeded;
    MR_Word check_hlds__try_expand__Conjuncts0_11;
    MR_Word check_hlds__try_expand__DeconstructResult_13;
    MR_Word check_hlds__try_expand__TestNullTuple_14;
    MR_Word check_hlds__try_expand__Conjuncts1_15;
    MR_Word check_hlds__try_expand__TestRHS_23;
    MR_Word check_hlds__try_expand__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SucceededGoal_7, (MR_Integer) 0)));
    MR_Word check_hlds__try_expand__V_49_49;
    MR_Word check_hlds__try_expand__V_50_50;
    MR_Word check_hlds__try_expand__V_51_51;
    MR_Word check_hlds__try_expand__V_52_52;
    MR_Word check_hlds__try_expand__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SucceededGoal_7, (MR_Integer) 1)));
    MR_Word check_hlds__try_expand__V_21_21;
    MR_Word check_hlds__try_expand___ResultVar_16;
    MR_Word check_hlds__try_expand__V_17_17;
    MR_Word check_hlds__try_expand__V_18_18;
    MR_Word check_hlds__try_expand__V_19_19;
    MR_Word check_hlds__try_expand__V_20_20;
    MR_Word check_hlds__try_expand__V_27_27;
    MR_Word check_hlds__try_expand__V_22_22;
    MR_Word check_hlds__try_expand__V_24_24;
    MR_Word check_hlds__try_expand__V_25_25;
    MR_Word check_hlds__try_expand__V_26_26;
    MR_Word check_hlds__try_expand__V_53_53;
    MR_Integer check_hlds__try_expand__V_54_54;
    MR_Word check_hlds__try_expand__V_55_55;
    MR_Word check_hlds__try_expand__V_56_56;
    MR_Word check_hlds__try_expand__Rest_30;
    MR_Word check_hlds__try_expand__GoalPrime_32;
    MR_Word check_hlds__try_expand__Then0_33;
    MR_Word check_hlds__try_expand__Else0_34;
    MR_Word check_hlds__try_expand__IfThenElse_28;
    MR_Word check_hlds__try_expand__V_57_57;
    MR_Word check_hlds__try_expand__V_29_29;
    MR_Word check_hlds__try_expand__V_31_31;

    check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_48_48)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_48_48, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (check_hlds__try_expand__succeeded)
      {
        check_hlds__try_expand__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_48_48, (MR_Integer) 1)));
        check_hlds__try_expand__Conjuncts0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_48_48, (MR_Integer) 2)));
        check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_49_49 == (MR_Integer) 0);
        if (check_hlds__try_expand__succeeded)
          {
            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__Conjuncts0_11)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__try_expand__succeeded)
              {
                check_hlds__try_expand__DeconstructResult_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts0_11, (MR_Integer) 0)));
                check_hlds__try_expand__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts0_11, (MR_Integer) 1)));
                check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_50_50)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__try_expand__succeeded)
                  {
                    check_hlds__try_expand__TestNullTuple_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_50_50, (MR_Integer) 0)));
                    check_hlds__try_expand__Conjuncts1_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_50_50, (MR_Integer) 1)));
                    check_hlds__try_expand__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__DeconstructResult_13, (MR_Integer) 0)));
                    check_hlds__try_expand__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__DeconstructResult_13, (MR_Integer) 1)));
                    check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_51_51)) == (MR_mktag((MR_Integer) 1)));
                    if (check_hlds__try_expand__succeeded)
                      {
                        check_hlds__try_expand___ResultVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, (MR_Integer) 0)));
                        check_hlds__try_expand__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, (MR_Integer) 1)));
                        check_hlds__try_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, (MR_Integer) 2)));
                        check_hlds__try_expand__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, (MR_Integer) 3)));
                        check_hlds__try_expand__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, (MR_Integer) 4)));
                        check_hlds__try_expand__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__TestNullTuple_14, (MR_Integer) 0)));
                        check_hlds__try_expand__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__TestNullTuple_14, (MR_Integer) 1)));
                        check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_52_52)) == (MR_mktag((MR_Integer) 1)));
                        if (check_hlds__try_expand__succeeded)
                          {
                            check_hlds__try_expand__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, (MR_Integer) 0)));
                            check_hlds__try_expand__TestRHS_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, (MR_Integer) 1)));
                            check_hlds__try_expand__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, (MR_Integer) 2)));
                            check_hlds__try_expand__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, (MR_Integer) 3)));
                            check_hlds__try_expand__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, (MR_Integer) 4)));
                            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__TestRHS_23)) == (MR_mktag((MR_Integer) 1)));
                            if (check_hlds__try_expand__succeeded)
                              {
                                check_hlds__try_expand__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__TestRHS_23, (MR_Integer) 0)));
                                check_hlds__try_expand__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__TestRHS_23, (MR_Integer) 1)));
                                check_hlds__try_expand__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__TestRHS_23, (MR_Integer) 2)));
                                check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_53_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_53_53, (MR_Integer) 0)))) == (MR_Integer) 3)));
                                if (check_hlds__try_expand__succeeded)
                                  {
                                    check_hlds__try_expand__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_53_53, (MR_Integer) 1)));
                                    check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_54_54 == (MR_Integer) 0);
                                    if (check_hlds__try_expand__succeeded)
                                      {
                                        check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_55_55 == (MR_Integer) 0);
                                        if (check_hlds__try_expand__succeeded)
                                          check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                  }
                              }
                            if (check_hlds__try_expand__succeeded)
                              {
                                check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__Conjuncts1_15)) == (MR_mktag((MR_Integer) 1)));
                                if (check_hlds__try_expand__succeeded)
                                  {
                                    check_hlds__try_expand__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts1_15, (MR_Integer) 0)));
                                    check_hlds__try_expand__Rest_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts1_15, (MR_Integer) 1)));
                                    check_hlds__try_expand__IfThenElse_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_57_57, (MR_Integer) 0)));
                                    check_hlds__try_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_57_57, (MR_Integer) 1)));
                                    check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__IfThenElse_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__IfThenElse_28, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                    if (check_hlds__try_expand__succeeded)
                                      {
                                        check_hlds__try_expand__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__IfThenElse_28, (MR_Integer) 1)));
                                        check_hlds__try_expand__GoalPrime_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__IfThenElse_28, (MR_Integer) 2)));
                                        check_hlds__try_expand__Then0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__IfThenElse_28, (MR_Integer) 3)));
                                        check_hlds__try_expand__Else0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__IfThenElse_28, (MR_Integer) 4)));
                                      }
                                  }
                                if (check_hlds__try_expand__succeeded)
                                  {
                                    MR_Word check_hlds__try_expand__GoalInfo_36;
                                    MR_Word check_hlds__try_expand__GoalDetism_37;
                                    MR_Word check_hlds__try_expand__GoalMaxSoln_39;
                                    MR_Word check_hlds__try_expand__Else_40;
                                    MR_Word check_hlds__try_expand__V_35_35;
                                    MR_Word check_hlds__try_expand__V_38_38;

                                    *check_hlds__try_expand__Goal_8 = check_hlds__try_expand__GoalPrime_32;
                                    check_hlds__try_expand__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__try_expand__Goal_8, (MR_Integer) 0)));
                                    check_hlds__try_expand__GoalInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__try_expand__Goal_8, (MR_Integer) 1)));
                                    {
                                      check_hlds__try_expand__GoalDetism_37 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__try_expand__GoalInfo_36);
                                    }
                                    {
                                      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__try_expand__GoalDetism_37, &check_hlds__try_expand__V_38_38, &check_hlds__try_expand__GoalMaxSoln_39);
                                    }
                                    switch (check_hlds__try_expand__GoalMaxSoln_39) {
                                      default: /*NOTREACHED*/ MR_assert(0);
                                      case (MR_Integer) 3:
                                      case (MR_Integer) 2:
                                      case (MR_Integer) 1:
                                        {
                                          hlds__hlds_goal__conjoin_goal_and_goal_list_3_p_0(check_hlds__try_expand__Then0_33, check_hlds__try_expand__Rest_30, check_hlds__try_expand__Then_9);
                                        }
                                        break;
                                      case (MR_Integer) 0:
                                        {
                                          MR_Word check_hlds__try_expand__V_82_82;
                                          MR_Word check_hlds__try_expand__V_90_90;
                                          MR_Word check_hlds__try_expand__V_91_91;

                                          {
                                            check_hlds__try_expand__V_82_82 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
                                          }
                                          {
                                            check_hlds__try_expand__V_90_90 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                                          }
                                          {
                                            check_hlds__try_expand__V_91_91 = mercury__term__context_init_0_f_0();
                                          }
                                          {
                                            hlds__goal_util__generate_simple_call_12_p_0(check_hlds__try_expand__V_82_82, (MR_String) "unreachable", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__V_90_90, check_hlds__try_expand__ModuleInfo_6, check_hlds__try_expand__V_91_91, check_hlds__try_expand__Then_9);
                                          }
                                        }
                                        break;
                                    }
                                    {
                                      hlds__hlds_goal__conjoin_goal_and_goal_list_3_p_0(check_hlds__try_expand__Else0_34, check_hlds__try_expand__Rest_30, &check_hlds__try_expand__Else_40);
                                    }
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                      *check_hlds__try_expand__MaybeElse_10 = base;
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__try_expand__Else_40));
                                    }
                                    check_hlds__try_expand__succeeded = MR_TRUE;
                                  }
                                else
                                  {
                                    MR_Word check_hlds__try_expand__SomeGoal_41;
                                    MR_Word check_hlds__try_expand__AfterSomeGoal_42;
                                    MR_Word check_hlds__try_expand__V_58_58;
                                    MR_Word check_hlds__try_expand__V_59_59;
                                    MR_Word check_hlds__try_expand__V_60_60;
                                    MR_Word check_hlds__try_expand__V_43_43;
                                    MR_Word check_hlds__try_expand__Rest_70;
                                    MR_Word check_hlds__try_expand__Then0_71;
                                    MR_Word check_hlds__try_expand__SomeThen_44;
                                    MR_Word check_hlds__try_expand__V_61_61;
                                    MR_Word check_hlds__try_expand__V_62_62;
                                    MR_Word check_hlds__try_expand__V_63_63;
                                    MR_Word check_hlds__try_expand__V_45_45;

                                    check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__Conjuncts1_15)) == (MR_mktag((MR_Integer) 1)));
                                    if (check_hlds__try_expand__succeeded)
                                      {
                                        check_hlds__try_expand__SomeGoal_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts1_15, (MR_Integer) 0)));
                                        check_hlds__try_expand__AfterSomeGoal_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts1_15, (MR_Integer) 1)));
                                        check_hlds__try_expand__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SomeGoal_41, (MR_Integer) 0)));
                                        check_hlds__try_expand__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SomeGoal_41, (MR_Integer) 1)));
                                        check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_58_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_58_58, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                        if (check_hlds__try_expand__succeeded)
                                          {
                                            check_hlds__try_expand__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_58_58, (MR_Integer) 1)));
                                            *check_hlds__try_expand__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_58_58, (MR_Integer) 2)));
                                            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_59_59)) == (MR_mktag((MR_Integer) 0)));
                                            if (check_hlds__try_expand__succeeded)
                                              {
                                                check_hlds__try_expand__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_59_59, (MR_Integer) 0)));
                                                check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_60_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (check_hlds__try_expand__succeeded)
                                                  {
                                                    check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__AfterSomeGoal_42)) == (MR_mktag((MR_Integer) 1)));
                                                    if (check_hlds__try_expand__succeeded)
                                                      {
                                                        check_hlds__try_expand__SomeThen_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__AfterSomeGoal_42, (MR_Integer) 0)));
                                                        check_hlds__try_expand__Rest_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__AfterSomeGoal_42, (MR_Integer) 1)));
                                                        check_hlds__try_expand__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SomeThen_44, (MR_Integer) 0)));
                                                        check_hlds__try_expand__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SomeThen_44, (MR_Integer) 1)));
                                                        check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_61_61)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_61_61, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                                        if (check_hlds__try_expand__succeeded)
                                                          {
                                                            check_hlds__try_expand__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_61_61, (MR_Integer) 1)));
                                                            check_hlds__try_expand__Then0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_61_61, (MR_Integer) 2)));
                                                            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_62_62)) == (MR_mktag((MR_Integer) 0)));
                                                            if (check_hlds__try_expand__succeeded)
                                                              {
                                                                check_hlds__try_expand__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_62_62, (MR_Integer) 0)));
                                                                check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                              }
                                                          }
                                                      }
                                                    if (check_hlds__try_expand__succeeded)
                                                      {
                                                        {
                                                          hlds__hlds_goal__conjoin_goal_and_goal_list_3_p_0(check_hlds__try_expand__Then0_71, check_hlds__try_expand__Rest_70, check_hlds__try_expand__Then_9);
                                                        }
                                                        *check_hlds__try_expand__MaybeElse_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                      }
                                                    else
                                                      {
                                                        MR_Word check_hlds__try_expand__GoalInfo_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__try_expand__Goal_8, (MR_Integer) 1)));
                                                        MR_Word check_hlds__try_expand__GoalDetism_68;
                                                        MR_Word check_hlds__try_expand__GoalMaxSoln_69;
                                                        MR_Word check_hlds__try_expand__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__try_expand__Goal_8, (MR_Integer) 0)));
                                                        MR_Word check_hlds__try_expand__V_47_47;

                                                        {
                                                          check_hlds__try_expand__GoalDetism_68 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__try_expand__GoalInfo_67);
                                                        }
                                                        {
                                                          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__try_expand__GoalDetism_68, &check_hlds__try_expand__V_47_47, &check_hlds__try_expand__GoalMaxSoln_69);
                                                        }
                                                        switch (check_hlds__try_expand__GoalMaxSoln_69) {
                                                          default: /*NOTREACHED*/ MR_assert(0);
                                                          case (MR_Integer) 3:
                                                          case (MR_Integer) 2:
                                                          case (MR_Integer) 1:
                                                            {
                                                              {
                                                                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.extract_from_succeeded_goal\'/5", (MR_String) "goal not erroneous");
                                                              }
                                                            }
                                                            break;
                                                          case (MR_Integer) 0:
                                                            {
                                                              {
                                                                check_hlds__try_expand__make_unreachable_call_2_p_0(check_hlds__try_expand__ModuleInfo_6, check_hlds__try_expand__Then_9);
                                                              }
                                                              *check_hlds__try_expand__MaybeElse_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                            }
                                                            break;
                                                        }
                                                      }
                                                    check_hlds__try_expand__succeeded = MR_TRUE;
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
    return check_hlds__try_expand__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__try_expand__extract_intermediate_goal_parts_2_7_p_0(
  MR_Word check_hlds__try_expand__ModuleInfo_8,
  MR_Word check_hlds__try_expand__ResultVar_9,
  MR_Word check_hlds__try_expand__IntermediateGoal_10,
  MR_Word * check_hlds__try_expand__Goal_11,
  MR_Word * check_hlds__try_expand__Then_12,
  MR_Word * check_hlds__try_expand__MaybeElse_13,
  MR_Word * check_hlds__try_expand__ExcpHandling_14)
{
  {
    MR_bool check_hlds__try_expand__succeeded;
    MR_Word check_hlds__try_expand__TypeInfo_41_41;
    MR_Word check_hlds__try_expand__TypeInfo_42_42;
    MR_Word check_hlds__try_expand__Conjuncts_15;
    MR_Word check_hlds__try_expand__MagicCall_17;
    MR_Word check_hlds__try_expand__Switch_19;
    MR_Word check_hlds__try_expand__Cases_26;
    MR_Word check_hlds__try_expand__SucceededGoal_27;
    MR_Word check_hlds__try_expand__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 0)));
    MR_Word check_hlds__try_expand__V_29_29;
    MR_Word check_hlds__try_expand__V_30_30;
    MR_Word check_hlds__try_expand__V_31_31;
    MR_Word check_hlds__try_expand__V_32_32;
    MR_Word check_hlds__try_expand__V_33_33;
    MR_Word check_hlds__try_expand__V_34_34;
    MR_Word check_hlds__try_expand__V_35_35;
    MR_Word check_hlds__try_expand__V_36_36;
    MR_Word check_hlds__try_expand__V_37_37;
    MR_Word check_hlds__try_expand__V_38_38;
    MR_Word check_hlds__try_expand__V_39_39;
    MR_Word check_hlds__try_expand__V_40_40;
    MR_Word check_hlds__try_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 1)));
    MR_Word check_hlds__try_expand__V_18_18;
    MR_Word check_hlds__try_expand__V_20_20;
    MR_Word check_hlds__try_expand__V_21_21;
    MR_Integer check_hlds__try_expand__V_22_22;
    MR_Word check_hlds__try_expand__V_23_23;
    MR_Word check_hlds__try_expand__V_24_24;
    MR_Word check_hlds__try_expand__V_25_25;

    check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_28_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_28_28, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (check_hlds__try_expand__succeeded)
      {
        check_hlds__try_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_28_28, (MR_Integer) 1)));
        check_hlds__try_expand__Conjuncts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_28_28, (MR_Integer) 2)));
        check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_29_29 == (MR_Integer) 0);
        if (check_hlds__try_expand__succeeded)
          {
            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__Conjuncts_15)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__try_expand__succeeded)
              {
                check_hlds__try_expand__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts_15, (MR_Integer) 0)));
                check_hlds__try_expand__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts_15, (MR_Integer) 1)));
                check_hlds__try_expand__MagicCall_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_30_30, (MR_Integer) 0)));
                check_hlds__try_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_30_30, (MR_Integer) 1)));
                check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_31_31)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__try_expand__succeeded)
                  {
                    check_hlds__try_expand__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_31_31, (MR_Integer) 0)));
                    check_hlds__try_expand__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_31_31, (MR_Integer) 1)));
                    check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (check_hlds__try_expand__succeeded)
                      {
                        check_hlds__try_expand__Switch_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_32_32, (MR_Integer) 0)));
                        check_hlds__try_expand__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_32_32, (MR_Integer) 1)));
                        check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__MagicCall_17)) == (MR_mktag((MR_Integer) 2)));
                        if (check_hlds__try_expand__succeeded)
                          {
                            check_hlds__try_expand__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 0)));
                            check_hlds__try_expand__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 1)));
                            check_hlds__try_expand__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 2)));
                            check_hlds__try_expand__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 3)));
                            check_hlds__try_expand__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 4)));
                            check_hlds__try_expand__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 5)));
                            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_34_34)) == (MR_mktag((MR_Integer) 1)));
                            if (check_hlds__try_expand__succeeded)
                              {
                                check_hlds__try_expand__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_34_34, (MR_Integer) 0)));
                                check_hlds__try_expand__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_34_34, (MR_Integer) 1)));
                                check_hlds__try_expand__TypeInfo_41_41 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
                                {
                                  check_hlds__try_expand__succeeded = mercury__builtin__unify_2_p_0(check_hlds__try_expand__TypeInfo_41_41, ((MR_Box) (check_hlds__try_expand__ResultVar_9)), ((MR_Box) (check_hlds__try_expand__V_39_39)));
                                }
                                if (check_hlds__try_expand__succeeded)
                                  {
                                    check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (check_hlds__try_expand__succeeded)
                                      {
                                        check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__Switch_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_19, (MR_Integer) 0)))) == (MR_Integer) 4)));
                                        if (check_hlds__try_expand__succeeded)
                                          {
                                            check_hlds__try_expand__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_19, (MR_Integer) 1)));
                                            check_hlds__try_expand__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_19, (MR_Integer) 2)));
                                            check_hlds__try_expand__Cases_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_19, (MR_Integer) 3)));
                                            check_hlds__try_expand__TypeInfo_42_42 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
                                            {
                                              check_hlds__try_expand__succeeded = mercury__builtin__unify_2_p_0(check_hlds__try_expand__TypeInfo_42_42, ((MR_Box) (check_hlds__try_expand__ResultVar_9)), ((MR_Box) (check_hlds__try_expand__V_40_40)));
                                            }
                                            if (check_hlds__try_expand__succeeded)
                                              {
                                                check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_36_36 == (MR_Integer) 1);
                                                if (check_hlds__try_expand__succeeded)
                                                  {
                                                    {
                                                      check_hlds__try_expand__V_37_37 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
                                                    }
                                                    {
                                                      check_hlds__try_expand__lookup_case_goal_3_p_0(check_hlds__try_expand__Cases_26, check_hlds__try_expand__V_37_37, &check_hlds__try_expand__SucceededGoal_27);
                                                    }
                                                    {
                                                      check_hlds__try_expand__succeeded = check_hlds__try_expand__extract_from_succeeded_goal_5_p_0(check_hlds__try_expand__ModuleInfo_8, check_hlds__try_expand__SucceededGoal_27, check_hlds__try_expand__Goal_11, check_hlds__try_expand__Then_12, check_hlds__try_expand__MaybeElse_13);
                                                    }
                                                    if (check_hlds__try_expand__succeeded)
                                                      {
                                                        {
                                                          check_hlds__try_expand__V_38_38 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
                                                        }
                                                        {
                                                          check_hlds__try_expand__lookup_case_goal_3_p_0(check_hlds__try_expand__Cases_26, check_hlds__try_expand__V_38_38, check_hlds__try_expand__ExcpHandling_14);
                                                        }
                                                        check_hlds__try_expand__succeeded = MR_TRUE;
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
    return check_hlds__try_expand__succeeded;
  }
}

static void MR_CALL 
check_hlds__try_expand__extract_intermediate_goal_parts_7_p_0(
  MR_Word check_hlds__try_expand__ModuleInfo_8,
  MR_Word check_hlds__try_expand__ResultVar_9,
  MR_Word check_hlds__try_expand__IntermediateGoal_10,
  MR_Word * check_hlds__try_expand__Goal_11,
  MR_Word * check_hlds__try_expand__Then_12,
  MR_Word * check_hlds__try_expand__MaybeElse_13,
  MR_Word * check_hlds__try_expand__ExcpHandling_14)
{
  {
    MR_bool check_hlds__try_expand__succeeded;
    MR_Word check_hlds__try_expand__GoalPrime_15;
    MR_Word check_hlds__try_expand__ThenPrime_16;
    MR_Word check_hlds__try_expand__MaybeElsePrime_17;
    MR_Word check_hlds__try_expand__ExcpHandlingPrime_18;
    MR_Word check_hlds__try_expand__TypeInfo_41_63;
    MR_Word check_hlds__try_expand__TypeInfo_42_64;
    MR_Word check_hlds__try_expand__Conjuncts_37;
    MR_Word check_hlds__try_expand__MagicCall_39;
    MR_Word check_hlds__try_expand__Switch_41;
    MR_Word check_hlds__try_expand__Cases_48;
    MR_Word check_hlds__try_expand__SucceededGoal_49;
    MR_Word check_hlds__try_expand__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 0)));
    MR_Word check_hlds__try_expand__V_51_51;
    MR_Word check_hlds__try_expand__V_52_52;
    MR_Word check_hlds__try_expand__V_53_53;
    MR_Word check_hlds__try_expand__V_54_54;
    MR_Word check_hlds__try_expand__V_55_55;
    MR_Word check_hlds__try_expand__V_56_56;
    MR_Word check_hlds__try_expand__V_57_57;
    MR_Word check_hlds__try_expand__V_58_58;
    MR_Word check_hlds__try_expand__V_59_59;
    MR_Word check_hlds__try_expand__V_60_60;
    MR_Word check_hlds__try_expand__V_61_61;
    MR_Word check_hlds__try_expand__V_62_62;
    MR_Word check_hlds__try_expand__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 1)));
    MR_Word check_hlds__try_expand__V_40_40;
    MR_Word check_hlds__try_expand__V_42_42;
    MR_Word check_hlds__try_expand__V_43_43;
    MR_Integer check_hlds__try_expand__V_44_44;
    MR_Word check_hlds__try_expand__V_45_45;
    MR_Word check_hlds__try_expand__V_46_46;
    MR_Word check_hlds__try_expand__V_47_47;

    check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_50_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_50_50, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (check_hlds__try_expand__succeeded)
      {
        check_hlds__try_expand__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_50_50, (MR_Integer) 1)));
        check_hlds__try_expand__Conjuncts_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_50_50, (MR_Integer) 2)));
        check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_51_51 == (MR_Integer) 0);
        if (check_hlds__try_expand__succeeded)
          {
            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__Conjuncts_37)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__try_expand__succeeded)
              {
                check_hlds__try_expand__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts_37, (MR_Integer) 0)));
                check_hlds__try_expand__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts_37, (MR_Integer) 1)));
                check_hlds__try_expand__MagicCall_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_52_52, (MR_Integer) 0)));
                check_hlds__try_expand__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_52_52, (MR_Integer) 1)));
                check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_53_53)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__try_expand__succeeded)
                  {
                    check_hlds__try_expand__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_53_53, (MR_Integer) 0)));
                    check_hlds__try_expand__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_53_53, (MR_Integer) 1)));
                    check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (check_hlds__try_expand__succeeded)
                      {
                        check_hlds__try_expand__Switch_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_54_54, (MR_Integer) 0)));
                        check_hlds__try_expand__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_54_54, (MR_Integer) 1)));
                        check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__MagicCall_39)) == (MR_mktag((MR_Integer) 2)));
                        if (check_hlds__try_expand__succeeded)
                          {
                            check_hlds__try_expand__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 0)));
                            check_hlds__try_expand__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 1)));
                            check_hlds__try_expand__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 2)));
                            check_hlds__try_expand__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 3)));
                            check_hlds__try_expand__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 4)));
                            check_hlds__try_expand__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 5)));
                            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_56_56)) == (MR_mktag((MR_Integer) 1)));
                            if (check_hlds__try_expand__succeeded)
                              {
                                check_hlds__try_expand__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_56_56, (MR_Integer) 0)));
                                check_hlds__try_expand__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_56_56, (MR_Integer) 1)));
                                check_hlds__try_expand__TypeInfo_41_63 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
                                {
                                  check_hlds__try_expand__succeeded = mercury__builtin__unify_2_p_0(check_hlds__try_expand__TypeInfo_41_63, ((MR_Box) (check_hlds__try_expand__ResultVar_9)), ((MR_Box) (check_hlds__try_expand__V_61_61)));
                                }
                                if (check_hlds__try_expand__succeeded)
                                  {
                                    check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (check_hlds__try_expand__succeeded)
                                      {
                                        check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__Switch_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_41, (MR_Integer) 0)))) == (MR_Integer) 4)));
                                        if (check_hlds__try_expand__succeeded)
                                          {
                                            check_hlds__try_expand__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_41, (MR_Integer) 1)));
                                            check_hlds__try_expand__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_41, (MR_Integer) 2)));
                                            check_hlds__try_expand__Cases_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_41, (MR_Integer) 3)));
                                            check_hlds__try_expand__TypeInfo_42_64 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
                                            {
                                              check_hlds__try_expand__succeeded = mercury__builtin__unify_2_p_0(check_hlds__try_expand__TypeInfo_42_64, ((MR_Box) (check_hlds__try_expand__ResultVar_9)), ((MR_Box) (check_hlds__try_expand__V_62_62)));
                                            }
                                            if (check_hlds__try_expand__succeeded)
                                              {
                                                check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_58_58 == (MR_Integer) 1);
                                                if (check_hlds__try_expand__succeeded)
                                                  {
                                                    {
                                                      check_hlds__try_expand__V_59_59 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
                                                    }
                                                    {
                                                      check_hlds__try_expand__lookup_case_goal_3_p_0(check_hlds__try_expand__Cases_48, check_hlds__try_expand__V_59_59, &check_hlds__try_expand__SucceededGoal_49);
                                                    }
                                                    {
                                                      check_hlds__try_expand__succeeded = check_hlds__try_expand__extract_from_succeeded_goal_5_p_0(check_hlds__try_expand__ModuleInfo_8, check_hlds__try_expand__SucceededGoal_49, &check_hlds__try_expand__GoalPrime_15, &check_hlds__try_expand__ThenPrime_16, &check_hlds__try_expand__MaybeElsePrime_17);
                                                    }
                                                    if (check_hlds__try_expand__succeeded)
                                                      {
                                                        {
                                                          check_hlds__try_expand__V_60_60 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
                                                        }
                                                        {
                                                          check_hlds__try_expand__lookup_case_goal_3_p_0(check_hlds__try_expand__Cases_48, check_hlds__try_expand__V_60_60, &check_hlds__try_expand__ExcpHandlingPrime_18);
                                                        }
                                                        check_hlds__try_expand__succeeded = MR_TRUE;
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
    if (check_hlds__try_expand__succeeded)
      {
        *check_hlds__try_expand__Goal_11 = check_hlds__try_expand__GoalPrime_15;
        *check_hlds__try_expand__Then_12 = check_hlds__try_expand__ThenPrime_16;
        *check_hlds__try_expand__MaybeElse_13 = check_hlds__try_expand__MaybeElsePrime_17;
        *check_hlds__try_expand__ExcpHandling_14 = check_hlds__try_expand__ExcpHandlingPrime_18;
      }
    else
      {
        MR_Word check_hlds__try_expand__GoalPrime_26;
        MR_Word check_hlds__try_expand__ThenPrime_27;
        MR_Word check_hlds__try_expand__MaybeElsePrime_28;
        MR_Word check_hlds__try_expand__ExcpHandlingPrime_29;
        MR_Word check_hlds__try_expand__ScopedGoal_20;
        MR_Word check_hlds__try_expand__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 0)));
        MR_Word check_hlds__try_expand__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 1)));
        MR_Word check_hlds__try_expand__V_19_19;

        check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_22_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_22_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
        if (check_hlds__try_expand__succeeded)
          {
            check_hlds__try_expand__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_22_22, (MR_Integer) 1)));
            check_hlds__try_expand__ScopedGoal_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_22_22, (MR_Integer) 2)));
            {
              check_hlds__try_expand__succeeded = check_hlds__try_expand__extract_intermediate_goal_parts_2_7_p_0(check_hlds__try_expand__ModuleInfo_8, check_hlds__try_expand__ResultVar_9, check_hlds__try_expand__ScopedGoal_20, &check_hlds__try_expand__GoalPrime_26, &check_hlds__try_expand__ThenPrime_27, &check_hlds__try_expand__MaybeElsePrime_28, &check_hlds__try_expand__ExcpHandlingPrime_29);
            }
          }
        if (check_hlds__try_expand__succeeded)
          {
            *check_hlds__try_expand__Goal_11 = check_hlds__try_expand__GoalPrime_26;
            *check_hlds__try_expand__Then_12 = check_hlds__try_expand__ThenPrime_27;
            *check_hlds__try_expand__MaybeElse_13 = check_hlds__try_expand__MaybeElsePrime_28;
            *check_hlds__try_expand__ExcpHandling_14 = check_hlds__try_expand__ExcpHandlingPrime_29;
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

static void MR_CALL 
check_hlds__try_expand__expand_try_goal_2_15_p_0(
  MR_Word check_hlds__try_expand__MaybeIO_16,
  MR_Word check_hlds__try_expand__ResultVar_17,
  MR_Word check_hlds__try_expand__Goal1_18,
  MR_Word check_hlds__try_expand__Then1_19,
  MR_Word check_hlds__try_expand__MaybeElse1_20,
  MR_Word check_hlds__try_expand__ExcpHandling1_21,
  MR_Word check_hlds__try_expand__Instmap_22,
  MR_Word check_hlds__try_expand__GoalOutputVarsSet_23,
  MR_Word * check_hlds__try_expand__FinalGoal_24,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_62,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_PredInfo_63,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_64,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_65,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_66,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_67)
{
  {
    MR_bool check_hlds__try_expand__succeeded;
    MR_Word check_hlds__try_expand__GoalOutputVars_29;
    MR_Word check_hlds__try_expand__GoalOutputVarTypes_30;
    MR_Word check_hlds__try_expand__OutputTupleType_31;
    MR_Word check_hlds__try_expand__RealResultVarType_32;
    MR_Word check_hlds__try_expand__LambdaVar_33;
    MR_Word check_hlds__try_expand__AssignLambdaVar_34;
    MR_Word check_hlds__try_expand__GoalInfo1_36;
    MR_Word check_hlds__try_expand__GoalPurity_37;
    MR_Word check_hlds__try_expand__GoalContext_38;
    MR_Word check_hlds__try_expand__CallTryGoal_42;
    MR_Word check_hlds__try_expand__Then_44;
    MR_Word check_hlds__try_expand__ExcpHandling_46;
    MR_Word check_hlds__try_expand__GoalInfo_47;
    MR_Word check_hlds__try_expand__TmpTupleVar_48;
    MR_Word check_hlds__try_expand__TupleVar_49;
    MR_Word check_hlds__try_expand__DeconstructSucceeded_50;
    MR_Word check_hlds__try_expand__TupleArgInsts_51;
    MR_Word check_hlds__try_expand__CastOutputTuple_52;
    MR_Word check_hlds__try_expand__DeconstructOutputs_53;
    MR_Word check_hlds__try_expand__DeconstructsThen_54;
    MR_Word check_hlds__try_expand__SucceededCase_55;
    MR_Word check_hlds__try_expand__ExceptionCase_56;
    MR_Word check_hlds__try_expand__MaybeFailedCase_59;
    MR_Word check_hlds__try_expand__Cases_60;
    MR_Word check_hlds__try_expand__ResultSwitch_61;
    MR_Word check_hlds__try_expand__STATE_VARIABLE_VarTypes_68_68;
    MR_Word check_hlds__try_expand__V_70_70;
    MR_Word check_hlds__try_expand__V_71_71;
    MR_Word check_hlds__try_expand__V_73_73;
    MR_Word check_hlds__try_expand__STATE_VARIABLE_VarTypes_76_76;
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_77_77;
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_78_78;
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_92_92;
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_105_105;
    MR_Word check_hlds__try_expand__V_110_110;
    MR_Word check_hlds__try_expand__V_111_111;
    MR_Word check_hlds__try_expand__V_113_113;
    MR_Word check_hlds__try_expand__V_114_114;
    MR_Word check_hlds__try_expand__V_115_115;
    MR_Word check_hlds__try_expand__V_116_116;
    MR_Word check_hlds__try_expand__V_118_118;
    MR_Word check_hlds__try_expand__V_120_120;
    MR_Word check_hlds__try_expand__V_125_125;
    MR_Word check_hlds__try_expand__V_126_126;
    MR_Word check_hlds__try_expand__V_128_128;
    MR_Word check_hlds__try_expand__V_129_129;
    MR_Word check_hlds__try_expand__V_130_130;
    MR_Word check_hlds__try_expand__V_35_35;

    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_64, &check_hlds__try_expand__STATE_VARIABLE_VarTypes_68_68);
    }
    {
      check_hlds__try_expand__GoalOutputVars_29 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__try_expand__GoalOutputVarsSet_23);
    }
    {
      hlds__vartypes__lookup_var_types_3_p_0(check_hlds__try_expand__STATE_VARIABLE_VarTypes_68_68, check_hlds__try_expand__GoalOutputVars_29, &check_hlds__try_expand__GoalOutputVarTypes_30);
    }
    {
      check_hlds__try_expand__OutputTupleType_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__OutputTupleType_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__OutputTupleType_31, 1) = ((MR_Box) (check_hlds__try_expand__GoalOutputVarTypes_30));
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__OutputTupleType_31, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__try_expand__V_71_71 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
    {
      check_hlds__try_expand__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_70_70, 0) = ((MR_Box) (check_hlds__try_expand__V_71_71));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_70_70, 1) = ((MR_Box) ((MR_String) "exception_result"));
    }
    {
      check_hlds__try_expand__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_73_73, 0) = ((MR_Box) (check_hlds__try_expand__OutputTupleType_31));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__try_expand__RealResultVarType_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__RealResultVarType_32, 0) = ((MR_Box) (check_hlds__try_expand__V_70_70));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__RealResultVarType_32, 1) = ((MR_Box) (check_hlds__try_expand__V_73_73));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__RealResultVarType_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__vartypes__update_var_type_4_p_0(check_hlds__try_expand__ResultVar_17, check_hlds__try_expand__RealResultVarType_32, check_hlds__try_expand__STATE_VARIABLE_VarTypes_68_68, &check_hlds__try_expand__STATE_VARIABLE_VarTypes_76_76);
    }
    {
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__try_expand__STATE_VARIABLE_VarTypes_76_76, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_64, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_77_77);
    }
    {
      check_hlds__try_expand__make_try_lambda_8_p_0(check_hlds__try_expand__Goal1_18, check_hlds__try_expand__GoalOutputVarsSet_23, check_hlds__try_expand__OutputTupleType_31, check_hlds__try_expand__MaybeIO_16, &check_hlds__try_expand__LambdaVar_33, &check_hlds__try_expand__AssignLambdaVar_34, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_77_77, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_78_78);
    }
    check_hlds__try_expand__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal1_18, (MR_Integer) 0)));
    check_hlds__try_expand__GoalInfo1_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal1_18, (MR_Integer) 1)));
    {
      check_hlds__try_expand__GoalPurity_37 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__try_expand__GoalInfo1_36);
    }
    {
      check_hlds__try_expand__GoalContext_38 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__try_expand__GoalInfo1_36);
    }
    if ((check_hlds__try_expand__MaybeIO_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          check_hlds__try_expand__make_try_call_14_p_0((MR_String) "try", check_hlds__try_expand__LambdaVar_33, check_hlds__try_expand__ResultVar_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__OutputTupleType_31, check_hlds__try_expand__GoalPurity_37, check_hlds__try_expand__GoalContext_38, &check_hlds__try_expand__CallTryGoal_42, check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_62, check_hlds__try_expand__STATE_VARIABLE_PredInfo_63, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_78_78, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_92_92, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_66, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_67);
        }
        check_hlds__try_expand__Then_44 = check_hlds__try_expand__Then1_19;
        check_hlds__try_expand__ExcpHandling_46 = check_hlds__try_expand__ExcpHandling1_21;
      }
    else
      {
        MR_Word check_hlds__try_expand__TypeInfo_133_133;
        MR_Word check_hlds__try_expand__GoalInitialIOVar_39;
        MR_Word check_hlds__try_expand__GoalFinalIOVar_40;
        MR_Word check_hlds__try_expand__TryIOOutputVar_41;
        MR_Word check_hlds__try_expand__UnifyThenInitialIOVar_43;
        MR_Word check_hlds__try_expand__RenamingExcp_45;
        MR_Word check_hlds__try_expand__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeIO_16, (MR_Integer) 0)));
        MR_Word check_hlds__try_expand__V_85_85;
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_87_87;
        MR_Word check_hlds__try_expand__V_90_90;
        MR_Word check_hlds__try_expand__V_94_94;
        MR_Word check_hlds__try_expand__V_96_96;
        MR_Word check_hlds__try_expand__V_97_97;
        MR_Word check_hlds__try_expand__V_101_101;
        MR_Word check_hlds__try_expand__V_102_102;

        check_hlds__try_expand__GoalInitialIOVar_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_84_84, (MR_Integer) 0)));
        check_hlds__try_expand__GoalFinalIOVar_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_84_84, (MR_Integer) 1)));
        {
          check_hlds__try_expand__V_85_85 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
        }
        {
          hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(check_hlds__try_expand__V_85_85, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[0]), &check_hlds__try_expand__TryIOOutputVar_41, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_78_78, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_87_87);
        }
        {
          check_hlds__try_expand__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_94_94, 0) = ((MR_Box) (check_hlds__try_expand__TryIOOutputVar_41));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__try_expand__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_90_90, 0) = ((MR_Box) (check_hlds__try_expand__GoalInitialIOVar_39));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_90_90, 1) = ((MR_Box) (check_hlds__try_expand__V_94_94));
        }
        {
          check_hlds__try_expand__make_try_call_14_p_0((MR_String) "try_io", check_hlds__try_expand__LambdaVar_33, check_hlds__try_expand__ResultVar_17, check_hlds__try_expand__V_90_90, check_hlds__try_expand__OutputTupleType_31, check_hlds__try_expand__GoalPurity_37, check_hlds__try_expand__GoalContext_38, &check_hlds__try_expand__CallTryGoal_42, check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_62, check_hlds__try_expand__STATE_VARIABLE_PredInfo_63, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_87_87, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_92_92, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_66, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_67);
        }
        {
          check_hlds__try_expand__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_96_96, 0) = ((MR_Box) (check_hlds__try_expand__TryIOOutputVar_41));
        }
        {
          check_hlds__try_expand__V_97_97 = mercury__term__context_init_0_f_0();
        }
        {
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__try_expand__GoalFinalIOVar_40, check_hlds__try_expand__V_96_96, check_hlds__try_expand__V_97_97, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__try_expand_scalar_common_6[1]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__try_expand__UnifyThenInitialIOVar_43);
        }
        {
          hlds__hlds_goal__conjoin_goals_3_p_0(check_hlds__try_expand__UnifyThenInitialIOVar_43, check_hlds__try_expand__Then1_19, &check_hlds__try_expand__Then_44);
        }
        check_hlds__try_expand__TypeInfo_133_133 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
        {
          check_hlds__try_expand__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_102_102, 0) = ((MR_Box) (check_hlds__try_expand__GoalInitialIOVar_39));
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_102_102, 1) = ((MR_Box) (check_hlds__try_expand__TryIOOutputVar_41));
        }
        {
          check_hlds__try_expand__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_101_101, 0) = ((MR_Box) (check_hlds__try_expand__V_102_102));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__try_expand__RenamingExcp_45 = mercury__map__from_assoc_list_1_f_0(check_hlds__try_expand__TypeInfo_133_133, check_hlds__try_expand__TypeInfo_133_133, check_hlds__try_expand__V_101_101);
        }
        {
          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(check_hlds__try_expand__RenamingExcp_45, check_hlds__try_expand__ExcpHandling1_21, &check_hlds__try_expand__ExcpHandling_46);
        }
      }
    {
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__try_expand__GoalInfo_47);
    }
    {
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(check_hlds__try_expand__OutputTupleType_31, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[2]), &check_hlds__try_expand__TmpTupleVar_48, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_92_92, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_105_105);
    }
    {
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(check_hlds__try_expand__OutputTupleType_31, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[3]), &check_hlds__try_expand__TupleVar_49, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_105_105, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_65);
    }
    {
      check_hlds__try_expand__V_110_110 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
    }
    {
      check_hlds__try_expand__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_111_111, 0) = ((MR_Box) (check_hlds__try_expand__TmpTupleVar_48));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_goal__deconstruct_functor_4_p_0(check_hlds__try_expand__ResultVar_17, check_hlds__try_expand__V_110_110, check_hlds__try_expand__V_111_111, &check_hlds__try_expand__DeconstructSucceeded_50);
    }
    {
      hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__try_expand__Instmap_22, check_hlds__try_expand__GoalOutputVars_29, &check_hlds__try_expand__TupleArgInsts_51);
    }
    {
      check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0(check_hlds__try_expand__TmpTupleVar_48, check_hlds__try_expand__TupleVar_49, check_hlds__try_expand__TupleArgInsts_51, &check_hlds__try_expand__CastOutputTuple_52);
    }
    {
      hlds__make_goal__deconstruct_tuple_3_p_0(check_hlds__try_expand__TupleVar_49, check_hlds__try_expand__GoalOutputVars_29, &check_hlds__try_expand__DeconstructOutputs_53);
    }
    {
      check_hlds__try_expand__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_116_116, 0) = ((MR_Box) (check_hlds__try_expand__Then_44));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__try_expand__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_115_115, 0) = ((MR_Box) (check_hlds__try_expand__DeconstructOutputs_53));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_115_115, 1) = ((MR_Box) (check_hlds__try_expand__V_116_116));
    }
    {
      check_hlds__try_expand__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_114_114, 0) = ((MR_Box) (check_hlds__try_expand__CastOutputTuple_52));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_114_114, 1) = ((MR_Box) (check_hlds__try_expand__V_115_115));
    }
    {
      check_hlds__try_expand__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_113_113, 0) = ((MR_Box) (check_hlds__try_expand__DeconstructSucceeded_50));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_113_113, 1) = ((MR_Box) (check_hlds__try_expand__V_114_114));
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__try_expand__V_113_113, check_hlds__try_expand__GoalInfo_47, &check_hlds__try_expand__DeconstructsThen_54);
    }
    {
      check_hlds__try_expand__V_118_118 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
    }
    {
      check_hlds__try_expand__SucceededCase_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__SucceededCase_55, 0) = ((MR_Box) (check_hlds__try_expand__V_118_118));
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__SucceededCase_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__SucceededCase_55, 2) = ((MR_Box) (check_hlds__try_expand__DeconstructsThen_54));
    }
    {
      check_hlds__try_expand__V_120_120 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
    }
    {
      check_hlds__try_expand__ExceptionCase_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__ExceptionCase_56, 0) = ((MR_Box) (check_hlds__try_expand__V_120_120));
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__ExceptionCase_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__ExceptionCase_56, 2) = ((MR_Box) (check_hlds__try_expand__ExcpHandling_46));
    }
    if ((check_hlds__try_expand__MaybeElse1_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      check_hlds__try_expand__MaybeFailedCase_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__try_expand__Else1_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeElse1_20, (MR_Integer) 0)));
        MR_Word check_hlds__try_expand__FailedCase_58;
        MR_Word check_hlds__try_expand__V_122_122;

        {
          check_hlds__try_expand__V_122_122 = parse_tree__builtin_lib_types__exception_failed_functor_0_f_0();
        }
        {
          check_hlds__try_expand__FailedCase_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__FailedCase_58, 0) = ((MR_Box) (check_hlds__try_expand__V_122_122));
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__FailedCase_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__FailedCase_58, 2) = ((MR_Box) (check_hlds__try_expand__Else1_57));
        }
        {
          check_hlds__try_expand__MaybeFailedCase_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeFailedCase_59, 0) = ((MR_Box) (check_hlds__try_expand__FailedCase_58));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeFailedCase_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    {
      check_hlds__try_expand__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_125_125, 0) = ((MR_Box) (check_hlds__try_expand__ExceptionCase_56));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_125_125, 1) = ((MR_Box) (check_hlds__try_expand__MaybeFailedCase_59));
    }
    {
      check_hlds__try_expand__Cases_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__Cases_60, 0) = ((MR_Box) (check_hlds__try_expand__SucceededCase_55));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__Cases_60, 1) = ((MR_Box) (check_hlds__try_expand__V_125_125));
    }
    {
      check_hlds__try_expand__V_126_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_126_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_126_126, 1) = ((MR_Box) (check_hlds__try_expand__ResultVar_17));
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_126_126, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_126_126, 3) = ((MR_Box) (check_hlds__try_expand__Cases_60));
    }
    {
      check_hlds__try_expand__ResultSwitch_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__ResultSwitch_61, 0) = ((MR_Box) (check_hlds__try_expand__V_126_126));
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__ResultSwitch_61, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo_47));
    }
    {
      check_hlds__try_expand__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_130_130, 0) = ((MR_Box) (check_hlds__try_expand__ResultSwitch_61));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__try_expand__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_129_129, 0) = ((MR_Box) (check_hlds__try_expand__CallTryGoal_42));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_129_129, 1) = ((MR_Box) (check_hlds__try_expand__V_130_130));
    }
    {
      check_hlds__try_expand__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_128_128, 0) = ((MR_Box) (check_hlds__try_expand__AssignLambdaVar_34));
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_128_128, 1) = ((MR_Box) (check_hlds__try_expand__V_129_129));
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__try_expand__V_128_128, check_hlds__try_expand__GoalInfo_47, check_hlds__try_expand__FinalGoal_24);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__try_expand__expand_try_goal_5_p_0_1(
  MR_Box check_hlds__try_expand__closure_arg,
  MR_Box check_hlds__try_expand__wrapper_arg_1)
{
  {
    MR_bool check_hlds__try_expand__succeeded;
    MR_Box check_hlds__try_expand__closure = check_hlds__try_expand__closure_arg;

    {
      check_hlds__try_expand__succeeded = hlds__instmap__var_is_bound_in_instmap_delta_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__try_expand__wrapper_arg_1));
    }
    return check_hlds__try_expand__succeeded;
  }
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goal_5_p_0(
  MR_Word check_hlds__try_expand__Instmap_6,
  MR_Word check_hlds__try_expand__TryGoal_7,
  MR_Word * check_hlds__try_expand__FinalGoal_8,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_33,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_34)
{
  {
    MR_bool check_hlds__try_expand__succeeded;
    MR_Word check_hlds__try_expand__MaybeIO_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__TryGoal_7, (MR_Integer) 0)));
    MR_Word check_hlds__try_expand__ResultVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__TryGoal_7, (MR_Integer) 1)));
    MR_Word check_hlds__try_expand__IntermediateGoal_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__TryGoal_7, (MR_Integer) 2)));
    MR_Word check_hlds__try_expand__Goal0_13;
    MR_Word check_hlds__try_expand__Then0_14;
    MR_Word check_hlds__try_expand__MaybeElse0_15;
    MR_Word check_hlds__try_expand__ExcpHandling0_16;
    MR_Word check_hlds__try_expand__Goal1_17;
    MR_Word check_hlds__try_expand__InstmapAfterGoal_18;
    MR_Word check_hlds__try_expand__Then1_19;
    MR_Word check_hlds__try_expand__MaybeElse1_22;
    MR_Word check_hlds__try_expand__ExcpHandling1_23;
    MR_Word check_hlds__try_expand__GoalOutputVarsSet0_24;
    MR_Word check_hlds__try_expand__GoalOutputVarsSet_27;
    MR_Word check_hlds__try_expand__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_0_33, (MR_Integer) 0)));
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_36_36;
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_37_37;
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_38_38;
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_39_39;
    MR_Word check_hlds__try_expand__V_40_40;
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_42_42;
    MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_43_43;
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44;
    MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_45_45;
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_46_46;
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_47_47;
    MR_Word check_hlds__try_expand__GoalInfo_62;
    MR_Word check_hlds__try_expand__NonLocals_63;
    MR_Word check_hlds__try_expand__InstmapDelta_64;
    MR_Word check_hlds__try_expand__V_65_65;
    MR_Word check_hlds__try_expand__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_0_33, (MR_Integer) 1)));
    MR_Word check_hlds__try_expand__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_0_33, (MR_Integer) 2)));
    MR_Word check_hlds__try_expand__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_0_33, (MR_Integer) 3)));
    MR_Word check_hlds__try_expand__V_53_53;
    MR_Word check_hlds__try_expand__V_54_54;
    MR_Word check_hlds__try_expand__V_55_55;
    MR_Word check_hlds__try_expand__V_61_61;
    MR_Word check_hlds__try_expand__V_32_32;

    {
      check_hlds__try_expand__extract_intermediate_goal_parts_7_p_0(check_hlds__try_expand__V_35_35, check_hlds__try_expand__ResultVar_11, check_hlds__try_expand__IntermediateGoal_12, &check_hlds__try_expand__Goal0_13, &check_hlds__try_expand__Then0_14, &check_hlds__try_expand__MaybeElse0_15, &check_hlds__try_expand__ExcpHandling0_16);
    }
    {
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Goal0_13, &check_hlds__try_expand__Goal1_17, check_hlds__try_expand__STATE_VARIABLE_Info_0_33, &check_hlds__try_expand__STATE_VARIABLE_Info_36_36);
    }
    {
      hlds__goal_util__update_instmap_3_p_0(check_hlds__try_expand__Goal0_13, check_hlds__try_expand__Instmap_6, &check_hlds__try_expand__InstmapAfterGoal_18);
    }
    {
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__InstmapAfterGoal_18, check_hlds__try_expand__Then0_14, &check_hlds__try_expand__Then1_19, check_hlds__try_expand__STATE_VARIABLE_Info_36_36, &check_hlds__try_expand__STATE_VARIABLE_Info_37_37);
    }
    if ((check_hlds__try_expand__MaybeElse0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        check_hlds__try_expand__MaybeElse1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        check_hlds__try_expand__STATE_VARIABLE_Info_38_38 = check_hlds__try_expand__STATE_VARIABLE_Info_37_37;
      }
    else
      {
        MR_Word check_hlds__try_expand__Else0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeElse0_15, (MR_Integer) 0)));
        MR_Word check_hlds__try_expand__Else1_21;

        {
          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Else0_20, &check_hlds__try_expand__Else1_21, check_hlds__try_expand__STATE_VARIABLE_Info_37_37, &check_hlds__try_expand__STATE_VARIABLE_Info_38_38);
        }
        {
          check_hlds__try_expand__MaybeElse1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeElse1_22, 0) = ((MR_Box) (check_hlds__try_expand__Else1_21));
        }
      }
    {
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__ExcpHandling0_16, &check_hlds__try_expand__ExcpHandling1_23, check_hlds__try_expand__STATE_VARIABLE_Info_38_38, &check_hlds__try_expand__STATE_VARIABLE_Info_39_39);
    }
    check_hlds__try_expand__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
    check_hlds__try_expand__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
    check_hlds__try_expand__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
    check_hlds__try_expand__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
    check_hlds__try_expand__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_13, (MR_Integer) 0)));
    check_hlds__try_expand__GoalInfo_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_13, (MR_Integer) 1)));
    {
      check_hlds__try_expand__NonLocals_63 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__try_expand__GoalInfo_62);
    }
    {
      check_hlds__try_expand__InstmapDelta_64 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__try_expand__GoalInfo_62);
    }
    {
      check_hlds__try_expand__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 0) = ((MR_Box) (&check_hlds__try_expand_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 1) = ((MR_Box) (check_hlds__try_expand__expand_try_goal_5_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 3) = ((MR_Box) (check_hlds__try_expand__V_40_40));
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 4) = ((MR_Box) (check_hlds__try_expand__Instmap_6));
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 5) = ((MR_Box) (check_hlds__try_expand__InstmapDelta_64));
    }
    {
      check_hlds__try_expand__GoalOutputVarsSet0_24 = parse_tree__set_of_var__filter_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__try_expand__V_65_65, check_hlds__try_expand__NonLocals_63);
    }
    if ((check_hlds__try_expand__MaybeIO_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      check_hlds__try_expand__GoalOutputVarsSet_27 = check_hlds__try_expand__GoalOutputVarsSet0_24;
    else
      {
        MR_Word check_hlds__try_expand__IOStateVarFinal_26;
        MR_Word check_hlds__try_expand__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeIO_10, (MR_Integer) 0)));
        MR_Word check_hlds__try_expand___IOStateVarInitial_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_41_41, (MR_Integer) 0)));

        check_hlds__try_expand__IOStateVarFinal_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_41_41, (MR_Integer) 1)));
        {
          parse_tree__set_of_var__delete_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__try_expand__IOStateVarFinal_26, check_hlds__try_expand__GoalOutputVarsSet0_24, &check_hlds__try_expand__GoalOutputVarsSet_27);
        }
      }
    check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
    check_hlds__try_expand__STATE_VARIABLE_PredInfo_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
    check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
    check_hlds__try_expand__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
    {
      check_hlds__try_expand__expand_try_goal_2_15_p_0(check_hlds__try_expand__MaybeIO_10, check_hlds__try_expand__ResultVar_11, check_hlds__try_expand__Goal1_17, check_hlds__try_expand__Then1_19, check_hlds__try_expand__MaybeElse1_22, check_hlds__try_expand__ExcpHandling1_23, check_hlds__try_expand__InstmapAfterGoal_18, check_hlds__try_expand__GoalOutputVarsSet_27, check_hlds__try_expand__FinalGoal_8, check_hlds__try_expand__STATE_VARIABLE_PredInfo_43_43, &check_hlds__try_expand__STATE_VARIABLE_PredInfo_45_45, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_46_46, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_42_42, &check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_47_47);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__try_expand__STATE_VARIABLE_Info_34 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_47_47));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_PredInfo_45_45));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ProcInfo_46_46));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 1));
    }
  }
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_if_then_else_9_p_0(
  MR_Word check_hlds__try_expand__Instmap0_10,
  MR_Word check_hlds__try_expand__Cond0_11,
  MR_Word * check_hlds__try_expand__Cond_12,
  MR_Word check_hlds__try_expand__Then0_13,
  MR_Word * check_hlds__try_expand__Then_14,
  MR_Word check_hlds__try_expand__Else0_15,
  MR_Word * check_hlds__try_expand__Else_16,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_22,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_23)
{
  {
    MR_bool check_hlds__try_expand__succeeded;
    MR_Word check_hlds__try_expand__CondInfo_19;
    MR_Word check_hlds__try_expand__CondInstmapDelta_20;
    MR_Word check_hlds__try_expand__InstmapAfterCond_21;
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_24_24;
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_25_25;
    MR_Word check_hlds__try_expand__V_18_18;

    {
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap0_10, check_hlds__try_expand__Cond0_11, check_hlds__try_expand__Cond_12, check_hlds__try_expand__STATE_VARIABLE_Info_0_22, &check_hlds__try_expand__STATE_VARIABLE_Info_24_24);
    }
    check_hlds__try_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Cond0_11, (MR_Integer) 0)));
    check_hlds__try_expand__CondInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Cond0_11, (MR_Integer) 1)));
    {
      check_hlds__try_expand__CondInstmapDelta_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__try_expand__CondInfo_19);
    }
    {
      hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__try_expand__Instmap0_10, check_hlds__try_expand__CondInstmapDelta_20, &check_hlds__try_expand__InstmapAfterCond_21);
    }
    {
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__InstmapAfterCond_21, check_hlds__try_expand__Then0_13, check_hlds__try_expand__Then_14, check_hlds__try_expand__STATE_VARIABLE_Info_24_24, &check_hlds__try_expand__STATE_VARIABLE_Info_25_25);
    }
    {
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap0_10, check_hlds__try_expand__Else0_15, check_hlds__try_expand__Else_16, check_hlds__try_expand__STATE_VARIABLE_Info_25_25, check_hlds__try_expand__STATE_VARIABLE_Info_23);
    }
  }
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_cases_5_p_0(
  MR_Word check_hlds__try_expand__HeadVar__1_1,
  MR_Word check_hlds__try_expand__HeadVar__2_2,
  MR_Word * check_hlds__try_expand__HeadVar__3_3,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_5)
{
  {
    MR_bool check_hlds__try_expand__succeeded;

    if ((check_hlds__try_expand__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__try_expand__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__try_expand__STATE_VARIABLE_Info_5 = check_hlds__try_expand__STATE_VARIABLE_Info_0_4;
      }
    else
      {
        MR_Word check_hlds__try_expand__Case0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__try_expand__Cases0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__try_expand__Case_13;
        MR_Word check_hlds__try_expand__Cases_14;
        MR_Word check_hlds__try_expand__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case0_11, (MR_Integer) 0)));
        MR_Word check_hlds__try_expand__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case0_11, (MR_Integer) 1)));
        MR_Word check_hlds__try_expand__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case0_11, (MR_Integer) 2)));
        MR_Word check_hlds__try_expand__Goal_19;
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_22_22;

        {
          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__HeadVar__1_1, check_hlds__try_expand__Goal0_18, &check_hlds__try_expand__Goal_19, check_hlds__try_expand__STATE_VARIABLE_Info_0_4, &check_hlds__try_expand__STATE_VARIABLE_Info_22_22);
        }
        {
          check_hlds__try_expand__expand_try_goals_in_cases_5_p_0(check_hlds__try_expand__HeadVar__1_1, check_hlds__try_expand__Cases0_12, &check_hlds__try_expand__Cases_14, check_hlds__try_expand__STATE_VARIABLE_Info_22_22, check_hlds__try_expand__STATE_VARIABLE_Info_5);
        }
        {
          check_hlds__try_expand__Case_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case_13, 0) = ((MR_Box) (check_hlds__try_expand__MainConsId_16));
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case_13, 1) = ((MR_Box) (check_hlds__try_expand__OtherConsIds_17));
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case_13, 2) = ((MR_Box) (check_hlds__try_expand__Goal_19));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__try_expand__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__try_expand__Case_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__try_expand__Cases_14));
        }
      }
  }
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_disj_5_p_0_1(
  MR_Box check_hlds__try_expand__closure_arg,
  MR_Box check_hlds__try_expand__wrapper_arg_1,
  MR_Box * check_hlds__try_expand__wrapper_arg_2,
  MR_Box check_hlds__try_expand__wrapper_arg_3,
  MR_Box * check_hlds__try_expand__wrapper_arg_4)
{
  {
    MR_Box check_hlds__try_expand__closure = check_hlds__try_expand__closure_arg;
    MR_Word check_hlds__try_expand__conv1_Goal_8;
    MR_Word check_hlds__try_expand__conv0_STATE_VARIABLE_Info_97;

    {
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__try_expand__wrapper_arg_1), &check_hlds__try_expand__conv1_Goal_8, ((MR_Word) check_hlds__try_expand__wrapper_arg_3), &check_hlds__try_expand__conv0_STATE_VARIABLE_Info_97);
    }
    *check_hlds__try_expand__wrapper_arg_2 = ((MR_Box) (check_hlds__try_expand__conv1_Goal_8));
    *check_hlds__try_expand__wrapper_arg_4 = ((MR_Box) (check_hlds__try_expand__conv0_STATE_VARIABLE_Info_97));
  }
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_disj_5_p_0(
  MR_Word check_hlds__try_expand__Instmap0_6,
  MR_Word check_hlds__try_expand__Goals0_7,
  MR_Word * check_hlds__try_expand__Goals_8,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_10,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_11)
{
  {
    MR_bool check_hlds__try_expand__succeeded;
    MR_Word check_hlds__try_expand__TypeCtorInfo_18_18;
    MR_Word check_hlds__try_expand__V_12_12;
    MR_Box check_hlds__try_expand__conv2_STATE_VARIABLE_Info_11;

    {
      check_hlds__try_expand__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_12_12, 0) = ((MR_Box) (&check_hlds__try_expand_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_12_12, 1) = ((MR_Box) (check_hlds__try_expand__expand_try_goals_in_disj_5_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_12_12, 3) = ((MR_Box) (check_hlds__try_expand__Instmap0_6));
    }
    check_hlds__try_expand__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    {
      mercury__list__map_foldl_5_p_0(check_hlds__try_expand__TypeCtorInfo_18_18, check_hlds__try_expand__TypeCtorInfo_18_18, (MR_Word) &check_hlds__try_expand__check_hlds__try_expand__type_ctor_info_trys_info_0, check_hlds__try_expand__V_12_12, check_hlds__try_expand__Goals0_7, check_hlds__try_expand__Goals_8, ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_Info_0_10)), &check_hlds__try_expand__conv2_STATE_VARIABLE_Info_11);
    }
    *check_hlds__try_expand__STATE_VARIABLE_Info_11 = ((MR_Word) check_hlds__try_expand__conv2_STATE_VARIABLE_Info_11);
  }
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_conj_5_p_0(
  MR_Word check_hlds__try_expand__HeadVar__1_1,
  MR_Word check_hlds__try_expand__HeadVar__2_2,
  MR_Word * check_hlds__try_expand__HeadVar__3_3,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_5)
{
  {
    MR_bool check_hlds__try_expand__succeeded;

    if ((check_hlds__try_expand__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__try_expand__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__try_expand__STATE_VARIABLE_Info_5 = check_hlds__try_expand__STATE_VARIABLE_Info_0_4;
      }
    else
      {
        MR_Word check_hlds__try_expand__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__try_expand__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__try_expand__Goal_13;
        MR_Word check_hlds__try_expand__Goals_14;
        MR_Word check_hlds__try_expand__GoalInfo_17;
        MR_Word check_hlds__try_expand__InstmapDelta_18;
        MR_Word check_hlds__try_expand__Instmap_19;
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_22_22;
        MR_Word check_hlds__try_expand__V_16_16;

        {
          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__HeadVar__1_1, check_hlds__try_expand__Goal0_11, &check_hlds__try_expand__Goal_13, check_hlds__try_expand__STATE_VARIABLE_Info_0_4, &check_hlds__try_expand__STATE_VARIABLE_Info_22_22);
        }
        check_hlds__try_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_11, (MR_Integer) 0)));
        check_hlds__try_expand__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_11, (MR_Integer) 1)));
        {
          check_hlds__try_expand__InstmapDelta_18 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__try_expand__GoalInfo_17);
        }
        {
          hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__try_expand__HeadVar__1_1, check_hlds__try_expand__InstmapDelta_18, &check_hlds__try_expand__Instmap_19);
        }
        {
          check_hlds__try_expand__expand_try_goals_in_conj_5_p_0(check_hlds__try_expand__Instmap_19, check_hlds__try_expand__Goals0_12, &check_hlds__try_expand__Goals_14, check_hlds__try_expand__STATE_VARIABLE_Info_22_22, check_hlds__try_expand__STATE_VARIABLE_Info_5);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__try_expand__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__try_expand__Goal_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__try_expand__Goals_14));
        }
      }
  }
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(
  MR_Word check_hlds__try_expand__Instmap_6,
  MR_Word check_hlds__try_expand__Goal0_7,
  MR_Word * check_hlds__try_expand__Goal_8,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_96,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_97)
{
  {
    MR_bool check_hlds__try_expand__succeeded;
    MR_Word check_hlds__try_expand__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_7, (MR_Integer) 0)));
    MR_Word check_hlds__try_expand__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_7, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) check_hlds__try_expand__GoalExpr0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__try_expand__SubGoal0_23 = (MR_Word) MR_body(((MR_Word) check_hlds__try_expand__GoalExpr0_10), (MR_Integer) 0);
          MR_Word check_hlds__try_expand__SubGoal_24;
          MR_Word check_hlds__try_expand__GoalExpr_119;

          {
            check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__SubGoal0_23, &check_hlds__try_expand__SubGoal_24, check_hlds__try_expand__STATE_VARIABLE_Info_0_96, check_hlds__try_expand__STATE_VARIABLE_Info_97);
          }
          check_hlds__try_expand__GoalExpr_119 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__try_expand__SubGoal_24);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *check_hlds__try_expand__Goal_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_119));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *check_hlds__try_expand__Goal_8 = check_hlds__try_expand__Goal0_7;
          *check_hlds__try_expand__STATE_VARIABLE_Info_97 = check_hlds__try_expand__STATE_VARIABLE_Info_0_96;
        }
        break;
      case (MR_Integer) 2:
        {
          *check_hlds__try_expand__Goal_8 = check_hlds__try_expand__Goal0_7;
          *check_hlds__try_expand__STATE_VARIABLE_Info_97 = check_hlds__try_expand__STATE_VARIABLE_Info_0_96;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *check_hlds__try_expand__Goal_8 = check_hlds__try_expand__Goal0_7;
              *check_hlds__try_expand__STATE_VARIABLE_Info_97 = check_hlds__try_expand__STATE_VARIABLE_Info_0_96;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__try_expand__ConjType_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word check_hlds__try_expand__Conjuncts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 2)));
              MR_Word check_hlds__try_expand__Conjuncts_19;
              MR_Word check_hlds__try_expand__GoalExpr_20;

              {
                check_hlds__try_expand__expand_try_goals_in_conj_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Conjuncts0_18, &check_hlds__try_expand__Conjuncts_19, check_hlds__try_expand__STATE_VARIABLE_Info_0_96, check_hlds__try_expand__STATE_VARIABLE_Info_97);
              }
              {
                check_hlds__try_expand__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_20, 1) = ((MR_Box) (check_hlds__try_expand__ConjType_17));
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_20, 2) = ((MR_Box) (check_hlds__try_expand__Conjuncts_19));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *check_hlds__try_expand__Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_20));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word check_hlds__try_expand__Disjuncts0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word check_hlds__try_expand__Disjuncts_22;
              MR_Word check_hlds__try_expand__GoalExpr_118;

              {
                check_hlds__try_expand__expand_try_goals_in_disj_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Disjuncts0_21, &check_hlds__try_expand__Disjuncts_22, check_hlds__try_expand__STATE_VARIABLE_Info_0_96, check_hlds__try_expand__STATE_VARIABLE_Info_97);
              }
              {
                check_hlds__try_expand__GoalExpr_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_118, 1) = ((MR_Box) (check_hlds__try_expand__Disjuncts_22));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *check_hlds__try_expand__Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_118));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word check_hlds__try_expand__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word check_hlds__try_expand__CanFail_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 2)));
              MR_Word check_hlds__try_expand__Cases0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 3)));
              MR_Word check_hlds__try_expand__Cases_28;
              MR_Word check_hlds__try_expand__GoalExpr_120;

              {
                check_hlds__try_expand__expand_try_goals_in_cases_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Cases0_27, &check_hlds__try_expand__Cases_28, check_hlds__try_expand__STATE_VARIABLE_Info_0_96, check_hlds__try_expand__STATE_VARIABLE_Info_97);
              }
              {
                check_hlds__try_expand__GoalExpr_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_120, 1) = ((MR_Box) (check_hlds__try_expand__Var_25));
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_120, 2) = ((MR_Box) (check_hlds__try_expand__CanFail_26));
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_120, 3) = ((MR_Box) (check_hlds__try_expand__Cases_28));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *check_hlds__try_expand__Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_120));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word check_hlds__try_expand__Reason_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word check_hlds__try_expand__InnerGoal0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 2)));

              switch (MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word check_hlds__try_expand__InnerGoal_132;
                    MR_Word check_hlds__try_expand__GoalExpr_133;

                    {
                      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_132, check_hlds__try_expand__STATE_VARIABLE_Info_0_96, check_hlds__try_expand__STATE_VARIABLE_Info_97);
                    }
                    {
                      check_hlds__try_expand__GoalExpr_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_133, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
                      MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_133, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_132));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      *check_hlds__try_expand__Goal_8 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_133));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word check_hlds__try_expand__InnerGoal_130;
                    MR_Word check_hlds__try_expand__GoalExpr_131;

                    {
                      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_130, check_hlds__try_expand__STATE_VARIABLE_Info_0_96, check_hlds__try_expand__STATE_VARIABLE_Info_97);
                    }
                    {
                      check_hlds__try_expand__GoalExpr_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_131, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
                      MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_131, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_130));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      *check_hlds__try_expand__Goal_8 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_131));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word check_hlds__try_expand__InnerGoal_144;
                    MR_Word check_hlds__try_expand__GoalExpr_145;

                    {
                      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_144, check_hlds__try_expand__STATE_VARIABLE_Info_0_96, check_hlds__try_expand__STATE_VARIABLE_Info_97);
                    }
                    {
                      check_hlds__try_expand__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_145, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
                      MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_145, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_144));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      *check_hlds__try_expand__Goal_8 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_145));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word check_hlds__try_expand__InnerGoal_142;
                        MR_Word check_hlds__try_expand__GoalExpr_143;

                        {
                          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_142, check_hlds__try_expand__STATE_VARIABLE_Info_0_96, check_hlds__try_expand__STATE_VARIABLE_Info_97);
                        }
                        {
                          check_hlds__try_expand__GoalExpr_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_143, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_143, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_142));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          *check_hlds__try_expand__Goal_8 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_143));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word check_hlds__try_expand__InnerGoal_148;
                        MR_Word check_hlds__try_expand__GoalExpr_149;

                        {
                          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_148, check_hlds__try_expand__STATE_VARIABLE_Info_0_96, check_hlds__try_expand__STATE_VARIABLE_Info_97);
                        }
                        {
                          check_hlds__try_expand__GoalExpr_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_149, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_149, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_148));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          *check_hlds__try_expand__Goal_8 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_149));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word check_hlds__try_expand__InnerGoal_146;
                        MR_Word check_hlds__try_expand__GoalExpr_147;

                        {
                          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_146, check_hlds__try_expand__STATE_VARIABLE_Info_0_96, check_hlds__try_expand__STATE_VARIABLE_Info_97);
                        }
                        {
                          check_hlds__try_expand__GoalExpr_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_147, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_147, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_146));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          *check_hlds__try_expand__Goal_8 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_147));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word check_hlds__try_expand__InnerGoal_150;
                        MR_Word check_hlds__try_expand__GoalExpr_151;

                        {
                          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_150, check_hlds__try_expand__STATE_VARIABLE_Info_0_96, check_hlds__try_expand__STATE_VARIABLE_Info_97);
                        }
                        {
                          check_hlds__try_expand__GoalExpr_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_151, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_151, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_151, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_150));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          *check_hlds__try_expand__Goal_8 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_151));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word check_hlds__try_expand__InnerGoal_128;
                        MR_Word check_hlds__try_expand__GoalExpr_129;

                        {
                          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_128, check_hlds__try_expand__STATE_VARIABLE_Info_0_96, check_hlds__try_expand__STATE_VARIABLE_Info_97);
                        }
                        {
                          check_hlds__try_expand__GoalExpr_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_129, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_129, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_128));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          *check_hlds__try_expand__Goal_8 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_129));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Word check_hlds__try_expand__InnerGoal_54;
                        MR_Word check_hlds__try_expand__GoalExpr_121;

                        {
                          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_54, check_hlds__try_expand__STATE_VARIABLE_Info_0_96, check_hlds__try_expand__STATE_VARIABLE_Info_97);
                        }
                        {
                          check_hlds__try_expand__GoalExpr_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_121, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_121, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_54));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          *check_hlds__try_expand__Goal_8 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_121));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word check_hlds__try_expand__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 2)));
                        MR_Word check_hlds__try_expand__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 1)));

                        switch (check_hlds__try_expand__V_154_154) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            {
                              *check_hlds__try_expand__Goal_8 = check_hlds__try_expand__Goal0_7;
                              *check_hlds__try_expand__STATE_VARIABLE_Info_97 = check_hlds__try_expand__STATE_VARIABLE_Info_0_96;
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_Word check_hlds__try_expand__InnerGoal_134;
                              MR_Word check_hlds__try_expand__GoalExpr_135;

                              {
                                check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_134, check_hlds__try_expand__STATE_VARIABLE_Info_0_96, check_hlds__try_expand__STATE_VARIABLE_Info_97);
                              }
                              {
                                check_hlds__try_expand__GoalExpr_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_135, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
                                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_135, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_134));
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                *check_hlds__try_expand__Goal_8 = base;
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_135));
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
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
                              MR_Word check_hlds__try_expand__InnerGoal_136;
                              MR_Word check_hlds__try_expand__GoalExpr_137;

                              {
                                check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_136, check_hlds__try_expand__STATE_VARIABLE_Info_0_96, check_hlds__try_expand__STATE_VARIABLE_Info_97);
                              }
                              {
                                check_hlds__try_expand__GoalExpr_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_137, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
                                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_137, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_136));
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                *check_hlds__try_expand__Goal_8 = base;
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_137));
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
                              }
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Word check_hlds__try_expand__InnerGoal_152;
                        MR_Word check_hlds__try_expand__GoalExpr_153;

                        {
                          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_152, check_hlds__try_expand__STATE_VARIABLE_Info_0_96, check_hlds__try_expand__STATE_VARIABLE_Info_97);
                        }
                        {
                          check_hlds__try_expand__GoalExpr_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_153, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_153, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_153, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_152));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          *check_hlds__try_expand__Goal_8 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_153));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
                        }
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word check_hlds__try_expand__InnerGoal_140;
                        MR_Word check_hlds__try_expand__GoalExpr_141;

                        {
                          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_140, check_hlds__try_expand__STATE_VARIABLE_Info_0_96, check_hlds__try_expand__STATE_VARIABLE_Info_97);
                        }
                        {
                          check_hlds__try_expand__GoalExpr_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_141, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_141, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_140));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          *check_hlds__try_expand__Goal_8 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_141));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
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
              MR_Word check_hlds__try_expand__Vars_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word check_hlds__try_expand__Cond0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 2)));
              MR_Word check_hlds__try_expand__Then0_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 3)));
              MR_Word check_hlds__try_expand__Else0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 4)));
              MR_Word check_hlds__try_expand__Cond_60;
              MR_Word check_hlds__try_expand__Then_61;
              MR_Word check_hlds__try_expand__Else_62;
              MR_Word check_hlds__try_expand__GoalExpr_124;

              {
                check_hlds__try_expand__expand_try_goals_in_if_then_else_9_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Cond0_57, &check_hlds__try_expand__Cond_60, check_hlds__try_expand__Then0_58, &check_hlds__try_expand__Then_61, check_hlds__try_expand__Else0_59, &check_hlds__try_expand__Else_62, check_hlds__try_expand__STATE_VARIABLE_Info_0_96, check_hlds__try_expand__STATE_VARIABLE_Info_97);
              }
              {
                check_hlds__try_expand__GoalExpr_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_124, 1) = ((MR_Box) (check_hlds__try_expand__Vars_56));
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_124, 2) = ((MR_Box) (check_hlds__try_expand__Cond_60));
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_124, 3) = ((MR_Box) (check_hlds__try_expand__Then_61));
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_124, 4) = ((MR_Box) (check_hlds__try_expand__Else_62));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *check_hlds__try_expand__Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_124));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word check_hlds__try_expand__ShortHand0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) check_hlds__try_expand__ShortHand0_81)) {
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
                    MR_Word check_hlds__try_expand__AtomicGoalType_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_81, (MR_Integer) 0)));
                    MR_Word check_hlds__try_expand__Outer_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_81, (MR_Integer) 1)));
                    MR_Word check_hlds__try_expand__Inner_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_81, (MR_Integer) 2)));
                    MR_Word check_hlds__try_expand__MaybeOutputVars_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_81, (MR_Integer) 3)));
                    MR_Word check_hlds__try_expand__MainGoal0_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_81, (MR_Integer) 4)));
                    MR_Word check_hlds__try_expand__OrElseGoals0_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_81, (MR_Integer) 5)));
                    MR_Word check_hlds__try_expand__OrElseInners_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_81, (MR_Integer) 6)));
                    MR_Word check_hlds__try_expand__MainGoal_92;
                    MR_Word check_hlds__try_expand__OrElseGoals_93;
                    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_101_101;
                    MR_Word check_hlds__try_expand__V_103_103;
                    MR_Word check_hlds__try_expand__GoalExpr_125;

                    {
                      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__MainGoal0_89, &check_hlds__try_expand__MainGoal_92, check_hlds__try_expand__STATE_VARIABLE_Info_0_96, &check_hlds__try_expand__STATE_VARIABLE_Info_101_101);
                    }
                    {
                      check_hlds__try_expand__expand_try_goals_in_disj_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__OrElseGoals0_90, &check_hlds__try_expand__OrElseGoals_93, check_hlds__try_expand__STATE_VARIABLE_Info_101_101, check_hlds__try_expand__STATE_VARIABLE_Info_97);
                    }
                    {
                      check_hlds__try_expand__GoalExpr_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_125, 0) = ((MR_Box) (check_hlds__try_expand__AtomicGoalType_85));
                      MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_125, 1) = ((MR_Box) (check_hlds__try_expand__Outer_86));
                      MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_125, 2) = ((MR_Box) (check_hlds__try_expand__Inner_87));
                      MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_125, 3) = ((MR_Box) (check_hlds__try_expand__MaybeOutputVars_88));
                      MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_125, 4) = ((MR_Box) (check_hlds__try_expand__MainGoal_92));
                      MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_125, 5) = ((MR_Box) (check_hlds__try_expand__OrElseGoals_93));
                      MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_125, 6) = ((MR_Box) (check_hlds__try_expand__OrElseInners_91));
                    }
                    {
                      check_hlds__try_expand__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                      MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_103_103, 1) = ((MR_Box) (check_hlds__try_expand__GoalExpr_125));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      *check_hlds__try_expand__Goal_8 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__V_103_103));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    check_hlds__try_expand__expand_try_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__ShortHand0_81, check_hlds__try_expand__Goal_8, check_hlds__try_expand__STATE_VARIABLE_Info_0_96, check_hlds__try_expand__STATE_VARIABLE_Info_97);
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
check_hlds__try_expand__expand_try_goals_in_proc_6_p_0(
  MR_Word check_hlds__try_expand__PredId_7,
  MR_Integer check_hlds__try_expand__ProcId_8,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_20,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Specs_0_21,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Specs_22)
{
  {
    MR_bool check_hlds__try_expand__succeeded;
    MR_Word check_hlds__try_expand__Goal0_13;
    MR_Word check_hlds__try_expand__InitInstmap_14;
    MR_Word check_hlds__try_expand__Info0_15;
    MR_Word check_hlds__try_expand__Goal_16;
    MR_Word check_hlds__try_expand__Info_17;
    MR_Word check_hlds__try_expand__Changed_18;
    MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_23_23;
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_24_24;
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_26_26;
    MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_27_27;
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_28_28;

    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__try_expand__PredId_7, check_hlds__try_expand__ProcId_8, &check_hlds__try_expand__STATE_VARIABLE_PredInfo_23_23, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_24_24);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ProcInfo_24_24, &check_hlds__try_expand__Goal0_13);
    }
    {
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__try_expand__STATE_VARIABLE_ProcInfo_24_24, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_19, &check_hlds__try_expand__InitInstmap_14);
    }
    {
      check_hlds__try_expand__Info0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info0_15, 0) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_19));
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info0_15, 1) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_PredInfo_23_23));
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info0_15, 2) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ProcInfo_24_24));
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info0_15, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__InitInstmap_14, check_hlds__try_expand__Goal0_13, &check_hlds__try_expand__Goal_16, check_hlds__try_expand__Info0_15, &check_hlds__try_expand__Info_17);
    }
    check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info_17, (MR_Integer) 0)));
    check_hlds__try_expand__STATE_VARIABLE_PredInfo_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info_17, (MR_Integer) 1)));
    check_hlds__try_expand__STATE_VARIABLE_ProcInfo_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info_17, (MR_Integer) 2)));
    check_hlds__try_expand__Changed_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info_17, (MR_Integer) 3)));
    switch (check_hlds__try_expand__Changed_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_20 = check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_26_26;
          *check_hlds__try_expand__STATE_VARIABLE_Specs_22 = check_hlds__try_expand__STATE_VARIABLE_Specs_0_21;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_29_29;
          MR_Word check_hlds__try_expand__ModeSpecs_44;
          MR_Word check_hlds__try_expand__Globals_46;
          MR_Word check_hlds__try_expand__HasModeErrors_47;
          MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_27_49;
          MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_29_51;
          MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_30_52;
          MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_31_53;
          MR_Word check_hlds__try_expand___Changed_45;

          {
            hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__try_expand__Goal_16, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_28_28, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_27_49);
          }
          {
            hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_27_49, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_29_51);
          }
          {
            hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(check_hlds__try_expand__PredId_7, check_hlds__try_expand__ProcId_8, check_hlds__try_expand__STATE_VARIABLE_PredInfo_27_27, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_29_51, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_26_26, &check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_30_52);
          }
          {
            check_hlds__modes__modecheck_proc_6_p_0(check_hlds__try_expand__ProcId_8, check_hlds__try_expand__PredId_7, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_30_52, &check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_31_53, &check_hlds__try_expand__ModeSpecs_44, &check_hlds__try_expand___Changed_45);
          }
          {
            hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_31_53, &check_hlds__try_expand__Globals_46);
          }
          {
            check_hlds__try_expand__HasModeErrors_47 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__try_expand__Globals_46, check_hlds__try_expand__ModeSpecs_44);
          }
          switch (check_hlds__try_expand__HasModeErrors_47) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word check_hlds__try_expand___DetismSpecs_48;

                {
                  check_hlds__det_analysis__determinism_check_proc_5_p_0(check_hlds__try_expand__ProcId_8, check_hlds__try_expand__PredId_7, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_31_53, &check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_29_29, &check_hlds__try_expand___DetismSpecs_48);
                }
                *check_hlds__try_expand__STATE_VARIABLE_Specs_22 = check_hlds__try_expand__STATE_VARIABLE_Specs_0_21;
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  *check_hlds__try_expand__STATE_VARIABLE_Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__try_expand__ModeSpecs_44, check_hlds__try_expand__STATE_VARIABLE_Specs_0_21);
                }
                check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_29_29 = check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_31_53;
              }
              break;
          }
          {
            hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_29_29, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_20);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_pred_5_p_0_1(
  MR_Box check_hlds__try_expand__closure_arg,
  MR_Box check_hlds__try_expand__wrapper_arg_1,
  MR_Box check_hlds__try_expand__wrapper_arg_2,
  MR_Box * check_hlds__try_expand__wrapper_arg_3,
  MR_Box check_hlds__try_expand__wrapper_arg_4,
  MR_Box * check_hlds__try_expand__wrapper_arg_5)
{
  {
    MR_Box check_hlds__try_expand__closure = check_hlds__try_expand__closure_arg;
    MR_Word check_hlds__try_expand__conv1_STATE_VARIABLE_ModuleInfo_20;
    MR_Word check_hlds__try_expand__conv0_STATE_VARIABLE_Specs_22;

    {
      check_hlds__try_expand__expand_try_goals_in_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__closure, (MR_Integer) 3))), ((MR_Integer) check_hlds__try_expand__wrapper_arg_1), ((MR_Word) check_hlds__try_expand__wrapper_arg_2), &check_hlds__try_expand__conv1_STATE_VARIABLE_ModuleInfo_20, ((MR_Word) check_hlds__try_expand__wrapper_arg_4), &check_hlds__try_expand__conv0_STATE_VARIABLE_Specs_22);
    }
    *check_hlds__try_expand__wrapper_arg_3 = ((MR_Box) (check_hlds__try_expand__conv1_STATE_VARIABLE_ModuleInfo_20));
    *check_hlds__try_expand__wrapper_arg_5 = ((MR_Box) (check_hlds__try_expand__conv0_STATE_VARIABLE_Specs_22));
  }
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_pred_5_p_0(
  MR_Word check_hlds__try_expand__PredId_6,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_12,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Specs_0_13,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Specs_14)
{
  {
    MR_bool check_hlds__try_expand__succeeded;
    MR_Word check_hlds__try_expand__PredInfo_9;
    MR_Word check_hlds__try_expand__ProcIds_10;
    MR_Word check_hlds__try_expand__V_15_15;
    MR_Box check_hlds__try_expand__conv3_STATE_VARIABLE_ModuleInfo_12;
    MR_Box check_hlds__try_expand__conv2_STATE_VARIABLE_Specs_14;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11, check_hlds__try_expand__PredId_6, &check_hlds__try_expand__PredInfo_9);
    }
    {
      check_hlds__try_expand__ProcIds_10 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(check_hlds__try_expand__PredInfo_9);
    }
    {
      check_hlds__try_expand__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_15_15, 0) = ((MR_Box) (&check_hlds__try_expand_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_15_15, 1) = ((MR_Box) (check_hlds__try_expand__expand_try_goals_in_pred_5_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_15_15, 3) = ((MR_Box) (check_hlds__try_expand__PredId_6));
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &check_hlds__try_expand_scalar_common_1[0], check_hlds__try_expand__V_15_15, check_hlds__try_expand__ProcIds_10, ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11)), &check_hlds__try_expand__conv3_STATE_VARIABLE_ModuleInfo_12, ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_Specs_0_13)), &check_hlds__try_expand__conv2_STATE_VARIABLE_Specs_14);
    }
    *check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_12 = ((MR_Word) check_hlds__try_expand__conv3_STATE_VARIABLE_ModuleInfo_12);
    *check_hlds__try_expand__STATE_VARIABLE_Specs_14 = ((MR_Word) check_hlds__try_expand__conv2_STATE_VARIABLE_Specs_14);
  }
}

MR_bool MR_CALL 
check_hlds__try_expand__try_expand_may_introduce_calls_2_p_0(
  MR_String check_hlds__try_expand__HeadVar__1_1,
  MR_Integer check_hlds__try_expand__HeadVar__2_2)
{
  {
    MR_bool check_hlds__try_expand__succeeded;

    if ((strcmp(check_hlds__try_expand__HeadVar__1_1, (MR_String) "try") == 0))
      check_hlds__try_expand__succeeded = (check_hlds__try_expand__HeadVar__2_2 == (MR_Integer) 2);
    else
    if ((strcmp(check_hlds__try_expand__HeadVar__1_1, (MR_String) "try_io") == 0))
      check_hlds__try_expand__succeeded = (check_hlds__try_expand__HeadVar__2_2 == (MR_Integer) 4);
    else
    if ((strcmp(check_hlds__try_expand__HeadVar__1_1, (MR_String) "unreachable") == 0))
      check_hlds__try_expand__succeeded = (check_hlds__try_expand__HeadVar__2_2 == (MR_Integer) 0);
    else
      check_hlds__try_expand__succeeded = MR_FALSE;
    return check_hlds__try_expand__succeeded;
  }
}

static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_module_4_p_0_1(
  MR_Box check_hlds__try_expand__closure_arg,
  MR_Box check_hlds__try_expand__wrapper_arg_1,
  MR_Box check_hlds__try_expand__wrapper_arg_2,
  MR_Box * check_hlds__try_expand__wrapper_arg_3,
  MR_Box check_hlds__try_expand__wrapper_arg_4,
  MR_Box * check_hlds__try_expand__wrapper_arg_5)
{
  {
    MR_Box check_hlds__try_expand__closure = check_hlds__try_expand__closure_arg;
    MR_Word check_hlds__try_expand__conv2_STATE_VARIABLE_ModuleInfo_12;
    MR_Word check_hlds__try_expand__conv1_STATE_VARIABLE_Specs_14;

    {
      check_hlds__try_expand__expand_try_goals_in_pred_5_p_0(((MR_Word) check_hlds__try_expand__wrapper_arg_1), ((MR_Word) check_hlds__try_expand__wrapper_arg_2), &check_hlds__try_expand__conv2_STATE_VARIABLE_ModuleInfo_12, ((MR_Word) check_hlds__try_expand__wrapper_arg_4), &check_hlds__try_expand__conv1_STATE_VARIABLE_Specs_14);
    }
    *check_hlds__try_expand__wrapper_arg_3 = ((MR_Box) (check_hlds__try_expand__conv2_STATE_VARIABLE_ModuleInfo_12));
    *check_hlds__try_expand__wrapper_arg_5 = ((MR_Box) (check_hlds__try_expand__conv1_STATE_VARIABLE_Specs_14));
  }
}

void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_module_4_p_0(
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_13,
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Specs_0_14,
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Specs_15)
{
  {
    MR_bool check_hlds__try_expand__succeeded;
    MR_Word check_hlds__try_expand__AvailModuleMap_7;
    MR_Word check_hlds__try_expand__V_16_16;
    MR_Word check_hlds__try_expand__V_8_8;
    MR_Box check_hlds__try_expand__conv0_V_8_8;

    {
      hlds__hlds_module__module_info_get_avail_module_map_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_12, &check_hlds__try_expand__AvailModuleMap_7);
    }
    {
      check_hlds__try_expand__V_16_16 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
    {
      check_hlds__try_expand__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0, check_hlds__try_expand__AvailModuleMap_7, ((MR_Box) (check_hlds__try_expand__V_16_16)), &check_hlds__try_expand__conv0_V_8_8);
    }
    if (check_hlds__try_expand__succeeded)
      {
        check_hlds__try_expand__V_8_8 = ((MR_Word) check_hlds__try_expand__conv0_V_8_8);
        check_hlds__try_expand__succeeded = MR_TRUE;
      }
    if (check_hlds__try_expand__succeeded)
      {
        MR_Word check_hlds__try_expand__OptionsToRestore_10;
        MR_Word check_hlds__try_expand__PredIds_11;
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Globals_17_17;
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Globals_18_18;
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_19_19;
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_21_21;
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Globals_23_23;
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Globals_24_24;
        MR_Box check_hlds__try_expand__conv4_STATE_VARIABLE_ModuleInfo_21_21;
        MR_Box check_hlds__try_expand__conv3_STATE_VARIABLE_Specs_15;

        {
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_12, &check_hlds__try_expand__STATE_VARIABLE_Globals_17_17);
        }
        {
          check_hlds__det_report__disable_det_warnings_3_p_0(&check_hlds__try_expand__OptionsToRestore_10, check_hlds__try_expand__STATE_VARIABLE_Globals_17_17, &check_hlds__try_expand__STATE_VARIABLE_Globals_18_18);
        }
        {
          hlds__hlds_module__module_info_set_globals_3_p_0(check_hlds__try_expand__STATE_VARIABLE_Globals_18_18, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_12, &check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_19_19);
        }
        {
          hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_19_19, &check_hlds__try_expand__PredIds_11);
        }
        {
          mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &check_hlds__try_expand_scalar_common_1[0], (MR_Word) &check_hlds__try_expand_scalar_common_3[0], check_hlds__try_expand__PredIds_11, ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_19_19)), &check_hlds__try_expand__conv4_STATE_VARIABLE_ModuleInfo_21_21, ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_Specs_0_14)), &check_hlds__try_expand__conv3_STATE_VARIABLE_Specs_15);
        }
        check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_21_21 = ((MR_Word) check_hlds__try_expand__conv4_STATE_VARIABLE_ModuleInfo_21_21);
        *check_hlds__try_expand__STATE_VARIABLE_Specs_15 = ((MR_Word) check_hlds__try_expand__conv3_STATE_VARIABLE_Specs_15);
        {
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_21_21, &check_hlds__try_expand__STATE_VARIABLE_Globals_23_23);
        }
        {
          check_hlds__det_report__restore_det_warnings_3_p_0(check_hlds__try_expand__OptionsToRestore_10, check_hlds__try_expand__STATE_VARIABLE_Globals_23_23, &check_hlds__try_expand__STATE_VARIABLE_Globals_24_24);
        }
        {
          hlds__hlds_module__module_info_set_globals_3_p_0(check_hlds__try_expand__STATE_VARIABLE_Globals_24_24, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_21_21, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_13);
        }
      }
    else
      {
        *check_hlds__try_expand__STATE_VARIABLE_Specs_15 = check_hlds__try_expand__STATE_VARIABLE_Specs_0_14;
        *check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_13 = check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_12;
      }
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

/* :- end_module check_hlds.try_expand. */
