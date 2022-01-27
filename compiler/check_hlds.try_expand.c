/*
** Automatically generated from `try_expand.m'
** by the Mercury compiler,
** version rotd-2013-10-01, configured for x86_64-apple-darwin12.4.0.
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



#line 920 "try_expand.m"
struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s {
#line 920 "try_expand.m"
  MR_Word check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7;
#line 936 "try_expand.m"
  MR_bool check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded;
#line 927 "try_expand.m"
  jmp_buf check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__commit_0;
#line 927 "try_expand.m"
  MR_Word check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9;
#line 927 "try_expand.m"
  MR_Box check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__conv0_ArgInst_9;
#line 920 "try_expand.m"
};


#line 153 "check_hlds.try_expand.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__try_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 156 "check_hlds.try_expand.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__try_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 159 "check_hlds.try_expand.c"
static const MR_PseudoTypeInfo check_hlds__try_expand__check_hlds__try_expand__field_types_trys_info_0_0[4];

#line 162 "check_hlds.try_expand.c"
static const MR_ConstString check_hlds__try_expand__check_hlds__try_expand__field_names_trys_info_0_0[4];

#line 165 "check_hlds.try_expand.c"
static const MR_DuFunctorDesc check_hlds__try_expand__check_hlds__try_expand__du_functor_desc_trys_info_0_0;

#line 168 "check_hlds.try_expand.c"
static const MR_DuFunctorDescPtr check_hlds__try_expand__check_hlds__try_expand__du_stag_ordered_trys_info_0_0[1];

#line 171 "check_hlds.try_expand.c"
static const MR_DuPtagLayout check_hlds__try_expand__check_hlds__try_expand__du_ptag_ordered_trys_info_0[1];

#line 174 "check_hlds.try_expand.c"
static const MR_DuFunctorDescPtr check_hlds__try_expand__check_hlds__try_expand__du_name_ordered_trys_info_0[1];

#line 177 "check_hlds.try_expand.c"
static const MR_Integer check_hlds__try_expand__check_hlds__try_expand__functor_number_map_trys_info_0[1];

#line 180 "check_hlds.try_expand.c"
static MR_bool MR_CALL 
check_hlds__try_expand____Unify____trys_info_0_0_10001(
#line 183 "check_hlds.try_expand.c"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 185 "check_hlds.try_expand.c"
  MR_Box check_hlds__try_expand__wrapper_arg_2);

#line 188 "check_hlds.try_expand.c"
static void MR_CALL 
check_hlds__try_expand____Compare____trys_info_0_0_10001(
#line 191 "check_hlds.try_expand.c"
  MR_Box * check_hlds__try_expand__wrapper_arg_1,
#line 193 "check_hlds.try_expand.c"
  MR_Box check_hlds__try_expand__wrapper_arg_2,
#line 195 "check_hlds.try_expand.c"
  MR_Box check_hlds__try_expand__wrapper_arg_3);

#line 336 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand____Compare____trys_info_0_0(
#line 336 "try_expand.m"
  MR_Word * check_hlds__try_expand__HeadVar__1_1,
#line 336 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2,
#line 336 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__3_3);

#line 336 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand____Unify____trys_info_0_0(
#line 336 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 336 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2);

#line 927 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_1(
#line 927 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg);

#line 927 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_3(
#line 927 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg);

#line 927 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_2(
#line 927 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg);

#line 927 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_4(
#line 927 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg);

#line 920 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0(
#line 920 "try_expand.m"
  MR_Word check_hlds__try_expand__TmpTupleVar_5,
#line 920 "try_expand.m"
  MR_Word check_hlds__try_expand__TupleVar_6,
#line 920 "try_expand.m"
  MR_Word check_hlds__try_expand__TupleArgInsts_7,
#line 920 "try_expand.m"
  MR_Word * check_hlds__try_expand__CastOrUnify_8);

#line 912 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_unreachable_call_2_p_0(
#line 912 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_3,
#line 912 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_4);

#line 873 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_try_call_14_p_0(
#line 873 "try_expand.m"
  MR_String check_hlds__try_expand__PredName_15,
#line 873 "try_expand.m"
  MR_Word check_hlds__try_expand__LambdaVar_16,
#line 873 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_17,
#line 873 "try_expand.m"
  MR_Word check_hlds__try_expand__ExtraArgs_18,
#line 873 "try_expand.m"
  MR_Word check_hlds__try_expand__OutputTupleType_19,
#line 873 "try_expand.m"
  MR_Word check_hlds__try_expand__GoalPurity_20,
#line 873 "try_expand.m"
  MR_Word check_hlds__try_expand__Context_21,
#line 873 "try_expand.m"
  MR_Word * check_hlds__try_expand__OverallGoal_22,
#line 873 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_37,
#line 873 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_PredInfo_38,
#line 873 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_39,
#line 873 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_40,
#line 873 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_41,
#line 873 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_42);

#line 802 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_try_lambda_8_p_0(
#line 802 "try_expand.m"
  MR_Word check_hlds__try_expand__Body0_9,
#line 802 "try_expand.m"
  MR_Word check_hlds__try_expand__OutputVarsSet_10,
#line 802 "try_expand.m"
  MR_Word check_hlds__try_expand__OutputTupleType_11,
#line 802 "try_expand.m"
  MR_Word check_hlds__try_expand__MaybeIO_12,
#line 802 "try_expand.m"
  MR_Word * check_hlds__try_expand__LambdaVar_13,
#line 802 "try_expand.m"
  MR_Word * check_hlds__try_expand__AssignLambdaVar_14,
#line 802 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_41,
#line 802 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_42);

#line 780 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__lookup_case_goal_3_p_0(
#line 780 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 780 "try_expand.m"
  MR_Word check_hlds__try_expand__ConsId_2,
#line 780 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_3);

#line 712 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand__extract_from_succeeded_goal_5_p_0(
#line 712 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_6,
#line 712 "try_expand.m"
  MR_Word check_hlds__try_expand__SucceededGoal_7,
#line 712 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_8,
#line 712 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_9,
#line 712 "try_expand.m"
  MR_Word * check_hlds__try_expand__MaybeElse_10);

#line 672 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand__extract_intermediate_goal_parts_2_7_p_0(
#line 672 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_8,
#line 672 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_9,
#line 672 "try_expand.m"
  MR_Word check_hlds__try_expand__IntermediateGoal_10,
#line 672 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_11,
#line 672 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_12,
#line 672 "try_expand.m"
  MR_Word * check_hlds__try_expand__MaybeElse_13,
#line 672 "try_expand.m"
  MR_Word * check_hlds__try_expand__ExcpHandling_14);

#line 639 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__extract_intermediate_goal_parts_7_p_0(
#line 639 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_8,
#line 639 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_9,
#line 639 "try_expand.m"
  MR_Word check_hlds__try_expand__IntermediateGoal_10,
#line 639 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_11,
#line 639 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_12,
#line 639 "try_expand.m"
  MR_Word * check_hlds__try_expand__MaybeElse_13,
#line 639 "try_expand.m"
  MR_Word * check_hlds__try_expand__ExcpHandling_14);

#line 524 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goal_2_15_p_0(
#line 524 "try_expand.m"
  MR_Word check_hlds__try_expand__MaybeIO_16,
#line 524 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_17,
#line 524 "try_expand.m"
  MR_Word check_hlds__try_expand__Goal1_18,
#line 524 "try_expand.m"
  MR_Word check_hlds__try_expand__Then1_19,
#line 524 "try_expand.m"
  MR_Word check_hlds__try_expand__MaybeElse1_20,
#line 524 "try_expand.m"
  MR_Word check_hlds__try_expand__ExcpHandling1_21,
#line 524 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap_22,
#line 524 "try_expand.m"
  MR_Word check_hlds__try_expand__GoalOutputVarsSet_23,
#line 524 "try_expand.m"
  MR_Word * check_hlds__try_expand__FinalGoal_24,
#line 524 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_62,
#line 524 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_PredInfo_63,
#line 524 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_64,
#line 524 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_65,
#line 524 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_66,
#line 524 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_67);

#line 798 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand__expand_try_goal_5_p_0_1(
#line 798 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 798 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1);

#line 481 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goal_5_p_0(
#line 481 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap_6,
#line 481 "try_expand.m"
  MR_Word check_hlds__try_expand__TryGoal_7,
#line 481 "try_expand.m"
  MR_Word * check_hlds__try_expand__FinalGoal_8,
#line 481 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_33,
#line 481 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_34);

#line 460 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_if_then_else_9_p_0(
#line 460 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap0_10,
#line 460 "try_expand.m"
  MR_Word check_hlds__try_expand__Cond0_11,
#line 460 "try_expand.m"
  MR_Word * check_hlds__try_expand__Cond_12,
#line 460 "try_expand.m"
  MR_Word check_hlds__try_expand__Then0_13,
#line 460 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_14,
#line 460 "try_expand.m"
  MR_Word check_hlds__try_expand__Else0_15,
#line 460 "try_expand.m"
  MR_Word * check_hlds__try_expand__Else_16,
#line 460 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_22,
#line 460 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_23);

#line 450 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_cases_5_p_0(
#line 450 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 450 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2,
#line 450 "try_expand.m"
  MR_Word * check_hlds__try_expand__HeadVar__3_3,
#line 450 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_4,
#line 450 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_5);

#line 448 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_disj_5_p_0_1(
#line 448 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 448 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 448 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_2,
#line 448 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_3,
#line 448 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_4);

#line 443 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_disj_5_p_0(
#line 443 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap0_6,
#line 443 "try_expand.m"
  MR_Word check_hlds__try_expand__Goals0_7,
#line 443 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goals_8,
#line 443 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_10,
#line 443 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_11);

#line 431 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_conj_5_p_0(
#line 431 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 431 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2,
#line 431 "try_expand.m"
  MR_Word * check_hlds__try_expand__HeadVar__3_3,
#line 431 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_4,
#line 431 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_5);

#line 344 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(
#line 344 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap_6,
#line 344 "try_expand.m"
  MR_Word check_hlds__try_expand__Goal0_7,
#line 344 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_8,
#line 344 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_92,
#line 344 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_93);

#line 279 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_proc_6_p_0(
#line 279 "try_expand.m"
  MR_Word check_hlds__try_expand__PredId_7,
#line 279 "try_expand.m"
  MR_Integer check_hlds__try_expand__ProcId_8,
#line 279 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_19,
#line 279 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_20,
#line 279 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Specs_0_21,
#line 279 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Specs_22);

#line 276 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_pred_5_p_0_1(
#line 276 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 276 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 276 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_2,
#line 276 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_3,
#line 276 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_4,
#line 276 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_5);

#line 269 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_pred_5_p_0(
#line 269 "try_expand.m"
  MR_Word check_hlds__try_expand__PredId_6,
#line 269 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11,
#line 269 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_12,
#line 269 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Specs_0_13,
#line 269 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Specs_14);

#line 258 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_module_4_p_0_1(
#line 258 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 258 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 258 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_2,
#line 258 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_3,
#line 258 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_4,
#line 258 "try_expand.m"
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



#line 717 "check_hlds.try_expand.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__try_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 725 "check_hlds.try_expand.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__try_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 733 "check_hlds.try_expand.c"
static const MR_PseudoTypeInfo check_hlds__try_expand__check_hlds__try_expand__field_types_trys_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 741 "check_hlds.try_expand.c"
static const MR_ConstString check_hlds__try_expand__check_hlds__try_expand__field_names_trys_info_0_0[4] = {
  (MR_String) "ti_module_info",
  (MR_String) "ti_pred_info",
  (MR_String) "ti_proc_info",
  (MR_String) "ti_changed"
};

#line 749 "check_hlds.try_expand.c"
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

#line 764 "check_hlds.try_expand.c"
static const MR_DuFunctorDescPtr check_hlds__try_expand__check_hlds__try_expand__du_stag_ordered_trys_info_0_0[1] = {
  &check_hlds__try_expand__check_hlds__try_expand__du_functor_desc_trys_info_0_0
};

#line 769 "check_hlds.try_expand.c"
static const MR_DuPtagLayout check_hlds__try_expand__check_hlds__try_expand__du_ptag_ordered_trys_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__try_expand__check_hlds__try_expand__du_stag_ordered_trys_info_0_0
  }
};

#line 778 "check_hlds.try_expand.c"
static const MR_DuFunctorDescPtr check_hlds__try_expand__check_hlds__try_expand__du_name_ordered_trys_info_0[1] = {
  &check_hlds__try_expand__check_hlds__try_expand__du_functor_desc_trys_info_0_0
};

#line 783 "check_hlds.try_expand.c"
static const MR_Integer check_hlds__try_expand__check_hlds__try_expand__functor_number_map_trys_info_0[1] = {
  (MR_Integer) 0
};

#line 788 "check_hlds.try_expand.c"
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

#line 809 "check_hlds.try_expand.c"
static MR_bool MR_CALL 
check_hlds__try_expand____Unify____trys_info_0_0_10001(
#line 812 "check_hlds.try_expand.c"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 814 "check_hlds.try_expand.c"
  MR_Box check_hlds__try_expand__wrapper_arg_2)
#line 816 "check_hlds.try_expand.c"
{
#line 818 "check_hlds.try_expand.c"
  {
#line 820 "check_hlds.try_expand.c"
    MR_bool check_hlds__try_expand__succeeded;

#line 823 "check_hlds.try_expand.c"
    {
#line 825 "check_hlds.try_expand.c"
      check_hlds__try_expand__succeeded = check_hlds__try_expand____Unify____trys_info_0_0(((MR_Word) check_hlds__try_expand__wrapper_arg_1), ((MR_Word) check_hlds__try_expand__wrapper_arg_2));
    }
#line 828 "check_hlds.try_expand.c"
    return check_hlds__try_expand__succeeded;
#line 830 "check_hlds.try_expand.c"
  }
#line 832 "check_hlds.try_expand.c"
}

#line 835 "check_hlds.try_expand.c"
static void MR_CALL 
check_hlds__try_expand____Compare____trys_info_0_0_10001(
#line 838 "check_hlds.try_expand.c"
  MR_Box * check_hlds__try_expand__wrapper_arg_1,
#line 840 "check_hlds.try_expand.c"
  MR_Box check_hlds__try_expand__wrapper_arg_2,
#line 842 "check_hlds.try_expand.c"
  MR_Box check_hlds__try_expand__wrapper_arg_3)
#line 844 "check_hlds.try_expand.c"
{
#line 846 "check_hlds.try_expand.c"
  {
#line 848 "check_hlds.try_expand.c"
    MR_Word check_hlds__try_expand__conv0_HeadVar__1_1;

#line 851 "check_hlds.try_expand.c"
    {
#line 853 "check_hlds.try_expand.c"
      check_hlds__try_expand____Compare____trys_info_0_0(&check_hlds__try_expand__conv0_HeadVar__1_1, ((MR_Word) check_hlds__try_expand__wrapper_arg_2), ((MR_Word) check_hlds__try_expand__wrapper_arg_3));
    }
#line 856 "check_hlds.try_expand.c"
    *check_hlds__try_expand__wrapper_arg_1 = ((MR_Box) (check_hlds__try_expand__conv0_HeadVar__1_1));
#line 858 "check_hlds.try_expand.c"
  }
#line 860 "check_hlds.try_expand.c"
}

#line 336 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand____Compare____trys_info_0_0(
#line 336 "try_expand.m"
  MR_Word * check_hlds__try_expand__HeadVar__1_1,
#line 336 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2,
#line 336 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__3_3)
#line 336 "try_expand.m"
{
#line 336 "try_expand.m"
  {
#line 336 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 336 "try_expand.m"
    MR_Integer check_hlds__try_expand__CastX_15 = (MR_Integer) check_hlds__try_expand__HeadVar__2_2;
#line 336 "try_expand.m"
    MR_Integer check_hlds__try_expand__CastY_16 = (MR_Integer) check_hlds__try_expand__HeadVar__3_3;

#line 336 "try_expand.m"
    check_hlds__try_expand__succeeded = (check_hlds__try_expand__CastX_15 == check_hlds__try_expand__CastY_16);
#line 336 "try_expand.m"
    if (check_hlds__try_expand__succeeded)
#line 887 "check_hlds.try_expand.c"
      *check_hlds__try_expand__HeadVar__1_1 = (MR_Integer) 0;
#line 336 "try_expand.m"
    else
#line 336 "try_expand.m"
      {
#line 336 "try_expand.m"
        MR_Word check_hlds__try_expand__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 336 "try_expand.m"
        MR_Word check_hlds__try_expand__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 336 "try_expand.m"
        MR_Word check_hlds__try_expand__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 2)));
#line 336 "try_expand.m"
        MR_Word check_hlds__try_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 3)));
#line 336 "try_expand.m"
        MR_Word check_hlds__try_expand__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__3_3, (MR_Integer) 0)));
#line 336 "try_expand.m"
        MR_Word check_hlds__try_expand__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__3_3, (MR_Integer) 1)));
#line 336 "try_expand.m"
        MR_Word check_hlds__try_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__3_3, (MR_Integer) 2)));
#line 336 "try_expand.m"
        MR_Word check_hlds__try_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__3_3, (MR_Integer) 3)));
#line 336 "try_expand.m"
        MR_Word check_hlds__try_expand__V_12_12;

#line 336 "try_expand.m"
        {
#line 336 "try_expand.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__try_expand__V_12_12, check_hlds__try_expand__V_4_4, check_hlds__try_expand__V_8_8);
        }
#line 917 "check_hlds.try_expand.c"
        check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_12_12 == (MR_Integer) 0);
#line 336 "try_expand.m"
        check_hlds__try_expand__succeeded = !(check_hlds__try_expand__succeeded);
#line 336 "try_expand.m"
        if (check_hlds__try_expand__succeeded)
#line 336 "try_expand.m"
          *check_hlds__try_expand__HeadVar__1_1 = check_hlds__try_expand__V_12_12;
#line 336 "try_expand.m"
        else
#line 336 "try_expand.m"
          {
#line 336 "try_expand.m"
            MR_Word check_hlds__try_expand__V_13_13;

#line 336 "try_expand.m"
            {
#line 336 "try_expand.m"
              hlds__hlds_pred____Compare____pred_info_0_0(&check_hlds__try_expand__V_13_13, check_hlds__try_expand__V_5_5, check_hlds__try_expand__V_9_9);
            }
#line 937 "check_hlds.try_expand.c"
            check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_13_13 == (MR_Integer) 0);
#line 336 "try_expand.m"
            check_hlds__try_expand__succeeded = !(check_hlds__try_expand__succeeded);
#line 336 "try_expand.m"
            if (check_hlds__try_expand__succeeded)
#line 336 "try_expand.m"
              *check_hlds__try_expand__HeadVar__1_1 = check_hlds__try_expand__V_13_13;
#line 336 "try_expand.m"
            else
#line 336 "try_expand.m"
              {
#line 336 "try_expand.m"
                MR_Word check_hlds__try_expand__V_14_14;

#line 336 "try_expand.m"
                {
#line 336 "try_expand.m"
                  hlds__hlds_pred____Compare____proc_info_0_0(&check_hlds__try_expand__V_14_14, check_hlds__try_expand__V_6_6, check_hlds__try_expand__V_10_10);
                }
#line 957 "check_hlds.try_expand.c"
                check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_14_14 == (MR_Integer) 0);
#line 336 "try_expand.m"
                check_hlds__try_expand__succeeded = !(check_hlds__try_expand__succeeded);
#line 336 "try_expand.m"
                if (check_hlds__try_expand__succeeded)
#line 336 "try_expand.m"
                  *check_hlds__try_expand__HeadVar__1_1 = check_hlds__try_expand__V_14_14;
#line 336 "try_expand.m"
                else
#line 336 "try_expand.m"
                  {
#line 336 "try_expand.m"
                    MR_Integer check_hlds__try_expand__V_21_21 = (MR_Integer) check_hlds__try_expand__V_7_7;
#line 336 "try_expand.m"
                    MR_Integer check_hlds__try_expand__V_22_22 = (MR_Integer) check_hlds__try_expand__V_11_11;

#line 336 "try_expand.m"
                    {
#line 336 "try_expand.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__try_expand__HeadVar__1_1, check_hlds__try_expand__V_21_21, check_hlds__try_expand__V_22_22);
#line 336 "try_expand.m"
                      return;
                    }
#line 336 "try_expand.m"
                  }
#line 336 "try_expand.m"
              }
#line 336 "try_expand.m"
          }
#line 336 "try_expand.m"
      }
#line 336 "try_expand.m"
  }
#line 336 "try_expand.m"
}

#line 336 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand____Unify____trys_info_0_0(
#line 336 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 336 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2)
#line 336 "try_expand.m"
{
#line 336 "try_expand.m"
  {
#line 336 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 336 "try_expand.m"
    MR_Integer check_hlds__try_expand__CastX_11 = (MR_Integer) check_hlds__try_expand__HeadVar__1_1;
#line 336 "try_expand.m"
    MR_Integer check_hlds__try_expand__CastY_12 = (MR_Integer) check_hlds__try_expand__HeadVar__2_2;

#line 336 "try_expand.m"
    check_hlds__try_expand__succeeded = (check_hlds__try_expand__CastX_11 == check_hlds__try_expand__CastY_12);
#line 336 "try_expand.m"
    if (check_hlds__try_expand__succeeded)
#line 336 "try_expand.m"
      check_hlds__try_expand__succeeded = MR_TRUE;
#line 336 "try_expand.m"
    else
#line 336 "try_expand.m"
      {
#line 336 "try_expand.m"
        MR_Word check_hlds__try_expand__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 0)));
#line 336 "try_expand.m"
        MR_Word check_hlds__try_expand__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 1)));
#line 336 "try_expand.m"
        MR_Word check_hlds__try_expand__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 2)));
#line 336 "try_expand.m"
        MR_Word check_hlds__try_expand__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 3)));
#line 336 "try_expand.m"
        MR_Word check_hlds__try_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 336 "try_expand.m"
        MR_Word check_hlds__try_expand__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 336 "try_expand.m"
        MR_Word check_hlds__try_expand__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 2)));
#line 336 "try_expand.m"
        MR_Word check_hlds__try_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 3)));

#line 1039 "check_hlds.try_expand.c"
        {
#line 1041 "check_hlds.try_expand.c"
          check_hlds__try_expand__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__try_expand__V_3_3, check_hlds__try_expand__V_7_7);
        }
#line 336 "try_expand.m"
        if (check_hlds__try_expand__succeeded)
#line 336 "try_expand.m"
          {
#line 1048 "check_hlds.try_expand.c"
            {
#line 1050 "check_hlds.try_expand.c"
              check_hlds__try_expand__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(check_hlds__try_expand__V_4_4, check_hlds__try_expand__V_8_8);
            }
#line 336 "try_expand.m"
            if (check_hlds__try_expand__succeeded)
#line 336 "try_expand.m"
              {
#line 1057 "check_hlds.try_expand.c"
                {
#line 1059 "check_hlds.try_expand.c"
                  check_hlds__try_expand__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(check_hlds__try_expand__V_5_5, check_hlds__try_expand__V_9_9);
                }
#line 336 "try_expand.m"
                if (check_hlds__try_expand__succeeded)
#line 1064 "check_hlds.try_expand.c"
                  check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_6_6 == check_hlds__try_expand__V_10_10);
#line 336 "try_expand.m"
              }
#line 336 "try_expand.m"
          }
#line 336 "try_expand.m"
      }
#line 336 "try_expand.m"
    return check_hlds__try_expand__succeeded;
#line 336 "try_expand.m"
  }
#line 336 "try_expand.m"
}

#line 927 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_1(
#line 927 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg)
#line 927 "try_expand.m"
{
#line 927 "try_expand.m"
  {
#line 927 "try_expand.m"
    struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s * check_hlds__try_expand__env_ptr = (struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s *) check_hlds__try_expand__env_ptr_arg;

#line 927 "try_expand.m"
    MR_builtin_longjmp((check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__commit_0, 1);
#line 927 "try_expand.m"
  }
#line 927 "try_expand.m"
}

#line 927 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_3(
#line 927 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg)
#line 927 "try_expand.m"
{
#line 927 "try_expand.m"
  {
#line 927 "try_expand.m"
    struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s * check_hlds__try_expand__env_ptr = (struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s *) check_hlds__try_expand__env_ptr_arg;

#line 927 "try_expand.m"
    (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9 = ((MR_Word) (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__conv0_ArgInst_9);
#line 927 "try_expand.m"
    {
#line 927 "try_expand.m"
      check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_2(check_hlds__try_expand__env_ptr);
#line 927 "try_expand.m"
      return;
    }
#line 927 "try_expand.m"
  }
#line 927 "try_expand.m"
}

#line 927 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_2(
#line 927 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg)
#line 927 "try_expand.m"
{
#line 927 "try_expand.m"
  {
#line 927 "try_expand.m"
    struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s * check_hlds__try_expand__env_ptr = (struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s *) check_hlds__try_expand__env_ptr_arg;

#line 927 "try_expand.m"
    {
#line 928 "try_expand.m"
      MR_Word check_hlds__try_expand__V_13_13;
#line 928 "try_expand.m"
      MR_Word check_hlds__try_expand__V_10_10;

#line 928 "try_expand.m"
      (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 928 "try_expand.m"
      if ((check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded)
#line 928 "try_expand.m"
        {
#line 928 "try_expand.m"
          {
#line 928 "try_expand.m"
            check_hlds__try_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9, (MR_Integer) 1)));
#line 928 "try_expand.m"
            check_hlds__try_expand__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9, (MR_Integer) 2)));
#line 928 "try_expand.m"
          }
#line 928 "try_expand.m"
          (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = (check_hlds__try_expand__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 928 "try_expand.m"
        }
#line 928 "try_expand.m"
      (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = !((check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded);
#line 928 "try_expand.m"
      if ((check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded)
#line 928 "try_expand.m"
        {
#line 928 "try_expand.m"
          check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_1(check_hlds__try_expand__env_ptr);
#line 928 "try_expand.m"
          return;
        }
#line 927 "try_expand.m"
    }
#line 927 "try_expand.m"
  }
#line 927 "try_expand.m"
}

#line 927 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_4(
#line 927 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg)
#line 927 "try_expand.m"
{
#line 927 "try_expand.m"
  {
#line 927 "try_expand.m"
    struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s * check_hlds__try_expand__env_ptr = (struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s *) check_hlds__try_expand__env_ptr_arg;

#line 927 "try_expand.m"
    if (MR_builtin_setjmp((check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__commit_0) == 0)
#line 927 "try_expand.m"
      {
#line 927 "try_expand.m"
        {
#line 927 "try_expand.m"
          {
#line 927 "try_expand.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__conv0_ArgInst_9, (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7, check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_3, check_hlds__try_expand__env_ptr);
          }
#line 927 "try_expand.m"
        }
#line 927 "try_expand.m"
        (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = MR_FALSE;
#line 927 "try_expand.m"
      }
#line 927 "try_expand.m"
    else
#line 927 "try_expand.m"
      (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = MR_TRUE;
#line 927 "try_expand.m"
  }
#line 927 "try_expand.m"
}

#line 920 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0(
#line 920 "try_expand.m"
  MR_Word check_hlds__try_expand__TmpTupleVar_5,
#line 920 "try_expand.m"
  MR_Word check_hlds__try_expand__TupleVar_6,
#line 920 "try_expand.m"
  MR_Word check_hlds__try_expand__TupleArgInsts_7,
#line 920 "try_expand.m"
  MR_Word * check_hlds__try_expand__CastOrUnify_8)
#line 920 "try_expand.m"
{
#line 920 "try_expand.m"
  {
#line 920 "try_expand.m"
    struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s check_hlds__try_expand__env;

#line 920 "try_expand.m"
    (check_hlds__try_expand__env).check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7 = check_hlds__try_expand__TupleArgInsts_7;
#line 927 "try_expand.m"
    {
#line 927 "try_expand.m"
      check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_4(&check_hlds__try_expand__env);
    }
#line 936 "try_expand.m"
    if ((check_hlds__try_expand__env).check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded)
#line 930 "try_expand.m"
      {
#line 930 "try_expand.m"
        MR_Integer check_hlds__try_expand__TupleArity_11;
#line 930 "try_expand.m"
        MR_Word check_hlds__try_expand__TupleInst_12;
#line 930 "try_expand.m"
        MR_Word check_hlds__try_expand__V_16_16;
#line 930 "try_expand.m"
        MR_Word check_hlds__try_expand__V_17_17;
#line 930 "try_expand.m"
        MR_Word check_hlds__try_expand__V_18_18;
#line 930 "try_expand.m"
        MR_Word check_hlds__try_expand__V_21_21;
#line 930 "try_expand.m"
        MR_Word check_hlds__try_expand__V_22_22;

#line 930 "try_expand.m"
        {
#line 930 "try_expand.m"
          check_hlds__try_expand__TupleArity_11 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (check_hlds__try_expand__env).check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7);
        }
#line 932 "try_expand.m"
        {
#line 932 "try_expand.m"
          check_hlds__try_expand__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 932 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 932 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_18_18, 1) = ((MR_Box) (check_hlds__try_expand__TupleArity_11));
#line 932 "try_expand.m"
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
#line 931 "try_expand.m"
        {
#line 931 "try_expand.m"
          check_hlds__try_expand__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 931 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_16_16, 0) = ((MR_Box) (check_hlds__try_expand__V_17_17));
#line 931 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 931 "try_expand.m"
        }
#line 931 "try_expand.m"
        {
#line 931 "try_expand.m"
          check_hlds__try_expand__TupleInst_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 931 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__TupleInst_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 931 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__TupleInst_12, 1) = ((MR_Box) ((MR_Integer) 0));
#line 931 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__TupleInst_12, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 931 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__TupleInst_12, 3) = ((MR_Box) (check_hlds__try_expand__V_16_16));
#line 931 "try_expand.m"
        }
#line 934 "try_expand.m"
        {
#line 934 "try_expand.m"
          check_hlds__try_expand__V_21_21 = parse_tree__prog_mode__ground_inst_0_f_0();
        }
#line 934 "try_expand.m"
        {
#line 934 "try_expand.m"
          check_hlds__try_expand__V_22_22 = mercury__term__context_init_0_f_0();
        }
#line 934 "try_expand.m"
        {
#line 934 "try_expand.m"
          hlds__goal_util__generate_cast_with_insts_7_p_0((MR_Integer) 1, check_hlds__try_expand__TmpTupleVar_5, check_hlds__try_expand__TupleVar_6, check_hlds__try_expand__V_21_21, check_hlds__try_expand__TupleInst_12, check_hlds__try_expand__V_22_22, check_hlds__try_expand__CastOrUnify_8);
#line 934 "try_expand.m"
          return;
        }
#line 930 "try_expand.m"
      }
#line 936 "try_expand.m"
    else
#line 937 "try_expand.m"
      {
#line 937 "try_expand.m"
        MR_Word check_hlds__try_expand__V_23_23;
#line 937 "try_expand.m"
        MR_Word check_hlds__try_expand__V_24_24;

#line 937 "try_expand.m"
        {
#line 937 "try_expand.m"
          check_hlds__try_expand__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 937 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_23_23, 0) = ((MR_Box) (check_hlds__try_expand__TmpTupleVar_5));
#line 937 "try_expand.m"
        }
#line 937 "try_expand.m"
        {
#line 937 "try_expand.m"
          check_hlds__try_expand__V_24_24 = mercury__term__context_init_0_f_0();
        }
#line 937 "try_expand.m"
        {
#line 937 "try_expand.m"
          hlds__hlds_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__try_expand__TupleVar_6, check_hlds__try_expand__V_23_23, check_hlds__try_expand__V_24_24, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__try_expand_scalar_common_6[1]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__CastOrUnify_8);
#line 937 "try_expand.m"
          return;
        }
#line 937 "try_expand.m"
      }
#line 920 "try_expand.m"
  }
#line 920 "try_expand.m"
}

#line 912 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_unreachable_call_2_p_0(
#line 912 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_3,
#line 912 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_4)
#line 912 "try_expand.m"
{
#line 914 "try_expand.m"
  {
#line 914 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 914 "try_expand.m"
    MR_Word check_hlds__try_expand__V_5_5;
#line 914 "try_expand.m"
    MR_Word check_hlds__try_expand__V_13_13;
#line 914 "try_expand.m"
    MR_Word check_hlds__try_expand__V_14_14;

#line 915 "try_expand.m"
    {
#line 915 "try_expand.m"
      check_hlds__try_expand__V_5_5 = mdbcomp__prim_data__mercury_exception_module_0_f_0();
    }
#line 915 "try_expand.m"
    {
#line 915 "try_expand.m"
      check_hlds__try_expand__V_13_13 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 915 "try_expand.m"
    {
#line 915 "try_expand.m"
      check_hlds__try_expand__V_14_14 = mercury__term__context_init_0_f_0();
    }
#line 915 "try_expand.m"
    {
#line 915 "try_expand.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__try_expand__V_5_5, (MR_String) "unreachable", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__V_13_13, check_hlds__try_expand__ModuleInfo_3, check_hlds__try_expand__V_14_14, check_hlds__try_expand__Goal_4);
#line 915 "try_expand.m"
      return;
    }
#line 914 "try_expand.m"
  }
#line 912 "try_expand.m"
}

#line 873 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_try_call_14_p_0(
#line 873 "try_expand.m"
  MR_String check_hlds__try_expand__PredName_15,
#line 873 "try_expand.m"
  MR_Word check_hlds__try_expand__LambdaVar_16,
#line 873 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_17,
#line 873 "try_expand.m"
  MR_Word check_hlds__try_expand__ExtraArgs_18,
#line 873 "try_expand.m"
  MR_Word check_hlds__try_expand__OutputTupleType_19,
#line 873 "try_expand.m"
  MR_Word check_hlds__try_expand__GoalPurity_20,
#line 873 "try_expand.m"
  MR_Word check_hlds__try_expand__Context_21,
#line 873 "try_expand.m"
  MR_Word * check_hlds__try_expand__OverallGoal_22,
#line 873 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_37,
#line 873 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_PredInfo_38,
#line 873 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_39,
#line 873 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_40,
#line 873 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_41,
#line 873 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_42)
#line 873 "try_expand.m"
{
#line 880 "try_expand.m"
  {
#line 880 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 880 "try_expand.m"
    MR_Word check_hlds__try_expand__PolyInfo0_26;
#line 880 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeInfoVar_27;
#line 880 "try_expand.m"
    MR_Word check_hlds__try_expand__MakeTypeInfoGoals_28;
#line 880 "try_expand.m"
    MR_Word check_hlds__try_expand__PolyInfo_29;
#line 880 "try_expand.m"
    MR_Word check_hlds__try_expand__Args_31;
#line 880 "try_expand.m"
    MR_Word check_hlds__try_expand__CallGoal0_33;
#line 880 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalInfo_34;
#line 880 "try_expand.m"
    MR_Word check_hlds__try_expand__CallGoal_35;
#line 880 "try_expand.m"
    MR_Word check_hlds__try_expand__V_47_47;
#line 880 "try_expand.m"
    MR_Word check_hlds__try_expand__V_48_48;
#line 880 "try_expand.m"
    MR_Word check_hlds__try_expand__V_49_49;
#line 880 "try_expand.m"
    MR_Word check_hlds__try_expand__V_51_51;
#line 880 "try_expand.m"
    MR_Word check_hlds__try_expand__V_55_55;
#line 880 "try_expand.m"
    MR_Word check_hlds__try_expand__V_57_57;
#line 880 "try_expand.m"
    MR_Word check_hlds__try_expand__V_58_58;

#line 881 "try_expand.m"
    {
#line 881 "try_expand.m"
      check_hlds__polymorphism__create_poly_info_4_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_41, check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_37, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_39, &check_hlds__try_expand__PolyInfo0_26);
    }
#line 882 "try_expand.m"
    {
#line 882 "try_expand.m"
      check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(check_hlds__try_expand__OutputTupleType_19, check_hlds__try_expand__Context_21, &check_hlds__try_expand__TypeInfoVar_27, &check_hlds__try_expand__MakeTypeInfoGoals_28, check_hlds__try_expand__PolyInfo0_26, &check_hlds__try_expand__PolyInfo_29);
    }
#line 884 "try_expand.m"
    {
#line 884 "try_expand.m"
      check_hlds__polymorphism__poly_info_extract_6_p_0(check_hlds__try_expand__PolyInfo_29, check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_37, check_hlds__try_expand__STATE_VARIABLE_PredInfo_38, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_39, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_40, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_42);
    }
#line 888 "try_expand.m"
    {
#line 888 "try_expand.m"
      check_hlds__try_expand__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 888 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_49_49, 0) = ((MR_Box) (check_hlds__try_expand__ResultVar_17));
#line 888 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 888 "try_expand.m"
    }
#line 888 "try_expand.m"
    {
#line 888 "try_expand.m"
      check_hlds__try_expand__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 888 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_48_48, 0) = ((MR_Box) (check_hlds__try_expand__LambdaVar_16));
#line 888 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_48_48, 1) = ((MR_Box) (check_hlds__try_expand__V_49_49));
#line 888 "try_expand.m"
    }
#line 888 "try_expand.m"
    {
#line 888 "try_expand.m"
      check_hlds__try_expand__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 888 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_47_47, 0) = ((MR_Box) (check_hlds__try_expand__TypeInfoVar_27));
#line 888 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_47_47, 1) = ((MR_Box) (check_hlds__try_expand__V_48_48));
#line 888 "try_expand.m"
    }
#line 888 "try_expand.m"
    {
#line 888 "try_expand.m"
      check_hlds__try_expand__Args_31 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__try_expand_scalar_common_1[1], check_hlds__try_expand__V_47_47, check_hlds__try_expand__ExtraArgs_18);
    }
#line 890 "try_expand.m"
    {
#line 890 "try_expand.m"
      check_hlds__try_expand__V_51_51 = mdbcomp__prim_data__mercury_exception_module_0_f_0();
    }
#line 890 "try_expand.m"
    {
#line 890 "try_expand.m"
      check_hlds__try_expand__V_55_55 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 890 "try_expand.m"
    {
#line 890 "try_expand.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__try_expand__V_51_51, check_hlds__try_expand__PredName_15, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[5]), (MR_Integer) 4, (MR_Integer) 0, check_hlds__try_expand__Args_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__V_55_55, *check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_42, check_hlds__try_expand__Context_21, &check_hlds__try_expand__CallGoal0_33);
    }
#line 894 "try_expand.m"
    {
#line 894 "try_expand.m"
      hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__try_expand__Context_21, &check_hlds__try_expand__GoalInfo_34);
    }
#line 902 "try_expand.m"
    if ((check_hlds__try_expand__GoalPurity_20 == (MR_Integer) 0))
#line 901 "try_expand.m"
      check_hlds__try_expand__CallGoal_35 = check_hlds__try_expand__CallGoal0_33;
#line 902 "try_expand.m"
    else
#line 905 "try_expand.m"
      {
#line 905 "try_expand.m"
        MR_Word check_hlds__try_expand__ScopeReason_36;
#line 905 "try_expand.m"
        MR_Word check_hlds__try_expand__V_56_56;

#line 906 "try_expand.m"
        {
#line 906 "try_expand.m"
          check_hlds__try_expand__ScopeReason_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 906 "try_expand.m"
          MR_hl_field(MR_mktag(2), check_hlds__try_expand__ScopeReason_36, 0) = ((MR_Box) (check_hlds__try_expand__GoalPurity_20));
#line 906 "try_expand.m"
        }
#line 907 "try_expand.m"
        {
#line 907 "try_expand.m"
          check_hlds__try_expand__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 907 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 907 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_56_56, 1) = ((MR_Box) (check_hlds__try_expand__ScopeReason_36));
#line 907 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_56_56, 2) = ((MR_Box) (check_hlds__try_expand__CallGoal0_33));
#line 907 "try_expand.m"
        }
#line 907 "try_expand.m"
        {
#line 907 "try_expand.m"
          check_hlds__try_expand__CallGoal_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 907 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__CallGoal_35, 0) = ((MR_Box) (check_hlds__try_expand__V_56_56));
#line 907 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__CallGoal_35, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo_34));
#line 907 "try_expand.m"
        }
#line 905 "try_expand.m"
      }
#line 910 "try_expand.m"
    {
#line 910 "try_expand.m"
      check_hlds__try_expand__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 910 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_58_58, 0) = ((MR_Box) (check_hlds__try_expand__CallGoal_35));
#line 910 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 910 "try_expand.m"
    }
#line 910 "try_expand.m"
    {
#line 910 "try_expand.m"
      check_hlds__try_expand__V_57_57 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__try_expand__MakeTypeInfoGoals_28, check_hlds__try_expand__V_58_58);
    }
#line 910 "try_expand.m"
    {
#line 910 "try_expand.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__try_expand__V_57_57, check_hlds__try_expand__GoalInfo_34, check_hlds__try_expand__OverallGoal_22);
#line 910 "try_expand.m"
      return;
    }
#line 880 "try_expand.m"
  }
#line 873 "try_expand.m"
}

#line 802 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_try_lambda_8_p_0(
#line 802 "try_expand.m"
  MR_Word check_hlds__try_expand__Body0_9,
#line 802 "try_expand.m"
  MR_Word check_hlds__try_expand__OutputVarsSet_10,
#line 802 "try_expand.m"
  MR_Word check_hlds__try_expand__OutputTupleType_11,
#line 802 "try_expand.m"
  MR_Word check_hlds__try_expand__MaybeIO_12,
#line 802 "try_expand.m"
  MR_Word * check_hlds__try_expand__LambdaVar_13,
#line 802 "try_expand.m"
  MR_Word * check_hlds__try_expand__AssignLambdaVar_14,
#line 802 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_41,
#line 802 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_42)
#line 802 "try_expand.m"
{
#line 807 "try_expand.m"
  {
#line 807 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeCtorInfo_87_87;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeInfo_88_88;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__BodyInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Body0_9, (MR_Integer) 1)));
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__NonLocals0_18;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__NonLocals1_19;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__OutputTupleVar_20;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaParams_23;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaParamTypes_24;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaParamModes_25;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__NonLocals_26;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaType_27;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__MakeOutputTuple_28;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaBody0_29;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__VarSet0_30;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__VarTypes0_31;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__VarSet_32;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__VarTypes_33;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__Renaming_34;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaBody_35;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__BodyGoalInfo_37;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__BodyDetism_38;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaDetism_39;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__RHS_40;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_69_69;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__V_71_71;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__V_72_72;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__V_75_75;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_76_76;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__V_82_82;
#line 807 "try_expand.m"
    MR_Word check_hlds__try_expand__V_83_83;
#line 808 "try_expand.m"
    MR_Word check_hlds__try_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Body0_9, (MR_Integer) 0)));
#line 848 "try_expand.m"
    MR_Word check_hlds__try_expand__V_36_36;

#line 809 "try_expand.m"
    {
#line 809 "try_expand.m"
      check_hlds__try_expand__NonLocals0_18 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__try_expand__BodyInfo0_17);
    }
#line 1719 "check_hlds.try_expand.c"
    check_hlds__try_expand__TypeCtorInfo_87_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 810 "try_expand.m"
    {
#line 810 "try_expand.m"
      parse_tree__set_of_var__difference_3_p_0(check_hlds__try_expand__TypeCtorInfo_87_87, check_hlds__try_expand__NonLocals0_18, check_hlds__try_expand__OutputVarsSet_10, &check_hlds__try_expand__NonLocals1_19);
    }
#line 812 "try_expand.m"
    {
#line 812 "try_expand.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(check_hlds__try_expand__OutputTupleType_11, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[3]), &check_hlds__try_expand__OutputTupleVar_20, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_41, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44);
    }
#line 820 "try_expand.m"
    if ((check_hlds__try_expand__MaybeIO_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 821 "try_expand.m"
      {
#line 821 "try_expand.m"
        MR_Word check_hlds__try_expand__V_48_48;

#line 822 "try_expand.m"
        {
#line 822 "try_expand.m"
          check_hlds__try_expand__LambdaParams_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 822 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParams_23, 0) = ((MR_Box) (check_hlds__try_expand__OutputTupleVar_20));
#line 822 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParams_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 822 "try_expand.m"
        }
#line 823 "try_expand.m"
        {
#line 823 "try_expand.m"
          check_hlds__try_expand__LambdaParamTypes_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 823 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamTypes_24, 0) = ((MR_Box) (check_hlds__try_expand__OutputTupleType_11));
#line 823 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamTypes_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 823 "try_expand.m"
        }
#line 824 "try_expand.m"
        {
#line 824 "try_expand.m"
          check_hlds__try_expand__V_48_48 = parse_tree__prog_mode__out_mode_0_f_0();
        }
#line 824 "try_expand.m"
        {
#line 824 "try_expand.m"
          check_hlds__try_expand__LambdaParamModes_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 824 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamModes_25, 0) = ((MR_Box) (check_hlds__try_expand__V_48_48));
#line 824 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamModes_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 824 "try_expand.m"
        }
#line 825 "try_expand.m"
        check_hlds__try_expand__NonLocals_26 = check_hlds__try_expand__NonLocals0_18;
#line 821 "try_expand.m"
      }
#line 820 "try_expand.m"
    else
#line 815 "try_expand.m"
      {
#line 815 "try_expand.m"
        MR_Word check_hlds__try_expand__IOVarInitial_21;
#line 815 "try_expand.m"
        MR_Word check_hlds__try_expand__IOVarFinal_22;
#line 815 "try_expand.m"
        MR_Word check_hlds__try_expand__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeIO_12, (MR_Integer) 0)));
#line 815 "try_expand.m"
        MR_Word check_hlds__try_expand__V_51_51;
#line 815 "try_expand.m"
        MR_Word check_hlds__try_expand__V_52_52;
#line 815 "try_expand.m"
        MR_Word check_hlds__try_expand__V_54_54;
#line 815 "try_expand.m"
        MR_Word check_hlds__try_expand__V_55_55;
#line 815 "try_expand.m"
        MR_Word check_hlds__try_expand__V_56_56;
#line 815 "try_expand.m"
        MR_Word check_hlds__try_expand__V_57_57;
#line 815 "try_expand.m"
        MR_Word check_hlds__try_expand__V_59_59;
#line 815 "try_expand.m"
        MR_Word check_hlds__try_expand__V_60_60;
#line 815 "try_expand.m"
        MR_Word check_hlds__try_expand__V_61_61;
#line 815 "try_expand.m"
        MR_Word check_hlds__try_expand__V_62_62;
#line 815 "try_expand.m"
        MR_Word check_hlds__try_expand__V_63_63;

#line 815 "try_expand.m"
        check_hlds__try_expand__IOVarInitial_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_50_50, (MR_Integer) 0)));
#line 815 "try_expand.m"
        check_hlds__try_expand__IOVarFinal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_50_50, (MR_Integer) 1)));
#line 816 "try_expand.m"
        {
#line 816 "try_expand.m"
          check_hlds__try_expand__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, 0) = ((MR_Box) (check_hlds__try_expand__IOVarFinal_22));
#line 816 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 816 "try_expand.m"
        }
#line 816 "try_expand.m"
        {
#line 816 "try_expand.m"
          check_hlds__try_expand__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, 0) = ((MR_Box) (check_hlds__try_expand__IOVarInitial_21));
#line 816 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, 1) = ((MR_Box) (check_hlds__try_expand__V_52_52));
#line 816 "try_expand.m"
        }
#line 816 "try_expand.m"
        {
#line 816 "try_expand.m"
          check_hlds__try_expand__LambdaParams_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParams_23, 0) = ((MR_Box) (check_hlds__try_expand__OutputTupleVar_20));
#line 816 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParams_23, 1) = ((MR_Box) (check_hlds__try_expand__V_51_51));
#line 816 "try_expand.m"
        }
#line 817 "try_expand.m"
        {
#line 817 "try_expand.m"
          check_hlds__try_expand__V_55_55 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
        }
#line 817 "try_expand.m"
        {
#line 817 "try_expand.m"
          check_hlds__try_expand__V_57_57 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
        }
#line 817 "try_expand.m"
        {
#line 817 "try_expand.m"
          check_hlds__try_expand__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_56_56, 0) = ((MR_Box) (check_hlds__try_expand__V_57_57));
#line 817 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 817 "try_expand.m"
        }
#line 817 "try_expand.m"
        {
#line 817 "try_expand.m"
          check_hlds__try_expand__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_54_54, 0) = ((MR_Box) (check_hlds__try_expand__V_55_55));
#line 817 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_54_54, 1) = ((MR_Box) (check_hlds__try_expand__V_56_56));
#line 817 "try_expand.m"
        }
#line 817 "try_expand.m"
        {
#line 817 "try_expand.m"
          check_hlds__try_expand__LambdaParamTypes_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamTypes_24, 0) = ((MR_Box) (check_hlds__try_expand__OutputTupleType_11));
#line 817 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamTypes_24, 1) = ((MR_Box) (check_hlds__try_expand__V_54_54));
#line 817 "try_expand.m"
        }
#line 818 "try_expand.m"
        {
#line 818 "try_expand.m"
          check_hlds__try_expand__V_59_59 = parse_tree__prog_mode__out_mode_0_f_0();
        }
#line 818 "try_expand.m"
        {
#line 818 "try_expand.m"
          check_hlds__try_expand__V_61_61 = parse_tree__prog_mode__di_mode_0_f_0();
        }
#line 818 "try_expand.m"
        {
#line 818 "try_expand.m"
          check_hlds__try_expand__V_63_63 = parse_tree__prog_mode__uo_mode_0_f_0();
        }
#line 818 "try_expand.m"
        {
#line 818 "try_expand.m"
          check_hlds__try_expand__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_62_62, 0) = ((MR_Box) (check_hlds__try_expand__V_63_63));
#line 818 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 818 "try_expand.m"
        }
#line 818 "try_expand.m"
        {
#line 818 "try_expand.m"
          check_hlds__try_expand__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_60_60, 0) = ((MR_Box) (check_hlds__try_expand__V_61_61));
#line 818 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_60_60, 1) = ((MR_Box) (check_hlds__try_expand__V_62_62));
#line 818 "try_expand.m"
        }
#line 818 "try_expand.m"
        {
#line 818 "try_expand.m"
          check_hlds__try_expand__LambdaParamModes_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamModes_25, 0) = ((MR_Box) (check_hlds__try_expand__V_59_59));
#line 818 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamModes_25, 1) = ((MR_Box) (check_hlds__try_expand__V_60_60));
#line 818 "try_expand.m"
        }
#line 819 "try_expand.m"
        {
#line 819 "try_expand.m"
          parse_tree__set_of_var__delete_3_p_0(check_hlds__try_expand__TypeCtorInfo_87_87, check_hlds__try_expand__IOVarFinal_22, check_hlds__try_expand__NonLocals1_19, &check_hlds__try_expand__NonLocals_26);
        }
#line 815 "try_expand.m"
      }
#line 827 "try_expand.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 827 "try_expand.m"
    {
#line 827 "try_expand.m"
      check_hlds__try_expand__LambdaType_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 827 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__LambdaType_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 827 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__LambdaType_27, 1) = ((MR_Box) (check_hlds__try_expand__LambdaParamTypes_24));
#line 827 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__LambdaType_27, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 827 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__LambdaType_27, 3) = ((MR_Box) ((MR_Integer) 0));
#line 827 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__LambdaType_27, 4) = NULL;
#line 827 "try_expand.m"
    }
#line 829 "try_expand.m"
    {
#line 829 "try_expand.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(check_hlds__try_expand__LambdaType_27, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[4]), check_hlds__try_expand__LambdaVar_13, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_69_69);
    }
#line 833 "try_expand.m"
    {
#line 833 "try_expand.m"
      check_hlds__try_expand__V_71_71 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__try_expand__TypeCtorInfo_87_87, check_hlds__try_expand__OutputVarsSet_10);
    }
#line 833 "try_expand.m"
    {
#line 833 "try_expand.m"
      hlds__hlds_goal__construct_tuple_3_p_0(check_hlds__try_expand__OutputTupleVar_20, check_hlds__try_expand__V_71_71, &check_hlds__try_expand__MakeOutputTuple_28);
    }
#line 835 "try_expand.m"
    {
#line 835 "try_expand.m"
      hlds__hlds_goal__conjoin_goals_3_p_0(check_hlds__try_expand__Body0_9, check_hlds__try_expand__MakeOutputTuple_28, &check_hlds__try_expand__LambdaBody0_29);
    }
#line 838 "try_expand.m"
    {
#line 838 "try_expand.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ProcInfo_69_69, &check_hlds__try_expand__VarSet0_30);
    }
#line 839 "try_expand.m"
    {
#line 839 "try_expand.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ProcInfo_69_69, &check_hlds__try_expand__VarTypes0_31);
    }
#line 840 "try_expand.m"
    {
#line 840 "try_expand.m"
      check_hlds__try_expand__V_72_72 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__try_expand__TypeCtorInfo_87_87, check_hlds__try_expand__OutputVarsSet_10);
    }
#line 1989 "check_hlds.try_expand.c"
    check_hlds__try_expand__TypeInfo_88_88 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
#line 840 "try_expand.m"
    {
#line 840 "try_expand.m"
      check_hlds__try_expand__V_75_75 = mercury__map__init_0_f_0(check_hlds__try_expand__TypeInfo_88_88, check_hlds__try_expand__TypeInfo_88_88);
    }
#line 840 "try_expand.m"
    {
#line 840 "try_expand.m"
      hlds__goal_util__clone_variables_9_p_0(check_hlds__try_expand__V_72_72, check_hlds__try_expand__VarSet0_30, check_hlds__try_expand__VarTypes0_31, check_hlds__try_expand__VarSet0_30, &check_hlds__try_expand__VarSet_32, check_hlds__try_expand__VarTypes0_31, &check_hlds__try_expand__VarTypes_33, check_hlds__try_expand__V_75_75, &check_hlds__try_expand__Renaming_34);
    }
#line 843 "try_expand.m"
    {
#line 843 "try_expand.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__try_expand__VarSet_32, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_69_69, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_76_76);
    }
#line 844 "try_expand.m"
    {
#line 844 "try_expand.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__try_expand__VarTypes_33, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_76_76, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_42);
    }
#line 845 "try_expand.m"
    {
#line 845 "try_expand.m"
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(check_hlds__try_expand__Renaming_34, check_hlds__try_expand__LambdaBody0_29, &check_hlds__try_expand__LambdaBody_35);
    }
#line 848 "try_expand.m"
    check_hlds__try_expand__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__LambdaBody_35, (MR_Integer) 0)));
#line 848 "try_expand.m"
    check_hlds__try_expand__BodyGoalInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__LambdaBody_35, (MR_Integer) 1)));
#line 849 "try_expand.m"
    {
#line 849 "try_expand.m"
      check_hlds__try_expand__BodyDetism_38 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__try_expand__BodyGoalInfo_37);
    }
#line 864 "try_expand.m"
    if ((check_hlds__try_expand__BodyDetism_38 == (MR_Integer) 4))
#line 868 "try_expand.m"
      check_hlds__try_expand__LambdaDetism_39 = (MR_Integer) 4;
#line 864 "try_expand.m"
    else
#line 864 "try_expand.m"
      if ((check_hlds__try_expand__BodyDetism_38 == (MR_Integer) 5))
#line 869 "try_expand.m"
        check_hlds__try_expand__LambdaDetism_39 = (MR_Integer) 5;
#line 864 "try_expand.m"
      else
#line 864 "try_expand.m"
        if ((check_hlds__try_expand__BodyDetism_38 == (MR_Integer) 0))
#line 864 "try_expand.m"
          check_hlds__try_expand__LambdaDetism_39 = (MR_Integer) 0;
#line 864 "try_expand.m"
        else
#line 864 "try_expand.m"
          if ((check_hlds__try_expand__BodyDetism_38 == (MR_Integer) 6))
#line 870 "try_expand.m"
            check_hlds__try_expand__LambdaDetism_39 = (MR_Integer) 0;
#line 864 "try_expand.m"
          else
#line 864 "try_expand.m"
            if ((check_hlds__try_expand__BodyDetism_38 == (MR_Integer) 7))
#line 871 "try_expand.m"
              check_hlds__try_expand__LambdaDetism_39 = (MR_Integer) 1;
#line 864 "try_expand.m"
            else
#line 864 "try_expand.m"
              if ((check_hlds__try_expand__BodyDetism_38 == (MR_Integer) 2))
#line 866 "try_expand.m"
                check_hlds__try_expand__LambdaDetism_39 = (MR_Integer) 4;
#line 864 "try_expand.m"
              else
#line 864 "try_expand.m"
                if ((check_hlds__try_expand__BodyDetism_38 == (MR_Integer) 3))
#line 867 "try_expand.m"
                  check_hlds__try_expand__LambdaDetism_39 = (MR_Integer) 5;
#line 864 "try_expand.m"
                else
#line 865 "try_expand.m"
                  check_hlds__try_expand__LambdaDetism_39 = (MR_Integer) 1;
#line 853 "try_expand.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 853 "try_expand.m"
    {
#line 853 "try_expand.m"
      check_hlds__try_expand__V_82_82 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__try_expand__TypeCtorInfo_87_87, check_hlds__try_expand__NonLocals_26);
    }
#line 853 "try_expand.m"
    {
#line 853 "try_expand.m"
      check_hlds__try_expand__RHS_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 853 "try_expand.m"
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 0) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((MR_Integer) 0 << (MR_Integer) 3)))))));
#line 853 "try_expand.m"
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 1) = (MR_Integer) 0;
#line 853 "try_expand.m"
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 2) = ((MR_Box) (check_hlds__try_expand__V_82_82));
#line 853 "try_expand.m"
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 3) = ((MR_Box) (check_hlds__try_expand__LambdaParams_23));
#line 853 "try_expand.m"
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 4) = ((MR_Box) (check_hlds__try_expand__LambdaParamModes_25));
#line 853 "try_expand.m"
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 5) = ((MR_Box) (check_hlds__try_expand__LambdaDetism_39));
#line 853 "try_expand.m"
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 6) = ((MR_Box) (check_hlds__try_expand__LambdaBody_35));
#line 853 "try_expand.m"
    }
#line 856 "try_expand.m"
    {
#line 856 "try_expand.m"
      check_hlds__try_expand__V_83_83 = mercury__term__context_init_0_f_0();
    }
#line 856 "try_expand.m"
    {
#line 856 "try_expand.m"
      hlds__hlds_goal__create_pure_atomic_complicated_unification_6_p_0(*check_hlds__try_expand__LambdaVar_13, check_hlds__try_expand__RHS_40, check_hlds__try_expand__V_83_83, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__try_expand_scalar_common_6[1]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__AssignLambdaVar_14);
#line 856 "try_expand.m"
      return;
    }
#line 807 "try_expand.m"
  }
#line 802 "try_expand.m"
}

#line 780 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__lookup_case_goal_3_p_0(
#line 780 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 780 "try_expand.m"
  MR_Word check_hlds__try_expand__ConsId_2,
#line 780 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_3)
#line 780 "try_expand.m"
{
#line 782 "try_expand.m"
  while (MR_TRUE)
#line 782 "try_expand.m"
    {
#line 782 "try_expand.m"
      /* tailcall optimized into a loop */
