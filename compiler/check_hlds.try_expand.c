/*
** Automatically generated from `try_expand.m'
** by the Mercury compiler,
** version rotd-2015-03-24
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
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "integer.mih"
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
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
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



#line 924 "try_expand.m"
struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s {
#line 924 "try_expand.m"
  MR_Word check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7;
#line 940 "try_expand.m"
  MR_bool check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded;
#line 931 "try_expand.m"
  jmp_buf check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__commit_0;
#line 931 "try_expand.m"
  MR_Word check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9;
#line 931 "try_expand.m"
  MR_Box check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__conv0_ArgInst_9;
#line 924 "try_expand.m"
};


#line 159 "check_hlds.try_expand.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__try_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 162 "check_hlds.try_expand.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__try_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 165 "check_hlds.try_expand.c"
static const MR_PseudoTypeInfo check_hlds__try_expand__check_hlds__try_expand__field_types_trys_info_0_0[4];

#line 168 "check_hlds.try_expand.c"
static const MR_ConstString check_hlds__try_expand__check_hlds__try_expand__field_names_trys_info_0_0[4];

#line 171 "check_hlds.try_expand.c"
static const MR_DuFunctorDesc check_hlds__try_expand__check_hlds__try_expand__du_functor_desc_trys_info_0_0;

#line 174 "check_hlds.try_expand.c"
static const MR_DuFunctorDescPtr check_hlds__try_expand__check_hlds__try_expand__du_stag_ordered_trys_info_0_0[1];

#line 177 "check_hlds.try_expand.c"
static const MR_DuPtagLayout check_hlds__try_expand__check_hlds__try_expand__du_ptag_ordered_trys_info_0[1];

#line 180 "check_hlds.try_expand.c"
static const MR_DuFunctorDescPtr check_hlds__try_expand__check_hlds__try_expand__du_name_ordered_trys_info_0[1];

#line 183 "check_hlds.try_expand.c"
static const MR_Integer check_hlds__try_expand__check_hlds__try_expand__functor_number_map_trys_info_0[1];

#line 186 "check_hlds.try_expand.c"
static MR_bool MR_CALL 
check_hlds__try_expand____Unify____trys_info_0_0_10001(
#line 189 "check_hlds.try_expand.c"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 191 "check_hlds.try_expand.c"
  MR_Box check_hlds__try_expand__wrapper_arg_2);

#line 194 "check_hlds.try_expand.c"
static void MR_CALL 
check_hlds__try_expand____Compare____trys_info_0_0_10001(
#line 197 "check_hlds.try_expand.c"
  MR_Box * check_hlds__try_expand__wrapper_arg_1,
#line 199 "check_hlds.try_expand.c"
  MR_Box check_hlds__try_expand__wrapper_arg_2,
#line 201 "check_hlds.try_expand.c"
  MR_Box check_hlds__try_expand__wrapper_arg_3);

#line 339 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand____Compare____trys_info_0_0(
#line 339 "try_expand.m"
  MR_Word * check_hlds__try_expand__HeadVar__1_1,
#line 339 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2,
#line 339 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__3_3);

#line 339 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand____Unify____trys_info_0_0(
#line 339 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 339 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2);

#line 931 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_1(
#line 931 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg);

#line 931 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_3(
#line 931 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg);

#line 931 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_2(
#line 931 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg);

#line 931 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_4(
#line 931 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg);

#line 924 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0(
#line 924 "try_expand.m"
  MR_Word check_hlds__try_expand__TmpTupleVar_5,
#line 924 "try_expand.m"
  MR_Word check_hlds__try_expand__TupleVar_6,
#line 924 "try_expand.m"
  MR_Word check_hlds__try_expand__TupleArgInsts_7,
#line 924 "try_expand.m"
  MR_Word * check_hlds__try_expand__CastOrUnify_8);

#line 916 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_unreachable_call_2_p_0(
#line 916 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_3,
#line 916 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_4);

#line 877 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_try_call_14_p_0(
#line 877 "try_expand.m"
  MR_String check_hlds__try_expand__PredName_15,
#line 877 "try_expand.m"
  MR_Word check_hlds__try_expand__LambdaVar_16,
#line 877 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_17,
#line 877 "try_expand.m"
  MR_Word check_hlds__try_expand__ExtraArgs_18,
#line 877 "try_expand.m"
  MR_Word check_hlds__try_expand__OutputTupleType_19,
#line 877 "try_expand.m"
  MR_Word check_hlds__try_expand__GoalPurity_20,
#line 877 "try_expand.m"
  MR_Word check_hlds__try_expand__Context_21,
#line 877 "try_expand.m"
  MR_Word * check_hlds__try_expand__OverallGoal_22,
#line 877 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_37,
#line 877 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_PredInfo_38,
#line 877 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_39,
#line 877 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_40,
#line 877 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_41,
#line 877 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_42);

#line 806 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_try_lambda_8_p_0(
#line 806 "try_expand.m"
  MR_Word check_hlds__try_expand__Body0_9,
#line 806 "try_expand.m"
  MR_Word check_hlds__try_expand__OutputVarsSet_10,
#line 806 "try_expand.m"
  MR_Word check_hlds__try_expand__OutputTupleType_11,
#line 806 "try_expand.m"
  MR_Word check_hlds__try_expand__MaybeIO_12,
#line 806 "try_expand.m"
  MR_Word * check_hlds__try_expand__LambdaVar_13,
#line 806 "try_expand.m"
  MR_Word * check_hlds__try_expand__AssignLambdaVar_14,
#line 806 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_41,
#line 806 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_42);

#line 784 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__lookup_case_goal_3_p_0(
#line 784 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 784 "try_expand.m"
  MR_Word check_hlds__try_expand__ConsId_2,
#line 784 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_3);

#line 716 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand__extract_from_succeeded_goal_5_p_0(
#line 716 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_6,
#line 716 "try_expand.m"
  MR_Word check_hlds__try_expand__SucceededGoal_7,
#line 716 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_8,
#line 716 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_9,
#line 716 "try_expand.m"
  MR_Word * check_hlds__try_expand__MaybeElse_10);

#line 676 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand__extract_intermediate_goal_parts_2_7_p_0(
#line 676 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_8,
#line 676 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_9,
#line 676 "try_expand.m"
  MR_Word check_hlds__try_expand__IntermediateGoal_10,
#line 676 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_11,
#line 676 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_12,
#line 676 "try_expand.m"
  MR_Word * check_hlds__try_expand__MaybeElse_13,
#line 676 "try_expand.m"
  MR_Word * check_hlds__try_expand__ExcpHandling_14);

#line 643 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__extract_intermediate_goal_parts_7_p_0(
#line 643 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_8,
#line 643 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_9,
#line 643 "try_expand.m"
  MR_Word check_hlds__try_expand__IntermediateGoal_10,
#line 643 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_11,
#line 643 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_12,
#line 643 "try_expand.m"
  MR_Word * check_hlds__try_expand__MaybeElse_13,
#line 643 "try_expand.m"
  MR_Word * check_hlds__try_expand__ExcpHandling_14);

#line 528 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goal_2_15_p_0(
#line 528 "try_expand.m"
  MR_Word check_hlds__try_expand__MaybeIO_16,
#line 528 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_17,
#line 528 "try_expand.m"
  MR_Word check_hlds__try_expand__Goal1_18,
#line 528 "try_expand.m"
  MR_Word check_hlds__try_expand__Then1_19,
#line 528 "try_expand.m"
  MR_Word check_hlds__try_expand__MaybeElse1_20,
#line 528 "try_expand.m"
  MR_Word check_hlds__try_expand__ExcpHandling1_21,
#line 528 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap_22,
#line 528 "try_expand.m"
  MR_Word check_hlds__try_expand__GoalOutputVarsSet_23,
#line 528 "try_expand.m"
  MR_Word * check_hlds__try_expand__FinalGoal_24,
#line 528 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_62,
#line 528 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_PredInfo_63,
#line 528 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_64,
#line 528 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_65,
#line 528 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_66,
#line 528 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_67);

#line 803 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand__expand_try_goal_5_p_0_1(
#line 803 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 803 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1);

#line 485 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goal_5_p_0(
#line 485 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap_6,
#line 485 "try_expand.m"
  MR_Word check_hlds__try_expand__TryGoal_7,
#line 485 "try_expand.m"
  MR_Word * check_hlds__try_expand__FinalGoal_8,
#line 485 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_33,
#line 485 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_34);

#line 464 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_if_then_else_9_p_0(
#line 464 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap0_10,
#line 464 "try_expand.m"
  MR_Word check_hlds__try_expand__Cond0_11,
#line 464 "try_expand.m"
  MR_Word * check_hlds__try_expand__Cond_12,
#line 464 "try_expand.m"
  MR_Word check_hlds__try_expand__Then0_13,
#line 464 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_14,
#line 464 "try_expand.m"
  MR_Word check_hlds__try_expand__Else0_15,
#line 464 "try_expand.m"
  MR_Word * check_hlds__try_expand__Else_16,
#line 464 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_22,
#line 464 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_23);

#line 454 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_cases_5_p_0(
#line 454 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 454 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2,
#line 454 "try_expand.m"
  MR_Word * check_hlds__try_expand__HeadVar__3_3,
#line 454 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_4,
#line 454 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_5);

#line 452 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_disj_5_p_0_1(
#line 452 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 452 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 452 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_2,
#line 452 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_3,
#line 452 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_4);

#line 447 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_disj_5_p_0(
#line 447 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap0_6,
#line 447 "try_expand.m"
  MR_Word check_hlds__try_expand__Goals0_7,
#line 447 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goals_8,
#line 447 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_10,
#line 447 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_11);

#line 435 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_conj_5_p_0(
#line 435 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 435 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2,
#line 435 "try_expand.m"
  MR_Word * check_hlds__try_expand__HeadVar__3_3,
#line 435 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_4,
#line 435 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_5);

#line 347 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(
#line 347 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap_6,
#line 347 "try_expand.m"
  MR_Word check_hlds__try_expand__Goal0_7,
#line 347 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_8,
#line 347 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_94,
#line 347 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_95);

#line 282 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_proc_6_p_0(
#line 282 "try_expand.m"
  MR_Word check_hlds__try_expand__PredId_7,
#line 282 "try_expand.m"
  MR_Integer check_hlds__try_expand__ProcId_8,
#line 282 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_19,
#line 282 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_20,
#line 282 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Specs_0_21,
#line 282 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Specs_22);

#line 279 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_pred_5_p_0_1(
#line 279 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 279 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 279 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_2,
#line 279 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_3,
#line 279 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_4,
#line 279 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_5);

#line 272 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_pred_5_p_0(
#line 272 "try_expand.m"
  MR_Word check_hlds__try_expand__PredId_6,
#line 272 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11,
#line 272 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_12,
#line 272 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Specs_0_13,
#line 272 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Specs_14);

#line 261 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_module_4_p_0_1(
#line 261 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 261 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 261 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_2,
#line 261 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_3,
#line 261 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_4,
#line 261 "try_expand.m"
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



#line 723 "check_hlds.try_expand.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__try_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 731 "check_hlds.try_expand.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__try_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 739 "check_hlds.try_expand.c"
static const MR_PseudoTypeInfo check_hlds__try_expand__check_hlds__try_expand__field_types_trys_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 747 "check_hlds.try_expand.c"
static const MR_ConstString check_hlds__try_expand__check_hlds__try_expand__field_names_trys_info_0_0[4] = {
  (MR_String) "ti_module_info",
  (MR_String) "ti_pred_info",
  (MR_String) "ti_proc_info",
  (MR_String) "ti_changed"
};

#line 755 "check_hlds.try_expand.c"
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

#line 770 "check_hlds.try_expand.c"
static const MR_DuFunctorDescPtr check_hlds__try_expand__check_hlds__try_expand__du_stag_ordered_trys_info_0_0[1] = {
  &check_hlds__try_expand__check_hlds__try_expand__du_functor_desc_trys_info_0_0
};

#line 775 "check_hlds.try_expand.c"
static const MR_DuPtagLayout check_hlds__try_expand__check_hlds__try_expand__du_ptag_ordered_trys_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__try_expand__check_hlds__try_expand__du_stag_ordered_trys_info_0_0
  }
};

#line 784 "check_hlds.try_expand.c"
static const MR_DuFunctorDescPtr check_hlds__try_expand__check_hlds__try_expand__du_name_ordered_trys_info_0[1] = {
  &check_hlds__try_expand__check_hlds__try_expand__du_functor_desc_trys_info_0_0
};

#line 789 "check_hlds.try_expand.c"
static const MR_Integer check_hlds__try_expand__check_hlds__try_expand__functor_number_map_trys_info_0[1] = {
  (MR_Integer) 0
};

#line 794 "check_hlds.try_expand.c"
const MR_TypeCtorInfo_Struct check_hlds__try_expand__check_hlds__try_expand__type_ctor_info_trys_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 339 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand____Compare____trys_info_0_0(
#line 339 "try_expand.m"
  MR_Word * check_hlds__try_expand__HeadVar__1_1,
#line 339 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2,
#line 339 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__3_3)
#line 339 "try_expand.m"
{
#line 339 "try_expand.m"
  {
#line 339 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 339 "try_expand.m"
    MR_Integer check_hlds__try_expand__CastX_15 = (MR_Integer) check_hlds__try_expand__HeadVar__2_2;
#line 339 "try_expand.m"
    MR_Integer check_hlds__try_expand__CastY_16 = (MR_Integer) check_hlds__try_expand__HeadVar__3_3;

#line 339 "try_expand.m"
    check_hlds__try_expand__succeeded = (check_hlds__try_expand__CastX_15 == check_hlds__try_expand__CastY_16);
#line 339 "try_expand.m"
    if (check_hlds__try_expand__succeeded)
#line 889 "check_hlds.try_expand.c"
      *check_hlds__try_expand__HeadVar__1_1 = (MR_Integer) 0;
#line 339 "try_expand.m"
    else
#line 339 "try_expand.m"
      {
#line 339 "try_expand.m"
        MR_Word check_hlds__try_expand__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 339 "try_expand.m"
        MR_Word check_hlds__try_expand__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 339 "try_expand.m"
        MR_Word check_hlds__try_expand__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 2)));
#line 339 "try_expand.m"
        MR_Word check_hlds__try_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 3)));
#line 339 "try_expand.m"
        MR_Word check_hlds__try_expand__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__3_3, (MR_Integer) 0)));
#line 339 "try_expand.m"
        MR_Word check_hlds__try_expand__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__3_3, (MR_Integer) 1)));
#line 339 "try_expand.m"
        MR_Word check_hlds__try_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__3_3, (MR_Integer) 2)));
#line 339 "try_expand.m"
        MR_Word check_hlds__try_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__3_3, (MR_Integer) 3)));
#line 339 "try_expand.m"
        MR_Word check_hlds__try_expand__V_12_12;

#line 339 "try_expand.m"
        {
#line 339 "try_expand.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__try_expand__V_12_12, check_hlds__try_expand__V_4_4, check_hlds__try_expand__V_8_8);
        }
#line 919 "check_hlds.try_expand.c"
        check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_12_12 == (MR_Integer) 0);
#line 339 "try_expand.m"
        check_hlds__try_expand__succeeded = !(check_hlds__try_expand__succeeded);
#line 339 "try_expand.m"
        if (check_hlds__try_expand__succeeded)
#line 339 "try_expand.m"
          *check_hlds__try_expand__HeadVar__1_1 = check_hlds__try_expand__V_12_12;
#line 339 "try_expand.m"
        else
#line 339 "try_expand.m"
          {
#line 339 "try_expand.m"
            MR_Word check_hlds__try_expand__V_13_13;

#line 339 "try_expand.m"
            {
#line 339 "try_expand.m"
              hlds__hlds_pred____Compare____pred_info_0_0(&check_hlds__try_expand__V_13_13, check_hlds__try_expand__V_5_5, check_hlds__try_expand__V_9_9);
            }
#line 939 "check_hlds.try_expand.c"
            check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_13_13 == (MR_Integer) 0);
#line 339 "try_expand.m"
            check_hlds__try_expand__succeeded = !(check_hlds__try_expand__succeeded);
#line 339 "try_expand.m"
            if (check_hlds__try_expand__succeeded)
#line 339 "try_expand.m"
              *check_hlds__try_expand__HeadVar__1_1 = check_hlds__try_expand__V_13_13;
#line 339 "try_expand.m"
            else
#line 339 "try_expand.m"
              {
#line 339 "try_expand.m"
                MR_Word check_hlds__try_expand__V_14_14;

#line 339 "try_expand.m"
                {
#line 339 "try_expand.m"
                  hlds__hlds_pred____Compare____proc_info_0_0(&check_hlds__try_expand__V_14_14, check_hlds__try_expand__V_6_6, check_hlds__try_expand__V_10_10);
                }
#line 959 "check_hlds.try_expand.c"
                check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_14_14 == (MR_Integer) 0);
#line 339 "try_expand.m"
                check_hlds__try_expand__succeeded = !(check_hlds__try_expand__succeeded);
#line 339 "try_expand.m"
                if (check_hlds__try_expand__succeeded)
#line 339 "try_expand.m"
                  *check_hlds__try_expand__HeadVar__1_1 = check_hlds__try_expand__V_14_14;
#line 339 "try_expand.m"
                else
#line 339 "try_expand.m"
                  {
#line 339 "try_expand.m"
                    MR_Integer check_hlds__try_expand__V_21_21 = (MR_Integer) check_hlds__try_expand__V_7_7;
#line 339 "try_expand.m"
                    MR_Integer check_hlds__try_expand__V_22_22 = (MR_Integer) check_hlds__try_expand__V_11_11;

#line 339 "try_expand.m"
                    {
#line 339 "try_expand.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__try_expand__HeadVar__1_1, check_hlds__try_expand__V_21_21, check_hlds__try_expand__V_22_22);
#line 339 "try_expand.m"
                      return;
                    }
#line 339 "try_expand.m"
                  }
#line 339 "try_expand.m"
              }
#line 339 "try_expand.m"
          }
#line 339 "try_expand.m"
      }
#line 339 "try_expand.m"
  }
#line 339 "try_expand.m"
}

#line 339 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand____Unify____trys_info_0_0(
#line 339 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 339 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2)
#line 339 "try_expand.m"
{
#line 339 "try_expand.m"
  {
#line 339 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 339 "try_expand.m"
    MR_Integer check_hlds__try_expand__CastX_11 = (MR_Integer) check_hlds__try_expand__HeadVar__1_1;
#line 339 "try_expand.m"
    MR_Integer check_hlds__try_expand__CastY_12 = (MR_Integer) check_hlds__try_expand__HeadVar__2_2;

#line 339 "try_expand.m"
    check_hlds__try_expand__succeeded = (check_hlds__try_expand__CastX_11 == check_hlds__try_expand__CastY_12);
#line 339 "try_expand.m"
    if (check_hlds__try_expand__succeeded)
#line 339 "try_expand.m"
      check_hlds__try_expand__succeeded = MR_TRUE;
#line 339 "try_expand.m"
    else
#line 339 "try_expand.m"
      {
#line 339 "try_expand.m"
        MR_Word check_hlds__try_expand__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 0)));
#line 339 "try_expand.m"
        MR_Word check_hlds__try_expand__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 1)));
#line 339 "try_expand.m"
        MR_Word check_hlds__try_expand__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 2)));
#line 339 "try_expand.m"
        MR_Word check_hlds__try_expand__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 3)));
#line 339 "try_expand.m"
        MR_Word check_hlds__try_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 339 "try_expand.m"
        MR_Word check_hlds__try_expand__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 339 "try_expand.m"
        MR_Word check_hlds__try_expand__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 2)));
#line 339 "try_expand.m"
        MR_Word check_hlds__try_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 3)));

#line 1041 "check_hlds.try_expand.c"
        {
#line 1043 "check_hlds.try_expand.c"
          check_hlds__try_expand__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__try_expand__V_3_3, check_hlds__try_expand__V_7_7);
        }
#line 339 "try_expand.m"
        if (check_hlds__try_expand__succeeded)
#line 339 "try_expand.m"
          {
#line 1050 "check_hlds.try_expand.c"
            {
#line 1052 "check_hlds.try_expand.c"
              check_hlds__try_expand__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(check_hlds__try_expand__V_4_4, check_hlds__try_expand__V_8_8);
            }
#line 339 "try_expand.m"
            if (check_hlds__try_expand__succeeded)
#line 339 "try_expand.m"
              {
#line 1059 "check_hlds.try_expand.c"
                {
#line 1061 "check_hlds.try_expand.c"
                  check_hlds__try_expand__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(check_hlds__try_expand__V_5_5, check_hlds__try_expand__V_9_9);
                }
#line 339 "try_expand.m"
                if (check_hlds__try_expand__succeeded)
#line 1066 "check_hlds.try_expand.c"
                  check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_6_6 == check_hlds__try_expand__V_10_10);
#line 339 "try_expand.m"
              }
#line 339 "try_expand.m"
          }
#line 339 "try_expand.m"
      }
#line 339 "try_expand.m"
    return check_hlds__try_expand__succeeded;
#line 339 "try_expand.m"
  }
#line 339 "try_expand.m"
}

#line 931 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_1(
#line 931 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg)
#line 931 "try_expand.m"
{
#line 931 "try_expand.m"
  {
#line 931 "try_expand.m"
    struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s * check_hlds__try_expand__env_ptr = (struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s *) check_hlds__try_expand__env_ptr_arg;

#line 931 "try_expand.m"
    MR_builtin_longjmp((check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__commit_0, 1);
#line 931 "try_expand.m"
  }
#line 931 "try_expand.m"
}

#line 931 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_3(
#line 931 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg)
#line 931 "try_expand.m"
{
#line 931 "try_expand.m"
  {
#line 931 "try_expand.m"
    struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s * check_hlds__try_expand__env_ptr = (struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s *) check_hlds__try_expand__env_ptr_arg;

#line 931 "try_expand.m"
    (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9 = ((MR_Word) (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__conv0_ArgInst_9);
#line 931 "try_expand.m"
    {
#line 931 "try_expand.m"
      check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_2(check_hlds__try_expand__env_ptr);
#line 931 "try_expand.m"
      return;
    }
#line 931 "try_expand.m"
  }
#line 931 "try_expand.m"
}

#line 931 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_2(
#line 931 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg)
#line 931 "try_expand.m"
{
#line 931 "try_expand.m"
  {
#line 931 "try_expand.m"
    struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s * check_hlds__try_expand__env_ptr = (struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s *) check_hlds__try_expand__env_ptr_arg;

#line 931 "try_expand.m"
    {
#line 932 "try_expand.m"
      MR_Word check_hlds__try_expand__V_13_13;
#line 932 "try_expand.m"
      MR_Word check_hlds__try_expand__V_10_10;

#line 932 "try_expand.m"
      (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 932 "try_expand.m"
      if ((check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded)
#line 932 "try_expand.m"
        {
#line 932 "try_expand.m"
          {
#line 932 "try_expand.m"
            check_hlds__try_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9, (MR_Integer) 1)));
#line 932 "try_expand.m"
            check_hlds__try_expand__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9, (MR_Integer) 2)));
#line 932 "try_expand.m"
          }
#line 932 "try_expand.m"
          (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = (check_hlds__try_expand__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 932 "try_expand.m"
        }
#line 932 "try_expand.m"
      (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = !((check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded);
#line 932 "try_expand.m"
      if ((check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded)
#line 932 "try_expand.m"
        {
#line 932 "try_expand.m"
          check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_1(check_hlds__try_expand__env_ptr);
#line 932 "try_expand.m"
          return;
        }
#line 931 "try_expand.m"
    }
#line 931 "try_expand.m"
  }
#line 931 "try_expand.m"
}

#line 931 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_4(
#line 931 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg)
#line 931 "try_expand.m"
{
#line 931 "try_expand.m"
  {
#line 931 "try_expand.m"
    struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s * check_hlds__try_expand__env_ptr = (struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s *) check_hlds__try_expand__env_ptr_arg;

#line 931 "try_expand.m"
    if (MR_builtin_setjmp((check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__commit_0) == 0)
#line 931 "try_expand.m"
      {
#line 931 "try_expand.m"
        {
#line 931 "try_expand.m"
          {
#line 931 "try_expand.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__conv0_ArgInst_9, (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7, check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_3, check_hlds__try_expand__env_ptr);
          }
#line 931 "try_expand.m"
        }
#line 931 "try_expand.m"
        (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = MR_FALSE;
#line 931 "try_expand.m"
      }
#line 931 "try_expand.m"
    else
#line 931 "try_expand.m"
      (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = MR_TRUE;
#line 931 "try_expand.m"
  }
#line 931 "try_expand.m"
}

#line 924 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0(
#line 924 "try_expand.m"
  MR_Word check_hlds__try_expand__TmpTupleVar_5,
#line 924 "try_expand.m"
  MR_Word check_hlds__try_expand__TupleVar_6,
#line 924 "try_expand.m"
  MR_Word check_hlds__try_expand__TupleArgInsts_7,
#line 924 "try_expand.m"
  MR_Word * check_hlds__try_expand__CastOrUnify_8)
#line 924 "try_expand.m"
{
#line 924 "try_expand.m"
  {
#line 924 "try_expand.m"
    struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s check_hlds__try_expand__env;

#line 924 "try_expand.m"
    (check_hlds__try_expand__env).check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7 = check_hlds__try_expand__TupleArgInsts_7;
#line 931 "try_expand.m"
    {
#line 931 "try_expand.m"
      check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_4(&check_hlds__try_expand__env);
    }
#line 940 "try_expand.m"
    if ((check_hlds__try_expand__env).check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded)
#line 934 "try_expand.m"
      {
#line 934 "try_expand.m"
        MR_Integer check_hlds__try_expand__TupleArity_11;
#line 934 "try_expand.m"
        MR_Word check_hlds__try_expand__TupleInst_12;
#line 934 "try_expand.m"
        MR_Word check_hlds__try_expand__V_16_16;
#line 934 "try_expand.m"
        MR_Word check_hlds__try_expand__V_17_17;
#line 934 "try_expand.m"
        MR_Word check_hlds__try_expand__V_18_18;
#line 934 "try_expand.m"
        MR_Word check_hlds__try_expand__V_21_21;
#line 934 "try_expand.m"
        MR_Word check_hlds__try_expand__V_22_22;

#line 934 "try_expand.m"
        {
#line 934 "try_expand.m"
          check_hlds__try_expand__TupleArity_11 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (check_hlds__try_expand__env).check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7);
        }
#line 936 "try_expand.m"
        {
#line 936 "try_expand.m"
          check_hlds__try_expand__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 936 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_18_18, 1) = ((MR_Box) (check_hlds__try_expand__TupleArity_11));
#line 936 "try_expand.m"
        }
#line 936 "try_expand.m"
        {
#line 936 "try_expand.m"
          check_hlds__try_expand__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 936 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_17_17, 0) = ((MR_Box) (check_hlds__try_expand__V_18_18));
#line 936 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_17_17, 1) = ((MR_Box) ((check_hlds__try_expand__env).check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7));
#line 936 "try_expand.m"
        }
#line 937 "try_expand.m"
        {
#line 937 "try_expand.m"
          check_hlds__try_expand__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 937 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_16_16, 0) = ((MR_Box) (check_hlds__try_expand__V_17_17));
#line 937 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 937 "try_expand.m"
        }
#line 935 "try_expand.m"
        {
#line 935 "try_expand.m"
          check_hlds__try_expand__TupleInst_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 935 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__TupleInst_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 935 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__TupleInst_12, 1) = ((MR_Box) ((MR_Integer) 0));
#line 935 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__TupleInst_12, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 935 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__TupleInst_12, 3) = ((MR_Box) (check_hlds__try_expand__V_16_16));
#line 935 "try_expand.m"
        }
#line 939 "try_expand.m"
        {
#line 939 "try_expand.m"
          check_hlds__try_expand__V_21_21 = parse_tree__prog_mode__ground_inst_0_f_0();
        }
#line 939 "try_expand.m"
        {
#line 939 "try_expand.m"
          check_hlds__try_expand__V_22_22 = mercury__term__context_init_0_f_0();
        }
#line 938 "try_expand.m"
        {
#line 938 "try_expand.m"
          hlds__goal_util__generate_cast_with_insts_7_p_0((MR_Integer) 1, check_hlds__try_expand__TmpTupleVar_5, check_hlds__try_expand__TupleVar_6, check_hlds__try_expand__V_21_21, check_hlds__try_expand__TupleInst_12, check_hlds__try_expand__V_22_22, check_hlds__try_expand__CastOrUnify_8);
#line 938 "try_expand.m"
          return;
        }
#line 934 "try_expand.m"
      }
#line 940 "try_expand.m"
    else
#line 941 "try_expand.m"
      {
#line 941 "try_expand.m"
        MR_Word check_hlds__try_expand__V_23_23;
#line 941 "try_expand.m"
        MR_Word check_hlds__try_expand__V_24_24;

#line 942 "try_expand.m"
        {
#line 942 "try_expand.m"
          check_hlds__try_expand__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 942 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_23_23, 0) = ((MR_Box) (check_hlds__try_expand__TmpTupleVar_5));
#line 942 "try_expand.m"
        }
#line 942 "try_expand.m"
        {
#line 942 "try_expand.m"
          check_hlds__try_expand__V_24_24 = mercury__term__context_init_0_f_0();
        }
#line 941 "try_expand.m"
        {
#line 941 "try_expand.m"
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__try_expand__TupleVar_6, check_hlds__try_expand__V_23_23, check_hlds__try_expand__V_24_24, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__try_expand_scalar_common_6[1]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__CastOrUnify_8);
#line 941 "try_expand.m"
          return;
        }
#line 941 "try_expand.m"
      }
#line 924 "try_expand.m"
  }
#line 924 "try_expand.m"
}

#line 916 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_unreachable_call_2_p_0(
#line 916 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_3,
#line 916 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_4)
#line 916 "try_expand.m"
{
#line 918 "try_expand.m"
  {
#line 918 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 918 "try_expand.m"
    MR_Word check_hlds__try_expand__V_5_5;
#line 918 "try_expand.m"
    MR_Word check_hlds__try_expand__V_13_13;
#line 918 "try_expand.m"
    MR_Word check_hlds__try_expand__V_14_14;

#line 919 "try_expand.m"
    {
#line 919 "try_expand.m"
      check_hlds__try_expand__V_5_5 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 921 "try_expand.m"
    {
#line 921 "try_expand.m"
      check_hlds__try_expand__V_13_13 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 921 "try_expand.m"
    {
#line 921 "try_expand.m"
      check_hlds__try_expand__V_14_14 = mercury__term__context_init_0_f_0();
    }
#line 919 "try_expand.m"
    {
#line 919 "try_expand.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__try_expand__V_5_5, (MR_String) "unreachable", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__V_13_13, check_hlds__try_expand__ModuleInfo_3, check_hlds__try_expand__V_14_14, check_hlds__try_expand__Goal_4);
#line 919 "try_expand.m"
      return;
    }
#line 918 "try_expand.m"
  }
#line 916 "try_expand.m"
}

#line 877 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_try_call_14_p_0(
#line 877 "try_expand.m"
  MR_String check_hlds__try_expand__PredName_15,
#line 877 "try_expand.m"
  MR_Word check_hlds__try_expand__LambdaVar_16,
#line 877 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_17,
#line 877 "try_expand.m"
  MR_Word check_hlds__try_expand__ExtraArgs_18,
#line 877 "try_expand.m"
  MR_Word check_hlds__try_expand__OutputTupleType_19,
#line 877 "try_expand.m"
  MR_Word check_hlds__try_expand__GoalPurity_20,
#line 877 "try_expand.m"
  MR_Word check_hlds__try_expand__Context_21,
#line 877 "try_expand.m"
  MR_Word * check_hlds__try_expand__OverallGoal_22,
#line 877 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_37,
#line 877 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_PredInfo_38,
#line 877 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_39,
#line 877 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_40,
#line 877 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_41,
#line 877 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_42)
#line 877 "try_expand.m"
{
#line 884 "try_expand.m"
  {
#line 884 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 884 "try_expand.m"
    MR_Word check_hlds__try_expand__PolyInfo0_26;
#line 884 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeInfoVar_27;
#line 884 "try_expand.m"
    MR_Word check_hlds__try_expand__MakeTypeInfoGoals_28;
#line 884 "try_expand.m"
    MR_Word check_hlds__try_expand__PolyInfo_29;
#line 884 "try_expand.m"
    MR_Word check_hlds__try_expand__Args_31;
#line 884 "try_expand.m"
    MR_Word check_hlds__try_expand__CallGoal0_33;
#line 884 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalInfo_34;
#line 884 "try_expand.m"
    MR_Word check_hlds__try_expand__CallGoal_35;
#line 884 "try_expand.m"
    MR_Word check_hlds__try_expand__V_47_47;
#line 884 "try_expand.m"
    MR_Word check_hlds__try_expand__V_48_48;
#line 884 "try_expand.m"
    MR_Word check_hlds__try_expand__V_49_49;
#line 884 "try_expand.m"
    MR_Word check_hlds__try_expand__V_51_51;
#line 884 "try_expand.m"
    MR_Word check_hlds__try_expand__V_55_55;
#line 884 "try_expand.m"
    MR_Word check_hlds__try_expand__V_57_57;
#line 884 "try_expand.m"
    MR_Word check_hlds__try_expand__V_58_58;

#line 885 "try_expand.m"
    {
#line 885 "try_expand.m"
      check_hlds__polymorphism__create_poly_info_4_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_41, check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_37, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_39, &check_hlds__try_expand__PolyInfo0_26);
    }
#line 886 "try_expand.m"
    {
#line 886 "try_expand.m"
      check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(check_hlds__try_expand__OutputTupleType_19, check_hlds__try_expand__Context_21, &check_hlds__try_expand__TypeInfoVar_27, &check_hlds__try_expand__MakeTypeInfoGoals_28, check_hlds__try_expand__PolyInfo0_26, &check_hlds__try_expand__PolyInfo_29);
    }
#line 888 "try_expand.m"
    {
#line 888 "try_expand.m"
      check_hlds__polymorphism__poly_info_extract_6_p_0(check_hlds__try_expand__PolyInfo_29, check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_37, check_hlds__try_expand__STATE_VARIABLE_PredInfo_38, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_39, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_40, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_42);
    }
#line 892 "try_expand.m"
    {
#line 892 "try_expand.m"
      check_hlds__try_expand__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 892 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_49_49, 0) = ((MR_Box) (check_hlds__try_expand__ResultVar_17));
#line 892 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 892 "try_expand.m"
    }
#line 892 "try_expand.m"
    {
#line 892 "try_expand.m"
      check_hlds__try_expand__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 892 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_48_48, 0) = ((MR_Box) (check_hlds__try_expand__LambdaVar_16));
#line 892 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_48_48, 1) = ((MR_Box) (check_hlds__try_expand__V_49_49));
#line 892 "try_expand.m"
    }
#line 892 "try_expand.m"
    {
#line 892 "try_expand.m"
      check_hlds__try_expand__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 892 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_47_47, 0) = ((MR_Box) (check_hlds__try_expand__TypeInfoVar_27));
#line 892 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_47_47, 1) = ((MR_Box) (check_hlds__try_expand__V_48_48));
#line 892 "try_expand.m"
    }
#line 892 "try_expand.m"
    {
#line 892 "try_expand.m"
      check_hlds__try_expand__Args_31 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__try_expand_scalar_common_1[1], check_hlds__try_expand__V_47_47, check_hlds__try_expand__ExtraArgs_18);
    }
#line 894 "try_expand.m"
    {
#line 894 "try_expand.m"
      check_hlds__try_expand__V_51_51 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 896 "try_expand.m"
    {
#line 896 "try_expand.m"
      check_hlds__try_expand__V_55_55 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 894 "try_expand.m"
    {
#line 894 "try_expand.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__try_expand__V_51_51, check_hlds__try_expand__PredName_15, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[5]), (MR_Integer) 4, (MR_Integer) 0, check_hlds__try_expand__Args_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__V_55_55, *check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_42, check_hlds__try_expand__Context_21, &check_hlds__try_expand__CallGoal0_33);
    }
#line 898 "try_expand.m"
    {
#line 898 "try_expand.m"
      hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__try_expand__Context_21, &check_hlds__try_expand__GoalInfo_34);
    }
#line 906 "try_expand.m"
    if ((check_hlds__try_expand__GoalPurity_20 == (MR_Integer) 0))
#line 905 "try_expand.m"
      check_hlds__try_expand__CallGoal_35 = check_hlds__try_expand__CallGoal0_33;
#line 906 "try_expand.m"
    else
#line 909 "try_expand.m"
      {
#line 909 "try_expand.m"
        MR_Word check_hlds__try_expand__ScopeReason_36;
#line 909 "try_expand.m"
        MR_Word check_hlds__try_expand__V_56_56;

#line 910 "try_expand.m"
        {
#line 910 "try_expand.m"
          check_hlds__try_expand__ScopeReason_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 910 "try_expand.m"
          MR_hl_field(MR_mktag(2), check_hlds__try_expand__ScopeReason_36, 0) = ((MR_Box) (check_hlds__try_expand__GoalPurity_20));
#line 910 "try_expand.m"
        }
#line 911 "try_expand.m"
        {
#line 911 "try_expand.m"
          check_hlds__try_expand__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 911 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 911 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_56_56, 1) = ((MR_Box) (check_hlds__try_expand__ScopeReason_36));
#line 911 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_56_56, 2) = ((MR_Box) (check_hlds__try_expand__CallGoal0_33));
#line 911 "try_expand.m"
        }
#line 911 "try_expand.m"
        {
#line 911 "try_expand.m"
          check_hlds__try_expand__CallGoal_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 911 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__CallGoal_35, 0) = ((MR_Box) (check_hlds__try_expand__V_56_56));
#line 911 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__CallGoal_35, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo_34));
#line 911 "try_expand.m"
        }
#line 909 "try_expand.m"
      }
#line 914 "try_expand.m"
    {
#line 914 "try_expand.m"
      check_hlds__try_expand__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 914 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_58_58, 0) = ((MR_Box) (check_hlds__try_expand__CallGoal_35));
#line 914 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 914 "try_expand.m"
    }
#line 914 "try_expand.m"
    {
#line 914 "try_expand.m"
      check_hlds__try_expand__V_57_57 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__try_expand__MakeTypeInfoGoals_28, check_hlds__try_expand__V_58_58);
    }
#line 914 "try_expand.m"
    {
#line 914 "try_expand.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__try_expand__V_57_57, check_hlds__try_expand__GoalInfo_34, check_hlds__try_expand__OverallGoal_22);
#line 914 "try_expand.m"
      return;
    }
#line 884 "try_expand.m"
  }
#line 877 "try_expand.m"
}

#line 806 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_try_lambda_8_p_0(
#line 806 "try_expand.m"
  MR_Word check_hlds__try_expand__Body0_9,
#line 806 "try_expand.m"
  MR_Word check_hlds__try_expand__OutputVarsSet_10,
#line 806 "try_expand.m"
  MR_Word check_hlds__try_expand__OutputTupleType_11,
#line 806 "try_expand.m"
  MR_Word check_hlds__try_expand__MaybeIO_12,
#line 806 "try_expand.m"
  MR_Word * check_hlds__try_expand__LambdaVar_13,
#line 806 "try_expand.m"
  MR_Word * check_hlds__try_expand__AssignLambdaVar_14,
#line 806 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_41,
#line 806 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_42)
#line 806 "try_expand.m"
{
#line 811 "try_expand.m"
  {
#line 811 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeCtorInfo_87_87;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeInfo_88_88;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__BodyInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Body0_9, (MR_Integer) 1)));
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__NonLocals0_18;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__NonLocals1_19;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__OutputTupleVar_20;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaParams_23;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaParamTypes_24;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaParamModes_25;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__NonLocals_26;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaType_27;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__MakeOutputTuple_28;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaBody0_29;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__VarSet0_30;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__VarTypes0_31;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__VarSet_32;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__VarTypes_33;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__Renaming_34;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaBody_35;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__BodyGoalInfo_37;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__BodyDetism_38;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaDetism_39;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__RHS_40;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_69_69;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__V_71_71;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__V_72_72;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__V_75_75;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_76_76;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__V_82_82;
#line 811 "try_expand.m"
    MR_Word check_hlds__try_expand__V_83_83;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Body0_9, (MR_Integer) 0)));
#line 852 "try_expand.m"
    MR_Word check_hlds__try_expand__V_36_36;

#line 813 "try_expand.m"
    {
#line 813 "try_expand.m"
      check_hlds__try_expand__NonLocals0_18 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__try_expand__BodyInfo0_17);
    }
#line 1721 "check_hlds.try_expand.c"
    check_hlds__try_expand__TypeCtorInfo_87_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 814 "try_expand.m"
    {
#line 814 "try_expand.m"
      parse_tree__set_of_var__difference_3_p_0(check_hlds__try_expand__TypeCtorInfo_87_87, check_hlds__try_expand__NonLocals0_18, check_hlds__try_expand__OutputVarsSet_10, &check_hlds__try_expand__NonLocals1_19);
    }
#line 816 "try_expand.m"
    {
#line 816 "try_expand.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(check_hlds__try_expand__OutputTupleType_11, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[3]), &check_hlds__try_expand__OutputTupleVar_20, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_41, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44);
    }
#line 824 "try_expand.m"
    if ((check_hlds__try_expand__MaybeIO_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 825 "try_expand.m"
      {
#line 825 "try_expand.m"
        MR_Word check_hlds__try_expand__V_48_48;

#line 826 "try_expand.m"
        {
#line 826 "try_expand.m"
          check_hlds__try_expand__LambdaParams_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 826 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParams_23, 0) = ((MR_Box) (check_hlds__try_expand__OutputTupleVar_20));
#line 826 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParams_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 826 "try_expand.m"
        }
#line 827 "try_expand.m"
        {
#line 827 "try_expand.m"
          check_hlds__try_expand__LambdaParamTypes_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 827 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamTypes_24, 0) = ((MR_Box) (check_hlds__try_expand__OutputTupleType_11));
#line 827 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamTypes_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 827 "try_expand.m"
        }
#line 828 "try_expand.m"
        {
#line 828 "try_expand.m"
          check_hlds__try_expand__V_48_48 = parse_tree__prog_mode__out_mode_0_f_0();
        }
#line 828 "try_expand.m"
        {
#line 828 "try_expand.m"
          check_hlds__try_expand__LambdaParamModes_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 828 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamModes_25, 0) = ((MR_Box) (check_hlds__try_expand__V_48_48));
#line 828 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamModes_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 828 "try_expand.m"
        }
#line 829 "try_expand.m"
        check_hlds__try_expand__NonLocals_26 = check_hlds__try_expand__NonLocals0_18;
#line 825 "try_expand.m"
      }
#line 824 "try_expand.m"
    else
#line 819 "try_expand.m"
      {
#line 819 "try_expand.m"
        MR_Word check_hlds__try_expand__IOVarInitial_21;
#line 819 "try_expand.m"
        MR_Word check_hlds__try_expand__IOVarFinal_22;
#line 819 "try_expand.m"
        MR_Word check_hlds__try_expand__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeIO_12, (MR_Integer) 0)));
#line 819 "try_expand.m"
        MR_Word check_hlds__try_expand__V_51_51;
#line 819 "try_expand.m"
        MR_Word check_hlds__try_expand__V_52_52;
#line 819 "try_expand.m"
        MR_Word check_hlds__try_expand__V_54_54;
#line 819 "try_expand.m"
        MR_Word check_hlds__try_expand__V_55_55;
#line 819 "try_expand.m"
        MR_Word check_hlds__try_expand__V_56_56;
#line 819 "try_expand.m"
        MR_Word check_hlds__try_expand__V_57_57;
#line 819 "try_expand.m"
        MR_Word check_hlds__try_expand__V_59_59;
#line 819 "try_expand.m"
        MR_Word check_hlds__try_expand__V_60_60;
#line 819 "try_expand.m"
        MR_Word check_hlds__try_expand__V_61_61;
#line 819 "try_expand.m"
        MR_Word check_hlds__try_expand__V_62_62;
#line 819 "try_expand.m"
        MR_Word check_hlds__try_expand__V_63_63;

#line 819 "try_expand.m"
        check_hlds__try_expand__IOVarInitial_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_50_50, (MR_Integer) 0)));
#line 819 "try_expand.m"
        check_hlds__try_expand__IOVarFinal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_50_50, (MR_Integer) 1)));
#line 820 "try_expand.m"
        {
#line 820 "try_expand.m"
          check_hlds__try_expand__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, 0) = ((MR_Box) (check_hlds__try_expand__IOVarFinal_22));
#line 820 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 820 "try_expand.m"
        }
#line 820 "try_expand.m"
        {
#line 820 "try_expand.m"
          check_hlds__try_expand__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, 0) = ((MR_Box) (check_hlds__try_expand__IOVarInitial_21));
#line 820 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, 1) = ((MR_Box) (check_hlds__try_expand__V_52_52));
#line 820 "try_expand.m"
        }
#line 820 "try_expand.m"
        {
#line 820 "try_expand.m"
          check_hlds__try_expand__LambdaParams_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParams_23, 0) = ((MR_Box) (check_hlds__try_expand__OutputTupleVar_20));
#line 820 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParams_23, 1) = ((MR_Box) (check_hlds__try_expand__V_51_51));
#line 820 "try_expand.m"
        }
#line 821 "try_expand.m"
        {
#line 821 "try_expand.m"
          check_hlds__try_expand__V_55_55 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
        }
#line 821 "try_expand.m"
        {
#line 821 "try_expand.m"
          check_hlds__try_expand__V_57_57 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
        }
#line 821 "try_expand.m"
        {
#line 821 "try_expand.m"
          check_hlds__try_expand__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 821 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_56_56, 0) = ((MR_Box) (check_hlds__try_expand__V_57_57));
#line 821 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 821 "try_expand.m"
        }
#line 821 "try_expand.m"
        {
#line 821 "try_expand.m"
          check_hlds__try_expand__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 821 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_54_54, 0) = ((MR_Box) (check_hlds__try_expand__V_55_55));
#line 821 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_54_54, 1) = ((MR_Box) (check_hlds__try_expand__V_56_56));
#line 821 "try_expand.m"
        }
#line 821 "try_expand.m"
        {
#line 821 "try_expand.m"
          check_hlds__try_expand__LambdaParamTypes_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 821 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamTypes_24, 0) = ((MR_Box) (check_hlds__try_expand__OutputTupleType_11));
#line 821 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamTypes_24, 1) = ((MR_Box) (check_hlds__try_expand__V_54_54));
#line 821 "try_expand.m"
        }
#line 822 "try_expand.m"
        {
#line 822 "try_expand.m"
          check_hlds__try_expand__V_59_59 = parse_tree__prog_mode__out_mode_0_f_0();
        }
#line 822 "try_expand.m"
        {
#line 822 "try_expand.m"
          check_hlds__try_expand__V_61_61 = parse_tree__prog_mode__di_mode_0_f_0();
        }
#line 822 "try_expand.m"
        {
#line 822 "try_expand.m"
          check_hlds__try_expand__V_63_63 = parse_tree__prog_mode__uo_mode_0_f_0();
        }
#line 822 "try_expand.m"
        {
#line 822 "try_expand.m"
          check_hlds__try_expand__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 822 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_62_62, 0) = ((MR_Box) (check_hlds__try_expand__V_63_63));
#line 822 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 822 "try_expand.m"
        }
#line 822 "try_expand.m"
        {
#line 822 "try_expand.m"
          check_hlds__try_expand__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 822 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_60_60, 0) = ((MR_Box) (check_hlds__try_expand__V_61_61));
#line 822 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_60_60, 1) = ((MR_Box) (check_hlds__try_expand__V_62_62));
#line 822 "try_expand.m"
        }
#line 822 "try_expand.m"
        {
#line 822 "try_expand.m"
          check_hlds__try_expand__LambdaParamModes_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 822 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamModes_25, 0) = ((MR_Box) (check_hlds__try_expand__V_59_59));
#line 822 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamModes_25, 1) = ((MR_Box) (check_hlds__try_expand__V_60_60));
#line 822 "try_expand.m"
        }
#line 823 "try_expand.m"
        {
#line 823 "try_expand.m"
          parse_tree__set_of_var__delete_3_p_0(check_hlds__try_expand__TypeCtorInfo_87_87, check_hlds__try_expand__IOVarFinal_22, check_hlds__try_expand__NonLocals1_19, &check_hlds__try_expand__NonLocals_26);
        }
#line 819 "try_expand.m"
      }
#line 832 "try_expand.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 831 "try_expand.m"
    {
#line 831 "try_expand.m"
      check_hlds__try_expand__LambdaType_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 831 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__LambdaType_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 831 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__LambdaType_27, 1) = ((MR_Box) (check_hlds__try_expand__LambdaParamTypes_24));
#line 831 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__LambdaType_27, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 831 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__LambdaType_27, 3) = ((MR_Box) ((MR_Integer) 0));
#line 831 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__LambdaType_27, 4) = NULL;
#line 831 "try_expand.m"
    }
#line 833 "try_expand.m"
    {
#line 833 "try_expand.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(check_hlds__try_expand__LambdaType_27, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[4]), check_hlds__try_expand__LambdaVar_13, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_69_69);
    }
#line 837 "try_expand.m"
    {
#line 837 "try_expand.m"
      check_hlds__try_expand__V_71_71 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__try_expand__TypeCtorInfo_87_87, check_hlds__try_expand__OutputVarsSet_10);
    }
#line 837 "try_expand.m"
    {
#line 837 "try_expand.m"
      hlds__make_goal__construct_tuple_3_p_0(check_hlds__try_expand__OutputTupleVar_20, check_hlds__try_expand__V_71_71, &check_hlds__try_expand__MakeOutputTuple_28);
    }
#line 839 "try_expand.m"
    {
#line 839 "try_expand.m"
      hlds__hlds_goal__conjoin_goals_3_p_0(check_hlds__try_expand__Body0_9, check_hlds__try_expand__MakeOutputTuple_28, &check_hlds__try_expand__LambdaBody0_29);
    }
#line 842 "try_expand.m"
    {
#line 842 "try_expand.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ProcInfo_69_69, &check_hlds__try_expand__VarSet0_30);
    }
#line 843 "try_expand.m"
    {
#line 843 "try_expand.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ProcInfo_69_69, &check_hlds__try_expand__VarTypes0_31);
    }
#line 844 "try_expand.m"
    {
#line 844 "try_expand.m"
      check_hlds__try_expand__V_72_72 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__try_expand__TypeCtorInfo_87_87, check_hlds__try_expand__OutputVarsSet_10);
    }
#line 1991 "check_hlds.try_expand.c"
    check_hlds__try_expand__TypeInfo_88_88 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
#line 846 "try_expand.m"
    {
#line 846 "try_expand.m"
      check_hlds__try_expand__V_75_75 = mercury__map__init_0_f_0(check_hlds__try_expand__TypeInfo_88_88, check_hlds__try_expand__TypeInfo_88_88);
    }
#line 844 "try_expand.m"
    {
#line 844 "try_expand.m"
      hlds__goal_util__clone_variables_9_p_0(check_hlds__try_expand__V_72_72, check_hlds__try_expand__VarSet0_30, check_hlds__try_expand__VarTypes0_31, check_hlds__try_expand__VarSet0_30, &check_hlds__try_expand__VarSet_32, check_hlds__try_expand__VarTypes0_31, &check_hlds__try_expand__VarTypes_33, check_hlds__try_expand__V_75_75, &check_hlds__try_expand__Renaming_34);
    }
#line 847 "try_expand.m"
    {
#line 847 "try_expand.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__try_expand__VarSet_32, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_69_69, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_76_76);
    }
#line 848 "try_expand.m"
    {
#line 848 "try_expand.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__try_expand__VarTypes_33, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_76_76, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_42);
    }
#line 849 "try_expand.m"
    {
#line 849 "try_expand.m"
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(check_hlds__try_expand__Renaming_34, check_hlds__try_expand__LambdaBody0_29, &check_hlds__try_expand__LambdaBody_35);
    }
#line 852 "try_expand.m"
    check_hlds__try_expand__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__LambdaBody_35, (MR_Integer) 0)));
#line 852 "try_expand.m"
    check_hlds__try_expand__BodyGoalInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__LambdaBody_35, (MR_Integer) 1)));
#line 853 "try_expand.m"
    {
#line 853 "try_expand.m"
      check_hlds__try_expand__BodyDetism_38 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__try_expand__BodyGoalInfo_37);
    }
#line 868 "try_expand.m"
    if ((check_hlds__try_expand__BodyDetism_38 == (MR_Integer) 4))
#line 872 "try_expand.m"
      check_hlds__try_expand__LambdaDetism_39 = (MR_Integer) 4;
#line 868 "try_expand.m"
    else
#line 868 "try_expand.m"
    if ((check_hlds__try_expand__BodyDetism_38 == (MR_Integer) 5))
#line 873 "try_expand.m"
      check_hlds__try_expand__LambdaDetism_39 = (MR_Integer) 5;
#line 868 "try_expand.m"
    else
#line 868 "try_expand.m"
    if ((check_hlds__try_expand__BodyDetism_38 == (MR_Integer) 0))
#line 868 "try_expand.m"
      check_hlds__try_expand__LambdaDetism_39 = (MR_Integer) 0;
#line 868 "try_expand.m"
    else
#line 868 "try_expand.m"
    if ((check_hlds__try_expand__BodyDetism_38 == (MR_Integer) 6))
#line 874 "try_expand.m"
      check_hlds__try_expand__LambdaDetism_39 = (MR_Integer) 0;
#line 868 "try_expand.m"
    else
#line 868 "try_expand.m"
    if ((check_hlds__try_expand__BodyDetism_38 == (MR_Integer) 7))
#line 875 "try_expand.m"
      check_hlds__try_expand__LambdaDetism_39 = (MR_Integer) 1;
#line 868 "try_expand.m"
    else
#line 868 "try_expand.m"
    if ((check_hlds__try_expand__BodyDetism_38 == (MR_Integer) 2))
#line 870 "try_expand.m"
      check_hlds__try_expand__LambdaDetism_39 = (MR_Integer) 4;
#line 868 "try_expand.m"
    else
#line 868 "try_expand.m"
    if ((check_hlds__try_expand__BodyDetism_38 == (MR_Integer) 3))
#line 871 "try_expand.m"
      check_hlds__try_expand__LambdaDetism_39 = (MR_Integer) 5;
#line 868 "try_expand.m"
    else
#line 869 "try_expand.m"
      check_hlds__try_expand__LambdaDetism_39 = (MR_Integer) 1;
#line 858 "try_expand.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 858 "try_expand.m"
    {
#line 858 "try_expand.m"
      check_hlds__try_expand__V_82_82 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__try_expand__TypeCtorInfo_87_87, check_hlds__try_expand__NonLocals_26);
    }
#line 857 "try_expand.m"
    {
#line 857 "try_expand.m"
      check_hlds__try_expand__RHS_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 857 "try_expand.m"
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 0) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((MR_Integer) 0 << (MR_Integer) 3)))))));
#line 857 "try_expand.m"
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 1) = (MR_Integer) 0;
#line 857 "try_expand.m"
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 2) = ((MR_Box) (check_hlds__try_expand__V_82_82));
#line 857 "try_expand.m"
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 3) = ((MR_Box) (check_hlds__try_expand__LambdaParams_23));
#line 857 "try_expand.m"
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 4) = ((MR_Box) (check_hlds__try_expand__LambdaParamModes_25));
#line 857 "try_expand.m"
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 5) = ((MR_Box) (check_hlds__try_expand__LambdaDetism_39));
#line 857 "try_expand.m"
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 6) = ((MR_Box) (check_hlds__try_expand__LambdaBody_35));
#line 857 "try_expand.m"
    }
#line 861 "try_expand.m"
    {
#line 861 "try_expand.m"
      check_hlds__try_expand__V_83_83 = mercury__term__context_init_0_f_0();
    }
#line 860 "try_expand.m"
    {
#line 860 "try_expand.m"
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(*check_hlds__try_expand__LambdaVar_13, check_hlds__try_expand__RHS_40, check_hlds__try_expand__V_83_83, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__try_expand_scalar_common_6[1]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__AssignLambdaVar_14);
#line 860 "try_expand.m"
      return;
    }
#line 811 "try_expand.m"
  }
#line 806 "try_expand.m"
}

#line 784 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__lookup_case_goal_3_p_0(
#line 784 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 784 "try_expand.m"
  MR_Word check_hlds__try_expand__ConsId_2,
#line 784 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_3)
#line 784 "try_expand.m"
{
#line 786 "try_expand.m"
  while (MR_TRUE)
#line 786 "try_expand.m"
    {
#line 786 "try_expand.m"
      /* tailcall optimized into a loop */
