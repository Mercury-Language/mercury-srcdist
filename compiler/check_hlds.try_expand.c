/*
** Automatically generated from `try_expand.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
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
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 921 "try_expand.m"
struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s {
#line 921 "try_expand.m"
  MR_Word check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7;
#line 937 "try_expand.m"
  MR_bool check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded;
#line 928 "try_expand.m"
  jmp_buf check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__commit_0;
#line 928 "try_expand.m"
  MR_Word check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9;
#line 928 "try_expand.m"
  MR_Box check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__conv0_ArgInst_9;
#line 921 "try_expand.m"
};


#line 155 "check_hlds.try_expand.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__try_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 158 "check_hlds.try_expand.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__try_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 161 "check_hlds.try_expand.c"
static const MR_PseudoTypeInfo check_hlds__try_expand__check_hlds__try_expand__field_types_trys_info_0_0[4];

#line 164 "check_hlds.try_expand.c"
static const MR_ConstString check_hlds__try_expand__check_hlds__try_expand__field_names_trys_info_0_0[4];

#line 167 "check_hlds.try_expand.c"
static const MR_DuFunctorDesc check_hlds__try_expand__check_hlds__try_expand__du_functor_desc_trys_info_0_0;

#line 170 "check_hlds.try_expand.c"
static const MR_DuFunctorDescPtr check_hlds__try_expand__check_hlds__try_expand__du_stag_ordered_trys_info_0_0[1];

#line 173 "check_hlds.try_expand.c"
static const MR_DuPtagLayout check_hlds__try_expand__check_hlds__try_expand__du_ptag_ordered_trys_info_0[1];

#line 176 "check_hlds.try_expand.c"
static const MR_DuFunctorDescPtr check_hlds__try_expand__check_hlds__try_expand__du_name_ordered_trys_info_0[1];

#line 179 "check_hlds.try_expand.c"
static const MR_Integer check_hlds__try_expand__check_hlds__try_expand__functor_number_map_trys_info_0[1];

#line 182 "check_hlds.try_expand.c"
static MR_bool MR_CALL 
check_hlds__try_expand____Unify____trys_info_0_0_10001(
#line 185 "check_hlds.try_expand.c"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 187 "check_hlds.try_expand.c"
  MR_Box check_hlds__try_expand__wrapper_arg_2);

#line 190 "check_hlds.try_expand.c"
static void MR_CALL 
check_hlds__try_expand____Compare____trys_info_0_0_10001(
#line 193 "check_hlds.try_expand.c"
  MR_Box * check_hlds__try_expand__wrapper_arg_1,
#line 195 "check_hlds.try_expand.c"
  MR_Box check_hlds__try_expand__wrapper_arg_2,
#line 197 "check_hlds.try_expand.c"
  MR_Box check_hlds__try_expand__wrapper_arg_3);

#line 337 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand____Compare____trys_info_0_0(
#line 337 "try_expand.m"
  MR_Word * check_hlds__try_expand__HeadVar__1_1,
#line 337 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2,
#line 337 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__3_3);

#line 337 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand____Unify____trys_info_0_0(
#line 337 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 337 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2);

#line 928 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_1(
#line 928 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg);

#line 928 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_3(
#line 928 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg);

#line 928 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_2(
#line 928 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg);

#line 928 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_4(
#line 928 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg);

#line 921 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0(
#line 921 "try_expand.m"
  MR_Word check_hlds__try_expand__TmpTupleVar_5,
#line 921 "try_expand.m"
  MR_Word check_hlds__try_expand__TupleVar_6,
#line 921 "try_expand.m"
  MR_Word check_hlds__try_expand__TupleArgInsts_7,
#line 921 "try_expand.m"
  MR_Word * check_hlds__try_expand__CastOrUnify_8);

#line 913 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_unreachable_call_2_p_0(
#line 913 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_3,
#line 913 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_4);

#line 874 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_try_call_14_p_0(
#line 874 "try_expand.m"
  MR_String check_hlds__try_expand__PredName_15,
#line 874 "try_expand.m"
  MR_Word check_hlds__try_expand__LambdaVar_16,
#line 874 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_17,
#line 874 "try_expand.m"
  MR_Word check_hlds__try_expand__ExtraArgs_18,
#line 874 "try_expand.m"
  MR_Word check_hlds__try_expand__OutputTupleType_19,
#line 874 "try_expand.m"
  MR_Word check_hlds__try_expand__GoalPurity_20,
#line 874 "try_expand.m"
  MR_Word check_hlds__try_expand__Context_21,
#line 874 "try_expand.m"
  MR_Word * check_hlds__try_expand__OverallGoal_22,
#line 874 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_37,
#line 874 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_PredInfo_38,
#line 874 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_39,
#line 874 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_40,
#line 874 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_41,
#line 874 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_42);

#line 803 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_try_lambda_8_p_0(
#line 803 "try_expand.m"
  MR_Word check_hlds__try_expand__Body0_9,
#line 803 "try_expand.m"
  MR_Word check_hlds__try_expand__OutputVarsSet_10,
#line 803 "try_expand.m"
  MR_Word check_hlds__try_expand__OutputTupleType_11,
#line 803 "try_expand.m"
  MR_Word check_hlds__try_expand__MaybeIO_12,
#line 803 "try_expand.m"
  MR_Word * check_hlds__try_expand__LambdaVar_13,
#line 803 "try_expand.m"
  MR_Word * check_hlds__try_expand__AssignLambdaVar_14,
#line 803 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_41,
#line 803 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_42);

#line 781 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__lookup_case_goal_3_p_0(
#line 781 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 781 "try_expand.m"
  MR_Word check_hlds__try_expand__ConsId_2,
#line 781 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_3);

#line 713 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand__extract_from_succeeded_goal_5_p_0(
#line 713 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_6,
#line 713 "try_expand.m"
  MR_Word check_hlds__try_expand__SucceededGoal_7,
#line 713 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_8,
#line 713 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_9,
#line 713 "try_expand.m"
  MR_Word * check_hlds__try_expand__MaybeElse_10);

#line 673 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand__extract_intermediate_goal_parts_2_7_p_0(
#line 673 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_8,
#line 673 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_9,
#line 673 "try_expand.m"
  MR_Word check_hlds__try_expand__IntermediateGoal_10,
#line 673 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_11,
#line 673 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_12,
#line 673 "try_expand.m"
  MR_Word * check_hlds__try_expand__MaybeElse_13,
#line 673 "try_expand.m"
  MR_Word * check_hlds__try_expand__ExcpHandling_14);

#line 640 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__extract_intermediate_goal_parts_7_p_0(
#line 640 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_8,
#line 640 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_9,
#line 640 "try_expand.m"
  MR_Word check_hlds__try_expand__IntermediateGoal_10,
#line 640 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_11,
#line 640 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_12,
#line 640 "try_expand.m"
  MR_Word * check_hlds__try_expand__MaybeElse_13,
#line 640 "try_expand.m"
  MR_Word * check_hlds__try_expand__ExcpHandling_14);

#line 525 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goal_2_15_p_0(
#line 525 "try_expand.m"
  MR_Word check_hlds__try_expand__MaybeIO_16,
#line 525 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_17,
#line 525 "try_expand.m"
  MR_Word check_hlds__try_expand__Goal1_18,
#line 525 "try_expand.m"
  MR_Word check_hlds__try_expand__Then1_19,
#line 525 "try_expand.m"
  MR_Word check_hlds__try_expand__MaybeElse1_20,
#line 525 "try_expand.m"
  MR_Word check_hlds__try_expand__ExcpHandling1_21,
#line 525 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap_22,
#line 525 "try_expand.m"
  MR_Word check_hlds__try_expand__GoalOutputVarsSet_23,
#line 525 "try_expand.m"
  MR_Word * check_hlds__try_expand__FinalGoal_24,
#line 525 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_62,
#line 525 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_PredInfo_63,
#line 525 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_64,
#line 525 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_65,
#line 525 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_66,
#line 525 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_67);

#line 800 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand__expand_try_goal_5_p_0_1(
#line 800 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 800 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1);

#line 482 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goal_5_p_0(
#line 482 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap_6,
#line 482 "try_expand.m"
  MR_Word check_hlds__try_expand__TryGoal_7,
#line 482 "try_expand.m"
  MR_Word * check_hlds__try_expand__FinalGoal_8,
#line 482 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_33,
#line 482 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_34);

#line 461 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_if_then_else_9_p_0(
#line 461 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap0_10,
#line 461 "try_expand.m"
  MR_Word check_hlds__try_expand__Cond0_11,
#line 461 "try_expand.m"
  MR_Word * check_hlds__try_expand__Cond_12,
#line 461 "try_expand.m"
  MR_Word check_hlds__try_expand__Then0_13,
#line 461 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_14,
#line 461 "try_expand.m"
  MR_Word check_hlds__try_expand__Else0_15,
#line 461 "try_expand.m"
  MR_Word * check_hlds__try_expand__Else_16,
#line 461 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_22,
#line 461 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_23);

#line 451 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_cases_5_p_0(
#line 451 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 451 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2,
#line 451 "try_expand.m"
  MR_Word * check_hlds__try_expand__HeadVar__3_3,
#line 451 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_4,
#line 451 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_5);

#line 449 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_disj_5_p_0_1(
#line 449 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 449 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 449 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_2,
#line 449 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_3,
#line 449 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_4);

#line 444 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_disj_5_p_0(
#line 444 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap0_6,
#line 444 "try_expand.m"
  MR_Word check_hlds__try_expand__Goals0_7,
#line 444 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goals_8,
#line 444 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_10,
#line 444 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_11);

#line 432 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_conj_5_p_0(
#line 432 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 432 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2,
#line 432 "try_expand.m"
  MR_Word * check_hlds__try_expand__HeadVar__3_3,
#line 432 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_4,
#line 432 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_5);

#line 345 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(
#line 345 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap_6,
#line 345 "try_expand.m"
  MR_Word check_hlds__try_expand__Goal0_7,
#line 345 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_8,
#line 345 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_92,
#line 345 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_93);

#line 280 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_proc_6_p_0(
#line 280 "try_expand.m"
  MR_Word check_hlds__try_expand__PredId_7,
#line 280 "try_expand.m"
  MR_Integer check_hlds__try_expand__ProcId_8,
#line 280 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_19,
#line 280 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_20,
#line 280 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Specs_0_21,
#line 280 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Specs_22);

#line 277 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_pred_5_p_0_1(
#line 277 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 277 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 277 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_2,
#line 277 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_3,
#line 277 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_4,
#line 277 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_5);

#line 270 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_pred_5_p_0(
#line 270 "try_expand.m"
  MR_Word check_hlds__try_expand__PredId_6,
#line 270 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11,
#line 270 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_12,
#line 270 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Specs_0_13,
#line 270 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Specs_14);

#line 259 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_module_4_p_0_1(
#line 259 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 259 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 259 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_2,
#line 259 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_3,
#line 259 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_4,
#line 259 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_5);


static /* final */ const MR_Box check_hlds__try_expand_scalar_common_1[2][2];

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_2[2][8];

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_3[1][3];

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_4[1][9];

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_5[1][7];

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_6[6][1];




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



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 719 "check_hlds.try_expand.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__try_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 727 "check_hlds.try_expand.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__try_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 735 "check_hlds.try_expand.c"
static const MR_PseudoTypeInfo check_hlds__try_expand__check_hlds__try_expand__field_types_trys_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 743 "check_hlds.try_expand.c"
static const MR_ConstString check_hlds__try_expand__check_hlds__try_expand__field_names_trys_info_0_0[4] = {
  (MR_String) "ti_module_info",
  (MR_String) "ti_pred_info",
  (MR_String) "ti_proc_info",
  (MR_String) "ti_changed"
};

#line 751 "check_hlds.try_expand.c"
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
  NULL
};

#line 766 "check_hlds.try_expand.c"
static const MR_DuFunctorDescPtr check_hlds__try_expand__check_hlds__try_expand__du_stag_ordered_trys_info_0_0[1] = {
  &check_hlds__try_expand__check_hlds__try_expand__du_functor_desc_trys_info_0_0
};

#line 771 "check_hlds.try_expand.c"
static const MR_DuPtagLayout check_hlds__try_expand__check_hlds__try_expand__du_ptag_ordered_trys_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__try_expand__check_hlds__try_expand__du_stag_ordered_trys_info_0_0
  }
};

#line 780 "check_hlds.try_expand.c"
static const MR_DuFunctorDescPtr check_hlds__try_expand__check_hlds__try_expand__du_name_ordered_trys_info_0[1] = {
  &check_hlds__try_expand__check_hlds__try_expand__du_functor_desc_trys_info_0_0
};

#line 785 "check_hlds.try_expand.c"
static const MR_Integer check_hlds__try_expand__check_hlds__try_expand__functor_number_map_trys_info_0[1] = {
  (MR_Integer) 0
};

#line 790 "check_hlds.try_expand.c"
const MR_TypeCtorInfo_Struct check_hlds__try_expand__check_hlds__try_expand__type_ctor_info_trys_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__try_expand____Unify____trys_info_0_0_10001)),
  ((MR_Box) (check_hlds__try_expand____Compare____trys_info_0_0_10001)),
  (MR_String) "check_hlds.try_expand",
  (MR_String) "trys_info",
  {
    check_hlds__try_expand__check_hlds__try_expand__du_name_ordered_trys_info_0
  },
  {
    check_hlds__try_expand__check_hlds__try_expand__du_ptag_ordered_trys_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__try_expand__check_hlds__try_expand__functor_number_map_trys_info_0
};

#line 811 "check_hlds.try_expand.c"
static MR_bool MR_CALL 
check_hlds__try_expand____Unify____trys_info_0_0_10001(
#line 814 "check_hlds.try_expand.c"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 816 "check_hlds.try_expand.c"
  MR_Box check_hlds__try_expand__wrapper_arg_2)
#line 818 "check_hlds.try_expand.c"
{
#line 820 "check_hlds.try_expand.c"
  {
#line 822 "check_hlds.try_expand.c"
    MR_bool check_hlds__try_expand__succeeded;

#line 825 "check_hlds.try_expand.c"
    {
#line 827 "check_hlds.try_expand.c"
      check_hlds__try_expand__succeeded = check_hlds__try_expand____Unify____trys_info_0_0(((MR_Word) check_hlds__try_expand__wrapper_arg_1), ((MR_Word) check_hlds__try_expand__wrapper_arg_2));
    }
#line 830 "check_hlds.try_expand.c"
    return check_hlds__try_expand__succeeded;
#line 832 "check_hlds.try_expand.c"
  }
#line 834 "check_hlds.try_expand.c"
}

#line 837 "check_hlds.try_expand.c"
static void MR_CALL 
check_hlds__try_expand____Compare____trys_info_0_0_10001(
#line 840 "check_hlds.try_expand.c"
  MR_Box * check_hlds__try_expand__wrapper_arg_1,
#line 842 "check_hlds.try_expand.c"
  MR_Box check_hlds__try_expand__wrapper_arg_2,
#line 844 "check_hlds.try_expand.c"
  MR_Box check_hlds__try_expand__wrapper_arg_3)
#line 846 "check_hlds.try_expand.c"
{
#line 848 "check_hlds.try_expand.c"
  {
#line 850 "check_hlds.try_expand.c"
    MR_Word check_hlds__try_expand__conv0_HeadVar__1_1;

#line 853 "check_hlds.try_expand.c"
    {
#line 855 "check_hlds.try_expand.c"
      check_hlds__try_expand____Compare____trys_info_0_0(&check_hlds__try_expand__conv0_HeadVar__1_1, ((MR_Word) check_hlds__try_expand__wrapper_arg_2), ((MR_Word) check_hlds__try_expand__wrapper_arg_3));
    }
#line 858 "check_hlds.try_expand.c"
    *check_hlds__try_expand__wrapper_arg_1 = ((MR_Box) (check_hlds__try_expand__conv0_HeadVar__1_1));
#line 860 "check_hlds.try_expand.c"
  }
#line 862 "check_hlds.try_expand.c"
}

#line 337 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand____Compare____trys_info_0_0(
#line 337 "try_expand.m"
  MR_Word * check_hlds__try_expand__HeadVar__1_1,
#line 337 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2,
#line 337 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__3_3)
#line 337 "try_expand.m"
{
#line 337 "try_expand.m"
  {
#line 337 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 337 "try_expand.m"
    MR_Integer check_hlds__try_expand__CastX_15 = (MR_Integer) check_hlds__try_expand__HeadVar__2_2;
#line 337 "try_expand.m"
    MR_Integer check_hlds__try_expand__CastY_16 = (MR_Integer) check_hlds__try_expand__HeadVar__3_3;

#line 337 "try_expand.m"
    check_hlds__try_expand__succeeded = (check_hlds__try_expand__CastX_15 == check_hlds__try_expand__CastY_16);
#line 337 "try_expand.m"
    if (check_hlds__try_expand__succeeded)
#line 889 "check_hlds.try_expand.c"
      *check_hlds__try_expand__HeadVar__1_1 = (MR_Integer) 0;
#line 337 "try_expand.m"
    else
#line 337 "try_expand.m"
      {
#line 337 "try_expand.m"
        MR_Word check_hlds__try_expand__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 337 "try_expand.m"
        MR_Word check_hlds__try_expand__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 337 "try_expand.m"
        MR_Word check_hlds__try_expand__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 2)));
#line 337 "try_expand.m"
        MR_Word check_hlds__try_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 3)));
#line 337 "try_expand.m"
        MR_Word check_hlds__try_expand__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__3_3, (MR_Integer) 0)));
#line 337 "try_expand.m"
        MR_Word check_hlds__try_expand__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__3_3, (MR_Integer) 1)));
#line 337 "try_expand.m"
        MR_Word check_hlds__try_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__3_3, (MR_Integer) 2)));
#line 337 "try_expand.m"
        MR_Word check_hlds__try_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__3_3, (MR_Integer) 3)));
#line 337 "try_expand.m"
        MR_Word check_hlds__try_expand__V_12_12;

#line 337 "try_expand.m"
        {
#line 337 "try_expand.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__try_expand__V_12_12, check_hlds__try_expand__V_4_4, check_hlds__try_expand__V_8_8);
        }
#line 919 "check_hlds.try_expand.c"
        check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_12_12 == (MR_Integer) 0);
#line 337 "try_expand.m"
        check_hlds__try_expand__succeeded = !(check_hlds__try_expand__succeeded);
#line 337 "try_expand.m"
        if (check_hlds__try_expand__succeeded)
#line 337 "try_expand.m"
          *check_hlds__try_expand__HeadVar__1_1 = check_hlds__try_expand__V_12_12;
#line 337 "try_expand.m"
        else
#line 337 "try_expand.m"
          {
#line 337 "try_expand.m"
            MR_Word check_hlds__try_expand__V_13_13;

#line 337 "try_expand.m"
            {
#line 337 "try_expand.m"
              hlds__hlds_pred____Compare____pred_info_0_0(&check_hlds__try_expand__V_13_13, check_hlds__try_expand__V_5_5, check_hlds__try_expand__V_9_9);
            }
#line 939 "check_hlds.try_expand.c"
            check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_13_13 == (MR_Integer) 0);
#line 337 "try_expand.m"
            check_hlds__try_expand__succeeded = !(check_hlds__try_expand__succeeded);
#line 337 "try_expand.m"
            if (check_hlds__try_expand__succeeded)
#line 337 "try_expand.m"
              *check_hlds__try_expand__HeadVar__1_1 = check_hlds__try_expand__V_13_13;
#line 337 "try_expand.m"
            else
#line 337 "try_expand.m"
              {
#line 337 "try_expand.m"
                MR_Word check_hlds__try_expand__V_14_14;

#line 337 "try_expand.m"
                {
#line 337 "try_expand.m"
                  hlds__hlds_pred____Compare____proc_info_0_0(&check_hlds__try_expand__V_14_14, check_hlds__try_expand__V_6_6, check_hlds__try_expand__V_10_10);
                }
#line 959 "check_hlds.try_expand.c"
                check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_14_14 == (MR_Integer) 0);
#line 337 "try_expand.m"
                check_hlds__try_expand__succeeded = !(check_hlds__try_expand__succeeded);
#line 337 "try_expand.m"
                if (check_hlds__try_expand__succeeded)
#line 337 "try_expand.m"
                  *check_hlds__try_expand__HeadVar__1_1 = check_hlds__try_expand__V_14_14;
#line 337 "try_expand.m"
                else
#line 337 "try_expand.m"
                  {
#line 337 "try_expand.m"
                    MR_Integer check_hlds__try_expand__V_21_21 = (MR_Integer) check_hlds__try_expand__V_7_7;
#line 337 "try_expand.m"
                    MR_Integer check_hlds__try_expand__V_22_22 = (MR_Integer) check_hlds__try_expand__V_11_11;

#line 337 "try_expand.m"
                    {
#line 337 "try_expand.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__try_expand__HeadVar__1_1, check_hlds__try_expand__V_21_21, check_hlds__try_expand__V_22_22);
#line 337 "try_expand.m"
                      return;
                    }
#line 337 "try_expand.m"
                  }
#line 337 "try_expand.m"
              }
#line 337 "try_expand.m"
          }
#line 337 "try_expand.m"
      }
#line 337 "try_expand.m"
  }
#line 337 "try_expand.m"
}

#line 337 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand____Unify____trys_info_0_0(
#line 337 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 337 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2)
#line 337 "try_expand.m"
{
#line 337 "try_expand.m"
  {
#line 337 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 337 "try_expand.m"
    MR_Integer check_hlds__try_expand__CastX_11 = (MR_Integer) check_hlds__try_expand__HeadVar__1_1;
#line 337 "try_expand.m"
    MR_Integer check_hlds__try_expand__CastY_12 = (MR_Integer) check_hlds__try_expand__HeadVar__2_2;

#line 337 "try_expand.m"
    check_hlds__try_expand__succeeded = (check_hlds__try_expand__CastX_11 == check_hlds__try_expand__CastY_12);
#line 337 "try_expand.m"
    if (check_hlds__try_expand__succeeded)
#line 337 "try_expand.m"
      check_hlds__try_expand__succeeded = MR_TRUE;
#line 337 "try_expand.m"
    else
#line 337 "try_expand.m"
      {
#line 337 "try_expand.m"
        MR_Word check_hlds__try_expand__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 0)));
#line 337 "try_expand.m"
        MR_Word check_hlds__try_expand__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 1)));
#line 337 "try_expand.m"
        MR_Word check_hlds__try_expand__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 2)));
#line 337 "try_expand.m"
        MR_Word check_hlds__try_expand__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 3)));
#line 337 "try_expand.m"
        MR_Word check_hlds__try_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 337 "try_expand.m"
        MR_Word check_hlds__try_expand__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 337 "try_expand.m"
        MR_Word check_hlds__try_expand__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 2)));
#line 337 "try_expand.m"
        MR_Word check_hlds__try_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 3)));

#line 1041 "check_hlds.try_expand.c"
        {
#line 1043 "check_hlds.try_expand.c"
          check_hlds__try_expand__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__try_expand__V_3_3, check_hlds__try_expand__V_7_7);
        }
#line 337 "try_expand.m"
        if (check_hlds__try_expand__succeeded)
#line 337 "try_expand.m"
          {
#line 1050 "check_hlds.try_expand.c"
            {
#line 1052 "check_hlds.try_expand.c"
              check_hlds__try_expand__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(check_hlds__try_expand__V_4_4, check_hlds__try_expand__V_8_8);
            }
#line 337 "try_expand.m"
            if (check_hlds__try_expand__succeeded)
#line 337 "try_expand.m"
              {
#line 1059 "check_hlds.try_expand.c"
                {
#line 1061 "check_hlds.try_expand.c"
                  check_hlds__try_expand__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(check_hlds__try_expand__V_5_5, check_hlds__try_expand__V_9_9);
                }
#line 337 "try_expand.m"
                if (check_hlds__try_expand__succeeded)
#line 1066 "check_hlds.try_expand.c"
                  check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_6_6 == check_hlds__try_expand__V_10_10);
#line 337 "try_expand.m"
              }
#line 337 "try_expand.m"
          }
#line 337 "try_expand.m"
      }
#line 337 "try_expand.m"
    return check_hlds__try_expand__succeeded;
#line 337 "try_expand.m"
  }
#line 337 "try_expand.m"
}