#line 782 "try_expand.m"
      {
#line 782 "try_expand.m"
        MR_bool check_hlds__try_expand__succeeded;

#line 782 "try_expand.m"
        if ((check_hlds__try_expand__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 782 "try_expand.m"
          {
#line 782 "try_expand.m"
            MR_String check_hlds__try_expand__V_8_8;
#line 782 "try_expand.m"
            MR_String check_hlds__try_expand__V_10_10;

#line 783 "try_expand.m"
            {
#line 783 "try_expand.m"
              check_hlds__try_expand__V_10_10 = mercury__string__string_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, ((MR_Box) (check_hlds__try_expand__ConsId_2)));
            }
#line 783 "try_expand.m"
            {
#line 783 "try_expand.m"
              check_hlds__try_expand__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "couldn\'t find ", check_hlds__try_expand__V_10_10);
            }
#line 783 "try_expand.m"
            {
#line 783 "try_expand.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.lookup_case_goal\'/3", check_hlds__try_expand__V_8_8);
#line 783 "try_expand.m"
              return;
            }
#line 782 "try_expand.m"
          }
#line 782 "try_expand.m"
        else
#line 784 "try_expand.m"
          {
#line 784 "try_expand.m"
            MR_Word check_hlds__try_expand__H_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 0)));