#line 786 "try_expand.m"
      {
#line 786 "try_expand.m"
        MR_bool check_hlds__try_expand__succeeded;

#line 786 "try_expand.m"
        if ((check_hlds__try_expand__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 786 "try_expand.m"
          {
#line 786 "try_expand.m"
            MR_String check_hlds__try_expand__V_8_8;
#line 786 "try_expand.m"
            MR_String check_hlds__try_expand__V_10_10;

#line 787 "try_expand.m"
            {
#line 787 "try_expand.m"
              check_hlds__try_expand__V_10_10 = mercury__string__string_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, ((MR_Box) (check_hlds__try_expand__ConsId_2)));
            }
#line 787 "try_expand.m"
            {
#line 787 "try_expand.m"
              check_hlds__try_expand__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "couldn\'t find ", check_hlds__try_expand__V_10_10);
            }
#line 787 "try_expand.m"
            {
#line 787 "try_expand.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.lookup_case_goal\'/3", check_hlds__try_expand__V_8_8);
#line 787 "try_expand.m"
              return;
            }
#line 786 "try_expand.m"
          }
#line 786 "try_expand.m"
        else
#line 788 "try_expand.m"
          {
#line 788 "try_expand.m"
            MR_Word check_hlds__try_expand__H_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 0)));