#line 928 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_1(
#line 928 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg)
#line 928 "try_expand.m"
{
#line 928 "try_expand.m"
  {
#line 928 "try_expand.m"
    struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s * check_hlds__try_expand__env_ptr = (struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s *) check_hlds__try_expand__env_ptr_arg;

#line 928 "try_expand.m"
    MR_builtin_longjmp((check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__commit_0, 1);
#line 928 "try_expand.m"
  }
#line 928 "try_expand.m"
}

#line 928 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_3(
#line 928 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg)
#line 928 "try_expand.m"
{
#line 928 "try_expand.m"
  {
#line 928 "try_expand.m"
    struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s * check_hlds__try_expand__env_ptr = (struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s *) check_hlds__try_expand__env_ptr_arg;

#line 928 "try_expand.m"
    (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9 = ((MR_Word) (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__conv0_ArgInst_9);
#line 928 "try_expand.m"
    {
#line 928 "try_expand.m"
      check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_2(check_hlds__try_expand__env_ptr);
#line 928 "try_expand.m"
      return;
    }
#line 928 "try_expand.m"
  }
#line 928 "try_expand.m"
}

#line 928 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_2(
#line 928 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg)
#line 928 "try_expand.m"
{
#line 928 "try_expand.m"
  {
#line 928 "try_expand.m"
    struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s * check_hlds__try_expand__env_ptr = (struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s *) check_hlds__try_expand__env_ptr_arg;

#line 928 "try_expand.m"
    {
#line 929 "try_expand.m"
      MR_Word check_hlds__try_expand__V_13_13;
#line 929 "try_expand.m"
      MR_Word check_hlds__try_expand__V_10_10;

#line 929 "try_expand.m"
      (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 929 "try_expand.m"
      if ((check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded)
#line 929 "try_expand.m"
        {
#line 929 "try_expand.m"
          {
#line 929 "try_expand.m"
            check_hlds__try_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9, (MR_Integer) 1)));
#line 929 "try_expand.m"
            check_hlds__try_expand__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9, (MR_Integer) 2)));
#line 929 "try_expand.m"
          }
#line 929 "try_expand.m"
          (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = (check_hlds__try_expand__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 929 "try_expand.m"
        }
#line 929 "try_expand.m"
      (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = !((check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded);
#line 929 "try_expand.m"
      if ((check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded)
#line 929 "try_expand.m"
        {
#line 929 "try_expand.m"
          check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_1(check_hlds__try_expand__env_ptr);
#line 929 "try_expand.m"
          return;
        }
#line 928 "try_expand.m"
    }
#line 928 "try_expand.m"
  }
#line 928 "try_expand.m"
}

#line 928 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_4(
#line 928 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg)
#line 928 "try_expand.m"
{
#line 928 "try_expand.m"
  {
#line 928 "try_expand.m"
    struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s * check_hlds__try_expand__env_ptr = (struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s *) check_hlds__try_expand__env_ptr_arg;

#line 928 "try_expand.m"
    if (MR_builtin_setjmp((check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__commit_0) == 0)
#line 928 "try_expand.m"
      {
#line 928 "try_expand.m"
        {
#line 928 "try_expand.m"
          {
#line 928 "try_expand.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__conv0_ArgInst_9, (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7, check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_3, check_hlds__try_expand__env_ptr);
          }
#line 928 "try_expand.m"
        }
#line 928 "try_expand.m"
        (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = MR_FALSE;
#line 928 "try_expand.m"
      }
#line 928 "try_expand.m"
    else
#line 928 "try_expand.m"
      (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = MR_TRUE;
#line 928 "try_expand.m"
  }
#line 928 "try_expand.m"
}

#line 921 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0(
#line 921 "try_expand.m"
  MR_Word check_hlds__try_expand__TmpTupleVar_5,
#line 921 "try_expand.m"
  MR_Word check_hlds__try_expand__TupleVar_6,
#line 921 "try_expand.m"
  MR_Word check_hlds__try_expand__TupleArgInsts_7,
#line 921 "try_expand.m"
  MR_Word * check_hlds__try_expand__CastOrUnify_8)
#line 921 "try_expand.m"
{
#line 921 "try_expand.m"
  {
#line 921 "try_expand.m"
    struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s check_hlds__try_expand__env;

#line 921 "try_expand.m"
    (check_hlds__try_expand__env).check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7 = check_hlds__try_expand__TupleArgInsts_7;
#line 928 "try_expand.m"
    {
#line 928 "try_expand.m"
      check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_4(&check_hlds__try_expand__env);
    }
#line 937 "try_expand.m"
    if ((check_hlds__try_expand__env).check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded)
#line 931 "try_expand.m"
      {
#line 931 "try_expand.m"
        MR_Integer check_hlds__try_expand__TupleArity_11;
#line 931 "try_expand.m"
        MR_Word check_hlds__try_expand__TupleInst_12;
#line 931 "try_expand.m"
        MR_Word check_hlds__try_expand__V_16_16;
#line 931 "try_expand.m"
        MR_Word check_hlds__try_expand__V_17_17;
#line 931 "try_expand.m"
        MR_Word check_hlds__try_expand__V_18_18;
#line 931 "try_expand.m"
        MR_Word check_hlds__try_expand__V_21_21;
#line 931 "try_expand.m"
        MR_Word check_hlds__try_expand__V_22_22;

#line 931 "try_expand.m"
        {
#line 931 "try_expand.m"
          check_hlds__try_expand__TupleArity_11 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (check_hlds__try_expand__env).check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7);
        }
#line 933 "try_expand.m"
        {
#line 933 "try_expand.m"
          check_hlds__try_expand__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 933 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 933 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_18_18, 1) = ((MR_Box) (check_hlds__try_expand__TupleArity_11));
#line 933 "try_expand.m"
        }
#line 933 "try_expand.m"
        {
#line 933 "try_expand.m"
          check_hlds__try_expand__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 933 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_17_17, 0) = ((MR_Box) (check_hlds__try_expand__V_18_18));
#line 933 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_17_17, 1) = ((MR_Box) ((check_hlds__try_expand__env).check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7));
#line 933 "try_expand.m"
        }
#line 934 "try_expand.m"
        {
#line 934 "try_expand.m"
          check_hlds__try_expand__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 934 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_16_16, 0) = ((MR_Box) (check_hlds__try_expand__V_17_17));
#line 934 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 934 "try_expand.m"
        }
#line 932 "try_expand.m"
        {
#line 932 "try_expand.m"
          check_hlds__try_expand__TupleInst_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 932 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__TupleInst_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 932 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__TupleInst_12, 1) = ((MR_Box) ((MR_Integer) 0));
#line 932 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__TupleInst_12, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 932 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__TupleInst_12, 3) = ((MR_Box) (check_hlds__try_expand__V_16_16));
#line 932 "try_expand.m"
        }
#line 936 "try_expand.m"
        {
#line 936 "try_expand.m"
          check_hlds__try_expand__V_21_21 = parse_tree__prog_mode__ground_inst_0_f_0();
        }
#line 936 "try_expand.m"
        {
#line 936 "try_expand.m"
          check_hlds__try_expand__V_22_22 = mercury__term__context_init_0_f_0();
        }
#line 935 "try_expand.m"
        {
#line 935 "try_expand.m"
          hlds__goal_util__generate_cast_with_insts_7_p_0((MR_Integer) 1, check_hlds__try_expand__TmpTupleVar_5, check_hlds__try_expand__TupleVar_6, check_hlds__try_expand__V_21_21, check_hlds__try_expand__TupleInst_12, check_hlds__try_expand__V_22_22, check_hlds__try_expand__CastOrUnify_8);
#line 935 "try_expand.m"
          return;
        }
#line 931 "try_expand.m"
      }
#line 937 "try_expand.m"
    else
#line 938 "try_expand.m"
      {
#line 938 "try_expand.m"
        MR_Word check_hlds__try_expand__V_23_23;
#line 938 "try_expand.m"
        MR_Word check_hlds__try_expand__V_24_24;

#line 939 "try_expand.m"
        {
#line 939 "try_expand.m"
          check_hlds__try_expand__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 939 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_23_23, 0) = ((MR_Box) (check_hlds__try_expand__TmpTupleVar_5));
#line 939 "try_expand.m"
        }
#line 939 "try_expand.m"
        {
#line 939 "try_expand.m"
          check_hlds__try_expand__V_24_24 = mercury__term__context_init_0_f_0();
        }
#line 938 "try_expand.m"
        {
#line 938 "try_expand.m"
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__try_expand__TupleVar_6, check_hlds__try_expand__V_23_23, check_hlds__try_expand__V_24_24, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__try_expand_scalar_common_6[1]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__CastOrUnify_8);
#line 938 "try_expand.m"
          return;
        }
#line 938 "try_expand.m"
      }
#line 921 "try_expand.m"
  }
#line 921 "try_expand.m"
}

#line 913 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_unreachable_call_2_p_0(
#line 913 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_3,
#line 913 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_4)
#line 913 "try_expand.m"
{
#line 915 "try_expand.m"
  {
#line 915 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 915 "try_expand.m"
    MR_Word check_hlds__try_expand__V_5_5;
#line 915 "try_expand.m"
    MR_Word check_hlds__try_expand__V_13_13;
#line 915 "try_expand.m"
    MR_Word check_hlds__try_expand__V_14_14;

#line 916 "try_expand.m"
    {
#line 916 "try_expand.m"
      check_hlds__try_expand__V_5_5 = mdbcomp__prim_data__mercury_exception_module_0_f_0();
    }
#line 918 "try_expand.m"
    {
#line 918 "try_expand.m"
      check_hlds__try_expand__V_13_13 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 918 "try_expand.m"
    {
#line 918 "try_expand.m"
      check_hlds__try_expand__V_14_14 = mercury__term__context_init_0_f_0();
    }
#line 916 "try_expand.m"
    {
#line 916 "try_expand.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__try_expand__V_5_5, (MR_String) "unreachable", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__V_13_13, check_hlds__try_expand__ModuleInfo_3, check_hlds__try_expand__V_14_14, check_hlds__try_expand__Goal_4);
#line 916 "try_expand.m"
      return;
    }
#line 915 "try_expand.m"
  }
#line 913 "try_expand.m"
}

#line 874 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_try_call_14_p_0(
#line 874 "try_expand.m"
  MR_String check_hlds__try_expand__PredName_15,
#line 874 "try_expand.m"
  MR_Word check_hlds__try_expand__LambdaVar_16,
#line 874 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_17,
#line 874 "try_expand.m"
  MR_Word check_hlds__try_expand__ExtraArgs_18,
#line 874 "try_expand.m"
  MR_Word check_hlds__try_expand__OutputTupleType_19,
#line 874 "try_expand.m"
  MR_Word check_hlds__try_expand__GoalPurity_20,
#line 874 "try_expand.m"
  MR_Word check_hlds__try_expand__Context_21,
#line 874 "try_expand.m"
  MR_Word * check_hlds__try_expand__OverallGoal_22,
#line 874 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_37,
#line 874 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_PredInfo_38,
#line 874 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_39,
#line 874 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_40,
#line 874 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_41,
#line 874 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_42)
#line 874 "try_expand.m"
{
#line 881 "try_expand.m"
  {
#line 881 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 881 "try_expand.m"
    MR_Word check_hlds__try_expand__PolyInfo0_26;
#line 881 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeInfoVar_27;
#line 881 "try_expand.m"
    MR_Word check_hlds__try_expand__MakeTypeInfoGoals_28;
#line 881 "try_expand.m"
    MR_Word check_hlds__try_expand__PolyInfo_29;
#line 881 "try_expand.m"
    MR_Word check_hlds__try_expand__Args_31;
#line 881 "try_expand.m"
    MR_Word check_hlds__try_expand__CallGoal0_33;
#line 881 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalInfo_34;
#line 881 "try_expand.m"
    MR_Word check_hlds__try_expand__CallGoal_35;
#line 881 "try_expand.m"
    MR_Word check_hlds__try_expand__V_47_47;
#line 881 "try_expand.m"
    MR_Word check_hlds__try_expand__V_48_48;
#line 881 "try_expand.m"
    MR_Word check_hlds__try_expand__V_49_49;
#line 881 "try_expand.m"
    MR_Word check_hlds__try_expand__V_51_51;
#line 881 "try_expand.m"
    MR_Word check_hlds__try_expand__V_55_55;
#line 881 "try_expand.m"
    MR_Word check_hlds__try_expand__V_57_57;
#line 881 "try_expand.m"
    MR_Word check_hlds__try_expand__V_58_58;

#line 882 "try_expand.m"
    {
#line 882 "try_expand.m"
      check_hlds__polymorphism__create_poly_info_4_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_41, check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_37, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_39, &check_hlds__try_expand__PolyInfo0_26);
    }
#line 883 "try_expand.m"
    {
#line 883 "try_expand.m"
      check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(check_hlds__try_expand__OutputTupleType_19, check_hlds__try_expand__Context_21, &check_hlds__try_expand__TypeInfoVar_27, &check_hlds__try_expand__MakeTypeInfoGoals_28, check_hlds__try_expand__PolyInfo0_26, &check_hlds__try_expand__PolyInfo_29);
    }
#line 885 "try_expand.m"
    {
#line 885 "try_expand.m"
      check_hlds__polymorphism__poly_info_extract_6_p_0(check_hlds__try_expand__PolyInfo_29, check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_37, check_hlds__try_expand__STATE_VARIABLE_PredInfo_38, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_39, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_40, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_42);
    }
#line 889 "try_expand.m"
    {
#line 889 "try_expand.m"
      check_hlds__try_expand__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 889 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_49_49, 0) = ((MR_Box) (check_hlds__try_expand__ResultVar_17));
#line 889 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 889 "try_expand.m"
    }
#line 889 "try_expand.m"
    {
#line 889 "try_expand.m"
      check_hlds__try_expand__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 889 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_48_48, 0) = ((MR_Box) (check_hlds__try_expand__LambdaVar_16));
#line 889 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_48_48, 1) = ((MR_Box) (check_hlds__try_expand__V_49_49));
#line 889 "try_expand.m"
    }
#line 889 "try_expand.m"
    {
#line 889 "try_expand.m"
      check_hlds__try_expand__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 889 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_47_47, 0) = ((MR_Box) (check_hlds__try_expand__TypeInfoVar_27));
#line 889 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_47_47, 1) = ((MR_Box) (check_hlds__try_expand__V_48_48));
#line 889 "try_expand.m"
    }
#line 889 "try_expand.m"
    {
#line 889 "try_expand.m"
      check_hlds__try_expand__Args_31 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__try_expand_scalar_common_1[1], check_hlds__try_expand__V_47_47, check_hlds__try_expand__ExtraArgs_18);
    }
#line 891 "try_expand.m"
    {
#line 891 "try_expand.m"
      check_hlds__try_expand__V_51_51 = mdbcomp__prim_data__mercury_exception_module_0_f_0();
    }
#line 893 "try_expand.m"
    {
#line 893 "try_expand.m"
      check_hlds__try_expand__V_55_55 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 891 "try_expand.m"
    {
#line 891 "try_expand.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__try_expand__V_51_51, check_hlds__try_expand__PredName_15, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[5]), (MR_Integer) 4, (MR_Integer) 0, check_hlds__try_expand__Args_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__V_55_55, *check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_42, check_hlds__try_expand__Context_21, &check_hlds__try_expand__CallGoal0_33);
    }
#line 895 "try_expand.m"
    {
#line 895 "try_expand.m"
      hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__try_expand__Context_21, &check_hlds__try_expand__GoalInfo_34);
    }
#line 903 "try_expand.m"
    if ((check_hlds__try_expand__GoalPurity_20 == (MR_Integer) 0))
#line 902 "try_expand.m"
      check_hlds__try_expand__CallGoal_35 = check_hlds__try_expand__CallGoal0_33;
#line 903 "try_expand.m"
    else
#line 906 "try_expand.m"
      {
#line 906 "try_expand.m"
        MR_Word check_hlds__try_expand__ScopeReason_36;
#line 906 "try_expand.m"
        MR_Word check_hlds__try_expand__V_56_56;

#line 907 "try_expand.m"
        {
#line 907 "try_expand.m"
          check_hlds__try_expand__ScopeReason_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 907 "try_expand.m"
          MR_hl_field(MR_mktag(2), check_hlds__try_expand__ScopeReason_36, 0) = ((MR_Box) (check_hlds__try_expand__GoalPurity_20));
#line 907 "try_expand.m"
        }
#line 908 "try_expand.m"
        {
#line 908 "try_expand.m"
          check_hlds__try_expand__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 908 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 908 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_56_56, 1) = ((MR_Box) (check_hlds__try_expand__ScopeReason_36));
#line 908 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_56_56, 2) = ((MR_Box) (check_hlds__try_expand__CallGoal0_33));
#line 908 "try_expand.m"
        }
#line 908 "try_expand.m"
        {
#line 908 "try_expand.m"
          check_hlds__try_expand__CallGoal_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 908 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__CallGoal_35, 0) = ((MR_Box) (check_hlds__try_expand__V_56_56));
#line 908 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__CallGoal_35, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo_34));
#line 908 "try_expand.m"
        }
#line 906 "try_expand.m"
      }
#line 911 "try_expand.m"
    {
#line 911 "try_expand.m"
      check_hlds__try_expand__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_58_58, 0) = ((MR_Box) (check_hlds__try_expand__CallGoal_35));
#line 911 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 911 "try_expand.m"
    }
#line 911 "try_expand.m"
    {
#line 911 "try_expand.m"
      check_hlds__try_expand__V_57_57 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__try_expand__MakeTypeInfoGoals_28, check_hlds__try_expand__V_58_58);
    }
#line 911 "try_expand.m"
    {
#line 911 "try_expand.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__try_expand__V_57_57, check_hlds__try_expand__GoalInfo_34, check_hlds__try_expand__OverallGoal_22);
#line 911 "try_expand.m"
      return;
    }
#line 881 "try_expand.m"
  }
#line 874 "try_expand.m"
}

#line 803 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_try_lambda_8_p_0(
#line 803 "try_expand.m"
  MR_Word check_hlds__try_expand__Body0_9,
#line 803 "try_expand.m"
  MR_Word check_hlds__try_expand__OutputVarsSet_10,
#line 803 "try_expand.m"
  MR_Word check_hlds__try_expand__OutputTupleType_11,
#line 803 "try_expand.m"
  MR_Word check_hlds__try_expand__MaybeIO_12,
#line 803 "try_expand.m"
  MR_Word * check_hlds__try_expand__LambdaVar_13,
#line 803 "try_expand.m"
  MR_Word * check_hlds__try_expand__AssignLambdaVar_14,
#line 803 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_41,
#line 803 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_42)
#line 803 "try_expand.m"
{
#line 808 "try_expand.m"
  {
#line 808 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeCtorInfo_87_87;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeInfo_88_88;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__BodyInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Body0_9, (MR_Integer) 1)));
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__NonLocals0_18;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__NonLocals1_19;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__OutputTupleVar_20;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaParams_23;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaParamTypes_24;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaParamModes_25;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__NonLocals_26;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaType_27;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__MakeOutputTuple_28;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaBody0_29;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__VarSet0_30;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__VarTypes0_31;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__VarSet_32;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__VarTypes_33;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__Renaming_34;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaBody_35;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__BodyGoalInfo_37;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__BodyDetism_38;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaDetism_39;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__RHS_40;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_69_69;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__V_71_71;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__V_72_72;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__V_75_75;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_76_76;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__V_82_82;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__V_83_83;
#line 809 "try_expand.m"
    MR_Word check_hlds__try_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Body0_9, (MR_Integer) 0)));
#line 849 "try_expand.m"
    MR_Word check_hlds__try_expand__V_36_36;

#line 810 "try_expand.m"
    {
#line 810 "try_expand.m"
      check_hlds__try_expand__NonLocals0_18 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__try_expand__BodyInfo0_17);
    }
#line 1721 "check_hlds.try_expand.c"
    check_hlds__try_expand__TypeCtorInfo_87_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 811 "try_expand.m"
    {
#line 811 "try_expand.m"
      parse_tree__set_of_var__difference_3_p_0(check_hlds__try_expand__TypeCtorInfo_87_87, check_hlds__try_expand__NonLocals0_18, check_hlds__try_expand__OutputVarsSet_10, &check_hlds__try_expand__NonLocals1_19);
    }
#line 813 "try_expand.m"
    {
#line 813 "try_expand.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(check_hlds__try_expand__OutputTupleType_11, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[3]), &check_hlds__try_expand__OutputTupleVar_20, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_41, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44);
    }
#line 821 "try_expand.m"
    if ((check_hlds__try_expand__MaybeIO_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 822 "try_expand.m"
      {
#line 822 "try_expand.m"
        MR_Word check_hlds__try_expand__V_48_48;

#line 823 "try_expand.m"
        {
#line 823 "try_expand.m"
          check_hlds__try_expand__LambdaParams_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 823 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParams_23, 0) = ((MR_Box) (check_hlds__try_expand__OutputTupleVar_20));
#line 823 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParams_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 823 "try_expand.m"
        }
#line 824 "try_expand.m"
        {
#line 824 "try_expand.m"
          check_hlds__try_expand__LambdaParamTypes_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 824 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamTypes_24, 0) = ((MR_Box) (check_hlds__try_expand__OutputTupleType_11));
#line 824 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamTypes_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 824 "try_expand.m"
        }
#line 825 "try_expand.m"
        {
#line 825 "try_expand.m"
          check_hlds__try_expand__V_48_48 = parse_tree__prog_mode__out_mode_0_f_0();
        }
#line 825 "try_expand.m"
        {
#line 825 "try_expand.m"
          check_hlds__try_expand__LambdaParamModes_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamModes_25, 0) = ((MR_Box) (check_hlds__try_expand__V_48_48));
#line 825 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamModes_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 825 "try_expand.m"
        }
#line 826 "try_expand.m"
        check_hlds__try_expand__NonLocals_26 = check_hlds__try_expand__NonLocals0_18;
#line 822 "try_expand.m"
      }
#line 821 "try_expand.m"
    else
#line 816 "try_expand.m"
      {
#line 816 "try_expand.m"
        MR_Word check_hlds__try_expand__IOVarInitial_21;
#line 816 "try_expand.m"
        MR_Word check_hlds__try_expand__IOVarFinal_22;
#line 816 "try_expand.m"
        MR_Word check_hlds__try_expand__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeIO_12, (MR_Integer) 0)));
#line 816 "try_expand.m"
        MR_Word check_hlds__try_expand__V_51_51;
#line 816 "try_expand.m"
        MR_Word check_hlds__try_expand__V_52_52;
#line 816 "try_expand.m"
        MR_Word check_hlds__try_expand__V_54_54;
#line 816 "try_expand.m"
        MR_Word check_hlds__try_expand__V_55_55;
#line 816 "try_expand.m"
        MR_Word check_hlds__try_expand__V_56_56;
#line 816 "try_expand.m"
        MR_Word check_hlds__try_expand__V_57_57;
#line 816 "try_expand.m"
        MR_Word check_hlds__try_expand__V_59_59;
#line 816 "try_expand.m"
        MR_Word check_hlds__try_expand__V_60_60;
#line 816 "try_expand.m"
        MR_Word check_hlds__try_expand__V_61_61;
#line 816 "try_expand.m"
        MR_Word check_hlds__try_expand__V_62_62;
#line 816 "try_expand.m"
        MR_Word check_hlds__try_expand__V_63_63;

#line 816 "try_expand.m"
        check_hlds__try_expand__IOVarInitial_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_50_50, (MR_Integer) 0)));
#line 816 "try_expand.m"
        check_hlds__try_expand__IOVarFinal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_50_50, (MR_Integer) 1)));
#line 817 "try_expand.m"
        {
#line 817 "try_expand.m"
          check_hlds__try_expand__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, 0) = ((MR_Box) (check_hlds__try_expand__IOVarFinal_22));
#line 817 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 817 "try_expand.m"
        }
#line 817 "try_expand.m"
        {
#line 817 "try_expand.m"
          check_hlds__try_expand__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, 0) = ((MR_Box) (check_hlds__try_expand__IOVarInitial_21));
#line 817 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, 1) = ((MR_Box) (check_hlds__try_expand__V_52_52));
#line 817 "try_expand.m"
        }
#line 817 "try_expand.m"
        {
#line 817 "try_expand.m"
          check_hlds__try_expand__LambdaParams_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParams_23, 0) = ((MR_Box) (check_hlds__try_expand__OutputTupleVar_20));
#line 817 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParams_23, 1) = ((MR_Box) (check_hlds__try_expand__V_51_51));
#line 817 "try_expand.m"
        }
#line 818 "try_expand.m"
        {
#line 818 "try_expand.m"
          check_hlds__try_expand__V_55_55 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
        }
#line 818 "try_expand.m"
        {
#line 818 "try_expand.m"
          check_hlds__try_expand__V_57_57 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
        }
#line 818 "try_expand.m"
        {
#line 818 "try_expand.m"
          check_hlds__try_expand__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_56_56, 0) = ((MR_Box) (check_hlds__try_expand__V_57_57));
#line 818 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 818 "try_expand.m"
        }
#line 818 "try_expand.m"
        {
#line 818 "try_expand.m"
          check_hlds__try_expand__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_54_54, 0) = ((MR_Box) (check_hlds__try_expand__V_55_55));
#line 818 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_54_54, 1) = ((MR_Box) (check_hlds__try_expand__V_56_56));
#line 818 "try_expand.m"
        }
#line 818 "try_expand.m"
        {
#line 818 "try_expand.m"
          check_hlds__try_expand__LambdaParamTypes_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamTypes_24, 0) = ((MR_Box) (check_hlds__try_expand__OutputTupleType_11));
#line 818 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamTypes_24, 1) = ((MR_Box) (check_hlds__try_expand__V_54_54));
#line 818 "try_expand.m"
        }
#line 819 "try_expand.m"
        {
#line 819 "try_expand.m"
          check_hlds__try_expand__V_59_59 = parse_tree__prog_mode__out_mode_0_f_0();
        }
#line 819 "try_expand.m"
        {
#line 819 "try_expand.m"
          check_hlds__try_expand__V_61_61 = parse_tree__prog_mode__di_mode_0_f_0();
        }
#line 819 "try_expand.m"
        {
#line 819 "try_expand.m"
          check_hlds__try_expand__V_63_63 = parse_tree__prog_mode__uo_mode_0_f_0();
        }
#line 819 "try_expand.m"
        {
#line 819 "try_expand.m"
          check_hlds__try_expand__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_62_62, 0) = ((MR_Box) (check_hlds__try_expand__V_63_63));
#line 819 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 819 "try_expand.m"
        }