#line 784 "try_expand.m"
            MR_Word check_hlds__try_expand__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 1)));
#line 787 "try_expand.m"
            MR_Word check_hlds__try_expand__GoalPrime_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__H_11, (MR_Integer) 2)));
#line 785 "try_expand.m"
            MR_Word check_hlds__try_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__H_11, (MR_Integer) 1)));
#line 785 "try_expand.m"
            MR_Word check_hlds__try_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__H_11, (MR_Integer) 0)));

#line 785 "try_expand.m"
            {
#line 785 "try_expand.m"
              check_hlds__try_expand__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__try_expand__ConsId_2, check_hlds__try_expand__V_18_18);
            }
#line 785 "try_expand.m"
            if (check_hlds__try_expand__succeeded)
#line 785 "try_expand.m"
              check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 787 "try_expand.m"
            if (check_hlds__try_expand__succeeded)
#line 786 "try_expand.m"
              *check_hlds__try_expand__Goal_3 = check_hlds__try_expand__GoalPrime_15;
#line 787 "try_expand.m"
            else
#line 788 "try_expand.m"
              {
#line 788 "try_expand.m"
                /* direct tailcall eliminated */
#line 788 "try_expand.m"
                {
#line 788 "try_expand.m"
                  MR_Word check_hlds__try_expand__HeadVar__1__tmp_copy_1 = check_hlds__try_expand__T_12;

#line 788 "try_expand.m"
                  check_hlds__try_expand__HeadVar__1_1 = check_hlds__try_expand__HeadVar__1__tmp_copy_1;
#line 788 "try_expand.m"
                }
#line 788 "try_expand.m"
                continue;
#line 788 "try_expand.m"
              }
#line 784 "try_expand.m"
          }
#line 782 "try_expand.m"
      }
#line 782 "try_expand.m"
      break;
#line 782 "try_expand.m"
    }
#line 780 "try_expand.m"
}

#line 712 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand__extract_from_succeeded_goal_5_p_0(
#line 712 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_6,
#line 712 "try_expand.m"
  MR_Word check_hlds__try_expand__SucceededGoal_7,
#line 712 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_8,
#line 712 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_9,
#line 712 "try_expand.m"
  MR_Word * check_hlds__try_expand__MaybeElse_10)
#line 712 "try_expand.m"
{
#line 716 "try_expand.m"
  {
#line 716 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 716 "try_expand.m"
    MR_Word check_hlds__try_expand__Conjuncts0_11;
#line 716 "try_expand.m"
    MR_Word check_hlds__try_expand__DeconstructResult_13;
#line 716 "try_expand.m"
    MR_Word check_hlds__try_expand__TestNullTuple_14;
#line 716 "try_expand.m"
    MR_Word check_hlds__try_expand__Conjuncts1_15;
#line 716 "try_expand.m"
    MR_Word check_hlds__try_expand__TestRHS_23;
#line 716 "try_expand.m"
    MR_Word check_hlds__try_expand__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SucceededGoal_7, (MR_Integer) 0)));
#line 716 "try_expand.m"
    MR_Word check_hlds__try_expand__V_49_49;
#line 716 "try_expand.m"
    MR_Word check_hlds__try_expand__V_50_50;
#line 716 "try_expand.m"
    MR_Word check_hlds__try_expand__V_51_51;
#line 716 "try_expand.m"
    MR_Word check_hlds__try_expand__V_52_52;
#line 717 "try_expand.m"
    MR_Word check_hlds__try_expand__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SucceededGoal_7, (MR_Integer) 1)));
#line 719 "try_expand.m"
    MR_Word check_hlds__try_expand__V_21_21;
#line 719 "try_expand.m"
    MR_Word check_hlds__try_expand___ResultVar_16;
#line 719 "try_expand.m"
    MR_Word check_hlds__try_expand__V_17_17;
#line 719 "try_expand.m"
    MR_Word check_hlds__try_expand__V_18_18;
#line 719 "try_expand.m"
    MR_Word check_hlds__try_expand__V_19_19;
#line 719 "try_expand.m"
    MR_Word check_hlds__try_expand__V_20_20;
#line 720 "try_expand.m"
    MR_Word check_hlds__try_expand__V_27_27;
#line 720 "try_expand.m"
    MR_Word check_hlds__try_expand__V_22_22;
#line 720 "try_expand.m"
    MR_Word check_hlds__try_expand__V_24_24;
#line 720 "try_expand.m"
    MR_Word check_hlds__try_expand__V_25_25;
#line 720 "try_expand.m"
    MR_Word check_hlds__try_expand__V_26_26;
#line 721 "try_expand.m"
    MR_Word check_hlds__try_expand__V_53_53;
#line 721 "try_expand.m"
    MR_Integer check_hlds__try_expand__V_54_54;
#line 721 "try_expand.m"
    MR_Word check_hlds__try_expand__V_55_55;
#line 721 "try_expand.m"
    MR_Word check_hlds__try_expand__V_56_56;
#line 750 "try_expand.m"
    MR_Word check_hlds__try_expand__Rest_30;
#line 750 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalPrime_32;
#line 750 "try_expand.m"
    MR_Word check_hlds__try_expand__Then0_33;
#line 750 "try_expand.m"
    MR_Word check_hlds__try_expand__Else0_34;
#line 724 "try_expand.m"
    MR_Word check_hlds__try_expand__IfThenElse_28;
#line 724 "try_expand.m"
    MR_Word check_hlds__try_expand__V_57_57;
#line 724 "try_expand.m"
    MR_Word check_hlds__try_expand__V_29_29;
#line 725 "try_expand.m"
    MR_Word check_hlds__try_expand__V_31_31;

#line 717 "try_expand.m"
    check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_48_48)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_48_48, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 717 "try_expand.m"
    if (check_hlds__try_expand__succeeded)
#line 717 "try_expand.m"
      {
#line 717 "try_expand.m"
        check_hlds__try_expand__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_48_48, (MR_Integer) 1)));
#line 717 "try_expand.m"
        check_hlds__try_expand__Conjuncts0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_48_48, (MR_Integer) 2)));
#line 717 "try_expand.m"
        check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_49_49 == (MR_Integer) 0);
#line 716 "try_expand.m"
        if (check_hlds__try_expand__succeeded)
#line 716 "try_expand.m"
          {
#line 718 "try_expand.m"
            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__Conjuncts0_11)) == (MR_mktag((MR_Integer) 1)));
#line 718 "try_expand.m"
            if (check_hlds__try_expand__succeeded)
#line 718 "try_expand.m"
              {
#line 718 "try_expand.m"
                check_hlds__try_expand__DeconstructResult_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts0_11, (MR_Integer) 0)));
#line 718 "try_expand.m"
                check_hlds__try_expand__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts0_11, (MR_Integer) 1)));
#line 718 "try_expand.m"
                check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_50_50)) == (MR_mktag((MR_Integer) 1)));
#line 718 "try_expand.m"
                if (check_hlds__try_expand__succeeded)
#line 718 "try_expand.m"
                  {
#line 718 "try_expand.m"
                    check_hlds__try_expand__TestNullTuple_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_50_50, (MR_Integer) 0)));
#line 718 "try_expand.m"
                    check_hlds__try_expand__Conjuncts1_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_50_50, (MR_Integer) 1)));
#line 719 "try_expand.m"
                    check_hlds__try_expand__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__DeconstructResult_13, (MR_Integer) 0)));
#line 719 "try_expand.m"
                    check_hlds__try_expand__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__DeconstructResult_13, (MR_Integer) 1)));
#line 719 "try_expand.m"
                    check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_51_51)) == (MR_mktag((MR_Integer) 1)));
#line 719 "try_expand.m"
                    if (check_hlds__try_expand__succeeded)
#line 719 "try_expand.m"
                      {
#line 719 "try_expand.m"
                        check_hlds__try_expand___ResultVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, (MR_Integer) 0)));
#line 719 "try_expand.m"
                        check_hlds__try_expand__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, (MR_Integer) 1)));
#line 719 "try_expand.m"
                        check_hlds__try_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, (MR_Integer) 2)));
#line 719 "try_expand.m"
                        check_hlds__try_expand__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, (MR_Integer) 3)));
#line 719 "try_expand.m"
                        check_hlds__try_expand__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, (MR_Integer) 4)));
#line 720 "try_expand.m"
                        check_hlds__try_expand__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__TestNullTuple_14, (MR_Integer) 0)));
#line 720 "try_expand.m"
                        check_hlds__try_expand__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__TestNullTuple_14, (MR_Integer) 1)));
#line 720 "try_expand.m"
                        check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 720 "try_expand.m"
                        if (check_hlds__try_expand__succeeded)
#line 720 "try_expand.m"
                          {
#line 720 "try_expand.m"
                            check_hlds__try_expand__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, (MR_Integer) 0)));
#line 720 "try_expand.m"
                            check_hlds__try_expand__TestRHS_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, (MR_Integer) 1)));
#line 720 "try_expand.m"
                            check_hlds__try_expand__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, (MR_Integer) 2)));
#line 720 "try_expand.m"
                            check_hlds__try_expand__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, (MR_Integer) 3)));
#line 720 "try_expand.m"
                            check_hlds__try_expand__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, (MR_Integer) 4)));
#line 721 "try_expand.m"
                            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__TestRHS_23)) == (MR_mktag((MR_Integer) 1)));
#line 721 "try_expand.m"
                            if (check_hlds__try_expand__succeeded)
#line 721 "try_expand.m"
                              {
#line 721 "try_expand.m"
                                check_hlds__try_expand__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__TestRHS_23, (MR_Integer) 0)));
#line 721 "try_expand.m"
                                check_hlds__try_expand__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__TestRHS_23, (MR_Integer) 1)));
#line 721 "try_expand.m"
                                check_hlds__try_expand__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__TestRHS_23, (MR_Integer) 2)));
#line 721 "try_expand.m"
                                check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_53_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_53_53, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 721 "try_expand.m"
                                if (check_hlds__try_expand__succeeded)
#line 721 "try_expand.m"
                                  {
#line 721 "try_expand.m"
                                    check_hlds__try_expand__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_53_53, (MR_Integer) 1)));
#line 721 "try_expand.m"
                                    check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_54_54 == (MR_Integer) 0);
#line 721 "try_expand.m"
                                    if (check_hlds__try_expand__succeeded)
#line 721 "try_expand.m"
                                      {
#line 721 "try_expand.m"
                                        check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_55_55 == (MR_Integer) 0);
#line 721 "try_expand.m"
                                        if (check_hlds__try_expand__succeeded)
#line 721 "try_expand.m"
                                          check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 721 "try_expand.m"
                                      }
#line 721 "try_expand.m"
                                  }
#line 721 "try_expand.m"
                              }
#line 716 "try_expand.m"
                            if (check_hlds__try_expand__succeeded)
#line 716 "try_expand.m"
                              {
#line 724 "try_expand.m"
                                check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__Conjuncts1_15)) == (MR_mktag((MR_Integer) 1)));
#line 724 "try_expand.m"
                                if (check_hlds__try_expand__succeeded)
#line 724 "try_expand.m"
                                  {
#line 724 "try_expand.m"
                                    check_hlds__try_expand__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts1_15, (MR_Integer) 0)));
#line 724 "try_expand.m"
                                    check_hlds__try_expand__Rest_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts1_15, (MR_Integer) 1)));
#line 724 "try_expand.m"
                                    check_hlds__try_expand__IfThenElse_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_57_57, (MR_Integer) 0)));
#line 724 "try_expand.m"
                                    check_hlds__try_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_57_57, (MR_Integer) 1)));
#line 725 "try_expand.m"
                                    check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__IfThenElse_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__IfThenElse_28, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 725 "try_expand.m"
                                    if (check_hlds__try_expand__succeeded)
#line 725 "try_expand.m"
                                      {
#line 725 "try_expand.m"
                                        check_hlds__try_expand__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__IfThenElse_28, (MR_Integer) 1)));
#line 725 "try_expand.m"
                                        check_hlds__try_expand__GoalPrime_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__IfThenElse_28, (MR_Integer) 2)));
#line 725 "try_expand.m"
                                        check_hlds__try_expand__Then0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__IfThenElse_28, (MR_Integer) 3)));
#line 725 "try_expand.m"
                                        check_hlds__try_expand__Else0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__IfThenElse_28, (MR_Integer) 4)));
#line 725 "try_expand.m"
                                      }
#line 724 "try_expand.m"
                                  }
#line 750 "try_expand.m"
                                if (check_hlds__try_expand__succeeded)
#line 727 "try_expand.m"
                                  {
#line 727 "try_expand.m"
                                    MR_Word check_hlds__try_expand__GoalInfo_36;
#line 727 "try_expand.m"
                                    MR_Word check_hlds__try_expand__GoalDetism_37;
#line 727 "try_expand.m"
                                    MR_Word check_hlds__try_expand__GoalMaxSoln_39;
#line 727 "try_expand.m"
                                    MR_Word check_hlds__try_expand__Else_40;
#line 734 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_35_35;
#line 736 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_38_38;

#line 727 "try_expand.m"
                                    *check_hlds__try_expand__Goal_8 = check_hlds__try_expand__GoalPrime_32;
#line 734 "try_expand.m"
                                    check_hlds__try_expand__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__try_expand__Goal_8, (MR_Integer) 0)));
#line 734 "try_expand.m"
                                    check_hlds__try_expand__GoalInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__try_expand__Goal_8, (MR_Integer) 1)));
#line 735 "try_expand.m"
                                    {
#line 735 "try_expand.m"
                                      check_hlds__try_expand__GoalDetism_37 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__try_expand__GoalInfo_36);
                                    }
#line 736 "try_expand.m"
                                    {
#line 736 "try_expand.m"
                                      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__try_expand__GoalDetism_37, &check_hlds__try_expand__V_38_38, &check_hlds__try_expand__GoalMaxSoln_39);
                                    }
#line 740 "try_expand.m"
                                    if ((check_hlds__try_expand__GoalMaxSoln_39 == (MR_Integer) 0))
#line 914 "try_expand.m"
                                      {
#line 914 "try_expand.m"
                                        MR_Word check_hlds__try_expand__V_82_82;
#line 914 "try_expand.m"
                                        MR_Word check_hlds__try_expand__V_90_90;
#line 914 "try_expand.m"
                                        MR_Word check_hlds__try_expand__V_91_91;

#line 915 "try_expand.m"
                                        {
#line 915 "try_expand.m"
                                          check_hlds__try_expand__V_82_82 = mdbcomp__prim_data__mercury_exception_module_0_f_0();
                                        }
#line 915 "try_expand.m"
                                        {
#line 915 "try_expand.m"
                                          check_hlds__try_expand__V_90_90 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                                        }
#line 915 "try_expand.m"
                                        {
#line 915 "try_expand.m"
                                          check_hlds__try_expand__V_91_91 = mercury__term__context_init_0_f_0();
                                        }
#line 915 "try_expand.m"
                                        {
#line 915 "try_expand.m"
                                          hlds__goal_util__generate_simple_call_12_p_0(check_hlds__try_expand__V_82_82, (MR_String) "unreachable", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__V_90_90, check_hlds__try_expand__ModuleInfo_6, check_hlds__try_expand__V_91_91, check_hlds__try_expand__Then_9);
                                        }
#line 914 "try_expand.m"
                                      }
#line 740 "try_expand.m"
                                    else