#line 788 "try_expand.m"
            MR_Word check_hlds__try_expand__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 1)));
#line 791 "try_expand.m"
            MR_Word check_hlds__try_expand__GoalPrime_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__H_11, (MR_Integer) 2)));
#line 789 "try_expand.m"
            MR_Word check_hlds__try_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__H_11, (MR_Integer) 1)));
#line 789 "try_expand.m"
            MR_Word check_hlds__try_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__H_11, (MR_Integer) 0)));

#line 789 "try_expand.m"
            {
#line 789 "try_expand.m"
              check_hlds__try_expand__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__try_expand__ConsId_2, check_hlds__try_expand__V_18_18);
            }
#line 789 "try_expand.m"
            if (check_hlds__try_expand__succeeded)
#line 789 "try_expand.m"
              check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 791 "try_expand.m"
            if (check_hlds__try_expand__succeeded)
#line 790 "try_expand.m"
              *check_hlds__try_expand__Goal_3 = check_hlds__try_expand__GoalPrime_15;
#line 791 "try_expand.m"
            else
#line 792 "try_expand.m"
              {
#line 792 "try_expand.m"
                /* direct tailcall eliminated */
#line 792 "try_expand.m"
                {
#line 792 "try_expand.m"
                  MR_Word check_hlds__try_expand__HeadVar__1__tmp_copy_1 = check_hlds__try_expand__T_12;

#line 792 "try_expand.m"
                  check_hlds__try_expand__HeadVar__1_1 = check_hlds__try_expand__HeadVar__1__tmp_copy_1;
#line 792 "try_expand.m"
                }
#line 792 "try_expand.m"
                continue;
#line 792 "try_expand.m"
              }
#line 788 "try_expand.m"
          }
#line 786 "try_expand.m"
      }
#line 786 "try_expand.m"
      break;
#line 786 "try_expand.m"
    }
#line 784 "try_expand.m"
}

#line 716 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand__extract_from_succeeded_goal_5_p_0(
#line 716 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_6,
#line 716 "try_expand.m"
  MR_Word check_hlds__try_expand__SucceededGoal_7,
#line 716 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_8,
#line 716 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_9,
#line 716 "try_expand.m"
  MR_Word * check_hlds__try_expand__MaybeElse_10)
#line 716 "try_expand.m"
{
#line 720 "try_expand.m"
  {
#line 720 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 720 "try_expand.m"
    MR_Word check_hlds__try_expand__Conjuncts0_11;
#line 720 "try_expand.m"
    MR_Word check_hlds__try_expand__DeconstructResult_13;
#line 720 "try_expand.m"
    MR_Word check_hlds__try_expand__TestNullTuple_14;
#line 720 "try_expand.m"
    MR_Word check_hlds__try_expand__Conjuncts1_15;
#line 720 "try_expand.m"
    MR_Word check_hlds__try_expand__TestRHS_23;
#line 720 "try_expand.m"
    MR_Word check_hlds__try_expand__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SucceededGoal_7, (MR_Integer) 0)));
#line 720 "try_expand.m"
    MR_Word check_hlds__try_expand__V_49_49;
#line 720 "try_expand.m"
    MR_Word check_hlds__try_expand__V_50_50;
#line 720 "try_expand.m"
    MR_Word check_hlds__try_expand__V_51_51;
#line 720 "try_expand.m"
    MR_Word check_hlds__try_expand__V_52_52;
#line 721 "try_expand.m"
    MR_Word check_hlds__try_expand__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SucceededGoal_7, (MR_Integer) 1)));
#line 723 "try_expand.m"
    MR_Word check_hlds__try_expand__V_21_21;
#line 723 "try_expand.m"
    MR_Word check_hlds__try_expand___ResultVar_16;
#line 723 "try_expand.m"
    MR_Word check_hlds__try_expand__V_17_17;
#line 723 "try_expand.m"
    MR_Word check_hlds__try_expand__V_18_18;
#line 723 "try_expand.m"
    MR_Word check_hlds__try_expand__V_19_19;
#line 723 "try_expand.m"
    MR_Word check_hlds__try_expand__V_20_20;
#line 724 "try_expand.m"
    MR_Word check_hlds__try_expand__V_27_27;
#line 724 "try_expand.m"
    MR_Word check_hlds__try_expand__V_22_22;
#line 724 "try_expand.m"
    MR_Word check_hlds__try_expand__V_24_24;
#line 724 "try_expand.m"
    MR_Word check_hlds__try_expand__V_25_25;
#line 724 "try_expand.m"
    MR_Word check_hlds__try_expand__V_26_26;
#line 725 "try_expand.m"
    MR_Word check_hlds__try_expand__V_53_53;
#line 725 "try_expand.m"
    MR_Integer check_hlds__try_expand__V_54_54;
#line 725 "try_expand.m"
    MR_Word check_hlds__try_expand__V_55_55;
#line 725 "try_expand.m"
    MR_Word check_hlds__try_expand__V_56_56;
#line 754 "try_expand.m"
    MR_Word check_hlds__try_expand__Rest_30;
#line 754 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalPrime_32;
#line 754 "try_expand.m"
    MR_Word check_hlds__try_expand__Then0_33;
#line 754 "try_expand.m"
    MR_Word check_hlds__try_expand__Else0_34;
#line 728 "try_expand.m"
    MR_Word check_hlds__try_expand__IfThenElse_28;
#line 728 "try_expand.m"
    MR_Word check_hlds__try_expand__V_57_57;
#line 728 "try_expand.m"
    MR_Word check_hlds__try_expand__V_29_29;
#line 729 "try_expand.m"
    MR_Word check_hlds__try_expand__V_31_31;

#line 721 "try_expand.m"
    check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_48_48)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_48_48, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 721 "try_expand.m"
    if (check_hlds__try_expand__succeeded)
#line 721 "try_expand.m"
      {
#line 721 "try_expand.m"
        check_hlds__try_expand__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_48_48, (MR_Integer) 1)));
#line 721 "try_expand.m"
        check_hlds__try_expand__Conjuncts0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_48_48, (MR_Integer) 2)));
#line 721 "try_expand.m"
        check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_49_49 == (MR_Integer) 0);
#line 720 "try_expand.m"
        if (check_hlds__try_expand__succeeded)
#line 720 "try_expand.m"
          {
#line 722 "try_expand.m"
            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__Conjuncts0_11)) == (MR_mktag((MR_Integer) 1)));
#line 722 "try_expand.m"
            if (check_hlds__try_expand__succeeded)
#line 722 "try_expand.m"
              {
#line 722 "try_expand.m"
                check_hlds__try_expand__DeconstructResult_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts0_11, (MR_Integer) 0)));
#line 722 "try_expand.m"
                check_hlds__try_expand__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts0_11, (MR_Integer) 1)));
#line 722 "try_expand.m"
                check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_50_50)) == (MR_mktag((MR_Integer) 1)));
#line 722 "try_expand.m"
                if (check_hlds__try_expand__succeeded)
#line 722 "try_expand.m"
                  {
#line 722 "try_expand.m"
                    check_hlds__try_expand__TestNullTuple_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_50_50, (MR_Integer) 0)));
#line 722 "try_expand.m"
                    check_hlds__try_expand__Conjuncts1_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_50_50, (MR_Integer) 1)));
#line 723 "try_expand.m"
                    check_hlds__try_expand__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__DeconstructResult_13, (MR_Integer) 0)));
#line 723 "try_expand.m"
                    check_hlds__try_expand__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__DeconstructResult_13, (MR_Integer) 1)));
#line 723 "try_expand.m"
                    check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_51_51)) == (MR_mktag((MR_Integer) 1)));
#line 723 "try_expand.m"
                    if (check_hlds__try_expand__succeeded)
#line 723 "try_expand.m"
                      {
#line 723 "try_expand.m"
                        check_hlds__try_expand___ResultVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, (MR_Integer) 0)));
#line 723 "try_expand.m"
                        check_hlds__try_expand__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, (MR_Integer) 1)));
#line 723 "try_expand.m"
                        check_hlds__try_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, (MR_Integer) 2)));
#line 723 "try_expand.m"
                        check_hlds__try_expand__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, (MR_Integer) 3)));
#line 723 "try_expand.m"
                        check_hlds__try_expand__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, (MR_Integer) 4)));
#line 724 "try_expand.m"
                        check_hlds__try_expand__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__TestNullTuple_14, (MR_Integer) 0)));
#line 724 "try_expand.m"
                        check_hlds__try_expand__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__TestNullTuple_14, (MR_Integer) 1)));
#line 724 "try_expand.m"
                        check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 724 "try_expand.m"
                        if (check_hlds__try_expand__succeeded)
#line 724 "try_expand.m"
                          {
#line 724 "try_expand.m"
                            check_hlds__try_expand__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, (MR_Integer) 0)));
#line 724 "try_expand.m"
                            check_hlds__try_expand__TestRHS_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, (MR_Integer) 1)));
#line 724 "try_expand.m"
                            check_hlds__try_expand__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, (MR_Integer) 2)));
#line 724 "try_expand.m"
                            check_hlds__try_expand__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, (MR_Integer) 3)));
#line 724 "try_expand.m"
                            check_hlds__try_expand__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, (MR_Integer) 4)));
#line 725 "try_expand.m"
                            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__TestRHS_23)) == (MR_mktag((MR_Integer) 1)));
#line 725 "try_expand.m"
                            if (check_hlds__try_expand__succeeded)
#line 725 "try_expand.m"
                              {
#line 725 "try_expand.m"
                                check_hlds__try_expand__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__TestRHS_23, (MR_Integer) 0)));
#line 725 "try_expand.m"
                                check_hlds__try_expand__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__TestRHS_23, (MR_Integer) 1)));
#line 725 "try_expand.m"
                                check_hlds__try_expand__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__TestRHS_23, (MR_Integer) 2)));
#line 725 "try_expand.m"
                                check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_53_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_53_53, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 725 "try_expand.m"
                                if (check_hlds__try_expand__succeeded)
#line 725 "try_expand.m"
                                  {
#line 725 "try_expand.m"
                                    check_hlds__try_expand__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_53_53, (MR_Integer) 1)));
#line 725 "try_expand.m"
                                    check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_54_54 == (MR_Integer) 0);
#line 725 "try_expand.m"
                                    if (check_hlds__try_expand__succeeded)
#line 725 "try_expand.m"
                                      {
#line 725 "try_expand.m"
                                        check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_55_55 == (MR_Integer) 0);
#line 725 "try_expand.m"
                                        if (check_hlds__try_expand__succeeded)
#line 725 "try_expand.m"
                                          check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 725 "try_expand.m"
                                      }
#line 725 "try_expand.m"
                                  }
#line 725 "try_expand.m"
                              }
#line 720 "try_expand.m"
                            if (check_hlds__try_expand__succeeded)
#line 720 "try_expand.m"
                              {
#line 728 "try_expand.m"
                                check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__Conjuncts1_15)) == (MR_mktag((MR_Integer) 1)));
#line 728 "try_expand.m"
                                if (check_hlds__try_expand__succeeded)
#line 728 "try_expand.m"
                                  {
#line 728 "try_expand.m"
                                    check_hlds__try_expand__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts1_15, (MR_Integer) 0)));
#line 728 "try_expand.m"
                                    check_hlds__try_expand__Rest_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts1_15, (MR_Integer) 1)));
#line 728 "try_expand.m"
                                    check_hlds__try_expand__IfThenElse_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_57_57, (MR_Integer) 0)));
#line 728 "try_expand.m"
                                    check_hlds__try_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_57_57, (MR_Integer) 1)));
#line 729 "try_expand.m"
                                    check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__IfThenElse_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__IfThenElse_28, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 729 "try_expand.m"
                                    if (check_hlds__try_expand__succeeded)
#line 729 "try_expand.m"
                                      {
#line 729 "try_expand.m"
                                        check_hlds__try_expand__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__IfThenElse_28, (MR_Integer) 1)));
#line 729 "try_expand.m"
                                        check_hlds__try_expand__GoalPrime_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__IfThenElse_28, (MR_Integer) 2)));
#line 729 "try_expand.m"
                                        check_hlds__try_expand__Then0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__IfThenElse_28, (MR_Integer) 3)));
#line 729 "try_expand.m"
                                        check_hlds__try_expand__Else0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__IfThenElse_28, (MR_Integer) 4)));
#line 729 "try_expand.m"
                                      }
#line 728 "try_expand.m"
                                  }
#line 754 "try_expand.m"
                                if (check_hlds__try_expand__succeeded)
#line 731 "try_expand.m"
                                  {
#line 731 "try_expand.m"
                                    MR_Word check_hlds__try_expand__GoalInfo_36;
#line 731 "try_expand.m"
                                    MR_Word check_hlds__try_expand__GoalDetism_37;
#line 731 "try_expand.m"
                                    MR_Word check_hlds__try_expand__GoalMaxSoln_39;
#line 731 "try_expand.m"
                                    MR_Word check_hlds__try_expand__Else_40;
#line 738 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_35_35;
#line 740 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_38_38;

#line 731 "try_expand.m"
                                    *check_hlds__try_expand__Goal_8 = check_hlds__try_expand__GoalPrime_32;
#line 738 "try_expand.m"
                                    check_hlds__try_expand__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__try_expand__Goal_8, (MR_Integer) 0)));
#line 738 "try_expand.m"
                                    check_hlds__try_expand__GoalInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__try_expand__Goal_8, (MR_Integer) 1)));
#line 739 "try_expand.m"
                                    {
#line 739 "try_expand.m"
                                      check_hlds__try_expand__GoalDetism_37 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__try_expand__GoalInfo_36);
                                    }
#line 740 "try_expand.m"
                                    {
#line 740 "try_expand.m"
                                      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__try_expand__GoalDetism_37, &check_hlds__try_expand__V_38_38, &check_hlds__try_expand__GoalMaxSoln_39);
                                    }
#line 744 "try_expand.m"
                                    if ((check_hlds__try_expand__GoalMaxSoln_39 == (MR_Integer) 0))
#line 918 "try_expand.m"
                                      {
#line 918 "try_expand.m"
                                        MR_Word check_hlds__try_expand__V_82_82;
#line 918 "try_expand.m"
                                        MR_Word check_hlds__try_expand__V_90_90;
#line 918 "try_expand.m"
                                        MR_Word check_hlds__try_expand__V_91_91;

#line 919 "try_expand.m"
                                        {
#line 919 "try_expand.m"
                                          check_hlds__try_expand__V_82_82 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
                                        }
#line 921 "try_expand.m"
                                        {
#line 921 "try_expand.m"
                                          check_hlds__try_expand__V_90_90 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                                        }
#line 921 "try_expand.m"
                                        {
#line 921 "try_expand.m"
                                          check_hlds__try_expand__V_91_91 = mercury__term__context_init_0_f_0();
                                        }
#line 919 "try_expand.m"
                                        {
#line 919 "try_expand.m"
                                          hlds__goal_util__generate_simple_call_12_p_0(check_hlds__try_expand__V_82_82, (MR_String) "unreachable", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__V_90_90, check_hlds__try_expand__ModuleInfo_6, check_hlds__try_expand__V_91_91, check_hlds__try_expand__Then_9);
                                        }
#line 918 "try_expand.m"
                                      }
#line 744 "try_expand.m"
                                    else
#line 749 "try_expand.m"
                                      {
#line 749 "try_expand.m"
                                        hlds__hlds_goal__conjoin_goal_and_goal_list_3_p_0(check_hlds__try_expand__Then0_33, check_hlds__try_expand__Rest_30, check_hlds__try_expand__Then_9);
                                      }
#line 752 "try_expand.m"
                                    {
#line 752 "try_expand.m"
                                      hlds__hlds_goal__conjoin_goal_and_goal_list_3_p_0(check_hlds__try_expand__Else0_34, check_hlds__try_expand__Rest_30, &check_hlds__try_expand__Else_40);
                                    }
#line 753 "try_expand.m"
                                    {
#line 753 "try_expand.m"
                                      MR_Word base;
#line 753 "try_expand.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 753 "try_expand.m"
                                      *check_hlds__try_expand__MaybeElse_10 = base;
#line 753 "try_expand.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__try_expand__Else_40));
#line 753 "try_expand.m"
                                    }