#line 819 "try_expand.m"
        {
#line 819 "try_expand.m"
          check_hlds__try_expand__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_60_60, 0) = ((MR_Box) (check_hlds__try_expand__V_61_61));
#line 819 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_60_60, 1) = ((MR_Box) (check_hlds__try_expand__V_62_62));
#line 819 "try_expand.m"
        }
#line 819 "try_expand.m"
        {
#line 819 "try_expand.m"
          check_hlds__try_expand__LambdaParamModes_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamModes_25, 0) = ((MR_Box) (check_hlds__try_expand__V_59_59));
#line 819 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamModes_25, 1) = ((MR_Box) (check_hlds__try_expand__V_60_60));
#line 819 "try_expand.m"
        }
#line 820 "try_expand.m"
        {
#line 820 "try_expand.m"
          parse_tree__set_of_var__delete_3_p_0(check_hlds__try_expand__TypeCtorInfo_87_87, check_hlds__try_expand__IOVarFinal_22, check_hlds__try_expand__NonLocals1_19, &check_hlds__try_expand__NonLocals_26);
        }
#line 816 "try_expand.m"
      }
#line 829 "try_expand.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 828 "try_expand.m"
    {
#line 828 "try_expand.m"
      check_hlds__try_expand__LambdaType_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 828 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__LambdaType_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 828 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__LambdaType_27, 1) = ((MR_Box) (check_hlds__try_expand__LambdaParamTypes_24));
#line 828 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__LambdaType_27, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 828 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__LambdaType_27, 3) = ((MR_Box) ((MR_Integer) 0));
#line 828 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__LambdaType_27, 4) = NULL;
#line 828 "try_expand.m"
    }
#line 830 "try_expand.m"
    {
#line 830 "try_expand.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(check_hlds__try_expand__LambdaType_27, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[4]), check_hlds__try_expand__LambdaVar_13, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_69_69);
    }
#line 834 "try_expand.m"
    {
#line 834 "try_expand.m"
      check_hlds__try_expand__V_71_71 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__try_expand__TypeCtorInfo_87_87, check_hlds__try_expand__OutputVarsSet_10);
    }
#line 834 "try_expand.m"
    {
#line 834 "try_expand.m"
      hlds__make_goal__construct_tuple_3_p_0(check_hlds__try_expand__OutputTupleVar_20, check_hlds__try_expand__V_71_71, &check_hlds__try_expand__MakeOutputTuple_28);
    }
#line 836 "try_expand.m"
    {
#line 836 "try_expand.m"
      hlds__hlds_goal__conjoin_goals_3_p_0(check_hlds__try_expand__Body0_9, check_hlds__try_expand__MakeOutputTuple_28, &check_hlds__try_expand__LambdaBody0_29);
    }
#line 839 "try_expand.m"
    {
#line 839 "try_expand.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ProcInfo_69_69, &check_hlds__try_expand__VarSet0_30);
    }
#line 840 "try_expand.m"
    {
#line 840 "try_expand.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ProcInfo_69_69, &check_hlds__try_expand__VarTypes0_31);
    }
#line 841 "try_expand.m"
    {
#line 841 "try_expand.m"
      check_hlds__try_expand__V_72_72 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__try_expand__TypeCtorInfo_87_87, check_hlds__try_expand__OutputVarsSet_10);
    }
#line 1991 "check_hlds.try_expand.c"
    check_hlds__try_expand__TypeInfo_88_88 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
#line 843 "try_expand.m"
    {
#line 843 "try_expand.m"
      check_hlds__try_expand__V_75_75 = mercury__map__init_0_f_0(check_hlds__try_expand__TypeInfo_88_88, check_hlds__try_expand__TypeInfo_88_88);
    }
#line 841 "try_expand.m"
    {
#line 841 "try_expand.m"
      hlds__goal_util__clone_variables_9_p_0(check_hlds__try_expand__V_72_72, check_hlds__try_expand__VarSet0_30, check_hlds__try_expand__VarTypes0_31, check_hlds__try_expand__VarSet0_30, &check_hlds__try_expand__VarSet_32, check_hlds__try_expand__VarTypes0_31, &check_hlds__try_expand__VarTypes_33, check_hlds__try_expand__V_75_75, &check_hlds__try_expand__Renaming_34);
    }
#line 844 "try_expand.m"
    {
#line 844 "try_expand.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__try_expand__VarSet_32, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_69_69, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_76_76);
    }
#line 845 "try_expand.m"
    {
#line 845 "try_expand.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__try_expand__VarTypes_33, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_76_76, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_42);
    }
#line 846 "try_expand.m"
    {
#line 846 "try_expand.m"
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(check_hlds__try_expand__Renaming_34, check_hlds__try_expand__LambdaBody0_29, &check_hlds__try_expand__LambdaBody_35);
    }
#line 849 "try_expand.m"
    check_hlds__try_expand__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__LambdaBody_35, (MR_Integer) 0)));
#line 849 "try_expand.m"
    check_hlds__try_expand__BodyGoalInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__LambdaBody_35, (MR_Integer) 1)));
#line 850 "try_expand.m"
    {
#line 850 "try_expand.m"
      check_hlds__try_expand__BodyDetism_38 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__try_expand__BodyGoalInfo_37);
    }
#line 865 "try_expand.m"
    if ((check_hlds__try_expand__BodyDetism_38 == (MR_Integer) 4))
#line 869 "try_expand.m"
      check_hlds__try_expand__LambdaDetism_39 = (MR_Integer) 4;
#line 865 "try_expand.m"
    else
#line 865 "try_expand.m"
      if ((check_hlds__try_expand__BodyDetism_38 == (MR_Integer) 5))
#line 870 "try_expand.m"
        check_hlds__try_expand__LambdaDetism_39 = (MR_Integer) 5;
#line 865 "try_expand.m"
      else
#line 865 "try_expand.m"
        if ((check_hlds__try_expand__BodyDetism_38 == (MR_Integer) 0))
#line 865 "try_expand.m"
          check_hlds__try_expand__LambdaDetism_39 = (MR_Integer) 0;
#line 865 "try_expand.m"
        else
#line 865 "try_expand.m"
          if ((check_hlds__try_expand__BodyDetism_38 == (MR_Integer) 6))
#line 871 "try_expand.m"
            check_hlds__try_expand__LambdaDetism_39 = (MR_Integer) 0;
#line 865 "try_expand.m"
          else
#line 865 "try_expand.m"
            if ((check_hlds__try_expand__BodyDetism_38 == (MR_Integer) 7))
#line 872 "try_expand.m"
              check_hlds__try_expand__LambdaDetism_39 = (MR_Integer) 1;
#line 865 "try_expand.m"
            else
#line 865 "try_expand.m"
              if ((check_hlds__try_expand__BodyDetism_38 == (MR_Integer) 2))
#line 867 "try_expand.m"
                check_hlds__try_expand__LambdaDetism_39 = (MR_Integer) 4;
#line 865 "try_expand.m"
              else
#line 865 "try_expand.m"
                if ((check_hlds__try_expand__BodyDetism_38 == (MR_Integer) 3))
#line 868 "try_expand.m"
                  check_hlds__try_expand__LambdaDetism_39 = (MR_Integer) 5;
#line 865 "try_expand.m"
                else
#line 866 "try_expand.m"
                  check_hlds__try_expand__LambdaDetism_39 = (MR_Integer) 1;
#line 855 "try_expand.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 855 "try_expand.m"
    {
#line 855 "try_expand.m"
      check_hlds__try_expand__V_82_82 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__try_expand__TypeCtorInfo_87_87, check_hlds__try_expand__NonLocals_26);
    }
#line 854 "try_expand.m"
    {
#line 854 "try_expand.m"
      check_hlds__try_expand__RHS_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 854 "try_expand.m"
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 0) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((MR_Integer) 0 << (MR_Integer) 3)))))));
#line 854 "try_expand.m"
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 1) = (MR_Integer) 0;
#line 854 "try_expand.m"
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 2) = ((MR_Box) (check_hlds__try_expand__V_82_82));
#line 854 "try_expand.m"
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 3) = ((MR_Box) (check_hlds__try_expand__LambdaParams_23));
#line 854 "try_expand.m"
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 4) = ((MR_Box) (check_hlds__try_expand__LambdaParamModes_25));
#line 854 "try_expand.m"
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 5) = ((MR_Box) (check_hlds__try_expand__LambdaDetism_39));
#line 854 "try_expand.m"
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 6) = ((MR_Box) (check_hlds__try_expand__LambdaBody_35));
#line 854 "try_expand.m"
    }
#line 858 "try_expand.m"
    {
#line 858 "try_expand.m"
      check_hlds__try_expand__V_83_83 = mercury__term__context_init_0_f_0();
    }
#line 857 "try_expand.m"
    {
#line 857 "try_expand.m"
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(*check_hlds__try_expand__LambdaVar_13, check_hlds__try_expand__RHS_40, check_hlds__try_expand__V_83_83, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__try_expand_scalar_common_6[1]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__AssignLambdaVar_14);
#line 857 "try_expand.m"
      return;
    }
#line 808 "try_expand.m"
  }
#line 803 "try_expand.m"
}

#line 781 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__lookup_case_goal_3_p_0(
#line 781 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 781 "try_expand.m"
  MR_Word check_hlds__try_expand__ConsId_2,
#line 781 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_3)
#line 781 "try_expand.m"
{
#line 783 "try_expand.m"
  while (MR_TRUE)
#line 783 "try_expand.m"
    {
#line 783 "try_expand.m"
      /* tailcall optimized into a loop */
#line 783 "try_expand.m"
      {
#line 783 "try_expand.m"
        MR_bool check_hlds__try_expand__succeeded;

#line 783 "try_expand.m"
        if ((check_hlds__try_expand__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 783 "try_expand.m"
          {
#line 783 "try_expand.m"
            MR_String check_hlds__try_expand__V_8_8;
#line 783 "try_expand.m"
            MR_String check_hlds__try_expand__V_10_10;

#line 784 "try_expand.m"
            {
#line 784 "try_expand.m"
              check_hlds__try_expand__V_10_10 = mercury__string__string_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, ((MR_Box) (check_hlds__try_expand__ConsId_2)));
            }
#line 784 "try_expand.m"
            {
#line 784 "try_expand.m"
              check_hlds__try_expand__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "couldn\'t find ", check_hlds__try_expand__V_10_10);
            }
#line 784 "try_expand.m"
            {
#line 784 "try_expand.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.lookup_case_goal\'/3", check_hlds__try_expand__V_8_8);
#line 784 "try_expand.m"
              return;
            }
#line 783 "try_expand.m"
          }
#line 783 "try_expand.m"
        else
#line 785 "try_expand.m"
          {
#line 785 "try_expand.m"
            MR_Word check_hlds__try_expand__H_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 0)));
#line 785 "try_expand.m"
            MR_Word check_hlds__try_expand__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 1)));
#line 788 "try_expand.m"
            MR_Word check_hlds__try_expand__GoalPrime_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__H_11, (MR_Integer) 2)));
#line 786 "try_expand.m"
            MR_Word check_hlds__try_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__H_11, (MR_Integer) 1)));
#line 786 "try_expand.m"
            MR_Word check_hlds__try_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__H_11, (MR_Integer) 0)));

#line 786 "try_expand.m"
            {
#line 786 "try_expand.m"
              check_hlds__try_expand__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__try_expand__ConsId_2, check_hlds__try_expand__V_18_18);
            }
#line 786 "try_expand.m"
            if (check_hlds__try_expand__succeeded)
#line 786 "try_expand.m"
              check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 788 "try_expand.m"
            if (check_hlds__try_expand__succeeded)
#line 787 "try_expand.m"
              *check_hlds__try_expand__Goal_3 = check_hlds__try_expand__GoalPrime_15;
#line 788 "try_expand.m"
            else
#line 789 "try_expand.m"
              {
#line 789 "try_expand.m"
                /* direct tailcall eliminated */
#line 789 "try_expand.m"
                {
#line 789 "try_expand.m"
                  MR_Word check_hlds__try_expand__HeadVar__1__tmp_copy_1 = check_hlds__try_expand__T_12;

#line 789 "try_expand.m"
                  check_hlds__try_expand__HeadVar__1_1 = check_hlds__try_expand__HeadVar__1__tmp_copy_1;
#line 789 "try_expand.m"
                }
#line 789 "try_expand.m"
                continue;
#line 789 "try_expand.m"
              }
#line 785 "try_expand.m"
          }
#line 783 "try_expand.m"
      }
#line 783 "try_expand.m"
      break;
#line 783 "try_expand.m"
    }
#line 781 "try_expand.m"
}

#line 713 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand__extract_from_succeeded_goal_5_p_0(
#line 713 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_6,
#line 713 "try_expand.m"
  MR_Word check_hlds__try_expand__SucceededGoal_7,
#line 713 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_8,
#line 713 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_9,
#line 713 "try_expand.m"
  MR_Word * check_hlds__try_expand__MaybeElse_10)
#line 713 "try_expand.m"
{
#line 717 "try_expand.m"
  {
#line 717 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 717 "try_expand.m"
    MR_Word check_hlds__try_expand__Conjuncts0_11;
#line 717 "try_expand.m"
    MR_Word check_hlds__try_expand__DeconstructResult_13;
#line 717 "try_expand.m"
    MR_Word check_hlds__try_expand__TestNullTuple_14;
#line 717 "try_expand.m"
    MR_Word check_hlds__try_expand__Conjuncts1_15;
#line 717 "try_expand.m"
    MR_Word check_hlds__try_expand__TestRHS_23;
#line 717 "try_expand.m"
    MR_Word check_hlds__try_expand__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SucceededGoal_7, (MR_Integer) 0)));
#line 717 "try_expand.m"
    MR_Word check_hlds__try_expand__V_49_49;
#line 717 "try_expand.m"
    MR_Word check_hlds__try_expand__V_50_50;
#line 717 "try_expand.m"
    MR_Word check_hlds__try_expand__V_51_51;
#line 717 "try_expand.m"
    MR_Word check_hlds__try_expand__V_52_52;
#line 718 "try_expand.m"
    MR_Word check_hlds__try_expand__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SucceededGoal_7, (MR_Integer) 1)));
#line 720 "try_expand.m"
    MR_Word check_hlds__try_expand__V_21_21;
#line 720 "try_expand.m"
    MR_Word check_hlds__try_expand___ResultVar_16;
#line 720 "try_expand.m"
    MR_Word check_hlds__try_expand__V_17_17;
#line 720 "try_expand.m"
    MR_Word check_hlds__try_expand__V_18_18;
#line 720 "try_expand.m"
    MR_Word check_hlds__try_expand__V_19_19;
#line 720 "try_expand.m"
    MR_Word check_hlds__try_expand__V_20_20;
#line 721 "try_expand.m"
    MR_Word check_hlds__try_expand__V_27_27;
#line 721 "try_expand.m"
    MR_Word check_hlds__try_expand__V_22_22;
#line 721 "try_expand.m"
    MR_Word check_hlds__try_expand__V_24_24;
#line 721 "try_expand.m"
    MR_Word check_hlds__try_expand__V_25_25;
#line 721 "try_expand.m"
    MR_Word check_hlds__try_expand__V_26_26;
#line 722 "try_expand.m"
    MR_Word check_hlds__try_expand__V_53_53;
#line 722 "try_expand.m"
    MR_Integer check_hlds__try_expand__V_54_54;
#line 722 "try_expand.m"
    MR_Word check_hlds__try_expand__V_55_55;
#line 722 "try_expand.m"
    MR_Word check_hlds__try_expand__V_56_56;
#line 751 "try_expand.m"
    MR_Word check_hlds__try_expand__Rest_30;
#line 751 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalPrime_32;
#line 751 "try_expand.m"
    MR_Word check_hlds__try_expand__Then0_33;
#line 751 "try_expand.m"
    MR_Word check_hlds__try_expand__Else0_34;
#line 725 "try_expand.m"
    MR_Word check_hlds__try_expand__IfThenElse_28;
#line 725 "try_expand.m"
    MR_Word check_hlds__try_expand__V_57_57;
#line 725 "try_expand.m"
    MR_Word check_hlds__try_expand__V_29_29;
#line 726 "try_expand.m"
    MR_Word check_hlds__try_expand__V_31_31;

#line 718 "try_expand.m"
    check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_48_48)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_48_48, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 718 "try_expand.m"
    if (check_hlds__try_expand__succeeded)
#line 718 "try_expand.m"
      {
#line 718 "try_expand.m"
        check_hlds__try_expand__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_48_48, (MR_Integer) 1)));
#line 718 "try_expand.m"
        check_hlds__try_expand__Conjuncts0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_48_48, (MR_Integer) 2)));
#line 718 "try_expand.m"
        check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_49_49 == (MR_Integer) 0);
#line 717 "try_expand.m"
        if (check_hlds__try_expand__succeeded)
#line 717 "try_expand.m"
          {
#line 719 "try_expand.m"
            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__Conjuncts0_11)) == (MR_mktag((MR_Integer) 1)));
#line 719 "try_expand.m"
            if (check_hlds__try_expand__succeeded)
#line 719 "try_expand.m"
              {
#line 719 "try_expand.m"
                check_hlds__try_expand__DeconstructResult_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts0_11, (MR_Integer) 0)));
#line 719 "try_expand.m"
                check_hlds__try_expand__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts0_11, (MR_Integer) 1)));
#line 719 "try_expand.m"
                check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_50_50)) == (MR_mktag((MR_Integer) 1)));
#line 719 "try_expand.m"
                if (check_hlds__try_expand__succeeded)
#line 719 "try_expand.m"
                  {
#line 719 "try_expand.m"
                    check_hlds__try_expand__TestNullTuple_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_50_50, (MR_Integer) 0)));
#line 719 "try_expand.m"
                    check_hlds__try_expand__Conjuncts1_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_50_50, (MR_Integer) 1)));
#line 720 "try_expand.m"
                    check_hlds__try_expand__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__DeconstructResult_13, (MR_Integer) 0)));
#line 720 "try_expand.m"
                    check_hlds__try_expand__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__DeconstructResult_13, (MR_Integer) 1)));
#line 720 "try_expand.m"
                    check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_51_51)) == (MR_mktag((MR_Integer) 1)));
#line 720 "try_expand.m"
                    if (check_hlds__try_expand__succeeded)
#line 720 "try_expand.m"
                      {
#line 720 "try_expand.m"
                        check_hlds__try_expand___ResultVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, (MR_Integer) 0)));
#line 720 "try_expand.m"
                        check_hlds__try_expand__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, (MR_Integer) 1)));
#line 720 "try_expand.m"
                        check_hlds__try_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, (MR_Integer) 2)));
#line 720 "try_expand.m"
                        check_hlds__try_expand__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, (MR_Integer) 3)));
#line 720 "try_expand.m"
                        check_hlds__try_expand__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, (MR_Integer) 4)));
#line 721 "try_expand.m"
                        check_hlds__try_expand__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__TestNullTuple_14, (MR_Integer) 0)));
#line 721 "try_expand.m"
                        check_hlds__try_expand__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__TestNullTuple_14, (MR_Integer) 1)));
#line 721 "try_expand.m"
                        check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 721 "try_expand.m"
                        if (check_hlds__try_expand__succeeded)
#line 721 "try_expand.m"
                          {
#line 721 "try_expand.m"
                            check_hlds__try_expand__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, (MR_Integer) 0)));
#line 721 "try_expand.m"
                            check_hlds__try_expand__TestRHS_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, (MR_Integer) 1)));
#line 721 "try_expand.m"
                            check_hlds__try_expand__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, (MR_Integer) 2)));
#line 721 "try_expand.m"
                            check_hlds__try_expand__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, (MR_Integer) 3)));
#line 721 "try_expand.m"
                            check_hlds__try_expand__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, (MR_Integer) 4)));
#line 722 "try_expand.m"
                            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__TestRHS_23)) == (MR_mktag((MR_Integer) 1)));
#line 722 "try_expand.m"
                            if (check_hlds__try_expand__succeeded)
#line 722 "try_expand.m"
                              {
#line 722 "try_expand.m"
                                check_hlds__try_expand__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__TestRHS_23, (MR_Integer) 0)));
#line 722 "try_expand.m"
                                check_hlds__try_expand__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__TestRHS_23, (MR_Integer) 1)));
#line 722 "try_expand.m"
                                check_hlds__try_expand__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__TestRHS_23, (MR_Integer) 2)));
#line 722 "try_expand.m"
                                check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_53_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_53_53, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 722 "try_expand.m"
                                if (check_hlds__try_expand__succeeded)
#line 722 "try_expand.m"
                                  {
#line 722 "try_expand.m"
                                    check_hlds__try_expand__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_53_53, (MR_Integer) 1)));
#line 722 "try_expand.m"
                                    check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_54_54 == (MR_Integer) 0);
#line 722 "try_expand.m"
                                    if (check_hlds__try_expand__succeeded)
#line 722 "try_expand.m"
                                      {
#line 722 "try_expand.m"
                                        check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_55_55 == (MR_Integer) 0);
#line 722 "try_expand.m"
                                        if (check_hlds__try_expand__succeeded)
#line 722 "try_expand.m"
                                          check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 722 "try_expand.m"
                                      }
#line 722 "try_expand.m"
                                  }
#line 722 "try_expand.m"
                              }
#line 717 "try_expand.m"
                            if (check_hlds__try_expand__succeeded)
#line 717 "try_expand.m"
                              {
#line 725 "try_expand.m"
                                check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__Conjuncts1_15)) == (MR_mktag((MR_Integer) 1)));
#line 725 "try_expand.m"
                                if (check_hlds__try_expand__succeeded)
#line 725 "try_expand.m"
                                  {
#line 725 "try_expand.m"
                                    check_hlds__try_expand__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts1_15, (MR_Integer) 0)));
#line 725 "try_expand.m"
                                    check_hlds__try_expand__Rest_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts1_15, (MR_Integer) 1)));
#line 725 "try_expand.m"
                                    check_hlds__try_expand__IfThenElse_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_57_57, (MR_Integer) 0)));
#line 725 "try_expand.m"
                                    check_hlds__try_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_57_57, (MR_Integer) 1)));
#line 726 "try_expand.m"
                                    check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__IfThenElse_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__IfThenElse_28, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 726 "try_expand.m"
                                    if (check_hlds__try_expand__succeeded)
#line 726 "try_expand.m"
                                      {
#line 726 "try_expand.m"
                                        check_hlds__try_expand__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__IfThenElse_28, (MR_Integer) 1)));
#line 726 "try_expand.m"
                                        check_hlds__try_expand__GoalPrime_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__IfThenElse_28, (MR_Integer) 2)));
#line 726 "try_expand.m"
                                        check_hlds__try_expand__Then0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__IfThenElse_28, (MR_Integer) 3)));
#line 726 "try_expand.m"
                                        check_hlds__try_expand__Else0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__IfThenElse_28, (MR_Integer) 4)));
#line 726 "try_expand.m"
                                      }
#line 725 "try_expand.m"
                                  }
#line 751 "try_expand.m"
                                if (check_hlds__try_expand__succeeded)
#line 728 "try_expand.m"
                                  {
#line 728 "try_expand.m"
                                    MR_Word check_hlds__try_expand__GoalInfo_36;
#line 728 "try_expand.m"
                                    MR_Word check_hlds__try_expand__GoalDetism_37;
#line 728 "try_expand.m"
                                    MR_Word check_hlds__try_expand__GoalMaxSoln_39;
#line 728 "try_expand.m"
                                    MR_Word check_hlds__try_expand__Else_40;
#line 735 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_35_35;
#line 737 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_38_38;

#line 728 "try_expand.m"
                                    *check_hlds__try_expand__Goal_8 = check_hlds__try_expand__GoalPrime_32;
#line 735 "try_expand.m"
                                    check_hlds__try_expand__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__try_expand__Goal_8, (MR_Integer) 0)));
#line 735 "try_expand.m"
                                    check_hlds__try_expand__GoalInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__try_expand__Goal_8, (MR_Integer) 1)));
#line 736 "try_expand.m"
                                    {
#line 736 "try_expand.m"
                                      check_hlds__try_expand__GoalDetism_37 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__try_expand__GoalInfo_36);
                                    }
#line 737 "try_expand.m"
                                    {
#line 737 "try_expand.m"
                                      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__try_expand__GoalDetism_37, &check_hlds__try_expand__V_38_38, &check_hlds__try_expand__GoalMaxSoln_39);
                                    }
#line 741 "try_expand.m"
                                    if ((check_hlds__try_expand__GoalMaxSoln_39 == (MR_Integer) 0))
#line 915 "try_expand.m"
                                      {
#line 915 "try_expand.m"
                                        MR_Word check_hlds__try_expand__V_82_82;
#line 915 "try_expand.m"
                                        MR_Word check_hlds__try_expand__V_90_90;
#line 915 "try_expand.m"
                                        MR_Word check_hlds__try_expand__V_91_91;

#line 916 "try_expand.m"
                                        {
#line 916 "try_expand.m"
                                          check_hlds__try_expand__V_82_82 = mdbcomp__prim_data__mercury_exception_module_0_f_0();
                                        }
#line 918 "try_expand.m"
                                        {
#line 918 "try_expand.m"
                                          check_hlds__try_expand__V_90_90 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                                        }
#line 918 "try_expand.m"
                                        {
#line 918 "try_expand.m"
                                          check_hlds__try_expand__V_91_91 = mercury__term__context_init_0_f_0();
                                        }
#line 916 "try_expand.m"
                                        {
#line 916 "try_expand.m"
                                          hlds__goal_util__generate_simple_call_12_p_0(check_hlds__try_expand__V_82_82, (MR_String) "unreachable", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__V_90_90, check_hlds__try_expand__ModuleInfo_6, check_hlds__try_expand__V_91_91, check_hlds__try_expand__Then_9);
                                        }
#line 915 "try_expand.m"
                                      }