#line 745 "try_expand.m"
                                      {
#line 745 "try_expand.m"
                                        hlds__hlds_goal__conjoin_goal_and_goal_list_3_p_0(check_hlds__try_expand__Then0_33, check_hlds__try_expand__Rest_30, check_hlds__try_expand__Then_9);
                                      }
#line 748 "try_expand.m"
                                    {
#line 748 "try_expand.m"
                                      hlds__hlds_goal__conjoin_goal_and_goal_list_3_p_0(check_hlds__try_expand__Else0_34, check_hlds__try_expand__Rest_30, &check_hlds__try_expand__Else_40);
                                    }
#line 749 "try_expand.m"
                                    {
#line 749 "try_expand.m"
                                      MR_Word base;
#line 749 "try_expand.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 749 "try_expand.m"
                                      *check_hlds__try_expand__MaybeElse_10 = base;
#line 749 "try_expand.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__try_expand__Else_40));
#line 749 "try_expand.m"
                                    }
#line 727 "try_expand.m"
                                    check_hlds__try_expand__succeeded = MR_TRUE;
#line 727 "try_expand.m"
                                  }
#line 750 "try_expand.m"
                                else
#line 751 "try_expand.m"
                                  {
#line 751 "try_expand.m"
                                    MR_Word check_hlds__try_expand__SomeGoal_41;
#line 751 "try_expand.m"
                                    MR_Word check_hlds__try_expand__AfterSomeGoal_42;
#line 751 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_58_58;
#line 751 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_59_59;
#line 751 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_60_60;
#line 752 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_43_43;
#line 759 "try_expand.m"
                                    MR_Word check_hlds__try_expand__Rest_70;
#line 759 "try_expand.m"
                                    MR_Word check_hlds__try_expand__Then0_71;
#line 754 "try_expand.m"
                                    MR_Word check_hlds__try_expand__SomeThen_44;
#line 754 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_61_61;
#line 754 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_62_62;
#line 754 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_63_63;
#line 755 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_45_45;

#line 751 "try_expand.m"
                                    check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__Conjuncts1_15)) == (MR_mktag((MR_Integer) 1)));
#line 751 "try_expand.m"
                                    if (check_hlds__try_expand__succeeded)
#line 751 "try_expand.m"
                                      {
#line 751 "try_expand.m"
                                        check_hlds__try_expand__SomeGoal_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts1_15, (MR_Integer) 0)));
#line 751 "try_expand.m"
                                        check_hlds__try_expand__AfterSomeGoal_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts1_15, (MR_Integer) 1)));
#line 752 "try_expand.m"
                                        check_hlds__try_expand__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SomeGoal_41, (MR_Integer) 0)));
#line 752 "try_expand.m"
                                        check_hlds__try_expand__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SomeGoal_41, (MR_Integer) 1)));
#line 752 "try_expand.m"
                                        check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_58_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_58_58, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 752 "try_expand.m"
                                        if (check_hlds__try_expand__succeeded)
#line 752 "try_expand.m"
                                          {
#line 752 "try_expand.m"
                                            check_hlds__try_expand__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_58_58, (MR_Integer) 1)));
#line 752 "try_expand.m"
                                            *check_hlds__try_expand__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_58_58, (MR_Integer) 2)));
#line 752 "try_expand.m"
                                            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_59_59)) == (MR_mktag((MR_Integer) 0)));
#line 752 "try_expand.m"
                                            if (check_hlds__try_expand__succeeded)
#line 752 "try_expand.m"
                                              {
#line 752 "try_expand.m"
                                                check_hlds__try_expand__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_59_59, (MR_Integer) 0)));
#line 752 "try_expand.m"
                                                check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_60_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 751 "try_expand.m"
                                                if (check_hlds__try_expand__succeeded)
#line 751 "try_expand.m"
                                                  {
#line 754 "try_expand.m"
                                                    check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__AfterSomeGoal_42)) == (MR_mktag((MR_Integer) 1)));
#line 754 "try_expand.m"
                                                    if (check_hlds__try_expand__succeeded)
#line 754 "try_expand.m"
                                                      {
#line 754 "try_expand.m"
                                                        check_hlds__try_expand__SomeThen_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__AfterSomeGoal_42, (MR_Integer) 0)));
#line 754 "try_expand.m"
                                                        check_hlds__try_expand__Rest_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__AfterSomeGoal_42, (MR_Integer) 1)));
#line 755 "try_expand.m"
                                                        check_hlds__try_expand__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SomeThen_44, (MR_Integer) 0)));
#line 755 "try_expand.m"
                                                        check_hlds__try_expand__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SomeThen_44, (MR_Integer) 1)));
#line 755 "try_expand.m"
                                                        check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_61_61)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_61_61, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 755 "try_expand.m"
                                                        if (check_hlds__try_expand__succeeded)
#line 755 "try_expand.m"
                                                          {
#line 755 "try_expand.m"
                                                            check_hlds__try_expand__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_61_61, (MR_Integer) 1)));
#line 755 "try_expand.m"
                                                            check_hlds__try_expand__Then0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_61_61, (MR_Integer) 2)));
#line 755 "try_expand.m"
                                                            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_62_62)) == (MR_mktag((MR_Integer) 0)));
#line 755 "try_expand.m"
                                                            if (check_hlds__try_expand__succeeded)
#line 755 "try_expand.m"
                                                              {
#line 755 "try_expand.m"
                                                                check_hlds__try_expand__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_62_62, (MR_Integer) 0)));
#line 755 "try_expand.m"
                                                                check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 755 "try_expand.m"
                                                              }
#line 755 "try_expand.m"
                                                          }
#line 754 "try_expand.m"
                                                      }
#line 759 "try_expand.m"
                                                    if (check_hlds__try_expand__succeeded)
#line 757 "try_expand.m"
                                                      {
#line 757 "try_expand.m"
                                                        {
#line 757 "try_expand.m"
                                                          hlds__hlds_goal__conjoin_goal_and_goal_list_3_p_0(check_hlds__try_expand__Then0_71, check_hlds__try_expand__Rest_70, check_hlds__try_expand__Then_9);
                                                        }
#line 758 "try_expand.m"
                                                        *check_hlds__try_expand__MaybeElse_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 757 "try_expand.m"
                                                      }
#line 759 "try_expand.m"
                                                    else
#line 763 "try_expand.m"
                                                      {
#line 763 "try_expand.m"
                                                        MR_Word check_hlds__try_expand__GoalInfo_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__try_expand__Goal_8, (MR_Integer) 1)));
#line 763 "try_expand.m"
                                                        MR_Word check_hlds__try_expand__GoalDetism_68;
#line 763 "try_expand.m"
                                                        MR_Word check_hlds__try_expand__GoalMaxSoln_69;
#line 763 "try_expand.m"
                                                        MR_Word check_hlds__try_expand__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__try_expand__Goal_8, (MR_Integer) 0)));
#line 765 "try_expand.m"
                                                        MR_Word check_hlds__try_expand__V_47_47;

#line 764 "try_expand.m"
                                                        {
#line 764 "try_expand.m"
                                                          check_hlds__try_expand__GoalDetism_68 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__try_expand__GoalInfo_67);
                                                        }
#line 765 "try_expand.m"
                                                        {
#line 765 "try_expand.m"
                                                          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__try_expand__GoalDetism_68, &check_hlds__try_expand__V_47_47, &check_hlds__try_expand__GoalMaxSoln_69);
                                                        }
#line 770 "try_expand.m"
                                                        if ((check_hlds__try_expand__GoalMaxSoln_69 == (MR_Integer) 0))
#line 767 "try_expand.m"
                                                          {
#line 768 "try_expand.m"
                                                            {
#line 768 "try_expand.m"
                                                              check_hlds__try_expand__make_unreachable_call_2_p_0(check_hlds__try_expand__ModuleInfo_6, check_hlds__try_expand__Then_9);
                                                            }
#line 769 "try_expand.m"
                                                            *check_hlds__try_expand__MaybeElse_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 767 "try_expand.m"
                                                          }
#line 770 "try_expand.m"
                                                        else
#line 774 "try_expand.m"
                                                          {
#line 775 "try_expand.m"
                                                            {
#line 775 "try_expand.m"
                                                              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.extract_from_succeeded_goal\'/5", (MR_String) "goal not erroneous");
                                                            }
#line 774 "try_expand.m"
                                                          }
#line 763 "try_expand.m"
                                                      }
#line 759 "try_expand.m"
                                                    check_hlds__try_expand__succeeded = MR_TRUE;
#line 751 "try_expand.m"
                                                  }
#line 752 "try_expand.m"
                                              }
#line 752 "try_expand.m"
                                          }
#line 751 "try_expand.m"
                                      }
#line 751 "try_expand.m"
                                  }
#line 716 "try_expand.m"
                              }
#line 720 "try_expand.m"
                          }
#line 719 "try_expand.m"
                      }
#line 718 "try_expand.m"
                  }
#line 718 "try_expand.m"
              }
#line 716 "try_expand.m"
          }
#line 717 "try_expand.m"
      }
#line 716 "try_expand.m"
    return check_hlds__try_expand__succeeded;
#line 716 "try_expand.m"
  }
#line 712 "try_expand.m"
}

#line 672 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand__extract_intermediate_goal_parts_2_7_p_0(
#line 672 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_8,
#line 672 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_9,
#line 672 "try_expand.m"
  MR_Word check_hlds__try_expand__IntermediateGoal_10,
#line 672 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_11,
#line 672 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_12,
#line 672 "try_expand.m"
  MR_Word * check_hlds__try_expand__MaybeElse_13,
#line 672 "try_expand.m"
  MR_Word * check_hlds__try_expand__ExcpHandling_14)
#line 672 "try_expand.m"
{
#line 677 "try_expand.m"
  {
#line 677 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeInfo_41_41;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeInfo_42_42;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__Conjuncts_15;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__MagicCall_17;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__Switch_19;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__Cases_26;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__SucceededGoal_27;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 0)));
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__V_29_29;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__V_30_30;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__V_31_31;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__V_32_32;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__V_33_33;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__V_34_34;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__V_35_35;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__V_36_36;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__V_37_37;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__V_38_38;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__V_39_39;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__V_40_40;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 1)));
#line 680 "try_expand.m"
    MR_Word check_hlds__try_expand__V_18_18;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_20_20;
#line 683 "try_expand.m"
    MR_Word check_hlds__try_expand__V_21_21;
#line 683 "try_expand.m"
    MR_Integer check_hlds__try_expand__V_22_22;
#line 683 "try_expand.m"
    MR_Word check_hlds__try_expand__V_23_23;
#line 683 "try_expand.m"
    MR_Word check_hlds__try_expand__V_24_24;
#line 683 "try_expand.m"
    MR_Word check_hlds__try_expand__V_25_25;

#line 678 "try_expand.m"
    check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_28_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_28_28, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 678 "try_expand.m"
    if (check_hlds__try_expand__succeeded)
#line 678 "try_expand.m"
      {
#line 678 "try_expand.m"
        check_hlds__try_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_28_28, (MR_Integer) 1)));
#line 678 "try_expand.m"
        check_hlds__try_expand__Conjuncts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_28_28, (MR_Integer) 2)));
#line 678 "try_expand.m"
        check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_29_29 == (MR_Integer) 0);
#line 677 "try_expand.m"
        if (check_hlds__try_expand__succeeded)
#line 677 "try_expand.m"
          {
#line 679 "try_expand.m"
            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__Conjuncts_15)) == (MR_mktag((MR_Integer) 1)));
#line 679 "try_expand.m"
            if (check_hlds__try_expand__succeeded)
#line 679 "try_expand.m"
              {
#line 679 "try_expand.m"
                check_hlds__try_expand__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts_15, (MR_Integer) 0)));
#line 679 "try_expand.m"
                check_hlds__try_expand__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts_15, (MR_Integer) 1)));
#line 680 "try_expand.m"
                check_hlds__try_expand__MagicCall_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_30_30, (MR_Integer) 0)));
#line 680 "try_expand.m"
                check_hlds__try_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_30_30, (MR_Integer) 1)));
#line 680 "try_expand.m"
                check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 680 "try_expand.m"
                if (check_hlds__try_expand__succeeded)
#line 680 "try_expand.m"
                  {
#line 680 "try_expand.m"
                    check_hlds__try_expand__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_31_31, (MR_Integer) 0)));
#line 680 "try_expand.m"
                    check_hlds__try_expand__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_31_31, (MR_Integer) 1)));
#line 682 "try_expand.m"
                    check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 677 "try_expand.m"
                    if (check_hlds__try_expand__succeeded)
#line 677 "try_expand.m"
                      {
#line 682 "try_expand.m"
                        check_hlds__try_expand__Switch_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_32_32, (MR_Integer) 0)));
#line 682 "try_expand.m"
                        check_hlds__try_expand__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_32_32, (MR_Integer) 1)));
#line 683 "try_expand.m"
                        check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__MagicCall_17)) == (MR_mktag((MR_Integer) 2)));
#line 683 "try_expand.m"
                        if (check_hlds__try_expand__succeeded)
#line 683 "try_expand.m"
                          {
#line 683 "try_expand.m"
                            check_hlds__try_expand__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 0)));
#line 683 "try_expand.m"
                            check_hlds__try_expand__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 1)));
#line 683 "try_expand.m"
                            check_hlds__try_expand__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 2)));
#line 683 "try_expand.m"
                            check_hlds__try_expand__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 3)));
#line 683 "try_expand.m"
                            check_hlds__try_expand__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 4)));
#line 683 "try_expand.m"
                            check_hlds__try_expand__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 5)));
#line 683 "try_expand.m"
                            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 683 "try_expand.m"
                            if (check_hlds__try_expand__succeeded)
#line 683 "try_expand.m"
                              {
#line 683 "try_expand.m"
                                check_hlds__try_expand__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_34_34, (MR_Integer) 0)));
#line 683 "try_expand.m"
                                check_hlds__try_expand__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_34_34, (MR_Integer) 1)));
#line 2917 "check_hlds.try_expand.c"
                                check_hlds__try_expand__TypeInfo_41_41 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
#line 683 "try_expand.m"
                                {
#line 683 "try_expand.m"
                                  check_hlds__try_expand__succeeded = mercury__builtin__unify_2_p_0(check_hlds__try_expand__TypeInfo_41_41, ((MR_Box) (check_hlds__try_expand__ResultVar_9)), ((MR_Box) (check_hlds__try_expand__V_39_39)));
                                }
#line 677 "try_expand.m"
                                if (check_hlds__try_expand__succeeded)
#line 677 "try_expand.m"
                                  {
#line 683 "try_expand.m"
                                    check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 677 "try_expand.m"
                                    if (check_hlds__try_expand__succeeded)
#line 677 "try_expand.m"
                                      {
#line 684 "try_expand.m"
                                        check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__Switch_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_19, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 684 "try_expand.m"
                                        if (check_hlds__try_expand__succeeded)
#line 684 "try_expand.m"
                                          {
#line 684 "try_expand.m"
                                            check_hlds__try_expand__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_19, (MR_Integer) 1)));
#line 684 "try_expand.m"
                                            check_hlds__try_expand__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_19, (MR_Integer) 2)));
#line 684 "try_expand.m"
                                            check_hlds__try_expand__Cases_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_19, (MR_Integer) 3)));
#line 2946 "check_hlds.try_expand.c"
                                            check_hlds__try_expand__TypeInfo_42_42 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
#line 684 "try_expand.m"
                                            {
#line 684 "try_expand.m"
                                              check_hlds__try_expand__succeeded = mercury__builtin__unify_2_p_0(check_hlds__try_expand__TypeInfo_42_42, ((MR_Box) (check_hlds__try_expand__ResultVar_9)), ((MR_Box) (check_hlds__try_expand__V_40_40)));
                                            }
#line 677 "try_expand.m"
                                            if (check_hlds__try_expand__succeeded)
#line 677 "try_expand.m"
                                              {
#line 684 "try_expand.m"
                                                check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_36_36 == (MR_Integer) 1);
#line 677 "try_expand.m"
                                                if (check_hlds__try_expand__succeeded)
#line 677 "try_expand.m"
                                                  {
#line 686 "try_expand.m"
                                                    {
#line 686 "try_expand.m"
                                                      check_hlds__try_expand__V_37_37 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
                                                    }
#line 686 "try_expand.m"
                                                    {
#line 686 "try_expand.m"
                                                      check_hlds__try_expand__lookup_case_goal_3_p_0(check_hlds__try_expand__Cases_26, check_hlds__try_expand__V_37_37, &check_hlds__try_expand__SucceededGoal_27);
                                                    }
#line 687 "try_expand.m"
                                                    {
#line 687 "try_expand.m"
                                                      check_hlds__try_expand__succeeded = check_hlds__try_expand__extract_from_succeeded_goal_5_p_0(check_hlds__try_expand__ModuleInfo_8, check_hlds__try_expand__SucceededGoal_27, check_hlds__try_expand__Goal_11, check_hlds__try_expand__Then_12, check_hlds__try_expand__MaybeElse_13);
                                                    }
#line 677 "try_expand.m"
                                                    if (check_hlds__try_expand__succeeded)
#line 677 "try_expand.m"
                                                      {
#line 690 "try_expand.m"
                                                        {
#line 690 "try_expand.m"
                                                          check_hlds__try_expand__V_38_38 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
                                                        }
#line 690 "try_expand.m"
                                                        {
#line 690 "try_expand.m"
                                                          check_hlds__try_expand__lookup_case_goal_3_p_0(check_hlds__try_expand__Cases_26, check_hlds__try_expand__V_38_38, check_hlds__try_expand__ExcpHandling_14);
                                                        }
#line 690 "try_expand.m"
                                                        check_hlds__try_expand__succeeded = MR_TRUE;
#line 677 "try_expand.m"
                                                      }
#line 677 "try_expand.m"
                                                  }
#line 677 "try_expand.m"
                                              }
#line 684 "try_expand.m"
                                          }
#line 677 "try_expand.m"
                                      }
#line 677 "try_expand.m"
                                  }
#line 683 "try_expand.m"
                              }
#line 683 "try_expand.m"
                          }
#line 677 "try_expand.m"
                      }
#line 680 "try_expand.m"
                  }
#line 679 "try_expand.m"
              }
#line 677 "try_expand.m"
          }
#line 678 "try_expand.m"
      }
#line 677 "try_expand.m"
    return check_hlds__try_expand__succeeded;
#line 677 "try_expand.m"
  }
#line 672 "try_expand.m"
}

#line 639 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__extract_intermediate_goal_parts_7_p_0(
#line 639 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_8,
#line 639 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_9,
#line 639 "try_expand.m"
  MR_Word check_hlds__try_expand__IntermediateGoal_10,
#line 639 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_11,
#line 639 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_12,
#line 639 "try_expand.m"
  MR_Word * check_hlds__try_expand__MaybeElse_13,
#line 639 "try_expand.m"
  MR_Word * check_hlds__try_expand__ExcpHandling_14)
#line 639 "try_expand.m"
{
#line 654 "try_expand.m"
  {
#line 654 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 654 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalPrime_15;
#line 654 "try_expand.m"
    MR_Word check_hlds__try_expand__ThenPrime_16;
#line 654 "try_expand.m"
    MR_Word check_hlds__try_expand__MaybeElsePrime_17;
#line 654 "try_expand.m"
    MR_Word check_hlds__try_expand__ExcpHandlingPrime_18;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeInfo_41_63;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeInfo_42_64;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__Conjuncts_37;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__MagicCall_39;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__Switch_41;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__Cases_48;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__SucceededGoal_49;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 0)));
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__V_51_51;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__V_52_52;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__V_53_53;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__V_54_54;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__V_55_55;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__V_56_56;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__V_57_57;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__V_58_58;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__V_59_59;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__V_60_60;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__V_61_61;
#line 677 "try_expand.m"
    MR_Word check_hlds__try_expand__V_62_62;
#line 678 "try_expand.m"
    MR_Word check_hlds__try_expand__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 1)));
#line 680 "try_expand.m"
    MR_Word check_hlds__try_expand__V_40_40;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_42_42;
#line 683 "try_expand.m"
    MR_Word check_hlds__try_expand__V_43_43;
#line 683 "try_expand.m"
    MR_Integer check_hlds__try_expand__V_44_44;
#line 683 "try_expand.m"
    MR_Word check_hlds__try_expand__V_45_45;
#line 683 "try_expand.m"
    MR_Word check_hlds__try_expand__V_46_46;
#line 683 "try_expand.m"
    MR_Word check_hlds__try_expand__V_47_47;

#line 678 "try_expand.m"
    check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_50_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_50_50, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 678 "try_expand.m"
    if (check_hlds__try_expand__succeeded)
#line 678 "try_expand.m"
      {
#line 678 "try_expand.m"
        check_hlds__try_expand__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_50_50, (MR_Integer) 1)));
#line 678 "try_expand.m"
        check_hlds__try_expand__Conjuncts_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_50_50, (MR_Integer) 2)));
#line 678 "try_expand.m"
        check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_51_51 == (MR_Integer) 0);
#line 677 "try_expand.m"
        if (check_hlds__try_expand__succeeded)
#line 677 "try_expand.m"
          {
#line 679 "try_expand.m"
            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__Conjuncts_37)) == (MR_mktag((MR_Integer) 1)));
#line 679 "try_expand.m"
            if (check_hlds__try_expand__succeeded)
#line 679 "try_expand.m"
              {
#line 679 "try_expand.m"
                check_hlds__try_expand__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts_37, (MR_Integer) 0)));
#line 679 "try_expand.m"
                check_hlds__try_expand__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts_37, (MR_Integer) 1)));
#line 680 "try_expand.m"
                check_hlds__try_expand__MagicCall_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_52_52, (MR_Integer) 0)));
#line 680 "try_expand.m"
                check_hlds__try_expand__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_52_52, (MR_Integer) 1)));
#line 680 "try_expand.m"
                check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_53_53)) == (MR_mktag((MR_Integer) 1)));
#line 680 "try_expand.m"
                if (check_hlds__try_expand__succeeded)
#line 680 "try_expand.m"
                  {
#line 680 "try_expand.m"
                    check_hlds__try_expand__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_53_53, (MR_Integer) 0)));
#line 680 "try_expand.m"
                    check_hlds__try_expand__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_53_53, (MR_Integer) 1)));
#line 682 "try_expand.m"
                    check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 677 "try_expand.m"
                    if (check_hlds__try_expand__succeeded)
#line 677 "try_expand.m"
                      {
#line 682 "try_expand.m"
                        check_hlds__try_expand__Switch_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_54_54, (MR_Integer) 0)));
#line 682 "try_expand.m"
                        check_hlds__try_expand__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_54_54, (MR_Integer) 1)));
#line 683 "try_expand.m"
                        check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__MagicCall_39)) == (MR_mktag((MR_Integer) 2)));
#line 683 "try_expand.m"
                        if (check_hlds__try_expand__succeeded)
#line 683 "try_expand.m"
                          {
#line 683 "try_expand.m"
                            check_hlds__try_expand__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 0)));
#line 683 "try_expand.m"
                            check_hlds__try_expand__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 1)));
#line 683 "try_expand.m"
                            check_hlds__try_expand__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 2)));
#line 683 "try_expand.m"
                            check_hlds__try_expand__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 3)));
#line 683 "try_expand.m"
                            check_hlds__try_expand__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 4)));
#line 683 "try_expand.m"
                            check_hlds__try_expand__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 5)));
#line 683 "try_expand.m"
                            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_56_56)) == (MR_mktag((MR_Integer) 1)));
#line 683 "try_expand.m"
                            if (check_hlds__try_expand__succeeded)
#line 683 "try_expand.m"
                              {
#line 683 "try_expand.m"
                                check_hlds__try_expand__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_56_56, (MR_Integer) 0)));
#line 683 "try_expand.m"
                                check_hlds__try_expand__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_56_56, (MR_Integer) 1)));
#line 3193 "check_hlds.try_expand.c"
                                check_hlds__try_expand__TypeInfo_41_63 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
#line 683 "try_expand.m"
                                {
#line 683 "try_expand.m"
                                  check_hlds__try_expand__succeeded = mercury__builtin__unify_2_p_0(check_hlds__try_expand__TypeInfo_41_63, ((MR_Box) (check_hlds__try_expand__ResultVar_9)), ((MR_Box) (check_hlds__try_expand__V_61_61)));
                                }
#line 677 "try_expand.m"
                                if (check_hlds__try_expand__succeeded)
#line 677 "try_expand.m"
                                  {
#line 683 "try_expand.m"
                                    check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 677 "try_expand.m"
                                    if (check_hlds__try_expand__succeeded)
#line 677 "try_expand.m"
                                      {
#line 684 "try_expand.m"
                                        check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__Switch_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_41, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 684 "try_expand.m"
                                        if (check_hlds__try_expand__succeeded)
#line 684 "try_expand.m"
                                          {
#line 684 "try_expand.m"
                                            check_hlds__try_expand__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_41, (MR_Integer) 1)));
#line 684 "try_expand.m"
                                            check_hlds__try_expand__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_41, (MR_Integer) 2)));
#line 684 "try_expand.m"
                                            check_hlds__try_expand__Cases_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_41, (MR_Integer) 3)));
#line 3222 "check_hlds.try_expand.c"
                                            check_hlds__try_expand__TypeInfo_42_64 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