#line 731 "try_expand.m"
                                    check_hlds__try_expand__succeeded = MR_TRUE;
#line 731 "try_expand.m"
                                  }
#line 754 "try_expand.m"
                                else
#line 755 "try_expand.m"
                                  {
#line 755 "try_expand.m"
                                    MR_Word check_hlds__try_expand__SomeGoal_41;
#line 755 "try_expand.m"
                                    MR_Word check_hlds__try_expand__AfterSomeGoal_42;
#line 755 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_58_58;
#line 755 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_59_59;
#line 755 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_60_60;
#line 756 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_43_43;
#line 763 "try_expand.m"
                                    MR_Word check_hlds__try_expand__Rest_70;
#line 763 "try_expand.m"
                                    MR_Word check_hlds__try_expand__Then0_71;
#line 758 "try_expand.m"
                                    MR_Word check_hlds__try_expand__SomeThen_44;
#line 758 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_61_61;
#line 758 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_62_62;
#line 758 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_63_63;
#line 759 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_45_45;

#line 755 "try_expand.m"
                                    check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__Conjuncts1_15)) == (MR_mktag((MR_Integer) 1)));
#line 755 "try_expand.m"
                                    if (check_hlds__try_expand__succeeded)
#line 755 "try_expand.m"
                                      {
#line 755 "try_expand.m"
                                        check_hlds__try_expand__SomeGoal_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts1_15, (MR_Integer) 0)));
#line 755 "try_expand.m"
                                        check_hlds__try_expand__AfterSomeGoal_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts1_15, (MR_Integer) 1)));
#line 756 "try_expand.m"
                                        check_hlds__try_expand__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SomeGoal_41, (MR_Integer) 0)));
#line 756 "try_expand.m"
                                        check_hlds__try_expand__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SomeGoal_41, (MR_Integer) 1)));
#line 756 "try_expand.m"
                                        check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_58_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_58_58, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 756 "try_expand.m"
                                        if (check_hlds__try_expand__succeeded)
#line 756 "try_expand.m"
                                          {
#line 756 "try_expand.m"
                                            check_hlds__try_expand__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_58_58, (MR_Integer) 1)));
#line 756 "try_expand.m"
                                            *check_hlds__try_expand__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_58_58, (MR_Integer) 2)));
#line 756 "try_expand.m"
                                            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_59_59)) == (MR_mktag((MR_Integer) 0)));
#line 756 "try_expand.m"
                                            if (check_hlds__try_expand__succeeded)
#line 756 "try_expand.m"
                                              {
#line 756 "try_expand.m"
                                                check_hlds__try_expand__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_59_59, (MR_Integer) 0)));
#line 756 "try_expand.m"
                                                check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_60_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 755 "try_expand.m"
                                                if (check_hlds__try_expand__succeeded)
#line 755 "try_expand.m"
                                                  {
#line 758 "try_expand.m"
                                                    check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__AfterSomeGoal_42)) == (MR_mktag((MR_Integer) 1)));
#line 758 "try_expand.m"
                                                    if (check_hlds__try_expand__succeeded)
#line 758 "try_expand.m"
                                                      {
#line 758 "try_expand.m"
                                                        check_hlds__try_expand__SomeThen_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__AfterSomeGoal_42, (MR_Integer) 0)));
#line 758 "try_expand.m"
                                                        check_hlds__try_expand__Rest_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__AfterSomeGoal_42, (MR_Integer) 1)));
#line 759 "try_expand.m"
                                                        check_hlds__try_expand__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SomeThen_44, (MR_Integer) 0)));
#line 759 "try_expand.m"
                                                        check_hlds__try_expand__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SomeThen_44, (MR_Integer) 1)));
#line 759 "try_expand.m"
                                                        check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_61_61)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_61_61, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 759 "try_expand.m"
                                                        if (check_hlds__try_expand__succeeded)
#line 759 "try_expand.m"
                                                          {
#line 759 "try_expand.m"
                                                            check_hlds__try_expand__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_61_61, (MR_Integer) 1)));
#line 759 "try_expand.m"
                                                            check_hlds__try_expand__Then0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_61_61, (MR_Integer) 2)));
#line 759 "try_expand.m"
                                                            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_62_62)) == (MR_mktag((MR_Integer) 0)));
#line 759 "try_expand.m"
                                                            if (check_hlds__try_expand__succeeded)
#line 759 "try_expand.m"
                                                              {
#line 759 "try_expand.m"
                                                                check_hlds__try_expand__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_62_62, (MR_Integer) 0)));
#line 759 "try_expand.m"
                                                                check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 759 "try_expand.m"
                                                              }
#line 759 "try_expand.m"
                                                          }
#line 758 "try_expand.m"
                                                      }
#line 763 "try_expand.m"
                                                    if (check_hlds__try_expand__succeeded)
#line 761 "try_expand.m"
                                                      {
#line 761 "try_expand.m"
                                                        {
#line 761 "try_expand.m"
                                                          hlds__hlds_goal__conjoin_goal_and_goal_list_3_p_0(check_hlds__try_expand__Then0_71, check_hlds__try_expand__Rest_70, check_hlds__try_expand__Then_9);
                                                        }
#line 762 "try_expand.m"
                                                        *check_hlds__try_expand__MaybeElse_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 761 "try_expand.m"
                                                      }
#line 763 "try_expand.m"
                                                    else
#line 767 "try_expand.m"
                                                      {
#line 767 "try_expand.m"
                                                        MR_Word check_hlds__try_expand__GoalInfo_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__try_expand__Goal_8, (MR_Integer) 1)));
#line 767 "try_expand.m"
                                                        MR_Word check_hlds__try_expand__GoalDetism_68;
#line 767 "try_expand.m"
                                                        MR_Word check_hlds__try_expand__GoalMaxSoln_69;
#line 767 "try_expand.m"
                                                        MR_Word check_hlds__try_expand__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__try_expand__Goal_8, (MR_Integer) 0)));
#line 769 "try_expand.m"
                                                        MR_Word check_hlds__try_expand__V_47_47;

#line 768 "try_expand.m"
                                                        {
#line 768 "try_expand.m"
                                                          check_hlds__try_expand__GoalDetism_68 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__try_expand__GoalInfo_67);
                                                        }
#line 769 "try_expand.m"
                                                        {
#line 769 "try_expand.m"
                                                          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__try_expand__GoalDetism_68, &check_hlds__try_expand__V_47_47, &check_hlds__try_expand__GoalMaxSoln_69);
                                                        }
#line 774 "try_expand.m"
                                                        if ((check_hlds__try_expand__GoalMaxSoln_69 == (MR_Integer) 0))
#line 771 "try_expand.m"
                                                          {
#line 772 "try_expand.m"
                                                            {
#line 772 "try_expand.m"
                                                              check_hlds__try_expand__make_unreachable_call_2_p_0(check_hlds__try_expand__ModuleInfo_6, check_hlds__try_expand__Then_9);
                                                            }
#line 773 "try_expand.m"
                                                            *check_hlds__try_expand__MaybeElse_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 771 "try_expand.m"
                                                          }
#line 774 "try_expand.m"
                                                        else
#line 778 "try_expand.m"
                                                          {
#line 779 "try_expand.m"
                                                            {
#line 779 "try_expand.m"
                                                              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.extract_from_succeeded_goal\'/5", (MR_String) "goal not erroneous");
                                                            }
#line 778 "try_expand.m"
                                                          }
#line 767 "try_expand.m"
                                                      }
#line 763 "try_expand.m"
                                                    check_hlds__try_expand__succeeded = MR_TRUE;
#line 755 "try_expand.m"
                                                  }
#line 756 "try_expand.m"
                                              }
#line 756 "try_expand.m"
                                          }
#line 755 "try_expand.m"
                                      }
#line 755 "try_expand.m"
                                  }
#line 720 "try_expand.m"
                              }
#line 724 "try_expand.m"
                          }
#line 723 "try_expand.m"
                      }
#line 722 "try_expand.m"
                  }
#line 722 "try_expand.m"
              }
#line 720 "try_expand.m"
          }
#line 721 "try_expand.m"
      }
#line 720 "try_expand.m"
    return check_hlds__try_expand__succeeded;
#line 720 "try_expand.m"
  }
#line 716 "try_expand.m"
}

#line 676 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand__extract_intermediate_goal_parts_2_7_p_0(
#line 676 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_8,
#line 676 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_9,
#line 676 "try_expand.m"
  MR_Word check_hlds__try_expand__IntermediateGoal_10,
#line 676 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_11,
#line 676 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_12,
#line 676 "try_expand.m"
  MR_Word * check_hlds__try_expand__MaybeElse_13,
#line 676 "try_expand.m"
  MR_Word * check_hlds__try_expand__ExcpHandling_14)
#line 676 "try_expand.m"
{
#line 681 "try_expand.m"
  {
#line 681 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeInfo_41_41;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeInfo_42_42;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__Conjuncts_15;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__MagicCall_17;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__Switch_19;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__Cases_26;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__SucceededGoal_27;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 0)));
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__V_29_29;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__V_30_30;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__V_31_31;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__V_32_32;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__V_33_33;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__V_34_34;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__V_35_35;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__V_36_36;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__V_37_37;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__V_38_38;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__V_39_39;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__V_40_40;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 1)));
#line 684 "try_expand.m"
    MR_Word check_hlds__try_expand__V_18_18;
#line 685 "try_expand.m"
    MR_Word check_hlds__try_expand__V_20_20;
#line 687 "try_expand.m"
    MR_Word check_hlds__try_expand__V_21_21;
#line 687 "try_expand.m"
    MR_Integer check_hlds__try_expand__V_22_22;
#line 687 "try_expand.m"
    MR_Word check_hlds__try_expand__V_23_23;
#line 687 "try_expand.m"
    MR_Word check_hlds__try_expand__V_24_24;
#line 687 "try_expand.m"
    MR_Word check_hlds__try_expand__V_25_25;

#line 682 "try_expand.m"
    check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_28_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_28_28, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 682 "try_expand.m"
    if (check_hlds__try_expand__succeeded)
#line 682 "try_expand.m"
      {
#line 682 "try_expand.m"
        check_hlds__try_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_28_28, (MR_Integer) 1)));
#line 682 "try_expand.m"
        check_hlds__try_expand__Conjuncts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_28_28, (MR_Integer) 2)));
#line 682 "try_expand.m"
        check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_29_29 == (MR_Integer) 0);
#line 681 "try_expand.m"
        if (check_hlds__try_expand__succeeded)
#line 681 "try_expand.m"
          {
#line 684 "try_expand.m"
            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__Conjuncts_15)) == (MR_mktag((MR_Integer) 1)));
#line 684 "try_expand.m"
            if (check_hlds__try_expand__succeeded)
#line 684 "try_expand.m"
              {
#line 684 "try_expand.m"
                check_hlds__try_expand__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts_15, (MR_Integer) 0)));
#line 684 "try_expand.m"
                check_hlds__try_expand__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts_15, (MR_Integer) 1)));
#line 684 "try_expand.m"
                check_hlds__try_expand__MagicCall_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_30_30, (MR_Integer) 0)));
#line 684 "try_expand.m"
                check_hlds__try_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_30_30, (MR_Integer) 1)));
#line 686 "try_expand.m"
                check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 686 "try_expand.m"
                if (check_hlds__try_expand__succeeded)
#line 686 "try_expand.m"
                  {
#line 686 "try_expand.m"
                    check_hlds__try_expand__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_31_31, (MR_Integer) 0)));
#line 686 "try_expand.m"
                    check_hlds__try_expand__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_31_31, (MR_Integer) 1)));
#line 686 "try_expand.m"
                    check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 681 "try_expand.m"
                    if (check_hlds__try_expand__succeeded)
#line 681 "try_expand.m"
                      {
#line 685 "try_expand.m"
                        check_hlds__try_expand__Switch_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_32_32, (MR_Integer) 0)));
#line 685 "try_expand.m"
                        check_hlds__try_expand__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_32_32, (MR_Integer) 1)));
#line 687 "try_expand.m"
                        check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__MagicCall_17)) == (MR_mktag((MR_Integer) 2)));
#line 687 "try_expand.m"
                        if (check_hlds__try_expand__succeeded)
#line 687 "try_expand.m"
                          {
#line 687 "try_expand.m"
                            check_hlds__try_expand__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 0)));
#line 687 "try_expand.m"
                            check_hlds__try_expand__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 1)));
#line 687 "try_expand.m"
                            check_hlds__try_expand__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 2)));
#line 687 "try_expand.m"
                            check_hlds__try_expand__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 3)));
#line 687 "try_expand.m"
                            check_hlds__try_expand__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 4)));
#line 687 "try_expand.m"
                            check_hlds__try_expand__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 5)));
#line 687 "try_expand.m"
                            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 687 "try_expand.m"
                            if (check_hlds__try_expand__succeeded)
#line 687 "try_expand.m"
                              {
#line 687 "try_expand.m"
                                check_hlds__try_expand__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_34_34, (MR_Integer) 0)));
#line 687 "try_expand.m"
                                check_hlds__try_expand__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_34_34, (MR_Integer) 1)));
#line 2919 "check_hlds.try_expand.c"
                                check_hlds__try_expand__TypeInfo_41_41 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
#line 687 "try_expand.m"
                                {
#line 687 "try_expand.m"
                                  check_hlds__try_expand__succeeded = mercury__builtin__unify_2_p_0(check_hlds__try_expand__TypeInfo_41_41, ((MR_Box) (check_hlds__try_expand__ResultVar_9)), ((MR_Box) (check_hlds__try_expand__V_39_39)));
                                }
#line 681 "try_expand.m"
                                if (check_hlds__try_expand__succeeded)
#line 681 "try_expand.m"
                                  {
#line 687 "try_expand.m"
                                    check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 681 "try_expand.m"
                                    if (check_hlds__try_expand__succeeded)
#line 681 "try_expand.m"
                                      {
#line 688 "try_expand.m"
                                        check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__Switch_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_19, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 688 "try_expand.m"
                                        if (check_hlds__try_expand__succeeded)
#line 688 "try_expand.m"
                                          {
#line 688 "try_expand.m"
                                            check_hlds__try_expand__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_19, (MR_Integer) 1)));
#line 688 "try_expand.m"
                                            check_hlds__try_expand__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_19, (MR_Integer) 2)));
#line 688 "try_expand.m"
                                            check_hlds__try_expand__Cases_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_19, (MR_Integer) 3)));
#line 2948 "check_hlds.try_expand.c"
                                            check_hlds__try_expand__TypeInfo_42_42 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
#line 688 "try_expand.m"
                                            {
#line 688 "try_expand.m"
                                              check_hlds__try_expand__succeeded = mercury__builtin__unify_2_p_0(check_hlds__try_expand__TypeInfo_42_42, ((MR_Box) (check_hlds__try_expand__ResultVar_9)), ((MR_Box) (check_hlds__try_expand__V_40_40)));
                                            }
#line 681 "try_expand.m"
                                            if (check_hlds__try_expand__succeeded)
#line 681 "try_expand.m"
                                              {
#line 688 "try_expand.m"
                                                check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_36_36 == (MR_Integer) 1);
#line 681 "try_expand.m"
                                                if (check_hlds__try_expand__succeeded)
#line 681 "try_expand.m"
                                                  {
#line 690 "try_expand.m"
                                                    {
#line 690 "try_expand.m"
                                                      check_hlds__try_expand__V_37_37 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
                                                    }
#line 690 "try_expand.m"
                                                    {
#line 690 "try_expand.m"
                                                      check_hlds__try_expand__lookup_case_goal_3_p_0(check_hlds__try_expand__Cases_26, check_hlds__try_expand__V_37_37, &check_hlds__try_expand__SucceededGoal_27);
                                                    }
#line 691 "try_expand.m"
                                                    {
#line 691 "try_expand.m"
                                                      check_hlds__try_expand__succeeded = check_hlds__try_expand__extract_from_succeeded_goal_5_p_0(check_hlds__try_expand__ModuleInfo_8, check_hlds__try_expand__SucceededGoal_27, check_hlds__try_expand__Goal_11, check_hlds__try_expand__Then_12, check_hlds__try_expand__MaybeElse_13);
                                                    }
#line 681 "try_expand.m"
                                                    if (check_hlds__try_expand__succeeded)
#line 681 "try_expand.m"
                                                      {
#line 694 "try_expand.m"
                                                        {
#line 694 "try_expand.m"
                                                          check_hlds__try_expand__V_38_38 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
                                                        }
#line 694 "try_expand.m"
                                                        {
#line 694 "try_expand.m"
                                                          check_hlds__try_expand__lookup_case_goal_3_p_0(check_hlds__try_expand__Cases_26, check_hlds__try_expand__V_38_38, check_hlds__try_expand__ExcpHandling_14);
                                                        }
#line 694 "try_expand.m"
                                                        check_hlds__try_expand__succeeded = MR_TRUE;
#line 681 "try_expand.m"
                                                      }
#line 681 "try_expand.m"
                                                  }
#line 681 "try_expand.m"
                                              }
#line 688 "try_expand.m"
                                          }
#line 681 "try_expand.m"
                                      }
#line 681 "try_expand.m"
                                  }
#line 687 "try_expand.m"
                              }
#line 687 "try_expand.m"
                          }
#line 681 "try_expand.m"
                      }
#line 686 "try_expand.m"
                  }
#line 684 "try_expand.m"
              }
#line 681 "try_expand.m"
          }
#line 682 "try_expand.m"
      }
#line 681 "try_expand.m"
    return check_hlds__try_expand__succeeded;
#line 681 "try_expand.m"
  }
#line 676 "try_expand.m"
}

#line 643 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__extract_intermediate_goal_parts_7_p_0(
#line 643 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_8,
#line 643 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_9,
#line 643 "try_expand.m"
  MR_Word check_hlds__try_expand__IntermediateGoal_10,
#line 643 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_11,
#line 643 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_12,
#line 643 "try_expand.m"
  MR_Word * check_hlds__try_expand__MaybeElse_13,
#line 643 "try_expand.m"
  MR_Word * check_hlds__try_expand__ExcpHandling_14)
#line 643 "try_expand.m"
{
#line 658 "try_expand.m"
  {
#line 658 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 658 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalPrime_15;
#line 658 "try_expand.m"
    MR_Word check_hlds__try_expand__ThenPrime_16;
#line 658 "try_expand.m"
    MR_Word check_hlds__try_expand__MaybeElsePrime_17;
#line 658 "try_expand.m"
    MR_Word check_hlds__try_expand__ExcpHandlingPrime_18;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeInfo_41_63;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeInfo_42_64;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__Conjuncts_37;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__MagicCall_39;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__Switch_41;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__Cases_48;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__SucceededGoal_49;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 0)));
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__V_51_51;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__V_52_52;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__V_53_53;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__V_54_54;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__V_55_55;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__V_56_56;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__V_57_57;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__V_58_58;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__V_59_59;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__V_60_60;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__V_61_61;
#line 681 "try_expand.m"
    MR_Word check_hlds__try_expand__V_62_62;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 1)));
#line 684 "try_expand.m"
    MR_Word check_hlds__try_expand__V_40_40;
#line 685 "try_expand.m"
    MR_Word check_hlds__try_expand__V_42_42;
#line 687 "try_expand.m"
    MR_Word check_hlds__try_expand__V_43_43;
#line 687 "try_expand.m"
    MR_Integer check_hlds__try_expand__V_44_44;
#line 687 "try_expand.m"
    MR_Word check_hlds__try_expand__V_45_45;
#line 687 "try_expand.m"
    MR_Word check_hlds__try_expand__V_46_46;
#line 687 "try_expand.m"
    MR_Word check_hlds__try_expand__V_47_47;

#line 682 "try_expand.m"
    check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_50_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_50_50, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 682 "try_expand.m"
    if (check_hlds__try_expand__succeeded)
#line 682 "try_expand.m"
      {
#line 682 "try_expand.m"
        check_hlds__try_expand__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_50_50, (MR_Integer) 1)));
#line 682 "try_expand.m"
        check_hlds__try_expand__Conjuncts_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_50_50, (MR_Integer) 2)));
#line 682 "try_expand.m"
        check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_51_51 == (MR_Integer) 0);
#line 681 "try_expand.m"
        if (check_hlds__try_expand__succeeded)
#line 681 "try_expand.m"
          {
#line 684 "try_expand.m"
            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__Conjuncts_37)) == (MR_mktag((MR_Integer) 1)));
#line 684 "try_expand.m"
            if (check_hlds__try_expand__succeeded)
#line 684 "try_expand.m"
              {
#line 684 "try_expand.m"
                check_hlds__try_expand__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts_37, (MR_Integer) 0)));
#line 684 "try_expand.m"
                check_hlds__try_expand__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts_37, (MR_Integer) 1)));
#line 684 "try_expand.m"
                check_hlds__try_expand__MagicCall_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_52_52, (MR_Integer) 0)));
#line 684 "try_expand.m"
                check_hlds__try_expand__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_52_52, (MR_Integer) 1)));
#line 686 "try_expand.m"
                check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_53_53)) == (MR_mktag((MR_Integer) 1)));
#line 686 "try_expand.m"
                if (check_hlds__try_expand__succeeded)
#line 686 "try_expand.m"
                  {
#line 686 "try_expand.m"
                    check_hlds__try_expand__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_53_53, (MR_Integer) 0)));
#line 686 "try_expand.m"
                    check_hlds__try_expand__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_53_53, (MR_Integer) 1)));
#line 686 "try_expand.m"
                    check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 681 "try_expand.m"
                    if (check_hlds__try_expand__succeeded)
#line 681 "try_expand.m"
                      {
#line 685 "try_expand.m"
                        check_hlds__try_expand__Switch_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_54_54, (MR_Integer) 0)));
#line 685 "try_expand.m"
                        check_hlds__try_expand__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_54_54, (MR_Integer) 1)));
#line 687 "try_expand.m"
                        check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__MagicCall_39)) == (MR_mktag((MR_Integer) 2)));
#line 687 "try_expand.m"
                        if (check_hlds__try_expand__succeeded)
#line 687 "try_expand.m"
                          {
#line 687 "try_expand.m"
                            check_hlds__try_expand__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 0)));
#line 687 "try_expand.m"
                            check_hlds__try_expand__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 1)));
#line 687 "try_expand.m"
                            check_hlds__try_expand__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 2)));
#line 687 "try_expand.m"
                            check_hlds__try_expand__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 3)));
#line 687 "try_expand.m"
                            check_hlds__try_expand__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 4)));
#line 687 "try_expand.m"
                            check_hlds__try_expand__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 5)));
#line 687 "try_expand.m"
                            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_56_56)) == (MR_mktag((MR_Integer) 1)));
#line 687 "try_expand.m"
                            if (check_hlds__try_expand__succeeded)
#line 687 "try_expand.m"
                              {
#line 687 "try_expand.m"
                                check_hlds__try_expand__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_56_56, (MR_Integer) 0)));
#line 687 "try_expand.m"
                                check_hlds__try_expand__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_56_56, (MR_Integer) 1)));
#line 3195 "check_hlds.try_expand.c"
                                check_hlds__try_expand__TypeInfo_41_63 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
#line 687 "try_expand.m"
                                {
#line 687 "try_expand.m"
                                  check_hlds__try_expand__succeeded = mercury__builtin__unify_2_p_0(check_hlds__try_expand__TypeInfo_41_63, ((MR_Box) (check_hlds__try_expand__ResultVar_9)), ((MR_Box) (check_hlds__try_expand__V_61_61)));
                                }
#line 681 "try_expand.m"
                                if (check_hlds__try_expand__succeeded)
#line 681 "try_expand.m"
                                  {
#line 687 "try_expand.m"
                                    check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 681 "try_expand.m"
                                    if (check_hlds__try_expand__succeeded)
#line 681 "try_expand.m"
                                      {
#line 688 "try_expand.m"
                                        check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__Switch_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_41, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 688 "try_expand.m"
                                        if (check_hlds__try_expand__succeeded)
#line 688 "try_expand.m"
                                          {
#line 688 "try_expand.m"
                                            check_hlds__try_expand__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_41, (MR_Integer) 1)));
#line 688 "try_expand.m"
                                            check_hlds__try_expand__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_41, (MR_Integer) 2)));
#line 688 "try_expand.m"
                                            check_hlds__try_expand__Cases_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_41, (MR_Integer) 3)));
#line 3224 "check_hlds.try_expand.c"
                                            check_hlds__try_expand__TypeInfo_42_64 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
#line 688 "try_expand.m"
                                            {
#line 688 "try_expand.m"
                                              check_hlds__try_expand__succeeded = mercury__builtin__unify_2_p_0(check_hlds__try_expand__TypeInfo_42_64, ((MR_Box) (check_hlds__try_expand__ResultVar_9)), ((MR_Box) (check_hlds__try_expand__V_62_62)));
                                            }