#line 741 "try_expand.m"
                                    else
#line 746 "try_expand.m"
                                      {
#line 746 "try_expand.m"
                                        hlds__hlds_goal__conjoin_goal_and_goal_list_3_p_0(check_hlds__try_expand__Then0_33, check_hlds__try_expand__Rest_30, check_hlds__try_expand__Then_9);
                                      }
#line 749 "try_expand.m"
                                    {
#line 749 "try_expand.m"
                                      hlds__hlds_goal__conjoin_goal_and_goal_list_3_p_0(check_hlds__try_expand__Else0_34, check_hlds__try_expand__Rest_30, &check_hlds__try_expand__Else_40);
                                    }
#line 750 "try_expand.m"
                                    {
#line 750 "try_expand.m"
                                      MR_Word base;
#line 750 "try_expand.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 750 "try_expand.m"
                                      *check_hlds__try_expand__MaybeElse_10 = base;
#line 750 "try_expand.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__try_expand__Else_40));
#line 750 "try_expand.m"
                                    }
#line 728 "try_expand.m"
                                    check_hlds__try_expand__succeeded = MR_TRUE;
#line 728 "try_expand.m"
                                  }
#line 751 "try_expand.m"
                                else
#line 752 "try_expand.m"
                                  {
#line 752 "try_expand.m"
                                    MR_Word check_hlds__try_expand__SomeGoal_41;
#line 752 "try_expand.m"
                                    MR_Word check_hlds__try_expand__AfterSomeGoal_42;
#line 752 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_58_58;
#line 752 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_59_59;
#line 752 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_60_60;
#line 753 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_43_43;
#line 760 "try_expand.m"
                                    MR_Word check_hlds__try_expand__Rest_70;
#line 760 "try_expand.m"
                                    MR_Word check_hlds__try_expand__Then0_71;
#line 755 "try_expand.m"
                                    MR_Word check_hlds__try_expand__SomeThen_44;
#line 755 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_61_61;
#line 755 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_62_62;
#line 755 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_63_63;
#line 756 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_45_45;

#line 752 "try_expand.m"
                                    check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__Conjuncts1_15)) == (MR_mktag((MR_Integer) 1)));
#line 752 "try_expand.m"
                                    if (check_hlds__try_expand__succeeded)
#line 752 "try_expand.m"
                                      {
#line 752 "try_expand.m"
                                        check_hlds__try_expand__SomeGoal_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts1_15, (MR_Integer) 0)));
#line 752 "try_expand.m"
                                        check_hlds__try_expand__AfterSomeGoal_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts1_15, (MR_Integer) 1)));
#line 753 "try_expand.m"
                                        check_hlds__try_expand__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SomeGoal_41, (MR_Integer) 0)));
#line 753 "try_expand.m"
                                        check_hlds__try_expand__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SomeGoal_41, (MR_Integer) 1)));
#line 753 "try_expand.m"
                                        check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_58_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_58_58, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 753 "try_expand.m"
                                        if (check_hlds__try_expand__succeeded)
#line 753 "try_expand.m"
                                          {
#line 753 "try_expand.m"
                                            check_hlds__try_expand__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_58_58, (MR_Integer) 1)));
#line 753 "try_expand.m"
                                            *check_hlds__try_expand__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_58_58, (MR_Integer) 2)));
#line 753 "try_expand.m"
                                            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_59_59)) == (MR_mktag((MR_Integer) 0)));
#line 753 "try_expand.m"
                                            if (check_hlds__try_expand__succeeded)
#line 753 "try_expand.m"
                                              {
#line 753 "try_expand.m"
                                                check_hlds__try_expand__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_59_59, (MR_Integer) 0)));
#line 753 "try_expand.m"
                                                check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_60_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 752 "try_expand.m"
                                                if (check_hlds__try_expand__succeeded)
#line 752 "try_expand.m"
                                                  {
#line 755 "try_expand.m"
                                                    check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__AfterSomeGoal_42)) == (MR_mktag((MR_Integer) 1)));
#line 755 "try_expand.m"
                                                    if (check_hlds__try_expand__succeeded)
#line 755 "try_expand.m"
                                                      {
#line 755 "try_expand.m"
                                                        check_hlds__try_expand__SomeThen_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__AfterSomeGoal_42, (MR_Integer) 0)));
#line 755 "try_expand.m"
                                                        check_hlds__try_expand__Rest_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__AfterSomeGoal_42, (MR_Integer) 1)));
#line 756 "try_expand.m"
                                                        check_hlds__try_expand__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SomeThen_44, (MR_Integer) 0)));
#line 756 "try_expand.m"
                                                        check_hlds__try_expand__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SomeThen_44, (MR_Integer) 1)));
#line 756 "try_expand.m"
                                                        check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_61_61)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_61_61, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 756 "try_expand.m"
                                                        if (check_hlds__try_expand__succeeded)
#line 756 "try_expand.m"
                                                          {
#line 756 "try_expand.m"
                                                            check_hlds__try_expand__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_61_61, (MR_Integer) 1)));
#line 756 "try_expand.m"
                                                            check_hlds__try_expand__Then0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_61_61, (MR_Integer) 2)));
#line 756 "try_expand.m"
                                                            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_62_62)) == (MR_mktag((MR_Integer) 0)));
#line 756 "try_expand.m"
                                                            if (check_hlds__try_expand__succeeded)
#line 756 "try_expand.m"
                                                              {
#line 756 "try_expand.m"
                                                                check_hlds__try_expand__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_62_62, (MR_Integer) 0)));
#line 756 "try_expand.m"
                                                                check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 756 "try_expand.m"
                                                              }
#line 756 "try_expand.m"
                                                          }
#line 755 "try_expand.m"
                                                      }
#line 760 "try_expand.m"
                                                    if (check_hlds__try_expand__succeeded)
#line 758 "try_expand.m"
                                                      {
#line 758 "try_expand.m"
                                                        {
#line 758 "try_expand.m"
                                                          hlds__hlds_goal__conjoin_goal_and_goal_list_3_p_0(check_hlds__try_expand__Then0_71, check_hlds__try_expand__Rest_70, check_hlds__try_expand__Then_9);
                                                        }
#line 759 "try_expand.m"
                                                        *check_hlds__try_expand__MaybeElse_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 758 "try_expand.m"
                                                      }
#line 760 "try_expand.m"
                                                    else
#line 764 "try_expand.m"
                                                      {
#line 764 "try_expand.m"
                                                        MR_Word check_hlds__try_expand__GoalInfo_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__try_expand__Goal_8, (MR_Integer) 1)));
#line 764 "try_expand.m"
                                                        MR_Word check_hlds__try_expand__GoalDetism_68;
#line 764 "try_expand.m"
                                                        MR_Word check_hlds__try_expand__GoalMaxSoln_69;
#line 764 "try_expand.m"
                                                        MR_Word check_hlds__try_expand__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__try_expand__Goal_8, (MR_Integer) 0)));
#line 766 "try_expand.m"
                                                        MR_Word check_hlds__try_expand__V_47_47;

#line 765 "try_expand.m"
                                                        {
#line 765 "try_expand.m"
                                                          check_hlds__try_expand__GoalDetism_68 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__try_expand__GoalInfo_67);
                                                        }
#line 766 "try_expand.m"
                                                        {
#line 766 "try_expand.m"
                                                          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__try_expand__GoalDetism_68, &check_hlds__try_expand__V_47_47, &check_hlds__try_expand__GoalMaxSoln_69);
                                                        }
#line 771 "try_expand.m"
                                                        if ((check_hlds__try_expand__GoalMaxSoln_69 == (MR_Integer) 0))
#line 768 "try_expand.m"
                                                          {
#line 769 "try_expand.m"
                                                            {
#line 769 "try_expand.m"
                                                              check_hlds__try_expand__make_unreachable_call_2_p_0(check_hlds__try_expand__ModuleInfo_6, check_hlds__try_expand__Then_9);
                                                            }
#line 770 "try_expand.m"
                                                            *check_hlds__try_expand__MaybeElse_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 768 "try_expand.m"
                                                          }
#line 771 "try_expand.m"
                                                        else
#line 775 "try_expand.m"
                                                          {
#line 776 "try_expand.m"
                                                            {
#line 776 "try_expand.m"
                                                              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.extract_from_succeeded_goal\'/5", (MR_String) "goal not erroneous");
                                                            }
#line 775 "try_expand.m"
                                                          }
#line 764 "try_expand.m"
                                                      }
#line 760 "try_expand.m"
                                                    check_hlds__try_expand__succeeded = MR_TRUE;
#line 752 "try_expand.m"
                                                  }
#line 753 "try_expand.m"
                                              }
#line 753 "try_expand.m"
                                          }
#line 752 "try_expand.m"
                                      }
#line 752 "try_expand.m"
                                  }
#line 717 "try_expand.m"
                              }
#line 721 "try_expand.m"
                          }
#line 720 "try_expand.m"
                      }
#line 719 "try_expand.m"
                  }
#line 719 "try_expand.m"
              }
#line 717 "try_expand.m"
          }
#line 718 "try_expand.m"
      }
#line 717 "try_expand.m"
    return check_hlds__try_expand__succeeded;
#line 717 "try_expand.m"
  }
#line 713 "try_expand.m"
}

#line 673 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand__extract_intermediate_goal_parts_2_7_p_0(
#line 673 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_8,
#line 673 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_9,
#line 673 "try_expand.m"
  MR_Word check_hlds__try_expand__IntermediateGoal_10,
#line 673 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_11,
#line 673 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_12,
#line 673 "try_expand.m"
  MR_Word * check_hlds__try_expand__MaybeElse_13,
#line 673 "try_expand.m"
  MR_Word * check_hlds__try_expand__ExcpHandling_14)
#line 673 "try_expand.m"
{
#line 678 "try_expand.m"
  {
#line 678 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeInfo_41_41;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeInfo_42_42;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__Conjuncts_15;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__MagicCall_17;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__Switch_19;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__Cases_26;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__SucceededGoal_27;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 0)));
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__V_29_29;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__V_30_30;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__V_31_31;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__V_32_32;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__V_33_33;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__V_34_34;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__V_35_35;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__V_36_36;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__V_37_37;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__V_38_38;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__V_39_39;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__V_40_40;
#line 679 "try_expand.m"
    MR_Word check_hlds__try_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 1)));
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__V_18_18;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_20_20;
#line 684 "try_expand.m"
    MR_Word check_hlds__try_expand__V_21_21;
#line 684 "try_expand.m"
    MR_Integer check_hlds__try_expand__V_22_22;
#line 684 "try_expand.m"
    MR_Word check_hlds__try_expand__V_23_23;
#line 684 "try_expand.m"
    MR_Word check_hlds__try_expand__V_24_24;
#line 684 "try_expand.m"
    MR_Word check_hlds__try_expand__V_25_25;

#line 679 "try_expand.m"
    check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_28_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_28_28, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 679 "try_expand.m"
    if (check_hlds__try_expand__succeeded)
#line 679 "try_expand.m"
      {
#line 679 "try_expand.m"
        check_hlds__try_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_28_28, (MR_Integer) 1)));
#line 679 "try_expand.m"
        check_hlds__try_expand__Conjuncts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_28_28, (MR_Integer) 2)));
#line 679 "try_expand.m"
        check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_29_29 == (MR_Integer) 0);
#line 678 "try_expand.m"
        if (check_hlds__try_expand__succeeded)
#line 678 "try_expand.m"
          {
#line 681 "try_expand.m"
            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__Conjuncts_15)) == (MR_mktag((MR_Integer) 1)));
#line 681 "try_expand.m"
            if (check_hlds__try_expand__succeeded)
#line 681 "try_expand.m"
              {
#line 681 "try_expand.m"
                check_hlds__try_expand__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts_15, (MR_Integer) 0)));
#line 681 "try_expand.m"
                check_hlds__try_expand__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts_15, (MR_Integer) 1)));
#line 681 "try_expand.m"
                check_hlds__try_expand__MagicCall_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_30_30, (MR_Integer) 0)));
#line 681 "try_expand.m"
                check_hlds__try_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_30_30, (MR_Integer) 1)));
#line 683 "try_expand.m"
                check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 683 "try_expand.m"
                if (check_hlds__try_expand__succeeded)
#line 683 "try_expand.m"
                  {
#line 683 "try_expand.m"
                    check_hlds__try_expand__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_31_31, (MR_Integer) 0)));
#line 683 "try_expand.m"
                    check_hlds__try_expand__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_31_31, (MR_Integer) 1)));
#line 683 "try_expand.m"
                    check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 678 "try_expand.m"
                    if (check_hlds__try_expand__succeeded)
#line 678 "try_expand.m"
                      {
#line 682 "try_expand.m"
                        check_hlds__try_expand__Switch_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_32_32, (MR_Integer) 0)));
#line 682 "try_expand.m"
                        check_hlds__try_expand__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_32_32, (MR_Integer) 1)));
#line 684 "try_expand.m"
                        check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__MagicCall_17)) == (MR_mktag((MR_Integer) 2)));
#line 684 "try_expand.m"
                        if (check_hlds__try_expand__succeeded)
#line 684 "try_expand.m"
                          {
#line 684 "try_expand.m"
                            check_hlds__try_expand__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 0)));
#line 684 "try_expand.m"
                            check_hlds__try_expand__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 1)));
#line 684 "try_expand.m"
                            check_hlds__try_expand__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 2)));
#line 684 "try_expand.m"
                            check_hlds__try_expand__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 3)));
#line 684 "try_expand.m"
                            check_hlds__try_expand__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 4)));
#line 684 "try_expand.m"
                            check_hlds__try_expand__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 5)));
#line 684 "try_expand.m"
                            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 684 "try_expand.m"
                            if (check_hlds__try_expand__succeeded)
#line 684 "try_expand.m"
                              {
#line 684 "try_expand.m"
                                check_hlds__try_expand__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_34_34, (MR_Integer) 0)));
#line 684 "try_expand.m"
                                check_hlds__try_expand__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_34_34, (MR_Integer) 1)));
#line 2919 "check_hlds.try_expand.c"
                                check_hlds__try_expand__TypeInfo_41_41 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
#line 684 "try_expand.m"
                                {
#line 684 "try_expand.m"
                                  check_hlds__try_expand__succeeded = mercury__builtin__unify_2_p_0(check_hlds__try_expand__TypeInfo_41_41, ((MR_Box) (check_hlds__try_expand__ResultVar_9)), ((MR_Box) (check_hlds__try_expand__V_39_39)));
                                }
#line 678 "try_expand.m"
                                if (check_hlds__try_expand__succeeded)
#line 678 "try_expand.m"
                                  {
#line 684 "try_expand.m"
                                    check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 678 "try_expand.m"
                                    if (check_hlds__try_expand__succeeded)
#line 678 "try_expand.m"
                                      {
#line 685 "try_expand.m"
                                        check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__Switch_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_19, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 685 "try_expand.m"
                                        if (check_hlds__try_expand__succeeded)
#line 685 "try_expand.m"
                                          {
#line 685 "try_expand.m"
                                            check_hlds__try_expand__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_19, (MR_Integer) 1)));
#line 685 "try_expand.m"
                                            check_hlds__try_expand__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_19, (MR_Integer) 2)));
#line 685 "try_expand.m"
                                            check_hlds__try_expand__Cases_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_19, (MR_Integer) 3)));
#line 2948 "check_hlds.try_expand.c"
                                            check_hlds__try_expand__TypeInfo_42_42 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
#line 685 "try_expand.m"
                                            {
#line 685 "try_expand.m"
                                              check_hlds__try_expand__succeeded = mercury__builtin__unify_2_p_0(check_hlds__try_expand__TypeInfo_42_42, ((MR_Box) (check_hlds__try_expand__ResultVar_9)), ((MR_Box) (check_hlds__try_expand__V_40_40)));
                                            }
#line 678 "try_expand.m"
                                            if (check_hlds__try_expand__succeeded)
#line 678 "try_expand.m"
                                              {
#line 685 "try_expand.m"
                                                check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_36_36 == (MR_Integer) 1);
#line 678 "try_expand.m"
                                                if (check_hlds__try_expand__succeeded)
#line 678 "try_expand.m"
                                                  {
#line 687 "try_expand.m"
                                                    {
#line 687 "try_expand.m"
                                                      check_hlds__try_expand__V_37_37 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
                                                    }
#line 687 "try_expand.m"
                                                    {
#line 687 "try_expand.m"
                                                      check_hlds__try_expand__lookup_case_goal_3_p_0(check_hlds__try_expand__Cases_26, check_hlds__try_expand__V_37_37, &check_hlds__try_expand__SucceededGoal_27);
                                                    }
#line 688 "try_expand.m"
                                                    {
#line 688 "try_expand.m"
                                                      check_hlds__try_expand__succeeded = check_hlds__try_expand__extract_from_succeeded_goal_5_p_0(check_hlds__try_expand__ModuleInfo_8, check_hlds__try_expand__SucceededGoal_27, check_hlds__try_expand__Goal_11, check_hlds__try_expand__Then_12, check_hlds__try_expand__MaybeElse_13);
                                                    }
#line 678 "try_expand.m"
                                                    if (check_hlds__try_expand__succeeded)
#line 678 "try_expand.m"
                                                      {
#line 691 "try_expand.m"
                                                        {
#line 691 "try_expand.m"
                                                          check_hlds__try_expand__V_38_38 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
                                                        }
#line 691 "try_expand.m"
                                                        {
#line 691 "try_expand.m"
                                                          check_hlds__try_expand__lookup_case_goal_3_p_0(check_hlds__try_expand__Cases_26, check_hlds__try_expand__V_38_38, check_hlds__try_expand__ExcpHandling_14);
                                                        }
#line 691 "try_expand.m"
                                                        check_hlds__try_expand__succeeded = MR_TRUE;
#line 678 "try_expand.m"
                                                      }
#line 678 "try_expand.m"
                                                  }
#line 678 "try_expand.m"
                                              }
#line 685 "try_expand.m"
                                          }
#line 678 "try_expand.m"
                                      }
#line 678 "try_expand.m"
                                  }
#line 684 "try_expand.m"
                              }
#line 684 "try_expand.m"
                          }
#line 678 "try_expand.m"
                      }
#line 683 "try_expand.m"
                  }
#line 681 "try_expand.m"
              }
#line 678 "try_expand.m"
          }
#line 679 "try_expand.m"
      }
#line 678 "try_expand.m"
    return check_hlds__try_expand__succeeded;
#line 678 "try_expand.m"
  }
#line 673 "try_expand.m"
}

#line 640 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__extract_intermediate_goal_parts_7_p_0(
#line 640 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_8,
#line 640 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_9,
#line 640 "try_expand.m"
  MR_Word check_hlds__try_expand__IntermediateGoal_10,
#line 640 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_11,
#line 640 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_12,
#line 640 "try_expand.m"
  MR_Word * check_hlds__try_expand__MaybeElse_13,
#line 640 "try_expand.m"
  MR_Word * check_hlds__try_expand__ExcpHandling_14)
#line 640 "try_expand.m"
{
#line 655 "try_expand.m"
  {
#line 655 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 655 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalPrime_15;
#line 655 "try_expand.m"
    MR_Word check_hlds__try_expand__ThenPrime_16;
#line 655 "try_expand.m"
    MR_Word check_hlds__try_expand__MaybeElsePrime_17;
#line 655 "try_expand.m"
    MR_Word check_hlds__try_expand__ExcpHandlingPrime_18;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeInfo_41_63;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeInfo_42_64;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__Conjuncts_37;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__MagicCall_39;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__Switch_41;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__Cases_48;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__SucceededGoal_49;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 0)));
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__V_51_51;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__V_52_52;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__V_53_53;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__V_54_54;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__V_55_55;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__V_56_56;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__V_57_57;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__V_58_58;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__V_59_59;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__V_60_60;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__V_61_61;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__V_62_62;
#line 679 "try_expand.m"
    MR_Word check_hlds__try_expand__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 1)));
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__V_40_40;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_42_42;
#line 684 "try_expand.m"
    MR_Word check_hlds__try_expand__V_43_43;
#line 684 "try_expand.m"
    MR_Integer check_hlds__try_expand__V_44_44;
#line 684 "try_expand.m"
    MR_Word check_hlds__try_expand__V_45_45;
#line 684 "try_expand.m"
    MR_Word check_hlds__try_expand__V_46_46;
#line 684 "try_expand.m"
    MR_Word check_hlds__try_expand__V_47_47;

#line 679 "try_expand.m"
    check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_50_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_50_50, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 679 "try_expand.m"
    if (check_hlds__try_expand__succeeded)
#line 679 "try_expand.m"
      {
#line 679 "try_expand.m"
        check_hlds__try_expand__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_50_50, (MR_Integer) 1)));
#line 679 "try_expand.m"
        check_hlds__try_expand__Conjuncts_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_50_50, (MR_Integer) 2)));
#line 679 "try_expand.m"
        check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_51_51 == (MR_Integer) 0);
#line 678 "try_expand.m"
        if (check_hlds__try_expand__succeeded)
#line 678 "try_expand.m"
          {
#line 681 "try_expand.m"
            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__Conjuncts_37)) == (MR_mktag((MR_Integer) 1)));
#line 681 "try_expand.m"
            if (check_hlds__try_expand__succeeded)
#line 681 "try_expand.m"
              {
#line 681 "try_expand.m"
                check_hlds__try_expand__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts_37, (MR_Integer) 0)));
#line 681 "try_expand.m"
                check_hlds__try_expand__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts_37, (MR_Integer) 1)));
#line 681 "try_expand.m"
                check_hlds__try_expand__MagicCall_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_52_52, (MR_Integer) 0)));
#line 681 "try_expand.m"
                check_hlds__try_expand__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_52_52, (MR_Integer) 1)));
#line 683 "try_expand.m"
                check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_53_53)) == (MR_mktag((MR_Integer) 1)));
#line 683 "try_expand.m"
                if (check_hlds__try_expand__succeeded)
#line 683 "try_expand.m"
                  {
#line 683 "try_expand.m"
                    check_hlds__try_expand__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_53_53, (MR_Integer) 0)));
#line 683 "try_expand.m"
                    check_hlds__try_expand__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_53_53, (MR_Integer) 1)));
#line 683 "try_expand.m"
                    check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 678 "try_expand.m"
                    if (check_hlds__try_expand__succeeded)
#line 678 "try_expand.m"
                      {
#line 682 "try_expand.m"
                        check_hlds__try_expand__Switch_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_54_54, (MR_Integer) 0)));
#line 682 "try_expand.m"
                        check_hlds__try_expand__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_54_54, (MR_Integer) 1)));
#line 684 "try_expand.m"
                        check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__MagicCall_39)) == (MR_mktag((MR_Integer) 2)));
#line 684 "try_expand.m"
                        if (check_hlds__try_expand__succeeded)
#line 684 "try_expand.m"
                          {
#line 684 "try_expand.m"
                            check_hlds__try_expand__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 0)));
#line 684 "try_expand.m"
                            check_hlds__try_expand__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 1)));
#line 684 "try_expand.m"
                            check_hlds__try_expand__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 2)));
#line 684 "try_expand.m"
                            check_hlds__try_expand__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 3)));
#line 684 "try_expand.m"
                            check_hlds__try_expand__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 4)));
#line 684 "try_expand.m"
                            check_hlds__try_expand__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 5)));
#line 684 "try_expand.m"
                            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_56_56)) == (MR_mktag((MR_Integer) 1)));
#line 684 "try_expand.m"
                            if (check_hlds__try_expand__succeeded)
#line 684 "try_expand.m"
                              {
#line 684 "try_expand.m"
                                check_hlds__try_expand__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_56_56, (MR_Integer) 0)));
#line 684 "try_expand.m"
                                check_hlds__try_expand__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_56_56, (MR_Integer) 1)));
#line 3195 "check_hlds.try_expand.c"
                                check_hlds__try_expand__TypeInfo_41_63 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
#line 684 "try_expand.m"
                                {
#line 684 "try_expand.m"
                                  check_hlds__try_expand__succeeded = mercury__builtin__unify_2_p_0(check_hlds__try_expand__TypeInfo_41_63, ((MR_Box) (check_hlds__try_expand__ResultVar_9)), ((MR_Box) (check_hlds__try_expand__V_61_61)));
                                }
#line 678 "try_expand.m"
                                if (check_hlds__try_expand__succeeded)
#line 678 "try_expand.m"
                                  {
#line 684 "try_expand.m"
                                    check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 678 "try_expand.m"
                                    if (check_hlds__try_expand__succeeded)
#line 678 "try_expand.m"
                                      {
#line 685 "try_expand.m"
                                        check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__Switch_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_41, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 685 "try_expand.m"
                                        if (check_hlds__try_expand__succeeded)
#line 685 "try_expand.m"
                                          {
#line 685 "try_expand.m"
                                            check_hlds__try_expand__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_41, (MR_Integer) 1)));
#line 685 "try_expand.m"
                                            check_hlds__try_expand__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_41, (MR_Integer) 2)));
#line 685 "try_expand.m"
                                            check_hlds__try_expand__Cases_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_41, (MR_Integer) 3)));