#line 684 "try_expand.m"
                                            {
#line 684 "try_expand.m"
                                              check_hlds__try_expand__succeeded = mercury__builtin__unify_2_p_0(check_hlds__try_expand__TypeInfo_42_64, ((MR_Box) (check_hlds__try_expand__ResultVar_9)), ((MR_Box) (check_hlds__try_expand__V_62_62)));
                                            }
#line 677 "try_expand.m"
                                            if (check_hlds__try_expand__succeeded)
#line 677 "try_expand.m"
                                              {
#line 684 "try_expand.m"
                                                check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_58_58 == (MR_Integer) 1);
#line 677 "try_expand.m"
                                                if (check_hlds__try_expand__succeeded)
#line 677 "try_expand.m"
                                                  {
#line 686 "try_expand.m"
                                                    {
#line 686 "try_expand.m"
                                                      check_hlds__try_expand__V_59_59 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
                                                    }
#line 686 "try_expand.m"
                                                    {
#line 686 "try_expand.m"
                                                      check_hlds__try_expand__lookup_case_goal_3_p_0(check_hlds__try_expand__Cases_48, check_hlds__try_expand__V_59_59, &check_hlds__try_expand__SucceededGoal_49);
                                                    }
#line 687 "try_expand.m"
                                                    {
#line 687 "try_expand.m"
                                                      check_hlds__try_expand__succeeded = check_hlds__try_expand__extract_from_succeeded_goal_5_p_0(check_hlds__try_expand__ModuleInfo_8, check_hlds__try_expand__SucceededGoal_49, &check_hlds__try_expand__GoalPrime_15, &check_hlds__try_expand__ThenPrime_16, &check_hlds__try_expand__MaybeElsePrime_17);
                                                    }
#line 677 "try_expand.m"
                                                    if (check_hlds__try_expand__succeeded)
#line 677 "try_expand.m"
                                                      {
#line 690 "try_expand.m"
                                                        {
#line 690 "try_expand.m"
                                                          check_hlds__try_expand__V_60_60 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
                                                        }
#line 690 "try_expand.m"
                                                        {
#line 690 "try_expand.m"
                                                          check_hlds__try_expand__lookup_case_goal_3_p_0(check_hlds__try_expand__Cases_48, check_hlds__try_expand__V_60_60, &check_hlds__try_expand__ExcpHandlingPrime_18);
                                                        }
#line 690 "try_expand.m"
                                                        check_hlds__try_expand__succeeded = MR_TRUE;
#line 677 "try_expand.m"
                                                      }
#line 677 "try_expand.m"
                                                  }
#line 677 "try_expand.m"
                                              }
#line 684 "try_expand.m"
                                          }
#line 677 "try_expand.m"
                                      }
#line 677 "try_expand.m"
                                  }
#line 683 "try_expand.m"
                              }
#line 683 "try_expand.m"
                          }
#line 677 "try_expand.m"
                      }
#line 680 "try_expand.m"
                  }
#line 679 "try_expand.m"
              }
#line 677 "try_expand.m"
          }
#line 678 "try_expand.m"
      }
#line 654 "try_expand.m"
    if (check_hlds__try_expand__succeeded)
#line 650 "try_expand.m"
      {
#line 650 "try_expand.m"
        *check_hlds__try_expand__Goal_11 = check_hlds__try_expand__GoalPrime_15;
#line 651 "try_expand.m"
        *check_hlds__try_expand__Then_12 = check_hlds__try_expand__ThenPrime_16;
#line 652 "try_expand.m"
        *check_hlds__try_expand__MaybeElse_13 = check_hlds__try_expand__MaybeElsePrime_17;
#line 653 "try_expand.m"
        *check_hlds__try_expand__ExcpHandling_14 = check_hlds__try_expand__ExcpHandlingPrime_18;
#line 650 "try_expand.m"
      }
#line 654 "try_expand.m"
    else
#line 668 "try_expand.m"
      {
#line 668 "try_expand.m"
        MR_Word check_hlds__try_expand__GoalPrime_26;
#line 668 "try_expand.m"
        MR_Word check_hlds__try_expand__ThenPrime_27;
#line 668 "try_expand.m"
        MR_Word check_hlds__try_expand__MaybeElsePrime_28;
#line 668 "try_expand.m"
        MR_Word check_hlds__try_expand__ExcpHandlingPrime_29;
#line 659 "try_expand.m"
        MR_Word check_hlds__try_expand__ScopedGoal_20;
#line 659 "try_expand.m"
        MR_Word check_hlds__try_expand__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 0)));
#line 659 "try_expand.m"
        MR_Word check_hlds__try_expand__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 1)));
#line 659 "try_expand.m"
        MR_Word check_hlds__try_expand__V_19_19;

#line 659 "try_expand.m"
        check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_22_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_22_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 659 "try_expand.m"
        if (check_hlds__try_expand__succeeded)
#line 659 "try_expand.m"
          {
#line 659 "try_expand.m"
            check_hlds__try_expand__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_22_22, (MR_Integer) 1)));
#line 659 "try_expand.m"
            check_hlds__try_expand__ScopedGoal_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_22_22, (MR_Integer) 2)));
#line 660 "try_expand.m"
            {
#line 660 "try_expand.m"
              check_hlds__try_expand__succeeded = check_hlds__try_expand__extract_intermediate_goal_parts_2_7_p_0(check_hlds__try_expand__ModuleInfo_8, check_hlds__try_expand__ResultVar_9, check_hlds__try_expand__ScopedGoal_20, &check_hlds__try_expand__GoalPrime_26, &check_hlds__try_expand__ThenPrime_27, &check_hlds__try_expand__MaybeElsePrime_28, &check_hlds__try_expand__ExcpHandlingPrime_29);
            }
#line 659 "try_expand.m"
          }
#line 668 "try_expand.m"
        if (check_hlds__try_expand__succeeded)
#line 664 "try_expand.m"
          {
#line 664 "try_expand.m"
            *check_hlds__try_expand__Goal_11 = check_hlds__try_expand__GoalPrime_26;
#line 665 "try_expand.m"
            *check_hlds__try_expand__Then_12 = check_hlds__try_expand__ThenPrime_27;
#line 666 "try_expand.m"
            *check_hlds__try_expand__MaybeElse_13 = check_hlds__try_expand__MaybeElsePrime_28;
#line 667 "try_expand.m"
            *check_hlds__try_expand__ExcpHandling_14 = check_hlds__try_expand__ExcpHandlingPrime_29;
#line 664 "try_expand.m"
          }
#line 668 "try_expand.m"
        else
#line 669 "try_expand.m"
          {
#line 669 "try_expand.m"
            {
#line 669 "try_expand.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.extract_intermediate_goal_parts\'/7", (MR_String) "unexpected goal form");
#line 669 "try_expand.m"
              return;
            }
#line 669 "try_expand.m"
          }
#line 668 "try_expand.m"
      }
#line 654 "try_expand.m"
  }
#line 639 "try_expand.m"
}

#line 524 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goal_2_15_p_0(
#line 524 "try_expand.m"
  MR_Word check_hlds__try_expand__MaybeIO_16,
#line 524 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_17,
#line 524 "try_expand.m"
  MR_Word check_hlds__try_expand__Goal1_18,
#line 524 "try_expand.m"
  MR_Word check_hlds__try_expand__Then1_19,
#line 524 "try_expand.m"
  MR_Word check_hlds__try_expand__MaybeElse1_20,
#line 524 "try_expand.m"
  MR_Word check_hlds__try_expand__ExcpHandling1_21,
#line 524 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap_22,
#line 524 "try_expand.m"
  MR_Word check_hlds__try_expand__GoalOutputVarsSet_23,
#line 524 "try_expand.m"
  MR_Word * check_hlds__try_expand__FinalGoal_24,
#line 524 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_62,
#line 524 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_PredInfo_63,
#line 524 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_64,
#line 524 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_65,
#line 524 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_66,
#line 524 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_67)
#line 524 "try_expand.m"
{
#line 532 "try_expand.m"
  {
#line 532 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalOutputVars_29;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalOutputVarTypes_30;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__OutputTupleType_31;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__RealResultVarType_32;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaVar_33;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__AssignLambdaVar_34;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalInfo1_36;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalPurity_37;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalContext_38;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__CallTryGoal_42;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__Then_44;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__ExcpHandling_46;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalInfo_47;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__TmpTupleVar_48;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__TupleVar_49;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__DeconstructSucceeded_50;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__TupleArgInsts_51;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__CastOutputTuple_52;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__DeconstructOutputs_53;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__DeconstructsThen_54;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__SucceededCase_55;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__ExceptionCase_56;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__MaybeFailedCase_59;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__Cases_60;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__ResultSwitch_61;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_VarTypes_68_68;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__V_70_70;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__V_71_71;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__V_73_73;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_VarTypes_76_76;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_77_77;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_78_78;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_92_92;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_105_105;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__V_110_110;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__V_111_111;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__V_113_113;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__V_114_114;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__V_115_115;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__V_116_116;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__V_118_118;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__V_120_120;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__V_125_125;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__V_126_126;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__V_128_128;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__V_129_129;
#line 532 "try_expand.m"
    MR_Word check_hlds__try_expand__V_130_130;
#line 552 "try_expand.m"
    MR_Word check_hlds__try_expand__V_35_35;

#line 535 "try_expand.m"
    {
#line 535 "try_expand.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_64, &check_hlds__try_expand__STATE_VARIABLE_VarTypes_68_68);
    }
#line 536 "try_expand.m"
    {
#line 536 "try_expand.m"
      check_hlds__try_expand__GoalOutputVars_29 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__try_expand__GoalOutputVarsSet_23);
    }
#line 537 "try_expand.m"
    {
#line 537 "try_expand.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__try_expand__STATE_VARIABLE_VarTypes_68_68, check_hlds__try_expand__GoalOutputVars_29, &check_hlds__try_expand__GoalOutputVarTypes_30);
    }
#line 538 "try_expand.m"
    {
#line 538 "try_expand.m"
      check_hlds__try_expand__OutputTupleType_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 538 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__OutputTupleType_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 538 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__OutputTupleType_31, 1) = ((MR_Box) (check_hlds__try_expand__GoalOutputVarTypes_30));
#line 538 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__OutputTupleType_31, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 538 "try_expand.m"
    }
#line 543 "try_expand.m"
    {
#line 543 "try_expand.m"
      check_hlds__try_expand__V_71_71 = mdbcomp__prim_data__mercury_exception_module_0_f_0();
    }
#line 542 "try_expand.m"
    {
#line 542 "try_expand.m"
      check_hlds__try_expand__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_70_70, 0) = ((MR_Box) (check_hlds__try_expand__V_71_71));
#line 542 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_70_70, 1) = ((MR_Box) ((MR_String) "exception_result"));
#line 542 "try_expand.m"
    }
#line 542 "try_expand.m"
    {
#line 542 "try_expand.m"
      check_hlds__try_expand__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_73_73, 0) = ((MR_Box) (check_hlds__try_expand__OutputTupleType_31));
#line 542 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 542 "try_expand.m"
    }
#line 542 "try_expand.m"
    {
#line 542 "try_expand.m"
      check_hlds__try_expand__RealResultVarType_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 542 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__RealResultVarType_32, 0) = ((MR_Box) (check_hlds__try_expand__V_70_70));
#line 542 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__RealResultVarType_32, 1) = ((MR_Box) (check_hlds__try_expand__V_73_73));
#line 542 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__RealResultVarType_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 542 "try_expand.m"
    }
#line 545 "try_expand.m"
    {
#line 545 "try_expand.m"
      parse_tree__prog_data__update_var_type_4_p_0(check_hlds__try_expand__ResultVar_17, check_hlds__try_expand__RealResultVarType_32, check_hlds__try_expand__STATE_VARIABLE_VarTypes_68_68, &check_hlds__try_expand__STATE_VARIABLE_VarTypes_76_76);
    }
#line 546 "try_expand.m"
    {
#line 546 "try_expand.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__try_expand__STATE_VARIABLE_VarTypes_76_76, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_64, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_77_77);
    }
#line 549 "try_expand.m"
    {
#line 549 "try_expand.m"
      check_hlds__try_expand__make_try_lambda_8_p_0(check_hlds__try_expand__Goal1_18, check_hlds__try_expand__GoalOutputVarsSet_23, check_hlds__try_expand__OutputTupleType_31, check_hlds__try_expand__MaybeIO_16, &check_hlds__try_expand__LambdaVar_33, &check_hlds__try_expand__AssignLambdaVar_34, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_77_77, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_78_78);
    }
#line 552 "try_expand.m"
    check_hlds__try_expand__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal1_18, (MR_Integer) 0)));
#line 552 "try_expand.m"
    check_hlds__try_expand__GoalInfo1_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal1_18, (MR_Integer) 1)));
#line 553 "try_expand.m"
    {
#line 553 "try_expand.m"
      check_hlds__try_expand__GoalPurity_37 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__try_expand__GoalInfo1_36);
    }
#line 554 "try_expand.m"
    {
#line 554 "try_expand.m"
      check_hlds__try_expand__GoalContext_38 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__try_expand__GoalInfo1_36);
    }
#line 593 "try_expand.m"
    if ((check_hlds__try_expand__MaybeIO_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 594 "try_expand.m"
      {
#line 595 "try_expand.m"
        {
#line 595 "try_expand.m"
          check_hlds__try_expand__make_try_call_14_p_0((MR_String) "try", check_hlds__try_expand__LambdaVar_33, check_hlds__try_expand__ResultVar_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__OutputTupleType_31, check_hlds__try_expand__GoalPurity_37, check_hlds__try_expand__GoalContext_38, &check_hlds__try_expand__CallTryGoal_42, check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_62, check_hlds__try_expand__STATE_VARIABLE_PredInfo_63, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_78_78, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_92_92, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_66, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_67);
        }
#line 598 "try_expand.m"
        check_hlds__try_expand__Then_44 = check_hlds__try_expand__Then1_19;
#line 599 "try_expand.m"
        check_hlds__try_expand__ExcpHandling_46 = check_hlds__try_expand__ExcpHandling1_21;
#line 594 "try_expand.m"
      }
#line 593 "try_expand.m"
    else
#line 557 "try_expand.m"
      {
#line 557 "try_expand.m"
        MR_Word check_hlds__try_expand__TypeInfo_133_133;
#line 557 "try_expand.m"
        MR_Word check_hlds__try_expand__GoalInitialIOVar_39;
#line 557 "try_expand.m"
        MR_Word check_hlds__try_expand__GoalFinalIOVar_40;
#line 557 "try_expand.m"
        MR_Word check_hlds__try_expand__TryIOOutputVar_41;
#line 557 "try_expand.m"
        MR_Word check_hlds__try_expand__UnifyThenInitialIOVar_43;
#line 557 "try_expand.m"
        MR_Word check_hlds__try_expand__RenamingExcp_45;
#line 557 "try_expand.m"
        MR_Word check_hlds__try_expand__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeIO_16, (MR_Integer) 0)));
#line 557 "try_expand.m"
        MR_Word check_hlds__try_expand__V_85_85;
#line 557 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_87_87;
#line 557 "try_expand.m"
        MR_Word check_hlds__try_expand__V_90_90;
#line 557 "try_expand.m"
        MR_Word check_hlds__try_expand__V_94_94;
#line 557 "try_expand.m"
        MR_Word check_hlds__try_expand__V_96_96;
#line 557 "try_expand.m"
        MR_Word check_hlds__try_expand__V_97_97;
#line 557 "try_expand.m"
        MR_Word check_hlds__try_expand__V_101_101;
#line 557 "try_expand.m"
        MR_Word check_hlds__try_expand__V_102_102;

#line 557 "try_expand.m"
        check_hlds__try_expand__GoalInitialIOVar_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_84_84, (MR_Integer) 0)));
#line 557 "try_expand.m"
        check_hlds__try_expand__GoalFinalIOVar_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_84_84, (MR_Integer) 1)));
#line 579 "try_expand.m"
        {
#line 579 "try_expand.m"
          check_hlds__try_expand__V_85_85 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
        }
#line 579 "try_expand.m"
        {
#line 579 "try_expand.m"
          hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(check_hlds__try_expand__V_85_85, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[0]), &check_hlds__try_expand__TryIOOutputVar_41, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_78_78, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_87_87);
        }
#line 582 "try_expand.m"
        {
#line 582 "try_expand.m"
          check_hlds__try_expand__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_94_94, 0) = ((MR_Box) (check_hlds__try_expand__TryIOOutputVar_41));
#line 582 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 582 "try_expand.m"
        }
#line 581 "try_expand.m"
        {
#line 581 "try_expand.m"
          check_hlds__try_expand__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 581 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_90_90, 0) = ((MR_Box) (check_hlds__try_expand__GoalInitialIOVar_39));
#line 581 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_90_90, 1) = ((MR_Box) (check_hlds__try_expand__V_94_94));
#line 581 "try_expand.m"
        }
#line 581 "try_expand.m"
        {
#line 581 "try_expand.m"
          check_hlds__try_expand__make_try_call_14_p_0((MR_String) "try_io", check_hlds__try_expand__LambdaVar_33, check_hlds__try_expand__ResultVar_17, check_hlds__try_expand__V_90_90, check_hlds__try_expand__OutputTupleType_31, check_hlds__try_expand__GoalPurity_37, check_hlds__try_expand__GoalContext_38, &check_hlds__try_expand__CallTryGoal_42, check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_62, check_hlds__try_expand__STATE_VARIABLE_PredInfo_63, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_87_87, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_92_92, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_66, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_67);
        }
#line 585 "try_expand.m"
        {
#line 585 "try_expand.m"
          check_hlds__try_expand__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 585 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_96_96, 0) = ((MR_Box) (check_hlds__try_expand__TryIOOutputVar_41));
#line 585 "try_expand.m"
        }
#line 585 "try_expand.m"
        {
#line 585 "try_expand.m"
          check_hlds__try_expand__V_97_97 = mercury__term__context_init_0_f_0();
        }
#line 585 "try_expand.m"
        {
#line 585 "try_expand.m"
          hlds__hlds_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__try_expand__GoalFinalIOVar_40, check_hlds__try_expand__V_96_96, check_hlds__try_expand__V_97_97, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__try_expand_scalar_common_6[1]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__try_expand__UnifyThenInitialIOVar_43);
        }
#line 588 "try_expand.m"
        {
#line 588 "try_expand.m"
          hlds__hlds_goal__conjoin_goals_3_p_0(check_hlds__try_expand__UnifyThenInitialIOVar_43, check_hlds__try_expand__Then1_19, &check_hlds__try_expand__Then_44);
        }
#line 3723 "check_hlds.try_expand.c"
        check_hlds__try_expand__TypeInfo_133_133 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
#line 591 "try_expand.m"
        {
#line 591 "try_expand.m"
          check_hlds__try_expand__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 591 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_102_102, 0) = ((MR_Box) (check_hlds__try_expand__GoalInitialIOVar_39));
#line 591 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_102_102, 1) = ((MR_Box) (check_hlds__try_expand__TryIOOutputVar_41));
#line 591 "try_expand.m"
        }
#line 591 "try_expand.m"
        {
#line 591 "try_expand.m"
          check_hlds__try_expand__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 591 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_101_101, 0) = ((MR_Box) (check_hlds__try_expand__V_102_102));
#line 591 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 591 "try_expand.m"
        }
#line 590 "try_expand.m"
        {
#line 590 "try_expand.m"
          check_hlds__try_expand__RenamingExcp_45 = mercury__map__from_assoc_list_1_f_0(check_hlds__try_expand__TypeInfo_133_133, check_hlds__try_expand__TypeInfo_133_133, check_hlds__try_expand__V_101_101);
        }
#line 592 "try_expand.m"
        {
#line 592 "try_expand.m"
          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(check_hlds__try_expand__RenamingExcp_45, check_hlds__try_expand__ExcpHandling1_21, &check_hlds__try_expand__ExcpHandling_46);
        }
#line 557 "try_expand.m"
      }
#line 602 "try_expand.m"
    {
#line 602 "try_expand.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__try_expand__GoalInfo_47);
    }
#line 605 "try_expand.m"
    {
#line 605 "try_expand.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(check_hlds__try_expand__OutputTupleType_31, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[2]), &check_hlds__try_expand__TmpTupleVar_48, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_92_92, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_105_105);
    }
#line 607 "try_expand.m"
    {
#line 607 "try_expand.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(check_hlds__try_expand__OutputTupleType_31, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[3]), &check_hlds__try_expand__TupleVar_49, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_105_105, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_65);
    }
#line 609 "try_expand.m"
    {
#line 609 "try_expand.m"
      check_hlds__try_expand__V_110_110 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
    }
#line 609 "try_expand.m"
    {
#line 609 "try_expand.m"
      check_hlds__try_expand__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 609 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_111_111, 0) = ((MR_Box) (check_hlds__try_expand__TmpTupleVar_48));
#line 609 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 609 "try_expand.m"
    }
#line 609 "try_expand.m"
    {
#line 609 "try_expand.m"
      hlds__hlds_goal__deconstruct_functor_4_p_0(check_hlds__try_expand__ResultVar_17, check_hlds__try_expand__V_110_110, check_hlds__try_expand__V_111_111, &check_hlds__try_expand__DeconstructSucceeded_50);
    }
#line 611 "try_expand.m"
    {
#line 611 "try_expand.m"
      hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__try_expand__Instmap_22, check_hlds__try_expand__GoalOutputVars_29, &check_hlds__try_expand__TupleArgInsts_51);
    }
#line 612 "try_expand.m"
    {
#line 612 "try_expand.m"
      check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0(check_hlds__try_expand__TmpTupleVar_48, check_hlds__try_expand__TupleVar_49, check_hlds__try_expand__TupleArgInsts_51, &check_hlds__try_expand__CastOutputTuple_52);
    }
#line 614 "try_expand.m"
    {
#line 614 "try_expand.m"
      hlds__hlds_goal__deconstruct_tuple_3_p_0(check_hlds__try_expand__TupleVar_49, check_hlds__try_expand__GoalOutputVars_29, &check_hlds__try_expand__DeconstructOutputs_53);
    }
#line 616 "try_expand.m"
    {
#line 616 "try_expand.m"
      check_hlds__try_expand__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_116_116, 0) = ((MR_Box) (check_hlds__try_expand__Then_44));
#line 616 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 616 "try_expand.m"
    }
#line 615 "try_expand.m"
    {
#line 615 "try_expand.m"
      check_hlds__try_expand__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 615 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_115_115, 0) = ((MR_Box) (check_hlds__try_expand__DeconstructOutputs_53));
#line 615 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_115_115, 1) = ((MR_Box) (check_hlds__try_expand__V_116_116));
#line 615 "try_expand.m"
    }
#line 615 "try_expand.m"
    {
#line 615 "try_expand.m"
      check_hlds__try_expand__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 615 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_114_114, 0) = ((MR_Box) (check_hlds__try_expand__CastOutputTuple_52));
#line 615 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_114_114, 1) = ((MR_Box) (check_hlds__try_expand__V_115_115));
#line 615 "try_expand.m"
    }
#line 615 "try_expand.m"
    {
#line 615 "try_expand.m"
      check_hlds__try_expand__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 615 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_113_113, 0) = ((MR_Box) (check_hlds__try_expand__DeconstructSucceeded_50));
#line 615 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_113_113, 1) = ((MR_Box) (check_hlds__try_expand__V_114_114));
#line 615 "try_expand.m"
    }
#line 615 "try_expand.m"
    {
#line 615 "try_expand.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__try_expand__V_113_113, check_hlds__try_expand__GoalInfo_47, &check_hlds__try_expand__DeconstructsThen_54);
    }
#line 617 "try_expand.m"
    {
#line 617 "try_expand.m"
      check_hlds__try_expand__V_118_118 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
    }
#line 617 "try_expand.m"
    {
#line 617 "try_expand.m"
      check_hlds__try_expand__SucceededCase_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 617 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__SucceededCase_55, 0) = ((MR_Box) (check_hlds__try_expand__V_118_118));
#line 617 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__SucceededCase_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 617 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__SucceededCase_55, 2) = ((MR_Box) (check_hlds__try_expand__DeconstructsThen_54));
#line 617 "try_expand.m"
    }
#line 620 "try_expand.m"
    {
#line 620 "try_expand.m"
      check_hlds__try_expand__V_120_120 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
    }
#line 620 "try_expand.m"
    {
#line 620 "try_expand.m"
      check_hlds__try_expand__ExceptionCase_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 620 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__ExceptionCase_56, 0) = ((MR_Box) (check_hlds__try_expand__V_120_120));
#line 620 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__ExceptionCase_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 620 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__ExceptionCase_56, 2) = ((MR_Box) (check_hlds__try_expand__ExcpHandling_46));
#line 620 "try_expand.m"
    }
#line 627 "try_expand.m"
    if ((check_hlds__try_expand__MaybeElse1_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 629 "try_expand.m"
      check_hlds__try_expand__MaybeFailedCase_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 627 "try_expand.m"
    else
#line 624 "try_expand.m"
      {
#line 624 "try_expand.m"
        MR_Word check_hlds__try_expand__Else1_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeElse1_20, (MR_Integer) 0)));
#line 624 "try_expand.m"
        MR_Word check_hlds__try_expand__FailedCase_58;
#line 624 "try_expand.m"
        MR_Word check_hlds__try_expand__V_122_122;