#line 681 "try_expand.m"
                                            if (check_hlds__try_expand__succeeded)
#line 681 "try_expand.m"
                                              {
#line 688 "try_expand.m"
                                                check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_58_58 == (MR_Integer) 1);
#line 681 "try_expand.m"
                                                if (check_hlds__try_expand__succeeded)
#line 681 "try_expand.m"
                                                  {
#line 690 "try_expand.m"
                                                    {
#line 690 "try_expand.m"
                                                      check_hlds__try_expand__V_59_59 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
                                                    }
#line 690 "try_expand.m"
                                                    {
#line 690 "try_expand.m"
                                                      check_hlds__try_expand__lookup_case_goal_3_p_0(check_hlds__try_expand__Cases_48, check_hlds__try_expand__V_59_59, &check_hlds__try_expand__SucceededGoal_49);
                                                    }
#line 691 "try_expand.m"
                                                    {
#line 691 "try_expand.m"
                                                      check_hlds__try_expand__succeeded = check_hlds__try_expand__extract_from_succeeded_goal_5_p_0(check_hlds__try_expand__ModuleInfo_8, check_hlds__try_expand__SucceededGoal_49, &check_hlds__try_expand__GoalPrime_15, &check_hlds__try_expand__ThenPrime_16, &check_hlds__try_expand__MaybeElsePrime_17);
                                                    }
#line 681 "try_expand.m"
                                                    if (check_hlds__try_expand__succeeded)
#line 681 "try_expand.m"
                                                      {
#line 694 "try_expand.m"
                                                        {
#line 694 "try_expand.m"
                                                          check_hlds__try_expand__V_60_60 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
                                                        }
#line 694 "try_expand.m"
                                                        {
#line 694 "try_expand.m"
                                                          check_hlds__try_expand__lookup_case_goal_3_p_0(check_hlds__try_expand__Cases_48, check_hlds__try_expand__V_60_60, &check_hlds__try_expand__ExcpHandlingPrime_18);
                                                        }
#line 694 "try_expand.m"
                                                        check_hlds__try_expand__succeeded = MR_TRUE;
#line 681 "try_expand.m"
                                                      }
#line 681 "try_expand.m"
                                                  }
#line 681 "try_expand.m"
                                              }
#line 688 "try_expand.m"
                                          }
#line 681 "try_expand.m"
                                      }
#line 681 "try_expand.m"
                                  }
#line 687 "try_expand.m"
                              }
#line 687 "try_expand.m"
                          }
#line 681 "try_expand.m"
                      }
#line 686 "try_expand.m"
                  }
#line 684 "try_expand.m"
              }
#line 681 "try_expand.m"
          }
#line 682 "try_expand.m"
      }
#line 658 "try_expand.m"
    if (check_hlds__try_expand__succeeded)
#line 654 "try_expand.m"
      {
#line 654 "try_expand.m"
        *check_hlds__try_expand__Goal_11 = check_hlds__try_expand__GoalPrime_15;
#line 655 "try_expand.m"
        *check_hlds__try_expand__Then_12 = check_hlds__try_expand__ThenPrime_16;
#line 656 "try_expand.m"
        *check_hlds__try_expand__MaybeElse_13 = check_hlds__try_expand__MaybeElsePrime_17;
#line 657 "try_expand.m"
        *check_hlds__try_expand__ExcpHandling_14 = check_hlds__try_expand__ExcpHandlingPrime_18;
#line 654 "try_expand.m"
      }
#line 658 "try_expand.m"
    else
#line 672 "try_expand.m"
      {
#line 672 "try_expand.m"
        MR_Word check_hlds__try_expand__GoalPrime_26;
#line 672 "try_expand.m"
        MR_Word check_hlds__try_expand__ThenPrime_27;
#line 672 "try_expand.m"
        MR_Word check_hlds__try_expand__MaybeElsePrime_28;
#line 672 "try_expand.m"
        MR_Word check_hlds__try_expand__ExcpHandlingPrime_29;
#line 663 "try_expand.m"
        MR_Word check_hlds__try_expand__ScopedGoal_20;
#line 663 "try_expand.m"
        MR_Word check_hlds__try_expand__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 0)));
#line 663 "try_expand.m"
        MR_Word check_hlds__try_expand__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 1)));
#line 663 "try_expand.m"
        MR_Word check_hlds__try_expand__V_19_19;

#line 663 "try_expand.m"
        check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_22_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_22_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 663 "try_expand.m"
        if (check_hlds__try_expand__succeeded)
#line 663 "try_expand.m"
          {
#line 663 "try_expand.m"
            check_hlds__try_expand__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_22_22, (MR_Integer) 1)));
#line 663 "try_expand.m"
            check_hlds__try_expand__ScopedGoal_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_22_22, (MR_Integer) 2)));
#line 664 "try_expand.m"
            {
#line 664 "try_expand.m"
              check_hlds__try_expand__succeeded = check_hlds__try_expand__extract_intermediate_goal_parts_2_7_p_0(check_hlds__try_expand__ModuleInfo_8, check_hlds__try_expand__ResultVar_9, check_hlds__try_expand__ScopedGoal_20, &check_hlds__try_expand__GoalPrime_26, &check_hlds__try_expand__ThenPrime_27, &check_hlds__try_expand__MaybeElsePrime_28, &check_hlds__try_expand__ExcpHandlingPrime_29);
            }
#line 663 "try_expand.m"
          }
#line 672 "try_expand.m"
        if (check_hlds__try_expand__succeeded)
#line 668 "try_expand.m"
          {
#line 668 "try_expand.m"
            *check_hlds__try_expand__Goal_11 = check_hlds__try_expand__GoalPrime_26;
#line 669 "try_expand.m"
            *check_hlds__try_expand__Then_12 = check_hlds__try_expand__ThenPrime_27;
#line 670 "try_expand.m"
            *check_hlds__try_expand__MaybeElse_13 = check_hlds__try_expand__MaybeElsePrime_28;
#line 671 "try_expand.m"
            *check_hlds__try_expand__ExcpHandling_14 = check_hlds__try_expand__ExcpHandlingPrime_29;
#line 668 "try_expand.m"
          }
#line 672 "try_expand.m"
        else
#line 673 "try_expand.m"
          {
#line 673 "try_expand.m"
            {
#line 673 "try_expand.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.extract_intermediate_goal_parts\'/7", (MR_String) "unexpected goal form");
#line 673 "try_expand.m"
              return;
            }
#line 673 "try_expand.m"
          }
#line 672 "try_expand.m"
      }
#line 658 "try_expand.m"
  }
#line 643 "try_expand.m"
}

#line 528 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goal_2_15_p_0(
#line 528 "try_expand.m"
  MR_Word check_hlds__try_expand__MaybeIO_16,
#line 528 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_17,
#line 528 "try_expand.m"
  MR_Word check_hlds__try_expand__Goal1_18,
#line 528 "try_expand.m"
  MR_Word check_hlds__try_expand__Then1_19,
#line 528 "try_expand.m"
  MR_Word check_hlds__try_expand__MaybeElse1_20,
#line 528 "try_expand.m"
  MR_Word check_hlds__try_expand__ExcpHandling1_21,
#line 528 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap_22,
#line 528 "try_expand.m"
  MR_Word check_hlds__try_expand__GoalOutputVarsSet_23,
#line 528 "try_expand.m"
  MR_Word * check_hlds__try_expand__FinalGoal_24,
#line 528 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_62,
#line 528 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_PredInfo_63,
#line 528 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_64,
#line 528 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_65,
#line 528 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_66,
#line 528 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_67)
#line 528 "try_expand.m"
{
#line 536 "try_expand.m"
  {
#line 536 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalOutputVars_29;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalOutputVarTypes_30;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__OutputTupleType_31;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__RealResultVarType_32;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaVar_33;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__AssignLambdaVar_34;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalInfo1_36;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalPurity_37;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalContext_38;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__CallTryGoal_42;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__Then_44;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__ExcpHandling_46;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalInfo_47;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__TmpTupleVar_48;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__TupleVar_49;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__DeconstructSucceeded_50;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__TupleArgInsts_51;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__CastOutputTuple_52;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__DeconstructOutputs_53;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__DeconstructsThen_54;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__SucceededCase_55;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__ExceptionCase_56;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__MaybeFailedCase_59;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__Cases_60;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__ResultSwitch_61;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_VarTypes_68_68;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__V_70_70;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__V_71_71;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__V_73_73;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_VarTypes_76_76;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_77_77;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_78_78;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_92_92;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_105_105;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__V_110_110;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__V_111_111;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__V_113_113;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__V_114_114;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__V_115_115;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__V_116_116;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__V_118_118;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__V_120_120;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__V_125_125;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__V_126_126;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__V_128_128;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__V_129_129;
#line 536 "try_expand.m"
    MR_Word check_hlds__try_expand__V_130_130;
#line 556 "try_expand.m"
    MR_Word check_hlds__try_expand__V_35_35;

#line 539 "try_expand.m"
    {
#line 539 "try_expand.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_64, &check_hlds__try_expand__STATE_VARIABLE_VarTypes_68_68);
    }
#line 540 "try_expand.m"
    {
#line 540 "try_expand.m"
      check_hlds__try_expand__GoalOutputVars_29 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__try_expand__GoalOutputVarsSet_23);
    }
#line 541 "try_expand.m"
    {
#line 541 "try_expand.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__try_expand__STATE_VARIABLE_VarTypes_68_68, check_hlds__try_expand__GoalOutputVars_29, &check_hlds__try_expand__GoalOutputVarTypes_30);
    }
#line 542 "try_expand.m"
    {
#line 542 "try_expand.m"
      check_hlds__try_expand__OutputTupleType_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 542 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__OutputTupleType_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 542 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__OutputTupleType_31, 1) = ((MR_Box) (check_hlds__try_expand__GoalOutputVarTypes_30));
#line 542 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__OutputTupleType_31, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 542 "try_expand.m"
    }
#line 547 "try_expand.m"
    {
#line 547 "try_expand.m"
      check_hlds__try_expand__V_71_71 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 547 "try_expand.m"
    {
#line 547 "try_expand.m"
      check_hlds__try_expand__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 547 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_70_70, 0) = ((MR_Box) (check_hlds__try_expand__V_71_71));
#line 547 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_70_70, 1) = ((MR_Box) ((MR_String) "exception_result"));
#line 547 "try_expand.m"
    }
#line 548 "try_expand.m"
    {
#line 548 "try_expand.m"
      check_hlds__try_expand__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_73_73, 0) = ((MR_Box) (check_hlds__try_expand__OutputTupleType_31));
#line 548 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 548 "try_expand.m"
    }
#line 546 "try_expand.m"
    {
#line 546 "try_expand.m"
      check_hlds__try_expand__RealResultVarType_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 546 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__RealResultVarType_32, 0) = ((MR_Box) (check_hlds__try_expand__V_70_70));
#line 546 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__RealResultVarType_32, 1) = ((MR_Box) (check_hlds__try_expand__V_73_73));
#line 546 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__RealResultVarType_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 546 "try_expand.m"
    }
#line 549 "try_expand.m"
    {
#line 549 "try_expand.m"
      parse_tree__prog_data__update_var_type_4_p_0(check_hlds__try_expand__ResultVar_17, check_hlds__try_expand__RealResultVarType_32, check_hlds__try_expand__STATE_VARIABLE_VarTypes_68_68, &check_hlds__try_expand__STATE_VARIABLE_VarTypes_76_76);
    }
#line 550 "try_expand.m"
    {
#line 550 "try_expand.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__try_expand__STATE_VARIABLE_VarTypes_76_76, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_64, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_77_77);
    }
#line 553 "try_expand.m"
    {
#line 553 "try_expand.m"
      check_hlds__try_expand__make_try_lambda_8_p_0(check_hlds__try_expand__Goal1_18, check_hlds__try_expand__GoalOutputVarsSet_23, check_hlds__try_expand__OutputTupleType_31, check_hlds__try_expand__MaybeIO_16, &check_hlds__try_expand__LambdaVar_33, &check_hlds__try_expand__AssignLambdaVar_34, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_77_77, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_78_78);
    }
#line 556 "try_expand.m"
    check_hlds__try_expand__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal1_18, (MR_Integer) 0)));
#line 556 "try_expand.m"
    check_hlds__try_expand__GoalInfo1_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal1_18, (MR_Integer) 1)));
#line 557 "try_expand.m"
    {
#line 557 "try_expand.m"
      check_hlds__try_expand__GoalPurity_37 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__try_expand__GoalInfo1_36);
    }
#line 558 "try_expand.m"
    {
#line 558 "try_expand.m"
      check_hlds__try_expand__GoalContext_38 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__try_expand__GoalInfo1_36);
    }
#line 597 "try_expand.m"
    if ((check_hlds__try_expand__MaybeIO_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 598 "try_expand.m"
      {
#line 599 "try_expand.m"
        {
#line 599 "try_expand.m"
          check_hlds__try_expand__make_try_call_14_p_0((MR_String) "try", check_hlds__try_expand__LambdaVar_33, check_hlds__try_expand__ResultVar_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__OutputTupleType_31, check_hlds__try_expand__GoalPurity_37, check_hlds__try_expand__GoalContext_38, &check_hlds__try_expand__CallTryGoal_42, check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_62, check_hlds__try_expand__STATE_VARIABLE_PredInfo_63, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_78_78, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_92_92, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_66, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_67);
        }
#line 602 "try_expand.m"
        check_hlds__try_expand__Then_44 = check_hlds__try_expand__Then1_19;
#line 603 "try_expand.m"
        check_hlds__try_expand__ExcpHandling_46 = check_hlds__try_expand__ExcpHandling1_21;
#line 598 "try_expand.m"
      }
#line 597 "try_expand.m"
    else
#line 561 "try_expand.m"
      {
#line 561 "try_expand.m"
        MR_Word check_hlds__try_expand__TypeInfo_133_133;
#line 561 "try_expand.m"
        MR_Word check_hlds__try_expand__GoalInitialIOVar_39;
#line 561 "try_expand.m"
        MR_Word check_hlds__try_expand__GoalFinalIOVar_40;
#line 561 "try_expand.m"
        MR_Word check_hlds__try_expand__TryIOOutputVar_41;
#line 561 "try_expand.m"
        MR_Word check_hlds__try_expand__UnifyThenInitialIOVar_43;
#line 561 "try_expand.m"
        MR_Word check_hlds__try_expand__RenamingExcp_45;
#line 561 "try_expand.m"
        MR_Word check_hlds__try_expand__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeIO_16, (MR_Integer) 0)));
#line 561 "try_expand.m"
        MR_Word check_hlds__try_expand__V_85_85;
#line 561 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_87_87;
#line 561 "try_expand.m"
        MR_Word check_hlds__try_expand__V_90_90;
#line 561 "try_expand.m"
        MR_Word check_hlds__try_expand__V_94_94;
#line 561 "try_expand.m"
        MR_Word check_hlds__try_expand__V_96_96;
#line 561 "try_expand.m"
        MR_Word check_hlds__try_expand__V_97_97;
#line 561 "try_expand.m"
        MR_Word check_hlds__try_expand__V_101_101;
#line 561 "try_expand.m"
        MR_Word check_hlds__try_expand__V_102_102;

#line 561 "try_expand.m"
        check_hlds__try_expand__GoalInitialIOVar_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_84_84, (MR_Integer) 0)));
#line 561 "try_expand.m"
        check_hlds__try_expand__GoalFinalIOVar_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_84_84, (MR_Integer) 1)));
#line 583 "try_expand.m"
        {
#line 583 "try_expand.m"
          check_hlds__try_expand__V_85_85 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
        }
#line 583 "try_expand.m"
        {
#line 583 "try_expand.m"
          hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(check_hlds__try_expand__V_85_85, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[0]), &check_hlds__try_expand__TryIOOutputVar_41, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_78_78, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_87_87);
        }
#line 586 "try_expand.m"
        {
#line 586 "try_expand.m"
          check_hlds__try_expand__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 586 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_94_94, 0) = ((MR_Box) (check_hlds__try_expand__TryIOOutputVar_41));
#line 586 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 586 "try_expand.m"
        }
#line 586 "try_expand.m"
        {
#line 586 "try_expand.m"
          check_hlds__try_expand__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 586 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_90_90, 0) = ((MR_Box) (check_hlds__try_expand__GoalInitialIOVar_39));
#line 586 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_90_90, 1) = ((MR_Box) (check_hlds__try_expand__V_94_94));
#line 586 "try_expand.m"
        }
#line 585 "try_expand.m"
        {
#line 585 "try_expand.m"
          check_hlds__try_expand__make_try_call_14_p_0((MR_String) "try_io", check_hlds__try_expand__LambdaVar_33, check_hlds__try_expand__ResultVar_17, check_hlds__try_expand__V_90_90, check_hlds__try_expand__OutputTupleType_31, check_hlds__try_expand__GoalPurity_37, check_hlds__try_expand__GoalContext_38, &check_hlds__try_expand__CallTryGoal_42, check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_62, check_hlds__try_expand__STATE_VARIABLE_PredInfo_63, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_87_87, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_92_92, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_66, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_67);
        }
#line 590 "try_expand.m"
        {
#line 590 "try_expand.m"
          check_hlds__try_expand__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 590 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_96_96, 0) = ((MR_Box) (check_hlds__try_expand__TryIOOutputVar_41));
#line 590 "try_expand.m"
        }
#line 590 "try_expand.m"
        {
#line 590 "try_expand.m"
          check_hlds__try_expand__V_97_97 = mercury__term__context_init_0_f_0();
        }
#line 589 "try_expand.m"
        {
#line 589 "try_expand.m"
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__try_expand__GoalFinalIOVar_40, check_hlds__try_expand__V_96_96, check_hlds__try_expand__V_97_97, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__try_expand_scalar_common_6[1]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__try_expand__UnifyThenInitialIOVar_43);
        }
#line 592 "try_expand.m"
        {
#line 592 "try_expand.m"
          hlds__hlds_goal__conjoin_goals_3_p_0(check_hlds__try_expand__UnifyThenInitialIOVar_43, check_hlds__try_expand__Then1_19, &check_hlds__try_expand__Then_44);
        }
#line 3725 "check_hlds.try_expand.c"
        check_hlds__try_expand__TypeInfo_133_133 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
#line 595 "try_expand.m"
        {
#line 595 "try_expand.m"
          check_hlds__try_expand__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 595 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_102_102, 0) = ((MR_Box) (check_hlds__try_expand__GoalInitialIOVar_39));
#line 595 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_102_102, 1) = ((MR_Box) (check_hlds__try_expand__TryIOOutputVar_41));
#line 595 "try_expand.m"
        }
#line 595 "try_expand.m"
        {
#line 595 "try_expand.m"
          check_hlds__try_expand__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_101_101, 0) = ((MR_Box) (check_hlds__try_expand__V_102_102));
#line 595 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 595 "try_expand.m"
        }
#line 595 "try_expand.m"
        {
#line 595 "try_expand.m"
          check_hlds__try_expand__RenamingExcp_45 = mercury__map__from_assoc_list_1_f_0(check_hlds__try_expand__TypeInfo_133_133, check_hlds__try_expand__TypeInfo_133_133, check_hlds__try_expand__V_101_101);
        }
#line 596 "try_expand.m"
        {
#line 596 "try_expand.m"
          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(check_hlds__try_expand__RenamingExcp_45, check_hlds__try_expand__ExcpHandling1_21, &check_hlds__try_expand__ExcpHandling_46);
        }
#line 561 "try_expand.m"
      }
#line 606 "try_expand.m"
    {
#line 606 "try_expand.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__try_expand__GoalInfo_47);
    }
#line 609 "try_expand.m"
    {
#line 609 "try_expand.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(check_hlds__try_expand__OutputTupleType_31, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[2]), &check_hlds__try_expand__TmpTupleVar_48, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_92_92, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_105_105);
    }
#line 611 "try_expand.m"
    {
#line 611 "try_expand.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(check_hlds__try_expand__OutputTupleType_31, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[3]), &check_hlds__try_expand__TupleVar_49, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_105_105, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_65);
    }
#line 613 "try_expand.m"
    {
#line 613 "try_expand.m"
      check_hlds__try_expand__V_110_110 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
    }
#line 613 "try_expand.m"
    {
#line 613 "try_expand.m"
      check_hlds__try_expand__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 613 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_111_111, 0) = ((MR_Box) (check_hlds__try_expand__TmpTupleVar_48));
#line 613 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 613 "try_expand.m"
    }
#line 613 "try_expand.m"
    {
#line 613 "try_expand.m"
      hlds__make_goal__deconstruct_functor_4_p_0(check_hlds__try_expand__ResultVar_17, check_hlds__try_expand__V_110_110, check_hlds__try_expand__V_111_111, &check_hlds__try_expand__DeconstructSucceeded_50);
    }
#line 615 "try_expand.m"
    {
#line 615 "try_expand.m"
      hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__try_expand__Instmap_22, check_hlds__try_expand__GoalOutputVars_29, &check_hlds__try_expand__TupleArgInsts_51);
    }
#line 616 "try_expand.m"
    {
#line 616 "try_expand.m"
      check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0(check_hlds__try_expand__TmpTupleVar_48, check_hlds__try_expand__TupleVar_49, check_hlds__try_expand__TupleArgInsts_51, &check_hlds__try_expand__CastOutputTuple_52);
    }
#line 618 "try_expand.m"
    {
#line 618 "try_expand.m"
      hlds__make_goal__deconstruct_tuple_3_p_0(check_hlds__try_expand__TupleVar_49, check_hlds__try_expand__GoalOutputVars_29, &check_hlds__try_expand__DeconstructOutputs_53);
    }
#line 620 "try_expand.m"
    {
#line 620 "try_expand.m"
      check_hlds__try_expand__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 620 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_116_116, 0) = ((MR_Box) (check_hlds__try_expand__Then_44));
#line 620 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 620 "try_expand.m"
    }
#line 620 "try_expand.m"
    {
#line 620 "try_expand.m"
      check_hlds__try_expand__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 620 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_115_115, 0) = ((MR_Box) (check_hlds__try_expand__DeconstructOutputs_53));
#line 620 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_115_115, 1) = ((MR_Box) (check_hlds__try_expand__V_116_116));
#line 620 "try_expand.m"
    }
#line 619 "try_expand.m"
    {
#line 619 "try_expand.m"
      check_hlds__try_expand__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_114_114, 0) = ((MR_Box) (check_hlds__try_expand__CastOutputTuple_52));
#line 619 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_114_114, 1) = ((MR_Box) (check_hlds__try_expand__V_115_115));
#line 619 "try_expand.m"
    }
#line 619 "try_expand.m"
    {
#line 619 "try_expand.m"
      check_hlds__try_expand__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_113_113, 0) = ((MR_Box) (check_hlds__try_expand__DeconstructSucceeded_50));
#line 619 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_113_113, 1) = ((MR_Box) (check_hlds__try_expand__V_114_114));
#line 619 "try_expand.m"
    }
#line 619 "try_expand.m"
    {
#line 619 "try_expand.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__try_expand__V_113_113, check_hlds__try_expand__GoalInfo_47, &check_hlds__try_expand__DeconstructsThen_54);
    }
#line 621 "try_expand.m"
    {
#line 621 "try_expand.m"
      check_hlds__try_expand__V_118_118 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
    }
#line 621 "try_expand.m"
    {
#line 621 "try_expand.m"
      check_hlds__try_expand__SucceededCase_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 621 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__SucceededCase_55, 0) = ((MR_Box) (check_hlds__try_expand__V_118_118));
#line 621 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__SucceededCase_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 621 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__SucceededCase_55, 2) = ((MR_Box) (check_hlds__try_expand__DeconstructsThen_54));
#line 621 "try_expand.m"
    }
#line 624 "try_expand.m"
    {
#line 624 "try_expand.m"
      check_hlds__try_expand__V_120_120 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
    }
#line 624 "try_expand.m"
    {
#line 624 "try_expand.m"
      check_hlds__try_expand__ExceptionCase_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 624 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__ExceptionCase_56, 0) = ((MR_Box) (check_hlds__try_expand__V_120_120));
#line 624 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__ExceptionCase_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 624 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__ExceptionCase_56, 2) = ((MR_Box) (check_hlds__try_expand__ExcpHandling_46));
#line 624 "try_expand.m"
    }
#line 631 "try_expand.m"
    if ((check_hlds__try_expand__MaybeElse1_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 633 "try_expand.m"
      check_hlds__try_expand__MaybeFailedCase_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 631 "try_expand.m"
    else
#line 628 "try_expand.m"
      {
#line 628 "try_expand.m"
        MR_Word check_hlds__try_expand__Else1_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeElse1_20, (MR_Integer) 0)));
#line 628 "try_expand.m"
        MR_Word check_hlds__try_expand__FailedCase_58;
#line 628 "try_expand.m"
        MR_Word check_hlds__try_expand__V_122_122;