#line 3224 "check_hlds.try_expand.c"
                                            check_hlds__try_expand__TypeInfo_42_64 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
#line 685 "try_expand.m"
                                            {
#line 685 "try_expand.m"
                                              check_hlds__try_expand__succeeded = mercury__builtin__unify_2_p_0(check_hlds__try_expand__TypeInfo_42_64, ((MR_Box) (check_hlds__try_expand__ResultVar_9)), ((MR_Box) (check_hlds__try_expand__V_62_62)));
                                            }
#line 678 "try_expand.m"
                                            if (check_hlds__try_expand__succeeded)
#line 678 "try_expand.m"
                                              {
#line 685 "try_expand.m"
                                                check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_58_58 == (MR_Integer) 1);
#line 678 "try_expand.m"
                                                if (check_hlds__try_expand__succeeded)
#line 678 "try_expand.m"
                                                  {
#line 687 "try_expand.m"
                                                    {
#line 687 "try_expand.m"
                                                      check_hlds__try_expand__V_59_59 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
                                                    }
#line 687 "try_expand.m"
                                                    {
#line 687 "try_expand.m"
                                                      check_hlds__try_expand__lookup_case_goal_3_p_0(check_hlds__try_expand__Cases_48, check_hlds__try_expand__V_59_59, &check_hlds__try_expand__SucceededGoal_49);
                                                    }
#line 688 "try_expand.m"
                                                    {
#line 688 "try_expand.m"
                                                      check_hlds__try_expand__succeeded = check_hlds__try_expand__extract_from_succeeded_goal_5_p_0(check_hlds__try_expand__ModuleInfo_8, check_hlds__try_expand__SucceededGoal_49, &check_hlds__try_expand__GoalPrime_15, &check_hlds__try_expand__ThenPrime_16, &check_hlds__try_expand__MaybeElsePrime_17);
                                                    }
#line 678 "try_expand.m"
                                                    if (check_hlds__try_expand__succeeded)
#line 678 "try_expand.m"
                                                      {
#line 691 "try_expand.m"
                                                        {
#line 691 "try_expand.m"
                                                          check_hlds__try_expand__V_60_60 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
                                                        }
#line 691 "try_expand.m"
                                                        {
#line 691 "try_expand.m"
                                                          check_hlds__try_expand__lookup_case_goal_3_p_0(check_hlds__try_expand__Cases_48, check_hlds__try_expand__V_60_60, &check_hlds__try_expand__ExcpHandlingPrime_18);
                                                        }
#line 691 "try_expand.m"
                                                        check_hlds__try_expand__succeeded = MR_TRUE;
#line 678 "try_expand.m"
                                                      }
#line 678 "try_expand.m"
                                                  }
#line 678 "try_expand.m"
                                              }
#line 685 "try_expand.m"
                                          }
#line 678 "try_expand.m"
                                      }
#line 678 "try_expand.m"
                                  }
#line 684 "try_expand.m"
                              }
#line 684 "try_expand.m"
                          }
#line 678 "try_expand.m"
                      }
#line 683 "try_expand.m"
                  }
#line 681 "try_expand.m"
              }
#line 678 "try_expand.m"
          }
#line 679 "try_expand.m"
      }
#line 655 "try_expand.m"
    if (check_hlds__try_expand__succeeded)
#line 651 "try_expand.m"
      {
#line 651 "try_expand.m"
        *check_hlds__try_expand__Goal_11 = check_hlds__try_expand__GoalPrime_15;
#line 652 "try_expand.m"
        *check_hlds__try_expand__Then_12 = check_hlds__try_expand__ThenPrime_16;
#line 653 "try_expand.m"
        *check_hlds__try_expand__MaybeElse_13 = check_hlds__try_expand__MaybeElsePrime_17;
#line 654 "try_expand.m"
        *check_hlds__try_expand__ExcpHandling_14 = check_hlds__try_expand__ExcpHandlingPrime_18;
#line 651 "try_expand.m"
      }
#line 655 "try_expand.m"
    else
#line 669 "try_expand.m"
      {
#line 669 "try_expand.m"
        MR_Word check_hlds__try_expand__GoalPrime_26;
#line 669 "try_expand.m"
        MR_Word check_hlds__try_expand__ThenPrime_27;
#line 669 "try_expand.m"
        MR_Word check_hlds__try_expand__MaybeElsePrime_28;
#line 669 "try_expand.m"
        MR_Word check_hlds__try_expand__ExcpHandlingPrime_29;
#line 660 "try_expand.m"
        MR_Word check_hlds__try_expand__ScopedGoal_20;
#line 660 "try_expand.m"
        MR_Word check_hlds__try_expand__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 0)));
#line 660 "try_expand.m"
        MR_Word check_hlds__try_expand__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 1)));
#line 660 "try_expand.m"
        MR_Word check_hlds__try_expand__V_19_19;

#line 660 "try_expand.m"
        check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_22_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_22_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 660 "try_expand.m"
        if (check_hlds__try_expand__succeeded)
#line 660 "try_expand.m"
          {
#line 660 "try_expand.m"
            check_hlds__try_expand__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_22_22, (MR_Integer) 1)));
#line 660 "try_expand.m"
            check_hlds__try_expand__ScopedGoal_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_22_22, (MR_Integer) 2)));
#line 661 "try_expand.m"
            {
#line 661 "try_expand.m"
              check_hlds__try_expand__succeeded = check_hlds__try_expand__extract_intermediate_goal_parts_2_7_p_0(check_hlds__try_expand__ModuleInfo_8, check_hlds__try_expand__ResultVar_9, check_hlds__try_expand__ScopedGoal_20, &check_hlds__try_expand__GoalPrime_26, &check_hlds__try_expand__ThenPrime_27, &check_hlds__try_expand__MaybeElsePrime_28, &check_hlds__try_expand__ExcpHandlingPrime_29);
            }
#line 660 "try_expand.m"
          }
#line 669 "try_expand.m"
        if (check_hlds__try_expand__succeeded)
#line 665 "try_expand.m"
          {
#line 665 "try_expand.m"
            *check_hlds__try_expand__Goal_11 = check_hlds__try_expand__GoalPrime_26;
#line 666 "try_expand.m"
            *check_hlds__try_expand__Then_12 = check_hlds__try_expand__ThenPrime_27;
#line 667 "try_expand.m"
            *check_hlds__try_expand__MaybeElse_13 = check_hlds__try_expand__MaybeElsePrime_28;
#line 668 "try_expand.m"
            *check_hlds__try_expand__ExcpHandling_14 = check_hlds__try_expand__ExcpHandlingPrime_29;
#line 665 "try_expand.m"
          }
#line 669 "try_expand.m"
        else
#line 670 "try_expand.m"
          {
#line 670 "try_expand.m"
            {
#line 670 "try_expand.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.extract_intermediate_goal_parts\'/7", (MR_String) "unexpected goal form");
#line 670 "try_expand.m"
              return;
            }
#line 670 "try_expand.m"
          }
#line 669 "try_expand.m"
      }
#line 655 "try_expand.m"
  }
#line 640 "try_expand.m"
}

#line 525 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goal_2_15_p_0(
#line 525 "try_expand.m"
  MR_Word check_hlds__try_expand__MaybeIO_16,
#line 525 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_17,
#line 525 "try_expand.m"
  MR_Word check_hlds__try_expand__Goal1_18,
#line 525 "try_expand.m"
  MR_Word check_hlds__try_expand__Then1_19,
#line 525 "try_expand.m"
  MR_Word check_hlds__try_expand__MaybeElse1_20,
#line 525 "try_expand.m"
  MR_Word check_hlds__try_expand__ExcpHandling1_21,
#line 525 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap_22,
#line 525 "try_expand.m"
  MR_Word check_hlds__try_expand__GoalOutputVarsSet_23,
#line 525 "try_expand.m"
  MR_Word * check_hlds__try_expand__FinalGoal_24,
#line 525 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_62,
#line 525 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_PredInfo_63,
#line 525 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_64,
#line 525 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_65,
#line 525 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_66,
#line 525 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_67)
#line 525 "try_expand.m"
{
#line 533 "try_expand.m"
  {
#line 533 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalOutputVars_29;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalOutputVarTypes_30;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__OutputTupleType_31;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__RealResultVarType_32;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaVar_33;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__AssignLambdaVar_34;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalInfo1_36;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalPurity_37;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalContext_38;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__CallTryGoal_42;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__Then_44;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__ExcpHandling_46;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalInfo_47;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__TmpTupleVar_48;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__TupleVar_49;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__DeconstructSucceeded_50;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__TupleArgInsts_51;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__CastOutputTuple_52;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__DeconstructOutputs_53;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__DeconstructsThen_54;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__SucceededCase_55;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__ExceptionCase_56;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__MaybeFailedCase_59;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__Cases_60;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__ResultSwitch_61;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_VarTypes_68_68;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__V_70_70;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__V_71_71;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__V_73_73;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_VarTypes_76_76;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_77_77;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_78_78;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_92_92;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_105_105;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__V_110_110;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__V_111_111;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__V_113_113;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__V_114_114;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__V_115_115;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__V_116_116;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__V_118_118;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__V_120_120;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__V_125_125;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__V_126_126;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__V_128_128;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__V_129_129;
#line 533 "try_expand.m"
    MR_Word check_hlds__try_expand__V_130_130;
#line 553 "try_expand.m"
    MR_Word check_hlds__try_expand__V_35_35;

#line 536 "try_expand.m"
    {
#line 536 "try_expand.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_64, &check_hlds__try_expand__STATE_VARIABLE_VarTypes_68_68);
    }
#line 537 "try_expand.m"
    {
#line 537 "try_expand.m"
      check_hlds__try_expand__GoalOutputVars_29 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__try_expand__GoalOutputVarsSet_23);
    }
#line 538 "try_expand.m"
    {
#line 538 "try_expand.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__try_expand__STATE_VARIABLE_VarTypes_68_68, check_hlds__try_expand__GoalOutputVars_29, &check_hlds__try_expand__GoalOutputVarTypes_30);
    }
#line 539 "try_expand.m"
    {
#line 539 "try_expand.m"
      check_hlds__try_expand__OutputTupleType_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 539 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__OutputTupleType_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 539 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__OutputTupleType_31, 1) = ((MR_Box) (check_hlds__try_expand__GoalOutputVarTypes_30));
#line 539 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__OutputTupleType_31, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 539 "try_expand.m"
    }
#line 544 "try_expand.m"
    {
#line 544 "try_expand.m"
      check_hlds__try_expand__V_71_71 = mdbcomp__prim_data__mercury_exception_module_0_f_0();
    }
#line 544 "try_expand.m"
    {
#line 544 "try_expand.m"
      check_hlds__try_expand__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_70_70, 0) = ((MR_Box) (check_hlds__try_expand__V_71_71));
#line 544 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_70_70, 1) = ((MR_Box) ((MR_String) "exception_result"));
#line 544 "try_expand.m"
    }
#line 545 "try_expand.m"
    {
#line 545 "try_expand.m"
      check_hlds__try_expand__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 545 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_73_73, 0) = ((MR_Box) (check_hlds__try_expand__OutputTupleType_31));
#line 545 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 545 "try_expand.m"
    }
#line 543 "try_expand.m"
    {
#line 543 "try_expand.m"
      check_hlds__try_expand__RealResultVarType_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 543 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__RealResultVarType_32, 0) = ((MR_Box) (check_hlds__try_expand__V_70_70));
#line 543 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__RealResultVarType_32, 1) = ((MR_Box) (check_hlds__try_expand__V_73_73));
#line 543 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__RealResultVarType_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 543 "try_expand.m"
    }
#line 546 "try_expand.m"
    {
#line 546 "try_expand.m"
      parse_tree__prog_data__update_var_type_4_p_0(check_hlds__try_expand__ResultVar_17, check_hlds__try_expand__RealResultVarType_32, check_hlds__try_expand__STATE_VARIABLE_VarTypes_68_68, &check_hlds__try_expand__STATE_VARIABLE_VarTypes_76_76);
    }
#line 547 "try_expand.m"
    {
#line 547 "try_expand.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__try_expand__STATE_VARIABLE_VarTypes_76_76, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_64, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_77_77);
    }
#line 550 "try_expand.m"
    {
#line 550 "try_expand.m"
      check_hlds__try_expand__make_try_lambda_8_p_0(check_hlds__try_expand__Goal1_18, check_hlds__try_expand__GoalOutputVarsSet_23, check_hlds__try_expand__OutputTupleType_31, check_hlds__try_expand__MaybeIO_16, &check_hlds__try_expand__LambdaVar_33, &check_hlds__try_expand__AssignLambdaVar_34, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_77_77, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_78_78);
    }
#line 553 "try_expand.m"
    check_hlds__try_expand__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal1_18, (MR_Integer) 0)));
#line 553 "try_expand.m"
    check_hlds__try_expand__GoalInfo1_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal1_18, (MR_Integer) 1)));
#line 554 "try_expand.m"
    {
#line 554 "try_expand.m"
      check_hlds__try_expand__GoalPurity_37 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__try_expand__GoalInfo1_36);
    }
#line 555 "try_expand.m"
    {
#line 555 "try_expand.m"
      check_hlds__try_expand__GoalContext_38 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__try_expand__GoalInfo1_36);
    }
#line 594 "try_expand.m"
    if ((check_hlds__try_expand__MaybeIO_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 595 "try_expand.m"
      {
#line 596 "try_expand.m"
        {
#line 596 "try_expand.m"
          check_hlds__try_expand__make_try_call_14_p_0((MR_String) "try", check_hlds__try_expand__LambdaVar_33, check_hlds__try_expand__ResultVar_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__OutputTupleType_31, check_hlds__try_expand__GoalPurity_37, check_hlds__try_expand__GoalContext_38, &check_hlds__try_expand__CallTryGoal_42, check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_62, check_hlds__try_expand__STATE_VARIABLE_PredInfo_63, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_78_78, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_92_92, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_66, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_67);
        }
#line 599 "try_expand.m"
        check_hlds__try_expand__Then_44 = check_hlds__try_expand__Then1_19;
#line 600 "try_expand.m"
        check_hlds__try_expand__ExcpHandling_46 = check_hlds__try_expand__ExcpHandling1_21;
#line 595 "try_expand.m"
      }
#line 594 "try_expand.m"
    else
#line 558 "try_expand.m"
      {
#line 558 "try_expand.m"
        MR_Word check_hlds__try_expand__TypeInfo_133_133;
#line 558 "try_expand.m"
        MR_Word check_hlds__try_expand__GoalInitialIOVar_39;
#line 558 "try_expand.m"
        MR_Word check_hlds__try_expand__GoalFinalIOVar_40;
#line 558 "try_expand.m"
        MR_Word check_hlds__try_expand__TryIOOutputVar_41;
#line 558 "try_expand.m"
        MR_Word check_hlds__try_expand__UnifyThenInitialIOVar_43;
#line 558 "try_expand.m"
        MR_Word check_hlds__try_expand__RenamingExcp_45;
#line 558 "try_expand.m"
        MR_Word check_hlds__try_expand__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeIO_16, (MR_Integer) 0)));
#line 558 "try_expand.m"
        MR_Word check_hlds__try_expand__V_85_85;
#line 558 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_87_87;
#line 558 "try_expand.m"
        MR_Word check_hlds__try_expand__V_90_90;
#line 558 "try_expand.m"
        MR_Word check_hlds__try_expand__V_94_94;
#line 558 "try_expand.m"
        MR_Word check_hlds__try_expand__V_96_96;
#line 558 "try_expand.m"
        MR_Word check_hlds__try_expand__V_97_97;
#line 558 "try_expand.m"
        MR_Word check_hlds__try_expand__V_101_101;
#line 558 "try_expand.m"
        MR_Word check_hlds__try_expand__V_102_102;

#line 558 "try_expand.m"
        check_hlds__try_expand__GoalInitialIOVar_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_84_84, (MR_Integer) 0)));
#line 558 "try_expand.m"
        check_hlds__try_expand__GoalFinalIOVar_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_84_84, (MR_Integer) 1)));
#line 580 "try_expand.m"
        {
#line 580 "try_expand.m"
          check_hlds__try_expand__V_85_85 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
        }
#line 580 "try_expand.m"
        {
#line 580 "try_expand.m"
          hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(check_hlds__try_expand__V_85_85, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[0]), &check_hlds__try_expand__TryIOOutputVar_41, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_78_78, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_87_87);
        }
#line 583 "try_expand.m"
        {
#line 583 "try_expand.m"
          check_hlds__try_expand__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 583 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_94_94, 0) = ((MR_Box) (check_hlds__try_expand__TryIOOutputVar_41));
#line 583 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 583 "try_expand.m"
        }
#line 583 "try_expand.m"
        {
#line 583 "try_expand.m"
          check_hlds__try_expand__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 583 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_90_90, 0) = ((MR_Box) (check_hlds__try_expand__GoalInitialIOVar_39));
#line 583 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_90_90, 1) = ((MR_Box) (check_hlds__try_expand__V_94_94));
#line 583 "try_expand.m"
        }
#line 582 "try_expand.m"
        {
#line 582 "try_expand.m"
          check_hlds__try_expand__make_try_call_14_p_0((MR_String) "try_io", check_hlds__try_expand__LambdaVar_33, check_hlds__try_expand__ResultVar_17, check_hlds__try_expand__V_90_90, check_hlds__try_expand__OutputTupleType_31, check_hlds__try_expand__GoalPurity_37, check_hlds__try_expand__GoalContext_38, &check_hlds__try_expand__CallTryGoal_42, check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_62, check_hlds__try_expand__STATE_VARIABLE_PredInfo_63, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_87_87, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_92_92, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_66, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_67);
        }
#line 587 "try_expand.m"
        {
#line 587 "try_expand.m"
          check_hlds__try_expand__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 587 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_96_96, 0) = ((MR_Box) (check_hlds__try_expand__TryIOOutputVar_41));
#line 587 "try_expand.m"
        }
#line 587 "try_expand.m"
        {
#line 587 "try_expand.m"
          check_hlds__try_expand__V_97_97 = mercury__term__context_init_0_f_0();
        }
#line 586 "try_expand.m"
        {
#line 586 "try_expand.m"
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__try_expand__GoalFinalIOVar_40, check_hlds__try_expand__V_96_96, check_hlds__try_expand__V_97_97, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__try_expand_scalar_common_6[1]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__try_expand__UnifyThenInitialIOVar_43);
        }
#line 589 "try_expand.m"
        {
#line 589 "try_expand.m"
          hlds__hlds_goal__conjoin_goals_3_p_0(check_hlds__try_expand__UnifyThenInitialIOVar_43, check_hlds__try_expand__Then1_19, &check_hlds__try_expand__Then_44);
        }
#line 3725 "check_hlds.try_expand.c"
        check_hlds__try_expand__TypeInfo_133_133 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
#line 592 "try_expand.m"
        {
#line 592 "try_expand.m"
          check_hlds__try_expand__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 592 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_102_102, 0) = ((MR_Box) (check_hlds__try_expand__GoalInitialIOVar_39));
#line 592 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_102_102, 1) = ((MR_Box) (check_hlds__try_expand__TryIOOutputVar_41));
#line 592 "try_expand.m"
        }
#line 592 "try_expand.m"
        {
#line 592 "try_expand.m"
          check_hlds__try_expand__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 592 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_101_101, 0) = ((MR_Box) (check_hlds__try_expand__V_102_102));
#line 592 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 592 "try_expand.m"
        }
#line 592 "try_expand.m"
        {
#line 592 "try_expand.m"
          check_hlds__try_expand__RenamingExcp_45 = mercury__map__from_assoc_list_1_f_0(check_hlds__try_expand__TypeInfo_133_133, check_hlds__try_expand__TypeInfo_133_133, check_hlds__try_expand__V_101_101);
        }
#line 593 "try_expand.m"
        {
#line 593 "try_expand.m"
          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(check_hlds__try_expand__RenamingExcp_45, check_hlds__try_expand__ExcpHandling1_21, &check_hlds__try_expand__ExcpHandling_46);
        }
#line 558 "try_expand.m"
      }
#line 603 "try_expand.m"
    {
#line 603 "try_expand.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__try_expand__GoalInfo_47);
    }
#line 606 "try_expand.m"
    {
#line 606 "try_expand.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(check_hlds__try_expand__OutputTupleType_31, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[2]), &check_hlds__try_expand__TmpTupleVar_48, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_92_92, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_105_105);
    }
#line 608 "try_expand.m"
    {
#line 608 "try_expand.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(check_hlds__try_expand__OutputTupleType_31, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[3]), &check_hlds__try_expand__TupleVar_49, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_105_105, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_65);
    }
#line 610 "try_expand.m"
    {
#line 610 "try_expand.m"
      check_hlds__try_expand__V_110_110 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
    }
#line 610 "try_expand.m"
    {
#line 610 "try_expand.m"
      check_hlds__try_expand__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 610 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_111_111, 0) = ((MR_Box) (check_hlds__try_expand__TmpTupleVar_48));
#line 610 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 610 "try_expand.m"
    }
#line 610 "try_expand.m"
    {
#line 610 "try_expand.m"
      hlds__make_goal__deconstruct_functor_4_p_0(check_hlds__try_expand__ResultVar_17, check_hlds__try_expand__V_110_110, check_hlds__try_expand__V_111_111, &check_hlds__try_expand__DeconstructSucceeded_50);
    }
#line 612 "try_expand.m"
    {
#line 612 "try_expand.m"
      hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__try_expand__Instmap_22, check_hlds__try_expand__GoalOutputVars_29, &check_hlds__try_expand__TupleArgInsts_51);
    }
#line 613 "try_expand.m"
    {
#line 613 "try_expand.m"
      check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0(check_hlds__try_expand__TmpTupleVar_48, check_hlds__try_expand__TupleVar_49, check_hlds__try_expand__TupleArgInsts_51, &check_hlds__try_expand__CastOutputTuple_52);
    }
#line 615 "try_expand.m"
    {
#line 615 "try_expand.m"
      hlds__make_goal__deconstruct_tuple_3_p_0(check_hlds__try_expand__TupleVar_49, check_hlds__try_expand__GoalOutputVars_29, &check_hlds__try_expand__DeconstructOutputs_53);
    }
#line 617 "try_expand.m"
    {
#line 617 "try_expand.m"
      check_hlds__try_expand__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_116_116, 0) = ((MR_Box) (check_hlds__try_expand__Then_44));
#line 617 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 617 "try_expand.m"
    }
#line 617 "try_expand.m"
    {
#line 617 "try_expand.m"
      check_hlds__try_expand__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_115_115, 0) = ((MR_Box) (check_hlds__try_expand__DeconstructOutputs_53));
#line 617 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_115_115, 1) = ((MR_Box) (check_hlds__try_expand__V_116_116));
#line 617 "try_expand.m"
    }
#line 616 "try_expand.m"
    {
#line 616 "try_expand.m"
      check_hlds__try_expand__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_114_114, 0) = ((MR_Box) (check_hlds__try_expand__CastOutputTuple_52));
#line 616 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_114_114, 1) = ((MR_Box) (check_hlds__try_expand__V_115_115));
#line 616 "try_expand.m"
    }
#line 616 "try_expand.m"
    {
#line 616 "try_expand.m"
      check_hlds__try_expand__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_113_113, 0) = ((MR_Box) (check_hlds__try_expand__DeconstructSucceeded_50));
#line 616 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_113_113, 1) = ((MR_Box) (check_hlds__try_expand__V_114_114));
#line 616 "try_expand.m"
    }
#line 616 "try_expand.m"
    {
#line 616 "try_expand.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__try_expand__V_113_113, check_hlds__try_expand__GoalInfo_47, &check_hlds__try_expand__DeconstructsThen_54);
    }
#line 618 "try_expand.m"
    {
#line 618 "try_expand.m"
      check_hlds__try_expand__V_118_118 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
    }
#line 618 "try_expand.m"
    {
#line 618 "try_expand.m"
      check_hlds__try_expand__SucceededCase_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 618 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__SucceededCase_55, 0) = ((MR_Box) (check_hlds__try_expand__V_118_118));
#line 618 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__SucceededCase_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 618 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__SucceededCase_55, 2) = ((MR_Box) (check_hlds__try_expand__DeconstructsThen_54));
#line 618 "try_expand.m"
    }
#line 621 "try_expand.m"
    {
#line 621 "try_expand.m"
      check_hlds__try_expand__V_120_120 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
    }
#line 621 "try_expand.m"
    {
#line 621 "try_expand.m"
      check_hlds__try_expand__ExceptionCase_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 621 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__ExceptionCase_56, 0) = ((MR_Box) (check_hlds__try_expand__V_120_120));
#line 621 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__ExceptionCase_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 621 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__ExceptionCase_56, 2) = ((MR_Box) (check_hlds__try_expand__ExcpHandling_46));
#line 621 "try_expand.m"
    }
#line 628 "try_expand.m"
    if ((check_hlds__try_expand__MaybeElse1_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 630 "try_expand.m"
      check_hlds__try_expand__MaybeFailedCase_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 628 "try_expand.m"
    else
#line 625 "try_expand.m"
      {
#line 625 "try_expand.m"
        MR_Word check_hlds__try_expand__Else1_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeElse1_20, (MR_Integer) 0)));
#line 625 "try_expand.m"
        MR_Word check_hlds__try_expand__FailedCase_58;
#line 625 "try_expand.m"
        MR_Word check_hlds__try_expand__V_122_122;

#line 626 "try_expand.m"
        {
#line 626 "try_expand.m"
          check_hlds__try_expand__V_122_122 = parse_tree__builtin_lib_types__exception_failed_functor_0_f_0();
        }