#line 625 "try_expand.m"
        {
#line 625 "try_expand.m"
          check_hlds__try_expand__V_122_122 = parse_tree__builtin_lib_types__exception_failed_functor_0_f_0();
        }
#line 625 "try_expand.m"
        {
#line 625 "try_expand.m"
          check_hlds__try_expand__FailedCase_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 625 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__FailedCase_58, 0) = ((MR_Box) (check_hlds__try_expand__V_122_122));
#line 625 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__FailedCase_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 625 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__FailedCase_58, 2) = ((MR_Box) (check_hlds__try_expand__Else1_57));
#line 625 "try_expand.m"
        }
#line 626 "try_expand.m"
        {
#line 626 "try_expand.m"
          check_hlds__try_expand__MaybeFailedCase_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 626 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeFailedCase_59, 0) = ((MR_Box) (check_hlds__try_expand__FailedCase_58));
#line 626 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeFailedCase_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 626 "try_expand.m"
        }
#line 624 "try_expand.m"
      }
#line 632 "try_expand.m"
    {
#line 632 "try_expand.m"
      check_hlds__try_expand__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 632 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_125_125, 0) = ((MR_Box) (check_hlds__try_expand__ExceptionCase_56));
#line 632 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_125_125, 1) = ((MR_Box) (check_hlds__try_expand__MaybeFailedCase_59));
#line 632 "try_expand.m"
    }
#line 632 "try_expand.m"
    {
#line 632 "try_expand.m"
      check_hlds__try_expand__Cases_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 632 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__Cases_60, 0) = ((MR_Box) (check_hlds__try_expand__SucceededCase_55));
#line 632 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__Cases_60, 1) = ((MR_Box) (check_hlds__try_expand__V_125_125));
#line 632 "try_expand.m"
    }
#line 633 "try_expand.m"
    {
#line 633 "try_expand.m"
      check_hlds__try_expand__V_126_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 633 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_126_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 633 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_126_126, 1) = ((MR_Box) (check_hlds__try_expand__ResultVar_17));
#line 633 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_126_126, 2) = ((MR_Box) ((MR_Integer) 1));
#line 633 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_126_126, 3) = ((MR_Box) (check_hlds__try_expand__Cases_60));
#line 633 "try_expand.m"
    }
#line 633 "try_expand.m"
    {
#line 633 "try_expand.m"
      check_hlds__try_expand__ResultSwitch_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 633 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__ResultSwitch_61, 0) = ((MR_Box) (check_hlds__try_expand__V_126_126));
#line 633 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__ResultSwitch_61, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo_47));
#line 633 "try_expand.m"
    }
#line 634 "try_expand.m"
    {
#line 634 "try_expand.m"
      check_hlds__try_expand__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 634 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_130_130, 0) = ((MR_Box) (check_hlds__try_expand__ResultSwitch_61));
#line 634 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 634 "try_expand.m"
    }
#line 634 "try_expand.m"
    {
#line 634 "try_expand.m"
      check_hlds__try_expand__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 634 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_129_129, 0) = ((MR_Box) (check_hlds__try_expand__CallTryGoal_42));
#line 634 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_129_129, 1) = ((MR_Box) (check_hlds__try_expand__V_130_130));
#line 634 "try_expand.m"
    }
#line 634 "try_expand.m"
    {
#line 634 "try_expand.m"
      check_hlds__try_expand__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 634 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_128_128, 0) = ((MR_Box) (check_hlds__try_expand__AssignLambdaVar_34));
#line 634 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_128_128, 1) = ((MR_Box) (check_hlds__try_expand__V_129_129));
#line 634 "try_expand.m"
    }
#line 634 "try_expand.m"
    {
#line 634 "try_expand.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__try_expand__V_128_128, check_hlds__try_expand__GoalInfo_47, check_hlds__try_expand__FinalGoal_24);
#line 634 "try_expand.m"
      return;
    }
#line 532 "try_expand.m"
  }
#line 524 "try_expand.m"
}

#line 798 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand__expand_try_goal_5_p_0_1(
#line 798 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 798 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1)
#line 798 "try_expand.m"
{
#line 798 "try_expand.m"
  {
#line 798 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 798 "try_expand.m"
    MR_Box check_hlds__try_expand__closure = check_hlds__try_expand__closure_arg;

#line 798 "try_expand.m"
    {
#line 798 "try_expand.m"
      return check_hlds__try_expand__succeeded = hlds__instmap__var_is_bound_in_instmap_delta_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__try_expand__wrapper_arg_1));
    }
#line 798 "try_expand.m"
    return check_hlds__try_expand__succeeded;
#line 798 "try_expand.m"
  }
#line 798 "try_expand.m"
}

#line 481 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goal_5_p_0(
#line 481 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap_6,
#line 481 "try_expand.m"
  MR_Word check_hlds__try_expand__TryGoal_7,
#line 481 "try_expand.m"
  MR_Word * check_hlds__try_expand__FinalGoal_8,
#line 481 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_33,
#line 481 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_34)
#line 481 "try_expand.m"
{
#line 484 "try_expand.m"
  {
#line 484 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__MaybeIO_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__TryGoal_7, (MR_Integer) 0)));
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__ResultVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__TryGoal_7, (MR_Integer) 1)));
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__IntermediateGoal_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__TryGoal_7, (MR_Integer) 2)));
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__Goal0_13;
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__Then0_14;
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__MaybeElse0_15;
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__ExcpHandling0_16;
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__Goal1_17;
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__InstmapAfterGoal_18;
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__Then1_19;
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__MaybeElse1_22;
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__ExcpHandling1_23;
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalOutputVarsSet0_24;
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalOutputVarsSet_27;
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_0_33, (MR_Integer) 0)));
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_36_36;
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_37_37;
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_38_38;
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_39_39;
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__V_40_40;
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_42_42;
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_43_43;
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44;
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_45_45;
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_46_46;
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_47_47;
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalInfo_62;
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__NonLocals_63;
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__InstmapDelta_64;
#line 484 "try_expand.m"
    MR_Word check_hlds__try_expand__V_65_65;
#line 486 "try_expand.m"
    MR_Word check_hlds__try_expand__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_0_33, (MR_Integer) 1)));
#line 486 "try_expand.m"
    MR_Word check_hlds__try_expand__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_0_33, (MR_Integer) 2)));
#line 486 "try_expand.m"
    MR_Word check_hlds__try_expand__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_0_33, (MR_Integer) 3)));
#line 505 "try_expand.m"
    MR_Word check_hlds__try_expand__V_53_53;
#line 505 "try_expand.m"
    MR_Word check_hlds__try_expand__V_54_54;
#line 505 "try_expand.m"
    MR_Word check_hlds__try_expand__V_55_55;
#line 795 "try_expand.m"
    MR_Word check_hlds__try_expand__V_61_61;
#line 517 "try_expand.m"
    MR_Word check_hlds__try_expand__V_32_32;

#line 486 "try_expand.m"
    {
#line 486 "try_expand.m"
      check_hlds__try_expand__extract_intermediate_goal_parts_7_p_0(check_hlds__try_expand__V_35_35, check_hlds__try_expand__ResultVar_11, check_hlds__try_expand__IntermediateGoal_12, &check_hlds__try_expand__Goal0_13, &check_hlds__try_expand__Then0_14, &check_hlds__try_expand__MaybeElse0_15, &check_hlds__try_expand__ExcpHandling0_16);
    }
#line 490 "try_expand.m"
    {
#line 490 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Goal0_13, &check_hlds__try_expand__Goal1_17, check_hlds__try_expand__STATE_VARIABLE_Info_0_33, &check_hlds__try_expand__STATE_VARIABLE_Info_36_36);
    }
#line 491 "try_expand.m"
    {
#line 491 "try_expand.m"
      hlds__goal_util__update_instmap_3_p_0(check_hlds__try_expand__Goal0_13, check_hlds__try_expand__Instmap_6, &check_hlds__try_expand__InstmapAfterGoal_18);
    }
#line 492 "try_expand.m"
    {
#line 492 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__InstmapAfterGoal_18, check_hlds__try_expand__Then0_14, &check_hlds__try_expand__Then1_19, check_hlds__try_expand__STATE_VARIABLE_Info_36_36, &check_hlds__try_expand__STATE_VARIABLE_Info_37_37);
    }
#line 497 "try_expand.m"
    if ((check_hlds__try_expand__MaybeElse0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 498 "try_expand.m"
      {
#line 499 "try_expand.m"
        check_hlds__try_expand__MaybeElse1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 499 "try_expand.m"
        check_hlds__try_expand__STATE_VARIABLE_Info_38_38 = check_hlds__try_expand__STATE_VARIABLE_Info_37_37;
#line 498 "try_expand.m"
      }
#line 497 "try_expand.m"
    else
#line 494 "try_expand.m"
      {
#line 494 "try_expand.m"
        MR_Word check_hlds__try_expand__Else0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeElse0_15, (MR_Integer) 0)));
#line 494 "try_expand.m"
        MR_Word check_hlds__try_expand__Else1_21;

#line 495 "try_expand.m"
        {
#line 495 "try_expand.m"
          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Else0_20, &check_hlds__try_expand__Else1_21, check_hlds__try_expand__STATE_VARIABLE_Info_37_37, &check_hlds__try_expand__STATE_VARIABLE_Info_38_38);
        }
#line 496 "try_expand.m"
        {
#line 496 "try_expand.m"
          check_hlds__try_expand__MaybeElse1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 496 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeElse1_22, 0) = ((MR_Box) (check_hlds__try_expand__Else1_21));
#line 496 "try_expand.m"
        }
#line 494 "try_expand.m"
      }
#line 501 "try_expand.m"
    {
#line 501 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__ExcpHandling0_16, &check_hlds__try_expand__ExcpHandling1_23, check_hlds__try_expand__STATE_VARIABLE_Info_38_38, &check_hlds__try_expand__STATE_VARIABLE_Info_39_39);
    }
#line 505 "try_expand.m"
    check_hlds__try_expand__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
#line 505 "try_expand.m"
    check_hlds__try_expand__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
#line 505 "try_expand.m"
    check_hlds__try_expand__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
#line 505 "try_expand.m"
    check_hlds__try_expand__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
#line 795 "try_expand.m"
    check_hlds__try_expand__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_13, (MR_Integer) 0)));
#line 795 "try_expand.m"
    check_hlds__try_expand__GoalInfo_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_13, (MR_Integer) 1)));
#line 796 "try_expand.m"
    {
#line 796 "try_expand.m"
      check_hlds__try_expand__NonLocals_63 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__try_expand__GoalInfo_62);
    }
#line 797 "try_expand.m"
    {
#line 797 "try_expand.m"
      check_hlds__try_expand__InstmapDelta_64 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__try_expand__GoalInfo_62);
    }
#line 798 "try_expand.m"
    {
#line 798 "try_expand.m"
      check_hlds__try_expand__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 798 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 0) = ((MR_Box) (&check_hlds__try_expand_scalar_common_5[0]));
#line 798 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 1) = ((MR_Box) (check_hlds__try_expand__expand_try_goal_5_p_0_1));
#line 798 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 798 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 3) = ((MR_Box) (check_hlds__try_expand__V_40_40));
#line 798 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 4) = ((MR_Box) (check_hlds__try_expand__Instmap_6));
#line 798 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 5) = ((MR_Box) (check_hlds__try_expand__InstmapDelta_64));
#line 798 "try_expand.m"
    }
#line 798 "try_expand.m"
    {
#line 798 "try_expand.m"
      check_hlds__try_expand__GoalOutputVarsSet0_24 = parse_tree__set_of_var__filter_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__try_expand__V_65_65, check_hlds__try_expand__NonLocals_63);
    }
#line 511 "try_expand.m"
    if ((check_hlds__try_expand__MaybeIO_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "try_expand.m"
      check_hlds__try_expand__GoalOutputVarsSet_27 = check_hlds__try_expand__GoalOutputVarsSet0_24;
#line 511 "try_expand.m"
    else
#line 508 "try_expand.m"
      {
#line 508 "try_expand.m"
        MR_Word check_hlds__try_expand__IOStateVarFinal_26;
#line 508 "try_expand.m"
        MR_Word check_hlds__try_expand__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeIO_10, (MR_Integer) 0)));
#line 508 "try_expand.m"
        MR_Word check_hlds__try_expand___IOStateVarInitial_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_41_41, (MR_Integer) 0)));

#line 508 "try_expand.m"
        check_hlds__try_expand__IOStateVarFinal_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_41_41, (MR_Integer) 1)));
#line 509 "try_expand.m"
        {
#line 509 "try_expand.m"
          parse_tree__set_of_var__delete_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__try_expand__IOStateVarFinal_26, check_hlds__try_expand__GoalOutputVarsSet0_24, &check_hlds__try_expand__GoalOutputVarsSet_27);
        }
#line 508 "try_expand.m"
      }
#line 517 "try_expand.m"
    check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
#line 517 "try_expand.m"
    check_hlds__try_expand__STATE_VARIABLE_PredInfo_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
#line 517 "try_expand.m"
    check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
#line 517 "try_expand.m"
    check_hlds__try_expand__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
#line 518 "try_expand.m"
    {
#line 518 "try_expand.m"
      check_hlds__try_expand__expand_try_goal_2_15_p_0(check_hlds__try_expand__MaybeIO_10, check_hlds__try_expand__ResultVar_11, check_hlds__try_expand__Goal1_17, check_hlds__try_expand__Then1_19, check_hlds__try_expand__MaybeElse1_22, check_hlds__try_expand__ExcpHandling1_23, check_hlds__try_expand__InstmapAfterGoal_18, check_hlds__try_expand__GoalOutputVarsSet_27, check_hlds__try_expand__FinalGoal_8, check_hlds__try_expand__STATE_VARIABLE_PredInfo_43_43, &check_hlds__try_expand__STATE_VARIABLE_PredInfo_45_45, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_46_46, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_42_42, &check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_47_47);
    }
#line 521 "try_expand.m"
    {
#line 521 "try_expand.m"
      MR_Word base;
#line 521 "try_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 521 "try_expand.m"
      *check_hlds__try_expand__STATE_VARIABLE_Info_34 = base;
#line 521 "try_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_47_47));
#line 521 "try_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_PredInfo_45_45));
#line 521 "try_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ProcInfo_46_46));
#line 521 "try_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 1));
#line 521 "try_expand.m"
    }
#line 484 "try_expand.m"
  }
#line 481 "try_expand.m"
}

#line 460 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_if_then_else_9_p_0(
#line 460 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap0_10,
#line 460 "try_expand.m"
  MR_Word check_hlds__try_expand__Cond0_11,
#line 460 "try_expand.m"
  MR_Word * check_hlds__try_expand__Cond_12,
#line 460 "try_expand.m"
  MR_Word check_hlds__try_expand__Then0_13,
#line 460 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_14,
#line 460 "try_expand.m"
  MR_Word check_hlds__try_expand__Else0_15,
#line 460 "try_expand.m"
  MR_Word * check_hlds__try_expand__Else_16,
#line 460 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_22,
#line 460 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_23)
#line 460 "try_expand.m"
{
#line 466 "try_expand.m"
  {
#line 466 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 466 "try_expand.m"
    MR_Word check_hlds__try_expand__CondInfo_19;
#line 466 "try_expand.m"
    MR_Word check_hlds__try_expand__CondInstmapDelta_20;
#line 466 "try_expand.m"
    MR_Word check_hlds__try_expand__InstmapAfterCond_21;
#line 466 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_24_24;
#line 466 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_25_25;
#line 469 "try_expand.m"
    MR_Word check_hlds__try_expand__V_18_18;

#line 467 "try_expand.m"
    {
#line 467 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap0_10, check_hlds__try_expand__Cond0_11, check_hlds__try_expand__Cond_12, check_hlds__try_expand__STATE_VARIABLE_Info_0_22, &check_hlds__try_expand__STATE_VARIABLE_Info_24_24);
    }
#line 469 "try_expand.m"
    check_hlds__try_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Cond0_11, (MR_Integer) 0)));
#line 469 "try_expand.m"
    check_hlds__try_expand__CondInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Cond0_11, (MR_Integer) 1)));
#line 470 "try_expand.m"
    {
#line 470 "try_expand.m"
      check_hlds__try_expand__CondInstmapDelta_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__try_expand__CondInfo_19);
    }
#line 471 "try_expand.m"
    {
#line 471 "try_expand.m"
      hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__try_expand__Instmap0_10, check_hlds__try_expand__CondInstmapDelta_20, &check_hlds__try_expand__InstmapAfterCond_21);
    }
#line 472 "try_expand.m"
    {
#line 472 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__InstmapAfterCond_21, check_hlds__try_expand__Then0_13, check_hlds__try_expand__Then_14, check_hlds__try_expand__STATE_VARIABLE_Info_24_24, &check_hlds__try_expand__STATE_VARIABLE_Info_25_25);
    }
#line 474 "try_expand.m"
    {
#line 474 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap0_10, check_hlds__try_expand__Else0_15, check_hlds__try_expand__Else_16, check_hlds__try_expand__STATE_VARIABLE_Info_25_25, check_hlds__try_expand__STATE_VARIABLE_Info_23);
#line 474 "try_expand.m"
      return;
    }
#line 466 "try_expand.m"
  }
#line 460 "try_expand.m"
}

#line 450 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_cases_5_p_0(
#line 450 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 450 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2,
#line 450 "try_expand.m"
  MR_Word * check_hlds__try_expand__HeadVar__3_3,
#line 450 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_4,
#line 450 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_5)
#line 450 "try_expand.m"
{
#line 453 "try_expand.m"
  {
#line 453 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;

#line 453 "try_expand.m"
    if ((check_hlds__try_expand__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 453 "try_expand.m"
      {
#line 453 "try_expand.m"
        *check_hlds__try_expand__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 453 "try_expand.m"
        *check_hlds__try_expand__STATE_VARIABLE_Info_5 = check_hlds__try_expand__STATE_VARIABLE_Info_0_4;
#line 453 "try_expand.m"
      }
#line 453 "try_expand.m"
    else
#line 454 "try_expand.m"
      {
#line 454 "try_expand.m"
        MR_Word check_hlds__try_expand__Case0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 454 "try_expand.m"
        MR_Word check_hlds__try_expand__Cases0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 454 "try_expand.m"
        MR_Word check_hlds__try_expand__Case_13;
#line 454 "try_expand.m"
        MR_Word check_hlds__try_expand__Cases_14;
#line 454 "try_expand.m"
        MR_Word check_hlds__try_expand__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case0_11, (MR_Integer) 0)));
#line 454 "try_expand.m"
        MR_Word check_hlds__try_expand__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case0_11, (MR_Integer) 1)));
#line 454 "try_expand.m"
        MR_Word check_hlds__try_expand__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case0_11, (MR_Integer) 2)));
#line 454 "try_expand.m"
        MR_Word check_hlds__try_expand__Goal_19;
#line 454 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_22_22;

#line 456 "try_expand.m"
        {
#line 456 "try_expand.m"
          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__HeadVar__1_1, check_hlds__try_expand__Goal0_18, &check_hlds__try_expand__Goal_19, check_hlds__try_expand__STATE_VARIABLE_Info_0_4, &check_hlds__try_expand__STATE_VARIABLE_Info_22_22);
        }
#line 457 "try_expand.m"
        {
#line 457 "try_expand.m"
          check_hlds__try_expand__expand_try_goals_in_cases_5_p_0(check_hlds__try_expand__HeadVar__1_1, check_hlds__try_expand__Cases0_12, &check_hlds__try_expand__Cases_14, check_hlds__try_expand__STATE_VARIABLE_Info_22_22, check_hlds__try_expand__STATE_VARIABLE_Info_5);
        }
#line 458 "try_expand.m"
        {
#line 458 "try_expand.m"
          check_hlds__try_expand__Case_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 458 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case_13, 0) = ((MR_Box) (check_hlds__try_expand__MainConsId_16));
#line 458 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case_13, 1) = ((MR_Box) (check_hlds__try_expand__OtherConsIds_17));
#line 458 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case_13, 2) = ((MR_Box) (check_hlds__try_expand__Goal_19));
#line 458 "try_expand.m"
        }
#line 454 "try_expand.m"
        {
#line 454 "try_expand.m"
          MR_Word base;
#line 454 "try_expand.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 454 "try_expand.m"
          *check_hlds__try_expand__HeadVar__3_3 = base;
#line 454 "try_expand.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__try_expand__Case_13));
#line 454 "try_expand.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__try_expand__Cases_14));
#line 454 "try_expand.m"
        }
#line 454 "try_expand.m"
      }
#line 453 "try_expand.m"
  }
#line 450 "try_expand.m"
}

#line 448 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_disj_5_p_0_1(
#line 448 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 448 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 448 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_2,
#line 448 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_3,
#line 448 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_4)
#line 448 "try_expand.m"
{
#line 448 "try_expand.m"
  {
#line 448 "try_expand.m"
    MR_Box check_hlds__try_expand__closure = check_hlds__try_expand__closure_arg;
#line 448 "try_expand.m"
    MR_Word check_hlds__try_expand__conv1_Goal_8;
#line 448 "try_expand.m"
    MR_Word check_hlds__try_expand__conv0_STATE_VARIABLE_Info_93;

#line 448 "try_expand.m"
    {
#line 448 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__try_expand__wrapper_arg_1), &check_hlds__try_expand__conv1_Goal_8, ((MR_Word) check_hlds__try_expand__wrapper_arg_3), &check_hlds__try_expand__conv0_STATE_VARIABLE_Info_93);
    }
#line 448 "try_expand.m"
    *check_hlds__try_expand__wrapper_arg_2 = ((MR_Box) (check_hlds__try_expand__conv1_Goal_8));
#line 448 "try_expand.m"
    *check_hlds__try_expand__wrapper_arg_4 = ((MR_Box) (check_hlds__try_expand__conv0_STATE_VARIABLE_Info_93));
#line 448 "try_expand.m"
  }
#line 448 "try_expand.m"
}

#line 443 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_disj_5_p_0(
#line 443 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap0_6,
#line 443 "try_expand.m"
  MR_Word check_hlds__try_expand__Goals0_7,
#line 443 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goals_8,
#line 443 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_10,
#line 443 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_11)
#line 443 "try_expand.m"
{
#line 447 "try_expand.m"
  {
#line 447 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 447 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeCtorInfo_18_18;
#line 447 "try_expand.m"
    MR_Word check_hlds__try_expand__V_12_12;
#line 448 "try_expand.m"
    MR_Box check_hlds__try_expand__conv2_STATE_VARIABLE_Info_11;

#line 448 "try_expand.m"
    {
#line 448 "try_expand.m"
      check_hlds__try_expand__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 448 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_12_12, 0) = ((MR_Box) (&check_hlds__try_expand_scalar_common_2[1]));
#line 448 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_12_12, 1) = ((MR_Box) (check_hlds__try_expand__expand_try_goals_in_disj_5_p_0_1));
#line 448 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 448 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_12_12, 3) = ((MR_Box) (check_hlds__try_expand__Instmap0_6));
#line 448 "try_expand.m"
    }
#line 4554 "check_hlds.try_expand.c"
    check_hlds__try_expand__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 448 "try_expand.m"
    {
#line 448 "try_expand.m"
      mercury__list__map_foldl_5_p_1(check_hlds__try_expand__TypeCtorInfo_18_18, check_hlds__try_expand__TypeCtorInfo_18_18, (MR_Word) &check_hlds__try_expand__check_hlds__try_expand__type_ctor_info_trys_info_0, check_hlds__try_expand__V_12_12, check_hlds__try_expand__Goals0_7, check_hlds__try_expand__Goals_8, ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_Info_0_10)), &check_hlds__try_expand__conv2_STATE_VARIABLE_Info_11);
    }
#line 448 "try_expand.m"
    *check_hlds__try_expand__STATE_VARIABLE_Info_11 = ((MR_Word) check_hlds__try_expand__conv2_STATE_VARIABLE_Info_11);
#line 447 "try_expand.m"
  }
#line 443 "try_expand.m"
}

#line 431 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_conj_5_p_0(
#line 431 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 431 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2,
#line 431 "try_expand.m"
  MR_Word * check_hlds__try_expand__HeadVar__3_3,
#line 431 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_4,
#line 431 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_5)
#line 431 "try_expand.m"
{
#line 435 "try_expand.m"
  {
#line 435 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;

#line 435 "try_expand.m"
    if ((check_hlds__try_expand__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 435 "try_expand.m"
      {
#line 435 "try_expand.m"
        *check_hlds__try_expand__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 435 "try_expand.m"
        *check_hlds__try_expand__STATE_VARIABLE_Info_5 = check_hlds__try_expand__STATE_VARIABLE_Info_0_4;
#line 435 "try_expand.m"
      }
#line 435 "try_expand.m"
    else
#line 436 "try_expand.m"
      {
#line 436 "try_expand.m"
        MR_Word check_hlds__try_expand__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 436 "try_expand.m"
        MR_Word check_hlds__try_expand__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 436 "try_expand.m"
        MR_Word check_hlds__try_expand__Goal_13;
#line 436 "try_expand.m"
        MR_Word check_hlds__try_expand__Goals_14;
#line 436 "try_expand.m"
        MR_Word check_hlds__try_expand__GoalInfo_17;
#line 436 "try_expand.m"
        MR_Word check_hlds__try_expand__InstmapDelta_18;
#line 436 "try_expand.m"
        MR_Word check_hlds__try_expand__Instmap_19;
#line 436 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_22_22;
#line 438 "try_expand.m"
        MR_Word check_hlds__try_expand__V_16_16;

#line 437 "try_expand.m"
        {
#line 437 "try_expand.m"
          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__HeadVar__1_1, check_hlds__try_expand__Goal0_11, &check_hlds__try_expand__Goal_13, check_hlds__try_expand__STATE_VARIABLE_Info_0_4, &check_hlds__try_expand__STATE_VARIABLE_Info_22_22);
        }
#line 438 "try_expand.m"
        check_hlds__try_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_11, (MR_Integer) 0)));
#line 438 "try_expand.m"
        check_hlds__try_expand__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_11, (MR_Integer) 1)));