#line 629 "try_expand.m"
        {
#line 629 "try_expand.m"
          check_hlds__try_expand__V_122_122 = parse_tree__builtin_lib_types__exception_failed_functor_0_f_0();
        }
#line 629 "try_expand.m"
        {
#line 629 "try_expand.m"
          check_hlds__try_expand__FailedCase_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 629 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__FailedCase_58, 0) = ((MR_Box) (check_hlds__try_expand__V_122_122));
#line 629 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__FailedCase_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 629 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__FailedCase_58, 2) = ((MR_Box) (check_hlds__try_expand__Else1_57));
#line 629 "try_expand.m"
        }
#line 630 "try_expand.m"
        {
#line 630 "try_expand.m"
          check_hlds__try_expand__MaybeFailedCase_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeFailedCase_59, 0) = ((MR_Box) (check_hlds__try_expand__FailedCase_58));
#line 630 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeFailedCase_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 630 "try_expand.m"
        }
#line 628 "try_expand.m"
      }
#line 636 "try_expand.m"
    {
#line 636 "try_expand.m"
      check_hlds__try_expand__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 636 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_125_125, 0) = ((MR_Box) (check_hlds__try_expand__ExceptionCase_56));
#line 636 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_125_125, 1) = ((MR_Box) (check_hlds__try_expand__MaybeFailedCase_59));
#line 636 "try_expand.m"
    }
#line 636 "try_expand.m"
    {
#line 636 "try_expand.m"
      check_hlds__try_expand__Cases_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 636 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__Cases_60, 0) = ((MR_Box) (check_hlds__try_expand__SucceededCase_55));
#line 636 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__Cases_60, 1) = ((MR_Box) (check_hlds__try_expand__V_125_125));
#line 636 "try_expand.m"
    }
#line 637 "try_expand.m"
    {
#line 637 "try_expand.m"
      check_hlds__try_expand__V_126_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 637 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_126_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 637 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_126_126, 1) = ((MR_Box) (check_hlds__try_expand__ResultVar_17));
#line 637 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_126_126, 2) = ((MR_Box) ((MR_Integer) 1));
#line 637 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_126_126, 3) = ((MR_Box) (check_hlds__try_expand__Cases_60));
#line 637 "try_expand.m"
    }
#line 637 "try_expand.m"
    {
#line 637 "try_expand.m"
      check_hlds__try_expand__ResultSwitch_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 637 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__ResultSwitch_61, 0) = ((MR_Box) (check_hlds__try_expand__V_126_126));
#line 637 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__ResultSwitch_61, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo_47));
#line 637 "try_expand.m"
    }
#line 638 "try_expand.m"
    {
#line 638 "try_expand.m"
      check_hlds__try_expand__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_130_130, 0) = ((MR_Box) (check_hlds__try_expand__ResultSwitch_61));
#line 638 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 638 "try_expand.m"
    }
#line 638 "try_expand.m"
    {
#line 638 "try_expand.m"
      check_hlds__try_expand__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_129_129, 0) = ((MR_Box) (check_hlds__try_expand__CallTryGoal_42));
#line 638 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_129_129, 1) = ((MR_Box) (check_hlds__try_expand__V_130_130));
#line 638 "try_expand.m"
    }
#line 638 "try_expand.m"
    {
#line 638 "try_expand.m"
      check_hlds__try_expand__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_128_128, 0) = ((MR_Box) (check_hlds__try_expand__AssignLambdaVar_34));
#line 638 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_128_128, 1) = ((MR_Box) (check_hlds__try_expand__V_129_129));
#line 638 "try_expand.m"
    }
#line 638 "try_expand.m"
    {
#line 638 "try_expand.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__try_expand__V_128_128, check_hlds__try_expand__GoalInfo_47, check_hlds__try_expand__FinalGoal_24);
#line 638 "try_expand.m"
      return;
    }
#line 536 "try_expand.m"
  }
#line 528 "try_expand.m"
}

#line 803 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand__expand_try_goal_5_p_0_1(
#line 803 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 803 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1)
#line 803 "try_expand.m"
{
#line 803 "try_expand.m"
  {
#line 803 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 803 "try_expand.m"
    MR_Box check_hlds__try_expand__closure = check_hlds__try_expand__closure_arg;

#line 803 "try_expand.m"
    {
#line 803 "try_expand.m"
      return check_hlds__try_expand__succeeded = hlds__instmap__var_is_bound_in_instmap_delta_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__try_expand__wrapper_arg_1));
    }
#line 803 "try_expand.m"
    return check_hlds__try_expand__succeeded;
#line 803 "try_expand.m"
  }
#line 803 "try_expand.m"
}

#line 485 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goal_5_p_0(
#line 485 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap_6,
#line 485 "try_expand.m"
  MR_Word check_hlds__try_expand__TryGoal_7,
#line 485 "try_expand.m"
  MR_Word * check_hlds__try_expand__FinalGoal_8,
#line 485 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_33,
#line 485 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_34)
#line 485 "try_expand.m"
{
#line 488 "try_expand.m"
  {
#line 488 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__MaybeIO_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__TryGoal_7, (MR_Integer) 0)));
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__ResultVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__TryGoal_7, (MR_Integer) 1)));
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__IntermediateGoal_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__TryGoal_7, (MR_Integer) 2)));
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__Goal0_13;
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__Then0_14;
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__MaybeElse0_15;
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__ExcpHandling0_16;
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__Goal1_17;
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__InstmapAfterGoal_18;
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__Then1_19;
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__MaybeElse1_22;
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__ExcpHandling1_23;
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalOutputVarsSet0_24;
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalOutputVarsSet_27;
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_0_33, (MR_Integer) 0)));
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_36_36;
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_37_37;
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_38_38;
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_39_39;
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__V_40_40;
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_42_42;
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_43_43;
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44;
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_45_45;
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_46_46;
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_47_47;
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalInfo_62;
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__NonLocals_63;
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__InstmapDelta_64;
#line 488 "try_expand.m"
    MR_Word check_hlds__try_expand__V_65_65;
#line 490 "try_expand.m"
    MR_Word check_hlds__try_expand__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_0_33, (MR_Integer) 1)));
#line 490 "try_expand.m"
    MR_Word check_hlds__try_expand__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_0_33, (MR_Integer) 2)));
#line 490 "try_expand.m"
    MR_Word check_hlds__try_expand__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_0_33, (MR_Integer) 3)));
#line 509 "try_expand.m"
    MR_Word check_hlds__try_expand__V_53_53;
#line 509 "try_expand.m"
    MR_Word check_hlds__try_expand__V_54_54;
#line 509 "try_expand.m"
    MR_Word check_hlds__try_expand__V_55_55;
#line 799 "try_expand.m"
    MR_Word check_hlds__try_expand__V_61_61;
#line 521 "try_expand.m"
    MR_Word check_hlds__try_expand__V_32_32;

#line 490 "try_expand.m"
    {
#line 490 "try_expand.m"
      check_hlds__try_expand__extract_intermediate_goal_parts_7_p_0(check_hlds__try_expand__V_35_35, check_hlds__try_expand__ResultVar_11, check_hlds__try_expand__IntermediateGoal_12, &check_hlds__try_expand__Goal0_13, &check_hlds__try_expand__Then0_14, &check_hlds__try_expand__MaybeElse0_15, &check_hlds__try_expand__ExcpHandling0_16);
    }
#line 494 "try_expand.m"
    {
#line 494 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Goal0_13, &check_hlds__try_expand__Goal1_17, check_hlds__try_expand__STATE_VARIABLE_Info_0_33, &check_hlds__try_expand__STATE_VARIABLE_Info_36_36);
    }
#line 495 "try_expand.m"
    {
#line 495 "try_expand.m"
      hlds__goal_util__update_instmap_3_p_0(check_hlds__try_expand__Goal0_13, check_hlds__try_expand__Instmap_6, &check_hlds__try_expand__InstmapAfterGoal_18);
    }
#line 496 "try_expand.m"
    {
#line 496 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__InstmapAfterGoal_18, check_hlds__try_expand__Then0_14, &check_hlds__try_expand__Then1_19, check_hlds__try_expand__STATE_VARIABLE_Info_36_36, &check_hlds__try_expand__STATE_VARIABLE_Info_37_37);
    }
#line 501 "try_expand.m"
    if ((check_hlds__try_expand__MaybeElse0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 502 "try_expand.m"
      {
#line 503 "try_expand.m"
        check_hlds__try_expand__MaybeElse1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 502 "try_expand.m"
        check_hlds__try_expand__STATE_VARIABLE_Info_38_38 = check_hlds__try_expand__STATE_VARIABLE_Info_37_37;
#line 502 "try_expand.m"
      }
#line 501 "try_expand.m"
    else
#line 498 "try_expand.m"
      {
#line 498 "try_expand.m"
        MR_Word check_hlds__try_expand__Else0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeElse0_15, (MR_Integer) 0)));
#line 498 "try_expand.m"
        MR_Word check_hlds__try_expand__Else1_21;

#line 499 "try_expand.m"
        {
#line 499 "try_expand.m"
          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Else0_20, &check_hlds__try_expand__Else1_21, check_hlds__try_expand__STATE_VARIABLE_Info_37_37, &check_hlds__try_expand__STATE_VARIABLE_Info_38_38);
        }
#line 500 "try_expand.m"
        {
#line 500 "try_expand.m"
          check_hlds__try_expand__MaybeElse1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 500 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeElse1_22, 0) = ((MR_Box) (check_hlds__try_expand__Else1_21));
#line 500 "try_expand.m"
        }
#line 498 "try_expand.m"
      }
#line 505 "try_expand.m"
    {
#line 505 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__ExcpHandling0_16, &check_hlds__try_expand__ExcpHandling1_23, check_hlds__try_expand__STATE_VARIABLE_Info_38_38, &check_hlds__try_expand__STATE_VARIABLE_Info_39_39);
    }
#line 509 "try_expand.m"
    check_hlds__try_expand__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
#line 509 "try_expand.m"
    check_hlds__try_expand__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
#line 509 "try_expand.m"
    check_hlds__try_expand__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
#line 509 "try_expand.m"
    check_hlds__try_expand__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
#line 799 "try_expand.m"
    check_hlds__try_expand__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_13, (MR_Integer) 0)));
#line 799 "try_expand.m"
    check_hlds__try_expand__GoalInfo_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_13, (MR_Integer) 1)));
#line 800 "try_expand.m"
    {
#line 800 "try_expand.m"
      check_hlds__try_expand__NonLocals_63 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__try_expand__GoalInfo_62);
    }
#line 801 "try_expand.m"
    {
#line 801 "try_expand.m"
      check_hlds__try_expand__InstmapDelta_64 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__try_expand__GoalInfo_62);
    }
#line 803 "try_expand.m"
    {
#line 803 "try_expand.m"
      check_hlds__try_expand__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 803 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 0) = ((MR_Box) (&check_hlds__try_expand_scalar_common_5[0]));
#line 803 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 1) = ((MR_Box) (check_hlds__try_expand__expand_try_goal_5_p_0_1));
#line 803 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 803 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 3) = ((MR_Box) (check_hlds__try_expand__V_40_40));
#line 803 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 4) = ((MR_Box) (check_hlds__try_expand__Instmap_6));
#line 803 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 5) = ((MR_Box) (check_hlds__try_expand__InstmapDelta_64));
#line 803 "try_expand.m"
    }
#line 802 "try_expand.m"
    {
#line 802 "try_expand.m"
      check_hlds__try_expand__GoalOutputVarsSet0_24 = parse_tree__set_of_var__filter_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__try_expand__V_65_65, check_hlds__try_expand__NonLocals_63);
    }
#line 515 "try_expand.m"
    if ((check_hlds__try_expand__MaybeIO_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 517 "try_expand.m"
      check_hlds__try_expand__GoalOutputVarsSet_27 = check_hlds__try_expand__GoalOutputVarsSet0_24;
#line 515 "try_expand.m"
    else
#line 512 "try_expand.m"
      {
#line 512 "try_expand.m"
        MR_Word check_hlds__try_expand__IOStateVarFinal_26;
#line 512 "try_expand.m"
        MR_Word check_hlds__try_expand__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeIO_10, (MR_Integer) 0)));
#line 512 "try_expand.m"
        MR_Word check_hlds__try_expand___IOStateVarInitial_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_41_41, (MR_Integer) 0)));

#line 512 "try_expand.m"
        check_hlds__try_expand__IOStateVarFinal_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_41_41, (MR_Integer) 1)));
#line 513 "try_expand.m"
        {
#line 513 "try_expand.m"
          parse_tree__set_of_var__delete_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__try_expand__IOStateVarFinal_26, check_hlds__try_expand__GoalOutputVarsSet0_24, &check_hlds__try_expand__GoalOutputVarsSet_27);
        }
#line 512 "try_expand.m"
      }
#line 521 "try_expand.m"
    check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
#line 521 "try_expand.m"
    check_hlds__try_expand__STATE_VARIABLE_PredInfo_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
#line 521 "try_expand.m"
    check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
#line 521 "try_expand.m"
    check_hlds__try_expand__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
#line 522 "try_expand.m"
    {
#line 522 "try_expand.m"
      check_hlds__try_expand__expand_try_goal_2_15_p_0(check_hlds__try_expand__MaybeIO_10, check_hlds__try_expand__ResultVar_11, check_hlds__try_expand__Goal1_17, check_hlds__try_expand__Then1_19, check_hlds__try_expand__MaybeElse1_22, check_hlds__try_expand__ExcpHandling1_23, check_hlds__try_expand__InstmapAfterGoal_18, check_hlds__try_expand__GoalOutputVarsSet_27, check_hlds__try_expand__FinalGoal_8, check_hlds__try_expand__STATE_VARIABLE_PredInfo_43_43, &check_hlds__try_expand__STATE_VARIABLE_PredInfo_45_45, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_46_46, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_42_42, &check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_47_47);
    }
#line 525 "try_expand.m"
    {
#line 525 "try_expand.m"
      MR_Word base;
#line 525 "try_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 525 "try_expand.m"
      *check_hlds__try_expand__STATE_VARIABLE_Info_34 = base;
#line 525 "try_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_47_47));
#line 525 "try_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_PredInfo_45_45));
#line 525 "try_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ProcInfo_46_46));
#line 525 "try_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 1));
#line 525 "try_expand.m"
    }
#line 488 "try_expand.m"
  }
#line 485 "try_expand.m"
}

#line 464 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_if_then_else_9_p_0(
#line 464 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap0_10,
#line 464 "try_expand.m"
  MR_Word check_hlds__try_expand__Cond0_11,
#line 464 "try_expand.m"
  MR_Word * check_hlds__try_expand__Cond_12,
#line 464 "try_expand.m"
  MR_Word check_hlds__try_expand__Then0_13,
#line 464 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_14,
#line 464 "try_expand.m"
  MR_Word check_hlds__try_expand__Else0_15,
#line 464 "try_expand.m"
  MR_Word * check_hlds__try_expand__Else_16,
#line 464 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_22,
#line 464 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_23)
#line 464 "try_expand.m"
{
#line 470 "try_expand.m"
  {
#line 470 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 470 "try_expand.m"
    MR_Word check_hlds__try_expand__CondInfo_19;
#line 470 "try_expand.m"
    MR_Word check_hlds__try_expand__CondInstmapDelta_20;
#line 470 "try_expand.m"
    MR_Word check_hlds__try_expand__InstmapAfterCond_21;
#line 470 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_24_24;
#line 470 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_25_25;
#line 473 "try_expand.m"
    MR_Word check_hlds__try_expand__V_18_18;

#line 471 "try_expand.m"
    {
#line 471 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap0_10, check_hlds__try_expand__Cond0_11, check_hlds__try_expand__Cond_12, check_hlds__try_expand__STATE_VARIABLE_Info_0_22, &check_hlds__try_expand__STATE_VARIABLE_Info_24_24);
    }
#line 473 "try_expand.m"
    check_hlds__try_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Cond0_11, (MR_Integer) 0)));
#line 473 "try_expand.m"
    check_hlds__try_expand__CondInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Cond0_11, (MR_Integer) 1)));
#line 474 "try_expand.m"
    {
#line 474 "try_expand.m"
      check_hlds__try_expand__CondInstmapDelta_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__try_expand__CondInfo_19);
    }
#line 475 "try_expand.m"
    {
#line 475 "try_expand.m"
      hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__try_expand__Instmap0_10, check_hlds__try_expand__CondInstmapDelta_20, &check_hlds__try_expand__InstmapAfterCond_21);
    }
#line 476 "try_expand.m"
    {
#line 476 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__InstmapAfterCond_21, check_hlds__try_expand__Then0_13, check_hlds__try_expand__Then_14, check_hlds__try_expand__STATE_VARIABLE_Info_24_24, &check_hlds__try_expand__STATE_VARIABLE_Info_25_25);
    }
#line 478 "try_expand.m"
    {
#line 478 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap0_10, check_hlds__try_expand__Else0_15, check_hlds__try_expand__Else_16, check_hlds__try_expand__STATE_VARIABLE_Info_25_25, check_hlds__try_expand__STATE_VARIABLE_Info_23);
#line 478 "try_expand.m"
      return;
    }
#line 470 "try_expand.m"
  }
#line 464 "try_expand.m"
}

#line 454 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_cases_5_p_0(
#line 454 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 454 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2,
#line 454 "try_expand.m"
  MR_Word * check_hlds__try_expand__HeadVar__3_3,
#line 454 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_4,
#line 454 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_5)
#line 454 "try_expand.m"
{
#line 457 "try_expand.m"
  {
#line 457 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;

#line 457 "try_expand.m"
    if ((check_hlds__try_expand__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 457 "try_expand.m"
      {
#line 457 "try_expand.m"
        *check_hlds__try_expand__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 457 "try_expand.m"
        *check_hlds__try_expand__STATE_VARIABLE_Info_5 = check_hlds__try_expand__STATE_VARIABLE_Info_0_4;
#line 457 "try_expand.m"
      }
#line 457 "try_expand.m"
    else
#line 458 "try_expand.m"
      {
#line 458 "try_expand.m"
        MR_Word check_hlds__try_expand__Case0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 458 "try_expand.m"
        MR_Word check_hlds__try_expand__Cases0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 458 "try_expand.m"
        MR_Word check_hlds__try_expand__Case_13;
#line 458 "try_expand.m"
        MR_Word check_hlds__try_expand__Cases_14;
#line 458 "try_expand.m"
        MR_Word check_hlds__try_expand__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case0_11, (MR_Integer) 0)));
#line 458 "try_expand.m"
        MR_Word check_hlds__try_expand__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case0_11, (MR_Integer) 1)));
#line 458 "try_expand.m"
        MR_Word check_hlds__try_expand__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case0_11, (MR_Integer) 2)));
#line 458 "try_expand.m"
        MR_Word check_hlds__try_expand__Goal_19;
#line 458 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_22_22;

#line 460 "try_expand.m"
        {
#line 460 "try_expand.m"
          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__HeadVar__1_1, check_hlds__try_expand__Goal0_18, &check_hlds__try_expand__Goal_19, check_hlds__try_expand__STATE_VARIABLE_Info_0_4, &check_hlds__try_expand__STATE_VARIABLE_Info_22_22);
        }
#line 461 "try_expand.m"
        {
#line 461 "try_expand.m"
          check_hlds__try_expand__expand_try_goals_in_cases_5_p_0(check_hlds__try_expand__HeadVar__1_1, check_hlds__try_expand__Cases0_12, &check_hlds__try_expand__Cases_14, check_hlds__try_expand__STATE_VARIABLE_Info_22_22, check_hlds__try_expand__STATE_VARIABLE_Info_5);
        }
#line 462 "try_expand.m"
        {
#line 462 "try_expand.m"
          check_hlds__try_expand__Case_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 462 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case_13, 0) = ((MR_Box) (check_hlds__try_expand__MainConsId_16));
#line 462 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case_13, 1) = ((MR_Box) (check_hlds__try_expand__OtherConsIds_17));
#line 462 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case_13, 2) = ((MR_Box) (check_hlds__try_expand__Goal_19));
#line 462 "try_expand.m"
        }
#line 458 "try_expand.m"
        {
#line 458 "try_expand.m"
          MR_Word base;
#line 458 "try_expand.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 458 "try_expand.m"
          *check_hlds__try_expand__HeadVar__3_3 = base;
#line 458 "try_expand.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__try_expand__Case_13));
#line 458 "try_expand.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__try_expand__Cases_14));
#line 458 "try_expand.m"
        }
#line 458 "try_expand.m"
      }
#line 457 "try_expand.m"
  }
#line 454 "try_expand.m"
}

#line 452 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_disj_5_p_0_1(
#line 452 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 452 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 452 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_2,
#line 452 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_3,
#line 452 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_4)
#line 452 "try_expand.m"
{
#line 452 "try_expand.m"
  {
#line 452 "try_expand.m"
    MR_Box check_hlds__try_expand__closure = check_hlds__try_expand__closure_arg;
#line 452 "try_expand.m"
    MR_Word check_hlds__try_expand__conv1_Goal_8;
#line 452 "try_expand.m"
    MR_Word check_hlds__try_expand__conv0_STATE_VARIABLE_Info_95;

#line 452 "try_expand.m"
    {
#line 452 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__try_expand__wrapper_arg_1), &check_hlds__try_expand__conv1_Goal_8, ((MR_Word) check_hlds__try_expand__wrapper_arg_3), &check_hlds__try_expand__conv0_STATE_VARIABLE_Info_95);
    }
#line 452 "try_expand.m"
    *check_hlds__try_expand__wrapper_arg_2 = ((MR_Box) (check_hlds__try_expand__conv1_Goal_8));
#line 452 "try_expand.m"
    *check_hlds__try_expand__wrapper_arg_4 = ((MR_Box) (check_hlds__try_expand__conv0_STATE_VARIABLE_Info_95));
#line 452 "try_expand.m"
  }
#line 452 "try_expand.m"
}

#line 447 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_disj_5_p_0(
#line 447 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap0_6,
#line 447 "try_expand.m"
  MR_Word check_hlds__try_expand__Goals0_7,
#line 447 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goals_8,
#line 447 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_10,
#line 447 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_11)
#line 447 "try_expand.m"
{
#line 451 "try_expand.m"
  {
#line 451 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 451 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeCtorInfo_18_18;
#line 451 "try_expand.m"
    MR_Word check_hlds__try_expand__V_12_12;
#line 452 "try_expand.m"
    MR_Box check_hlds__try_expand__conv2_STATE_VARIABLE_Info_11;

#line 452 "try_expand.m"
    {
#line 452 "try_expand.m"
      check_hlds__try_expand__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 452 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_12_12, 0) = ((MR_Box) (&check_hlds__try_expand_scalar_common_2[1]));
#line 452 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_12_12, 1) = ((MR_Box) (check_hlds__try_expand__expand_try_goals_in_disj_5_p_0_1));
#line 452 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 452 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_12_12, 3) = ((MR_Box) (check_hlds__try_expand__Instmap0_6));
#line 452 "try_expand.m"
    }
#line 4556 "check_hlds.try_expand.c"
    check_hlds__try_expand__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 452 "try_expand.m"
    {
#line 452 "try_expand.m"
      mercury__list__map_foldl_5_p_0(check_hlds__try_expand__TypeCtorInfo_18_18, check_hlds__try_expand__TypeCtorInfo_18_18, (MR_Word) &check_hlds__try_expand__check_hlds__try_expand__type_ctor_info_trys_info_0, check_hlds__try_expand__V_12_12, check_hlds__try_expand__Goals0_7, check_hlds__try_expand__Goals_8, ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_Info_0_10)), &check_hlds__try_expand__conv2_STATE_VARIABLE_Info_11);
    }
#line 452 "try_expand.m"
    *check_hlds__try_expand__STATE_VARIABLE_Info_11 = ((MR_Word) check_hlds__try_expand__conv2_STATE_VARIABLE_Info_11);
#line 451 "try_expand.m"
  }
#line 447 "try_expand.m"
}

#line 435 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_conj_5_p_0(
#line 435 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 435 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2,
#line 435 "try_expand.m"
  MR_Word * check_hlds__try_expand__HeadVar__3_3,