#line 626 "try_expand.m"
        {
#line 626 "try_expand.m"
          check_hlds__try_expand__FailedCase_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 626 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__FailedCase_58, 0) = ((MR_Box) (check_hlds__try_expand__V_122_122));
#line 626 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__FailedCase_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 626 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__FailedCase_58, 2) = ((MR_Box) (check_hlds__try_expand__Else1_57));
#line 626 "try_expand.m"
        }
#line 627 "try_expand.m"
        {
#line 627 "try_expand.m"
          check_hlds__try_expand__MaybeFailedCase_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 627 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeFailedCase_59, 0) = ((MR_Box) (check_hlds__try_expand__FailedCase_58));
#line 627 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeFailedCase_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 627 "try_expand.m"
        }
#line 625 "try_expand.m"
      }
#line 633 "try_expand.m"
    {
#line 633 "try_expand.m"
      check_hlds__try_expand__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 633 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_125_125, 0) = ((MR_Box) (check_hlds__try_expand__ExceptionCase_56));
#line 633 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_125_125, 1) = ((MR_Box) (check_hlds__try_expand__MaybeFailedCase_59));
#line 633 "try_expand.m"
    }
#line 633 "try_expand.m"
    {
#line 633 "try_expand.m"
      check_hlds__try_expand__Cases_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 633 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__Cases_60, 0) = ((MR_Box) (check_hlds__try_expand__SucceededCase_55));
#line 633 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__Cases_60, 1) = ((MR_Box) (check_hlds__try_expand__V_125_125));
#line 633 "try_expand.m"
    }
#line 634 "try_expand.m"
    {
#line 634 "try_expand.m"
      check_hlds__try_expand__V_126_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 634 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_126_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 634 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_126_126, 1) = ((MR_Box) (check_hlds__try_expand__ResultVar_17));
#line 634 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_126_126, 2) = ((MR_Box) ((MR_Integer) 1));
#line 634 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_126_126, 3) = ((MR_Box) (check_hlds__try_expand__Cases_60));
#line 634 "try_expand.m"
    }
#line 634 "try_expand.m"
    {
#line 634 "try_expand.m"
      check_hlds__try_expand__ResultSwitch_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 634 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__ResultSwitch_61, 0) = ((MR_Box) (check_hlds__try_expand__V_126_126));
#line 634 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__ResultSwitch_61, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo_47));
#line 634 "try_expand.m"
    }
#line 635 "try_expand.m"
    {
#line 635 "try_expand.m"
      check_hlds__try_expand__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 635 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_130_130, 0) = ((MR_Box) (check_hlds__try_expand__ResultSwitch_61));
#line 635 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 635 "try_expand.m"
    }
#line 635 "try_expand.m"
    {
#line 635 "try_expand.m"
      check_hlds__try_expand__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 635 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_129_129, 0) = ((MR_Box) (check_hlds__try_expand__CallTryGoal_42));
#line 635 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_129_129, 1) = ((MR_Box) (check_hlds__try_expand__V_130_130));
#line 635 "try_expand.m"
    }
#line 635 "try_expand.m"
    {
#line 635 "try_expand.m"
      check_hlds__try_expand__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 635 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_128_128, 0) = ((MR_Box) (check_hlds__try_expand__AssignLambdaVar_34));
#line 635 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_128_128, 1) = ((MR_Box) (check_hlds__try_expand__V_129_129));
#line 635 "try_expand.m"
    }
#line 635 "try_expand.m"
    {
#line 635 "try_expand.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__try_expand__V_128_128, check_hlds__try_expand__GoalInfo_47, check_hlds__try_expand__FinalGoal_24);
#line 635 "try_expand.m"
      return;
    }
#line 533 "try_expand.m"
  }
#line 525 "try_expand.m"
}

#line 800 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand__expand_try_goal_5_p_0_1(
#line 800 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 800 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1)
#line 800 "try_expand.m"
{
#line 800 "try_expand.m"
  {
#line 800 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 800 "try_expand.m"
    MR_Box check_hlds__try_expand__closure = check_hlds__try_expand__closure_arg;

#line 800 "try_expand.m"
    {
#line 800 "try_expand.m"
      return check_hlds__try_expand__succeeded = hlds__instmap__var_is_bound_in_instmap_delta_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__try_expand__wrapper_arg_1));
    }
#line 800 "try_expand.m"
    return check_hlds__try_expand__succeeded;
#line 800 "try_expand.m"
  }
#line 800 "try_expand.m"
}

#line 482 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goal_5_p_0(
#line 482 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap_6,
#line 482 "try_expand.m"
  MR_Word check_hlds__try_expand__TryGoal_7,
#line 482 "try_expand.m"
  MR_Word * check_hlds__try_expand__FinalGoal_8,
#line 482 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_33,
#line 482 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_34)
#line 482 "try_expand.m"
{
#line 485 "try_expand.m"
  {
#line 485 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__MaybeIO_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__TryGoal_7, (MR_Integer) 0)));
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__ResultVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__TryGoal_7, (MR_Integer) 1)));
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__IntermediateGoal_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__TryGoal_7, (MR_Integer) 2)));
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__Goal0_13;
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__Then0_14;
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__MaybeElse0_15;
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__ExcpHandling0_16;
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__Goal1_17;
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__InstmapAfterGoal_18;
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__Then1_19;
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__MaybeElse1_22;
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__ExcpHandling1_23;
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalOutputVarsSet0_24;
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalOutputVarsSet_27;
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_0_33, (MR_Integer) 0)));
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_36_36;
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_37_37;
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_38_38;
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_39_39;
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__V_40_40;
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_42_42;
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_43_43;
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44;
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_45_45;
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_46_46;
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_47_47;
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalInfo_62;
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__NonLocals_63;
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__InstmapDelta_64;
#line 485 "try_expand.m"
    MR_Word check_hlds__try_expand__V_65_65;
#line 487 "try_expand.m"
    MR_Word check_hlds__try_expand__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_0_33, (MR_Integer) 1)));
#line 487 "try_expand.m"
    MR_Word check_hlds__try_expand__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_0_33, (MR_Integer) 2)));
#line 487 "try_expand.m"
    MR_Word check_hlds__try_expand__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_0_33, (MR_Integer) 3)));
#line 506 "try_expand.m"
    MR_Word check_hlds__try_expand__V_53_53;
#line 506 "try_expand.m"
    MR_Word check_hlds__try_expand__V_54_54;
#line 506 "try_expand.m"
    MR_Word check_hlds__try_expand__V_55_55;
#line 796 "try_expand.m"
    MR_Word check_hlds__try_expand__V_61_61;
#line 518 "try_expand.m"
    MR_Word check_hlds__try_expand__V_32_32;

#line 487 "try_expand.m"
    {
#line 487 "try_expand.m"
      check_hlds__try_expand__extract_intermediate_goal_parts_7_p_0(check_hlds__try_expand__V_35_35, check_hlds__try_expand__ResultVar_11, check_hlds__try_expand__IntermediateGoal_12, &check_hlds__try_expand__Goal0_13, &check_hlds__try_expand__Then0_14, &check_hlds__try_expand__MaybeElse0_15, &check_hlds__try_expand__ExcpHandling0_16);
    }
#line 491 "try_expand.m"
    {
#line 491 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Goal0_13, &check_hlds__try_expand__Goal1_17, check_hlds__try_expand__STATE_VARIABLE_Info_0_33, &check_hlds__try_expand__STATE_VARIABLE_Info_36_36);
    }
#line 492 "try_expand.m"
    {
#line 492 "try_expand.m"
      hlds__goal_util__update_instmap_3_p_0(check_hlds__try_expand__Goal0_13, check_hlds__try_expand__Instmap_6, &check_hlds__try_expand__InstmapAfterGoal_18);
    }
#line 493 "try_expand.m"
    {
#line 493 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__InstmapAfterGoal_18, check_hlds__try_expand__Then0_14, &check_hlds__try_expand__Then1_19, check_hlds__try_expand__STATE_VARIABLE_Info_36_36, &check_hlds__try_expand__STATE_VARIABLE_Info_37_37);
    }
#line 498 "try_expand.m"
    if ((check_hlds__try_expand__MaybeElse0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 499 "try_expand.m"
      {
#line 500 "try_expand.m"
        check_hlds__try_expand__MaybeElse1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 500 "try_expand.m"
        check_hlds__try_expand__STATE_VARIABLE_Info_38_38 = check_hlds__try_expand__STATE_VARIABLE_Info_37_37;
#line 499 "try_expand.m"
      }
#line 498 "try_expand.m"
    else
#line 495 "try_expand.m"
      {
#line 495 "try_expand.m"
        MR_Word check_hlds__try_expand__Else0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeElse0_15, (MR_Integer) 0)));
#line 495 "try_expand.m"
        MR_Word check_hlds__try_expand__Else1_21;

#line 496 "try_expand.m"
        {
#line 496 "try_expand.m"
          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Else0_20, &check_hlds__try_expand__Else1_21, check_hlds__try_expand__STATE_VARIABLE_Info_37_37, &check_hlds__try_expand__STATE_VARIABLE_Info_38_38);
        }
#line 497 "try_expand.m"
        {
#line 497 "try_expand.m"
          check_hlds__try_expand__MaybeElse1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 497 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeElse1_22, 0) = ((MR_Box) (check_hlds__try_expand__Else1_21));
#line 497 "try_expand.m"
        }
#line 495 "try_expand.m"
      }
#line 502 "try_expand.m"
    {
#line 502 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__ExcpHandling0_16, &check_hlds__try_expand__ExcpHandling1_23, check_hlds__try_expand__STATE_VARIABLE_Info_38_38, &check_hlds__try_expand__STATE_VARIABLE_Info_39_39);
    }
#line 506 "try_expand.m"
    check_hlds__try_expand__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
#line 506 "try_expand.m"
    check_hlds__try_expand__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
#line 506 "try_expand.m"
    check_hlds__try_expand__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
#line 506 "try_expand.m"
    check_hlds__try_expand__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
#line 796 "try_expand.m"
    check_hlds__try_expand__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_13, (MR_Integer) 0)));
#line 796 "try_expand.m"
    check_hlds__try_expand__GoalInfo_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_13, (MR_Integer) 1)));
#line 797 "try_expand.m"
    {
#line 797 "try_expand.m"
      check_hlds__try_expand__NonLocals_63 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__try_expand__GoalInfo_62);
    }
#line 798 "try_expand.m"
    {
#line 798 "try_expand.m"
      check_hlds__try_expand__InstmapDelta_64 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__try_expand__GoalInfo_62);
    }
#line 800 "try_expand.m"
    {
#line 800 "try_expand.m"
      check_hlds__try_expand__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 800 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 0) = ((MR_Box) (&check_hlds__try_expand_scalar_common_5[0]));
#line 800 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 1) = ((MR_Box) (check_hlds__try_expand__expand_try_goal_5_p_0_1));
#line 800 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 800 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 3) = ((MR_Box) (check_hlds__try_expand__V_40_40));
#line 800 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 4) = ((MR_Box) (check_hlds__try_expand__Instmap_6));
#line 800 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 5) = ((MR_Box) (check_hlds__try_expand__InstmapDelta_64));
#line 800 "try_expand.m"
    }
#line 799 "try_expand.m"
    {
#line 799 "try_expand.m"
      check_hlds__try_expand__GoalOutputVarsSet0_24 = parse_tree__set_of_var__filter_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__try_expand__V_65_65, check_hlds__try_expand__NonLocals_63);
    }
#line 512 "try_expand.m"
    if ((check_hlds__try_expand__MaybeIO_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 514 "try_expand.m"
      check_hlds__try_expand__GoalOutputVarsSet_27 = check_hlds__try_expand__GoalOutputVarsSet0_24;
#line 512 "try_expand.m"
    else
#line 509 "try_expand.m"
      {
#line 509 "try_expand.m"
        MR_Word check_hlds__try_expand__IOStateVarFinal_26;
#line 509 "try_expand.m"
        MR_Word check_hlds__try_expand__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeIO_10, (MR_Integer) 0)));
#line 509 "try_expand.m"
        MR_Word check_hlds__try_expand___IOStateVarInitial_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_41_41, (MR_Integer) 0)));

#line 509 "try_expand.m"
        check_hlds__try_expand__IOStateVarFinal_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_41_41, (MR_Integer) 1)));
#line 510 "try_expand.m"
        {
#line 510 "try_expand.m"
          parse_tree__set_of_var__delete_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__try_expand__IOStateVarFinal_26, check_hlds__try_expand__GoalOutputVarsSet0_24, &check_hlds__try_expand__GoalOutputVarsSet_27);
        }
#line 509 "try_expand.m"
      }
#line 518 "try_expand.m"
    check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
#line 518 "try_expand.m"
    check_hlds__try_expand__STATE_VARIABLE_PredInfo_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
#line 518 "try_expand.m"
    check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
#line 518 "try_expand.m"
    check_hlds__try_expand__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
#line 519 "try_expand.m"
    {
#line 519 "try_expand.m"
      check_hlds__try_expand__expand_try_goal_2_15_p_0(check_hlds__try_expand__MaybeIO_10, check_hlds__try_expand__ResultVar_11, check_hlds__try_expand__Goal1_17, check_hlds__try_expand__Then1_19, check_hlds__try_expand__MaybeElse1_22, check_hlds__try_expand__ExcpHandling1_23, check_hlds__try_expand__InstmapAfterGoal_18, check_hlds__try_expand__GoalOutputVarsSet_27, check_hlds__try_expand__FinalGoal_8, check_hlds__try_expand__STATE_VARIABLE_PredInfo_43_43, &check_hlds__try_expand__STATE_VARIABLE_PredInfo_45_45, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_46_46, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_42_42, &check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_47_47);
    }
#line 522 "try_expand.m"
    {
#line 522 "try_expand.m"
      MR_Word base;
#line 522 "try_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 522 "try_expand.m"
      *check_hlds__try_expand__STATE_VARIABLE_Info_34 = base;
#line 522 "try_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_47_47));
#line 522 "try_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_PredInfo_45_45));
#line 522 "try_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ProcInfo_46_46));
#line 522 "try_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 1));
#line 522 "try_expand.m"
    }
#line 485 "try_expand.m"
  }
#line 482 "try_expand.m"
}

#line 461 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_if_then_else_9_p_0(
#line 461 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap0_10,
#line 461 "try_expand.m"
  MR_Word check_hlds__try_expand__Cond0_11,
#line 461 "try_expand.m"
  MR_Word * check_hlds__try_expand__Cond_12,
#line 461 "try_expand.m"
  MR_Word check_hlds__try_expand__Then0_13,
#line 461 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_14,
#line 461 "try_expand.m"
  MR_Word check_hlds__try_expand__Else0_15,
#line 461 "try_expand.m"
  MR_Word * check_hlds__try_expand__Else_16,
#line 461 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_22,
#line 461 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_23)
#line 461 "try_expand.m"
{
#line 467 "try_expand.m"
  {
#line 467 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 467 "try_expand.m"
    MR_Word check_hlds__try_expand__CondInfo_19;
#line 467 "try_expand.m"
    MR_Word check_hlds__try_expand__CondInstmapDelta_20;
#line 467 "try_expand.m"
    MR_Word check_hlds__try_expand__InstmapAfterCond_21;
#line 467 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_24_24;
#line 467 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_25_25;
#line 470 "try_expand.m"
    MR_Word check_hlds__try_expand__V_18_18;

#line 468 "try_expand.m"
    {
#line 468 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap0_10, check_hlds__try_expand__Cond0_11, check_hlds__try_expand__Cond_12, check_hlds__try_expand__STATE_VARIABLE_Info_0_22, &check_hlds__try_expand__STATE_VARIABLE_Info_24_24);
    }
#line 470 "try_expand.m"
    check_hlds__try_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Cond0_11, (MR_Integer) 0)));
#line 470 "try_expand.m"
    check_hlds__try_expand__CondInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Cond0_11, (MR_Integer) 1)));
#line 471 "try_expand.m"
    {
#line 471 "try_expand.m"
      check_hlds__try_expand__CondInstmapDelta_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__try_expand__CondInfo_19);
    }
#line 472 "try_expand.m"
    {
#line 472 "try_expand.m"
      hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__try_expand__Instmap0_10, check_hlds__try_expand__CondInstmapDelta_20, &check_hlds__try_expand__InstmapAfterCond_21);
    }
#line 473 "try_expand.m"
    {
#line 473 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__InstmapAfterCond_21, check_hlds__try_expand__Then0_13, check_hlds__try_expand__Then_14, check_hlds__try_expand__STATE_VARIABLE_Info_24_24, &check_hlds__try_expand__STATE_VARIABLE_Info_25_25);
    }
#line 475 "try_expand.m"
    {
#line 475 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap0_10, check_hlds__try_expand__Else0_15, check_hlds__try_expand__Else_16, check_hlds__try_expand__STATE_VARIABLE_Info_25_25, check_hlds__try_expand__STATE_VARIABLE_Info_23);
#line 475 "try_expand.m"
      return;
    }
#line 467 "try_expand.m"
  }
#line 461 "try_expand.m"
}

#line 451 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_cases_5_p_0(
#line 451 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 451 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2,
#line 451 "try_expand.m"
  MR_Word * check_hlds__try_expand__HeadVar__3_3,
#line 451 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_4,
#line 451 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_5)
#line 451 "try_expand.m"
{
#line 454 "try_expand.m"
  {
#line 454 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;

#line 454 "try_expand.m"
    if ((check_hlds__try_expand__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 454 "try_expand.m"
      {
#line 454 "try_expand.m"
        *check_hlds__try_expand__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 454 "try_expand.m"
        *check_hlds__try_expand__STATE_VARIABLE_Info_5 = check_hlds__try_expand__STATE_VARIABLE_Info_0_4;
#line 454 "try_expand.m"
      }
#line 454 "try_expand.m"
    else
#line 455 "try_expand.m"
      {
#line 455 "try_expand.m"
        MR_Word check_hlds__try_expand__Case0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 455 "try_expand.m"
        MR_Word check_hlds__try_expand__Cases0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 455 "try_expand.m"
        MR_Word check_hlds__try_expand__Case_13;
#line 455 "try_expand.m"
        MR_Word check_hlds__try_expand__Cases_14;
#line 455 "try_expand.m"
        MR_Word check_hlds__try_expand__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case0_11, (MR_Integer) 0)));
#line 455 "try_expand.m"
        MR_Word check_hlds__try_expand__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case0_11, (MR_Integer) 1)));
#line 455 "try_expand.m"
        MR_Word check_hlds__try_expand__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case0_11, (MR_Integer) 2)));
#line 455 "try_expand.m"
        MR_Word check_hlds__try_expand__Goal_19;
#line 455 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_22_22;

#line 457 "try_expand.m"
        {
#line 457 "try_expand.m"
          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__HeadVar__1_1, check_hlds__try_expand__Goal0_18, &check_hlds__try_expand__Goal_19, check_hlds__try_expand__STATE_VARIABLE_Info_0_4, &check_hlds__try_expand__STATE_VARIABLE_Info_22_22);
        }
#line 458 "try_expand.m"
        {
#line 458 "try_expand.m"
          check_hlds__try_expand__expand_try_goals_in_cases_5_p_0(check_hlds__try_expand__HeadVar__1_1, check_hlds__try_expand__Cases0_12, &check_hlds__try_expand__Cases_14, check_hlds__try_expand__STATE_VARIABLE_Info_22_22, check_hlds__try_expand__STATE_VARIABLE_Info_5);
        }
#line 459 "try_expand.m"
        {
#line 459 "try_expand.m"
          check_hlds__try_expand__Case_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 459 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case_13, 0) = ((MR_Box) (check_hlds__try_expand__MainConsId_16));
#line 459 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case_13, 1) = ((MR_Box) (check_hlds__try_expand__OtherConsIds_17));
#line 459 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case_13, 2) = ((MR_Box) (check_hlds__try_expand__Goal_19));
#line 459 "try_expand.m"
        }
#line 455 "try_expand.m"
        {
#line 455 "try_expand.m"
          MR_Word base;
#line 455 "try_expand.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 455 "try_expand.m"
          *check_hlds__try_expand__HeadVar__3_3 = base;
#line 455 "try_expand.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__try_expand__Case_13));
#line 455 "try_expand.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__try_expand__Cases_14));
#line 455 "try_expand.m"
        }
#line 455 "try_expand.m"
      }
#line 454 "try_expand.m"
  }
#line 451 "try_expand.m"
}

#line 449 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_disj_5_p_0_1(
#line 449 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 449 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 449 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_2,
#line 449 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_3,
#line 449 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_4)
#line 449 "try_expand.m"
{
#line 449 "try_expand.m"
  {
#line 449 "try_expand.m"
    MR_Box check_hlds__try_expand__closure = check_hlds__try_expand__closure_arg;
#line 449 "try_expand.m"
    MR_Word check_hlds__try_expand__conv1_Goal_8;
#line 449 "try_expand.m"
    MR_Word check_hlds__try_expand__conv0_STATE_VARIABLE_Info_93;

#line 449 "try_expand.m"
    {
#line 449 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__try_expand__wrapper_arg_1), &check_hlds__try_expand__conv1_Goal_8, ((MR_Word) check_hlds__try_expand__wrapper_arg_3), &check_hlds__try_expand__conv0_STATE_VARIABLE_Info_93);
    }
#line 449 "try_expand.m"
    *check_hlds__try_expand__wrapper_arg_2 = ((MR_Box) (check_hlds__try_expand__conv1_Goal_8));
#line 449 "try_expand.m"
    *check_hlds__try_expand__wrapper_arg_4 = ((MR_Box) (check_hlds__try_expand__conv0_STATE_VARIABLE_Info_93));
#line 449 "try_expand.m"
  }
#line 449 "try_expand.m"
}

#line 444 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_disj_5_p_0(
#line 444 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap0_6,
#line 444 "try_expand.m"
  MR_Word check_hlds__try_expand__Goals0_7,
#line 444 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goals_8,
#line 444 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_10,
#line 444 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_11)
#line 444 "try_expand.m"
{
#line 448 "try_expand.m"
  {
#line 448 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 448 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeCtorInfo_18_18;
#line 448 "try_expand.m"
    MR_Word check_hlds__try_expand__V_12_12;
#line 449 "try_expand.m"
    MR_Box check_hlds__try_expand__conv2_STATE_VARIABLE_Info_11;

#line 449 "try_expand.m"
    {
#line 449 "try_expand.m"
      check_hlds__try_expand__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 449 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_12_12, 0) = ((MR_Box) (&check_hlds__try_expand_scalar_common_2[1]));
#line 449 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_12_12, 1) = ((MR_Box) (check_hlds__try_expand__expand_try_goals_in_disj_5_p_0_1));
#line 449 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 449 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_12_12, 3) = ((MR_Box) (check_hlds__try_expand__Instmap0_6));
#line 449 "try_expand.m"
    }
#line 4556 "check_hlds.try_expand.c"
    check_hlds__try_expand__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 449 "try_expand.m"
    {
#line 449 "try_expand.m"
      mercury__list__map_foldl_5_p_0(check_hlds__try_expand__TypeCtorInfo_18_18, check_hlds__try_expand__TypeCtorInfo_18_18, (MR_Word) &check_hlds__try_expand__check_hlds__try_expand__type_ctor_info_trys_info_0, check_hlds__try_expand__V_12_12, check_hlds__try_expand__Goals0_7, check_hlds__try_expand__Goals_8, ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_Info_0_10)), &check_hlds__try_expand__conv2_STATE_VARIABLE_Info_11);
    }
#line 449 "try_expand.m"
    *check_hlds__try_expand__STATE_VARIABLE_Info_11 = ((MR_Word) check_hlds__try_expand__conv2_STATE_VARIABLE_Info_11);
#line 448 "try_expand.m"
  }
#line 444 "try_expand.m"
}

#line 432 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_conj_5_p_0(
#line 432 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 432 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2,
#line 432 "try_expand.m"
  MR_Word * check_hlds__try_expand__HeadVar__3_3,
#line 432 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_4,
#line 432 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_5)
#line 432 "try_expand.m"
{
#line 436 "try_expand.m"
  {
#line 436 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;

#line 436 "try_expand.m"
    if ((check_hlds__try_expand__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 436 "try_expand.m"
      {
#line 436 "try_expand.m"
        *check_hlds__try_expand__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 436 "try_expand.m"
        *check_hlds__try_expand__STATE_VARIABLE_Info_5 = check_hlds__try_expand__STATE_VARIABLE_Info_0_4;
#line 436 "try_expand.m"
      }
#line 436 "try_expand.m"
    else
#line 437 "try_expand.m"
      {
#line 437 "try_expand.m"
        MR_Word check_hlds__try_expand__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 437 "try_expand.m"
        MR_Word check_hlds__try_expand__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 437 "try_expand.m"
        MR_Word check_hlds__try_expand__Goal_13;
#line 437 "try_expand.m"
        MR_Word check_hlds__try_expand__Goals_14;
#line 437 "try_expand.m"
        MR_Word check_hlds__try_expand__GoalInfo_17;
#line 437 "try_expand.m"
        MR_Word check_hlds__try_expand__InstmapDelta_18;
#line 437 "try_expand.m"
        MR_Word check_hlds__try_expand__Instmap_19;
#line 437 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_22_22;
#line 439 "try_expand.m"
        MR_Word check_hlds__try_expand__V_16_16;

#line 438 "try_expand.m"
        {
#line 438 "try_expand.m"
          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__HeadVar__1_1, check_hlds__try_expand__Goal0_11, &check_hlds__try_expand__Goal_13, check_hlds__try_expand__STATE_VARIABLE_Info_0_4, &check_hlds__try_expand__STATE_VARIABLE_Info_22_22);
        }
#line 439 "try_expand.m"
        check_hlds__try_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_11, (MR_Integer) 0)));
#line 439 "try_expand.m"
        check_hlds__try_expand__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_11, (MR_Integer) 1)));