#line 439 "try_expand.m"
        {
#line 439 "try_expand.m"
          check_hlds__try_expand__InstmapDelta_18 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__try_expand__GoalInfo_17);
        }
#line 440 "try_expand.m"
        {
#line 440 "try_expand.m"
          hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__try_expand__HeadVar__1_1, check_hlds__try_expand__InstmapDelta_18, &check_hlds__try_expand__Instmap_19);
        }
#line 441 "try_expand.m"
        {
#line 441 "try_expand.m"
          check_hlds__try_expand__expand_try_goals_in_conj_5_p_0(check_hlds__try_expand__Instmap_19, check_hlds__try_expand__Goals0_12, &check_hlds__try_expand__Goals_14, check_hlds__try_expand__STATE_VARIABLE_Info_22_22, check_hlds__try_expand__STATE_VARIABLE_Info_5);
        }
#line 436 "try_expand.m"
        {
#line 436 "try_expand.m"
          MR_Word base;
#line 436 "try_expand.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "try_expand.m"
          *check_hlds__try_expand__HeadVar__3_3 = base;
#line 436 "try_expand.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__try_expand__Goal_13));
#line 436 "try_expand.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__try_expand__Goals_14));
#line 436 "try_expand.m"
        }
#line 436 "try_expand.m"
      }
#line 435 "try_expand.m"
  }
#line 431 "try_expand.m"
}

#line 344 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(
#line 344 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap_6,
#line 344 "try_expand.m"
  MR_Word check_hlds__try_expand__Goal0_7,
#line 344 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_8,
#line 344 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_92,
#line 344 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_93)
#line 344 "try_expand.m"
{
#line 347 "try_expand.m"
  {
#line 347 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 347 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_7, (MR_Integer) 0)));
#line 347 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_7, (MR_Integer) 1)));

#line 352 "try_expand.m"
    if (((MR_tag((MR_Word) check_hlds__try_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 0))))
#line 363 "try_expand.m"
      {
#line 363 "try_expand.m"
        MR_Word check_hlds__try_expand__SubGoal0_23 = (MR_Word) MR_body(((MR_Word) check_hlds__try_expand__GoalExpr0_10), (MR_Integer) 0);
#line 363 "try_expand.m"
        MR_Word check_hlds__try_expand__SubGoal_24;
#line 363 "try_expand.m"
        MR_Word check_hlds__try_expand__GoalExpr_115;

#line 364 "try_expand.m"
        {
#line 364 "try_expand.m"
          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__SubGoal0_23, &check_hlds__try_expand__SubGoal_24, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
        }
#line 365 "try_expand.m"
        check_hlds__try_expand__GoalExpr_115 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__try_expand__SubGoal_24);
#line 366 "try_expand.m"
        {
#line 366 "try_expand.m"
          MR_Word base;
#line 366 "try_expand.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 366 "try_expand.m"
          *check_hlds__try_expand__Goal_8 = base;
#line 366 "try_expand.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_115));
#line 366 "try_expand.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 366 "try_expand.m"
        }
#line 363 "try_expand.m"
      }
#line 352 "try_expand.m"
    else
#line 352 "try_expand.m"
      if (((MR_tag((MR_Word) check_hlds__try_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 1))))
#line 350 "try_expand.m"
        {
#line 351 "try_expand.m"
          *check_hlds__try_expand__Goal_8 = check_hlds__try_expand__Goal0_7;
#line 351 "try_expand.m"
          *check_hlds__try_expand__STATE_VARIABLE_Info_93 = check_hlds__try_expand__STATE_VARIABLE_Info_0_92;
#line 350 "try_expand.m"
        }
#line 352 "try_expand.m"
      else
#line 352 "try_expand.m"
        if (((((MR_tag((MR_Word) check_hlds__try_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 353 "try_expand.m"
          {
#line 353 "try_expand.m"
            MR_Word check_hlds__try_expand__ConjType_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 353 "try_expand.m"
            MR_Word check_hlds__try_expand__Conjuncts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 2)));
#line 353 "try_expand.m"
            MR_Word check_hlds__try_expand__Conjuncts_19;
#line 353 "try_expand.m"
            MR_Word check_hlds__try_expand__GoalExpr_20;

#line 354 "try_expand.m"
            {
#line 354 "try_expand.m"
              check_hlds__try_expand__expand_try_goals_in_conj_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Conjuncts0_18, &check_hlds__try_expand__Conjuncts_19, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
            }
#line 355 "try_expand.m"
            {
#line 355 "try_expand.m"
              check_hlds__try_expand__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 355 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 355 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_20, 1) = ((MR_Box) (check_hlds__try_expand__ConjType_17));
#line 355 "try_expand.m"
              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_20, 2) = ((MR_Box) (check_hlds__try_expand__Conjuncts_19));
#line 355 "try_expand.m"
            }
#line 356 "try_expand.m"
            {
#line 356 "try_expand.m"
              MR_Word base;
#line 356 "try_expand.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 356 "try_expand.m"
              *check_hlds__try_expand__Goal_8 = base;
#line 356 "try_expand.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_20));
#line 356 "try_expand.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 356 "try_expand.m"
            }
#line 353 "try_expand.m"
          }
#line 352 "try_expand.m"
        else
#line 352 "try_expand.m"
          if (((((MR_tag((MR_Word) check_hlds__try_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 358 "try_expand.m"
            {
#line 358 "try_expand.m"
              MR_Word check_hlds__try_expand__Disjuncts0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 358 "try_expand.m"
              MR_Word check_hlds__try_expand__Disjuncts_22;
#line 358 "try_expand.m"
              MR_Word check_hlds__try_expand__GoalExpr_114;

#line 359 "try_expand.m"
              {
#line 359 "try_expand.m"
                check_hlds__try_expand__expand_try_goals_in_disj_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Disjuncts0_21, &check_hlds__try_expand__Disjuncts_22, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
              }
#line 360 "try_expand.m"
              {
#line 360 "try_expand.m"
                check_hlds__try_expand__GoalExpr_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 360 "try_expand.m"
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 360 "try_expand.m"
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_114, 1) = ((MR_Box) (check_hlds__try_expand__Disjuncts_22));
#line 360 "try_expand.m"
              }
#line 361 "try_expand.m"
              {
#line 361 "try_expand.m"
                MR_Word base;
#line 361 "try_expand.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 361 "try_expand.m"
                *check_hlds__try_expand__Goal_8 = base;
#line 361 "try_expand.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_114));
#line 361 "try_expand.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 361 "try_expand.m"
              }
#line 358 "try_expand.m"
            }
#line 352 "try_expand.m"
          else
#line 352 "try_expand.m"
            if (((((MR_tag((MR_Word) check_hlds__try_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 399 "try_expand.m"
              {
#line 399 "try_expand.m"
                MR_Word check_hlds__try_expand__Vars_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 399 "try_expand.m"
                MR_Word check_hlds__try_expand__Cond0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 2)));
#line 399 "try_expand.m"
                MR_Word check_hlds__try_expand__Then0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 3)));
#line 399 "try_expand.m"
                MR_Word check_hlds__try_expand__Else0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 4)));
#line 399 "try_expand.m"
                MR_Word check_hlds__try_expand__Cond_56;
#line 399 "try_expand.m"
                MR_Word check_hlds__try_expand__Then_57;
#line 399 "try_expand.m"
                MR_Word check_hlds__try_expand__Else_58;
#line 399 "try_expand.m"
                MR_Word check_hlds__try_expand__GoalExpr_120;

#line 400 "try_expand.m"
                {
#line 400 "try_expand.m"
                  check_hlds__try_expand__expand_try_goals_in_if_then_else_9_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Cond0_53, &check_hlds__try_expand__Cond_56, check_hlds__try_expand__Then0_54, &check_hlds__try_expand__Then_57, check_hlds__try_expand__Else0_55, &check_hlds__try_expand__Else_58, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
                }
#line 402 "try_expand.m"
                {
#line 402 "try_expand.m"
                  check_hlds__try_expand__GoalExpr_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 402 "try_expand.m"
                  MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 402 "try_expand.m"
                  MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_120, 1) = ((MR_Box) (check_hlds__try_expand__Vars_52));
#line 402 "try_expand.m"
                  MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_120, 2) = ((MR_Box) (check_hlds__try_expand__Cond_56));
#line 402 "try_expand.m"
                  MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_120, 3) = ((MR_Box) (check_hlds__try_expand__Then_57));
#line 402 "try_expand.m"
                  MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_120, 4) = ((MR_Box) (check_hlds__try_expand__Else_58));
#line 402 "try_expand.m"
                }
#line 403 "try_expand.m"
                {
#line 403 "try_expand.m"
                  MR_Word base;
#line 403 "try_expand.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 403 "try_expand.m"
                  *check_hlds__try_expand__Goal_8 = base;
#line 403 "try_expand.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_120));
#line 403 "try_expand.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 403 "try_expand.m"
                }
#line 399 "try_expand.m"
              }
#line 352 "try_expand.m"
            else
#line 352 "try_expand.m"
              if (((((MR_tag((MR_Word) check_hlds__try_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 373 "try_expand.m"
                {
#line 373 "try_expand.m"
                  MR_Word check_hlds__try_expand__Reason_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 373 "try_expand.m"
                  MR_Word check_hlds__try_expand__InnerGoal0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 2)));

#line 378 "try_expand.m"
                  if (((MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) == (MR_mktag((MR_Integer) 0))))
#line 390 "try_expand.m"
                    {
#line 390 "try_expand.m"
                      MR_Word check_hlds__try_expand__InnerGoal_126;
#line 390 "try_expand.m"
                      MR_Word check_hlds__try_expand__GoalExpr_127;

#line 391 "try_expand.m"
                      {
#line 391 "try_expand.m"
                        check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_126, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
                      }
#line 392 "try_expand.m"
                      {
#line 392 "try_expand.m"
                        check_hlds__try_expand__GoalExpr_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 392 "try_expand.m"
                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 392 "try_expand.m"
                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_127, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 392 "try_expand.m"
                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_127, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_126));
#line 392 "try_expand.m"
                      }
#line 393 "try_expand.m"
                      {
#line 393 "try_expand.m"
                        MR_Word base;
#line 393 "try_expand.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 393 "try_expand.m"
                        *check_hlds__try_expand__Goal_8 = base;
#line 393 "try_expand.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_127));
#line 393 "try_expand.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 393 "try_expand.m"
                      }
#line 390 "try_expand.m"
                    }
#line 378 "try_expand.m"
                  else
#line 378 "try_expand.m"
                    if (((MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) == (MR_mktag((MR_Integer) 2))))
#line 390 "try_expand.m"
                      {
#line 390 "try_expand.m"
                        MR_Word check_hlds__try_expand__InnerGoal_136;
#line 390 "try_expand.m"
                        MR_Word check_hlds__try_expand__GoalExpr_137;

#line 391 "try_expand.m"
                        {
#line 391 "try_expand.m"
                          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_136, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
                        }
#line 392 "try_expand.m"
                        {
#line 392 "try_expand.m"
                          check_hlds__try_expand__GoalExpr_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 392 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 392 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_137, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 392 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_137, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_136));
#line 392 "try_expand.m"
                        }
#line 393 "try_expand.m"
                        {
#line 393 "try_expand.m"
                          MR_Word base;
#line 393 "try_expand.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 393 "try_expand.m"
                          *check_hlds__try_expand__Goal_8 = base;
#line 393 "try_expand.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_137));
#line 393 "try_expand.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 393 "try_expand.m"
                        }
#line 390 "try_expand.m"
                      }
#line 378 "try_expand.m"
                    else
#line 378 "try_expand.m"
                      if (((MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) == (MR_mktag((MR_Integer) 1))))
#line 390 "try_expand.m"
                        {
#line 390 "try_expand.m"
                          MR_Word check_hlds__try_expand__InnerGoal_138;
#line 390 "try_expand.m"
                          MR_Word check_hlds__try_expand__GoalExpr_139;

#line 391 "try_expand.m"
                          {
#line 391 "try_expand.m"
                            check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_138, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
                          }
#line 392 "try_expand.m"
                          {
#line 392 "try_expand.m"
                            check_hlds__try_expand__GoalExpr_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 392 "try_expand.m"
                            MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 392 "try_expand.m"
                            MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_139, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 392 "try_expand.m"
                            MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_139, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_138));
#line 392 "try_expand.m"
                          }
#line 393 "try_expand.m"
                          {
#line 393 "try_expand.m"
                            MR_Word base;
#line 393 "try_expand.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 393 "try_expand.m"
                            *check_hlds__try_expand__Goal_8 = base;
#line 393 "try_expand.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_139));
#line 393 "try_expand.m"
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 393 "try_expand.m"
                          }
#line 390 "try_expand.m"
                        }
#line 378 "try_expand.m"
                      else
#line 378 "try_expand.m"
                        if (((((MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 390 "try_expand.m"
                          {
#line 390 "try_expand.m"
                            MR_Word check_hlds__try_expand__InnerGoal_50;
#line 390 "try_expand.m"
                            MR_Word check_hlds__try_expand__GoalExpr_117;

#line 391 "try_expand.m"
                            {
#line 391 "try_expand.m"
                              check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_50, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
                            }
#line 392 "try_expand.m"
                            {
#line 392 "try_expand.m"
                              check_hlds__try_expand__GoalExpr_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 392 "try_expand.m"
                              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 392 "try_expand.m"
                              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_117, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 392 "try_expand.m"
                              MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_117, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_50));
#line 392 "try_expand.m"
                            }
#line 393 "try_expand.m"
                            {
#line 393 "try_expand.m"
                              MR_Word base;
#line 393 "try_expand.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 393 "try_expand.m"
                              *check_hlds__try_expand__Goal_8 = base;
#line 393 "try_expand.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_117));
#line 393 "try_expand.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 393 "try_expand.m"
                            }
#line 390 "try_expand.m"
                          }
#line 378 "try_expand.m"
                        else
#line 378 "try_expand.m"
                          if (((((MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 390 "try_expand.m"
                            {
#line 390 "try_expand.m"
                              MR_Word check_hlds__try_expand__InnerGoal_124;
#line 390 "try_expand.m"
                              MR_Word check_hlds__try_expand__GoalExpr_125;

#line 391 "try_expand.m"
                              {
#line 391 "try_expand.m"
                                check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_124, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
                              }
#line 392 "try_expand.m"
                              {
#line 392 "try_expand.m"
                                check_hlds__try_expand__GoalExpr_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 392 "try_expand.m"
                                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 392 "try_expand.m"
                                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_125, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 392 "try_expand.m"
                                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_125, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_124));
#line 392 "try_expand.m"
                              }
#line 393 "try_expand.m"
                              {
#line 393 "try_expand.m"
                                MR_Word base;
#line 393 "try_expand.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 393 "try_expand.m"
                                *check_hlds__try_expand__Goal_8 = base;
#line 393 "try_expand.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_125));
#line 393 "try_expand.m"
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 393 "try_expand.m"
                              }
#line 390 "try_expand.m"
                            }
#line 378 "try_expand.m"
                          else
#line 378 "try_expand.m"
                            if (((((MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 378 "try_expand.m"
                              {
#line 378 "try_expand.m"
                                MR_Word check_hlds__try_expand__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 2)));
#line 375 "try_expand.m"
                                MR_Word check_hlds__try_expand__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 1)));

#line 378 "try_expand.m"
                                if ((check_hlds__try_expand__V_146_146 == (MR_Integer) 1))
#line 375 "try_expand.m"
                                  {
#line 377 "try_expand.m"
                                    *check_hlds__try_expand__Goal_8 = check_hlds__try_expand__Goal0_7;
#line 377 "try_expand.m"
                                    *check_hlds__try_expand__STATE_VARIABLE_Info_93 = check_hlds__try_expand__STATE_VARIABLE_Info_0_92;
#line 375 "try_expand.m"
                                  }
#line 378 "try_expand.m"
                                else
#line 378 "try_expand.m"
                                  if ((check_hlds__try_expand__V_146_146 == (MR_Integer) 2))
#line 390 "try_expand.m"
                                    {
#line 390 "try_expand.m"
                                      MR_Word check_hlds__try_expand__InnerGoal_128;
#line 390 "try_expand.m"
                                      MR_Word check_hlds__try_expand__GoalExpr_129;

#line 391 "try_expand.m"
                                      {
#line 391 "try_expand.m"
                                        check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_128, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
                                      }
#line 392 "try_expand.m"
                                      {
#line 392 "try_expand.m"
                                        check_hlds__try_expand__GoalExpr_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 392 "try_expand.m"
                                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 392 "try_expand.m"
                                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_129, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 392 "try_expand.m"
                                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_129, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_128));
#line 392 "try_expand.m"
                                      }
#line 393 "try_expand.m"
                                      {
#line 393 "try_expand.m"
                                        MR_Word base;
#line 393 "try_expand.m"
                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 393 "try_expand.m"
                                        *check_hlds__try_expand__Goal_8 = base;
#line 393 "try_expand.m"
                                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_129));
#line 393 "try_expand.m"
                                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 393 "try_expand.m"
                                      }
#line 390 "try_expand.m"
                                    }
#line 378 "try_expand.m"
                                  else
#line 378 "try_expand.m"
                                    if ((check_hlds__try_expand__V_146_146 == (MR_Integer) 0))
#line 395 "try_expand.m"
                                      {
#line 396 "try_expand.m"
                                        {
#line 396 "try_expand.m"
                                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.expand_try_goals_in_goal\'/5", (MR_String) "from_ground_term_initial");
#line 396 "try_expand.m"
                                          return;
                                        }
#line 395 "try_expand.m"
                                      }
#line 378 "try_expand.m"
                                    else
#line 390 "try_expand.m"
                                      {
#line 390 "try_expand.m"
                                        MR_Word check_hlds__try_expand__InnerGoal_130;
#line 390 "try_expand.m"
                                        MR_Word check_hlds__try_expand__GoalExpr_131;

#line 391 "try_expand.m"
                                        {
#line 391 "try_expand.m"
                                          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_130, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
                                        }
#line 392 "try_expand.m"
                                        {
#line 392 "try_expand.m"
                                          check_hlds__try_expand__GoalExpr_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 392 "try_expand.m"
                                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 392 "try_expand.m"
                                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_131, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 392 "try_expand.m"
                                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_131, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_130));
#line 392 "try_expand.m"
                                        }
#line 393 "try_expand.m"
                                        {
#line 393 "try_expand.m"
                                          MR_Word base;
#line 393 "try_expand.m"
                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 393 "try_expand.m"
                                          *check_hlds__try_expand__Goal_8 = base;
#line 393 "try_expand.m"
                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_131));
#line 393 "try_expand.m"
                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 393 "try_expand.m"
                                        }
#line 390 "try_expand.m"
                                      }
#line 378 "try_expand.m"
                              }
#line 378 "try_expand.m"
                            else
#line 378 "try_expand.m"
                              if (((((MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 390 "try_expand.m"
                                {
#line 390 "try_expand.m"
                                  MR_Word check_hlds__try_expand__InnerGoal_134;
#line 390 "try_expand.m"
                                  MR_Word check_hlds__try_expand__GoalExpr_135;

#line 391 "try_expand.m"
                                  {
#line 391 "try_expand.m"
                                    check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_134, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
                                  }
#line 392 "try_expand.m"
                                  {
#line 392 "try_expand.m"
                                    check_hlds__try_expand__GoalExpr_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 392 "try_expand.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 392 "try_expand.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_135, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 392 "try_expand.m"
                                    MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_135, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_134));
#line 392 "try_expand.m"
                                  }
#line 393 "try_expand.m"
                                  {
#line 393 "try_expand.m"
                                    MR_Word base;
#line 393 "try_expand.m"
                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 393 "try_expand.m"
                                    *check_hlds__try_expand__Goal_8 = base;
#line 393 "try_expand.m"
                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_135));
#line 393 "try_expand.m"
                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 393 "try_expand.m"
                                  }
#line 390 "try_expand.m"
                                }
#line 378 "try_expand.m"
                              else
#line 378 "try_expand.m"
                                if (((((MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 390 "try_expand.m"
                                  {
#line 390 "try_expand.m"
                                    MR_Word check_hlds__try_expand__InnerGoal_140;
#line 390 "try_expand.m"
                                    MR_Word check_hlds__try_expand__GoalExpr_141;

#line 391 "try_expand.m"
                                    {
#line 391 "try_expand.m"
                                      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_140, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
                                    }
#line 392 "try_expand.m"
                                    {
#line 392 "try_expand.m"
                                      check_hlds__try_expand__GoalExpr_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 392 "try_expand.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 392 "try_expand.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_141, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 392 "try_expand.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_141, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_140));
#line 392 "try_expand.m"
                                    }
#line 393 "try_expand.m"
                                    {
#line 393 "try_expand.m"
                                      MR_Word base;
#line 393 "try_expand.m"
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 393 "try_expand.m"
                                      *check_hlds__try_expand__Goal_8 = base;
#line 393 "try_expand.m"
                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_141));
#line 393 "try_expand.m"
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 393 "try_expand.m"
                                    }
#line 390 "try_expand.m"
                                  }
#line 378 "try_expand.m"
                                else
#line 378 "try_expand.m"
                                  if (((((MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 390 "try_expand.m"
                                    {
#line 390 "try_expand.m"
                                      MR_Word check_hlds__try_expand__InnerGoal_142;
#line 390 "try_expand.m"
                                      MR_Word check_hlds__try_expand__GoalExpr_143;

#line 391 "try_expand.m"
                                      {
#line 391 "try_expand.m"
                                        check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_142, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
                                      }
#line 392 "try_expand.m"
                                      {
#line 392 "try_expand.m"
                                        check_hlds__try_expand__GoalExpr_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 392 "try_expand.m"
                                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 392 "try_expand.m"
                                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_143, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 392 "try_expand.m"
                                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_143, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_142));
#line 392 "try_expand.m"
                                      }
#line 393 "try_expand.m"
                                      {
#line 393 "try_expand.m"
                                        MR_Word base;
#line 393 "try_expand.m"
                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 393 "try_expand.m"
                                        *check_hlds__try_expand__Goal_8 = base;
#line 393 "try_expand.m"
                                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_143));
#line 393 "try_expand.m"
                                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 393 "try_expand.m"
                                      }
#line 390 "try_expand.m"
                                    }
#line 378 "try_expand.m"
                                  else
#line 390 "try_expand.m"
                                    {
#line 390 "try_expand.m"
                                      MR_Word check_hlds__try_expand__InnerGoal_144;
#line 390 "try_expand.m"
                                      MR_Word check_hlds__try_expand__GoalExpr_145;

#line 391 "try_expand.m"
                                      {
#line 391 "try_expand.m"
                                        check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_144, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
                                      }
#line 392 "try_expand.m"
                                      {
#line 392 "try_expand.m"
                                        check_hlds__try_expand__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 392 "try_expand.m"
                                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 392 "try_expand.m"
                                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_145, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 392 "try_expand.m"
                                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_145, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_144));
#line 392 "try_expand.m"
                                      }
#line 393 "try_expand.m"
                                      {
#line 393 "try_expand.m"
                                        MR_Word base;
#line 393 "try_expand.m"
                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 393 "try_expand.m"
                                        *check_hlds__try_expand__Goal_8 = base;
#line 393 "try_expand.m"
                                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_145));
#line 393 "try_expand.m"
                                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 393 "try_expand.m"
                                      }
#line 390 "try_expand.m"
                                    }
#line 373 "try_expand.m"
                }
#line 352 "try_expand.m"
              else
#line 352 "try_expand.m"
                if (((((MR_tag((MR_Word) check_hlds__try_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 412 "try_expand.m"
                  {
#line 412 "try_expand.m"
                    MR_Word check_hlds__try_expand__ShortHand0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));

#line 416 "try_expand.m"
                    if (((MR_tag((MR_Word) check_hlds__try_expand__ShortHand0_77)) == (MR_mktag((MR_Integer) 1))))
#line 418 "try_expand.m"
                      {
#line 418 "try_expand.m"
                        MR_Word check_hlds__try_expand__AtomicGoalType_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_77, (MR_Integer) 0)));
#line 418 "try_expand.m"
                        MR_Word check_hlds__try_expand__Outer_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_77, (MR_Integer) 1)));
#line 418 "try_expand.m"
                        MR_Word check_hlds__try_expand__Inner_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_77, (MR_Integer) 2)));
#line 418 "try_expand.m"
                        MR_Word check_hlds__try_expand__MaybeOutputVars_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_77, (MR_Integer) 3)));
#line 418 "try_expand.m"
                        MR_Word check_hlds__try_expand__MainGoal0_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_77, (MR_Integer) 4)));
#line 418 "try_expand.m"
                        MR_Word check_hlds__try_expand__OrElseGoals0_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_77, (MR_Integer) 5)));