#line 435 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_4,
#line 435 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_5)
#line 435 "try_expand.m"
{
#line 439 "try_expand.m"
  {
#line 439 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;

#line 439 "try_expand.m"
    if ((check_hlds__try_expand__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 439 "try_expand.m"
      {
#line 439 "try_expand.m"
        *check_hlds__try_expand__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 439 "try_expand.m"
        *check_hlds__try_expand__STATE_VARIABLE_Info_5 = check_hlds__try_expand__STATE_VARIABLE_Info_0_4;
#line 439 "try_expand.m"
      }
#line 439 "try_expand.m"
    else
#line 440 "try_expand.m"
      {
#line 440 "try_expand.m"
        MR_Word check_hlds__try_expand__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 440 "try_expand.m"
        MR_Word check_hlds__try_expand__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 440 "try_expand.m"
        MR_Word check_hlds__try_expand__Goal_13;
#line 440 "try_expand.m"
        MR_Word check_hlds__try_expand__Goals_14;
#line 440 "try_expand.m"
        MR_Word check_hlds__try_expand__GoalInfo_17;
#line 440 "try_expand.m"
        MR_Word check_hlds__try_expand__InstmapDelta_18;
#line 440 "try_expand.m"
        MR_Word check_hlds__try_expand__Instmap_19;
#line 440 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_22_22;
#line 442 "try_expand.m"
        MR_Word check_hlds__try_expand__V_16_16;

#line 441 "try_expand.m"
        {
#line 441 "try_expand.m"
          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__HeadVar__1_1, check_hlds__try_expand__Goal0_11, &check_hlds__try_expand__Goal_13, check_hlds__try_expand__STATE_VARIABLE_Info_0_4, &check_hlds__try_expand__STATE_VARIABLE_Info_22_22);
        }
#line 442 "try_expand.m"
        check_hlds__try_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_11, (MR_Integer) 0)));
#line 442 "try_expand.m"
        check_hlds__try_expand__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_11, (MR_Integer) 1)));
#line 443 "try_expand.m"
        {
#line 443 "try_expand.m"
          check_hlds__try_expand__InstmapDelta_18 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__try_expand__GoalInfo_17);
        }
#line 444 "try_expand.m"
        {
#line 444 "try_expand.m"
          hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__try_expand__HeadVar__1_1, check_hlds__try_expand__InstmapDelta_18, &check_hlds__try_expand__Instmap_19);
        }
#line 445 "try_expand.m"
        {
#line 445 "try_expand.m"
          check_hlds__try_expand__expand_try_goals_in_conj_5_p_0(check_hlds__try_expand__Instmap_19, check_hlds__try_expand__Goals0_12, &check_hlds__try_expand__Goals_14, check_hlds__try_expand__STATE_VARIABLE_Info_22_22, check_hlds__try_expand__STATE_VARIABLE_Info_5);
        }
#line 440 "try_expand.m"
        {
#line 440 "try_expand.m"
          MR_Word base;
#line 440 "try_expand.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "try_expand.m"
          *check_hlds__try_expand__HeadVar__3_3 = base;
#line 440 "try_expand.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__try_expand__Goal_13));
#line 440 "try_expand.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__try_expand__Goals_14));
#line 440 "try_expand.m"
        }
#line 440 "try_expand.m"
      }
#line 439 "try_expand.m"
  }
#line 435 "try_expand.m"
}

#line 347 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(
#line 347 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap_6,
#line 347 "try_expand.m"
  MR_Word check_hlds__try_expand__Goal0_7,
#line 347 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_8,
#line 347 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_94,
#line 347 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_95)
#line 347 "try_expand.m"
{
#line 350 "try_expand.m"
  {
#line 350 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 350 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_7, (MR_Integer) 0)));
#line 350 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_7, (MR_Integer) 1)));

#line 355 "try_expand.m"
    if (((MR_tag((MR_Word) check_hlds__try_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 0))))
#line 366 "try_expand.m"
      {
#line 366 "try_expand.m"
        MR_Word check_hlds__try_expand__SubGoal0_23 = (MR_Word) MR_body(((MR_Word) check_hlds__try_expand__GoalExpr0_10), (MR_Integer) 0);
#line 366 "try_expand.m"
        MR_Word check_hlds__try_expand__SubGoal_24;
#line 366 "try_expand.m"
        MR_Word check_hlds__try_expand__GoalExpr_117;

#line 367 "try_expand.m"
        {
#line 367 "try_expand.m"
          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__SubGoal0_23, &check_hlds__try_expand__SubGoal_24, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
        }
#line 368 "try_expand.m"
        check_hlds__try_expand__GoalExpr_117 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__try_expand__SubGoal_24);
#line 369 "try_expand.m"
        {
#line 369 "try_expand.m"
          MR_Word base;
#line 369 "try_expand.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 369 "try_expand.m"
          *check_hlds__try_expand__Goal_8 = base;
#line 369 "try_expand.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_117));
#line 369 "try_expand.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 369 "try_expand.m"
        }
#line 366 "try_expand.m"
      }
#line 355 "try_expand.m"
    else
#line 355 "try_expand.m"
    if (((MR_tag((MR_Word) check_hlds__try_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 1))))
#line 353 "try_expand.m"
      {
#line 354 "try_expand.m"
        *check_hlds__try_expand__Goal_8 = check_hlds__try_expand__Goal0_7;
#line 353 "try_expand.m"
        *check_hlds__try_expand__STATE_VARIABLE_Info_95 = check_hlds__try_expand__STATE_VARIABLE_Info_0_94;
#line 353 "try_expand.m"
      }
#line 355 "try_expand.m"
    else
#line 355 "try_expand.m"
    if (((((MR_tag((MR_Word) check_hlds__try_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 356 "try_expand.m"
      {
#line 356 "try_expand.m"
        MR_Word check_hlds__try_expand__ConjType_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 356 "try_expand.m"
        MR_Word check_hlds__try_expand__Conjuncts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 2)));
#line 356 "try_expand.m"
        MR_Word check_hlds__try_expand__Conjuncts_19;
#line 356 "try_expand.m"
        MR_Word check_hlds__try_expand__GoalExpr_20;

#line 357 "try_expand.m"
        {
#line 357 "try_expand.m"
          check_hlds__try_expand__expand_try_goals_in_conj_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Conjuncts0_18, &check_hlds__try_expand__Conjuncts_19, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
        }
#line 358 "try_expand.m"
        {
#line 358 "try_expand.m"
          check_hlds__try_expand__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 358 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 358 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_20, 1) = ((MR_Box) (check_hlds__try_expand__ConjType_17));
#line 358 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_20, 2) = ((MR_Box) (check_hlds__try_expand__Conjuncts_19));
#line 358 "try_expand.m"
        }
#line 359 "try_expand.m"
        {
#line 359 "try_expand.m"
          MR_Word base;
#line 359 "try_expand.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 359 "try_expand.m"
          *check_hlds__try_expand__Goal_8 = base;
#line 359 "try_expand.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_20));
#line 359 "try_expand.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 359 "try_expand.m"
        }
#line 356 "try_expand.m"
      }
#line 355 "try_expand.m"
    else
#line 355 "try_expand.m"
    if (((((MR_tag((MR_Word) check_hlds__try_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 361 "try_expand.m"
      {
#line 361 "try_expand.m"
        MR_Word check_hlds__try_expand__Disjuncts0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 361 "try_expand.m"
        MR_Word check_hlds__try_expand__Disjuncts_22;
#line 361 "try_expand.m"
        MR_Word check_hlds__try_expand__GoalExpr_116;

#line 362 "try_expand.m"
        {
#line 362 "try_expand.m"
          check_hlds__try_expand__expand_try_goals_in_disj_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Disjuncts0_21, &check_hlds__try_expand__Disjuncts_22, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
        }
#line 363 "try_expand.m"
        {
#line 363 "try_expand.m"
          check_hlds__try_expand__GoalExpr_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 363 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 363 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_116, 1) = ((MR_Box) (check_hlds__try_expand__Disjuncts_22));
#line 363 "try_expand.m"
        }
#line 364 "try_expand.m"
        {
#line 364 "try_expand.m"
          MR_Word base;
#line 364 "try_expand.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 364 "try_expand.m"
          *check_hlds__try_expand__Goal_8 = base;
#line 364 "try_expand.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_116));
#line 364 "try_expand.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 364 "try_expand.m"
        }
#line 361 "try_expand.m"
      }
#line 355 "try_expand.m"
    else
#line 355 "try_expand.m"
    if (((((MR_tag((MR_Word) check_hlds__try_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 403 "try_expand.m"
      {
#line 403 "try_expand.m"
        MR_Word check_hlds__try_expand__Vars_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 403 "try_expand.m"
        MR_Word check_hlds__try_expand__Cond0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 2)));
#line 403 "try_expand.m"
        MR_Word check_hlds__try_expand__Then0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 3)));
#line 403 "try_expand.m"
        MR_Word check_hlds__try_expand__Else0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 4)));
#line 403 "try_expand.m"
        MR_Word check_hlds__try_expand__Cond_58;
#line 403 "try_expand.m"
        MR_Word check_hlds__try_expand__Then_59;
#line 403 "try_expand.m"
        MR_Word check_hlds__try_expand__Else_60;
#line 403 "try_expand.m"
        MR_Word check_hlds__try_expand__GoalExpr_122;

#line 404 "try_expand.m"
        {
#line 404 "try_expand.m"
          check_hlds__try_expand__expand_try_goals_in_if_then_else_9_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Cond0_55, &check_hlds__try_expand__Cond_58, check_hlds__try_expand__Then0_56, &check_hlds__try_expand__Then_59, check_hlds__try_expand__Else0_57, &check_hlds__try_expand__Else_60, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
        }
#line 406 "try_expand.m"
        {
#line 406 "try_expand.m"
          check_hlds__try_expand__GoalExpr_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 406 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 406 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_122, 1) = ((MR_Box) (check_hlds__try_expand__Vars_54));
#line 406 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_122, 2) = ((MR_Box) (check_hlds__try_expand__Cond_58));
#line 406 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_122, 3) = ((MR_Box) (check_hlds__try_expand__Then_59));
#line 406 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_122, 4) = ((MR_Box) (check_hlds__try_expand__Else_60));
#line 406 "try_expand.m"
        }
#line 407 "try_expand.m"
        {
#line 407 "try_expand.m"
          MR_Word base;
#line 407 "try_expand.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 407 "try_expand.m"
          *check_hlds__try_expand__Goal_8 = base;
#line 407 "try_expand.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_122));
#line 407 "try_expand.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 407 "try_expand.m"
        }
#line 403 "try_expand.m"
      }
#line 355 "try_expand.m"
    else
#line 355 "try_expand.m"
    if (((((MR_tag((MR_Word) check_hlds__try_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 376 "try_expand.m"
      {
#line 376 "try_expand.m"
        MR_Word check_hlds__try_expand__Reason_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 376 "try_expand.m"
        MR_Word check_hlds__try_expand__InnerGoal0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 2)));

#line 381 "try_expand.m"
        if (((MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) == (MR_mktag((MR_Integer) 0))))
#line 394 "try_expand.m"
          {
#line 394 "try_expand.m"
            MR_Word check_hlds__try_expand__InnerGoal_128;
#line 394 "try_expand.m"
            MR_Word check_hlds__try_expand__GoalExpr_129;

#line 395 "try_expand.m"
            {
#line 395 "try_expand.m"
              check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_128, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
            }
#line 396 "try_expand.m"
            {
#line 396 "try_expand.m"
              check_hlds__try_expand__GoalExpr_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_129, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_129, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_128));
#line 396 "try_expand.m"
            }
#line 397 "try_expand.m"
            {
#line 397 "try_expand.m"
              MR_Word base;
#line 397 "try_expand.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 397 "try_expand.m"
              *check_hlds__try_expand__Goal_8 = base;
#line 397 "try_expand.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_129));
#line 397 "try_expand.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 397 "try_expand.m"
            }
#line 394 "try_expand.m"
          }
#line 381 "try_expand.m"
        else
#line 381 "try_expand.m"
        if (((MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) == (MR_mktag((MR_Integer) 2))))
#line 394 "try_expand.m"
          {
#line 394 "try_expand.m"
            MR_Word check_hlds__try_expand__InnerGoal_138;
#line 394 "try_expand.m"
            MR_Word check_hlds__try_expand__GoalExpr_139;

#line 395 "try_expand.m"
            {
#line 395 "try_expand.m"
              check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_138, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
            }
#line 396 "try_expand.m"
            {
#line 396 "try_expand.m"
              check_hlds__try_expand__GoalExpr_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_139, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_139, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_138));
#line 396 "try_expand.m"
            }
#line 397 "try_expand.m"
            {
#line 397 "try_expand.m"
              MR_Word base;
#line 397 "try_expand.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 397 "try_expand.m"
              *check_hlds__try_expand__Goal_8 = base;
#line 397 "try_expand.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_139));
#line 397 "try_expand.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 397 "try_expand.m"
            }
#line 394 "try_expand.m"
          }
#line 381 "try_expand.m"
        else
#line 381 "try_expand.m"
        if (((MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) == (MR_mktag((MR_Integer) 1))))
#line 394 "try_expand.m"
          {
#line 394 "try_expand.m"
            MR_Word check_hlds__try_expand__InnerGoal_140;
#line 394 "try_expand.m"
            MR_Word check_hlds__try_expand__GoalExpr_141;

#line 395 "try_expand.m"
            {
#line 395 "try_expand.m"
              check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_140, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
            }
#line 396 "try_expand.m"
            {
#line 396 "try_expand.m"
              check_hlds__try_expand__GoalExpr_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_141, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_141, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_140));
#line 396 "try_expand.m"
            }
#line 397 "try_expand.m"
            {
#line 397 "try_expand.m"
              MR_Word base;
#line 397 "try_expand.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 397 "try_expand.m"
              *check_hlds__try_expand__Goal_8 = base;
#line 397 "try_expand.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_141));
#line 397 "try_expand.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 397 "try_expand.m"
            }
#line 394 "try_expand.m"
          }
#line 381 "try_expand.m"
        else
#line 381 "try_expand.m"
        if (((((MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 394 "try_expand.m"
          {
#line 394 "try_expand.m"
            MR_Word check_hlds__try_expand__InnerGoal_52;
#line 394 "try_expand.m"
            MR_Word check_hlds__try_expand__GoalExpr_119;

#line 395 "try_expand.m"
            {
#line 395 "try_expand.m"
              check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_52, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
            }
#line 396 "try_expand.m"
            {
#line 396 "try_expand.m"
              check_hlds__try_expand__GoalExpr_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_119, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_119, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_52));
#line 396 "try_expand.m"
            }
#line 397 "try_expand.m"
            {
#line 397 "try_expand.m"
              MR_Word base;
#line 397 "try_expand.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 397 "try_expand.m"
              *check_hlds__try_expand__Goal_8 = base;
#line 397 "try_expand.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_119));
#line 397 "try_expand.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 397 "try_expand.m"
            }
#line 394 "try_expand.m"
          }
#line 381 "try_expand.m"
        else
#line 381 "try_expand.m"
        if (((((MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 394 "try_expand.m"
          {
#line 394 "try_expand.m"
            MR_Word check_hlds__try_expand__InnerGoal_126;
#line 394 "try_expand.m"
            MR_Word check_hlds__try_expand__GoalExpr_127;

#line 395 "try_expand.m"
            {
#line 395 "try_expand.m"
              check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_126, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
            }
#line 396 "try_expand.m"
            {
#line 396 "try_expand.m"
              check_hlds__try_expand__GoalExpr_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_127, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_127, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_126));
#line 396 "try_expand.m"
            }
#line 397 "try_expand.m"
            {
#line 397 "try_expand.m"
              MR_Word base;
#line 397 "try_expand.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 397 "try_expand.m"
              *check_hlds__try_expand__Goal_8 = base;
#line 397 "try_expand.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_127));
#line 397 "try_expand.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 397 "try_expand.m"
            }
#line 394 "try_expand.m"
          }
#line 381 "try_expand.m"
        else
#line 381 "try_expand.m"
        if (((((MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 381 "try_expand.m"
          {
#line 381 "try_expand.m"
            MR_Word check_hlds__try_expand__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 2)));
#line 378 "try_expand.m"
            MR_Word check_hlds__try_expand__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 1)));

#line 381 "try_expand.m"
            if ((check_hlds__try_expand__V_150_150 == (MR_Integer) 1))
#line 378 "try_expand.m"
              {
#line 380 "try_expand.m"
                *check_hlds__try_expand__Goal_8 = check_hlds__try_expand__Goal0_7;
#line 378 "try_expand.m"
                *check_hlds__try_expand__STATE_VARIABLE_Info_95 = check_hlds__try_expand__STATE_VARIABLE_Info_0_94;
#line 378 "try_expand.m"
              }
#line 381 "try_expand.m"
            else
#line 381 "try_expand.m"
            if ((check_hlds__try_expand__V_150_150 == (MR_Integer) 2))
#line 394 "try_expand.m"
              {
#line 394 "try_expand.m"
                MR_Word check_hlds__try_expand__InnerGoal_130;
#line 394 "try_expand.m"
                MR_Word check_hlds__try_expand__GoalExpr_131;

#line 395 "try_expand.m"
                {
#line 395 "try_expand.m"
                  check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_130, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
                }
#line 396 "try_expand.m"
                {
#line 396 "try_expand.m"
                  check_hlds__try_expand__GoalExpr_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 396 "try_expand.m"
                  MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 396 "try_expand.m"
                  MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_131, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 396 "try_expand.m"
                  MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_131, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_130));
#line 396 "try_expand.m"
                }
#line 397 "try_expand.m"
                {
#line 397 "try_expand.m"
                  MR_Word base;
#line 397 "try_expand.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 397 "try_expand.m"
                  *check_hlds__try_expand__Goal_8 = base;
#line 397 "try_expand.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_131));
#line 397 "try_expand.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 397 "try_expand.m"
                }
#line 394 "try_expand.m"
              }
#line 381 "try_expand.m"
            else
#line 381 "try_expand.m"
            if ((check_hlds__try_expand__V_150_150 == (MR_Integer) 0))
#line 399 "try_expand.m"
              {
#line 400 "try_expand.m"
                {
#line 400 "try_expand.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.expand_try_goals_in_goal\'/5", (MR_String) "from_ground_term_initial");
#line 400 "try_expand.m"
                  return;
                }
#line 399 "try_expand.m"
              }
#line 381 "try_expand.m"
            else
#line 394 "try_expand.m"
              {
#line 394 "try_expand.m"
                MR_Word check_hlds__try_expand__InnerGoal_132;
#line 394 "try_expand.m"
                MR_Word check_hlds__try_expand__GoalExpr_133;

#line 395 "try_expand.m"
                {
#line 395 "try_expand.m"
                  check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_132, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
                }
#line 396 "try_expand.m"
                {
#line 396 "try_expand.m"
                  check_hlds__try_expand__GoalExpr_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 396 "try_expand.m"
                  MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 396 "try_expand.m"
                  MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_133, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 396 "try_expand.m"
                  MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_133, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_132));
#line 396 "try_expand.m"
                }
#line 397 "try_expand.m"
                {
#line 397 "try_expand.m"
                  MR_Word base;
#line 397 "try_expand.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 397 "try_expand.m"
                  *check_hlds__try_expand__Goal_8 = base;
#line 397 "try_expand.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_133));
#line 397 "try_expand.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 397 "try_expand.m"
                }
#line 394 "try_expand.m"
              }
#line 381 "try_expand.m"
          }
#line 381 "try_expand.m"
        else
#line 381 "try_expand.m"
        if (((((MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 394 "try_expand.m"
          {
#line 394 "try_expand.m"
            MR_Word check_hlds__try_expand__InnerGoal_136;
#line 394 "try_expand.m"
            MR_Word check_hlds__try_expand__GoalExpr_137;

#line 395 "try_expand.m"
            {
#line 395 "try_expand.m"
              check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_136, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
            }
#line 396 "try_expand.m"
            {
#line 396 "try_expand.m"
              check_hlds__try_expand__GoalExpr_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_137, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_137, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_136));
#line 396 "try_expand.m"
            }
#line 397 "try_expand.m"
            {
#line 397 "try_expand.m"
              MR_Word base;
#line 397 "try_expand.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 397 "try_expand.m"
              *check_hlds__try_expand__Goal_8 = base;
#line 397 "try_expand.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_137));
#line 397 "try_expand.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 397 "try_expand.m"
            }
#line 394 "try_expand.m"
          }
#line 381 "try_expand.m"
        else
#line 381 "try_expand.m"
        if (((((MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 394 "try_expand.m"
          {
#line 394 "try_expand.m"
            MR_Word check_hlds__try_expand__InnerGoal_142;
#line 394 "try_expand.m"
            MR_Word check_hlds__try_expand__GoalExpr_143;

#line 395 "try_expand.m"
            {
#line 395 "try_expand.m"
              check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_142, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
            }
#line 396 "try_expand.m"
            {
#line 396 "try_expand.m"
              check_hlds__try_expand__GoalExpr_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_143, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_143, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_142));
#line 396 "try_expand.m"
            }
#line 397 "try_expand.m"
            {
#line 397 "try_expand.m"
              MR_Word base;
#line 397 "try_expand.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 397 "try_expand.m"
              *check_hlds__try_expand__Goal_8 = base;
#line 397 "try_expand.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_143));
#line 397 "try_expand.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 397 "try_expand.m"
            }
#line 394 "try_expand.m"
          }
#line 381 "try_expand.m"
        else
#line 381 "try_expand.m"
        if (((((MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 394 "try_expand.m"
          {
#line 394 "try_expand.m"
            MR_Word check_hlds__try_expand__InnerGoal_144;
#line 394 "try_expand.m"
            MR_Word check_hlds__try_expand__GoalExpr_145;

#line 395 "try_expand.m"
            {
#line 395 "try_expand.m"
              check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_144, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
            }
#line 396 "try_expand.m"
            {
#line 396 "try_expand.m"
              check_hlds__try_expand__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_145, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_145, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_144));
#line 396 "try_expand.m"
            }
#line 397 "try_expand.m"
            {
#line 397 "try_expand.m"
              MR_Word base;
#line 397 "try_expand.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 397 "try_expand.m"
              *check_hlds__try_expand__Goal_8 = base;
#line 397 "try_expand.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_145));
#line 397 "try_expand.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 397 "try_expand.m"
            }
#line 394 "try_expand.m"
          }
#line 381 "try_expand.m"
        else
#line 381 "try_expand.m"
        if (((((MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 394 "try_expand.m"
          {
#line 394 "try_expand.m"
            MR_Word check_hlds__try_expand__InnerGoal_146;
#line 394 "try_expand.m"
            MR_Word check_hlds__try_expand__GoalExpr_147;

#line 395 "try_expand.m"
            {
#line 395 "try_expand.m"
              check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_146, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
            }
#line 396 "try_expand.m"
            {
#line 396 "try_expand.m"
              check_hlds__try_expand__GoalExpr_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_147, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_147, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_146));
#line 396 "try_expand.m"
            }
#line 397 "try_expand.m"
            {
#line 397 "try_expand.m"
              MR_Word base;
#line 397 "try_expand.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 397 "try_expand.m"
              *check_hlds__try_expand__Goal_8 = base;
#line 397 "try_expand.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_147));
#line 397 "try_expand.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 397 "try_expand.m"
            }
#line 394 "try_expand.m"
          }
#line 381 "try_expand.m"
        else
#line 394 "try_expand.m"
          {
#line 394 "try_expand.m"
            MR_Word check_hlds__try_expand__InnerGoal_148;
#line 394 "try_expand.m"
            MR_Word check_hlds__try_expand__GoalExpr_149;

#line 395 "try_expand.m"
            {
#line 395 "try_expand.m"
              check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_148, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
            }
#line 396 "try_expand.m"
            {
#line 396 "try_expand.m"
              check_hlds__try_expand__GoalExpr_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_149, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 396 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_149, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_148));
#line 396 "try_expand.m"
            }
#line 397 "try_expand.m"
            {
#line 397 "try_expand.m"
              MR_Word base;
#line 397 "try_expand.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 397 "try_expand.m"
              *check_hlds__try_expand__Goal_8 = base;
#line 397 "try_expand.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_149));
#line 397 "try_expand.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 397 "try_expand.m"
            }
#line 394 "try_expand.m"
          }
#line 376 "try_expand.m"
      }
#line 355 "try_expand.m"
    else
#line 355 "try_expand.m"
    if (((((MR_tag((MR_Word) check_hlds__try_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 416 "try_expand.m"
      {
#line 416 "try_expand.m"
        MR_Word check_hlds__try_expand__ShortHand0_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));

#line 420 "try_expand.m"
        if (((MR_tag((MR_Word) check_hlds__try_expand__ShortHand0_79)) == (MR_mktag((MR_Integer) 1))))
#line 422 "try_expand.m"
          {
#line 422 "try_expand.m"
            MR_Word check_hlds__try_expand__AtomicGoalType_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_79, (MR_Integer) 0)));
#line 422 "try_expand.m"
            MR_Word check_hlds__try_expand__Outer_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_79, (MR_Integer) 1)));
#line 422 "try_expand.m"
            MR_Word check_hlds__try_expand__Inner_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_79, (MR_Integer) 2)));
#line 422 "try_expand.m"
            MR_Word check_hlds__try_expand__MaybeOutputVars_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_79, (MR_Integer) 3)));
#line 422 "try_expand.m"
            MR_Word check_hlds__try_expand__MainGoal0_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_79, (MR_Integer) 4)));
#line 422 "try_expand.m"
            MR_Word check_hlds__try_expand__OrElseGoals0_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_79, (MR_Integer) 5)));