#line 440 "try_expand.m"
        {
#line 440 "try_expand.m"
          check_hlds__try_expand__InstmapDelta_18 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__try_expand__GoalInfo_17);
        }
#line 441 "try_expand.m"
        {
#line 441 "try_expand.m"
          hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__try_expand__HeadVar__1_1, check_hlds__try_expand__InstmapDelta_18, &check_hlds__try_expand__Instmap_19);
        }
#line 442 "try_expand.m"
        {
#line 442 "try_expand.m"
          check_hlds__try_expand__expand_try_goals_in_conj_5_p_0(check_hlds__try_expand__Instmap_19, check_hlds__try_expand__Goals0_12, &check_hlds__try_expand__Goals_14, check_hlds__try_expand__STATE_VARIABLE_Info_22_22, check_hlds__try_expand__STATE_VARIABLE_Info_5);
        }
#line 437 "try_expand.m"
        {
#line 437 "try_expand.m"
          MR_Word base;
#line 437 "try_expand.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "try_expand.m"
          *check_hlds__try_expand__HeadVar__3_3 = base;
#line 437 "try_expand.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__try_expand__Goal_13));
#line 437 "try_expand.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__try_expand__Goals_14));
#line 437 "try_expand.m"
        }
#line 437 "try_expand.m"
      }
#line 436 "try_expand.m"
  }
#line 432 "try_expand.m"
}

#line 345 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(
#line 345 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap_6,
#line 345 "try_expand.m"
  MR_Word check_hlds__try_expand__Goal0_7,
#line 345 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_8,
#line 345 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_92,
#line 345 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_93)
#line 345 "try_expand.m"
{
#line 348 "try_expand.m"
  {
#line 348 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 348 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_7, (MR_Integer) 0)));
#line 348 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_7, (MR_Integer) 1)));

#line 353 "try_expand.m"
    if (((MR_tag((MR_Word) check_hlds__try_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 0))))
#line 364 "try_expand.m"
      {
#line 364 "try_expand.m"
        MR_Word check_hlds__try_expand__SubGoal0_23 = (MR_Word) MR_body(((MR_Word) check_hlds__try_expand__GoalExpr0_10), (MR_Integer) 0);
#line 364 "try_expand.m"
        MR_Word check_hlds__try_expand__SubGoal_24;
#line 364 "try_expand.m"
        MR_Word check_hlds__try_expand__GoalExpr_115;

#line 365 "try_expand.m"
        {
#line 365 "try_expand.m"
          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__SubGoal0_23, &check_hlds__try_expand__SubGoal_24, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
        }
#line 366 "try_expand.m"
        check_hlds__try_expand__GoalExpr_115 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__try_expand__SubGoal_24);
#line 367 "try_expand.m"
        {
#line 367 "try_expand.m"
          MR_Word base;
#line 367 "try_expand.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 367 "try_expand.m"
          *check_hlds__try_expand__Goal_8 = base;
#line 367 "try_expand.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_115));
#line 367 "try_expand.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 367 "try_expand.m"
        }
#line 364 "try_expand.m"
      }
#line 353 "try_expand.m"
    else
#line 353 "try_expand.m"
      if (((MR_tag((MR_Word) check_hlds__try_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 1))))
#line 351 "try_expand.m"
        {
#line 352 "try_expand.m"
          *check_hlds__try_expand__Goal_8 = check_hlds__try_expand__Goal0_7;
#line 352 "try_expand.m"
          *check_hlds__try_expand__STATE_VARIABLE_Info_93 = check_hlds__try_expand__STATE_VARIABLE_Info_0_92;
#line 351 "try_expand.m"
        }
#line 353 "try_expand.m"
      else
#line 353 "try_expand.m"
        if (((((MR_tag((MR_Word) check_hlds__try_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 354 "try_expand.m"
          {
#line 354 "try_expand.m"
            MR_Word check_hlds__try_expand__ConjType_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 354 "try_expand.m"
            MR_Word check_hlds__try_expand__Conjuncts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 2)));
#line 354 "try_expand.m"
            MR_Word check_hlds__try_expand__Conjuncts_19;
#line 354 "try_expand.m"
            MR_Word check_hlds__try_expand__GoalExpr_20;

#line 355 "try_expand.m"
            {
#line 355 "try_expand.m"
              check_hlds__try_expand__expand_try_goals_in_conj_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Conjuncts0_18, &check_hlds__try_expand__Conjuncts_19, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
            }
#line 356 "try_expand.m"
            {
#line 356 "try_expand.m"
              check_hlds__try_expand__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 356 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 356 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_20, 1) = ((MR_Box) (check_hlds__try_expand__ConjType_17));
#line 356 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_20, 2) = ((MR_Box) (check_hlds__try_expand__Conjuncts_19));
#line 356 "try_expand.m"
            }
#line 357 "try_expand.m"
            {
#line 357 "try_expand.m"
              MR_Word base;
#line 357 "try_expand.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 357 "try_expand.m"
              *check_hlds__try_expand__Goal_8 = base;
#line 357 "try_expand.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_20));
#line 357 "try_expand.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 357 "try_expand.m"
            }
#line 354 "try_expand.m"
          }
#line 353 "try_expand.m"
        else
#line 353 "try_expand.m"
          if (((((MR_tag((MR_Word) check_hlds__try_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 359 "try_expand.m"
            {
#line 359 "try_expand.m"
              MR_Word check_hlds__try_expand__Disjuncts0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 359 "try_expand.m"
              MR_Word check_hlds__try_expand__Disjuncts_22;
#line 359 "try_expand.m"
              MR_Word check_hlds__try_expand__GoalExpr_114;

#line 360 "try_expand.m"
              {
#line 360 "try_expand.m"
                check_hlds__try_expand__expand_try_goals_in_disj_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Disjuncts0_21, &check_hlds__try_expand__Disjuncts_22, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
              }
#line 361 "try_expand.m"
              {
#line 361 "try_expand.m"
                check_hlds__try_expand__GoalExpr_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "try_expand.m"
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 361 "try_expand.m"
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_114, 1) = ((MR_Box) (check_hlds__try_expand__Disjuncts_22));
#line 361 "try_expand.m"
              }
#line 362 "try_expand.m"
              {
#line 362 "try_expand.m"
                MR_Word base;
#line 362 "try_expand.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 362 "try_expand.m"
                *check_hlds__try_expand__Goal_8 = base;
#line 362 "try_expand.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_114));
#line 362 "try_expand.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 362 "try_expand.m"
              }
#line 359 "try_expand.m"
            }
#line 353 "try_expand.m"
          else
#line 353 "try_expand.m"
            if (((((MR_tag((MR_Word) check_hlds__try_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 400 "try_expand.m"
              {
#line 400 "try_expand.m"
                MR_Word check_hlds__try_expand__Vars_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 400 "try_expand.m"
                MR_Word check_hlds__try_expand__Cond0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 2)));
#line 400 "try_expand.m"
                MR_Word check_hlds__try_expand__Then0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 3)));
#line 400 "try_expand.m"
                MR_Word check_hlds__try_expand__Else0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 4)));
#line 400 "try_expand.m"
                MR_Word check_hlds__try_expand__Cond_56;
#line 400 "try_expand.m"
                MR_Word check_hlds__try_expand__Then_57;
#line 400 "try_expand.m"
                MR_Word check_hlds__try_expand__Else_58;
#line 400 "try_expand.m"
                MR_Word check_hlds__try_expand__GoalExpr_120;

#line 401 "try_expand.m"
                {
#line 401 "try_expand.m"
                  check_hlds__try_expand__expand_try_goals_in_if_then_else_9_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Cond0_53, &check_hlds__try_expand__Cond_56, check_hlds__try_expand__Then0_54, &check_hlds__try_expand__Then_57, check_hlds__try_expand__Else0_55, &check_hlds__try_expand__Else_58, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
                }
#line 403 "try_expand.m"
                {
#line 403 "try_expand.m"
                  check_hlds__try_expand__GoalExpr_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 403 "try_expand.m"
                  MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 403 "try_expand.m"
                  MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_120, 1) = ((MR_Box) (check_hlds__try_expand__Vars_52));
#line 403 "try_expand.m"
                  MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_120, 2) = ((MR_Box) (check_hlds__try_expand__Cond_56));
#line 403 "try_expand.m"
                  MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_120, 3) = ((MR_Box) (check_hlds__try_expand__Then_57));
#line 403 "try_expand.m"
                  MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_120, 4) = ((MR_Box) (check_hlds__try_expand__Else_58));
#line 403 "try_expand.m"
                }
#line 404 "try_expand.m"
                {
#line 404 "try_expand.m"
                  MR_Word base;
#line 404 "try_expand.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 404 "try_expand.m"
                  *check_hlds__try_expand__Goal_8 = base;
#line 404 "try_expand.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_120));
#line 404 "try_expand.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 404 "try_expand.m"
                }
#line 400 "try_expand.m"
              }
#line 353 "try_expand.m"
            else
#line 353 "try_expand.m"
              if (((((MR_tag((MR_Word) check_hlds__try_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 374 "try_expand.m"
                {
#line 374 "try_expand.m"
                  MR_Word check_hlds__try_expand__Reason_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 374 "try_expand.m"
                  MR_Word check_hlds__try_expand__InnerGoal0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 2)));

#line 379 "try_expand.m"
                  if (((MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) == (MR_mktag((MR_Integer) 0))))
#line 391 "try_expand.m"
                    {
#line 391 "try_expand.m"
                      MR_Word check_hlds__try_expand__InnerGoal_126;
#line 391 "try_expand.m"
                      MR_Word check_hlds__try_expand__GoalExpr_127;

#line 392 "try_expand.m"
                      {
#line 392 "try_expand.m"
                        check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_126, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
                      }
#line 393 "try_expand.m"
                      {
#line 393 "try_expand.m"
                        check_hlds__try_expand__GoalExpr_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 393 "try_expand.m"
                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 393 "try_expand.m"
                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_127, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 393 "try_expand.m"
                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_127, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_126));
#line 393 "try_expand.m"
                      }
#line 394 "try_expand.m"
                      {
#line 394 "try_expand.m"
                        MR_Word base;
#line 394 "try_expand.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 394 "try_expand.m"
                        *check_hlds__try_expand__Goal_8 = base;
#line 394 "try_expand.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_127));
#line 394 "try_expand.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 394 "try_expand.m"
                      }
#line 391 "try_expand.m"
                    }
#line 379 "try_expand.m"
                  else
#line 379 "try_expand.m"
                    if (((MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) == (MR_mktag((MR_Integer) 2))))
#line 391 "try_expand.m"
                      {
#line 391 "try_expand.m"
                        MR_Word check_hlds__try_expand__InnerGoal_136;
#line 391 "try_expand.m"
                        MR_Word check_hlds__try_expand__GoalExpr_137;

#line 392 "try_expand.m"
                        {
#line 392 "try_expand.m"
                          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_136, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
                        }
#line 393 "try_expand.m"
                        {
#line 393 "try_expand.m"
                          check_hlds__try_expand__GoalExpr_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 393 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 393 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_137, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 393 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_137, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_136));
#line 393 "try_expand.m"
                        }
#line 394 "try_expand.m"
                        {
#line 394 "try_expand.m"
                          MR_Word base;
#line 394 "try_expand.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 394 "try_expand.m"
                          *check_hlds__try_expand__Goal_8 = base;
#line 394 "try_expand.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_137));
#line 394 "try_expand.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 394 "try_expand.m"
                        }
#line 391 "try_expand.m"
                      }
#line 379 "try_expand.m"
                    else
#line 379 "try_expand.m"
                      if (((MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) == (MR_mktag((MR_Integer) 1))))
#line 391 "try_expand.m"
                        {
#line 391 "try_expand.m"
                          MR_Word check_hlds__try_expand__InnerGoal_138;
#line 391 "try_expand.m"
                          MR_Word check_hlds__try_expand__GoalExpr_139;

#line 392 "try_expand.m"
                          {
#line 392 "try_expand.m"
                            check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_138, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
                          }
#line 393 "try_expand.m"
                          {
#line 393 "try_expand.m"
                            check_hlds__try_expand__GoalExpr_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 393 "try_expand.m"
                            MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 393 "try_expand.m"
                            MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_139, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 393 "try_expand.m"
                            MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_139, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_138));
#line 393 "try_expand.m"
                          }
#line 394 "try_expand.m"
                          {
#line 394 "try_expand.m"
                            MR_Word base;
#line 394 "try_expand.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 394 "try_expand.m"
                            *check_hlds__try_expand__Goal_8 = base;
#line 394 "try_expand.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_139));
#line 394 "try_expand.m"
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 394 "try_expand.m"
                          }
#line 391 "try_expand.m"
                        }
#line 379 "try_expand.m"
                      else
#line 379 "try_expand.m"
                        if (((((MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 391 "try_expand.m"
                          {
#line 391 "try_expand.m"
                            MR_Word check_hlds__try_expand__InnerGoal_50;
#line 391 "try_expand.m"
                            MR_Word check_hlds__try_expand__GoalExpr_117;

#line 392 "try_expand.m"
                            {
#line 392 "try_expand.m"
                              check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_50, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
                            }
#line 393 "try_expand.m"
                            {
#line 393 "try_expand.m"
                              check_hlds__try_expand__GoalExpr_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 393 "try_expand.m"
                              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 393 "try_expand.m"
                              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_117, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 393 "try_expand.m"
                              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_117, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_50));
#line 393 "try_expand.m"
                            }
#line 394 "try_expand.m"
                            {
#line 394 "try_expand.m"
                              MR_Word base;
#line 394 "try_expand.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 394 "try_expand.m"
                              *check_hlds__try_expand__Goal_8 = base;
#line 394 "try_expand.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_117));
#line 394 "try_expand.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 394 "try_expand.m"
                            }
#line 391 "try_expand.m"
                          }
#line 379 "try_expand.m"
                        else
#line 379 "try_expand.m"
                          if (((((MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 391 "try_expand.m"
                            {
#line 391 "try_expand.m"
                              MR_Word check_hlds__try_expand__InnerGoal_124;
#line 391 "try_expand.m"
                              MR_Word check_hlds__try_expand__GoalExpr_125;

#line 392 "try_expand.m"
                              {
#line 392 "try_expand.m"
                                check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_124, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
                              }
#line 393 "try_expand.m"
                              {
#line 393 "try_expand.m"
                                check_hlds__try_expand__GoalExpr_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 393 "try_expand.m"
                                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 393 "try_expand.m"
                                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_125, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 393 "try_expand.m"
                                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_125, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_124));
#line 393 "try_expand.m"
                              }
#line 394 "try_expand.m"
                              {
#line 394 "try_expand.m"
                                MR_Word base;
#line 394 "try_expand.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 394 "try_expand.m"
                                *check_hlds__try_expand__Goal_8 = base;
#line 394 "try_expand.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_125));
#line 394 "try_expand.m"
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 394 "try_expand.m"
                              }
#line 391 "try_expand.m"
                            }
#line 379 "try_expand.m"
                          else
#line 379 "try_expand.m"
                            if (((((MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 379 "try_expand.m"
                              {
#line 379 "try_expand.m"
                                MR_Word check_hlds__try_expand__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 2)));
#line 376 "try_expand.m"
                                MR_Word check_hlds__try_expand__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 1)));

#line 379 "try_expand.m"
                                if ((check_hlds__try_expand__V_146_146 == (MR_Integer) 1))
#line 376 "try_expand.m"
                                  {
#line 378 "try_expand.m"
                                    *check_hlds__try_expand__Goal_8 = check_hlds__try_expand__Goal0_7;
#line 378 "try_expand.m"
                                    *check_hlds__try_expand__STATE_VARIABLE_Info_93 = check_hlds__try_expand__STATE_VARIABLE_Info_0_92;
#line 376 "try_expand.m"
                                  }
#line 379 "try_expand.m"
                                else
#line 379 "try_expand.m"
                                  if ((check_hlds__try_expand__V_146_146 == (MR_Integer) 2))
#line 391 "try_expand.m"
                                    {
#line 391 "try_expand.m"
                                      MR_Word check_hlds__try_expand__InnerGoal_128;
#line 391 "try_expand.m"
                                      MR_Word check_hlds__try_expand__GoalExpr_129;

#line 392 "try_expand.m"
                                      {
#line 392 "try_expand.m"
                                        check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_128, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
                                      }
#line 393 "try_expand.m"
                                      {
#line 393 "try_expand.m"
                                        check_hlds__try_expand__GoalExpr_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 393 "try_expand.m"
                                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 393 "try_expand.m"
                                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_129, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 393 "try_expand.m"
                                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_129, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_128));
#line 393 "try_expand.m"
                                      }
#line 394 "try_expand.m"
                                      {
#line 394 "try_expand.m"
                                        MR_Word base;
#line 394 "try_expand.m"
                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 394 "try_expand.m"
                                        *check_hlds__try_expand__Goal_8 = base;
#line 394 "try_expand.m"
                                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_129));
#line 394 "try_expand.m"
                                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 394 "try_expand.m"
                                      }
#line 391 "try_expand.m"
                                    }
#line 379 "try_expand.m"
                                  else
#line 379 "try_expand.m"
                                    if ((check_hlds__try_expand__V_146_146 == (MR_Integer) 0))
#line 396 "try_expand.m"
                                      {
#line 397 "try_expand.m"
                                        {
#line 397 "try_expand.m"
                                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.expand_try_goals_in_goal\'/5", (MR_String) "from_ground_term_initial");
#line 397 "try_expand.m"
                                          return;
                                        }
#line 396 "try_expand.m"
                                      }
#line 379 "try_expand.m"
                                    else
#line 391 "try_expand.m"
                                      {
#line 391 "try_expand.m"
                                        MR_Word check_hlds__try_expand__InnerGoal_130;
#line 391 "try_expand.m"
                                        MR_Word check_hlds__try_expand__GoalExpr_131;

#line 392 "try_expand.m"
                                        {
#line 392 "try_expand.m"
                                          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_130, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
                                        }
#line 393 "try_expand.m"
                                        {
#line 393 "try_expand.m"
                                          check_hlds__try_expand__GoalExpr_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 393 "try_expand.m"
                                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 393 "try_expand.m"
                                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_131, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 393 "try_expand.m"
                                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_131, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_130));
#line 393 "try_expand.m"
                                        }
#line 394 "try_expand.m"
                                        {
#line 394 "try_expand.m"
                                          MR_Word base;
#line 394 "try_expand.m"
                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 394 "try_expand.m"
                                          *check_hlds__try_expand__Goal_8 = base;
#line 394 "try_expand.m"
                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_131));
#line 394 "try_expand.m"
                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 394 "try_expand.m"
                                        }
#line 391 "try_expand.m"
                                      }
#line 379 "try_expand.m"
                              }
#line 379 "try_expand.m"
                            else
#line 379 "try_expand.m"
                              if (((((MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 391 "try_expand.m"
                                {
#line 391 "try_expand.m"
                                  MR_Word check_hlds__try_expand__InnerGoal_134;
#line 391 "try_expand.m"
                                  MR_Word check_hlds__try_expand__GoalExpr_135;

#line 392 "try_expand.m"
                                  {
#line 392 "try_expand.m"
                                    check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_134, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
                                  }
#line 393 "try_expand.m"
                                  {
#line 393 "try_expand.m"
                                    check_hlds__try_expand__GoalExpr_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 393 "try_expand.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 393 "try_expand.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_135, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 393 "try_expand.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_135, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_134));
#line 393 "try_expand.m"
                                  }
#line 394 "try_expand.m"
                                  {
#line 394 "try_expand.m"
                                    MR_Word base;
#line 394 "try_expand.m"
                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 394 "try_expand.m"
                                    *check_hlds__try_expand__Goal_8 = base;
#line 394 "try_expand.m"
                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_135));
#line 394 "try_expand.m"
                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 394 "try_expand.m"
                                  }
#line 391 "try_expand.m"
                                }
#line 379 "try_expand.m"
                              else
#line 379 "try_expand.m"
                                if (((((MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 391 "try_expand.m"
                                  {
#line 391 "try_expand.m"
                                    MR_Word check_hlds__try_expand__InnerGoal_140;
#line 391 "try_expand.m"
                                    MR_Word check_hlds__try_expand__GoalExpr_141;

#line 392 "try_expand.m"
                                    {
#line 392 "try_expand.m"
                                      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_140, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
                                    }
#line 393 "try_expand.m"
                                    {
#line 393 "try_expand.m"
                                      check_hlds__try_expand__GoalExpr_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 393 "try_expand.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 393 "try_expand.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_141, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 393 "try_expand.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_141, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_140));
#line 393 "try_expand.m"
                                    }
#line 394 "try_expand.m"
                                    {
#line 394 "try_expand.m"
                                      MR_Word base;
#line 394 "try_expand.m"
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 394 "try_expand.m"
                                      *check_hlds__try_expand__Goal_8 = base;
#line 394 "try_expand.m"
                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_141));
#line 394 "try_expand.m"
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 394 "try_expand.m"
                                    }
#line 391 "try_expand.m"
                                  }
#line 379 "try_expand.m"
                                else
#line 379 "try_expand.m"
                                  if (((((MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 391 "try_expand.m"
                                    {
#line 391 "try_expand.m"
                                      MR_Word check_hlds__try_expand__InnerGoal_142;
#line 391 "try_expand.m"
                                      MR_Word check_hlds__try_expand__GoalExpr_143;

#line 392 "try_expand.m"
                                      {
#line 392 "try_expand.m"
                                        check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_142, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
                                      }
#line 393 "try_expand.m"
                                      {
#line 393 "try_expand.m"
                                        check_hlds__try_expand__GoalExpr_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 393 "try_expand.m"
                                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 393 "try_expand.m"
                                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_143, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 393 "try_expand.m"
                                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_143, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_142));
#line 393 "try_expand.m"
                                      }
#line 394 "try_expand.m"
                                      {
#line 394 "try_expand.m"
                                        MR_Word base;
#line 394 "try_expand.m"
                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 394 "try_expand.m"
                                        *check_hlds__try_expand__Goal_8 = base;
#line 394 "try_expand.m"
                                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_143));
#line 394 "try_expand.m"
                                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 394 "try_expand.m"
                                      }
#line 391 "try_expand.m"
                                    }
#line 379 "try_expand.m"
                                  else
#line 391 "try_expand.m"
                                    {
#line 391 "try_expand.m"
                                      MR_Word check_hlds__try_expand__InnerGoal_144;
#line 391 "try_expand.m"
                                      MR_Word check_hlds__try_expand__GoalExpr_145;

#line 392 "try_expand.m"
                                      {
#line 392 "try_expand.m"
                                        check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_144, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
                                      }
#line 393 "try_expand.m"
                                      {
#line 393 "try_expand.m"
                                        check_hlds__try_expand__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 393 "try_expand.m"
                                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 393 "try_expand.m"
                                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_145, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 393 "try_expand.m"
                                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_145, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_144));
#line 393 "try_expand.m"
                                      }
#line 394 "try_expand.m"
                                      {
#line 394 "try_expand.m"
                                        MR_Word base;
#line 394 "try_expand.m"
                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 394 "try_expand.m"
                                        *check_hlds__try_expand__Goal_8 = base;
#line 394 "try_expand.m"
                                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_145));
#line 394 "try_expand.m"
                                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 394 "try_expand.m"
                                      }
#line 391 "try_expand.m"
                                    }
#line 374 "try_expand.m"
                }
#line 353 "try_expand.m"
              else
#line 353 "try_expand.m"
                if (((((MR_tag((MR_Word) check_hlds__try_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 413 "try_expand.m"
                  {
#line 413 "try_expand.m"
                    MR_Word check_hlds__try_expand__ShortHand0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));

#line 417 "try_expand.m"
                    if (((MR_tag((MR_Word) check_hlds__try_expand__ShortHand0_77)) == (MR_mktag((MR_Integer) 1))))
#line 419 "try_expand.m"
                      {
#line 419 "try_expand.m"
                        MR_Word check_hlds__try_expand__AtomicGoalType_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_77, (MR_Integer) 0)));
#line 419 "try_expand.m"
                        MR_Word check_hlds__try_expand__Outer_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_77, (MR_Integer) 1)));
#line 419 "try_expand.m"
                        MR_Word check_hlds__try_expand__Inner_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_77, (MR_Integer) 2)));
#line 419 "try_expand.m"
                        MR_Word check_hlds__try_expand__MaybeOutputVars_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_77, (MR_Integer) 3)));
#line 419 "try_expand.m"
                        MR_Word check_hlds__try_expand__MainGoal0_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_77, (MR_Integer) 4)));
#line 419 "try_expand.m"
                        MR_Word check_hlds__try_expand__OrElseGoals0_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_77, (MR_Integer) 5)));
#line 419 "try_expand.m"
                        MR_Word check_hlds__try_expand__OrElseInners_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_77, (MR_Integer) 6)));
#line 419 "try_expand.m"
                        MR_Word check_hlds__try_expand__MainGoal_88;