#line 418 "try_expand.m"
                        MR_Word check_hlds__try_expand__OrElseInners_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_77, (MR_Integer) 6)));
#line 418 "try_expand.m"
                        MR_Word check_hlds__try_expand__MainGoal_88;
#line 418 "try_expand.m"
                        MR_Word check_hlds__try_expand__OrElseGoals_89;
#line 418 "try_expand.m"
                        MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_97_97;
#line 418 "try_expand.m"
                        MR_Word check_hlds__try_expand__V_99_99;
#line 418 "try_expand.m"
                        MR_Word check_hlds__try_expand__GoalExpr_121;

#line 419 "try_expand.m"
                        {
#line 419 "try_expand.m"
                          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__MainGoal0_85, &check_hlds__try_expand__MainGoal_88, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, &check_hlds__try_expand__STATE_VARIABLE_Info_97_97);
                        }
#line 420 "try_expand.m"
                        {
#line 420 "try_expand.m"
                          check_hlds__try_expand__expand_try_goals_in_disj_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__OrElseGoals0_86, &check_hlds__try_expand__OrElseGoals_89, check_hlds__try_expand__STATE_VARIABLE_Info_97_97, check_hlds__try_expand__STATE_VARIABLE_Info_93);
                        }
#line 422 "try_expand.m"
                        {
#line 422 "try_expand.m"
                          check_hlds__try_expand__GoalExpr_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 422 "try_expand.m"
                          MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_121, 0) = ((MR_Box) (check_hlds__try_expand__AtomicGoalType_81));
#line 422 "try_expand.m"
                          MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_121, 1) = ((MR_Box) (check_hlds__try_expand__Outer_82));
#line 422 "try_expand.m"
                          MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_121, 2) = ((MR_Box) (check_hlds__try_expand__Inner_83));
#line 422 "try_expand.m"
                          MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_121, 3) = ((MR_Box) (check_hlds__try_expand__MaybeOutputVars_84));
#line 422 "try_expand.m"
                          MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_121, 4) = ((MR_Box) (check_hlds__try_expand__MainGoal_88));
#line 422 "try_expand.m"
                          MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_121, 5) = ((MR_Box) (check_hlds__try_expand__OrElseGoals_89));
#line 422 "try_expand.m"
                          MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_121, 6) = ((MR_Box) (check_hlds__try_expand__OrElseInners_87));
#line 422 "try_expand.m"
                        }
#line 424 "try_expand.m"
                        {
#line 424 "try_expand.m"
                          check_hlds__try_expand__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 424 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_99_99, 1) = ((MR_Box) (check_hlds__try_expand__GoalExpr_121));
#line 424 "try_expand.m"
                        }
#line 424 "try_expand.m"
                        {
#line 424 "try_expand.m"
                          MR_Word base;
#line 424 "try_expand.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 424 "try_expand.m"
                          *check_hlds__try_expand__Goal_8 = base;
#line 424 "try_expand.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__V_99_99));
#line 424 "try_expand.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 424 "try_expand.m"
                        }
#line 418 "try_expand.m"
                      }
#line 416 "try_expand.m"
                    else
#line 416 "try_expand.m"
                      if (((MR_tag((MR_Word) check_hlds__try_expand__ShortHand0_77)) == (MR_mktag((MR_Integer) 0))))
#line 426 "try_expand.m"
                        {
#line 427 "try_expand.m"
                          {
#line 427 "try_expand.m"
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.expand_try_goals_in_goal\'/5", (MR_String) "bi_implication");
#line 427 "try_expand.m"
                            return;
                          }
#line 426 "try_expand.m"
                        }
#line 416 "try_expand.m"
                      else
#line 415 "try_expand.m"
                        {
#line 415 "try_expand.m"
                          check_hlds__try_expand__expand_try_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__ShortHand0_77, check_hlds__try_expand__Goal_8, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
#line 415 "try_expand.m"
                          return;
                        }
#line 412 "try_expand.m"
                  }
#line 352 "try_expand.m"
                else
#line 352 "try_expand.m"
                  if (((((MR_tag((MR_Word) check_hlds__try_expand__GoalExpr0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 368 "try_expand.m"
                    {
#line 368 "try_expand.m"
                      MR_Word check_hlds__try_expand__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 368 "try_expand.m"
                      MR_Word check_hlds__try_expand__CanFail_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 2)));
#line 368 "try_expand.m"
                      MR_Word check_hlds__try_expand__Cases0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 3)));
#line 368 "try_expand.m"
                      MR_Word check_hlds__try_expand__Cases_28;
#line 368 "try_expand.m"
                      MR_Word check_hlds__try_expand__GoalExpr_116;

#line 369 "try_expand.m"
                      {
#line 369 "try_expand.m"
                        check_hlds__try_expand__expand_try_goals_in_cases_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Cases0_27, &check_hlds__try_expand__Cases_28, check_hlds__try_expand__STATE_VARIABLE_Info_0_92, check_hlds__try_expand__STATE_VARIABLE_Info_93);
                      }
#line 370 "try_expand.m"
                      {
#line 370 "try_expand.m"
                        check_hlds__try_expand__GoalExpr_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 370 "try_expand.m"
                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 370 "try_expand.m"
                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_116, 1) = ((MR_Box) (check_hlds__try_expand__Var_25));
#line 370 "try_expand.m"
                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_116, 2) = ((MR_Box) (check_hlds__try_expand__CanFail_26));
#line 370 "try_expand.m"
                        MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_116, 3) = ((MR_Box) (check_hlds__try_expand__Cases_28));
#line 370 "try_expand.m"
                      }
#line 371 "try_expand.m"
                      {
#line 371 "try_expand.m"
                        MR_Word base;
#line 371 "try_expand.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 371 "try_expand.m"
                        *check_hlds__try_expand__Goal_8 = base;
#line 371 "try_expand.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_116));
#line 371 "try_expand.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 371 "try_expand.m"
                      }
#line 368 "try_expand.m"
                    }
#line 352 "try_expand.m"
                  else
#line 408 "try_expand.m"
                    {
#line 409 "try_expand.m"
                      *check_hlds__try_expand__Goal_8 = check_hlds__try_expand__Goal0_7;
#line 409 "try_expand.m"
                      *check_hlds__try_expand__STATE_VARIABLE_Info_93 = check_hlds__try_expand__STATE_VARIABLE_Info_0_92;
#line 408 "try_expand.m"
                    }
#line 347 "try_expand.m"
  }
#line 344 "try_expand.m"
}

#line 279 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_proc_6_p_0(
#line 279 "try_expand.m"
  MR_Word check_hlds__try_expand__PredId_7,
#line 279 "try_expand.m"
  MR_Integer check_hlds__try_expand__ProcId_8,
#line 279 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_19,
#line 279 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_20,
#line 279 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Specs_0_21,
#line 279 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Specs_22)
#line 279 "try_expand.m"
{
#line 286 "try_expand.m"
  {
#line 286 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 286 "try_expand.m"
    MR_Word check_hlds__try_expand__Goal0_13;
#line 286 "try_expand.m"
    MR_Word check_hlds__try_expand__InitInstmap_14;
#line 286 "try_expand.m"
    MR_Word check_hlds__try_expand__Info0_15;
#line 286 "try_expand.m"
    MR_Word check_hlds__try_expand__Goal_16;
#line 286 "try_expand.m"
    MR_Word check_hlds__try_expand__Info_17;
#line 286 "try_expand.m"
    MR_Word check_hlds__try_expand__Changed_18;
#line 286 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_23_23;
#line 286 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_24_24;
#line 286 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_26_26;
#line 286 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_27_27;
#line 286 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_28_28;

#line 285 "try_expand.m"
    {
#line 285 "try_expand.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__try_expand__PredId_7, check_hlds__try_expand__ProcId_8, &check_hlds__try_expand__STATE_VARIABLE_PredInfo_23_23, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_24_24);
    }
#line 287 "try_expand.m"
    {
#line 287 "try_expand.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ProcInfo_24_24, &check_hlds__try_expand__Goal0_13);
    }
#line 288 "try_expand.m"
    {
#line 288 "try_expand.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__try_expand__STATE_VARIABLE_ProcInfo_24_24, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_19, &check_hlds__try_expand__InitInstmap_14);
    }
#line 290 "try_expand.m"
    {
#line 290 "try_expand.m"
      check_hlds__try_expand__Info0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 290 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info0_15, 0) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_19));
#line 290 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info0_15, 1) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_PredInfo_23_23));
#line 290 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info0_15, 2) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ProcInfo_24_24));
#line 290 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info0_15, 3) = ((MR_Box) ((MR_Integer) 0));
#line 290 "try_expand.m"
    }
#line 291 "try_expand.m"
    {
#line 291 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__InitInstmap_14, check_hlds__try_expand__Goal0_13, &check_hlds__try_expand__Goal_16, check_hlds__try_expand__Info0_15, &check_hlds__try_expand__Info_17);
    }
#line 292 "try_expand.m"
    check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info_17, (MR_Integer) 0)));
#line 292 "try_expand.m"
    check_hlds__try_expand__STATE_VARIABLE_PredInfo_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info_17, (MR_Integer) 1)));
#line 292 "try_expand.m"
    check_hlds__try_expand__STATE_VARIABLE_ProcInfo_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info_17, (MR_Integer) 2)));
#line 292 "try_expand.m"
    check_hlds__try_expand__Changed_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info_17, (MR_Integer) 3)));
#line 299 "try_expand.m"
    if ((check_hlds__try_expand__Changed_18 == (MR_Integer) 0))
#line 300 "try_expand.m"
      {
#line 300 "try_expand.m"
        *check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_20 = check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_26_26;
#line 300 "try_expand.m"
        *check_hlds__try_expand__STATE_VARIABLE_Specs_22 = check_hlds__try_expand__STATE_VARIABLE_Specs_0_21;
#line 300 "try_expand.m"
      }
#line 299 "try_expand.m"
    else
#line 295 "try_expand.m"
      {
#line 295 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_29_29;
#line 295 "try_expand.m"
        MR_Word check_hlds__try_expand__ModeSpecs_44;
#line 295 "try_expand.m"
        MR_Word check_hlds__try_expand__Globals_46;
#line 295 "try_expand.m"
        MR_Word check_hlds__try_expand__HasModeErrors_47;
#line 295 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_27_49;
#line 295 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_29_51;
#line 295 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_30_52;
#line 295 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_31_53;
#line 315 "try_expand.m"
        MR_Word check_hlds__try_expand___Changed_45;

#line 310 "try_expand.m"
        {
#line 310 "try_expand.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__try_expand__Goal_16, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_28_28, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_27_49);
        }
#line 311 "try_expand.m"
        {
#line 311 "try_expand.m"
          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_27_49, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_29_51);
        }
#line 312 "try_expand.m"
        {
#line 312 "try_expand.m"
          hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(check_hlds__try_expand__PredId_7, check_hlds__try_expand__ProcId_8, check_hlds__try_expand__STATE_VARIABLE_PredInfo_27_27, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_29_51, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_26_26, &check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_30_52);
        }
#line 315 "try_expand.m"
        {
#line 315 "try_expand.m"
          check_hlds__modes__modecheck_proc_6_p_0(check_hlds__try_expand__ProcId_8, check_hlds__try_expand__PredId_7, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_30_52, &check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_31_53, &check_hlds__try_expand__ModeSpecs_44, &check_hlds__try_expand___Changed_45);
        }
#line 316 "try_expand.m"
        {
#line 316 "try_expand.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_31_53, &check_hlds__try_expand__Globals_46);
        }
#line 317 "try_expand.m"
        {
#line 317 "try_expand.m"
          check_hlds__try_expand__HasModeErrors_47 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__try_expand__Globals_46, check_hlds__try_expand__ModeSpecs_44);
        }
#line 324 "try_expand.m"
        if ((check_hlds__try_expand__HasModeErrors_47 == (MR_Integer) 0))
#line 325 "try_expand.m"
          {
#line 331 "try_expand.m"
            MR_Word check_hlds__try_expand___DetismSpecs_48;

#line 331 "try_expand.m"
            {
#line 331 "try_expand.m"
              check_hlds__det_analysis__determinism_check_proc_5_p_0(check_hlds__try_expand__ProcId_8, check_hlds__try_expand__PredId_7, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_31_53, &check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_29_29, &check_hlds__try_expand___DetismSpecs_48);
            }
#line 331 "try_expand.m"
            *check_hlds__try_expand__STATE_VARIABLE_Specs_22 = check_hlds__try_expand__STATE_VARIABLE_Specs_0_21;
#line 325 "try_expand.m"
          }
#line 324 "try_expand.m"
        else
#line 319 "try_expand.m"
          {
#line 323 "try_expand.m"
            {
#line 323 "try_expand.m"
              *check_hlds__try_expand__STATE_VARIABLE_Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__try_expand__ModeSpecs_44, check_hlds__try_expand__STATE_VARIABLE_Specs_0_21);
            }
#line 323 "try_expand.m"
            check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_29_29 = check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_31_53;
#line 319 "try_expand.m"
          }
#line 298 "try_expand.m"
        {
#line 298 "try_expand.m"
          hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_29_29, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_20);
#line 298 "try_expand.m"
          return;
        }
#line 295 "try_expand.m"
      }
#line 286 "try_expand.m"
  }
#line 279 "try_expand.m"
}

#line 276 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_pred_5_p_0_1(
#line 276 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 276 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 276 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_2,
#line 276 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_3,
#line 276 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_4,
#line 276 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_5)
#line 276 "try_expand.m"
{
#line 276 "try_expand.m"
  {
#line 276 "try_expand.m"
    MR_Box check_hlds__try_expand__closure = check_hlds__try_expand__closure_arg;
#line 276 "try_expand.m"
    MR_Word check_hlds__try_expand__conv1_STATE_VARIABLE_ModuleInfo_20;
#line 276 "try_expand.m"
    MR_Word check_hlds__try_expand__conv0_STATE_VARIABLE_Specs_22;

#line 276 "try_expand.m"
    {
#line 276 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__closure, (MR_Integer) 3))), ((MR_Integer) check_hlds__try_expand__wrapper_arg_1), ((MR_Word) check_hlds__try_expand__wrapper_arg_2), &check_hlds__try_expand__conv1_STATE_VARIABLE_ModuleInfo_20, ((MR_Word) check_hlds__try_expand__wrapper_arg_4), &check_hlds__try_expand__conv0_STATE_VARIABLE_Specs_22);
    }
#line 276 "try_expand.m"
    *check_hlds__try_expand__wrapper_arg_3 = ((MR_Box) (check_hlds__try_expand__conv1_STATE_VARIABLE_ModuleInfo_20));
#line 276 "try_expand.m"
    *check_hlds__try_expand__wrapper_arg_5 = ((MR_Box) (check_hlds__try_expand__conv0_STATE_VARIABLE_Specs_22));
#line 276 "try_expand.m"
  }
#line 276 "try_expand.m"
}

#line 269 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_pred_5_p_0(
#line 269 "try_expand.m"
  MR_Word check_hlds__try_expand__PredId_6,
#line 269 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11,
#line 269 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_12,
#line 269 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Specs_0_13,
#line 269 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Specs_14)
#line 269 "try_expand.m"
{
#line 273 "try_expand.m"
  {
#line 273 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 273 "try_expand.m"
    MR_Word check_hlds__try_expand__PredInfo_9;
#line 273 "try_expand.m"
    MR_Word check_hlds__try_expand__ProcIds_10;
#line 273 "try_expand.m"
    MR_Word check_hlds__try_expand__V_15_15;
#line 276 "try_expand.m"
    MR_Box check_hlds__try_expand__conv3_STATE_VARIABLE_ModuleInfo_12;
#line 276 "try_expand.m"
    MR_Box check_hlds__try_expand__conv2_STATE_VARIABLE_Specs_14;

#line 274 "try_expand.m"
    {
#line 274 "try_expand.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11, check_hlds__try_expand__PredId_6, &check_hlds__try_expand__PredInfo_9);
    }
#line 275 "try_expand.m"
    {
#line 275 "try_expand.m"
      check_hlds__try_expand__ProcIds_10 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(check_hlds__try_expand__PredInfo_9);
    }
#line 276 "try_expand.m"
    {
#line 276 "try_expand.m"
      check_hlds__try_expand__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 276 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_15_15, 0) = ((MR_Box) (&check_hlds__try_expand_scalar_common_4[0]));
#line 276 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_15_15, 1) = ((MR_Box) (check_hlds__try_expand__expand_try_goals_in_pred_5_p_0_1));
#line 276 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 276 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_15_15, 3) = ((MR_Box) (check_hlds__try_expand__PredId_6));
#line 276 "try_expand.m"
    }
#line 276 "try_expand.m"
    {
#line 276 "try_expand.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &check_hlds__try_expand_scalar_common_1[0], check_hlds__try_expand__V_15_15, check_hlds__try_expand__ProcIds_10, ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11)), &check_hlds__try_expand__conv3_STATE_VARIABLE_ModuleInfo_12, ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_Specs_0_13)), &check_hlds__try_expand__conv2_STATE_VARIABLE_Specs_14);
    }
#line 276 "try_expand.m"
    *check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_12 = ((MR_Word) check_hlds__try_expand__conv3_STATE_VARIABLE_ModuleInfo_12);
#line 276 "try_expand.m"
    *check_hlds__try_expand__STATE_VARIABLE_Specs_14 = ((MR_Word) check_hlds__try_expand__conv2_STATE_VARIABLE_Specs_14);
#line 273 "try_expand.m"
  }
#line 269 "try_expand.m"
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
#line 944 "try_expand.m"
  {
#line 944 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;

#line 944 "try_expand.m"
    if ((strcmp(check_hlds__try_expand__HeadVar__1_1, (MR_String) "try") == 0))
#line 944 "try_expand.m"
      check_hlds__try_expand__succeeded = (check_hlds__try_expand__HeadVar__2_2 == (MR_Integer) 2);
#line 944 "try_expand.m"
    else
#line 944 "try_expand.m"
      if ((strcmp(check_hlds__try_expand__HeadVar__1_1, (MR_String) "try_io") == 0))
#line 945 "try_expand.m"
        check_hlds__try_expand__succeeded = (check_hlds__try_expand__HeadVar__2_2 == (MR_Integer) 4);
#line 944 "try_expand.m"
      else
#line 944 "try_expand.m"
        if ((strcmp(check_hlds__try_expand__HeadVar__1_1, (MR_String) "unreachable") == 0))
#line 946 "try_expand.m"
          check_hlds__try_expand__succeeded = (check_hlds__try_expand__HeadVar__2_2 == (MR_Integer) 0);
#line 944 "try_expand.m"
        else
#line 944 "try_expand.m"
          check_hlds__try_expand__succeeded = MR_FALSE;
#line 944 "try_expand.m"
    return check_hlds__try_expand__succeeded;
#line 944 "try_expand.m"
  }
#line 211 "try_expand.m"
}

#line 258 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_module_4_p_0_1(
#line 258 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 258 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 258 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_2,
#line 258 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_3,
#line 258 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_4,
#line 258 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_5)
#line 258 "try_expand.m"
{
#line 258 "try_expand.m"
  {
#line 258 "try_expand.m"
    MR_Box check_hlds__try_expand__closure = check_hlds__try_expand__closure_arg;
#line 258 "try_expand.m"
    MR_Word check_hlds__try_expand__conv1_STATE_VARIABLE_ModuleInfo_12;
#line 258 "try_expand.m"
    MR_Word check_hlds__try_expand__conv0_STATE_VARIABLE_Specs_14;

#line 258 "try_expand.m"
    {
#line 258 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_pred_5_p_0(((MR_Word) check_hlds__try_expand__wrapper_arg_1), ((MR_Word) check_hlds__try_expand__wrapper_arg_2), &check_hlds__try_expand__conv1_STATE_VARIABLE_ModuleInfo_12, ((MR_Word) check_hlds__try_expand__wrapper_arg_4), &check_hlds__try_expand__conv0_STATE_VARIABLE_Specs_14);
    }
#line 258 "try_expand.m"
    *check_hlds__try_expand__wrapper_arg_3 = ((MR_Box) (check_hlds__try_expand__conv1_STATE_VARIABLE_ModuleInfo_12));
#line 258 "try_expand.m"
    *check_hlds__try_expand__wrapper_arg_5 = ((MR_Box) (check_hlds__try_expand__conv0_STATE_VARIABLE_Specs_14));
#line 258 "try_expand.m"
  }
#line 258 "try_expand.m"
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
#line 246 "try_expand.m"
  {
#line 246 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 246 "try_expand.m"
    MR_Word check_hlds__try_expand__ImportedModules_7;
#line 251 "try_expand.m"
    MR_Word check_hlds__try_expand__V_15_15;

#line 250 "try_expand.m"
    {
#line 250 "try_expand.m"
      hlds__hlds_module__module_info_get_imported_module_specifiers_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11, &check_hlds__try_expand__ImportedModules_7);
    }
#line 251 "try_expand.m"
    {
#line 251 "try_expand.m"
      check_hlds__try_expand__V_15_15 = mdbcomp__prim_data__mercury_exception_module_0_f_0();
    }
#line 251 "try_expand.m"
    {
#line 251 "try_expand.m"
      check_hlds__try_expand__succeeded = mercury__set__contains_2_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, check_hlds__try_expand__ImportedModules_7, ((MR_Box) (check_hlds__try_expand__V_15_15)));
    }
#line 265 "try_expand.m"
    if (check_hlds__try_expand__succeeded)
#line 253 "try_expand.m"
      {
#line 253 "try_expand.m"
        MR_Word check_hlds__try_expand__OptionsToRestore_9;
#line 253 "try_expand.m"
        MR_Word check_hlds__try_expand__PredIds_10;
#line 253 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Globals_16_16;
#line 253 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Globals_17_17;
#line 253 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_18_18;
#line 253 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_19_19;
#line 253 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_21_21;
#line 253 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Globals_23_23;
#line 253 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Globals_24_24;
#line 258 "try_expand.m"
        MR_Box check_hlds__try_expand__conv3_STATE_VARIABLE_ModuleInfo_21_21;
#line 258 "try_expand.m"
        MR_Box check_hlds__try_expand__conv2_STATE_VARIABLE_Specs_14;

#line 253 "try_expand.m"
        {
#line 253 "try_expand.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11, &check_hlds__try_expand__STATE_VARIABLE_Globals_16_16);
        }
#line 254 "try_expand.m"
        {
#line 254 "try_expand.m"
          check_hlds__det_report__disable_det_warnings_3_p_0(&check_hlds__try_expand__OptionsToRestore_9, check_hlds__try_expand__STATE_VARIABLE_Globals_16_16, &check_hlds__try_expand__STATE_VARIABLE_Globals_17_17);
        }
#line 255 "try_expand.m"
        {
#line 255 "try_expand.m"
          hlds__hlds_module__module_info_set_globals_3_p_0(check_hlds__try_expand__STATE_VARIABLE_Globals_17_17, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11, &check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_18_18);
        }
#line 257 "try_expand.m"
        {
#line 257 "try_expand.m"
          hlds__hlds_module__module_info_get_valid_predids_3_p_0(&check_hlds__try_expand__PredIds_10, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_18_18, &check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_19_19);
        }
#line 258 "try_expand.m"
        {
#line 258 "try_expand.m"
          mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &check_hlds__try_expand_scalar_common_1[0], (MR_Word) &check_hlds__try_expand_scalar_common_3[0], check_hlds__try_expand__PredIds_10, ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_19_19)), &check_hlds__try_expand__conv3_STATE_VARIABLE_ModuleInfo_21_21, ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_Specs_0_13)), &check_hlds__try_expand__conv2_STATE_VARIABLE_Specs_14);
        }
#line 258 "try_expand.m"
        check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_21_21 = ((MR_Word) check_hlds__try_expand__conv3_STATE_VARIABLE_ModuleInfo_21_21);
#line 258 "try_expand.m"
        *check_hlds__try_expand__STATE_VARIABLE_Specs_14 = ((MR_Word) check_hlds__try_expand__conv2_STATE_VARIABLE_Specs_14);
#line 261 "try_expand.m"
        {
#line 261 "try_expand.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_21_21, &check_hlds__try_expand__STATE_VARIABLE_Globals_23_23);
        }
#line 262 "try_expand.m"
        {
#line 262 "try_expand.m"
          check_hlds__det_report__restore_det_warnings_3_p_0(check_hlds__try_expand__OptionsToRestore_9, check_hlds__try_expand__STATE_VARIABLE_Globals_23_23, &check_hlds__try_expand__STATE_VARIABLE_Globals_24_24);
        }
#line 263 "try_expand.m"
        {
#line 263 "try_expand.m"
          hlds__hlds_module__module_info_set_globals_3_p_0(check_hlds__try_expand__STATE_VARIABLE_Globals_24_24, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_21_21, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_12);
#line 263 "try_expand.m"
          return;
        }
#line 253 "try_expand.m"
      }
#line 265 "try_expand.m"
    else
#line 266 "try_expand.m"
      {
#line 266 "try_expand.m"
        *check_hlds__try_expand__STATE_VARIABLE_Specs_14 = check_hlds__try_expand__STATE_VARIABLE_Specs_0_13;
#line 266 "try_expand.m"
        *check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_12 = check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11;
#line 266 "try_expand.m"
      }
#line 246 "try_expand.m"
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