#line 422 "try_expand.m"
            MR_Word check_hlds__try_expand__OrElseInners_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_79, (MR_Integer) 6)));
#line 422 "try_expand.m"
            MR_Word check_hlds__try_expand__MainGoal_90;
#line 422 "try_expand.m"
            MR_Word check_hlds__try_expand__OrElseGoals_91;
#line 422 "try_expand.m"
            MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_99_99;
#line 422 "try_expand.m"
            MR_Word check_hlds__try_expand__V_101_101;
#line 422 "try_expand.m"
            MR_Word check_hlds__try_expand__GoalExpr_123;

#line 423 "try_expand.m"
            {
#line 423 "try_expand.m"
              check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__MainGoal0_87, &check_hlds__try_expand__MainGoal_90, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, &check_hlds__try_expand__STATE_VARIABLE_Info_99_99);
            }
#line 424 "try_expand.m"
            {
#line 424 "try_expand.m"
              check_hlds__try_expand__expand_try_goals_in_disj_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__OrElseGoals0_88, &check_hlds__try_expand__OrElseGoals_91, check_hlds__try_expand__STATE_VARIABLE_Info_99_99, check_hlds__try_expand__STATE_VARIABLE_Info_95);
            }
#line 426 "try_expand.m"
            {
#line 426 "try_expand.m"
              check_hlds__try_expand__GoalExpr_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 426 "try_expand.m"
              MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_123, 0) = ((MR_Box) (check_hlds__try_expand__AtomicGoalType_83));
#line 426 "try_expand.m"
              MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_123, 1) = ((MR_Box) (check_hlds__try_expand__Outer_84));
#line 426 "try_expand.m"
              MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_123, 2) = ((MR_Box) (check_hlds__try_expand__Inner_85));
#line 426 "try_expand.m"
              MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_123, 3) = ((MR_Box) (check_hlds__try_expand__MaybeOutputVars_86));
#line 426 "try_expand.m"
              MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_123, 4) = ((MR_Box) (check_hlds__try_expand__MainGoal_90));
#line 426 "try_expand.m"
              MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_123, 5) = ((MR_Box) (check_hlds__try_expand__OrElseGoals_91));
#line 426 "try_expand.m"
              MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_123, 6) = ((MR_Box) (check_hlds__try_expand__OrElseInners_89));
#line 426 "try_expand.m"
            }
#line 428 "try_expand.m"
            {
#line 428 "try_expand.m"
              check_hlds__try_expand__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_101_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 428 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_101_101, 1) = ((MR_Box) (check_hlds__try_expand__GoalExpr_123));
#line 428 "try_expand.m"
            }
#line 428 "try_expand.m"
            {
#line 428 "try_expand.m"
              MR_Word base;
#line 428 "try_expand.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 428 "try_expand.m"
              *check_hlds__try_expand__Goal_8 = base;
#line 428 "try_expand.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__V_101_101));
#line 428 "try_expand.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 428 "try_expand.m"
            }
#line 422 "try_expand.m"
          }
#line 420 "try_expand.m"
        else
#line 420 "try_expand.m"
        if (((MR_tag((MR_Word) check_hlds__try_expand__ShortHand0_79)) == (MR_mktag((MR_Integer) 0))))
#line 430 "try_expand.m"
          {
#line 431 "try_expand.m"
            {
#line 431 "try_expand.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.expand_try_goals_in_goal\'/5", (MR_String) "bi_implication");
#line 431 "try_expand.m"
              return;
            }
#line 430 "try_expand.m"
          }
#line 420 "try_expand.m"
        else
#line 419 "try_expand.m"
          {
#line 419 "try_expand.m"
            check_hlds__try_expand__expand_try_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__ShortHand0_79, check_hlds__try_expand__Goal_8, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
#line 419 "try_expand.m"
            return;
          }
#line 416 "try_expand.m"
      }
#line 355 "try_expand.m"
    else
#line 355 "try_expand.m"
    if (((((MR_tag((MR_Word) check_hlds__try_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 371 "try_expand.m"
      {
#line 371 "try_expand.m"
        MR_Word check_hlds__try_expand__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 371 "try_expand.m"
        MR_Word check_hlds__try_expand__CanFail_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 2)));
#line 371 "try_expand.m"
        MR_Word check_hlds__try_expand__Cases0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 3)));
#line 371 "try_expand.m"
        MR_Word check_hlds__try_expand__Cases_28;
#line 371 "try_expand.m"
        MR_Word check_hlds__try_expand__GoalExpr_118;

#line 372 "try_expand.m"
        {
#line 372 "try_expand.m"
          check_hlds__try_expand__expand_try_goals_in_cases_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Cases0_27, &check_hlds__try_expand__Cases_28, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
        }
#line 373 "try_expand.m"
        {
#line 373 "try_expand.m"
          check_hlds__try_expand__GoalExpr_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 373 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 373 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_118, 1) = ((MR_Box) (check_hlds__try_expand__Var_25));
#line 373 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_118, 2) = ((MR_Box) (check_hlds__try_expand__CanFail_26));
#line 373 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_118, 3) = ((MR_Box) (check_hlds__try_expand__Cases_28));
#line 373 "try_expand.m"
        }
#line 374 "try_expand.m"
        {
#line 374 "try_expand.m"
          MR_Word base;
#line 374 "try_expand.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 374 "try_expand.m"
          *check_hlds__try_expand__Goal_8 = base;
#line 374 "try_expand.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_118));
#line 374 "try_expand.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 374 "try_expand.m"
        }
#line 371 "try_expand.m"
      }
#line 355 "try_expand.m"
    else
#line 412 "try_expand.m"
      {
#line 413 "try_expand.m"
        *check_hlds__try_expand__Goal_8 = check_hlds__try_expand__Goal0_7;
#line 412 "try_expand.m"
        *check_hlds__try_expand__STATE_VARIABLE_Info_95 = check_hlds__try_expand__STATE_VARIABLE_Info_0_94;
#line 412 "try_expand.m"
      }
#line 350 "try_expand.m"
  }
#line 347 "try_expand.m"
}

#line 282 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_proc_6_p_0(
#line 282 "try_expand.m"
  MR_Word check_hlds__try_expand__PredId_7,
#line 282 "try_expand.m"
  MR_Integer check_hlds__try_expand__ProcId_8,
#line 282 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_19,
#line 282 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_20,
#line 282 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Specs_0_21,
#line 282 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Specs_22)
#line 282 "try_expand.m"
{
#line 289 "try_expand.m"
  {
#line 289 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 289 "try_expand.m"
    MR_Word check_hlds__try_expand__Goal0_13;
#line 289 "try_expand.m"
    MR_Word check_hlds__try_expand__InitInstmap_14;
#line 289 "try_expand.m"
    MR_Word check_hlds__try_expand__Info0_15;
#line 289 "try_expand.m"
    MR_Word check_hlds__try_expand__Goal_16;
#line 289 "try_expand.m"
    MR_Word check_hlds__try_expand__Info_17;
#line 289 "try_expand.m"
    MR_Word check_hlds__try_expand__Changed_18;
#line 289 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_23_23;
#line 289 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_24_24;
#line 289 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_26_26;
#line 289 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_27_27;
#line 289 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_28_28;

#line 288 "try_expand.m"
    {
#line 288 "try_expand.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__try_expand__PredId_7, check_hlds__try_expand__ProcId_8, &check_hlds__try_expand__STATE_VARIABLE_PredInfo_23_23, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_24_24);
    }
#line 290 "try_expand.m"
    {
#line 290 "try_expand.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ProcInfo_24_24, &check_hlds__try_expand__Goal0_13);
    }
#line 291 "try_expand.m"
    {
#line 291 "try_expand.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__try_expand__STATE_VARIABLE_ProcInfo_24_24, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_19, &check_hlds__try_expand__InitInstmap_14);
    }
#line 293 "try_expand.m"
    {
#line 293 "try_expand.m"
      check_hlds__try_expand__Info0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 293 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info0_15, 0) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_19));
#line 293 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info0_15, 1) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_PredInfo_23_23));
#line 293 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info0_15, 2) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ProcInfo_24_24));
#line 293 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info0_15, 3) = ((MR_Box) ((MR_Integer) 0));
#line 293 "try_expand.m"
    }
#line 294 "try_expand.m"
    {
#line 294 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__InitInstmap_14, check_hlds__try_expand__Goal0_13, &check_hlds__try_expand__Goal_16, check_hlds__try_expand__Info0_15, &check_hlds__try_expand__Info_17);
    }
#line 295 "try_expand.m"
    check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info_17, (MR_Integer) 0)));
#line 295 "try_expand.m"
    check_hlds__try_expand__STATE_VARIABLE_PredInfo_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info_17, (MR_Integer) 1)));
#line 295 "try_expand.m"
    check_hlds__try_expand__STATE_VARIABLE_ProcInfo_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info_17, (MR_Integer) 2)));
#line 295 "try_expand.m"
    check_hlds__try_expand__Changed_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info_17, (MR_Integer) 3)));
#line 302 "try_expand.m"
    if ((check_hlds__try_expand__Changed_18 == (MR_Integer) 0))
#line 303 "try_expand.m"
      {
#line 303 "try_expand.m"
        *check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_20 = check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_26_26;
#line 303 "try_expand.m"
        *check_hlds__try_expand__STATE_VARIABLE_Specs_22 = check_hlds__try_expand__STATE_VARIABLE_Specs_0_21;
#line 303 "try_expand.m"
      }
#line 302 "try_expand.m"
    else
#line 298 "try_expand.m"
      {
#line 298 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_29_29;
#line 298 "try_expand.m"
        MR_Word check_hlds__try_expand__ModeSpecs_44;
#line 298 "try_expand.m"
        MR_Word check_hlds__try_expand__Globals_46;
#line 298 "try_expand.m"
        MR_Word check_hlds__try_expand__HasModeErrors_47;
#line 298 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_27_49;
#line 298 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_29_51;
#line 298 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_30_52;
#line 298 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_31_53;
#line 318 "try_expand.m"
        MR_Word check_hlds__try_expand___Changed_45;

#line 313 "try_expand.m"
        {
#line 313 "try_expand.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__try_expand__Goal_16, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_28_28, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_27_49);
        }
#line 314 "try_expand.m"
        {
#line 314 "try_expand.m"
          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_27_49, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_29_51);
        }
#line 315 "try_expand.m"
        {
#line 315 "try_expand.m"
          hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(check_hlds__try_expand__PredId_7, check_hlds__try_expand__ProcId_8, check_hlds__try_expand__STATE_VARIABLE_PredInfo_27_27, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_29_51, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_26_26, &check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_30_52);
        }
#line 318 "try_expand.m"
        {
#line 318 "try_expand.m"
          check_hlds__modes__modecheck_proc_6_p_0(check_hlds__try_expand__ProcId_8, check_hlds__try_expand__PredId_7, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_30_52, &check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_31_53, &check_hlds__try_expand__ModeSpecs_44, &check_hlds__try_expand___Changed_45);
        }
#line 319 "try_expand.m"
        {
#line 319 "try_expand.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_31_53, &check_hlds__try_expand__Globals_46);
        }
#line 320 "try_expand.m"
        {
#line 320 "try_expand.m"
          check_hlds__try_expand__HasModeErrors_47 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__try_expand__Globals_46, check_hlds__try_expand__ModeSpecs_44);
        }
#line 327 "try_expand.m"
        if ((check_hlds__try_expand__HasModeErrors_47 == (MR_Integer) 0))
#line 328 "try_expand.m"
          {
#line 334 "try_expand.m"
            MR_Word check_hlds__try_expand___DetismSpecs_48;

#line 334 "try_expand.m"
            {
#line 334 "try_expand.m"
              check_hlds__det_analysis__determinism_check_proc_5_p_0(check_hlds__try_expand__ProcId_8, check_hlds__try_expand__PredId_7, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_31_53, &check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_29_29, &check_hlds__try_expand___DetismSpecs_48);
            }
#line 328 "try_expand.m"
            *check_hlds__try_expand__STATE_VARIABLE_Specs_22 = check_hlds__try_expand__STATE_VARIABLE_Specs_0_21;
#line 328 "try_expand.m"
          }
#line 327 "try_expand.m"
        else
#line 322 "try_expand.m"
          {
#line 326 "try_expand.m"
            {
#line 326 "try_expand.m"
              *check_hlds__try_expand__STATE_VARIABLE_Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__try_expand__ModeSpecs_44, check_hlds__try_expand__STATE_VARIABLE_Specs_0_21);
            }
#line 322 "try_expand.m"
            check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_29_29 = check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_31_53;
#line 322 "try_expand.m"
          }
#line 301 "try_expand.m"
        {
#line 301 "try_expand.m"
          hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_29_29, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_20);
#line 301 "try_expand.m"
          return;
        }
#line 298 "try_expand.m"
      }
#line 289 "try_expand.m"
  }
#line 282 "try_expand.m"
}

#line 279 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_pred_5_p_0_1(
#line 279 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 279 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 279 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_2,
#line 279 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_3,
#line 279 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_4,
#line 279 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_5)
#line 279 "try_expand.m"
{
#line 279 "try_expand.m"
  {
#line 279 "try_expand.m"
    MR_Box check_hlds__try_expand__closure = check_hlds__try_expand__closure_arg;
#line 279 "try_expand.m"
    MR_Word check_hlds__try_expand__conv1_STATE_VARIABLE_ModuleInfo_20;
#line 279 "try_expand.m"
    MR_Word check_hlds__try_expand__conv0_STATE_VARIABLE_Specs_22;

#line 279 "try_expand.m"
    {
#line 279 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__closure, (MR_Integer) 3))), ((MR_Integer) check_hlds__try_expand__wrapper_arg_1), ((MR_Word) check_hlds__try_expand__wrapper_arg_2), &check_hlds__try_expand__conv1_STATE_VARIABLE_ModuleInfo_20, ((MR_Word) check_hlds__try_expand__wrapper_arg_4), &check_hlds__try_expand__conv0_STATE_VARIABLE_Specs_22);
    }
#line 279 "try_expand.m"
    *check_hlds__try_expand__wrapper_arg_3 = ((MR_Box) (check_hlds__try_expand__conv1_STATE_VARIABLE_ModuleInfo_20));
#line 279 "try_expand.m"
    *check_hlds__try_expand__wrapper_arg_5 = ((MR_Box) (check_hlds__try_expand__conv0_STATE_VARIABLE_Specs_22));
#line 279 "try_expand.m"
  }
#line 279 "try_expand.m"
}

#line 272 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_pred_5_p_0(
#line 272 "try_expand.m"
  MR_Word check_hlds__try_expand__PredId_6,
#line 272 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11,
#line 272 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_12,
#line 272 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Specs_0_13,
#line 272 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Specs_14)
#line 272 "try_expand.m"
{
#line 276 "try_expand.m"
  {
#line 276 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 276 "try_expand.m"
    MR_Word check_hlds__try_expand__PredInfo_9;
#line 276 "try_expand.m"
    MR_Word check_hlds__try_expand__ProcIds_10;
#line 276 "try_expand.m"
    MR_Word check_hlds__try_expand__V_15_15;
#line 279 "try_expand.m"
    MR_Box check_hlds__try_expand__conv3_STATE_VARIABLE_ModuleInfo_12;
#line 279 "try_expand.m"
    MR_Box check_hlds__try_expand__conv2_STATE_VARIABLE_Specs_14;

#line 277 "try_expand.m"
    {
#line 277 "try_expand.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11, check_hlds__try_expand__PredId_6, &check_hlds__try_expand__PredInfo_9);
    }
#line 278 "try_expand.m"
    {
#line 278 "try_expand.m"
      check_hlds__try_expand__ProcIds_10 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(check_hlds__try_expand__PredInfo_9);
    }
#line 279 "try_expand.m"
    {
#line 279 "try_expand.m"
      check_hlds__try_expand__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 279 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_15_15, 0) = ((MR_Box) (&check_hlds__try_expand_scalar_common_4[0]));
#line 279 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_15_15, 1) = ((MR_Box) (check_hlds__try_expand__expand_try_goals_in_pred_5_p_0_1));
#line 279 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 279 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_15_15, 3) = ((MR_Box) (check_hlds__try_expand__PredId_6));
#line 279 "try_expand.m"
    }
#line 279 "try_expand.m"
    {
#line 279 "try_expand.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &check_hlds__try_expand_scalar_common_1[0], check_hlds__try_expand__V_15_15, check_hlds__try_expand__ProcIds_10, ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11)), &check_hlds__try_expand__conv3_STATE_VARIABLE_ModuleInfo_12, ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_Specs_0_13)), &check_hlds__try_expand__conv2_STATE_VARIABLE_Specs_14);
    }
#line 279 "try_expand.m"
    *check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_12 = ((MR_Word) check_hlds__try_expand__conv3_STATE_VARIABLE_ModuleInfo_12);
#line 279 "try_expand.m"
    *check_hlds__try_expand__STATE_VARIABLE_Specs_14 = ((MR_Word) check_hlds__try_expand__conv2_STATE_VARIABLE_Specs_14);
#line 276 "try_expand.m"
  }
#line 272 "try_expand.m"
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
#line 948 "try_expand.m"
  {
#line 948 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;

#line 948 "try_expand.m"
    if ((strcmp(check_hlds__try_expand__HeadVar__1_1, (MR_String) "try") == 0))
#line 948 "try_expand.m"
      check_hlds__try_expand__succeeded = (check_hlds__try_expand__HeadVar__2_2 == (MR_Integer) 2);
#line 948 "try_expand.m"
    else
#line 948 "try_expand.m"
    if ((strcmp(check_hlds__try_expand__HeadVar__1_1, (MR_String) "try_io") == 0))
#line 949 "try_expand.m"
      check_hlds__try_expand__succeeded = (check_hlds__try_expand__HeadVar__2_2 == (MR_Integer) 4);
#line 948 "try_expand.m"
    else
#line 948 "try_expand.m"
    if ((strcmp(check_hlds__try_expand__HeadVar__1_1, (MR_String) "unreachable") == 0))
#line 950 "try_expand.m"
      check_hlds__try_expand__succeeded = (check_hlds__try_expand__HeadVar__2_2 == (MR_Integer) 0);
#line 948 "try_expand.m"
    else
#line 948 "try_expand.m"
      check_hlds__try_expand__succeeded = MR_FALSE;
#line 948 "try_expand.m"
    return check_hlds__try_expand__succeeded;
#line 948 "try_expand.m"
  }
#line 211 "try_expand.m"
}

#line 261 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_module_4_p_0_1(
#line 261 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 261 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 261 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_2,
#line 261 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_3,
#line 261 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_4,
#line 261 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_5)
#line 261 "try_expand.m"
{
#line 261 "try_expand.m"
  {
#line 261 "try_expand.m"
    MR_Box check_hlds__try_expand__closure = check_hlds__try_expand__closure_arg;
#line 261 "try_expand.m"
    MR_Word check_hlds__try_expand__conv1_STATE_VARIABLE_ModuleInfo_12;
#line 261 "try_expand.m"
    MR_Word check_hlds__try_expand__conv0_STATE_VARIABLE_Specs_14;

#line 261 "try_expand.m"
    {
#line 261 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_pred_5_p_0(((MR_Word) check_hlds__try_expand__wrapper_arg_1), ((MR_Word) check_hlds__try_expand__wrapper_arg_2), &check_hlds__try_expand__conv1_STATE_VARIABLE_ModuleInfo_12, ((MR_Word) check_hlds__try_expand__wrapper_arg_4), &check_hlds__try_expand__conv0_STATE_VARIABLE_Specs_14);
    }
#line 261 "try_expand.m"
    *check_hlds__try_expand__wrapper_arg_3 = ((MR_Box) (check_hlds__try_expand__conv1_STATE_VARIABLE_ModuleInfo_12));
#line 261 "try_expand.m"
    *check_hlds__try_expand__wrapper_arg_5 = ((MR_Box) (check_hlds__try_expand__conv0_STATE_VARIABLE_Specs_14));
#line 261 "try_expand.m"
  }
#line 261 "try_expand.m"
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
#line 249 "try_expand.m"
  {
#line 249 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 249 "try_expand.m"
    MR_Word check_hlds__try_expand__ImportedModules_7;
#line 254 "try_expand.m"
    MR_Word check_hlds__try_expand__V_15_15;

#line 253 "try_expand.m"
    {
#line 253 "try_expand.m"
      hlds__hlds_module__module_info_get_imported_module_specifiers_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11, &check_hlds__try_expand__ImportedModules_7);
    }
#line 254 "try_expand.m"
    {
#line 254 "try_expand.m"
      check_hlds__try_expand__V_15_15 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 254 "try_expand.m"
    {
#line 254 "try_expand.m"
      check_hlds__try_expand__succeeded = mercury__set__contains_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, check_hlds__try_expand__ImportedModules_7, ((MR_Box) (check_hlds__try_expand__V_15_15)));
    }
#line 268 "try_expand.m"
    if (check_hlds__try_expand__succeeded)
#line 256 "try_expand.m"
      {
#line 256 "try_expand.m"
        MR_Word check_hlds__try_expand__OptionsToRestore_9;
#line 256 "try_expand.m"
        MR_Word check_hlds__try_expand__PredIds_10;
#line 256 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Globals_16_16;
#line 256 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Globals_17_17;
#line 256 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_18_18;
#line 256 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_20_20;
#line 256 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Globals_22_22;
#line 256 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Globals_23_23;
#line 261 "try_expand.m"
        MR_Box check_hlds__try_expand__conv3_STATE_VARIABLE_ModuleInfo_20_20;
#line 261 "try_expand.m"
        MR_Box check_hlds__try_expand__conv2_STATE_VARIABLE_Specs_14;

#line 256 "try_expand.m"
        {
#line 256 "try_expand.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11, &check_hlds__try_expand__STATE_VARIABLE_Globals_16_16);
        }
#line 257 "try_expand.m"
        {
#line 257 "try_expand.m"
          check_hlds__det_report__disable_det_warnings_3_p_0(&check_hlds__try_expand__OptionsToRestore_9, check_hlds__try_expand__STATE_VARIABLE_Globals_16_16, &check_hlds__try_expand__STATE_VARIABLE_Globals_17_17);
        }
#line 258 "try_expand.m"
        {
#line 258 "try_expand.m"
          hlds__hlds_module__module_info_set_globals_3_p_0(check_hlds__try_expand__STATE_VARIABLE_Globals_17_17, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11, &check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_18_18);
        }
#line 260 "try_expand.m"
        {
#line 260 "try_expand.m"
          hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_18_18, &check_hlds__try_expand__PredIds_10);
        }
#line 261 "try_expand.m"
        {
#line 261 "try_expand.m"
          mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &check_hlds__try_expand_scalar_common_1[0], (MR_Word) &check_hlds__try_expand_scalar_common_3[0], check_hlds__try_expand__PredIds_10, ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_18_18)), &check_hlds__try_expand__conv3_STATE_VARIABLE_ModuleInfo_20_20, ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_Specs_0_13)), &check_hlds__try_expand__conv2_STATE_VARIABLE_Specs_14);
        }
#line 261 "try_expand.m"
        check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_20_20 = ((MR_Word) check_hlds__try_expand__conv3_STATE_VARIABLE_ModuleInfo_20_20);
#line 261 "try_expand.m"
        *check_hlds__try_expand__STATE_VARIABLE_Specs_14 = ((MR_Word) check_hlds__try_expand__conv2_STATE_VARIABLE_Specs_14);
#line 264 "try_expand.m"
        {
#line 264 "try_expand.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_20_20, &check_hlds__try_expand__STATE_VARIABLE_Globals_22_22);
        }
#line 265 "try_expand.m"
        {
#line 265 "try_expand.m"
          check_hlds__det_report__restore_det_warnings_3_p_0(check_hlds__try_expand__OptionsToRestore_9, check_hlds__try_expand__STATE_VARIABLE_Globals_22_22, &check_hlds__try_expand__STATE_VARIABLE_Globals_23_23);
        }
#line 266 "try_expand.m"
        {
#line 266 "try_expand.m"
          hlds__hlds_module__module_info_set_globals_3_p_0(check_hlds__try_expand__STATE_VARIABLE_Globals_23_23, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_20_20, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_12);
#line 266 "try_expand.m"
          return;
        }
#line 256 "try_expand.m"
      }
#line 268 "try_expand.m"
    else
#line 269 "try_expand.m"
      {
#line 269 "try_expand.m"
        *check_hlds__try_expand__STATE_VARIABLE_Specs_14 = check_hlds__try_expand__STATE_VARIABLE_Specs_0_13;
#line 269 "try_expand.m"
        *check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_12 = check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11;
#line 269 "try_expand.m"
      }
#line 249 "try_expand.m"
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