#line 419 "try_expand.m"
                        MR_Word check_hlds__try_expand__OrElseGoals_89;
#line 419 "try_expand.m"
                        MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_97_97;
#line 419 "try_expand.m"
                        MR_Word check_hlds__try_expand__V_99_99;
#line 419 "try_expand.m"
                        MR_Word check_hlds__try_expand__GoalExpr_121;

#line 420 "try_expand.m"
                        {
#line 420 "try_expand.m"
                          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__MainGoal0_85, &check_hlds__try_expand__MainGoal_88, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, &check_hlds__try_expand__STATE_VARIABLE_Info_97_97);
                        }
#line 421 "try_expand.m"
                        {
#line 421 "try_expand.m"
                          check_hlds__try_expand__expand_try_goals_in_disj_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__OrElseGoals0_86, &check_hlds__try_expand__OrElseGoals_89, check_hlds__try_expand__STATE_VARIABLE_Info_97_97, check_hlds__try_expand__STATE_VARIABLE_Info_93);
                        }
#line 423 "try_expand.m"
                        {
#line 423 "try_expand.m"
                          check_hlds__try_expand__GoalExpr_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 423 "try_expand.m"
                          MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_121, 0) = ((MR_Box) (check_hlds__try_expand__AtomicGoalType_81));
#line 423 "try_expand.m"
                          MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_121, 1) = ((MR_Box) (check_hlds__try_expand__Outer_82));
#line 423 "try_expand.m"
                          MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_121, 2) = ((MR_Box) (check_hlds__try_expand__Inner_83));
#line 423 "try_expand.m"
                          MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_121, 3) = ((MR_Box) (check_hlds__try_expand__MaybeOutputVars_84));
#line 423 "try_expand.m"
                          MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_121, 4) = ((MR_Box) (check_hlds__try_expand__MainGoal_88));
#line 423 "try_expand.m"
                          MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_121, 5) = ((MR_Box) (check_hlds__try_expand__OrElseGoals_89));
#line 423 "try_expand.m"
                          MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_121, 6) = ((MR_Box) (check_hlds__try_expand__OrElseInners_87));
#line 423 "try_expand.m"
                        }
#line 425 "try_expand.m"
                        {
#line 425 "try_expand.m"
                          check_hlds__try_expand__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 425 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_99_99, 1) = ((MR_Box) (check_hlds__try_expand__GoalExpr_121));
#line 425 "try_expand.m"
                        }
#line 425 "try_expand.m"
                        {
#line 425 "try_expand.m"
                          MR_Word base;
#line 425 "try_expand.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 425 "try_expand.m"
                          *check_hlds__try_expand__Goal_8 = base;
#line 425 "try_expand.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__V_99_99));
#line 425 "try_expand.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 425 "try_expand.m"
                        }
#line 419 "try_expand.m"
                      }
#line 417 "try_expand.m"
                    else
#line 417 "try_expand.m"
                      if (((MR_tag((MR_Word) check_hlds__try_expand__ShortHand0_77)) == (MR_mktag((MR_Integer) 0))))
#line 427 "try_expand.m"
                        {
#line 428 "try_expand.m"
                          {
#line 428 "try_expand.m"
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.expand_try_goals_in_goal\'/5", (MR_String) "bi_implication");
#line 428 "try_expand.m"
                            return;
                          }
#line 427 "try_expand.m"
                        }
#line 417 "try_expand.m"
                      else
#line 416 "try_expand.m"
                        {
#line 416 "try_expand.m"
                          check_hlds__try_expand__expand_try_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__ShortHand0_77, check_hlds__try_expand__Goal_8, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
#line 416 "try_expand.m"
                          return;
                        }
#line 413 "try_expand.m"
                  }
#line 353 "try_expand.m"
                else
#line 353 "try_expand.m"
                  if (((((MR_tag((MR_Word) check_hlds__try_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 369 "try_expand.m"
                    {
#line 369 "try_expand.m"
                      MR_Word check_hlds__try_expand__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 369 "try_expand.m"
                      MR_Word check_hlds__try_expand__CanFail_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 2)));
#line 369 "try_expand.m"
                      MR_Word check_hlds__try_expand__Cases0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 3)));
#line 369 "try_expand.m"
                      MR_Word check_hlds__try_expand__Cases_28;
#line 369 "try_expand.m"
                      MR_Word check_hlds__try_expand__GoalExpr_116;

#line 370 "try_expand.m"
                      {
#line 370 "try_expand.m"
                        check_hlds__try_expand__expand_try_goals_in_cases_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Cases0_27, &check_hlds__try_expand__Cases_28, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
                      }
#line 371 "try_expand.m"
                      {
#line 371 "try_expand.m"
                        check_hlds__try_expand__GoalExpr_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 371 "try_expand.m"
                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 371 "try_expand.m"
                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_116, 1) = ((MR_Box) (check_hlds__try_expand__Var_25));
#line 371 "try_expand.m"
                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_116, 2) = ((MR_Box) (check_hlds__try_expand__CanFail_26));
#line 371 "try_expand.m"
                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_116, 3) = ((MR_Box) (check_hlds__try_expand__Cases_28));
#line 371 "try_expand.m"
                      }
#line 372 "try_expand.m"
                      {
#line 372 "try_expand.m"
                        MR_Word base;
#line 372 "try_expand.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 372 "try_expand.m"
                        *check_hlds__try_expand__Goal_8 = base;
#line 372 "try_expand.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_116));
#line 372 "try_expand.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 372 "try_expand.m"
                      }
#line 369 "try_expand.m"
                    }
#line 353 "try_expand.m"
                  else
#line 409 "try_expand.m"
                    {
#line 410 "try_expand.m"
                      *check_hlds__try_expand__Goal_8 = check_hlds__try_expand__Goal0_7;
#line 410 "try_expand.m"
                      *check_hlds__try_expand__STATE_VARIABLE_Info_93 = check_hlds__try_expand__STATE_VARIABLE_Info_0_92;
#line 409 "try_expand.m"
                    }
#line 348 "try_expand.m"
  }
#line 345 "try_expand.m"
}

#line 280 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_proc_6_p_0(
#line 280 "try_expand.m"
  MR_Word check_hlds__try_expand__PredId_7,
#line 280 "try_expand.m"
  MR_Integer check_hlds__try_expand__ProcId_8,
#line 280 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_19,
#line 280 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_20,
#line 280 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Specs_0_21,
#line 280 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Specs_22)
#line 280 "try_expand.m"
{
#line 287 "try_expand.m"
  {
#line 287 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 287 "try_expand.m"
    MR_Word check_hlds__try_expand__Goal0_13;
#line 287 "try_expand.m"
    MR_Word check_hlds__try_expand__InitInstmap_14;
#line 287 "try_expand.m"
    MR_Word check_hlds__try_expand__Info0_15;
#line 287 "try_expand.m"
    MR_Word check_hlds__try_expand__Goal_16;
#line 287 "try_expand.m"
    MR_Word check_hlds__try_expand__Info_17;
#line 287 "try_expand.m"
    MR_Word check_hlds__try_expand__Changed_18;
#line 287 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_23_23;
#line 287 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_24_24;
#line 287 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_26_26;
#line 287 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_27_27;
#line 287 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_28_28;

#line 286 "try_expand.m"
    {
#line 286 "try_expand.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__try_expand__PredId_7, check_hlds__try_expand__ProcId_8, &check_hlds__try_expand__STATE_VARIABLE_PredInfo_23_23, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_24_24);
    }
#line 288 "try_expand.m"
    {
#line 288 "try_expand.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ProcInfo_24_24, &check_hlds__try_expand__Goal0_13);
    }
#line 289 "try_expand.m"
    {
#line 289 "try_expand.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__try_expand__STATE_VARIABLE_ProcInfo_24_24, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_19, &check_hlds__try_expand__InitInstmap_14);
    }
#line 291 "try_expand.m"
    {
#line 291 "try_expand.m"
      check_hlds__try_expand__Info0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 291 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info0_15, 0) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_19));
#line 291 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info0_15, 1) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_PredInfo_23_23));
#line 291 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info0_15, 2) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ProcInfo_24_24));
#line 291 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info0_15, 3) = ((MR_Box) ((MR_Integer) 0));
#line 291 "try_expand.m"
    }
#line 292 "try_expand.m"
    {
#line 292 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__InitInstmap_14, check_hlds__try_expand__Goal0_13, &check_hlds__try_expand__Goal_16, check_hlds__try_expand__Info0_15, &check_hlds__try_expand__Info_17);
    }
#line 293 "try_expand.m"
    check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info_17, (MR_Integer) 0)));
#line 293 "try_expand.m"
    check_hlds__try_expand__STATE_VARIABLE_PredInfo_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info_17, (MR_Integer) 1)));
#line 293 "try_expand.m"
    check_hlds__try_expand__STATE_VARIABLE_ProcInfo_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info_17, (MR_Integer) 2)));
#line 293 "try_expand.m"
    check_hlds__try_expand__Changed_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info_17, (MR_Integer) 3)));
#line 300 "try_expand.m"
    if ((check_hlds__try_expand__Changed_18 == (MR_Integer) 0))
#line 301 "try_expand.m"
      {
#line 301 "try_expand.m"
        *check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_20 = check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_26_26;
#line 301 "try_expand.m"
        *check_hlds__try_expand__STATE_VARIABLE_Specs_22 = check_hlds__try_expand__STATE_VARIABLE_Specs_0_21;
#line 301 "try_expand.m"
      }
#line 300 "try_expand.m"
    else
#line 296 "try_expand.m"
      {
#line 296 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_29_29;
#line 296 "try_expand.m"
        MR_Word check_hlds__try_expand__ModeSpecs_44;
#line 296 "try_expand.m"
        MR_Word check_hlds__try_expand__Globals_46;
#line 296 "try_expand.m"
        MR_Word check_hlds__try_expand__HasModeErrors_47;
#line 296 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_27_49;
#line 296 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_29_51;
#line 296 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_30_52;
#line 296 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_31_53;
#line 316 "try_expand.m"
        MR_Word check_hlds__try_expand___Changed_45;

#line 311 "try_expand.m"
        {
#line 311 "try_expand.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__try_expand__Goal_16, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_28_28, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_27_49);
        }
#line 312 "try_expand.m"
        {
#line 312 "try_expand.m"
          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_27_49, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_29_51);
        }
#line 313 "try_expand.m"
        {
#line 313 "try_expand.m"
          hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(check_hlds__try_expand__PredId_7, check_hlds__try_expand__ProcId_8, check_hlds__try_expand__STATE_VARIABLE_PredInfo_27_27, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_29_51, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_26_26, &check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_30_52);
        }
#line 316 "try_expand.m"
        {
#line 316 "try_expand.m"
          check_hlds__modes__modecheck_proc_6_p_0(check_hlds__try_expand__ProcId_8, check_hlds__try_expand__PredId_7, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_30_52, &check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_31_53, &check_hlds__try_expand__ModeSpecs_44, &check_hlds__try_expand___Changed_45);
        }
#line 317 "try_expand.m"
        {
#line 317 "try_expand.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_31_53, &check_hlds__try_expand__Globals_46);
        }
#line 318 "try_expand.m"
        {
#line 318 "try_expand.m"
          check_hlds__try_expand__HasModeErrors_47 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__try_expand__Globals_46, check_hlds__try_expand__ModeSpecs_44);
        }
#line 325 "try_expand.m"
        if ((check_hlds__try_expand__HasModeErrors_47 == (MR_Integer) 0))
#line 326 "try_expand.m"
          {
#line 332 "try_expand.m"
            MR_Word check_hlds__try_expand___DetismSpecs_48;

#line 332 "try_expand.m"
            {
#line 332 "try_expand.m"
              check_hlds__det_analysis__determinism_check_proc_5_p_0(check_hlds__try_expand__ProcId_8, check_hlds__try_expand__PredId_7, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_31_53, &check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_29_29, &check_hlds__try_expand___DetismSpecs_48);
            }
#line 332 "try_expand.m"
            *check_hlds__try_expand__STATE_VARIABLE_Specs_22 = check_hlds__try_expand__STATE_VARIABLE_Specs_0_21;
#line 326 "try_expand.m"
          }
#line 325 "try_expand.m"
        else
#line 320 "try_expand.m"
          {
#line 324 "try_expand.m"
            {
#line 324 "try_expand.m"
              *check_hlds__try_expand__STATE_VARIABLE_Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__try_expand__ModeSpecs_44, check_hlds__try_expand__STATE_VARIABLE_Specs_0_21);
            }
#line 324 "try_expand.m"
            check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_29_29 = check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_31_53;
#line 320 "try_expand.m"
          }
#line 299 "try_expand.m"
        {
#line 299 "try_expand.m"
          hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_29_29, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_20);
#line 299 "try_expand.m"
          return;
        }
#line 296 "try_expand.m"
      }
#line 287 "try_expand.m"
  }
#line 280 "try_expand.m"
}

#line 277 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_pred_5_p_0_1(
#line 277 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 277 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 277 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_2,
#line 277 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_3,
#line 277 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_4,
#line 277 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_5)
#line 277 "try_expand.m"
{
#line 277 "try_expand.m"
  {
#line 277 "try_expand.m"
    MR_Box check_hlds__try_expand__closure = check_hlds__try_expand__closure_arg;
#line 277 "try_expand.m"
    MR_Word check_hlds__try_expand__conv1_STATE_VARIABLE_ModuleInfo_20;
#line 277 "try_expand.m"
    MR_Word check_hlds__try_expand__conv0_STATE_VARIABLE_Specs_22;

#line 277 "try_expand.m"
    {
#line 277 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__closure, (MR_Integer) 3))), ((MR_Integer) check_hlds__try_expand__wrapper_arg_1), ((MR_Word) check_hlds__try_expand__wrapper_arg_2), &check_hlds__try_expand__conv1_STATE_VARIABLE_ModuleInfo_20, ((MR_Word) check_hlds__try_expand__wrapper_arg_4), &check_hlds__try_expand__conv0_STATE_VARIABLE_Specs_22);
    }
#line 277 "try_expand.m"
    *check_hlds__try_expand__wrapper_arg_3 = ((MR_Box) (check_hlds__try_expand__conv1_STATE_VARIABLE_ModuleInfo_20));
#line 277 "try_expand.m"
    *check_hlds__try_expand__wrapper_arg_5 = ((MR_Box) (check_hlds__try_expand__conv0_STATE_VARIABLE_Specs_22));
#line 277 "try_expand.m"
  }
#line 277 "try_expand.m"
}

#line 270 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_pred_5_p_0(
#line 270 "try_expand.m"
  MR_Word check_hlds__try_expand__PredId_6,
#line 270 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11,
#line 270 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_12,
#line 270 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Specs_0_13,
#line 270 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Specs_14)
#line 270 "try_expand.m"
{
#line 274 "try_expand.m"
  {
#line 274 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 274 "try_expand.m"
    MR_Word check_hlds__try_expand__PredInfo_9;
#line 274 "try_expand.m"
    MR_Word check_hlds__try_expand__ProcIds_10;
#line 274 "try_expand.m"
    MR_Word check_hlds__try_expand__V_15_15;
#line 277 "try_expand.m"
    MR_Box check_hlds__try_expand__conv3_STATE_VARIABLE_ModuleInfo_12;
#line 277 "try_expand.m"
    MR_Box check_hlds__try_expand__conv2_STATE_VARIABLE_Specs_14;

#line 275 "try_expand.m"
    {
#line 275 "try_expand.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11, check_hlds__try_expand__PredId_6, &check_hlds__try_expand__PredInfo_9);
    }
#line 276 "try_expand.m"
    {
#line 276 "try_expand.m"
      check_hlds__try_expand__ProcIds_10 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(check_hlds__try_expand__PredInfo_9);
    }
#line 277 "try_expand.m"
    {
#line 277 "try_expand.m"
      check_hlds__try_expand__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 277 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_15_15, 0) = ((MR_Box) (&check_hlds__try_expand_scalar_common_4[0]));
#line 277 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_15_15, 1) = ((MR_Box) (check_hlds__try_expand__expand_try_goals_in_pred_5_p_0_1));
#line 277 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 277 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_15_15, 3) = ((MR_Box) (check_hlds__try_expand__PredId_6));
#line 277 "try_expand.m"
    }
#line 277 "try_expand.m"
    {
#line 277 "try_expand.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &check_hlds__try_expand_scalar_common_1[0], check_hlds__try_expand__V_15_15, check_hlds__try_expand__ProcIds_10, ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11)), &check_hlds__try_expand__conv3_STATE_VARIABLE_ModuleInfo_12, ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_Specs_0_13)), &check_hlds__try_expand__conv2_STATE_VARIABLE_Specs_14);
    }
#line 277 "try_expand.m"
    *check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_12 = ((MR_Word) check_hlds__try_expand__conv3_STATE_VARIABLE_ModuleInfo_12);
#line 277 "try_expand.m"
    *check_hlds__try_expand__STATE_VARIABLE_Specs_14 = ((MR_Word) check_hlds__try_expand__conv2_STATE_VARIABLE_Specs_14);
#line 274 "try_expand.m"
  }
#line 270 "try_expand.m"
}

#line 211 "try_expand.m"
MR_bool MR_CALL 
check_hlds__try_expand__try_expand_may_introduce_calls_2_p_0(
#line 211 "try_expand.m"
  MR_String check_hlds__try_expand__HeadVar__1_1,
#line 211 "try_expand.m"
  MR_Integer check_hlds__try_expand__HeadVar__2_2)
#line 211 "try_expand.m"
{
#line 945 "try_expand.m"
  {
#line 945 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;

#line 945 "try_expand.m"
    if ((strcmp(check_hlds__try_expand__HeadVar__1_1, (MR_String) "try") == 0))
#line 945 "try_expand.m"
      check_hlds__try_expand__succeeded = (check_hlds__try_expand__HeadVar__2_2 == (MR_Integer) 2);
#line 945 "try_expand.m"
    else
#line 945 "try_expand.m"
      if ((strcmp(check_hlds__try_expand__HeadVar__1_1, (MR_String) "try_io") == 0))
#line 946 "try_expand.m"
        check_hlds__try_expand__succeeded = (check_hlds__try_expand__HeadVar__2_2 == (MR_Integer) 4);
#line 945 "try_expand.m"
      else
#line 945 "try_expand.m"
        if ((strcmp(check_hlds__try_expand__HeadVar__1_1, (MR_String) "unreachable") == 0))
#line 947 "try_expand.m"
          check_hlds__try_expand__succeeded = (check_hlds__try_expand__HeadVar__2_2 == (MR_Integer) 0);
#line 945 "try_expand.m"
        else
#line 945 "try_expand.m"
          check_hlds__try_expand__succeeded = MR_FALSE;
#line 945 "try_expand.m"
    return check_hlds__try_expand__succeeded;
#line 945 "try_expand.m"
  }
#line 211 "try_expand.m"
}

#line 259 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_module_4_p_0_1(
#line 259 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 259 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 259 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_2,
#line 259 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_3,
#line 259 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_4,
#line 259 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_5)
#line 259 "try_expand.m"
{
#line 259 "try_expand.m"
  {
#line 259 "try_expand.m"
    MR_Box check_hlds__try_expand__closure = check_hlds__try_expand__closure_arg;
#line 259 "try_expand.m"
    MR_Word check_hlds__try_expand__conv1_STATE_VARIABLE_ModuleInfo_12;
#line 259 "try_expand.m"
    MR_Word check_hlds__try_expand__conv0_STATE_VARIABLE_Specs_14;

#line 259 "try_expand.m"
    {
#line 259 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_pred_5_p_0(((MR_Word) check_hlds__try_expand__wrapper_arg_1), ((MR_Word) check_hlds__try_expand__wrapper_arg_2), &check_hlds__try_expand__conv1_STATE_VARIABLE_ModuleInfo_12, ((MR_Word) check_hlds__try_expand__wrapper_arg_4), &check_hlds__try_expand__conv0_STATE_VARIABLE_Specs_14);
    }
#line 259 "try_expand.m"
    *check_hlds__try_expand__wrapper_arg_3 = ((MR_Box) (check_hlds__try_expand__conv1_STATE_VARIABLE_ModuleInfo_12));
#line 259 "try_expand.m"
    *check_hlds__try_expand__wrapper_arg_5 = ((MR_Box) (check_hlds__try_expand__conv0_STATE_VARIABLE_Specs_14));
#line 259 "try_expand.m"
  }
#line 259 "try_expand.m"
}

#line 203 "try_expand.m"
void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_module_4_p_0(
#line 203 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11,
#line 203 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_12,
#line 203 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Specs_0_13,
#line 203 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Specs_14)
#line 203 "try_expand.m"
{
#line 247 "try_expand.m"
  {
#line 247 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 247 "try_expand.m"
    MR_Word check_hlds__try_expand__ImportedModules_7;
#line 252 "try_expand.m"
    MR_Word check_hlds__try_expand__V_15_15;

#line 251 "try_expand.m"
    {
#line 251 "try_expand.m"
      hlds__hlds_module__module_info_get_imported_module_specifiers_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11, &check_hlds__try_expand__ImportedModules_7);
    }
#line 252 "try_expand.m"
    {
#line 252 "try_expand.m"
      check_hlds__try_expand__V_15_15 = mdbcomp__prim_data__mercury_exception_module_0_f_0();
    }
#line 252 "try_expand.m"
    {
#line 252 "try_expand.m"
      check_hlds__try_expand__succeeded = mercury__set__contains_2_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, check_hlds__try_expand__ImportedModules_7, ((MR_Box) (check_hlds__try_expand__V_15_15)));
    }
#line 266 "try_expand.m"
    if (check_hlds__try_expand__succeeded)
#line 254 "try_expand.m"
      {
#line 254 "try_expand.m"
        MR_Word check_hlds__try_expand__OptionsToRestore_9;
#line 254 "try_expand.m"
        MR_Word check_hlds__try_expand__PredIds_10;
#line 254 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Globals_16_16;
#line 254 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Globals_17_17;
#line 254 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_18_18;
#line 254 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_19_19;
#line 254 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_21_21;
#line 254 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Globals_23_23;
#line 254 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Globals_24_24;
#line 259 "try_expand.m"
        MR_Box check_hlds__try_expand__conv3_STATE_VARIABLE_ModuleInfo_21_21;
#line 259 "try_expand.m"
        MR_Box check_hlds__try_expand__conv2_STATE_VARIABLE_Specs_14;

#line 254 "try_expand.m"
        {
#line 254 "try_expand.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11, &check_hlds__try_expand__STATE_VARIABLE_Globals_16_16);
        }
#line 255 "try_expand.m"
        {
#line 255 "try_expand.m"
          check_hlds__det_report__disable_det_warnings_3_p_0(&check_hlds__try_expand__OptionsToRestore_9, check_hlds__try_expand__STATE_VARIABLE_Globals_16_16, &check_hlds__try_expand__STATE_VARIABLE_Globals_17_17);
        }
#line 256 "try_expand.m"
        {
#line 256 "try_expand.m"
          hlds__hlds_module__module_info_set_globals_3_p_0(check_hlds__try_expand__STATE_VARIABLE_Globals_17_17, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11, &check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_18_18);
        }
#line 258 "try_expand.m"
        {
#line 258 "try_expand.m"
          hlds__hlds_module__module_info_get_valid_predids_3_p_0(&check_hlds__try_expand__PredIds_10, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_18_18, &check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_19_19);
        }
#line 259 "try_expand.m"
        {
#line 259 "try_expand.m"
          mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &check_hlds__try_expand_scalar_common_1[0], (MR_Word) &check_hlds__try_expand_scalar_common_3[0], check_hlds__try_expand__PredIds_10, ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_19_19)), &check_hlds__try_expand__conv3_STATE_VARIABLE_ModuleInfo_21_21, ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_Specs_0_13)), &check_hlds__try_expand__conv2_STATE_VARIABLE_Specs_14);
        }
#line 259 "try_expand.m"
        check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_21_21 = ((MR_Word) check_hlds__try_expand__conv3_STATE_VARIABLE_ModuleInfo_21_21);
#line 259 "try_expand.m"
        *check_hlds__try_expand__STATE_VARIABLE_Specs_14 = ((MR_Word) check_hlds__try_expand__conv2_STATE_VARIABLE_Specs_14);
#line 262 "try_expand.m"
        {
#line 262 "try_expand.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_21_21, &check_hlds__try_expand__STATE_VARIABLE_Globals_23_23);
        }
#line 263 "try_expand.m"
        {
#line 263 "try_expand.m"
          check_hlds__det_report__restore_det_warnings_3_p_0(check_hlds__try_expand__OptionsToRestore_9, check_hlds__try_expand__STATE_VARIABLE_Globals_23_23, &check_hlds__try_expand__STATE_VARIABLE_Globals_24_24);
        }
#line 264 "try_expand.m"
        {
#line 264 "try_expand.m"
          hlds__hlds_module__module_info_set_globals_3_p_0(check_hlds__try_expand__STATE_VARIABLE_Globals_24_24, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_21_21, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_12);
#line 264 "try_expand.m"
          return;
        }
#line 254 "try_expand.m"
      }
#line 266 "try_expand.m"
    else
#line 267 "try_expand.m"
      {
#line 267 "try_expand.m"
        *check_hlds__try_expand__STATE_VARIABLE_Specs_14 = check_hlds__try_expand__STATE_VARIABLE_Specs_0_13;
#line 267 "try_expand.m"
        *check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_12 = check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11;
#line 267 "try_expand.m"
      }
#line 247 "try_expand.m"
  }
#line 203 "try_expand.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.try_expand. */
