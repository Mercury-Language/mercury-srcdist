/*
** Automatically generated from `try_expand.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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



#line 927 "try_expand.m"
struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s {
#line 927 "try_expand.m"
  MR_Word check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7;
#line 933 "try_expand.m"
  MR_bool check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded;
#line 934 "try_expand.m"
  jmp_buf check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__commit_0;
#line 934 "try_expand.m"
  MR_Word check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9;
#line 934 "try_expand.m"
  MR_Box check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__conv0_ArgInst_9;
#line 927 "try_expand.m"
};


#line 166 "check_hlds.try_expand.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__try_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 169 "check_hlds.try_expand.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__try_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 172 "check_hlds.try_expand.c"
static const MR_PseudoTypeInfo check_hlds__try_expand__check_hlds__try_expand__field_types_trys_info_0_0[4];

#line 175 "check_hlds.try_expand.c"
static const MR_ConstString check_hlds__try_expand__check_hlds__try_expand__field_names_trys_info_0_0[4];

#line 178 "check_hlds.try_expand.c"
static const MR_DuFunctorDesc check_hlds__try_expand__check_hlds__try_expand__du_functor_desc_trys_info_0_0;

#line 181 "check_hlds.try_expand.c"
static const MR_DuFunctorDescPtr check_hlds__try_expand__check_hlds__try_expand__du_stag_ordered_trys_info_0_0[1];

#line 184 "check_hlds.try_expand.c"
static const MR_DuPtagLayout check_hlds__try_expand__check_hlds__try_expand__du_ptag_ordered_trys_info_0[1];

#line 187 "check_hlds.try_expand.c"
static const MR_DuFunctorDescPtr check_hlds__try_expand__check_hlds__try_expand__du_name_ordered_trys_info_0[1];

#line 190 "check_hlds.try_expand.c"
static const MR_Integer check_hlds__try_expand__check_hlds__try_expand__functor_number_map_trys_info_0[1];

#line 193 "check_hlds.try_expand.c"
static MR_bool MR_CALL 
check_hlds__try_expand____Unify____trys_info_0_0_10001(
#line 196 "check_hlds.try_expand.c"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 198 "check_hlds.try_expand.c"
  MR_Box check_hlds__try_expand__wrapper_arg_2);

#line 201 "check_hlds.try_expand.c"
static void MR_CALL 
check_hlds__try_expand____Compare____trys_info_0_0_10001(
#line 204 "check_hlds.try_expand.c"
  MR_Box * check_hlds__try_expand__wrapper_arg_1,
#line 206 "check_hlds.try_expand.c"
  MR_Box check_hlds__try_expand__wrapper_arg_2,
#line 208 "check_hlds.try_expand.c"
  MR_Box check_hlds__try_expand__wrapper_arg_3);

#line 890 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand__IntroducedFrom__pred__make_try_call__890__1_2_p_0(
#line 890 "try_expand.m"
  MR_Word check_hlds__try_expand__PolySpecs_30,
#line 890 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_51);

#line 340 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand____Compare____trys_info_0_0(
#line 340 "try_expand.m"
  MR_Word * check_hlds__try_expand__HeadVar__1_1,
#line 340 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2,
#line 340 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__3_3);

#line 340 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand____Unify____trys_info_0_0(
#line 340 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 340 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2);

#line 934 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_1(
#line 934 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg);

#line 934 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_3(
#line 934 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg);

#line 934 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_2(
#line 934 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg);

#line 934 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_4(
#line 934 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg);

#line 927 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0(
#line 927 "try_expand.m"
  MR_Word check_hlds__try_expand__TmpTupleVar_5,
#line 927 "try_expand.m"
  MR_Word check_hlds__try_expand__TupleVar_6,
#line 927 "try_expand.m"
  MR_Word check_hlds__try_expand__TupleArgInsts_7,
#line 927 "try_expand.m"
  MR_Word * check_hlds__try_expand__CastOrUnify_8);

#line 919 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_unreachable_call_2_p_0(
#line 919 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_3,
#line 919 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_4);

#line 890 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand__make_try_call_14_p_0_1(
#line 890 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg);

#line 878 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_try_call_14_p_0(
#line 878 "try_expand.m"
  MR_String check_hlds__try_expand__PredName_15,
#line 878 "try_expand.m"
  MR_Word check_hlds__try_expand__LambdaVar_16,
#line 878 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_17,
#line 878 "try_expand.m"
  MR_Word check_hlds__try_expand__ExtraArgs_18,
#line 878 "try_expand.m"
  MR_Word check_hlds__try_expand__OutputTupleType_19,
#line 878 "try_expand.m"
  MR_Word check_hlds__try_expand__GoalPurity_20,
#line 878 "try_expand.m"
  MR_Word check_hlds__try_expand__Context_21,
#line 878 "try_expand.m"
  MR_Word * check_hlds__try_expand__OverallGoal_22,
#line 878 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_38,
#line 878 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_PredInfo_39,
#line 878 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_40,
#line 878 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_41,
#line 878 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_42,
#line 878 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_43);

#line 807 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_try_lambda_8_p_0(
#line 807 "try_expand.m"
  MR_Word check_hlds__try_expand__Body0_9,
#line 807 "try_expand.m"
  MR_Word check_hlds__try_expand__OutputVarsSet_10,
#line 807 "try_expand.m"
  MR_Word check_hlds__try_expand__OutputTupleType_11,
#line 807 "try_expand.m"
  MR_Word check_hlds__try_expand__MaybeIO_12,
#line 807 "try_expand.m"
  MR_Word * check_hlds__try_expand__LambdaVar_13,
#line 807 "try_expand.m"
  MR_Word * check_hlds__try_expand__AssignLambdaVar_14,
#line 807 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_41,
#line 807 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_42);

#line 785 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__lookup_case_goal_3_p_0(
#line 785 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 785 "try_expand.m"
  MR_Word check_hlds__try_expand__ConsId_2,
#line 785 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_3);

#line 717 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand__extract_from_succeeded_goal_5_p_0(
#line 717 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_6,
#line 717 "try_expand.m"
  MR_Word check_hlds__try_expand__SucceededGoal_7,
#line 717 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_8,
#line 717 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_9,
#line 717 "try_expand.m"
  MR_Word * check_hlds__try_expand__MaybeElse_10);

#line 677 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand__extract_intermediate_goal_parts_2_7_p_0(
#line 677 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_8,
#line 677 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_9,
#line 677 "try_expand.m"
  MR_Word check_hlds__try_expand__IntermediateGoal_10,
#line 677 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_11,
#line 677 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_12,
#line 677 "try_expand.m"
  MR_Word * check_hlds__try_expand__MaybeElse_13,
#line 677 "try_expand.m"
  MR_Word * check_hlds__try_expand__ExcpHandling_14);

#line 644 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__extract_intermediate_goal_parts_7_p_0(
#line 644 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_8,
#line 644 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_9,
#line 644 "try_expand.m"
  MR_Word check_hlds__try_expand__IntermediateGoal_10,
#line 644 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_11,
#line 644 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_12,
#line 644 "try_expand.m"
  MR_Word * check_hlds__try_expand__MaybeElse_13,
#line 644 "try_expand.m"
  MR_Word * check_hlds__try_expand__ExcpHandling_14);

#line 529 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goal_2_15_p_0(
#line 529 "try_expand.m"
  MR_Word check_hlds__try_expand__MaybeIO_16,
#line 529 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_17,
#line 529 "try_expand.m"
  MR_Word check_hlds__try_expand__Goal1_18,
#line 529 "try_expand.m"
  MR_Word check_hlds__try_expand__Then1_19,
#line 529 "try_expand.m"
  MR_Word check_hlds__try_expand__MaybeElse1_20,
#line 529 "try_expand.m"
  MR_Word check_hlds__try_expand__ExcpHandling1_21,
#line 529 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap_22,
#line 529 "try_expand.m"
  MR_Word check_hlds__try_expand__GoalOutputVarsSet_23,
#line 529 "try_expand.m"
  MR_Word * check_hlds__try_expand__FinalGoal_24,
#line 529 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_62,
#line 529 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_PredInfo_63,
#line 529 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_64,
#line 529 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_65,
#line 529 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_66,
#line 529 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_67);

#line 804 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand__expand_try_goal_5_p_0_1(
#line 804 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 804 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1);

#line 486 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goal_5_p_0(
#line 486 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap_6,
#line 486 "try_expand.m"
  MR_Word check_hlds__try_expand__TryGoal_7,
#line 486 "try_expand.m"
  MR_Word * check_hlds__try_expand__FinalGoal_8,
#line 486 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_33,
#line 486 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_34);

#line 465 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_if_then_else_9_p_0(
#line 465 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap0_10,
#line 465 "try_expand.m"
  MR_Word check_hlds__try_expand__Cond0_11,
#line 465 "try_expand.m"
  MR_Word * check_hlds__try_expand__Cond_12,
#line 465 "try_expand.m"
  MR_Word check_hlds__try_expand__Then0_13,
#line 465 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_14,
#line 465 "try_expand.m"
  MR_Word check_hlds__try_expand__Else0_15,
#line 465 "try_expand.m"
  MR_Word * check_hlds__try_expand__Else_16,
#line 465 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_22,
#line 465 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_23);

#line 455 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_cases_5_p_0(
#line 455 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 455 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2,
#line 455 "try_expand.m"
  MR_Word * check_hlds__try_expand__HeadVar__3_3,
#line 455 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_4,
#line 455 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_5);

#line 453 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_disj_5_p_0_1(
#line 453 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 453 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 453 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_2,
#line 453 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_3,
#line 453 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_4);

#line 448 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_disj_5_p_0(
#line 448 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap0_6,
#line 448 "try_expand.m"
  MR_Word check_hlds__try_expand__Goals0_7,
#line 448 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goals_8,
#line 448 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_10,
#line 448 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_11);

#line 436 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_conj_5_p_0(
#line 436 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 436 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2,
#line 436 "try_expand.m"
  MR_Word * check_hlds__try_expand__HeadVar__3_3,
#line 436 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_4,
#line 436 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_5);

#line 348 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(
#line 348 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap_6,
#line 348 "try_expand.m"
  MR_Word check_hlds__try_expand__Goal0_7,
#line 348 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_8,
#line 348 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_94,
#line 348 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_95);

#line 283 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_proc_6_p_0(
#line 283 "try_expand.m"
  MR_Word check_hlds__try_expand__PredId_7,
#line 283 "try_expand.m"
  MR_Integer check_hlds__try_expand__ProcId_8,
#line 283 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_19,
#line 283 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_20,
#line 283 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Specs_0_21,
#line 283 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Specs_22);

#line 280 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_pred_5_p_0_1(
#line 280 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 280 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 280 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_2,
#line 280 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_3,
#line 280 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_4,
#line 280 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_5);

#line 273 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_pred_5_p_0(
#line 273 "try_expand.m"
  MR_Word check_hlds__try_expand__PredId_6,
#line 273 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11,
#line 273 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_12,
#line 273 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Specs_0_13,
#line 273 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Specs_14);

#line 262 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_module_4_p_0_1(
#line 262 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 262 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 262 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_2,
#line 262 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_3,
#line 262 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_4,
#line 262 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_5);


static /* final */ const MR_Box check_hlds__try_expand_scalar_common_1[2][2];

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_2[2][8];

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_3[1][3];

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_4[1][9];

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_5[1][7];

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_6[6][1];

static /* final */ const MR_Box check_hlds__try_expand_scalar_common_8[1][5];


#line 869 "try_expand.m"
/* sealed */ struct check_hlds__try_expand__vector_common_type_7_0_s {
#line 869 "try_expand.m"
  const MR_Word check_hlds__try_expand__vector_common_type_7_0__vct_7_f_0;
#line 869 "try_expand.m"
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



#line 769 "check_hlds.try_expand.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__try_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 777 "check_hlds.try_expand.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__try_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 785 "check_hlds.try_expand.c"
static const MR_PseudoTypeInfo check_hlds__try_expand__check_hlds__try_expand__field_types_trys_info_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 793 "check_hlds.try_expand.c"
static const MR_ConstString check_hlds__try_expand__check_hlds__try_expand__field_names_trys_info_0_0[4] = {
  (MR_String) "ti_module_info",
  (MR_String) "ti_pred_info",
  (MR_String) "ti_proc_info",
  (MR_String) "ti_changed"
};

#line 801 "check_hlds.try_expand.c"
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

#line 816 "check_hlds.try_expand.c"
static const MR_DuFunctorDescPtr check_hlds__try_expand__check_hlds__try_expand__du_stag_ordered_trys_info_0_0[1] = {
  &check_hlds__try_expand__check_hlds__try_expand__du_functor_desc_trys_info_0_0
};

#line 821 "check_hlds.try_expand.c"
static const MR_DuPtagLayout check_hlds__try_expand__check_hlds__try_expand__du_ptag_ordered_trys_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__try_expand__check_hlds__try_expand__du_stag_ordered_trys_info_0_0
  }
};

#line 830 "check_hlds.try_expand.c"
static const MR_DuFunctorDescPtr check_hlds__try_expand__check_hlds__try_expand__du_name_ordered_trys_info_0[1] = {
  &check_hlds__try_expand__check_hlds__try_expand__du_functor_desc_trys_info_0_0
};

#line 835 "check_hlds.try_expand.c"
static const MR_Integer check_hlds__try_expand__check_hlds__try_expand__functor_number_map_trys_info_0[1] = {
  (MR_Integer) 0
};

#line 840 "check_hlds.try_expand.c"
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

#line 857 "check_hlds.try_expand.c"
static MR_bool MR_CALL 
check_hlds__try_expand____Unify____trys_info_0_0_10001(
#line 860 "check_hlds.try_expand.c"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 862 "check_hlds.try_expand.c"
  MR_Box check_hlds__try_expand__wrapper_arg_2)
#line 864 "check_hlds.try_expand.c"
{
#line 866 "check_hlds.try_expand.c"
  {
#line 868 "check_hlds.try_expand.c"
    MR_bool check_hlds__try_expand__succeeded;

#line 871 "check_hlds.try_expand.c"
    {
#line 873 "check_hlds.try_expand.c"
      check_hlds__try_expand__succeeded = check_hlds__try_expand____Unify____trys_info_0_0(((MR_Word) check_hlds__try_expand__wrapper_arg_1), ((MR_Word) check_hlds__try_expand__wrapper_arg_2));
    }
#line 876 "check_hlds.try_expand.c"
    return check_hlds__try_expand__succeeded;
#line 878 "check_hlds.try_expand.c"
  }
#line 880 "check_hlds.try_expand.c"
}

#line 883 "check_hlds.try_expand.c"
static void MR_CALL 
check_hlds__try_expand____Compare____trys_info_0_0_10001(
#line 886 "check_hlds.try_expand.c"
  MR_Box * check_hlds__try_expand__wrapper_arg_1,
#line 888 "check_hlds.try_expand.c"
  MR_Box check_hlds__try_expand__wrapper_arg_2,
#line 890 "check_hlds.try_expand.c"
  MR_Box check_hlds__try_expand__wrapper_arg_3)
#line 892 "check_hlds.try_expand.c"
{
#line 894 "check_hlds.try_expand.c"
  {
#line 896 "check_hlds.try_expand.c"
    MR_Word check_hlds__try_expand__conv0_HeadVar__1_1;

#line 899 "check_hlds.try_expand.c"
    {
#line 901 "check_hlds.try_expand.c"
      check_hlds__try_expand____Compare____trys_info_0_0(&check_hlds__try_expand__conv0_HeadVar__1_1, ((MR_Word) check_hlds__try_expand__wrapper_arg_2), ((MR_Word) check_hlds__try_expand__wrapper_arg_3));
    }
#line 904 "check_hlds.try_expand.c"
    *check_hlds__try_expand__wrapper_arg_1 = ((MR_Box) (check_hlds__try_expand__conv0_HeadVar__1_1));
#line 906 "check_hlds.try_expand.c"
  }
#line 908 "check_hlds.try_expand.c"
}

#line 890 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand__IntroducedFrom__pred__make_try_call__890__1_2_p_0(
#line 890 "try_expand.m"
  MR_Word check_hlds__try_expand__PolySpecs_30,
#line 890 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_51)
#line 890 "try_expand.m"
{
#line 890 "try_expand.m"
  {
#line 890 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;

#line 890 "try_expand.m"
    {
#line 890 "try_expand.m"
      check_hlds__try_expand__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__try_expand_scalar_common_1[0], ((MR_Box) (check_hlds__try_expand__PolySpecs_30)), ((MR_Box) (check_hlds__try_expand__HeadVar__2_51)));
    }
#line 890 "try_expand.m"
    return check_hlds__try_expand__succeeded;
#line 890 "try_expand.m"
  }
#line 890 "try_expand.m"
}

#line 340 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand____Compare____trys_info_0_0(
#line 340 "try_expand.m"
  MR_Word * check_hlds__try_expand__HeadVar__1_1,
#line 340 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2,
#line 340 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__3_3)
#line 340 "try_expand.m"
{
#line 340 "try_expand.m"
  {
#line 340 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 340 "try_expand.m"
    MR_Integer check_hlds__try_expand__CastX_15 = (MR_Integer) check_hlds__try_expand__HeadVar__2_2;
#line 340 "try_expand.m"
    MR_Integer check_hlds__try_expand__CastY_16 = (MR_Integer) check_hlds__try_expand__HeadVar__3_3;

#line 340 "try_expand.m"
    check_hlds__try_expand__succeeded = (check_hlds__try_expand__CastX_15 == check_hlds__try_expand__CastY_16);
#line 340 "try_expand.m"
    if (check_hlds__try_expand__succeeded)
#line 961 "check_hlds.try_expand.c"
      *check_hlds__try_expand__HeadVar__1_1 = (MR_Integer) 0;
#line 340 "try_expand.m"
    else
#line 340 "try_expand.m"
      {
#line 340 "try_expand.m"
        MR_Word check_hlds__try_expand__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 340 "try_expand.m"
        MR_Word check_hlds__try_expand__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 340 "try_expand.m"
        MR_Word check_hlds__try_expand__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 2)));
#line 340 "try_expand.m"
        MR_Word check_hlds__try_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 3)));
#line 340 "try_expand.m"
        MR_Word check_hlds__try_expand__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__3_3, (MR_Integer) 0)));
#line 340 "try_expand.m"
        MR_Word check_hlds__try_expand__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__3_3, (MR_Integer) 1)));
#line 340 "try_expand.m"
        MR_Word check_hlds__try_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__3_3, (MR_Integer) 2)));
#line 340 "try_expand.m"
        MR_Word check_hlds__try_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__3_3, (MR_Integer) 3)));
#line 340 "try_expand.m"
        MR_Word check_hlds__try_expand__V_12_12;

#line 340 "try_expand.m"
        {
#line 340 "try_expand.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__try_expand__V_12_12, check_hlds__try_expand__V_4_4, check_hlds__try_expand__V_8_8);
        }
#line 991 "check_hlds.try_expand.c"
        check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_12_12 == (MR_Integer) 0);
#line 340 "try_expand.m"
        check_hlds__try_expand__succeeded = !(check_hlds__try_expand__succeeded);
#line 340 "try_expand.m"
        if (check_hlds__try_expand__succeeded)
#line 340 "try_expand.m"
          *check_hlds__try_expand__HeadVar__1_1 = check_hlds__try_expand__V_12_12;
#line 340 "try_expand.m"
        else
#line 340 "try_expand.m"
          {
#line 340 "try_expand.m"
            MR_Word check_hlds__try_expand__V_13_13;

#line 340 "try_expand.m"
            {
#line 340 "try_expand.m"
              hlds__hlds_pred____Compare____pred_info_0_0(&check_hlds__try_expand__V_13_13, check_hlds__try_expand__V_5_5, check_hlds__try_expand__V_9_9);
            }
#line 1011 "check_hlds.try_expand.c"
            check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_13_13 == (MR_Integer) 0);
#line 340 "try_expand.m"
            check_hlds__try_expand__succeeded = !(check_hlds__try_expand__succeeded);
#line 340 "try_expand.m"
            if (check_hlds__try_expand__succeeded)
#line 340 "try_expand.m"
              *check_hlds__try_expand__HeadVar__1_1 = check_hlds__try_expand__V_13_13;
#line 340 "try_expand.m"
            else
#line 340 "try_expand.m"
              {
#line 340 "try_expand.m"
                MR_Word check_hlds__try_expand__V_14_14;

#line 340 "try_expand.m"
                {
#line 340 "try_expand.m"
                  hlds__hlds_pred____Compare____proc_info_0_0(&check_hlds__try_expand__V_14_14, check_hlds__try_expand__V_6_6, check_hlds__try_expand__V_10_10);
                }
#line 1031 "check_hlds.try_expand.c"
                check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_14_14 == (MR_Integer) 0);
#line 340 "try_expand.m"
                check_hlds__try_expand__succeeded = !(check_hlds__try_expand__succeeded);
#line 340 "try_expand.m"
                if (check_hlds__try_expand__succeeded)
#line 340 "try_expand.m"
                  *check_hlds__try_expand__HeadVar__1_1 = check_hlds__try_expand__V_14_14;
#line 340 "try_expand.m"
                else
#line 340 "try_expand.m"
                  {
#line 340 "try_expand.m"
                    MR_Integer check_hlds__try_expand__V_21_21 = (MR_Integer) check_hlds__try_expand__V_7_7;
#line 340 "try_expand.m"
                    MR_Integer check_hlds__try_expand__V_22_22 = (MR_Integer) check_hlds__try_expand__V_11_11;

#line 340 "try_expand.m"
                    {
#line 340 "try_expand.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__try_expand__HeadVar__1_1, check_hlds__try_expand__V_21_21, check_hlds__try_expand__V_22_22);
                    }
#line 340 "try_expand.m"
                  }
#line 340 "try_expand.m"
              }
#line 340 "try_expand.m"
          }
#line 340 "try_expand.m"
      }
#line 340 "try_expand.m"
  }
#line 340 "try_expand.m"
}

#line 340 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand____Unify____trys_info_0_0(
#line 340 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 340 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2)
#line 340 "try_expand.m"
{
#line 340 "try_expand.m"
  {
#line 340 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 340 "try_expand.m"
    MR_Integer check_hlds__try_expand__CastX_11 = (MR_Integer) check_hlds__try_expand__HeadVar__1_1;
#line 340 "try_expand.m"
    MR_Integer check_hlds__try_expand__CastY_12 = (MR_Integer) check_hlds__try_expand__HeadVar__2_2;

#line 340 "try_expand.m"
    check_hlds__try_expand__succeeded = (check_hlds__try_expand__CastX_11 == check_hlds__try_expand__CastY_12);
#line 340 "try_expand.m"
    if (check_hlds__try_expand__succeeded)
#line 340 "try_expand.m"
      check_hlds__try_expand__succeeded = MR_TRUE;
#line 340 "try_expand.m"
    else
#line 340 "try_expand.m"
      {
#line 340 "try_expand.m"
        MR_Word check_hlds__try_expand__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 0)));
#line 340 "try_expand.m"
        MR_Word check_hlds__try_expand__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 1)));
#line 340 "try_expand.m"
        MR_Word check_hlds__try_expand__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 2)));
#line 340 "try_expand.m"
        MR_Word check_hlds__try_expand__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 3)));
#line 340 "try_expand.m"
        MR_Word check_hlds__try_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 340 "try_expand.m"
        MR_Word check_hlds__try_expand__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 340 "try_expand.m"
        MR_Word check_hlds__try_expand__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 2)));
#line 340 "try_expand.m"
        MR_Word check_hlds__try_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 3)));

#line 1111 "check_hlds.try_expand.c"
        {
#line 1113 "check_hlds.try_expand.c"
          check_hlds__try_expand__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__try_expand__V_3_3, check_hlds__try_expand__V_7_7);
        }
#line 340 "try_expand.m"
        if (check_hlds__try_expand__succeeded)
#line 340 "try_expand.m"
          {
#line 1120 "check_hlds.try_expand.c"
            {
#line 1122 "check_hlds.try_expand.c"
              check_hlds__try_expand__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(check_hlds__try_expand__V_4_4, check_hlds__try_expand__V_8_8);
            }
#line 340 "try_expand.m"
            if (check_hlds__try_expand__succeeded)
#line 340 "try_expand.m"
              {
#line 1129 "check_hlds.try_expand.c"
                {
#line 1131 "check_hlds.try_expand.c"
                  check_hlds__try_expand__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(check_hlds__try_expand__V_5_5, check_hlds__try_expand__V_9_9);
                }
#line 340 "try_expand.m"
                if (check_hlds__try_expand__succeeded)
#line 1136 "check_hlds.try_expand.c"
                  check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_6_6 == check_hlds__try_expand__V_10_10);
#line 340 "try_expand.m"
              }
#line 340 "try_expand.m"
          }
#line 340 "try_expand.m"
      }
#line 340 "try_expand.m"
    return check_hlds__try_expand__succeeded;
#line 340 "try_expand.m"
  }
#line 340 "try_expand.m"
}

#line 934 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_1(
#line 934 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg)
#line 934 "try_expand.m"
{
#line 934 "try_expand.m"
  {
#line 934 "try_expand.m"
    struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s * check_hlds__try_expand__env_ptr = (struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s *) check_hlds__try_expand__env_ptr_arg;

#line 934 "try_expand.m"
    MR_builtin_longjmp((check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__commit_0, 1);
#line 934 "try_expand.m"
  }
#line 934 "try_expand.m"
}

#line 934 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_3(
#line 934 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg)
#line 934 "try_expand.m"
{
#line 934 "try_expand.m"
  {
#line 934 "try_expand.m"
    struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s * check_hlds__try_expand__env_ptr = (struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s *) check_hlds__try_expand__env_ptr_arg;

#line 934 "try_expand.m"
    (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9 = ((MR_Word) (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__conv0_ArgInst_9);
#line 934 "try_expand.m"
    {
#line 934 "try_expand.m"
      check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_2(check_hlds__try_expand__env_ptr);
    }
#line 934 "try_expand.m"
  }
#line 934 "try_expand.m"
}

#line 934 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_2(
#line 934 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg)
#line 934 "try_expand.m"
{
#line 934 "try_expand.m"
  {
#line 934 "try_expand.m"
    struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s * check_hlds__try_expand__env_ptr = (struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s *) check_hlds__try_expand__env_ptr_arg;

#line 934 "try_expand.m"
    {
#line 935 "try_expand.m"
      MR_Word check_hlds__try_expand__V_13_13;
#line 935 "try_expand.m"
      MR_Word check_hlds__try_expand__V_10_10;

#line 935 "try_expand.m"
      (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 935 "try_expand.m"
      if ((check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded)
#line 935 "try_expand.m"
        {
#line 935 "try_expand.m"
          {
#line 935 "try_expand.m"
            check_hlds__try_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9, (MR_Integer) 1)));
#line 935 "try_expand.m"
            check_hlds__try_expand__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__ArgInst_9, (MR_Integer) 2)));
#line 935 "try_expand.m"
          }
#line 935 "try_expand.m"
          (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = (check_hlds__try_expand__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 935 "try_expand.m"
        }
#line 935 "try_expand.m"
      (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = !((check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded);
#line 935 "try_expand.m"
      if ((check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded)
#line 935 "try_expand.m"
        {
#line 935 "try_expand.m"
          check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_1(check_hlds__try_expand__env_ptr);
        }
#line 934 "try_expand.m"
    }
#line 934 "try_expand.m"
  }
#line 934 "try_expand.m"
}

#line 934 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_4(
#line 934 "try_expand.m"
  void * check_hlds__try_expand__env_ptr_arg)
#line 934 "try_expand.m"
{
#line 934 "try_expand.m"
  {
#line 934 "try_expand.m"
    struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s * check_hlds__try_expand__env_ptr = (struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s *) check_hlds__try_expand__env_ptr_arg;

#line 934 "try_expand.m"
    if (MR_builtin_setjmp((check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__commit_0) == 0)
#line 934 "try_expand.m"
      {
#line 934 "try_expand.m"
        {
#line 934 "try_expand.m"
          {
#line 934 "try_expand.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &(check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__conv0_ArgInst_9, (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7, check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_3, check_hlds__try_expand__env_ptr);
          }
#line 934 "try_expand.m"
        }
#line 934 "try_expand.m"
        (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = MR_FALSE;
#line 934 "try_expand.m"
      }
#line 934 "try_expand.m"
    else
#line 934 "try_expand.m"
      (check_hlds__try_expand__env_ptr)->check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded = MR_TRUE;
#line 934 "try_expand.m"
  }
#line 934 "try_expand.m"
}

#line 927 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0(
#line 927 "try_expand.m"
  MR_Word check_hlds__try_expand__TmpTupleVar_5,
#line 927 "try_expand.m"
  MR_Word check_hlds__try_expand__TupleVar_6,
#line 927 "try_expand.m"
  MR_Word check_hlds__try_expand__TupleArgInsts_7,
#line 927 "try_expand.m"
  MR_Word * check_hlds__try_expand__CastOrUnify_8)
#line 927 "try_expand.m"
{
#line 927 "try_expand.m"
  {
#line 927 "try_expand.m"
    struct check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0_s check_hlds__try_expand__env;

#line 927 "try_expand.m"
    (check_hlds__try_expand__env).check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7 = check_hlds__try_expand__TupleArgInsts_7;
#line 934 "try_expand.m"
    {
#line 934 "try_expand.m"
      check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_4(&check_hlds__try_expand__env);
    }
#line 933 "try_expand.m"
    if ((check_hlds__try_expand__env).check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__succeeded)
#line 937 "try_expand.m"
      {
#line 937 "try_expand.m"
        MR_Integer check_hlds__try_expand__TupleArity_11;
#line 937 "try_expand.m"
        MR_Word check_hlds__try_expand__TupleInst_12;
#line 937 "try_expand.m"
        MR_Word check_hlds__try_expand__V_16_16;
#line 937 "try_expand.m"
        MR_Word check_hlds__try_expand__V_17_17;
#line 937 "try_expand.m"
        MR_Word check_hlds__try_expand__V_18_18;
#line 937 "try_expand.m"
        MR_Word check_hlds__try_expand__V_21_21;
#line 937 "try_expand.m"
        MR_Word check_hlds__try_expand__V_22_22;

#line 937 "try_expand.m"
        {
#line 937 "try_expand.m"
          check_hlds__try_expand__TupleArity_11 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (check_hlds__try_expand__env).check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7);
        }
#line 939 "try_expand.m"
        {
#line 939 "try_expand.m"
          check_hlds__try_expand__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 939 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_18_18, 1) = ((MR_Box) (check_hlds__try_expand__TupleArity_11));
#line 939 "try_expand.m"
        }
#line 939 "try_expand.m"
        {
#line 939 "try_expand.m"
          check_hlds__try_expand__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 939 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_17_17, 0) = ((MR_Box) (check_hlds__try_expand__V_18_18));
#line 939 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_17_17, 1) = ((MR_Box) ((check_hlds__try_expand__env).check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0_env_0__TupleArgInsts_7));
#line 939 "try_expand.m"
        }
#line 940 "try_expand.m"
        {
#line 940 "try_expand.m"
          check_hlds__try_expand__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 940 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_16_16, 0) = ((MR_Box) (check_hlds__try_expand__V_17_17));
#line 940 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 940 "try_expand.m"
        }
#line 938 "try_expand.m"
        {
#line 938 "try_expand.m"
          check_hlds__try_expand__TupleInst_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 938 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__TupleInst_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 938 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__TupleInst_12, 1) = ((MR_Box) ((MR_Integer) 0));
#line 938 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__TupleInst_12, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 938 "try_expand.m"
          MR_hl_field(MR_mktag(3), check_hlds__try_expand__TupleInst_12, 3) = ((MR_Box) (check_hlds__try_expand__V_16_16));
#line 938 "try_expand.m"
        }
#line 942 "try_expand.m"
        {
#line 942 "try_expand.m"
          check_hlds__try_expand__V_21_21 = parse_tree__prog_mode__ground_inst_0_f_0();
        }
#line 942 "try_expand.m"
        {
#line 942 "try_expand.m"
          check_hlds__try_expand__V_22_22 = mercury__term__context_init_0_f_0();
        }
#line 941 "try_expand.m"
        {
#line 941 "try_expand.m"
          hlds__goal_util__generate_cast_with_insts_7_p_0((MR_Integer) 1, check_hlds__try_expand__TmpTupleVar_5, check_hlds__try_expand__TupleVar_6, check_hlds__try_expand__V_21_21, check_hlds__try_expand__TupleInst_12, check_hlds__try_expand__V_22_22, check_hlds__try_expand__CastOrUnify_8);
        }
#line 937 "try_expand.m"
      }
#line 933 "try_expand.m"
    else
#line 944 "try_expand.m"
      {
#line 944 "try_expand.m"
        MR_Word check_hlds__try_expand__V_23_23;
#line 944 "try_expand.m"
        MR_Word check_hlds__try_expand__V_24_24;

#line 945 "try_expand.m"
        {
#line 945 "try_expand.m"
          check_hlds__try_expand__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 945 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_23_23, 0) = ((MR_Box) (check_hlds__try_expand__TmpTupleVar_5));
#line 945 "try_expand.m"
        }
#line 945 "try_expand.m"
        {
#line 945 "try_expand.m"
          check_hlds__try_expand__V_24_24 = mercury__term__context_init_0_f_0();
        }
#line 944 "try_expand.m"
        {
#line 944 "try_expand.m"
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__try_expand__TupleVar_6, check_hlds__try_expand__V_23_23, check_hlds__try_expand__V_24_24, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__try_expand_scalar_common_6[1]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__CastOrUnify_8);
        }
#line 944 "try_expand.m"
      }
#line 927 "try_expand.m"
  }
#line 927 "try_expand.m"
}

#line 919 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_unreachable_call_2_p_0(
#line 919 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_3,
#line 919 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_4)
#line 919 "try_expand.m"
{
#line 921 "try_expand.m"
  {
#line 921 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 921 "try_expand.m"
    MR_Word check_hlds__try_expand__V_5_5;
#line 921 "try_expand.m"
    MR_Word check_hlds__try_expand__V_13_13;
#line 921 "try_expand.m"
    MR_Word check_hlds__try_expand__V_14_14;

#line 922 "try_expand.m"
    {
#line 922 "try_expand.m"
      check_hlds__try_expand__V_5_5 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 924 "try_expand.m"
    {
#line 924 "try_expand.m"
      check_hlds__try_expand__V_13_13 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 924 "try_expand.m"
    {
#line 924 "try_expand.m"
      check_hlds__try_expand__V_14_14 = mercury__term__context_init_0_f_0();
    }
#line 922 "try_expand.m"
    {
#line 922 "try_expand.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__try_expand__V_5_5, (MR_String) "unreachable", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__V_13_13, check_hlds__try_expand__ModuleInfo_3, check_hlds__try_expand__V_14_14, check_hlds__try_expand__Goal_4);
    }
#line 921 "try_expand.m"
  }
#line 919 "try_expand.m"
}

#line 890 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand__make_try_call_14_p_0_1(
#line 890 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg)
#line 890 "try_expand.m"
{
#line 890 "try_expand.m"
  {
#line 890 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 890 "try_expand.m"
    MR_Box check_hlds__try_expand__closure = check_hlds__try_expand__closure_arg;

#line 890 "try_expand.m"
    {
#line 890 "try_expand.m"
      check_hlds__try_expand__succeeded = check_hlds__try_expand__IntroducedFrom__pred__make_try_call__890__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__closure, (MR_Integer) 4))));
    }
#line 890 "try_expand.m"
    return check_hlds__try_expand__succeeded;
#line 890 "try_expand.m"
  }
#line 890 "try_expand.m"
}

#line 878 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_try_call_14_p_0(
#line 878 "try_expand.m"
  MR_String check_hlds__try_expand__PredName_15,
#line 878 "try_expand.m"
  MR_Word check_hlds__try_expand__LambdaVar_16,
#line 878 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_17,
#line 878 "try_expand.m"
  MR_Word check_hlds__try_expand__ExtraArgs_18,
#line 878 "try_expand.m"
  MR_Word check_hlds__try_expand__OutputTupleType_19,
#line 878 "try_expand.m"
  MR_Word check_hlds__try_expand__GoalPurity_20,
#line 878 "try_expand.m"
  MR_Word check_hlds__try_expand__Context_21,
#line 878 "try_expand.m"
  MR_Word * check_hlds__try_expand__OverallGoal_22,
#line 878 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_38,
#line 878 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_PredInfo_39,
#line 878 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_40,
#line 878 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_41,
#line 878 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_42,
#line 878 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_43)
#line 878 "try_expand.m"
{
#line 885 "try_expand.m"
  {
#line 885 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 885 "try_expand.m"
    MR_Word check_hlds__try_expand__PolyInfo0_26;
#line 885 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeInfoVar_27;
#line 885 "try_expand.m"
    MR_Word check_hlds__try_expand__MakeTypeInfoGoals_28;
#line 885 "try_expand.m"
    MR_Word check_hlds__try_expand__PolyInfo_29;
#line 885 "try_expand.m"
    MR_Word check_hlds__try_expand__PolySpecs_30;
#line 885 "try_expand.m"
    MR_Word check_hlds__try_expand__Args_32;
#line 885 "try_expand.m"
    MR_Word check_hlds__try_expand__CallGoal0_34;
#line 885 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalInfo_35;
#line 885 "try_expand.m"
    MR_Word check_hlds__try_expand__CallGoal_36;
#line 885 "try_expand.m"
    MR_Word check_hlds__try_expand__V_47_47;
#line 885 "try_expand.m"
    MR_Word check_hlds__try_expand__V_53_53;
#line 885 "try_expand.m"
    MR_Word check_hlds__try_expand__V_54_54;
#line 885 "try_expand.m"
    MR_Word check_hlds__try_expand__V_55_55;
#line 885 "try_expand.m"
    MR_Word check_hlds__try_expand__V_57_57;
#line 885 "try_expand.m"
    MR_Word check_hlds__try_expand__V_61_61;
#line 885 "try_expand.m"
    MR_Word check_hlds__try_expand__V_63_63;
#line 885 "try_expand.m"
    MR_Word check_hlds__try_expand__V_64_64;

#line 886 "try_expand.m"
    {
#line 886 "try_expand.m"
      check_hlds__polymorphism__create_poly_info_4_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_42, check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_38, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_40, &check_hlds__try_expand__PolyInfo0_26);
    }
#line 887 "try_expand.m"
    {
#line 887 "try_expand.m"
      check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(check_hlds__try_expand__OutputTupleType_19, check_hlds__try_expand__Context_21, &check_hlds__try_expand__TypeInfoVar_27, &check_hlds__try_expand__MakeTypeInfoGoals_28, check_hlds__try_expand__PolyInfo0_26, &check_hlds__try_expand__PolyInfo_29);
    }
#line 889 "try_expand.m"
    {
#line 889 "try_expand.m"
      check_hlds__polymorphism__poly_info_extract_7_p_0(check_hlds__try_expand__PolyInfo_29, &check_hlds__try_expand__PolySpecs_30, check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_38, check_hlds__try_expand__STATE_VARIABLE_PredInfo_39, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_40, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_41, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_43);
    }
#line 890 "try_expand.m"
    {
#line 890 "try_expand.m"
      check_hlds__try_expand__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 890 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_47_47, 0) = ((MR_Box) (&check_hlds__try_expand_scalar_common_8[0]));
#line 890 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_47_47, 1) = ((MR_Box) (check_hlds__try_expand__make_try_call_14_p_0_1));
#line 890 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 890 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_47_47, 3) = ((MR_Box) (check_hlds__try_expand__PolySpecs_30));
#line 890 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_47_47, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 890 "try_expand.m"
    }
#line 890 "try_expand.m"
    {
#line 890 "try_expand.m"
      mercury__require__expect_4_p_0(check_hlds__try_expand__V_47_47, (MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.make_try_call\'/14", (MR_String) "got errors while making type_info_var");
    }
#line 895 "try_expand.m"
    {
#line 895 "try_expand.m"
      check_hlds__try_expand__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 895 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_55_55, 0) = ((MR_Box) (check_hlds__try_expand__ResultVar_17));
#line 895 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 895 "try_expand.m"
    }
#line 895 "try_expand.m"
    {
#line 895 "try_expand.m"
      check_hlds__try_expand__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 895 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_54_54, 0) = ((MR_Box) (check_hlds__try_expand__LambdaVar_16));
#line 895 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_54_54, 1) = ((MR_Box) (check_hlds__try_expand__V_55_55));
#line 895 "try_expand.m"
    }
#line 895 "try_expand.m"
    {
#line 895 "try_expand.m"
      check_hlds__try_expand__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 895 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_53_53, 0) = ((MR_Box) (check_hlds__try_expand__TypeInfoVar_27));
#line 895 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_53_53, 1) = ((MR_Box) (check_hlds__try_expand__V_54_54));
#line 895 "try_expand.m"
    }
#line 895 "try_expand.m"
    {
#line 895 "try_expand.m"
      check_hlds__try_expand__Args_32 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__try_expand_scalar_common_1[1], check_hlds__try_expand__V_53_53, check_hlds__try_expand__ExtraArgs_18);
    }
#line 897 "try_expand.m"
    {
#line 897 "try_expand.m"
      check_hlds__try_expand__V_57_57 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 899 "try_expand.m"
    {
#line 899 "try_expand.m"
      check_hlds__try_expand__V_61_61 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 897 "try_expand.m"
    {
#line 897 "try_expand.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__try_expand__V_57_57, check_hlds__try_expand__PredName_15, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[5]), (MR_Integer) 4, (MR_Integer) 0, check_hlds__try_expand__Args_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__V_61_61, *check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_43, check_hlds__try_expand__Context_21, &check_hlds__try_expand__CallGoal0_34);
    }
#line 901 "try_expand.m"
    {
#line 901 "try_expand.m"
      hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__try_expand__Context_21, &check_hlds__try_expand__GoalInfo_35);
    }
#line 909 "try_expand.m"
#line 909 "try_expand.m"
    switch (check_hlds__try_expand__GoalPurity_20) {
#line 909 "try_expand.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 909 "try_expand.m"
      case (MR_Integer) 2:
#line 909 "try_expand.m"
      case (MR_Integer) 1:
#line 912 "try_expand.m"
        {
#line 912 "try_expand.m"
          MR_Word check_hlds__try_expand__ScopeReason_37;
#line 912 "try_expand.m"
          MR_Word check_hlds__try_expand__V_62_62;

#line 913 "try_expand.m"
          {
#line 913 "try_expand.m"
            check_hlds__try_expand__ScopeReason_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 913 "try_expand.m"
            MR_hl_field(MR_mktag(2), check_hlds__try_expand__ScopeReason_37, 0) = ((MR_Box) (check_hlds__try_expand__GoalPurity_20));
#line 913 "try_expand.m"
          }
#line 914 "try_expand.m"
          {
#line 914 "try_expand.m"
            check_hlds__try_expand__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 914 "try_expand.m"
            MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 914 "try_expand.m"
            MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_62_62, 1) = ((MR_Box) (check_hlds__try_expand__ScopeReason_37));
#line 914 "try_expand.m"
            MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_62_62, 2) = ((MR_Box) (check_hlds__try_expand__CallGoal0_34));
#line 914 "try_expand.m"
          }
#line 914 "try_expand.m"
          {
#line 914 "try_expand.m"
            check_hlds__try_expand__CallGoal_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 914 "try_expand.m"
            MR_hl_field(MR_mktag(0), check_hlds__try_expand__CallGoal_36, 0) = ((MR_Box) (check_hlds__try_expand__V_62_62));
#line 914 "try_expand.m"
            MR_hl_field(MR_mktag(0), check_hlds__try_expand__CallGoal_36, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo_35));
#line 914 "try_expand.m"
          }
#line 912 "try_expand.m"
        }
#line 909 "try_expand.m"
        break;
#line 909 "try_expand.m"
      case (MR_Integer) 0:
#line 908 "try_expand.m"
        check_hlds__try_expand__CallGoal_36 = check_hlds__try_expand__CallGoal0_34;
#line 909 "try_expand.m"
        break;
#line 909 "try_expand.m"
    }
#line 917 "try_expand.m"
    {
#line 917 "try_expand.m"
      check_hlds__try_expand__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 917 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_64_64, 0) = ((MR_Box) (check_hlds__try_expand__CallGoal_36));
#line 917 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 917 "try_expand.m"
    }
#line 917 "try_expand.m"
    {
#line 917 "try_expand.m"
      check_hlds__try_expand__V_63_63 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__try_expand__MakeTypeInfoGoals_28, check_hlds__try_expand__V_64_64);
    }
#line 917 "try_expand.m"
    {
#line 917 "try_expand.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__try_expand__V_63_63, check_hlds__try_expand__GoalInfo_35, check_hlds__try_expand__OverallGoal_22);
    }
#line 885 "try_expand.m"
  }
#line 878 "try_expand.m"
}

#line 807 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__make_try_lambda_8_p_0(
#line 807 "try_expand.m"
  MR_Word check_hlds__try_expand__Body0_9,
#line 807 "try_expand.m"
  MR_Word check_hlds__try_expand__OutputVarsSet_10,
#line 807 "try_expand.m"
  MR_Word check_hlds__try_expand__OutputTupleType_11,
#line 807 "try_expand.m"
  MR_Word check_hlds__try_expand__MaybeIO_12,
#line 807 "try_expand.m"
  MR_Word * check_hlds__try_expand__LambdaVar_13,
#line 807 "try_expand.m"
  MR_Word * check_hlds__try_expand__AssignLambdaVar_14,
#line 807 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_41,
#line 807 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_42)
#line 807 "try_expand.m"
{
#line 812 "try_expand.m"
  {
#line 812 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeCtorInfo_87_87;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeInfo_88_88;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__BodyInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Body0_9, (MR_Integer) 1)));
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__NonLocals0_18;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__NonLocals1_19;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__OutputTupleVar_20;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaParams_23;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaParamTypes_24;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaParamModes_25;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__NonLocals_26;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaType_27;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__MakeOutputTuple_28;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaBody0_29;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__VarSet0_30;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__VarTypes0_31;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__VarSet_32;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__VarTypes_33;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__Renaming_34;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaBody_35;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__BodyGoalInfo_37;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__BodyDetism_38;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaDetism_39;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__RHS_40;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_69_69;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__V_71_71;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__V_72_72;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__V_75_75;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_76_76;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__V_82_82;
#line 812 "try_expand.m"
    MR_Word check_hlds__try_expand__V_83_83;
#line 813 "try_expand.m"
    MR_Word check_hlds__try_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Body0_9, (MR_Integer) 0)));
#line 853 "try_expand.m"
    MR_Word check_hlds__try_expand__V_36_36;

#line 814 "try_expand.m"
    {
#line 814 "try_expand.m"
      check_hlds__try_expand__NonLocals0_18 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__try_expand__BodyInfo0_17);
    }
#line 1843 "check_hlds.try_expand.c"
    check_hlds__try_expand__TypeCtorInfo_87_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 815 "try_expand.m"
    {
#line 815 "try_expand.m"
      parse_tree__set_of_var__difference_3_p_0(check_hlds__try_expand__TypeCtorInfo_87_87, check_hlds__try_expand__NonLocals0_18, check_hlds__try_expand__OutputVarsSet_10, &check_hlds__try_expand__NonLocals1_19);
    }
#line 817 "try_expand.m"
    {
#line 817 "try_expand.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(check_hlds__try_expand__OutputTupleType_11, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[3]), &check_hlds__try_expand__OutputTupleVar_20, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_41, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44);
    }
#line 825 "try_expand.m"
    if ((check_hlds__try_expand__MaybeIO_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 826 "try_expand.m"
      {
#line 826 "try_expand.m"
        MR_Word check_hlds__try_expand__V_48_48;

#line 827 "try_expand.m"
        {
#line 827 "try_expand.m"
          check_hlds__try_expand__LambdaParams_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 827 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParams_23, 0) = ((MR_Box) (check_hlds__try_expand__OutputTupleVar_20));
#line 827 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParams_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 827 "try_expand.m"
        }
#line 828 "try_expand.m"
        {
#line 828 "try_expand.m"
          check_hlds__try_expand__LambdaParamTypes_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 828 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamTypes_24, 0) = ((MR_Box) (check_hlds__try_expand__OutputTupleType_11));
#line 828 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamTypes_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 828 "try_expand.m"
        }
#line 829 "try_expand.m"
        {
#line 829 "try_expand.m"
          check_hlds__try_expand__V_48_48 = parse_tree__prog_mode__out_mode_0_f_0();
        }
#line 829 "try_expand.m"
        {
#line 829 "try_expand.m"
          check_hlds__try_expand__LambdaParamModes_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 829 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamModes_25, 0) = ((MR_Box) (check_hlds__try_expand__V_48_48));
#line 829 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamModes_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 829 "try_expand.m"
        }
#line 830 "try_expand.m"
        check_hlds__try_expand__NonLocals_26 = check_hlds__try_expand__NonLocals0_18;
#line 826 "try_expand.m"
      }
#line 825 "try_expand.m"
    else
#line 820 "try_expand.m"
      {
#line 820 "try_expand.m"
        MR_Word check_hlds__try_expand__IOVarInitial_21;
#line 820 "try_expand.m"
        MR_Word check_hlds__try_expand__IOVarFinal_22;
#line 820 "try_expand.m"
        MR_Word check_hlds__try_expand__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeIO_12, (MR_Integer) 0)));
#line 820 "try_expand.m"
        MR_Word check_hlds__try_expand__V_51_51;
#line 820 "try_expand.m"
        MR_Word check_hlds__try_expand__V_52_52;
#line 820 "try_expand.m"
        MR_Word check_hlds__try_expand__V_54_54;
#line 820 "try_expand.m"
        MR_Word check_hlds__try_expand__V_55_55;
#line 820 "try_expand.m"
        MR_Word check_hlds__try_expand__V_56_56;
#line 820 "try_expand.m"
        MR_Word check_hlds__try_expand__V_57_57;
#line 820 "try_expand.m"
        MR_Word check_hlds__try_expand__V_59_59;
#line 820 "try_expand.m"
        MR_Word check_hlds__try_expand__V_60_60;
#line 820 "try_expand.m"
        MR_Word check_hlds__try_expand__V_61_61;
#line 820 "try_expand.m"
        MR_Word check_hlds__try_expand__V_62_62;
#line 820 "try_expand.m"
        MR_Word check_hlds__try_expand__V_63_63;

#line 820 "try_expand.m"
        check_hlds__try_expand__IOVarInitial_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_50_50, (MR_Integer) 0)));
#line 820 "try_expand.m"
        check_hlds__try_expand__IOVarFinal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_50_50, (MR_Integer) 1)));
#line 821 "try_expand.m"
        {
#line 821 "try_expand.m"
          check_hlds__try_expand__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 821 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, 0) = ((MR_Box) (check_hlds__try_expand__IOVarFinal_22));
#line 821 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 821 "try_expand.m"
        }
#line 821 "try_expand.m"
        {
#line 821 "try_expand.m"
          check_hlds__try_expand__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 821 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, 0) = ((MR_Box) (check_hlds__try_expand__IOVarInitial_21));
#line 821 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, 1) = ((MR_Box) (check_hlds__try_expand__V_52_52));
#line 821 "try_expand.m"
        }
#line 821 "try_expand.m"
        {
#line 821 "try_expand.m"
          check_hlds__try_expand__LambdaParams_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 821 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParams_23, 0) = ((MR_Box) (check_hlds__try_expand__OutputTupleVar_20));
#line 821 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParams_23, 1) = ((MR_Box) (check_hlds__try_expand__V_51_51));
#line 821 "try_expand.m"
        }
#line 822 "try_expand.m"
        {
#line 822 "try_expand.m"
          check_hlds__try_expand__V_55_55 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
        }
#line 822 "try_expand.m"
        {
#line 822 "try_expand.m"
          check_hlds__try_expand__V_57_57 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
        }
#line 822 "try_expand.m"
        {
#line 822 "try_expand.m"
          check_hlds__try_expand__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 822 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_56_56, 0) = ((MR_Box) (check_hlds__try_expand__V_57_57));
#line 822 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 822 "try_expand.m"
        }
#line 822 "try_expand.m"
        {
#line 822 "try_expand.m"
          check_hlds__try_expand__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 822 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_54_54, 0) = ((MR_Box) (check_hlds__try_expand__V_55_55));
#line 822 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_54_54, 1) = ((MR_Box) (check_hlds__try_expand__V_56_56));
#line 822 "try_expand.m"
        }
#line 822 "try_expand.m"
        {
#line 822 "try_expand.m"
          check_hlds__try_expand__LambdaParamTypes_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 822 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamTypes_24, 0) = ((MR_Box) (check_hlds__try_expand__OutputTupleType_11));
#line 822 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamTypes_24, 1) = ((MR_Box) (check_hlds__try_expand__V_54_54));
#line 822 "try_expand.m"
        }
#line 823 "try_expand.m"
        {
#line 823 "try_expand.m"
          check_hlds__try_expand__V_59_59 = parse_tree__prog_mode__out_mode_0_f_0();
        }
#line 823 "try_expand.m"
        {
#line 823 "try_expand.m"
          check_hlds__try_expand__V_61_61 = parse_tree__prog_mode__di_mode_0_f_0();
        }
#line 823 "try_expand.m"
        {
#line 823 "try_expand.m"
          check_hlds__try_expand__V_63_63 = parse_tree__prog_mode__uo_mode_0_f_0();
        }
#line 823 "try_expand.m"
        {
#line 823 "try_expand.m"
          check_hlds__try_expand__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 823 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_62_62, 0) = ((MR_Box) (check_hlds__try_expand__V_63_63));
#line 823 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 823 "try_expand.m"
        }
#line 823 "try_expand.m"
        {
#line 823 "try_expand.m"
          check_hlds__try_expand__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 823 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_60_60, 0) = ((MR_Box) (check_hlds__try_expand__V_61_61));
#line 823 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_60_60, 1) = ((MR_Box) (check_hlds__try_expand__V_62_62));
#line 823 "try_expand.m"
        }
#line 823 "try_expand.m"
        {
#line 823 "try_expand.m"
          check_hlds__try_expand__LambdaParamModes_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 823 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamModes_25, 0) = ((MR_Box) (check_hlds__try_expand__V_59_59));
#line 823 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__LambdaParamModes_25, 1) = ((MR_Box) (check_hlds__try_expand__V_60_60));
#line 823 "try_expand.m"
        }
#line 824 "try_expand.m"
        {
#line 824 "try_expand.m"
          parse_tree__set_of_var__delete_3_p_0(check_hlds__try_expand__TypeCtorInfo_87_87, check_hlds__try_expand__IOVarFinal_22, check_hlds__try_expand__NonLocals1_19, &check_hlds__try_expand__NonLocals_26);
        }
#line 820 "try_expand.m"
      }
#line 833 "try_expand.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 832 "try_expand.m"
    {
#line 832 "try_expand.m"
      check_hlds__try_expand__LambdaType_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 832 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__LambdaType_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 832 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__LambdaType_27, 1) = ((MR_Box) (check_hlds__try_expand__LambdaParamTypes_24));
#line 832 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__LambdaType_27, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 832 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__LambdaType_27, 3) = ((MR_Box) ((MR_Integer) 0));
#line 832 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__LambdaType_27, 4) = NULL;
#line 832 "try_expand.m"
    }
#line 834 "try_expand.m"
    {
#line 834 "try_expand.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(check_hlds__try_expand__LambdaType_27, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[4]), check_hlds__try_expand__LambdaVar_13, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_69_69);
    }
#line 838 "try_expand.m"
    {
#line 838 "try_expand.m"
      check_hlds__try_expand__V_71_71 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__try_expand__TypeCtorInfo_87_87, check_hlds__try_expand__OutputVarsSet_10);
    }
#line 838 "try_expand.m"
    {
#line 838 "try_expand.m"
      hlds__make_goal__construct_tuple_3_p_0(check_hlds__try_expand__OutputTupleVar_20, check_hlds__try_expand__V_71_71, &check_hlds__try_expand__MakeOutputTuple_28);
    }
#line 840 "try_expand.m"
    {
#line 840 "try_expand.m"
      hlds__hlds_goal__conjoin_goals_3_p_0(check_hlds__try_expand__Body0_9, check_hlds__try_expand__MakeOutputTuple_28, &check_hlds__try_expand__LambdaBody0_29);
    }
#line 843 "try_expand.m"
    {
#line 843 "try_expand.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ProcInfo_69_69, &check_hlds__try_expand__VarSet0_30);
    }
#line 844 "try_expand.m"
    {
#line 844 "try_expand.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ProcInfo_69_69, &check_hlds__try_expand__VarTypes0_31);
    }
#line 845 "try_expand.m"
    {
#line 845 "try_expand.m"
      check_hlds__try_expand__V_72_72 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__try_expand__TypeCtorInfo_87_87, check_hlds__try_expand__OutputVarsSet_10);
    }
#line 2113 "check_hlds.try_expand.c"
    check_hlds__try_expand__TypeInfo_88_88 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
#line 847 "try_expand.m"
    {
#line 847 "try_expand.m"
      check_hlds__try_expand__V_75_75 = mercury__map__init_0_f_0(check_hlds__try_expand__TypeInfo_88_88, check_hlds__try_expand__TypeInfo_88_88);
    }
#line 845 "try_expand.m"
    {
#line 845 "try_expand.m"
      hlds__goal_util__clone_variables_9_p_0(check_hlds__try_expand__V_72_72, check_hlds__try_expand__VarSet0_30, check_hlds__try_expand__VarTypes0_31, check_hlds__try_expand__VarSet0_30, &check_hlds__try_expand__VarSet_32, check_hlds__try_expand__VarTypes0_31, &check_hlds__try_expand__VarTypes_33, check_hlds__try_expand__V_75_75, &check_hlds__try_expand__Renaming_34);
    }
#line 848 "try_expand.m"
    {
#line 848 "try_expand.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__try_expand__VarSet_32, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_69_69, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_76_76);
    }
#line 849 "try_expand.m"
    {
#line 849 "try_expand.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__try_expand__VarTypes_33, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_76_76, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_42);
    }
#line 850 "try_expand.m"
    {
#line 850 "try_expand.m"
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(check_hlds__try_expand__Renaming_34, check_hlds__try_expand__LambdaBody0_29, &check_hlds__try_expand__LambdaBody_35);
    }
#line 853 "try_expand.m"
    check_hlds__try_expand__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__LambdaBody_35, (MR_Integer) 0)));
#line 853 "try_expand.m"
    check_hlds__try_expand__BodyGoalInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__LambdaBody_35, (MR_Integer) 1)));
#line 854 "try_expand.m"
    {
#line 854 "try_expand.m"
      check_hlds__try_expand__BodyDetism_38 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__try_expand__BodyGoalInfo_37);
    }
#line 869 "try_expand.m"
    check_hlds__try_expand__LambdaDetism_39 = ((&check_hlds__try_expand_vector_common_7[0 + check_hlds__try_expand__BodyDetism_38]))->check_hlds__try_expand__vector_common_type_7_0__vct_7_f_0;
#line 859 "try_expand.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 859 "try_expand.m"
    {
#line 859 "try_expand.m"
      check_hlds__try_expand__V_82_82 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__try_expand__TypeCtorInfo_87_87, check_hlds__try_expand__NonLocals_26);
    }
#line 858 "try_expand.m"
    {
#line 858 "try_expand.m"
      check_hlds__try_expand__RHS_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 858 "try_expand.m"
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 0) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((MR_Integer) 0 << (MR_Integer) 3)))))));
#line 858 "try_expand.m"
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 1) = (MR_Integer) 0;
#line 858 "try_expand.m"
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 2) = ((MR_Box) (check_hlds__try_expand__V_82_82));
#line 858 "try_expand.m"
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 3) = ((MR_Box) (check_hlds__try_expand__LambdaParams_23));
#line 858 "try_expand.m"
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 4) = ((MR_Box) (check_hlds__try_expand__LambdaParamModes_25));
#line 858 "try_expand.m"
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 5) = ((MR_Box) (check_hlds__try_expand__LambdaDetism_39));
#line 858 "try_expand.m"
      MR_hl_field(MR_mktag(2), check_hlds__try_expand__RHS_40, 6) = ((MR_Box) (check_hlds__try_expand__LambdaBody_35));
#line 858 "try_expand.m"
    }
#line 862 "try_expand.m"
    {
#line 862 "try_expand.m"
      check_hlds__try_expand__V_83_83 = mercury__term__context_init_0_f_0();
    }
#line 861 "try_expand.m"
    {
#line 861 "try_expand.m"
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(*check_hlds__try_expand__LambdaVar_13, check_hlds__try_expand__RHS_40, check_hlds__try_expand__V_83_83, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__try_expand_scalar_common_6[1]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__AssignLambdaVar_14);
    }
#line 812 "try_expand.m"
  }
#line 807 "try_expand.m"
}

#line 785 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__lookup_case_goal_3_p_0(
#line 785 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 785 "try_expand.m"
  MR_Word check_hlds__try_expand__ConsId_2,
#line 785 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_3)
#line 785 "try_expand.m"
{
#line 787 "try_expand.m"
  while (MR_TRUE)
#line 787 "try_expand.m"
    {
#line 787 "try_expand.m"
      /* tailcall optimized into a loop */
#line 787 "try_expand.m"
      {
#line 787 "try_expand.m"
        MR_bool check_hlds__try_expand__succeeded;

#line 787 "try_expand.m"
        if ((check_hlds__try_expand__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 787 "try_expand.m"
          {
#line 787 "try_expand.m"
            MR_String check_hlds__try_expand__V_8_8;
#line 787 "try_expand.m"
            MR_String check_hlds__try_expand__V_10_10;

#line 788 "try_expand.m"
            {
#line 788 "try_expand.m"
              check_hlds__try_expand__V_10_10 = mercury__string__string_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, ((MR_Box) (check_hlds__try_expand__ConsId_2)));
            }
#line 788 "try_expand.m"
            {
#line 788 "try_expand.m"
              check_hlds__try_expand__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "couldn\'t find ", check_hlds__try_expand__V_10_10);
            }
#line 788 "try_expand.m"
            {
#line 788 "try_expand.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.lookup_case_goal\'/3", check_hlds__try_expand__V_8_8);
#line 788 "try_expand.m"
              return;
            }
#line 787 "try_expand.m"
          }
#line 787 "try_expand.m"
        else
#line 789 "try_expand.m"
          {
#line 789 "try_expand.m"
            MR_Word check_hlds__try_expand__Case_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 0)));
#line 789 "try_expand.m"
            MR_Word check_hlds__try_expand__Cases_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__1_1, (MR_Integer) 1)));
#line 790 "try_expand.m"
            MR_Word check_hlds__try_expand__GoalPrime_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case_11, (MR_Integer) 2)));
#line 790 "try_expand.m"
            MR_Word check_hlds__try_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case_11, (MR_Integer) 1)));
#line 790 "try_expand.m"
            MR_Word check_hlds__try_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case_11, (MR_Integer) 0)));

#line 790 "try_expand.m"
            {
#line 790 "try_expand.m"
              check_hlds__try_expand__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__try_expand__ConsId_2, check_hlds__try_expand__V_18_18);
            }
#line 790 "try_expand.m"
            if (check_hlds__try_expand__succeeded)
#line 790 "try_expand.m"
              check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 790 "try_expand.m"
            if (check_hlds__try_expand__succeeded)
#line 791 "try_expand.m"
              *check_hlds__try_expand__Goal_3 = check_hlds__try_expand__GoalPrime_15;
#line 790 "try_expand.m"
            else
#line 793 "try_expand.m"
              {
#line 793 "try_expand.m"
                /* direct tailcall eliminated */
#line 793 "try_expand.m"
                {
#line 793 "try_expand.m"
                  MR_Word check_hlds__try_expand__HeadVar__1__tmp_copy_1 = check_hlds__try_expand__Cases_12;

#line 793 "try_expand.m"
                  check_hlds__try_expand__HeadVar__1_1 = check_hlds__try_expand__HeadVar__1__tmp_copy_1;
#line 793 "try_expand.m"
                }
#line 793 "try_expand.m"
                continue;
#line 793 "try_expand.m"
              }
#line 789 "try_expand.m"
          }
#line 787 "try_expand.m"
      }
#line 787 "try_expand.m"
      break;
#line 787 "try_expand.m"
    }
#line 785 "try_expand.m"
}

#line 717 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand__extract_from_succeeded_goal_5_p_0(
#line 717 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_6,
#line 717 "try_expand.m"
  MR_Word check_hlds__try_expand__SucceededGoal_7,
#line 717 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_8,
#line 717 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_9,
#line 717 "try_expand.m"
  MR_Word * check_hlds__try_expand__MaybeElse_10)
#line 717 "try_expand.m"
{
#line 721 "try_expand.m"
  {
#line 721 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 721 "try_expand.m"
    MR_Word check_hlds__try_expand__Conjuncts0_11;
#line 721 "try_expand.m"
    MR_Word check_hlds__try_expand__DeconstructResult_13;
#line 721 "try_expand.m"
    MR_Word check_hlds__try_expand__TestNullTuple_14;
#line 721 "try_expand.m"
    MR_Word check_hlds__try_expand__Conjuncts1_15;
#line 721 "try_expand.m"
    MR_Word check_hlds__try_expand__TestRHS_23;
#line 721 "try_expand.m"
    MR_Word check_hlds__try_expand__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SucceededGoal_7, (MR_Integer) 0)));
#line 721 "try_expand.m"
    MR_Word check_hlds__try_expand__V_49_49;
#line 721 "try_expand.m"
    MR_Word check_hlds__try_expand__V_50_50;
#line 721 "try_expand.m"
    MR_Word check_hlds__try_expand__V_51_51;
#line 721 "try_expand.m"
    MR_Word check_hlds__try_expand__V_52_52;
#line 722 "try_expand.m"
    MR_Word check_hlds__try_expand__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SucceededGoal_7, (MR_Integer) 1)));
#line 724 "try_expand.m"
    MR_Word check_hlds__try_expand__V_21_21;
#line 724 "try_expand.m"
    MR_Word check_hlds__try_expand___ResultVar_16;
#line 724 "try_expand.m"
    MR_Word check_hlds__try_expand__V_17_17;
#line 724 "try_expand.m"
    MR_Word check_hlds__try_expand__V_18_18;
#line 724 "try_expand.m"
    MR_Word check_hlds__try_expand__V_19_19;
#line 724 "try_expand.m"
    MR_Word check_hlds__try_expand__V_20_20;
#line 725 "try_expand.m"
    MR_Word check_hlds__try_expand__V_27_27;
#line 725 "try_expand.m"
    MR_Word check_hlds__try_expand__V_22_22;
#line 725 "try_expand.m"
    MR_Word check_hlds__try_expand__V_24_24;
#line 725 "try_expand.m"
    MR_Word check_hlds__try_expand__V_25_25;
#line 725 "try_expand.m"
    MR_Word check_hlds__try_expand__V_26_26;
#line 726 "try_expand.m"
    MR_Word check_hlds__try_expand__V_53_53;
#line 726 "try_expand.m"
    MR_Integer check_hlds__try_expand__V_54_54;
#line 726 "try_expand.m"
    MR_Word check_hlds__try_expand__V_55_55;
#line 726 "try_expand.m"
    MR_Word check_hlds__try_expand__V_56_56;
#line 728 "try_expand.m"
    MR_Word check_hlds__try_expand__Rest_30;
#line 728 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalPrime_32;
#line 728 "try_expand.m"
    MR_Word check_hlds__try_expand__Then0_33;
#line 728 "try_expand.m"
    MR_Word check_hlds__try_expand__Else0_34;
#line 729 "try_expand.m"
    MR_Word check_hlds__try_expand__IfThenElse_28;
#line 729 "try_expand.m"
    MR_Word check_hlds__try_expand__V_57_57;
#line 729 "try_expand.m"
    MR_Word check_hlds__try_expand__V_29_29;
#line 730 "try_expand.m"
    MR_Word check_hlds__try_expand__V_31_31;

#line 722 "try_expand.m"
    check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_48_48)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_48_48, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 722 "try_expand.m"
    if (check_hlds__try_expand__succeeded)
#line 722 "try_expand.m"
      {
#line 722 "try_expand.m"
        check_hlds__try_expand__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_48_48, (MR_Integer) 1)));
#line 722 "try_expand.m"
        check_hlds__try_expand__Conjuncts0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_48_48, (MR_Integer) 2)));
#line 722 "try_expand.m"
        check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_49_49 == (MR_Integer) 0);
#line 721 "try_expand.m"
        if (check_hlds__try_expand__succeeded)
#line 721 "try_expand.m"
          {
#line 723 "try_expand.m"
            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__Conjuncts0_11)) == (MR_mktag((MR_Integer) 1)));
#line 723 "try_expand.m"
            if (check_hlds__try_expand__succeeded)
#line 723 "try_expand.m"
              {
#line 723 "try_expand.m"
                check_hlds__try_expand__DeconstructResult_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts0_11, (MR_Integer) 0)));
#line 723 "try_expand.m"
                check_hlds__try_expand__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts0_11, (MR_Integer) 1)));
#line 723 "try_expand.m"
                check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_50_50)) == (MR_mktag((MR_Integer) 1)));
#line 723 "try_expand.m"
                if (check_hlds__try_expand__succeeded)
#line 723 "try_expand.m"
                  {
#line 723 "try_expand.m"
                    check_hlds__try_expand__TestNullTuple_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_50_50, (MR_Integer) 0)));
#line 723 "try_expand.m"
                    check_hlds__try_expand__Conjuncts1_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_50_50, (MR_Integer) 1)));
#line 724 "try_expand.m"
                    check_hlds__try_expand__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__DeconstructResult_13, (MR_Integer) 0)));
#line 724 "try_expand.m"
                    check_hlds__try_expand__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__DeconstructResult_13, (MR_Integer) 1)));
#line 724 "try_expand.m"
                    check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_51_51)) == (MR_mktag((MR_Integer) 1)));
#line 724 "try_expand.m"
                    if (check_hlds__try_expand__succeeded)
#line 724 "try_expand.m"
                      {
#line 724 "try_expand.m"
                        check_hlds__try_expand___ResultVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, (MR_Integer) 0)));
#line 724 "try_expand.m"
                        check_hlds__try_expand__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, (MR_Integer) 1)));
#line 724 "try_expand.m"
                        check_hlds__try_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, (MR_Integer) 2)));
#line 724 "try_expand.m"
                        check_hlds__try_expand__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, (MR_Integer) 3)));
#line 724 "try_expand.m"
                        check_hlds__try_expand__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_51_51, (MR_Integer) 4)));
#line 725 "try_expand.m"
                        check_hlds__try_expand__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__TestNullTuple_14, (MR_Integer) 0)));
#line 725 "try_expand.m"
                        check_hlds__try_expand__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__TestNullTuple_14, (MR_Integer) 1)));
#line 725 "try_expand.m"
                        check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 725 "try_expand.m"
                        if (check_hlds__try_expand__succeeded)
#line 725 "try_expand.m"
                          {
#line 725 "try_expand.m"
                            check_hlds__try_expand__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, (MR_Integer) 0)));
#line 725 "try_expand.m"
                            check_hlds__try_expand__TestRHS_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, (MR_Integer) 1)));
#line 725 "try_expand.m"
                            check_hlds__try_expand__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, (MR_Integer) 2)));
#line 725 "try_expand.m"
                            check_hlds__try_expand__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, (MR_Integer) 3)));
#line 725 "try_expand.m"
                            check_hlds__try_expand__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_52_52, (MR_Integer) 4)));
#line 726 "try_expand.m"
                            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__TestRHS_23)) == (MR_mktag((MR_Integer) 1)));
#line 726 "try_expand.m"
                            if (check_hlds__try_expand__succeeded)
#line 726 "try_expand.m"
                              {
#line 726 "try_expand.m"
                                check_hlds__try_expand__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__TestRHS_23, (MR_Integer) 0)));
#line 726 "try_expand.m"
                                check_hlds__try_expand__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__TestRHS_23, (MR_Integer) 1)));
#line 726 "try_expand.m"
                                check_hlds__try_expand__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__TestRHS_23, (MR_Integer) 2)));
#line 726 "try_expand.m"
                                check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_53_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_53_53, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 726 "try_expand.m"
                                if (check_hlds__try_expand__succeeded)
#line 726 "try_expand.m"
                                  {
#line 726 "try_expand.m"
                                    check_hlds__try_expand__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_53_53, (MR_Integer) 1)));
#line 726 "try_expand.m"
                                    check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_54_54 == (MR_Integer) 0);
#line 726 "try_expand.m"
                                    if (check_hlds__try_expand__succeeded)
#line 726 "try_expand.m"
                                      {
#line 726 "try_expand.m"
                                        check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_55_55 == (MR_Integer) 0);
#line 726 "try_expand.m"
                                        if (check_hlds__try_expand__succeeded)
#line 726 "try_expand.m"
                                          check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 726 "try_expand.m"
                                      }
#line 726 "try_expand.m"
                                  }
#line 726 "try_expand.m"
                              }
#line 721 "try_expand.m"
                            if (check_hlds__try_expand__succeeded)
#line 721 "try_expand.m"
                              {
#line 729 "try_expand.m"
                                check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__Conjuncts1_15)) == (MR_mktag((MR_Integer) 1)));
#line 729 "try_expand.m"
                                if (check_hlds__try_expand__succeeded)
#line 729 "try_expand.m"
                                  {
#line 729 "try_expand.m"
                                    check_hlds__try_expand__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts1_15, (MR_Integer) 0)));
#line 729 "try_expand.m"
                                    check_hlds__try_expand__Rest_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts1_15, (MR_Integer) 1)));
#line 729 "try_expand.m"
                                    check_hlds__try_expand__IfThenElse_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_57_57, (MR_Integer) 0)));
#line 729 "try_expand.m"
                                    check_hlds__try_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_57_57, (MR_Integer) 1)));
#line 730 "try_expand.m"
                                    check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__IfThenElse_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__IfThenElse_28, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 730 "try_expand.m"
                                    if (check_hlds__try_expand__succeeded)
#line 730 "try_expand.m"
                                      {
#line 730 "try_expand.m"
                                        check_hlds__try_expand__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__IfThenElse_28, (MR_Integer) 1)));
#line 730 "try_expand.m"
                                        check_hlds__try_expand__GoalPrime_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__IfThenElse_28, (MR_Integer) 2)));
#line 730 "try_expand.m"
                                        check_hlds__try_expand__Then0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__IfThenElse_28, (MR_Integer) 3)));
#line 730 "try_expand.m"
                                        check_hlds__try_expand__Else0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__IfThenElse_28, (MR_Integer) 4)));
#line 730 "try_expand.m"
                                      }
#line 729 "try_expand.m"
                                  }
#line 728 "try_expand.m"
                                if (check_hlds__try_expand__succeeded)
#line 732 "try_expand.m"
                                  {
#line 732 "try_expand.m"
                                    MR_Word check_hlds__try_expand__GoalInfo_36;
#line 732 "try_expand.m"
                                    MR_Word check_hlds__try_expand__GoalDetism_37;
#line 732 "try_expand.m"
                                    MR_Word check_hlds__try_expand__GoalMaxSoln_39;
#line 732 "try_expand.m"
                                    MR_Word check_hlds__try_expand__Else_40;
#line 739 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_35_35;
#line 741 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_38_38;

#line 732 "try_expand.m"
                                    *check_hlds__try_expand__Goal_8 = check_hlds__try_expand__GoalPrime_32;
#line 739 "try_expand.m"
                                    check_hlds__try_expand__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__try_expand__Goal_8, (MR_Integer) 0)));
#line 739 "try_expand.m"
                                    check_hlds__try_expand__GoalInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__try_expand__Goal_8, (MR_Integer) 1)));
#line 740 "try_expand.m"
                                    {
#line 740 "try_expand.m"
                                      check_hlds__try_expand__GoalDetism_37 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__try_expand__GoalInfo_36);
                                    }
#line 741 "try_expand.m"
                                    {
#line 741 "try_expand.m"
                                      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__try_expand__GoalDetism_37, &check_hlds__try_expand__V_38_38, &check_hlds__try_expand__GoalMaxSoln_39);
                                    }
#line 745 "try_expand.m"
#line 745 "try_expand.m"
                                    switch (check_hlds__try_expand__GoalMaxSoln_39) {
#line 745 "try_expand.m"
                                      default: /*NOTREACHED*/ MR_assert(0);
#line 745 "try_expand.m"
                                      case (MR_Integer) 3:
#line 745 "try_expand.m"
                                      case (MR_Integer) 2:
#line 745 "try_expand.m"
                                      case (MR_Integer) 1:
#line 750 "try_expand.m"
                                        {
#line 750 "try_expand.m"
                                          hlds__hlds_goal__conjoin_goal_and_goal_list_3_p_0(check_hlds__try_expand__Then0_33, check_hlds__try_expand__Rest_30, check_hlds__try_expand__Then_9);
                                        }
#line 745 "try_expand.m"
                                        break;
#line 745 "try_expand.m"
                                      case (MR_Integer) 0:
#line 921 "try_expand.m"
                                        {
#line 921 "try_expand.m"
                                          MR_Word check_hlds__try_expand__V_82_82;
#line 921 "try_expand.m"
                                          MR_Word check_hlds__try_expand__V_90_90;
#line 921 "try_expand.m"
                                          MR_Word check_hlds__try_expand__V_91_91;

#line 922 "try_expand.m"
                                          {
#line 922 "try_expand.m"
                                            check_hlds__try_expand__V_82_82 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
                                          }
#line 924 "try_expand.m"
                                          {
#line 924 "try_expand.m"
                                            check_hlds__try_expand__V_90_90 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                                          }
#line 924 "try_expand.m"
                                          {
#line 924 "try_expand.m"
                                            check_hlds__try_expand__V_91_91 = mercury__term__context_init_0_f_0();
                                          }
#line 922 "try_expand.m"
                                          {
#line 922 "try_expand.m"
                                            hlds__goal_util__generate_simple_call_12_p_0(check_hlds__try_expand__V_82_82, (MR_String) "unreachable", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__V_90_90, check_hlds__try_expand__ModuleInfo_6, check_hlds__try_expand__V_91_91, check_hlds__try_expand__Then_9);
                                          }
#line 921 "try_expand.m"
                                        }
#line 745 "try_expand.m"
                                        break;
#line 745 "try_expand.m"
                                    }
#line 753 "try_expand.m"
                                    {
#line 753 "try_expand.m"
                                      hlds__hlds_goal__conjoin_goal_and_goal_list_3_p_0(check_hlds__try_expand__Else0_34, check_hlds__try_expand__Rest_30, &check_hlds__try_expand__Else_40);
                                    }
#line 754 "try_expand.m"
                                    {
#line 754 "try_expand.m"
                                      MR_Word base;
#line 754 "try_expand.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 754 "try_expand.m"
                                      *check_hlds__try_expand__MaybeElse_10 = base;
#line 754 "try_expand.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__try_expand__Else_40));
#line 754 "try_expand.m"
                                    }
#line 732 "try_expand.m"
                                    check_hlds__try_expand__succeeded = MR_TRUE;
#line 732 "try_expand.m"
                                  }
#line 728 "try_expand.m"
                                else
#line 756 "try_expand.m"
                                  {
#line 756 "try_expand.m"
                                    MR_Word check_hlds__try_expand__SomeGoal_41;
#line 756 "try_expand.m"
                                    MR_Word check_hlds__try_expand__AfterSomeGoal_42;
#line 756 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_58_58;
#line 756 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_59_59;
#line 756 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_60_60;
#line 757 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_43_43;
#line 758 "try_expand.m"
                                    MR_Word check_hlds__try_expand__Rest_70;
#line 758 "try_expand.m"
                                    MR_Word check_hlds__try_expand__Then0_71;
#line 759 "try_expand.m"
                                    MR_Word check_hlds__try_expand__SomeThen_44;
#line 759 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_61_61;
#line 759 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_62_62;
#line 759 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_63_63;
#line 760 "try_expand.m"
                                    MR_Word check_hlds__try_expand__V_45_45;

#line 756 "try_expand.m"
                                    check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__Conjuncts1_15)) == (MR_mktag((MR_Integer) 1)));
#line 756 "try_expand.m"
                                    if (check_hlds__try_expand__succeeded)
#line 756 "try_expand.m"
                                      {
#line 756 "try_expand.m"
                                        check_hlds__try_expand__SomeGoal_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts1_15, (MR_Integer) 0)));
#line 756 "try_expand.m"
                                        check_hlds__try_expand__AfterSomeGoal_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts1_15, (MR_Integer) 1)));
#line 757 "try_expand.m"
                                        check_hlds__try_expand__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SomeGoal_41, (MR_Integer) 0)));
#line 757 "try_expand.m"
                                        check_hlds__try_expand__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SomeGoal_41, (MR_Integer) 1)));
#line 757 "try_expand.m"
                                        check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_58_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_58_58, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 757 "try_expand.m"
                                        if (check_hlds__try_expand__succeeded)
#line 757 "try_expand.m"
                                          {
#line 757 "try_expand.m"
                                            check_hlds__try_expand__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_58_58, (MR_Integer) 1)));
#line 757 "try_expand.m"
                                            *check_hlds__try_expand__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_58_58, (MR_Integer) 2)));
#line 757 "try_expand.m"
                                            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_59_59)) == (MR_mktag((MR_Integer) 0)));
#line 757 "try_expand.m"
                                            if (check_hlds__try_expand__succeeded)
#line 757 "try_expand.m"
                                              {
#line 757 "try_expand.m"
                                                check_hlds__try_expand__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_59_59, (MR_Integer) 0)));
#line 757 "try_expand.m"
                                                check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_60_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 756 "try_expand.m"
                                                if (check_hlds__try_expand__succeeded)
#line 756 "try_expand.m"
                                                  {
#line 759 "try_expand.m"
                                                    check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__AfterSomeGoal_42)) == (MR_mktag((MR_Integer) 1)));
#line 759 "try_expand.m"
                                                    if (check_hlds__try_expand__succeeded)
#line 759 "try_expand.m"
                                                      {
#line 759 "try_expand.m"
                                                        check_hlds__try_expand__SomeThen_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__AfterSomeGoal_42, (MR_Integer) 0)));
#line 759 "try_expand.m"
                                                        check_hlds__try_expand__Rest_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__AfterSomeGoal_42, (MR_Integer) 1)));
#line 760 "try_expand.m"
                                                        check_hlds__try_expand__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SomeThen_44, (MR_Integer) 0)));
#line 760 "try_expand.m"
                                                        check_hlds__try_expand__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__SomeThen_44, (MR_Integer) 1)));
#line 760 "try_expand.m"
                                                        check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_61_61)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_61_61, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 760 "try_expand.m"
                                                        if (check_hlds__try_expand__succeeded)
#line 760 "try_expand.m"
                                                          {
#line 760 "try_expand.m"
                                                            check_hlds__try_expand__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_61_61, (MR_Integer) 1)));
#line 760 "try_expand.m"
                                                            check_hlds__try_expand__Then0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_61_61, (MR_Integer) 2)));
#line 760 "try_expand.m"
                                                            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_62_62)) == (MR_mktag((MR_Integer) 0)));
#line 760 "try_expand.m"
                                                            if (check_hlds__try_expand__succeeded)
#line 760 "try_expand.m"
                                                              {
#line 760 "try_expand.m"
                                                                check_hlds__try_expand__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_62_62, (MR_Integer) 0)));
#line 760 "try_expand.m"
                                                                check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 760 "try_expand.m"
                                                              }
#line 760 "try_expand.m"
                                                          }
#line 759 "try_expand.m"
                                                      }
#line 758 "try_expand.m"
                                                    if (check_hlds__try_expand__succeeded)
#line 762 "try_expand.m"
                                                      {
#line 762 "try_expand.m"
                                                        {
#line 762 "try_expand.m"
                                                          hlds__hlds_goal__conjoin_goal_and_goal_list_3_p_0(check_hlds__try_expand__Then0_71, check_hlds__try_expand__Rest_70, check_hlds__try_expand__Then_9);
                                                        }
#line 763 "try_expand.m"
                                                        *check_hlds__try_expand__MaybeElse_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 762 "try_expand.m"
                                                      }
#line 758 "try_expand.m"
                                                    else
#line 768 "try_expand.m"
                                                      {
#line 768 "try_expand.m"
                                                        MR_Word check_hlds__try_expand__GoalInfo_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__try_expand__Goal_8, (MR_Integer) 1)));
#line 768 "try_expand.m"
                                                        MR_Word check_hlds__try_expand__GoalDetism_68;
#line 768 "try_expand.m"
                                                        MR_Word check_hlds__try_expand__GoalMaxSoln_69;
#line 768 "try_expand.m"
                                                        MR_Word check_hlds__try_expand__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), *check_hlds__try_expand__Goal_8, (MR_Integer) 0)));
#line 770 "try_expand.m"
                                                        MR_Word check_hlds__try_expand__V_47_47;

#line 769 "try_expand.m"
                                                        {
#line 769 "try_expand.m"
                                                          check_hlds__try_expand__GoalDetism_68 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__try_expand__GoalInfo_67);
                                                        }
#line 770 "try_expand.m"
                                                        {
#line 770 "try_expand.m"
                                                          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__try_expand__GoalDetism_68, &check_hlds__try_expand__V_47_47, &check_hlds__try_expand__GoalMaxSoln_69);
                                                        }
#line 775 "try_expand.m"
#line 775 "try_expand.m"
                                                        switch (check_hlds__try_expand__GoalMaxSoln_69) {
#line 775 "try_expand.m"
                                                          default: /*NOTREACHED*/ MR_assert(0);
#line 775 "try_expand.m"
                                                          case (MR_Integer) 3:
#line 775 "try_expand.m"
                                                          case (MR_Integer) 2:
#line 775 "try_expand.m"
                                                          case (MR_Integer) 1:
#line 779 "try_expand.m"
                                                            {
#line 780 "try_expand.m"
                                                              {
#line 780 "try_expand.m"
                                                                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.extract_from_succeeded_goal\'/5", (MR_String) "goal not erroneous");
                                                              }
#line 779 "try_expand.m"
                                                            }
#line 775 "try_expand.m"
                                                            break;
#line 775 "try_expand.m"
                                                          case (MR_Integer) 0:
#line 772 "try_expand.m"
                                                            {
#line 773 "try_expand.m"
                                                              {
#line 773 "try_expand.m"
                                                                check_hlds__try_expand__make_unreachable_call_2_p_0(check_hlds__try_expand__ModuleInfo_6, check_hlds__try_expand__Then_9);
                                                              }
#line 774 "try_expand.m"
                                                              *check_hlds__try_expand__MaybeElse_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 772 "try_expand.m"
                                                            }
#line 775 "try_expand.m"
                                                            break;
#line 775 "try_expand.m"
                                                        }
#line 768 "try_expand.m"
                                                      }
#line 758 "try_expand.m"
                                                    check_hlds__try_expand__succeeded = MR_TRUE;
#line 756 "try_expand.m"
                                                  }
#line 757 "try_expand.m"
                                              }
#line 757 "try_expand.m"
                                          }
#line 756 "try_expand.m"
                                      }
#line 756 "try_expand.m"
                                  }
#line 721 "try_expand.m"
                              }
#line 725 "try_expand.m"
                          }
#line 724 "try_expand.m"
                      }
#line 723 "try_expand.m"
                  }
#line 723 "try_expand.m"
              }
#line 721 "try_expand.m"
          }
#line 722 "try_expand.m"
      }
#line 721 "try_expand.m"
    return check_hlds__try_expand__succeeded;
#line 721 "try_expand.m"
  }
#line 717 "try_expand.m"
}

#line 677 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand__extract_intermediate_goal_parts_2_7_p_0(
#line 677 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_8,
#line 677 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_9,
#line 677 "try_expand.m"
  MR_Word check_hlds__try_expand__IntermediateGoal_10,
#line 677 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_11,
#line 677 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_12,
#line 677 "try_expand.m"
  MR_Word * check_hlds__try_expand__MaybeElse_13,
#line 677 "try_expand.m"
  MR_Word * check_hlds__try_expand__ExcpHandling_14)
#line 677 "try_expand.m"
{
#line 682 "try_expand.m"
  {
#line 682 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeInfo_41_41;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeInfo_42_42;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__Conjuncts_15;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__MagicCall_17;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__Switch_19;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__Cases_26;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__SucceededGoal_27;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 0)));
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_29_29;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_30_30;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_31_31;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_32_32;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_33_33;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_34_34;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_35_35;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_36_36;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_37_37;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_38_38;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_39_39;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_40_40;
#line 683 "try_expand.m"
    MR_Word check_hlds__try_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 1)));
#line 685 "try_expand.m"
    MR_Word check_hlds__try_expand__V_18_18;
#line 686 "try_expand.m"
    MR_Word check_hlds__try_expand__V_20_20;
#line 688 "try_expand.m"
    MR_Word check_hlds__try_expand__V_21_21;
#line 688 "try_expand.m"
    MR_Integer check_hlds__try_expand__V_22_22;
#line 688 "try_expand.m"
    MR_Word check_hlds__try_expand__V_23_23;
#line 688 "try_expand.m"
    MR_Word check_hlds__try_expand__V_24_24;
#line 688 "try_expand.m"
    MR_Word check_hlds__try_expand__V_25_25;

#line 683 "try_expand.m"
    check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_28_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_28_28, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 683 "try_expand.m"
    if (check_hlds__try_expand__succeeded)
#line 683 "try_expand.m"
      {
#line 683 "try_expand.m"
        check_hlds__try_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_28_28, (MR_Integer) 1)));
#line 683 "try_expand.m"
        check_hlds__try_expand__Conjuncts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_28_28, (MR_Integer) 2)));
#line 683 "try_expand.m"
        check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_29_29 == (MR_Integer) 0);
#line 682 "try_expand.m"
        if (check_hlds__try_expand__succeeded)
#line 682 "try_expand.m"
          {
#line 685 "try_expand.m"
            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__Conjuncts_15)) == (MR_mktag((MR_Integer) 1)));
#line 685 "try_expand.m"
            if (check_hlds__try_expand__succeeded)
#line 685 "try_expand.m"
              {
#line 685 "try_expand.m"
                check_hlds__try_expand__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts_15, (MR_Integer) 0)));
#line 685 "try_expand.m"
                check_hlds__try_expand__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts_15, (MR_Integer) 1)));
#line 685 "try_expand.m"
                check_hlds__try_expand__MagicCall_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_30_30, (MR_Integer) 0)));
#line 685 "try_expand.m"
                check_hlds__try_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_30_30, (MR_Integer) 1)));
#line 687 "try_expand.m"
                check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 687 "try_expand.m"
                if (check_hlds__try_expand__succeeded)
#line 687 "try_expand.m"
                  {
#line 687 "try_expand.m"
                    check_hlds__try_expand__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_31_31, (MR_Integer) 0)));
#line 687 "try_expand.m"
                    check_hlds__try_expand__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_31_31, (MR_Integer) 1)));
#line 687 "try_expand.m"
                    check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 682 "try_expand.m"
                    if (check_hlds__try_expand__succeeded)
#line 682 "try_expand.m"
                      {
#line 686 "try_expand.m"
                        check_hlds__try_expand__Switch_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_32_32, (MR_Integer) 0)));
#line 686 "try_expand.m"
                        check_hlds__try_expand__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_32_32, (MR_Integer) 1)));
#line 688 "try_expand.m"
                        check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__MagicCall_17)) == (MR_mktag((MR_Integer) 2)));
#line 688 "try_expand.m"
                        if (check_hlds__try_expand__succeeded)
#line 688 "try_expand.m"
                          {
#line 688 "try_expand.m"
                            check_hlds__try_expand__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 0)));
#line 688 "try_expand.m"
                            check_hlds__try_expand__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 1)));
#line 688 "try_expand.m"
                            check_hlds__try_expand__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 2)));
#line 688 "try_expand.m"
                            check_hlds__try_expand__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 3)));
#line 688 "try_expand.m"
                            check_hlds__try_expand__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 4)));
#line 688 "try_expand.m"
                            check_hlds__try_expand__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_17, (MR_Integer) 5)));
#line 688 "try_expand.m"
                            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 688 "try_expand.m"
                            if (check_hlds__try_expand__succeeded)
#line 688 "try_expand.m"
                              {
#line 688 "try_expand.m"
                                check_hlds__try_expand__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_34_34, (MR_Integer) 0)));
#line 688 "try_expand.m"
                                check_hlds__try_expand__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_34_34, (MR_Integer) 1)));
#line 3027 "check_hlds.try_expand.c"
                                check_hlds__try_expand__TypeInfo_41_41 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
#line 688 "try_expand.m"
                                {
#line 688 "try_expand.m"
                                  check_hlds__try_expand__succeeded = mercury__builtin__unify_2_p_0(check_hlds__try_expand__TypeInfo_41_41, ((MR_Box) (check_hlds__try_expand__ResultVar_9)), ((MR_Box) (check_hlds__try_expand__V_39_39)));
                                }
#line 682 "try_expand.m"
                                if (check_hlds__try_expand__succeeded)
#line 682 "try_expand.m"
                                  {
#line 688 "try_expand.m"
                                    check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 682 "try_expand.m"
                                    if (check_hlds__try_expand__succeeded)
#line 682 "try_expand.m"
                                      {
#line 689 "try_expand.m"
                                        check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__Switch_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_19, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 689 "try_expand.m"
                                        if (check_hlds__try_expand__succeeded)
#line 689 "try_expand.m"
                                          {
#line 689 "try_expand.m"
                                            check_hlds__try_expand__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_19, (MR_Integer) 1)));
#line 689 "try_expand.m"
                                            check_hlds__try_expand__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_19, (MR_Integer) 2)));
#line 689 "try_expand.m"
                                            check_hlds__try_expand__Cases_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_19, (MR_Integer) 3)));
#line 3056 "check_hlds.try_expand.c"
                                            check_hlds__try_expand__TypeInfo_42_42 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
#line 689 "try_expand.m"
                                            {
#line 689 "try_expand.m"
                                              check_hlds__try_expand__succeeded = mercury__builtin__unify_2_p_0(check_hlds__try_expand__TypeInfo_42_42, ((MR_Box) (check_hlds__try_expand__ResultVar_9)), ((MR_Box) (check_hlds__try_expand__V_40_40)));
                                            }
#line 682 "try_expand.m"
                                            if (check_hlds__try_expand__succeeded)
#line 682 "try_expand.m"
                                              {
#line 689 "try_expand.m"
                                                check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_36_36 == (MR_Integer) 1);
#line 682 "try_expand.m"
                                                if (check_hlds__try_expand__succeeded)
#line 682 "try_expand.m"
                                                  {
#line 691 "try_expand.m"
                                                    {
#line 691 "try_expand.m"
                                                      check_hlds__try_expand__V_37_37 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
                                                    }
#line 691 "try_expand.m"
                                                    {
#line 691 "try_expand.m"
                                                      check_hlds__try_expand__lookup_case_goal_3_p_0(check_hlds__try_expand__Cases_26, check_hlds__try_expand__V_37_37, &check_hlds__try_expand__SucceededGoal_27);
                                                    }
#line 692 "try_expand.m"
                                                    {
#line 692 "try_expand.m"
                                                      check_hlds__try_expand__succeeded = check_hlds__try_expand__extract_from_succeeded_goal_5_p_0(check_hlds__try_expand__ModuleInfo_8, check_hlds__try_expand__SucceededGoal_27, check_hlds__try_expand__Goal_11, check_hlds__try_expand__Then_12, check_hlds__try_expand__MaybeElse_13);
                                                    }
#line 682 "try_expand.m"
                                                    if (check_hlds__try_expand__succeeded)
#line 682 "try_expand.m"
                                                      {
#line 695 "try_expand.m"
                                                        {
#line 695 "try_expand.m"
                                                          check_hlds__try_expand__V_38_38 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
                                                        }
#line 695 "try_expand.m"
                                                        {
#line 695 "try_expand.m"
                                                          check_hlds__try_expand__lookup_case_goal_3_p_0(check_hlds__try_expand__Cases_26, check_hlds__try_expand__V_38_38, check_hlds__try_expand__ExcpHandling_14);
                                                        }
#line 695 "try_expand.m"
                                                        check_hlds__try_expand__succeeded = MR_TRUE;
#line 682 "try_expand.m"
                                                      }
#line 682 "try_expand.m"
                                                  }
#line 682 "try_expand.m"
                                              }
#line 689 "try_expand.m"
                                          }
#line 682 "try_expand.m"
                                      }
#line 682 "try_expand.m"
                                  }
#line 688 "try_expand.m"
                              }
#line 688 "try_expand.m"
                          }
#line 682 "try_expand.m"
                      }
#line 687 "try_expand.m"
                  }
#line 685 "try_expand.m"
              }
#line 682 "try_expand.m"
          }
#line 683 "try_expand.m"
      }
#line 682 "try_expand.m"
    return check_hlds__try_expand__succeeded;
#line 682 "try_expand.m"
  }
#line 677 "try_expand.m"
}

#line 644 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__extract_intermediate_goal_parts_7_p_0(
#line 644 "try_expand.m"
  MR_Word check_hlds__try_expand__ModuleInfo_8,
#line 644 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_9,
#line 644 "try_expand.m"
  MR_Word check_hlds__try_expand__IntermediateGoal_10,
#line 644 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_11,
#line 644 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_12,
#line 644 "try_expand.m"
  MR_Word * check_hlds__try_expand__MaybeElse_13,
#line 644 "try_expand.m"
  MR_Word * check_hlds__try_expand__ExcpHandling_14)
#line 644 "try_expand.m"
{
#line 650 "try_expand.m"
  {
#line 650 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 650 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalPrime_15;
#line 650 "try_expand.m"
    MR_Word check_hlds__try_expand__ThenPrime_16;
#line 650 "try_expand.m"
    MR_Word check_hlds__try_expand__MaybeElsePrime_17;
#line 650 "try_expand.m"
    MR_Word check_hlds__try_expand__ExcpHandlingPrime_18;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeInfo_41_63;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeInfo_42_64;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__Conjuncts_37;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__MagicCall_39;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__Switch_41;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__Cases_48;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__SucceededGoal_49;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 0)));
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_51_51;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_52_52;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_53_53;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_54_54;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_55_55;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_56_56;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_57_57;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_58_58;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_59_59;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_60_60;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_61_61;
#line 682 "try_expand.m"
    MR_Word check_hlds__try_expand__V_62_62;
#line 683 "try_expand.m"
    MR_Word check_hlds__try_expand__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 1)));
#line 685 "try_expand.m"
    MR_Word check_hlds__try_expand__V_40_40;
#line 686 "try_expand.m"
    MR_Word check_hlds__try_expand__V_42_42;
#line 688 "try_expand.m"
    MR_Word check_hlds__try_expand__V_43_43;
#line 688 "try_expand.m"
    MR_Integer check_hlds__try_expand__V_44_44;
#line 688 "try_expand.m"
    MR_Word check_hlds__try_expand__V_45_45;
#line 688 "try_expand.m"
    MR_Word check_hlds__try_expand__V_46_46;
#line 688 "try_expand.m"
    MR_Word check_hlds__try_expand__V_47_47;

#line 683 "try_expand.m"
    check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_50_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_50_50, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 683 "try_expand.m"
    if (check_hlds__try_expand__succeeded)
#line 683 "try_expand.m"
      {
#line 683 "try_expand.m"
        check_hlds__try_expand__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_50_50, (MR_Integer) 1)));
#line 683 "try_expand.m"
        check_hlds__try_expand__Conjuncts_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_50_50, (MR_Integer) 2)));
#line 683 "try_expand.m"
        check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_51_51 == (MR_Integer) 0);
#line 682 "try_expand.m"
        if (check_hlds__try_expand__succeeded)
#line 682 "try_expand.m"
          {
#line 685 "try_expand.m"
            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__Conjuncts_37)) == (MR_mktag((MR_Integer) 1)));
#line 685 "try_expand.m"
            if (check_hlds__try_expand__succeeded)
#line 685 "try_expand.m"
              {
#line 685 "try_expand.m"
                check_hlds__try_expand__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts_37, (MR_Integer) 0)));
#line 685 "try_expand.m"
                check_hlds__try_expand__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__Conjuncts_37, (MR_Integer) 1)));
#line 685 "try_expand.m"
                check_hlds__try_expand__MagicCall_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_52_52, (MR_Integer) 0)));
#line 685 "try_expand.m"
                check_hlds__try_expand__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_52_52, (MR_Integer) 1)));
#line 687 "try_expand.m"
                check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_53_53)) == (MR_mktag((MR_Integer) 1)));
#line 687 "try_expand.m"
                if (check_hlds__try_expand__succeeded)
#line 687 "try_expand.m"
                  {
#line 687 "try_expand.m"
                    check_hlds__try_expand__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_53_53, (MR_Integer) 0)));
#line 687 "try_expand.m"
                    check_hlds__try_expand__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_53_53, (MR_Integer) 1)));
#line 687 "try_expand.m"
                    check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 682 "try_expand.m"
                    if (check_hlds__try_expand__succeeded)
#line 682 "try_expand.m"
                      {
#line 686 "try_expand.m"
                        check_hlds__try_expand__Switch_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_54_54, (MR_Integer) 0)));
#line 686 "try_expand.m"
                        check_hlds__try_expand__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_54_54, (MR_Integer) 1)));
#line 688 "try_expand.m"
                        check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__MagicCall_39)) == (MR_mktag((MR_Integer) 2)));
#line 688 "try_expand.m"
                        if (check_hlds__try_expand__succeeded)
#line 688 "try_expand.m"
                          {
#line 688 "try_expand.m"
                            check_hlds__try_expand__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 0)));
#line 688 "try_expand.m"
                            check_hlds__try_expand__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 1)));
#line 688 "try_expand.m"
                            check_hlds__try_expand__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 2)));
#line 688 "try_expand.m"
                            check_hlds__try_expand__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 3)));
#line 688 "try_expand.m"
                            check_hlds__try_expand__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 4)));
#line 688 "try_expand.m"
                            check_hlds__try_expand__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__MagicCall_39, (MR_Integer) 5)));
#line 688 "try_expand.m"
                            check_hlds__try_expand__succeeded = ((MR_tag((MR_Word) check_hlds__try_expand__V_56_56)) == (MR_mktag((MR_Integer) 1)));
#line 688 "try_expand.m"
                            if (check_hlds__try_expand__succeeded)
#line 688 "try_expand.m"
                              {
#line 688 "try_expand.m"
                                check_hlds__try_expand__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_56_56, (MR_Integer) 0)));
#line 688 "try_expand.m"
                                check_hlds__try_expand__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_56_56, (MR_Integer) 1)));
#line 3303 "check_hlds.try_expand.c"
                                check_hlds__try_expand__TypeInfo_41_63 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
#line 688 "try_expand.m"
                                {
#line 688 "try_expand.m"
                                  check_hlds__try_expand__succeeded = mercury__builtin__unify_2_p_0(check_hlds__try_expand__TypeInfo_41_63, ((MR_Box) (check_hlds__try_expand__ResultVar_9)), ((MR_Box) (check_hlds__try_expand__V_61_61)));
                                }
#line 682 "try_expand.m"
                                if (check_hlds__try_expand__succeeded)
#line 682 "try_expand.m"
                                  {
#line 688 "try_expand.m"
                                    check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 682 "try_expand.m"
                                    if (check_hlds__try_expand__succeeded)
#line 682 "try_expand.m"
                                      {
#line 689 "try_expand.m"
                                        check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__Switch_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_41, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 689 "try_expand.m"
                                        if (check_hlds__try_expand__succeeded)
#line 689 "try_expand.m"
                                          {
#line 689 "try_expand.m"
                                            check_hlds__try_expand__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_41, (MR_Integer) 1)));
#line 689 "try_expand.m"
                                            check_hlds__try_expand__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_41, (MR_Integer) 2)));
#line 689 "try_expand.m"
                                            check_hlds__try_expand__Cases_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Switch_41, (MR_Integer) 3)));
#line 3332 "check_hlds.try_expand.c"
                                            check_hlds__try_expand__TypeInfo_42_64 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
#line 689 "try_expand.m"
                                            {
#line 689 "try_expand.m"
                                              check_hlds__try_expand__succeeded = mercury__builtin__unify_2_p_0(check_hlds__try_expand__TypeInfo_42_64, ((MR_Box) (check_hlds__try_expand__ResultVar_9)), ((MR_Box) (check_hlds__try_expand__V_62_62)));
                                            }
#line 682 "try_expand.m"
                                            if (check_hlds__try_expand__succeeded)
#line 682 "try_expand.m"
                                              {
#line 689 "try_expand.m"
                                                check_hlds__try_expand__succeeded = (check_hlds__try_expand__V_58_58 == (MR_Integer) 1);
#line 682 "try_expand.m"
                                                if (check_hlds__try_expand__succeeded)
#line 682 "try_expand.m"
                                                  {
#line 691 "try_expand.m"
                                                    {
#line 691 "try_expand.m"
                                                      check_hlds__try_expand__V_59_59 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
                                                    }
#line 691 "try_expand.m"
                                                    {
#line 691 "try_expand.m"
                                                      check_hlds__try_expand__lookup_case_goal_3_p_0(check_hlds__try_expand__Cases_48, check_hlds__try_expand__V_59_59, &check_hlds__try_expand__SucceededGoal_49);
                                                    }
#line 692 "try_expand.m"
                                                    {
#line 692 "try_expand.m"
                                                      check_hlds__try_expand__succeeded = check_hlds__try_expand__extract_from_succeeded_goal_5_p_0(check_hlds__try_expand__ModuleInfo_8, check_hlds__try_expand__SucceededGoal_49, &check_hlds__try_expand__GoalPrime_15, &check_hlds__try_expand__ThenPrime_16, &check_hlds__try_expand__MaybeElsePrime_17);
                                                    }
#line 682 "try_expand.m"
                                                    if (check_hlds__try_expand__succeeded)
#line 682 "try_expand.m"
                                                      {
#line 695 "try_expand.m"
                                                        {
#line 695 "try_expand.m"
                                                          check_hlds__try_expand__V_60_60 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
                                                        }
#line 695 "try_expand.m"
                                                        {
#line 695 "try_expand.m"
                                                          check_hlds__try_expand__lookup_case_goal_3_p_0(check_hlds__try_expand__Cases_48, check_hlds__try_expand__V_60_60, &check_hlds__try_expand__ExcpHandlingPrime_18);
                                                        }
#line 695 "try_expand.m"
                                                        check_hlds__try_expand__succeeded = MR_TRUE;
#line 682 "try_expand.m"
                                                      }
#line 682 "try_expand.m"
                                                  }
#line 682 "try_expand.m"
                                              }
#line 689 "try_expand.m"
                                          }
#line 682 "try_expand.m"
                                      }
#line 682 "try_expand.m"
                                  }
#line 688 "try_expand.m"
                              }
#line 688 "try_expand.m"
                          }
#line 682 "try_expand.m"
                      }
#line 687 "try_expand.m"
                  }
#line 685 "try_expand.m"
              }
#line 682 "try_expand.m"
          }
#line 683 "try_expand.m"
      }
#line 650 "try_expand.m"
    if (check_hlds__try_expand__succeeded)
#line 655 "try_expand.m"
      {
#line 655 "try_expand.m"
        *check_hlds__try_expand__Goal_11 = check_hlds__try_expand__GoalPrime_15;
#line 656 "try_expand.m"
        *check_hlds__try_expand__Then_12 = check_hlds__try_expand__ThenPrime_16;
#line 657 "try_expand.m"
        *check_hlds__try_expand__MaybeElse_13 = check_hlds__try_expand__MaybeElsePrime_17;
#line 658 "try_expand.m"
        *check_hlds__try_expand__ExcpHandling_14 = check_hlds__try_expand__ExcpHandlingPrime_18;
#line 655 "try_expand.m"
      }
#line 650 "try_expand.m"
    else
#line 659 "try_expand.m"
      {
#line 659 "try_expand.m"
        MR_Word check_hlds__try_expand__GoalPrime_26;
#line 659 "try_expand.m"
        MR_Word check_hlds__try_expand__ThenPrime_27;
#line 659 "try_expand.m"
        MR_Word check_hlds__try_expand__MaybeElsePrime_28;
#line 659 "try_expand.m"
        MR_Word check_hlds__try_expand__ExcpHandlingPrime_29;
#line 664 "try_expand.m"
        MR_Word check_hlds__try_expand__ScopedGoal_20;
#line 664 "try_expand.m"
        MR_Word check_hlds__try_expand__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 0)));
#line 664 "try_expand.m"
        MR_Word check_hlds__try_expand__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__IntermediateGoal_10, (MR_Integer) 1)));
#line 664 "try_expand.m"
        MR_Word check_hlds__try_expand__V_19_19;

#line 664 "try_expand.m"
        check_hlds__try_expand__succeeded = ((((MR_tag((MR_Word) check_hlds__try_expand__V_22_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_22_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 664 "try_expand.m"
        if (check_hlds__try_expand__succeeded)
#line 664 "try_expand.m"
          {
#line 664 "try_expand.m"
            check_hlds__try_expand__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_22_22, (MR_Integer) 1)));
#line 664 "try_expand.m"
            check_hlds__try_expand__ScopedGoal_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_22_22, (MR_Integer) 2)));
#line 665 "try_expand.m"
            {
#line 665 "try_expand.m"
              check_hlds__try_expand__succeeded = check_hlds__try_expand__extract_intermediate_goal_parts_2_7_p_0(check_hlds__try_expand__ModuleInfo_8, check_hlds__try_expand__ResultVar_9, check_hlds__try_expand__ScopedGoal_20, &check_hlds__try_expand__GoalPrime_26, &check_hlds__try_expand__ThenPrime_27, &check_hlds__try_expand__MaybeElsePrime_28, &check_hlds__try_expand__ExcpHandlingPrime_29);
            }
#line 664 "try_expand.m"
          }
#line 659 "try_expand.m"
        if (check_hlds__try_expand__succeeded)
#line 669 "try_expand.m"
          {
#line 669 "try_expand.m"
            *check_hlds__try_expand__Goal_11 = check_hlds__try_expand__GoalPrime_26;
#line 670 "try_expand.m"
            *check_hlds__try_expand__Then_12 = check_hlds__try_expand__ThenPrime_27;
#line 671 "try_expand.m"
            *check_hlds__try_expand__MaybeElse_13 = check_hlds__try_expand__MaybeElsePrime_28;
#line 672 "try_expand.m"
            *check_hlds__try_expand__ExcpHandling_14 = check_hlds__try_expand__ExcpHandlingPrime_29;
#line 669 "try_expand.m"
          }
#line 659 "try_expand.m"
        else
#line 674 "try_expand.m"
          {
#line 674 "try_expand.m"
            {
#line 674 "try_expand.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.extract_intermediate_goal_parts\'/7", (MR_String) "unexpected goal form");
#line 674 "try_expand.m"
              return;
            }
#line 674 "try_expand.m"
          }
#line 659 "try_expand.m"
      }
#line 650 "try_expand.m"
  }
#line 644 "try_expand.m"
}

#line 529 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goal_2_15_p_0(
#line 529 "try_expand.m"
  MR_Word check_hlds__try_expand__MaybeIO_16,
#line 529 "try_expand.m"
  MR_Word check_hlds__try_expand__ResultVar_17,
#line 529 "try_expand.m"
  MR_Word check_hlds__try_expand__Goal1_18,
#line 529 "try_expand.m"
  MR_Word check_hlds__try_expand__Then1_19,
#line 529 "try_expand.m"
  MR_Word check_hlds__try_expand__MaybeElse1_20,
#line 529 "try_expand.m"
  MR_Word check_hlds__try_expand__ExcpHandling1_21,
#line 529 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap_22,
#line 529 "try_expand.m"
  MR_Word check_hlds__try_expand__GoalOutputVarsSet_23,
#line 529 "try_expand.m"
  MR_Word * check_hlds__try_expand__FinalGoal_24,
#line 529 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_62,
#line 529 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_PredInfo_63,
#line 529 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_64,
#line 529 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ProcInfo_65,
#line 529 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_66,
#line 529 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_67)
#line 529 "try_expand.m"
{
#line 537 "try_expand.m"
  {
#line 537 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalOutputVars_29;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalOutputVarTypes_30;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__OutputTupleType_31;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__RealResultVarType_32;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__LambdaVar_33;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__AssignLambdaVar_34;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalInfo1_36;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalPurity_37;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalContext_38;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__CallTryGoal_42;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__Then_44;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__ExcpHandling_46;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalInfo_47;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__TmpTupleVar_48;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__TupleVar_49;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__DeconstructSucceeded_50;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__TupleArgInsts_51;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__CastOutputTuple_52;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__DeconstructOutputs_53;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__DeconstructsThen_54;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__SucceededCase_55;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__ExceptionCase_56;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__MaybeFailedCase_59;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__Cases_60;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__ResultSwitch_61;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_VarTypes_68_68;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__V_70_70;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__V_71_71;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__V_73_73;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_VarTypes_76_76;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_77_77;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_78_78;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_92_92;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_105_105;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__V_110_110;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__V_111_111;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__V_113_113;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__V_114_114;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__V_115_115;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__V_116_116;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__V_118_118;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__V_120_120;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__V_125_125;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__V_126_126;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__V_128_128;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__V_129_129;
#line 537 "try_expand.m"
    MR_Word check_hlds__try_expand__V_130_130;
#line 557 "try_expand.m"
    MR_Word check_hlds__try_expand__V_35_35;

#line 540 "try_expand.m"
    {
#line 540 "try_expand.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_64, &check_hlds__try_expand__STATE_VARIABLE_VarTypes_68_68);
    }
#line 541 "try_expand.m"
    {
#line 541 "try_expand.m"
      check_hlds__try_expand__GoalOutputVars_29 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__try_expand__GoalOutputVarsSet_23);
    }
#line 542 "try_expand.m"
    {
#line 542 "try_expand.m"
      hlds__vartypes__lookup_var_types_3_p_0(check_hlds__try_expand__STATE_VARIABLE_VarTypes_68_68, check_hlds__try_expand__GoalOutputVars_29, &check_hlds__try_expand__GoalOutputVarTypes_30);
    }
#line 543 "try_expand.m"
    {
#line 543 "try_expand.m"
      check_hlds__try_expand__OutputTupleType_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 543 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__OutputTupleType_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 543 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__OutputTupleType_31, 1) = ((MR_Box) (check_hlds__try_expand__GoalOutputVarTypes_30));
#line 543 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__OutputTupleType_31, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 543 "try_expand.m"
    }
#line 548 "try_expand.m"
    {
#line 548 "try_expand.m"
      check_hlds__try_expand__V_71_71 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 548 "try_expand.m"
    {
#line 548 "try_expand.m"
      check_hlds__try_expand__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_70_70, 0) = ((MR_Box) (check_hlds__try_expand__V_71_71));
#line 548 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_70_70, 1) = ((MR_Box) ((MR_String) "exception_result"));
#line 548 "try_expand.m"
    }
#line 549 "try_expand.m"
    {
#line 549 "try_expand.m"
      check_hlds__try_expand__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 549 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_73_73, 0) = ((MR_Box) (check_hlds__try_expand__OutputTupleType_31));
#line 549 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 549 "try_expand.m"
    }
#line 547 "try_expand.m"
    {
#line 547 "try_expand.m"
      check_hlds__try_expand__RealResultVarType_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 547 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__RealResultVarType_32, 0) = ((MR_Box) (check_hlds__try_expand__V_70_70));
#line 547 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__RealResultVarType_32, 1) = ((MR_Box) (check_hlds__try_expand__V_73_73));
#line 547 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__RealResultVarType_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 547 "try_expand.m"
    }
#line 550 "try_expand.m"
    {
#line 550 "try_expand.m"
      hlds__vartypes__update_var_type_4_p_0(check_hlds__try_expand__ResultVar_17, check_hlds__try_expand__RealResultVarType_32, check_hlds__try_expand__STATE_VARIABLE_VarTypes_68_68, &check_hlds__try_expand__STATE_VARIABLE_VarTypes_76_76);
    }
#line 551 "try_expand.m"
    {
#line 551 "try_expand.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__try_expand__STATE_VARIABLE_VarTypes_76_76, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_0_64, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_77_77);
    }
#line 554 "try_expand.m"
    {
#line 554 "try_expand.m"
      check_hlds__try_expand__make_try_lambda_8_p_0(check_hlds__try_expand__Goal1_18, check_hlds__try_expand__GoalOutputVarsSet_23, check_hlds__try_expand__OutputTupleType_31, check_hlds__try_expand__MaybeIO_16, &check_hlds__try_expand__LambdaVar_33, &check_hlds__try_expand__AssignLambdaVar_34, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_77_77, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_78_78);
    }
#line 557 "try_expand.m"
    check_hlds__try_expand__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal1_18, (MR_Integer) 0)));
#line 557 "try_expand.m"
    check_hlds__try_expand__GoalInfo1_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal1_18, (MR_Integer) 1)));
#line 558 "try_expand.m"
    {
#line 558 "try_expand.m"
      check_hlds__try_expand__GoalPurity_37 = hlds__hlds_goal__goal_info_get_purity_1_f_0(check_hlds__try_expand__GoalInfo1_36);
    }
#line 559 "try_expand.m"
    {
#line 559 "try_expand.m"
      check_hlds__try_expand__GoalContext_38 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__try_expand__GoalInfo1_36);
    }
#line 598 "try_expand.m"
    if ((check_hlds__try_expand__MaybeIO_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 599 "try_expand.m"
      {
#line 600 "try_expand.m"
        {
#line 600 "try_expand.m"
          check_hlds__try_expand__make_try_call_14_p_0((MR_String) "try", check_hlds__try_expand__LambdaVar_33, check_hlds__try_expand__ResultVar_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__try_expand__OutputTupleType_31, check_hlds__try_expand__GoalPurity_37, check_hlds__try_expand__GoalContext_38, &check_hlds__try_expand__CallTryGoal_42, check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_62, check_hlds__try_expand__STATE_VARIABLE_PredInfo_63, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_78_78, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_92_92, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_66, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_67);
        }
#line 603 "try_expand.m"
        check_hlds__try_expand__Then_44 = check_hlds__try_expand__Then1_19;
#line 604 "try_expand.m"
        check_hlds__try_expand__ExcpHandling_46 = check_hlds__try_expand__ExcpHandling1_21;
#line 599 "try_expand.m"
      }
#line 598 "try_expand.m"
    else
#line 562 "try_expand.m"
      {
#line 562 "try_expand.m"
        MR_Word check_hlds__try_expand__TypeInfo_133_133;
#line 562 "try_expand.m"
        MR_Word check_hlds__try_expand__GoalInitialIOVar_39;
#line 562 "try_expand.m"
        MR_Word check_hlds__try_expand__GoalFinalIOVar_40;
#line 562 "try_expand.m"
        MR_Word check_hlds__try_expand__TryIOOutputVar_41;
#line 562 "try_expand.m"
        MR_Word check_hlds__try_expand__UnifyThenInitialIOVar_43;
#line 562 "try_expand.m"
        MR_Word check_hlds__try_expand__RenamingExcp_45;
#line 562 "try_expand.m"
        MR_Word check_hlds__try_expand__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeIO_16, (MR_Integer) 0)));
#line 562 "try_expand.m"
        MR_Word check_hlds__try_expand__V_85_85;
#line 562 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_87_87;
#line 562 "try_expand.m"
        MR_Word check_hlds__try_expand__V_90_90;
#line 562 "try_expand.m"
        MR_Word check_hlds__try_expand__V_94_94;
#line 562 "try_expand.m"
        MR_Word check_hlds__try_expand__V_96_96;
#line 562 "try_expand.m"
        MR_Word check_hlds__try_expand__V_97_97;
#line 562 "try_expand.m"
        MR_Word check_hlds__try_expand__V_101_101;
#line 562 "try_expand.m"
        MR_Word check_hlds__try_expand__V_102_102;

#line 562 "try_expand.m"
        check_hlds__try_expand__GoalInitialIOVar_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_84_84, (MR_Integer) 0)));
#line 562 "try_expand.m"
        check_hlds__try_expand__GoalFinalIOVar_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_84_84, (MR_Integer) 1)));
#line 584 "try_expand.m"
        {
#line 584 "try_expand.m"
          check_hlds__try_expand__V_85_85 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
        }
#line 584 "try_expand.m"
        {
#line 584 "try_expand.m"
          hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(check_hlds__try_expand__V_85_85, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[0]), &check_hlds__try_expand__TryIOOutputVar_41, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_78_78, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_87_87);
        }
#line 587 "try_expand.m"
        {
#line 587 "try_expand.m"
          check_hlds__try_expand__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 587 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_94_94, 0) = ((MR_Box) (check_hlds__try_expand__TryIOOutputVar_41));
#line 587 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 587 "try_expand.m"
        }
#line 587 "try_expand.m"
        {
#line 587 "try_expand.m"
          check_hlds__try_expand__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 587 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_90_90, 0) = ((MR_Box) (check_hlds__try_expand__GoalInitialIOVar_39));
#line 587 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_90_90, 1) = ((MR_Box) (check_hlds__try_expand__V_94_94));
#line 587 "try_expand.m"
        }
#line 586 "try_expand.m"
        {
#line 586 "try_expand.m"
          check_hlds__try_expand__make_try_call_14_p_0((MR_String) "try_io", check_hlds__try_expand__LambdaVar_33, check_hlds__try_expand__ResultVar_17, check_hlds__try_expand__V_90_90, check_hlds__try_expand__OutputTupleType_31, check_hlds__try_expand__GoalPurity_37, check_hlds__try_expand__GoalContext_38, &check_hlds__try_expand__CallTryGoal_42, check_hlds__try_expand__STATE_VARIABLE_PredInfo_0_62, check_hlds__try_expand__STATE_VARIABLE_PredInfo_63, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_87_87, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_92_92, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_66, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_67);
        }
#line 591 "try_expand.m"
        {
#line 591 "try_expand.m"
          check_hlds__try_expand__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 591 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_96_96, 0) = ((MR_Box) (check_hlds__try_expand__TryIOOutputVar_41));
#line 591 "try_expand.m"
        }
#line 591 "try_expand.m"
        {
#line 591 "try_expand.m"
          check_hlds__try_expand__V_97_97 = mercury__term__context_init_0_f_0();
        }
#line 590 "try_expand.m"
        {
#line 590 "try_expand.m"
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__try_expand__GoalFinalIOVar_40, check_hlds__try_expand__V_96_96, check_hlds__try_expand__V_97_97, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__try_expand_scalar_common_6[1]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__try_expand__UnifyThenInitialIOVar_43);
        }
#line 593 "try_expand.m"
        {
#line 593 "try_expand.m"
          hlds__hlds_goal__conjoin_goals_3_p_0(check_hlds__try_expand__UnifyThenInitialIOVar_43, check_hlds__try_expand__Then1_19, &check_hlds__try_expand__Then_44);
        }
#line 3833 "check_hlds.try_expand.c"
        check_hlds__try_expand__TypeInfo_133_133 = (MR_Word) &check_hlds__try_expand_scalar_common_1[1];
#line 596 "try_expand.m"
        {
#line 596 "try_expand.m"
          check_hlds__try_expand__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 596 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_102_102, 0) = ((MR_Box) (check_hlds__try_expand__GoalInitialIOVar_39));
#line 596 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_102_102, 1) = ((MR_Box) (check_hlds__try_expand__TryIOOutputVar_41));
#line 596 "try_expand.m"
        }
#line 596 "try_expand.m"
        {
#line 596 "try_expand.m"
          check_hlds__try_expand__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 596 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_101_101, 0) = ((MR_Box) (check_hlds__try_expand__V_102_102));
#line 596 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 596 "try_expand.m"
        }
#line 596 "try_expand.m"
        {
#line 596 "try_expand.m"
          check_hlds__try_expand__RenamingExcp_45 = mercury__map__from_assoc_list_1_f_0(check_hlds__try_expand__TypeInfo_133_133, check_hlds__try_expand__TypeInfo_133_133, check_hlds__try_expand__V_101_101);
        }
#line 597 "try_expand.m"
        {
#line 597 "try_expand.m"
          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(check_hlds__try_expand__RenamingExcp_45, check_hlds__try_expand__ExcpHandling1_21, &check_hlds__try_expand__ExcpHandling_46);
        }
#line 562 "try_expand.m"
      }
#line 607 "try_expand.m"
    {
#line 607 "try_expand.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__try_expand__GoalInfo_47);
    }
#line 610 "try_expand.m"
    {
#line 610 "try_expand.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(check_hlds__try_expand__OutputTupleType_31, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[2]), &check_hlds__try_expand__TmpTupleVar_48, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_92_92, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_105_105);
    }
#line 612 "try_expand.m"
    {
#line 612 "try_expand.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(check_hlds__try_expand__OutputTupleType_31, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__try_expand_scalar_common_6[3]), &check_hlds__try_expand__TupleVar_49, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_105_105, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_65);
    }
#line 614 "try_expand.m"
    {
#line 614 "try_expand.m"
      check_hlds__try_expand__V_110_110 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
    }
#line 614 "try_expand.m"
    {
#line 614 "try_expand.m"
      check_hlds__try_expand__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 614 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_111_111, 0) = ((MR_Box) (check_hlds__try_expand__TmpTupleVar_48));
#line 614 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 614 "try_expand.m"
    }
#line 614 "try_expand.m"
    {
#line 614 "try_expand.m"
      hlds__make_goal__deconstruct_functor_4_p_0(check_hlds__try_expand__ResultVar_17, check_hlds__try_expand__V_110_110, check_hlds__try_expand__V_111_111, &check_hlds__try_expand__DeconstructSucceeded_50);
    }
#line 616 "try_expand.m"
    {
#line 616 "try_expand.m"
      hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__try_expand__Instmap_22, check_hlds__try_expand__GoalOutputVars_29, &check_hlds__try_expand__TupleArgInsts_51);
    }
#line 617 "try_expand.m"
    {
#line 617 "try_expand.m"
      check_hlds__try_expand__make_output_tuple_inst_cast_4_p_0(check_hlds__try_expand__TmpTupleVar_48, check_hlds__try_expand__TupleVar_49, check_hlds__try_expand__TupleArgInsts_51, &check_hlds__try_expand__CastOutputTuple_52);
    }
#line 619 "try_expand.m"
    {
#line 619 "try_expand.m"
      hlds__make_goal__deconstruct_tuple_3_p_0(check_hlds__try_expand__TupleVar_49, check_hlds__try_expand__GoalOutputVars_29, &check_hlds__try_expand__DeconstructOutputs_53);
    }
#line 621 "try_expand.m"
    {
#line 621 "try_expand.m"
      check_hlds__try_expand__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 621 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_116_116, 0) = ((MR_Box) (check_hlds__try_expand__Then_44));
#line 621 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 621 "try_expand.m"
    }
#line 621 "try_expand.m"
    {
#line 621 "try_expand.m"
      check_hlds__try_expand__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 621 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_115_115, 0) = ((MR_Box) (check_hlds__try_expand__DeconstructOutputs_53));
#line 621 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_115_115, 1) = ((MR_Box) (check_hlds__try_expand__V_116_116));
#line 621 "try_expand.m"
    }
#line 620 "try_expand.m"
    {
#line 620 "try_expand.m"
      check_hlds__try_expand__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 620 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_114_114, 0) = ((MR_Box) (check_hlds__try_expand__CastOutputTuple_52));
#line 620 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_114_114, 1) = ((MR_Box) (check_hlds__try_expand__V_115_115));
#line 620 "try_expand.m"
    }
#line 620 "try_expand.m"
    {
#line 620 "try_expand.m"
      check_hlds__try_expand__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 620 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_113_113, 0) = ((MR_Box) (check_hlds__try_expand__DeconstructSucceeded_50));
#line 620 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_113_113, 1) = ((MR_Box) (check_hlds__try_expand__V_114_114));
#line 620 "try_expand.m"
    }
#line 620 "try_expand.m"
    {
#line 620 "try_expand.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__try_expand__V_113_113, check_hlds__try_expand__GoalInfo_47, &check_hlds__try_expand__DeconstructsThen_54);
    }
#line 622 "try_expand.m"
    {
#line 622 "try_expand.m"
      check_hlds__try_expand__V_118_118 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
    }
#line 622 "try_expand.m"
    {
#line 622 "try_expand.m"
      check_hlds__try_expand__SucceededCase_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 622 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__SucceededCase_55, 0) = ((MR_Box) (check_hlds__try_expand__V_118_118));
#line 622 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__SucceededCase_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 622 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__SucceededCase_55, 2) = ((MR_Box) (check_hlds__try_expand__DeconstructsThen_54));
#line 622 "try_expand.m"
    }
#line 625 "try_expand.m"
    {
#line 625 "try_expand.m"
      check_hlds__try_expand__V_120_120 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
    }
#line 625 "try_expand.m"
    {
#line 625 "try_expand.m"
      check_hlds__try_expand__ExceptionCase_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 625 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__ExceptionCase_56, 0) = ((MR_Box) (check_hlds__try_expand__V_120_120));
#line 625 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__ExceptionCase_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 625 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__ExceptionCase_56, 2) = ((MR_Box) (check_hlds__try_expand__ExcpHandling_46));
#line 625 "try_expand.m"
    }
#line 632 "try_expand.m"
    if ((check_hlds__try_expand__MaybeElse1_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 634 "try_expand.m"
      check_hlds__try_expand__MaybeFailedCase_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 632 "try_expand.m"
    else
#line 629 "try_expand.m"
      {
#line 629 "try_expand.m"
        MR_Word check_hlds__try_expand__Else1_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeElse1_20, (MR_Integer) 0)));
#line 629 "try_expand.m"
        MR_Word check_hlds__try_expand__FailedCase_58;
#line 629 "try_expand.m"
        MR_Word check_hlds__try_expand__V_122_122;

#line 630 "try_expand.m"
        {
#line 630 "try_expand.m"
          check_hlds__try_expand__V_122_122 = parse_tree__builtin_lib_types__exception_failed_functor_0_f_0();
        }
#line 630 "try_expand.m"
        {
#line 630 "try_expand.m"
          check_hlds__try_expand__FailedCase_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 630 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__FailedCase_58, 0) = ((MR_Box) (check_hlds__try_expand__V_122_122));
#line 630 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__FailedCase_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 630 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__FailedCase_58, 2) = ((MR_Box) (check_hlds__try_expand__Else1_57));
#line 630 "try_expand.m"
        }
#line 631 "try_expand.m"
        {
#line 631 "try_expand.m"
          check_hlds__try_expand__MaybeFailedCase_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeFailedCase_59, 0) = ((MR_Box) (check_hlds__try_expand__FailedCase_58));
#line 631 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeFailedCase_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 631 "try_expand.m"
        }
#line 629 "try_expand.m"
      }
#line 637 "try_expand.m"
    {
#line 637 "try_expand.m"
      check_hlds__try_expand__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 637 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_125_125, 0) = ((MR_Box) (check_hlds__try_expand__ExceptionCase_56));
#line 637 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_125_125, 1) = ((MR_Box) (check_hlds__try_expand__MaybeFailedCase_59));
#line 637 "try_expand.m"
    }
#line 637 "try_expand.m"
    {
#line 637 "try_expand.m"
      check_hlds__try_expand__Cases_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 637 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__Cases_60, 0) = ((MR_Box) (check_hlds__try_expand__SucceededCase_55));
#line 637 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__Cases_60, 1) = ((MR_Box) (check_hlds__try_expand__V_125_125));
#line 637 "try_expand.m"
    }
#line 638 "try_expand.m"
    {
#line 638 "try_expand.m"
      check_hlds__try_expand__V_126_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 638 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_126_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 638 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_126_126, 1) = ((MR_Box) (check_hlds__try_expand__ResultVar_17));
#line 638 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_126_126, 2) = ((MR_Box) ((MR_Integer) 1));
#line 638 "try_expand.m"
      MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_126_126, 3) = ((MR_Box) (check_hlds__try_expand__Cases_60));
#line 638 "try_expand.m"
    }
#line 638 "try_expand.m"
    {
#line 638 "try_expand.m"
      check_hlds__try_expand__ResultSwitch_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 638 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__ResultSwitch_61, 0) = ((MR_Box) (check_hlds__try_expand__V_126_126));
#line 638 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__ResultSwitch_61, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo_47));
#line 638 "try_expand.m"
    }
#line 639 "try_expand.m"
    {
#line 639 "try_expand.m"
      check_hlds__try_expand__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_130_130, 0) = ((MR_Box) (check_hlds__try_expand__ResultSwitch_61));
#line 639 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 639 "try_expand.m"
    }
#line 639 "try_expand.m"
    {
#line 639 "try_expand.m"
      check_hlds__try_expand__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_129_129, 0) = ((MR_Box) (check_hlds__try_expand__CallTryGoal_42));
#line 639 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_129_129, 1) = ((MR_Box) (check_hlds__try_expand__V_130_130));
#line 639 "try_expand.m"
    }
#line 639 "try_expand.m"
    {
#line 639 "try_expand.m"
      check_hlds__try_expand__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_128_128, 0) = ((MR_Box) (check_hlds__try_expand__AssignLambdaVar_34));
#line 639 "try_expand.m"
      MR_hl_field(MR_mktag(1), check_hlds__try_expand__V_128_128, 1) = ((MR_Box) (check_hlds__try_expand__V_129_129));
#line 639 "try_expand.m"
    }
#line 639 "try_expand.m"
    {
#line 639 "try_expand.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__try_expand__V_128_128, check_hlds__try_expand__GoalInfo_47, check_hlds__try_expand__FinalGoal_24);
    }
#line 537 "try_expand.m"
  }
#line 529 "try_expand.m"
}

#line 804 "try_expand.m"
static MR_bool MR_CALL 
check_hlds__try_expand__expand_try_goal_5_p_0_1(
#line 804 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 804 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1)
#line 804 "try_expand.m"
{
#line 804 "try_expand.m"
  {
#line 804 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 804 "try_expand.m"
    MR_Box check_hlds__try_expand__closure = check_hlds__try_expand__closure_arg;

#line 804 "try_expand.m"
    {
#line 804 "try_expand.m"
      check_hlds__try_expand__succeeded = hlds__instmap__var_is_bound_in_instmap_delta_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__try_expand__wrapper_arg_1));
    }
#line 804 "try_expand.m"
    return check_hlds__try_expand__succeeded;
#line 804 "try_expand.m"
  }
#line 804 "try_expand.m"
}

#line 486 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goal_5_p_0(
#line 486 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap_6,
#line 486 "try_expand.m"
  MR_Word check_hlds__try_expand__TryGoal_7,
#line 486 "try_expand.m"
  MR_Word * check_hlds__try_expand__FinalGoal_8,
#line 486 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_33,
#line 486 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_34)
#line 486 "try_expand.m"
{
#line 489 "try_expand.m"
  {
#line 489 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__MaybeIO_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__TryGoal_7, (MR_Integer) 0)));
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__ResultVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__TryGoal_7, (MR_Integer) 1)));
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__IntermediateGoal_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__try_expand__TryGoal_7, (MR_Integer) 2)));
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__Goal0_13;
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__Then0_14;
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__MaybeElse0_15;
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__ExcpHandling0_16;
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__Goal1_17;
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__InstmapAfterGoal_18;
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__Then1_19;
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__MaybeElse1_22;
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__ExcpHandling1_23;
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalOutputVarsSet0_24;
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalOutputVarsSet_27;
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_0_33, (MR_Integer) 0)));
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_36_36;
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_37_37;
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_38_38;
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_39_39;
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__V_40_40;
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_42_42;
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_43_43;
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44;
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_45_45;
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_46_46;
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_47_47;
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalInfo_62;
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__NonLocals_63;
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__InstmapDelta_64;
#line 489 "try_expand.m"
    MR_Word check_hlds__try_expand__V_65_65;
#line 491 "try_expand.m"
    MR_Word check_hlds__try_expand__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_0_33, (MR_Integer) 1)));
#line 491 "try_expand.m"
    MR_Word check_hlds__try_expand__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_0_33, (MR_Integer) 2)));
#line 491 "try_expand.m"
    MR_Word check_hlds__try_expand__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_0_33, (MR_Integer) 3)));
#line 510 "try_expand.m"
    MR_Word check_hlds__try_expand__V_53_53;
#line 510 "try_expand.m"
    MR_Word check_hlds__try_expand__V_54_54;
#line 510 "try_expand.m"
    MR_Word check_hlds__try_expand__V_55_55;
#line 800 "try_expand.m"
    MR_Word check_hlds__try_expand__V_61_61;
#line 522 "try_expand.m"
    MR_Word check_hlds__try_expand__V_32_32;

#line 491 "try_expand.m"
    {
#line 491 "try_expand.m"
      check_hlds__try_expand__extract_intermediate_goal_parts_7_p_0(check_hlds__try_expand__V_35_35, check_hlds__try_expand__ResultVar_11, check_hlds__try_expand__IntermediateGoal_12, &check_hlds__try_expand__Goal0_13, &check_hlds__try_expand__Then0_14, &check_hlds__try_expand__MaybeElse0_15, &check_hlds__try_expand__ExcpHandling0_16);
    }
#line 495 "try_expand.m"
    {
#line 495 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Goal0_13, &check_hlds__try_expand__Goal1_17, check_hlds__try_expand__STATE_VARIABLE_Info_0_33, &check_hlds__try_expand__STATE_VARIABLE_Info_36_36);
    }
#line 496 "try_expand.m"
    {
#line 496 "try_expand.m"
      hlds__goal_util__update_instmap_3_p_0(check_hlds__try_expand__Goal0_13, check_hlds__try_expand__Instmap_6, &check_hlds__try_expand__InstmapAfterGoal_18);
    }
#line 497 "try_expand.m"
    {
#line 497 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__InstmapAfterGoal_18, check_hlds__try_expand__Then0_14, &check_hlds__try_expand__Then1_19, check_hlds__try_expand__STATE_VARIABLE_Info_36_36, &check_hlds__try_expand__STATE_VARIABLE_Info_37_37);
    }
#line 502 "try_expand.m"
    if ((check_hlds__try_expand__MaybeElse0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 503 "try_expand.m"
      {
#line 504 "try_expand.m"
        check_hlds__try_expand__MaybeElse1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 503 "try_expand.m"
        check_hlds__try_expand__STATE_VARIABLE_Info_38_38 = check_hlds__try_expand__STATE_VARIABLE_Info_37_37;
#line 503 "try_expand.m"
      }
#line 502 "try_expand.m"
    else
#line 499 "try_expand.m"
      {
#line 499 "try_expand.m"
        MR_Word check_hlds__try_expand__Else0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeElse0_15, (MR_Integer) 0)));
#line 499 "try_expand.m"
        MR_Word check_hlds__try_expand__Else1_21;

#line 500 "try_expand.m"
        {
#line 500 "try_expand.m"
          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Else0_20, &check_hlds__try_expand__Else1_21, check_hlds__try_expand__STATE_VARIABLE_Info_37_37, &check_hlds__try_expand__STATE_VARIABLE_Info_38_38);
        }
#line 501 "try_expand.m"
        {
#line 501 "try_expand.m"
          check_hlds__try_expand__MaybeElse1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 501 "try_expand.m"
          MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeElse1_22, 0) = ((MR_Box) (check_hlds__try_expand__Else1_21));
#line 501 "try_expand.m"
        }
#line 499 "try_expand.m"
      }
#line 506 "try_expand.m"
    {
#line 506 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__ExcpHandling0_16, &check_hlds__try_expand__ExcpHandling1_23, check_hlds__try_expand__STATE_VARIABLE_Info_38_38, &check_hlds__try_expand__STATE_VARIABLE_Info_39_39);
    }
#line 510 "try_expand.m"
    check_hlds__try_expand__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
#line 510 "try_expand.m"
    check_hlds__try_expand__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
#line 510 "try_expand.m"
    check_hlds__try_expand__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
#line 510 "try_expand.m"
    check_hlds__try_expand__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
#line 800 "try_expand.m"
    check_hlds__try_expand__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_13, (MR_Integer) 0)));
#line 800 "try_expand.m"
    check_hlds__try_expand__GoalInfo_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_13, (MR_Integer) 1)));
#line 801 "try_expand.m"
    {
#line 801 "try_expand.m"
      check_hlds__try_expand__NonLocals_63 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__try_expand__GoalInfo_62);
    }
#line 802 "try_expand.m"
    {
#line 802 "try_expand.m"
      check_hlds__try_expand__InstmapDelta_64 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__try_expand__GoalInfo_62);
    }
#line 804 "try_expand.m"
    {
#line 804 "try_expand.m"
      check_hlds__try_expand__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 804 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 0) = ((MR_Box) (&check_hlds__try_expand_scalar_common_5[0]));
#line 804 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 1) = ((MR_Box) (check_hlds__try_expand__expand_try_goal_5_p_0_1));
#line 804 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 804 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 3) = ((MR_Box) (check_hlds__try_expand__V_40_40));
#line 804 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 4) = ((MR_Box) (check_hlds__try_expand__Instmap_6));
#line 804 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_65_65, 5) = ((MR_Box) (check_hlds__try_expand__InstmapDelta_64));
#line 804 "try_expand.m"
    }
#line 803 "try_expand.m"
    {
#line 803 "try_expand.m"
      check_hlds__try_expand__GoalOutputVarsSet0_24 = parse_tree__set_of_var__filter_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__try_expand__V_65_65, check_hlds__try_expand__NonLocals_63);
    }
#line 516 "try_expand.m"
    if ((check_hlds__try_expand__MaybeIO_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 518 "try_expand.m"
      check_hlds__try_expand__GoalOutputVarsSet_27 = check_hlds__try_expand__GoalOutputVarsSet0_24;
#line 516 "try_expand.m"
    else
#line 513 "try_expand.m"
      {
#line 513 "try_expand.m"
        MR_Word check_hlds__try_expand__IOStateVarFinal_26;
#line 513 "try_expand.m"
        MR_Word check_hlds__try_expand__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__MaybeIO_10, (MR_Integer) 0)));
#line 513 "try_expand.m"
        MR_Word check_hlds__try_expand___IOStateVarInitial_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_41_41, (MR_Integer) 0)));

#line 513 "try_expand.m"
        check_hlds__try_expand__IOStateVarFinal_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_41_41, (MR_Integer) 1)));
#line 514 "try_expand.m"
        {
#line 514 "try_expand.m"
          parse_tree__set_of_var__delete_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__try_expand__IOStateVarFinal_26, check_hlds__try_expand__GoalOutputVarsSet0_24, &check_hlds__try_expand__GoalOutputVarsSet_27);
        }
#line 513 "try_expand.m"
      }
#line 522 "try_expand.m"
    check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
#line 522 "try_expand.m"
    check_hlds__try_expand__STATE_VARIABLE_PredInfo_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
#line 522 "try_expand.m"
    check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
#line 522 "try_expand.m"
    check_hlds__try_expand__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
#line 523 "try_expand.m"
    {
#line 523 "try_expand.m"
      check_hlds__try_expand__expand_try_goal_2_15_p_0(check_hlds__try_expand__MaybeIO_10, check_hlds__try_expand__ResultVar_11, check_hlds__try_expand__Goal1_17, check_hlds__try_expand__Then1_19, check_hlds__try_expand__MaybeElse1_22, check_hlds__try_expand__ExcpHandling1_23, check_hlds__try_expand__InstmapAfterGoal_18, check_hlds__try_expand__GoalOutputVarsSet_27, check_hlds__try_expand__FinalGoal_8, check_hlds__try_expand__STATE_VARIABLE_PredInfo_43_43, &check_hlds__try_expand__STATE_VARIABLE_PredInfo_45_45, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_44_44, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_46_46, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_42_42, &check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_47_47);
    }
#line 526 "try_expand.m"
    {
#line 526 "try_expand.m"
      MR_Word base;
#line 526 "try_expand.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 526 "try_expand.m"
      *check_hlds__try_expand__STATE_VARIABLE_Info_34 = base;
#line 526 "try_expand.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_47_47));
#line 526 "try_expand.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_PredInfo_45_45));
#line 526 "try_expand.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ProcInfo_46_46));
#line 526 "try_expand.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 1));
#line 526 "try_expand.m"
    }
#line 489 "try_expand.m"
  }
#line 486 "try_expand.m"
}

#line 465 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_if_then_else_9_p_0(
#line 465 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap0_10,
#line 465 "try_expand.m"
  MR_Word check_hlds__try_expand__Cond0_11,
#line 465 "try_expand.m"
  MR_Word * check_hlds__try_expand__Cond_12,
#line 465 "try_expand.m"
  MR_Word check_hlds__try_expand__Then0_13,
#line 465 "try_expand.m"
  MR_Word * check_hlds__try_expand__Then_14,
#line 465 "try_expand.m"
  MR_Word check_hlds__try_expand__Else0_15,
#line 465 "try_expand.m"
  MR_Word * check_hlds__try_expand__Else_16,
#line 465 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_22,
#line 465 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_23)
#line 465 "try_expand.m"
{
#line 471 "try_expand.m"
  {
#line 471 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 471 "try_expand.m"
    MR_Word check_hlds__try_expand__CondInfo_19;
#line 471 "try_expand.m"
    MR_Word check_hlds__try_expand__CondInstmapDelta_20;
#line 471 "try_expand.m"
    MR_Word check_hlds__try_expand__InstmapAfterCond_21;
#line 471 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_24_24;
#line 471 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_25_25;
#line 474 "try_expand.m"
    MR_Word check_hlds__try_expand__V_18_18;

#line 472 "try_expand.m"
    {
#line 472 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap0_10, check_hlds__try_expand__Cond0_11, check_hlds__try_expand__Cond_12, check_hlds__try_expand__STATE_VARIABLE_Info_0_22, &check_hlds__try_expand__STATE_VARIABLE_Info_24_24);
    }
#line 474 "try_expand.m"
    check_hlds__try_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Cond0_11, (MR_Integer) 0)));
#line 474 "try_expand.m"
    check_hlds__try_expand__CondInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Cond0_11, (MR_Integer) 1)));
#line 475 "try_expand.m"
    {
#line 475 "try_expand.m"
      check_hlds__try_expand__CondInstmapDelta_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__try_expand__CondInfo_19);
    }
#line 476 "try_expand.m"
    {
#line 476 "try_expand.m"
      hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__try_expand__Instmap0_10, check_hlds__try_expand__CondInstmapDelta_20, &check_hlds__try_expand__InstmapAfterCond_21);
    }
#line 477 "try_expand.m"
    {
#line 477 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__InstmapAfterCond_21, check_hlds__try_expand__Then0_13, check_hlds__try_expand__Then_14, check_hlds__try_expand__STATE_VARIABLE_Info_24_24, &check_hlds__try_expand__STATE_VARIABLE_Info_25_25);
    }
#line 479 "try_expand.m"
    {
#line 479 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap0_10, check_hlds__try_expand__Else0_15, check_hlds__try_expand__Else_16, check_hlds__try_expand__STATE_VARIABLE_Info_25_25, check_hlds__try_expand__STATE_VARIABLE_Info_23);
    }
#line 471 "try_expand.m"
  }
#line 465 "try_expand.m"
}

#line 455 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_cases_5_p_0(
#line 455 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 455 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2,
#line 455 "try_expand.m"
  MR_Word * check_hlds__try_expand__HeadVar__3_3,
#line 455 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_4,
#line 455 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_5)
#line 455 "try_expand.m"
{
#line 458 "try_expand.m"
  {
#line 458 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;

#line 458 "try_expand.m"
    if ((check_hlds__try_expand__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 458 "try_expand.m"
      {
#line 458 "try_expand.m"
        *check_hlds__try_expand__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 458 "try_expand.m"
        *check_hlds__try_expand__STATE_VARIABLE_Info_5 = check_hlds__try_expand__STATE_VARIABLE_Info_0_4;
#line 458 "try_expand.m"
      }
#line 458 "try_expand.m"
    else
#line 459 "try_expand.m"
      {
#line 459 "try_expand.m"
        MR_Word check_hlds__try_expand__Case0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 459 "try_expand.m"
        MR_Word check_hlds__try_expand__Cases0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 459 "try_expand.m"
        MR_Word check_hlds__try_expand__Case_13;
#line 459 "try_expand.m"
        MR_Word check_hlds__try_expand__Cases_14;
#line 459 "try_expand.m"
        MR_Word check_hlds__try_expand__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case0_11, (MR_Integer) 0)));
#line 459 "try_expand.m"
        MR_Word check_hlds__try_expand__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case0_11, (MR_Integer) 1)));
#line 459 "try_expand.m"
        MR_Word check_hlds__try_expand__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case0_11, (MR_Integer) 2)));
#line 459 "try_expand.m"
        MR_Word check_hlds__try_expand__Goal_19;
#line 459 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_22_22;

#line 461 "try_expand.m"
        {
#line 461 "try_expand.m"
          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__HeadVar__1_1, check_hlds__try_expand__Goal0_18, &check_hlds__try_expand__Goal_19, check_hlds__try_expand__STATE_VARIABLE_Info_0_4, &check_hlds__try_expand__STATE_VARIABLE_Info_22_22);
        }
#line 462 "try_expand.m"
        {
#line 462 "try_expand.m"
          check_hlds__try_expand__expand_try_goals_in_cases_5_p_0(check_hlds__try_expand__HeadVar__1_1, check_hlds__try_expand__Cases0_12, &check_hlds__try_expand__Cases_14, check_hlds__try_expand__STATE_VARIABLE_Info_22_22, check_hlds__try_expand__STATE_VARIABLE_Info_5);
        }
#line 463 "try_expand.m"
        {
#line 463 "try_expand.m"
          check_hlds__try_expand__Case_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 463 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case_13, 0) = ((MR_Box) (check_hlds__try_expand__MainConsId_16));
#line 463 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case_13, 1) = ((MR_Box) (check_hlds__try_expand__OtherConsIds_17));
#line 463 "try_expand.m"
          MR_hl_field(MR_mktag(0), check_hlds__try_expand__Case_13, 2) = ((MR_Box) (check_hlds__try_expand__Goal_19));
#line 463 "try_expand.m"
        }
#line 459 "try_expand.m"
        {
#line 459 "try_expand.m"
          MR_Word base;
#line 459 "try_expand.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "try_expand.m"
          *check_hlds__try_expand__HeadVar__3_3 = base;
#line 459 "try_expand.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__try_expand__Case_13));
#line 459 "try_expand.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__try_expand__Cases_14));
#line 459 "try_expand.m"
        }
#line 459 "try_expand.m"
      }
#line 458 "try_expand.m"
  }
#line 455 "try_expand.m"
}

#line 453 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_disj_5_p_0_1(
#line 453 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 453 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 453 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_2,
#line 453 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_3,
#line 453 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_4)
#line 453 "try_expand.m"
{
#line 453 "try_expand.m"
  {
#line 453 "try_expand.m"
    MR_Box check_hlds__try_expand__closure = check_hlds__try_expand__closure_arg;
#line 453 "try_expand.m"
    MR_Word check_hlds__try_expand__conv1_Goal_8;
#line 453 "try_expand.m"
    MR_Word check_hlds__try_expand__conv0_STATE_VARIABLE_Info_95;

#line 453 "try_expand.m"
    {
#line 453 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__try_expand__wrapper_arg_1), &check_hlds__try_expand__conv1_Goal_8, ((MR_Word) check_hlds__try_expand__wrapper_arg_3), &check_hlds__try_expand__conv0_STATE_VARIABLE_Info_95);
    }
#line 453 "try_expand.m"
    *check_hlds__try_expand__wrapper_arg_2 = ((MR_Box) (check_hlds__try_expand__conv1_Goal_8));
#line 453 "try_expand.m"
    *check_hlds__try_expand__wrapper_arg_4 = ((MR_Box) (check_hlds__try_expand__conv0_STATE_VARIABLE_Info_95));
#line 453 "try_expand.m"
  }
#line 453 "try_expand.m"
}

#line 448 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_disj_5_p_0(
#line 448 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap0_6,
#line 448 "try_expand.m"
  MR_Word check_hlds__try_expand__Goals0_7,
#line 448 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goals_8,
#line 448 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_10,
#line 448 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_11)
#line 448 "try_expand.m"
{
#line 452 "try_expand.m"
  {
#line 452 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 452 "try_expand.m"
    MR_Word check_hlds__try_expand__TypeCtorInfo_18_18;
#line 452 "try_expand.m"
    MR_Word check_hlds__try_expand__V_12_12;
#line 453 "try_expand.m"
    MR_Box check_hlds__try_expand__conv2_STATE_VARIABLE_Info_11;

#line 453 "try_expand.m"
    {
#line 453 "try_expand.m"
      check_hlds__try_expand__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 453 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_12_12, 0) = ((MR_Box) (&check_hlds__try_expand_scalar_common_2[1]));
#line 453 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_12_12, 1) = ((MR_Box) (check_hlds__try_expand__expand_try_goals_in_disj_5_p_0_1));
#line 453 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 453 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_12_12, 3) = ((MR_Box) (check_hlds__try_expand__Instmap0_6));
#line 453 "try_expand.m"
    }
#line 4660 "check_hlds.try_expand.c"
    check_hlds__try_expand__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 453 "try_expand.m"
    {
#line 453 "try_expand.m"
      mercury__list__map_foldl_5_p_0(check_hlds__try_expand__TypeCtorInfo_18_18, check_hlds__try_expand__TypeCtorInfo_18_18, (MR_Word) &check_hlds__try_expand__check_hlds__try_expand__type_ctor_info_trys_info_0, check_hlds__try_expand__V_12_12, check_hlds__try_expand__Goals0_7, check_hlds__try_expand__Goals_8, ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_Info_0_10)), &check_hlds__try_expand__conv2_STATE_VARIABLE_Info_11);
    }
#line 453 "try_expand.m"
    *check_hlds__try_expand__STATE_VARIABLE_Info_11 = ((MR_Word) check_hlds__try_expand__conv2_STATE_VARIABLE_Info_11);
#line 452 "try_expand.m"
  }
#line 448 "try_expand.m"
}

#line 436 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_conj_5_p_0(
#line 436 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__1_1,
#line 436 "try_expand.m"
  MR_Word check_hlds__try_expand__HeadVar__2_2,
#line 436 "try_expand.m"
  MR_Word * check_hlds__try_expand__HeadVar__3_3,
#line 436 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_4,
#line 436 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_5)
#line 436 "try_expand.m"
{
#line 440 "try_expand.m"
  {
#line 440 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;

#line 440 "try_expand.m"
    if ((check_hlds__try_expand__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 440 "try_expand.m"
      {
#line 440 "try_expand.m"
        *check_hlds__try_expand__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 440 "try_expand.m"
        *check_hlds__try_expand__STATE_VARIABLE_Info_5 = check_hlds__try_expand__STATE_VARIABLE_Info_0_4;
#line 440 "try_expand.m"
      }
#line 440 "try_expand.m"
    else
#line 441 "try_expand.m"
      {
#line 441 "try_expand.m"
        MR_Word check_hlds__try_expand__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 0)));
#line 441 "try_expand.m"
        MR_Word check_hlds__try_expand__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__HeadVar__2_2, (MR_Integer) 1)));
#line 441 "try_expand.m"
        MR_Word check_hlds__try_expand__Goal_13;
#line 441 "try_expand.m"
        MR_Word check_hlds__try_expand__Goals_14;
#line 441 "try_expand.m"
        MR_Word check_hlds__try_expand__GoalInfo_17;
#line 441 "try_expand.m"
        MR_Word check_hlds__try_expand__InstmapDelta_18;
#line 441 "try_expand.m"
        MR_Word check_hlds__try_expand__Instmap_19;
#line 441 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_22_22;
#line 443 "try_expand.m"
        MR_Word check_hlds__try_expand__V_16_16;

#line 442 "try_expand.m"
        {
#line 442 "try_expand.m"
          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__HeadVar__1_1, check_hlds__try_expand__Goal0_11, &check_hlds__try_expand__Goal_13, check_hlds__try_expand__STATE_VARIABLE_Info_0_4, &check_hlds__try_expand__STATE_VARIABLE_Info_22_22);
        }
#line 443 "try_expand.m"
        check_hlds__try_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_11, (MR_Integer) 0)));
#line 443 "try_expand.m"
        check_hlds__try_expand__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_11, (MR_Integer) 1)));
#line 444 "try_expand.m"
        {
#line 444 "try_expand.m"
          check_hlds__try_expand__InstmapDelta_18 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__try_expand__GoalInfo_17);
        }
#line 445 "try_expand.m"
        {
#line 445 "try_expand.m"
          hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__try_expand__HeadVar__1_1, check_hlds__try_expand__InstmapDelta_18, &check_hlds__try_expand__Instmap_19);
        }
#line 446 "try_expand.m"
        {
#line 446 "try_expand.m"
          check_hlds__try_expand__expand_try_goals_in_conj_5_p_0(check_hlds__try_expand__Instmap_19, check_hlds__try_expand__Goals0_12, &check_hlds__try_expand__Goals_14, check_hlds__try_expand__STATE_VARIABLE_Info_22_22, check_hlds__try_expand__STATE_VARIABLE_Info_5);
        }
#line 441 "try_expand.m"
        {
#line 441 "try_expand.m"
          MR_Word base;
#line 441 "try_expand.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "try_expand.m"
          *check_hlds__try_expand__HeadVar__3_3 = base;
#line 441 "try_expand.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__try_expand__Goal_13));
#line 441 "try_expand.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__try_expand__Goals_14));
#line 441 "try_expand.m"
        }
#line 441 "try_expand.m"
      }
#line 440 "try_expand.m"
  }
#line 436 "try_expand.m"
}

#line 348 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(
#line 348 "try_expand.m"
  MR_Word check_hlds__try_expand__Instmap_6,
#line 348 "try_expand.m"
  MR_Word check_hlds__try_expand__Goal0_7,
#line 348 "try_expand.m"
  MR_Word * check_hlds__try_expand__Goal_8,
#line 348 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_0_94,
#line 348 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Info_95)
#line 348 "try_expand.m"
{
#line 351 "try_expand.m"
  {
#line 351 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 351 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_7, (MR_Integer) 0)));
#line 351 "try_expand.m"
    MR_Word check_hlds__try_expand__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Goal0_7, (MR_Integer) 1)));

#line 356 "try_expand.m"
#line 356 "try_expand.m"
    switch (MR_tag((MR_Word) check_hlds__try_expand__GoalExpr0_10)) {
#line 356 "try_expand.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 356 "try_expand.m"
      case (MR_Integer) 0:
#line 367 "try_expand.m"
        {
#line 367 "try_expand.m"
          MR_Word check_hlds__try_expand__SubGoal0_23 = (MR_Word) MR_body(((MR_Word) check_hlds__try_expand__GoalExpr0_10), (MR_Integer) 0);
#line 367 "try_expand.m"
          MR_Word check_hlds__try_expand__SubGoal_24;
#line 367 "try_expand.m"
          MR_Word check_hlds__try_expand__GoalExpr_117;

#line 368 "try_expand.m"
          {
#line 368 "try_expand.m"
            check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__SubGoal0_23, &check_hlds__try_expand__SubGoal_24, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
          }
#line 369 "try_expand.m"
          check_hlds__try_expand__GoalExpr_117 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__try_expand__SubGoal_24);
#line 370 "try_expand.m"
          {
#line 370 "try_expand.m"
            MR_Word base;
#line 370 "try_expand.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 370 "try_expand.m"
            *check_hlds__try_expand__Goal_8 = base;
#line 370 "try_expand.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_117));
#line 370 "try_expand.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 370 "try_expand.m"
          }
#line 367 "try_expand.m"
        }
#line 356 "try_expand.m"
        break;
#line 356 "try_expand.m"
      case (MR_Integer) 1:
#line 354 "try_expand.m"
        {
#line 355 "try_expand.m"
          *check_hlds__try_expand__Goal_8 = check_hlds__try_expand__Goal0_7;
#line 354 "try_expand.m"
          *check_hlds__try_expand__STATE_VARIABLE_Info_95 = check_hlds__try_expand__STATE_VARIABLE_Info_0_94;
#line 354 "try_expand.m"
        }
#line 356 "try_expand.m"
        break;
#line 356 "try_expand.m"
      case (MR_Integer) 2:
#line 413 "try_expand.m"
        {
#line 414 "try_expand.m"
          *check_hlds__try_expand__Goal_8 = check_hlds__try_expand__Goal0_7;
#line 413 "try_expand.m"
          *check_hlds__try_expand__STATE_VARIABLE_Info_95 = check_hlds__try_expand__STATE_VARIABLE_Info_0_94;
#line 413 "try_expand.m"
        }
#line 356 "try_expand.m"
        break;
#line 356 "try_expand.m"
      case (MR_Integer) 3:
#line 356 "try_expand.m"
#line 356 "try_expand.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 0)))) {
#line 356 "try_expand.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 356 "try_expand.m"
          case (MR_Integer) 0:
#line 356 "try_expand.m"
          case (MR_Integer) 1:
#line 413 "try_expand.m"
            {
#line 414 "try_expand.m"
              *check_hlds__try_expand__Goal_8 = check_hlds__try_expand__Goal0_7;
#line 413 "try_expand.m"
              *check_hlds__try_expand__STATE_VARIABLE_Info_95 = check_hlds__try_expand__STATE_VARIABLE_Info_0_94;
#line 413 "try_expand.m"
            }
#line 356 "try_expand.m"
            break;
#line 356 "try_expand.m"
          case (MR_Integer) 2:
#line 357 "try_expand.m"
            {
#line 357 "try_expand.m"
              MR_Word check_hlds__try_expand__ConjType_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 357 "try_expand.m"
              MR_Word check_hlds__try_expand__Conjuncts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 2)));
#line 357 "try_expand.m"
              MR_Word check_hlds__try_expand__Conjuncts_19;
#line 357 "try_expand.m"
              MR_Word check_hlds__try_expand__GoalExpr_20;

#line 358 "try_expand.m"
              {
#line 358 "try_expand.m"
                check_hlds__try_expand__expand_try_goals_in_conj_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Conjuncts0_18, &check_hlds__try_expand__Conjuncts_19, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
              }
#line 359 "try_expand.m"
              {
#line 359 "try_expand.m"
                check_hlds__try_expand__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 359 "try_expand.m"
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 359 "try_expand.m"
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_20, 1) = ((MR_Box) (check_hlds__try_expand__ConjType_17));
#line 359 "try_expand.m"
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_20, 2) = ((MR_Box) (check_hlds__try_expand__Conjuncts_19));
#line 359 "try_expand.m"
              }
#line 360 "try_expand.m"
              {
#line 360 "try_expand.m"
                MR_Word base;
#line 360 "try_expand.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 360 "try_expand.m"
                *check_hlds__try_expand__Goal_8 = base;
#line 360 "try_expand.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_20));
#line 360 "try_expand.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 360 "try_expand.m"
              }
#line 357 "try_expand.m"
            }
#line 356 "try_expand.m"
            break;
#line 356 "try_expand.m"
          case (MR_Integer) 3:
#line 362 "try_expand.m"
            {
#line 362 "try_expand.m"
              MR_Word check_hlds__try_expand__Disjuncts0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 362 "try_expand.m"
              MR_Word check_hlds__try_expand__Disjuncts_22;
#line 362 "try_expand.m"
              MR_Word check_hlds__try_expand__GoalExpr_116;

#line 363 "try_expand.m"
              {
#line 363 "try_expand.m"
                check_hlds__try_expand__expand_try_goals_in_disj_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Disjuncts0_21, &check_hlds__try_expand__Disjuncts_22, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
              }
#line 364 "try_expand.m"
              {
#line 364 "try_expand.m"
                check_hlds__try_expand__GoalExpr_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "try_expand.m"
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 364 "try_expand.m"
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_116, 1) = ((MR_Box) (check_hlds__try_expand__Disjuncts_22));
#line 364 "try_expand.m"
              }
#line 365 "try_expand.m"
              {
#line 365 "try_expand.m"
                MR_Word base;
#line 365 "try_expand.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 365 "try_expand.m"
                *check_hlds__try_expand__Goal_8 = base;
#line 365 "try_expand.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_116));
#line 365 "try_expand.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 365 "try_expand.m"
              }
#line 362 "try_expand.m"
            }
#line 356 "try_expand.m"
            break;
#line 356 "try_expand.m"
          case (MR_Integer) 4:
#line 372 "try_expand.m"
            {
#line 372 "try_expand.m"
              MR_Word check_hlds__try_expand__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 372 "try_expand.m"
              MR_Word check_hlds__try_expand__CanFail_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 2)));
#line 372 "try_expand.m"
              MR_Word check_hlds__try_expand__Cases0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 3)));
#line 372 "try_expand.m"
              MR_Word check_hlds__try_expand__Cases_28;
#line 372 "try_expand.m"
              MR_Word check_hlds__try_expand__GoalExpr_118;

#line 373 "try_expand.m"
              {
#line 373 "try_expand.m"
                check_hlds__try_expand__expand_try_goals_in_cases_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Cases0_27, &check_hlds__try_expand__Cases_28, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
              }
#line 374 "try_expand.m"
              {
#line 374 "try_expand.m"
                check_hlds__try_expand__GoalExpr_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 374 "try_expand.m"
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 374 "try_expand.m"
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_118, 1) = ((MR_Box) (check_hlds__try_expand__Var_25));
#line 374 "try_expand.m"
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_118, 2) = ((MR_Box) (check_hlds__try_expand__CanFail_26));
#line 374 "try_expand.m"
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_118, 3) = ((MR_Box) (check_hlds__try_expand__Cases_28));
#line 374 "try_expand.m"
              }
#line 375 "try_expand.m"
              {
#line 375 "try_expand.m"
                MR_Word base;
#line 375 "try_expand.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 375 "try_expand.m"
                *check_hlds__try_expand__Goal_8 = base;
#line 375 "try_expand.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_118));
#line 375 "try_expand.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 375 "try_expand.m"
              }
#line 372 "try_expand.m"
            }
#line 356 "try_expand.m"
            break;
#line 356 "try_expand.m"
          case (MR_Integer) 5:
#line 377 "try_expand.m"
            {
#line 377 "try_expand.m"
              MR_Word check_hlds__try_expand__Reason_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 377 "try_expand.m"
              MR_Word check_hlds__try_expand__InnerGoal0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 2)));

#line 382 "try_expand.m"
#line 382 "try_expand.m"
              switch (MR_tag((MR_Word) check_hlds__try_expand__Reason_29)) {
#line 382 "try_expand.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 382 "try_expand.m"
                case (MR_Integer) 0:
#line 395 "try_expand.m"
                  {
#line 395 "try_expand.m"
                    MR_Word check_hlds__try_expand__InnerGoal_128;
#line 395 "try_expand.m"
                    MR_Word check_hlds__try_expand__GoalExpr_129;

#line 396 "try_expand.m"
                    {
#line 396 "try_expand.m"
                      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_128, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
                    }
#line 397 "try_expand.m"
                    {
#line 397 "try_expand.m"
                      check_hlds__try_expand__GoalExpr_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 397 "try_expand.m"
                      MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 397 "try_expand.m"
                      MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_129, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 397 "try_expand.m"
                      MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_129, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_128));
#line 397 "try_expand.m"
                    }
#line 398 "try_expand.m"
                    {
#line 398 "try_expand.m"
                      MR_Word base;
#line 398 "try_expand.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 398 "try_expand.m"
                      *check_hlds__try_expand__Goal_8 = base;
#line 398 "try_expand.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_129));
#line 398 "try_expand.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 398 "try_expand.m"
                    }
#line 395 "try_expand.m"
                  }
#line 382 "try_expand.m"
                  break;
#line 382 "try_expand.m"
                case (MR_Integer) 1:
#line 395 "try_expand.m"
                  {
#line 395 "try_expand.m"
                    MR_Word check_hlds__try_expand__InnerGoal_140;
#line 395 "try_expand.m"
                    MR_Word check_hlds__try_expand__GoalExpr_141;

#line 396 "try_expand.m"
                    {
#line 396 "try_expand.m"
                      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_140, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
                    }
#line 397 "try_expand.m"
                    {
#line 397 "try_expand.m"
                      check_hlds__try_expand__GoalExpr_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 397 "try_expand.m"
                      MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 397 "try_expand.m"
                      MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_141, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 397 "try_expand.m"
                      MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_141, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_140));
#line 397 "try_expand.m"
                    }
#line 398 "try_expand.m"
                    {
#line 398 "try_expand.m"
                      MR_Word base;
#line 398 "try_expand.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 398 "try_expand.m"
                      *check_hlds__try_expand__Goal_8 = base;
#line 398 "try_expand.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_141));
#line 398 "try_expand.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 398 "try_expand.m"
                    }
#line 395 "try_expand.m"
                  }
#line 382 "try_expand.m"
                  break;
#line 382 "try_expand.m"
                case (MR_Integer) 2:
#line 395 "try_expand.m"
                  {
#line 395 "try_expand.m"
                    MR_Word check_hlds__try_expand__InnerGoal_138;
#line 395 "try_expand.m"
                    MR_Word check_hlds__try_expand__GoalExpr_139;

#line 396 "try_expand.m"
                    {
#line 396 "try_expand.m"
                      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_138, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
                    }
#line 397 "try_expand.m"
                    {
#line 397 "try_expand.m"
                      check_hlds__try_expand__GoalExpr_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 397 "try_expand.m"
                      MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 397 "try_expand.m"
                      MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_139, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 397 "try_expand.m"
                      MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_139, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_138));
#line 397 "try_expand.m"
                    }
#line 398 "try_expand.m"
                    {
#line 398 "try_expand.m"
                      MR_Word base;
#line 398 "try_expand.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 398 "try_expand.m"
                      *check_hlds__try_expand__Goal_8 = base;
#line 398 "try_expand.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_139));
#line 398 "try_expand.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 398 "try_expand.m"
                    }
#line 395 "try_expand.m"
                  }
#line 382 "try_expand.m"
                  break;
#line 382 "try_expand.m"
                case (MR_Integer) 3:
#line 382 "try_expand.m"
#line 382 "try_expand.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 0)))) {
#line 382 "try_expand.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 382 "try_expand.m"
                    case (MR_Integer) 0:
#line 395 "try_expand.m"
                      {
#line 395 "try_expand.m"
                        MR_Word check_hlds__try_expand__InnerGoal_144;
#line 395 "try_expand.m"
                        MR_Word check_hlds__try_expand__GoalExpr_145;

#line 396 "try_expand.m"
                        {
#line 396 "try_expand.m"
                          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_144, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
                        }
#line 397 "try_expand.m"
                        {
#line 397 "try_expand.m"
                          check_hlds__try_expand__GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 397 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 397 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_145, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 397 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_145, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_144));
#line 397 "try_expand.m"
                        }
#line 398 "try_expand.m"
                        {
#line 398 "try_expand.m"
                          MR_Word base;
#line 398 "try_expand.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 398 "try_expand.m"
                          *check_hlds__try_expand__Goal_8 = base;
#line 398 "try_expand.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_145));
#line 398 "try_expand.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 398 "try_expand.m"
                        }
#line 395 "try_expand.m"
                      }
#line 382 "try_expand.m"
                      break;
#line 382 "try_expand.m"
                    case (MR_Integer) 1:
#line 395 "try_expand.m"
                      {
#line 395 "try_expand.m"
                        MR_Word check_hlds__try_expand__InnerGoal_142;
#line 395 "try_expand.m"
                        MR_Word check_hlds__try_expand__GoalExpr_143;

#line 396 "try_expand.m"
                        {
#line 396 "try_expand.m"
                          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_142, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
                        }
#line 397 "try_expand.m"
                        {
#line 397 "try_expand.m"
                          check_hlds__try_expand__GoalExpr_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 397 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 397 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_143, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 397 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_143, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_142));
#line 397 "try_expand.m"
                        }
#line 398 "try_expand.m"
                        {
#line 398 "try_expand.m"
                          MR_Word base;
#line 398 "try_expand.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 398 "try_expand.m"
                          *check_hlds__try_expand__Goal_8 = base;
#line 398 "try_expand.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_143));
#line 398 "try_expand.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 398 "try_expand.m"
                        }
#line 395 "try_expand.m"
                      }
#line 382 "try_expand.m"
                      break;
#line 382 "try_expand.m"
                    case (MR_Integer) 2:
#line 395 "try_expand.m"
                      {
#line 395 "try_expand.m"
                        MR_Word check_hlds__try_expand__InnerGoal_146;
#line 395 "try_expand.m"
                        MR_Word check_hlds__try_expand__GoalExpr_147;

#line 396 "try_expand.m"
                        {
#line 396 "try_expand.m"
                          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_146, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
                        }
#line 397 "try_expand.m"
                        {
#line 397 "try_expand.m"
                          check_hlds__try_expand__GoalExpr_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 397 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 397 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_147, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 397 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_147, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_146));
#line 397 "try_expand.m"
                        }
#line 398 "try_expand.m"
                        {
#line 398 "try_expand.m"
                          MR_Word base;
#line 398 "try_expand.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 398 "try_expand.m"
                          *check_hlds__try_expand__Goal_8 = base;
#line 398 "try_expand.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_147));
#line 398 "try_expand.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 398 "try_expand.m"
                        }
#line 395 "try_expand.m"
                      }
#line 382 "try_expand.m"
                      break;
#line 382 "try_expand.m"
                    case (MR_Integer) 3:
#line 395 "try_expand.m"
                      {
#line 395 "try_expand.m"
                        MR_Word check_hlds__try_expand__InnerGoal_126;
#line 395 "try_expand.m"
                        MR_Word check_hlds__try_expand__GoalExpr_127;

#line 396 "try_expand.m"
                        {
#line 396 "try_expand.m"
                          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_126, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
                        }
#line 397 "try_expand.m"
                        {
#line 397 "try_expand.m"
                          check_hlds__try_expand__GoalExpr_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 397 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 397 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_127, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 397 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_127, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_126));
#line 397 "try_expand.m"
                        }
#line 398 "try_expand.m"
                        {
#line 398 "try_expand.m"
                          MR_Word base;
#line 398 "try_expand.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 398 "try_expand.m"
                          *check_hlds__try_expand__Goal_8 = base;
#line 398 "try_expand.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_127));
#line 398 "try_expand.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 398 "try_expand.m"
                        }
#line 395 "try_expand.m"
                      }
#line 382 "try_expand.m"
                      break;
#line 382 "try_expand.m"
                    case (MR_Integer) 4:
#line 395 "try_expand.m"
                      {
#line 395 "try_expand.m"
                        MR_Word check_hlds__try_expand__InnerGoal_52;
#line 395 "try_expand.m"
                        MR_Word check_hlds__try_expand__GoalExpr_119;

#line 396 "try_expand.m"
                        {
#line 396 "try_expand.m"
                          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_52, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
                        }
#line 397 "try_expand.m"
                        {
#line 397 "try_expand.m"
                          check_hlds__try_expand__GoalExpr_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 397 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 397 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_119, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 397 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_119, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_52));
#line 397 "try_expand.m"
                        }
#line 398 "try_expand.m"
                        {
#line 398 "try_expand.m"
                          MR_Word base;
#line 398 "try_expand.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 398 "try_expand.m"
                          *check_hlds__try_expand__Goal_8 = base;
#line 398 "try_expand.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_119));
#line 398 "try_expand.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 398 "try_expand.m"
                        }
#line 395 "try_expand.m"
                      }
#line 382 "try_expand.m"
                      break;
#line 382 "try_expand.m"
                    case (MR_Integer) 5:
#line 382 "try_expand.m"
                      {
#line 382 "try_expand.m"
                        MR_Word check_hlds__try_expand__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 2)));
#line 379 "try_expand.m"
                        MR_Word check_hlds__try_expand__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__Reason_29, (MR_Integer) 1)));

#line 382 "try_expand.m"
#line 382 "try_expand.m"
                        switch (check_hlds__try_expand__V_150_150) {
#line 382 "try_expand.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 382 "try_expand.m"
                          case (MR_Integer) 1:
#line 379 "try_expand.m"
                            {
#line 381 "try_expand.m"
                              *check_hlds__try_expand__Goal_8 = check_hlds__try_expand__Goal0_7;
#line 379 "try_expand.m"
                              *check_hlds__try_expand__STATE_VARIABLE_Info_95 = check_hlds__try_expand__STATE_VARIABLE_Info_0_94;
#line 379 "try_expand.m"
                            }
#line 382 "try_expand.m"
                            break;
#line 382 "try_expand.m"
                          case (MR_Integer) 2:
#line 395 "try_expand.m"
                            {
#line 395 "try_expand.m"
                              MR_Word check_hlds__try_expand__InnerGoal_130;
#line 395 "try_expand.m"
                              MR_Word check_hlds__try_expand__GoalExpr_131;

#line 396 "try_expand.m"
                              {
#line 396 "try_expand.m"
                                check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_130, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
                              }
#line 397 "try_expand.m"
                              {
#line 397 "try_expand.m"
                                check_hlds__try_expand__GoalExpr_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 397 "try_expand.m"
                                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 397 "try_expand.m"
                                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_131, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 397 "try_expand.m"
                                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_131, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_130));
#line 397 "try_expand.m"
                              }
#line 398 "try_expand.m"
                              {
#line 398 "try_expand.m"
                                MR_Word base;
#line 398 "try_expand.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 398 "try_expand.m"
                                *check_hlds__try_expand__Goal_8 = base;
#line 398 "try_expand.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_131));
#line 398 "try_expand.m"
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 398 "try_expand.m"
                              }
#line 395 "try_expand.m"
                            }
#line 382 "try_expand.m"
                            break;
#line 382 "try_expand.m"
                          case (MR_Integer) 0:
#line 400 "try_expand.m"
                            {
#line 401 "try_expand.m"
                              {
#line 401 "try_expand.m"
                                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.expand_try_goals_in_goal\'/5", (MR_String) "from_ground_term_initial");
#line 401 "try_expand.m"
                                return;
                              }
#line 400 "try_expand.m"
                            }
#line 382 "try_expand.m"
                            break;
#line 382 "try_expand.m"
                          case (MR_Integer) 3:
#line 395 "try_expand.m"
                            {
#line 395 "try_expand.m"
                              MR_Word check_hlds__try_expand__InnerGoal_132;
#line 395 "try_expand.m"
                              MR_Word check_hlds__try_expand__GoalExpr_133;

#line 396 "try_expand.m"
                              {
#line 396 "try_expand.m"
                                check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_132, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
                              }
#line 397 "try_expand.m"
                              {
#line 397 "try_expand.m"
                                check_hlds__try_expand__GoalExpr_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 397 "try_expand.m"
                                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 397 "try_expand.m"
                                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_133, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 397 "try_expand.m"
                                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_133, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_132));
#line 397 "try_expand.m"
                              }
#line 398 "try_expand.m"
                              {
#line 398 "try_expand.m"
                                MR_Word base;
#line 398 "try_expand.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 398 "try_expand.m"
                                *check_hlds__try_expand__Goal_8 = base;
#line 398 "try_expand.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_133));
#line 398 "try_expand.m"
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 398 "try_expand.m"
                              }
#line 395 "try_expand.m"
                            }
#line 382 "try_expand.m"
                            break;
#line 382 "try_expand.m"
                        }
#line 382 "try_expand.m"
                      }
#line 382 "try_expand.m"
                      break;
#line 382 "try_expand.m"
                    case (MR_Integer) 6:
#line 395 "try_expand.m"
                      {
#line 395 "try_expand.m"
                        MR_Word check_hlds__try_expand__InnerGoal_148;
#line 395 "try_expand.m"
                        MR_Word check_hlds__try_expand__GoalExpr_149;

#line 396 "try_expand.m"
                        {
#line 396 "try_expand.m"
                          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_148, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
                        }
#line 397 "try_expand.m"
                        {
#line 397 "try_expand.m"
                          check_hlds__try_expand__GoalExpr_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 397 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 397 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_149, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 397 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_149, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_148));
#line 397 "try_expand.m"
                        }
#line 398 "try_expand.m"
                        {
#line 398 "try_expand.m"
                          MR_Word base;
#line 398 "try_expand.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 398 "try_expand.m"
                          *check_hlds__try_expand__Goal_8 = base;
#line 398 "try_expand.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_149));
#line 398 "try_expand.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 398 "try_expand.m"
                        }
#line 395 "try_expand.m"
                      }
#line 382 "try_expand.m"
                      break;
#line 382 "try_expand.m"
                    case (MR_Integer) 7:
#line 395 "try_expand.m"
                      {
#line 395 "try_expand.m"
                        MR_Word check_hlds__try_expand__InnerGoal_136;
#line 395 "try_expand.m"
                        MR_Word check_hlds__try_expand__GoalExpr_137;

#line 396 "try_expand.m"
                        {
#line 396 "try_expand.m"
                          check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__InnerGoal0_30, &check_hlds__try_expand__InnerGoal_136, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
                        }
#line 397 "try_expand.m"
                        {
#line 397 "try_expand.m"
                          check_hlds__try_expand__GoalExpr_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 397 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 397 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_137, 1) = ((MR_Box) (check_hlds__try_expand__Reason_29));
#line 397 "try_expand.m"
                          MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_137, 2) = ((MR_Box) (check_hlds__try_expand__InnerGoal_136));
#line 397 "try_expand.m"
                        }
#line 398 "try_expand.m"
                        {
#line 398 "try_expand.m"
                          MR_Word base;
#line 398 "try_expand.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 398 "try_expand.m"
                          *check_hlds__try_expand__Goal_8 = base;
#line 398 "try_expand.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_137));
#line 398 "try_expand.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 398 "try_expand.m"
                        }
#line 395 "try_expand.m"
                      }
#line 382 "try_expand.m"
                      break;
#line 382 "try_expand.m"
                  }
#line 382 "try_expand.m"
                  break;
#line 382 "try_expand.m"
              }
#line 377 "try_expand.m"
            }
#line 356 "try_expand.m"
            break;
#line 356 "try_expand.m"
          case (MR_Integer) 6:
#line 404 "try_expand.m"
            {
#line 404 "try_expand.m"
              MR_Word check_hlds__try_expand__Vars_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));
#line 404 "try_expand.m"
              MR_Word check_hlds__try_expand__Cond0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 2)));
#line 404 "try_expand.m"
              MR_Word check_hlds__try_expand__Then0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 3)));
#line 404 "try_expand.m"
              MR_Word check_hlds__try_expand__Else0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 4)));
#line 404 "try_expand.m"
              MR_Word check_hlds__try_expand__Cond_58;
#line 404 "try_expand.m"
              MR_Word check_hlds__try_expand__Then_59;
#line 404 "try_expand.m"
              MR_Word check_hlds__try_expand__Else_60;
#line 404 "try_expand.m"
              MR_Word check_hlds__try_expand__GoalExpr_122;

#line 405 "try_expand.m"
              {
#line 405 "try_expand.m"
                check_hlds__try_expand__expand_try_goals_in_if_then_else_9_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__Cond0_55, &check_hlds__try_expand__Cond_58, check_hlds__try_expand__Then0_56, &check_hlds__try_expand__Then_59, check_hlds__try_expand__Else0_57, &check_hlds__try_expand__Else_60, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
              }
#line 407 "try_expand.m"
              {
#line 407 "try_expand.m"
                check_hlds__try_expand__GoalExpr_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 407 "try_expand.m"
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 407 "try_expand.m"
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_122, 1) = ((MR_Box) (check_hlds__try_expand__Vars_54));
#line 407 "try_expand.m"
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_122, 2) = ((MR_Box) (check_hlds__try_expand__Cond_58));
#line 407 "try_expand.m"
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_122, 3) = ((MR_Box) (check_hlds__try_expand__Then_59));
#line 407 "try_expand.m"
                MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr_122, 4) = ((MR_Box) (check_hlds__try_expand__Else_60));
#line 407 "try_expand.m"
              }
#line 408 "try_expand.m"
              {
#line 408 "try_expand.m"
                MR_Word base;
#line 408 "try_expand.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 408 "try_expand.m"
                *check_hlds__try_expand__Goal_8 = base;
#line 408 "try_expand.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__GoalExpr_122));
#line 408 "try_expand.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 408 "try_expand.m"
              }
#line 404 "try_expand.m"
            }
#line 356 "try_expand.m"
            break;
#line 356 "try_expand.m"
          case (MR_Integer) 7:
#line 417 "try_expand.m"
            {
#line 417 "try_expand.m"
              MR_Word check_hlds__try_expand__ShortHand0_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__try_expand__GoalExpr0_10, (MR_Integer) 1)));

#line 421 "try_expand.m"
#line 421 "try_expand.m"
              switch (MR_tag((MR_Word) check_hlds__try_expand__ShortHand0_79)) {
#line 421 "try_expand.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 421 "try_expand.m"
                case (MR_Integer) 0:
#line 431 "try_expand.m"
                  {
#line 432 "try_expand.m"
                    {
#line 432 "try_expand.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.try_expand", (MR_String) "predicate \140check_hlds.try_expand.expand_try_goals_in_goal\'/5", (MR_String) "bi_implication");
#line 432 "try_expand.m"
                      return;
                    }
#line 431 "try_expand.m"
                  }
#line 421 "try_expand.m"
                  break;
#line 421 "try_expand.m"
                case (MR_Integer) 1:
#line 423 "try_expand.m"
                  {
#line 423 "try_expand.m"
                    MR_Word check_hlds__try_expand__AtomicGoalType_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_79, (MR_Integer) 0)));
#line 423 "try_expand.m"
                    MR_Word check_hlds__try_expand__Outer_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_79, (MR_Integer) 1)));
#line 423 "try_expand.m"
                    MR_Word check_hlds__try_expand__Inner_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_79, (MR_Integer) 2)));
#line 423 "try_expand.m"
                    MR_Word check_hlds__try_expand__MaybeOutputVars_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_79, (MR_Integer) 3)));
#line 423 "try_expand.m"
                    MR_Word check_hlds__try_expand__MainGoal0_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_79, (MR_Integer) 4)));
#line 423 "try_expand.m"
                    MR_Word check_hlds__try_expand__OrElseGoals0_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_79, (MR_Integer) 5)));
#line 423 "try_expand.m"
                    MR_Word check_hlds__try_expand__OrElseInners_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__try_expand__ShortHand0_79, (MR_Integer) 6)));
#line 423 "try_expand.m"
                    MR_Word check_hlds__try_expand__MainGoal_90;
#line 423 "try_expand.m"
                    MR_Word check_hlds__try_expand__OrElseGoals_91;
#line 423 "try_expand.m"
                    MR_Word check_hlds__try_expand__STATE_VARIABLE_Info_99_99;
#line 423 "try_expand.m"
                    MR_Word check_hlds__try_expand__V_101_101;
#line 423 "try_expand.m"
                    MR_Word check_hlds__try_expand__GoalExpr_123;

#line 424 "try_expand.m"
                    {
#line 424 "try_expand.m"
                      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__MainGoal0_87, &check_hlds__try_expand__MainGoal_90, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, &check_hlds__try_expand__STATE_VARIABLE_Info_99_99);
                    }
#line 425 "try_expand.m"
                    {
#line 425 "try_expand.m"
                      check_hlds__try_expand__expand_try_goals_in_disj_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__OrElseGoals0_88, &check_hlds__try_expand__OrElseGoals_91, check_hlds__try_expand__STATE_VARIABLE_Info_99_99, check_hlds__try_expand__STATE_VARIABLE_Info_95);
                    }
#line 427 "try_expand.m"
                    {
#line 427 "try_expand.m"
                      check_hlds__try_expand__GoalExpr_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 427 "try_expand.m"
                      MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_123, 0) = ((MR_Box) (check_hlds__try_expand__AtomicGoalType_83));
#line 427 "try_expand.m"
                      MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_123, 1) = ((MR_Box) (check_hlds__try_expand__Outer_84));
#line 427 "try_expand.m"
                      MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_123, 2) = ((MR_Box) (check_hlds__try_expand__Inner_85));
#line 427 "try_expand.m"
                      MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_123, 3) = ((MR_Box) (check_hlds__try_expand__MaybeOutputVars_86));
#line 427 "try_expand.m"
                      MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_123, 4) = ((MR_Box) (check_hlds__try_expand__MainGoal_90));
#line 427 "try_expand.m"
                      MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_123, 5) = ((MR_Box) (check_hlds__try_expand__OrElseGoals_91));
#line 427 "try_expand.m"
                      MR_hl_field(MR_mktag(1), check_hlds__try_expand__GoalExpr_123, 6) = ((MR_Box) (check_hlds__try_expand__OrElseInners_89));
#line 427 "try_expand.m"
                    }
#line 429 "try_expand.m"
                    {
#line 429 "try_expand.m"
                      check_hlds__try_expand__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "try_expand.m"
                      MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_101_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 429 "try_expand.m"
                      MR_hl_field(MR_mktag(3), check_hlds__try_expand__V_101_101, 1) = ((MR_Box) (check_hlds__try_expand__GoalExpr_123));
#line 429 "try_expand.m"
                    }
#line 429 "try_expand.m"
                    {
#line 429 "try_expand.m"
                      MR_Word base;
#line 429 "try_expand.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 429 "try_expand.m"
                      *check_hlds__try_expand__Goal_8 = base;
#line 429 "try_expand.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__try_expand__V_101_101));
#line 429 "try_expand.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__try_expand__GoalInfo0_11));
#line 429 "try_expand.m"
                    }
#line 423 "try_expand.m"
                  }
#line 421 "try_expand.m"
                  break;
#line 421 "try_expand.m"
                case (MR_Integer) 2:
#line 420 "try_expand.m"
                  {
#line 420 "try_expand.m"
                    check_hlds__try_expand__expand_try_goal_5_p_0(check_hlds__try_expand__Instmap_6, check_hlds__try_expand__ShortHand0_79, check_hlds__try_expand__Goal_8, check_hlds__try_expand__STATE_VARIABLE_Info_0_94, check_hlds__try_expand__STATE_VARIABLE_Info_95);
                  }
#line 421 "try_expand.m"
                  break;
#line 421 "try_expand.m"
              }
#line 417 "try_expand.m"
            }
#line 356 "try_expand.m"
            break;
#line 356 "try_expand.m"
        }
#line 356 "try_expand.m"
        break;
#line 356 "try_expand.m"
    }
#line 351 "try_expand.m"
  }
#line 348 "try_expand.m"
}

#line 283 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_proc_6_p_0(
#line 283 "try_expand.m"
  MR_Word check_hlds__try_expand__PredId_7,
#line 283 "try_expand.m"
  MR_Integer check_hlds__try_expand__ProcId_8,
#line 283 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_19,
#line 283 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_20,
#line 283 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Specs_0_21,
#line 283 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Specs_22)
#line 283 "try_expand.m"
{
#line 290 "try_expand.m"
  {
#line 290 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 290 "try_expand.m"
    MR_Word check_hlds__try_expand__Goal0_13;
#line 290 "try_expand.m"
    MR_Word check_hlds__try_expand__InitInstmap_14;
#line 290 "try_expand.m"
    MR_Word check_hlds__try_expand__Info0_15;
#line 290 "try_expand.m"
    MR_Word check_hlds__try_expand__Goal_16;
#line 290 "try_expand.m"
    MR_Word check_hlds__try_expand__Info_17;
#line 290 "try_expand.m"
    MR_Word check_hlds__try_expand__Changed_18;
#line 290 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_23_23;
#line 290 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_24_24;
#line 290 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_26_26;
#line 290 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_PredInfo_27_27;
#line 290 "try_expand.m"
    MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_28_28;

#line 289 "try_expand.m"
    {
#line 289 "try_expand.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__try_expand__PredId_7, check_hlds__try_expand__ProcId_8, &check_hlds__try_expand__STATE_VARIABLE_PredInfo_23_23, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_24_24);
    }
#line 291 "try_expand.m"
    {
#line 291 "try_expand.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ProcInfo_24_24, &check_hlds__try_expand__Goal0_13);
    }
#line 292 "try_expand.m"
    {
#line 292 "try_expand.m"
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(check_hlds__try_expand__STATE_VARIABLE_ProcInfo_24_24, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_19, &check_hlds__try_expand__InitInstmap_14);
    }
#line 294 "try_expand.m"
    {
#line 294 "try_expand.m"
      check_hlds__try_expand__Info0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 294 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info0_15, 0) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_19));
#line 294 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info0_15, 1) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_PredInfo_23_23));
#line 294 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info0_15, 2) = ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ProcInfo_24_24));
#line 294 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info0_15, 3) = ((MR_Box) ((MR_Integer) 0));
#line 294 "try_expand.m"
    }
#line 295 "try_expand.m"
    {
#line 295 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_goal_5_p_0(check_hlds__try_expand__InitInstmap_14, check_hlds__try_expand__Goal0_13, &check_hlds__try_expand__Goal_16, check_hlds__try_expand__Info0_15, &check_hlds__try_expand__Info_17);
    }
#line 296 "try_expand.m"
    check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info_17, (MR_Integer) 0)));
#line 296 "try_expand.m"
    check_hlds__try_expand__STATE_VARIABLE_PredInfo_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info_17, (MR_Integer) 1)));
#line 296 "try_expand.m"
    check_hlds__try_expand__STATE_VARIABLE_ProcInfo_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info_17, (MR_Integer) 2)));
#line 296 "try_expand.m"
    check_hlds__try_expand__Changed_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__Info_17, (MR_Integer) 3)));
#line 303 "try_expand.m"
#line 303 "try_expand.m"
    switch (check_hlds__try_expand__Changed_18) {
#line 303 "try_expand.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 303 "try_expand.m"
      case (MR_Integer) 0:
#line 304 "try_expand.m"
        {
#line 304 "try_expand.m"
          *check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_20 = check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_26_26;
#line 304 "try_expand.m"
          *check_hlds__try_expand__STATE_VARIABLE_Specs_22 = check_hlds__try_expand__STATE_VARIABLE_Specs_0_21;
#line 304 "try_expand.m"
        }
#line 303 "try_expand.m"
        break;
#line 303 "try_expand.m"
      case (MR_Integer) 1:
#line 299 "try_expand.m"
        {
#line 299 "try_expand.m"
          MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_29_29;
#line 299 "try_expand.m"
          MR_Word check_hlds__try_expand__ModeSpecs_44;
#line 299 "try_expand.m"
          MR_Word check_hlds__try_expand__Globals_46;
#line 299 "try_expand.m"
          MR_Word check_hlds__try_expand__HasModeErrors_47;
#line 299 "try_expand.m"
          MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_27_49;
#line 299 "try_expand.m"
          MR_Word check_hlds__try_expand__STATE_VARIABLE_ProcInfo_29_51;
#line 299 "try_expand.m"
          MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_30_52;
#line 299 "try_expand.m"
          MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_31_53;
#line 319 "try_expand.m"
          MR_Word check_hlds__try_expand___Changed_45;

#line 314 "try_expand.m"
          {
#line 314 "try_expand.m"
            hlds__hlds_pred__proc_info_set_goal_3_p_0(check_hlds__try_expand__Goal_16, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_28_28, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_27_49);
          }
#line 315 "try_expand.m"
          {
#line 315 "try_expand.m"
            hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_27_49, &check_hlds__try_expand__STATE_VARIABLE_ProcInfo_29_51);
          }
#line 316 "try_expand.m"
          {
#line 316 "try_expand.m"
            hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(check_hlds__try_expand__PredId_7, check_hlds__try_expand__ProcId_8, check_hlds__try_expand__STATE_VARIABLE_PredInfo_27_27, check_hlds__try_expand__STATE_VARIABLE_ProcInfo_29_51, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_26_26, &check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_30_52);
          }
#line 319 "try_expand.m"
          {
#line 319 "try_expand.m"
            check_hlds__modes__modecheck_proc_6_p_0(check_hlds__try_expand__ProcId_8, check_hlds__try_expand__PredId_7, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_30_52, &check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_31_53, &check_hlds__try_expand__ModeSpecs_44, &check_hlds__try_expand___Changed_45);
          }
#line 320 "try_expand.m"
          {
#line 320 "try_expand.m"
            hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_31_53, &check_hlds__try_expand__Globals_46);
          }
#line 321 "try_expand.m"
          {
#line 321 "try_expand.m"
            check_hlds__try_expand__HasModeErrors_47 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__try_expand__Globals_46, check_hlds__try_expand__ModeSpecs_44);
          }
#line 328 "try_expand.m"
#line 328 "try_expand.m"
          switch (check_hlds__try_expand__HasModeErrors_47) {
#line 328 "try_expand.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 328 "try_expand.m"
            case (MR_Integer) 0:
#line 329 "try_expand.m"
              {
#line 335 "try_expand.m"
                MR_Word check_hlds__try_expand___DetismSpecs_48;

#line 335 "try_expand.m"
                {
#line 335 "try_expand.m"
                  check_hlds__det_analysis__determinism_check_proc_5_p_0(check_hlds__try_expand__ProcId_8, check_hlds__try_expand__PredId_7, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_31_53, &check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_29_29, &check_hlds__try_expand___DetismSpecs_48);
                }
#line 329 "try_expand.m"
                *check_hlds__try_expand__STATE_VARIABLE_Specs_22 = check_hlds__try_expand__STATE_VARIABLE_Specs_0_21;
#line 329 "try_expand.m"
              }
#line 328 "try_expand.m"
              break;
#line 328 "try_expand.m"
            case (MR_Integer) 1:
#line 323 "try_expand.m"
              {
#line 327 "try_expand.m"
                {
#line 327 "try_expand.m"
                  *check_hlds__try_expand__STATE_VARIABLE_Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__try_expand__ModeSpecs_44, check_hlds__try_expand__STATE_VARIABLE_Specs_0_21);
                }
#line 323 "try_expand.m"
                check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_29_29 = check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_31_53;
#line 323 "try_expand.m"
              }
#line 328 "try_expand.m"
              break;
#line 328 "try_expand.m"
          }
#line 302 "try_expand.m"
          {
#line 302 "try_expand.m"
            hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_29_29, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_20);
          }
#line 299 "try_expand.m"
        }
#line 303 "try_expand.m"
        break;
#line 303 "try_expand.m"
    }
#line 290 "try_expand.m"
  }
#line 283 "try_expand.m"
}

#line 280 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_pred_5_p_0_1(
#line 280 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 280 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 280 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_2,
#line 280 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_3,
#line 280 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_4,
#line 280 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_5)
#line 280 "try_expand.m"
{
#line 280 "try_expand.m"
  {
#line 280 "try_expand.m"
    MR_Box check_hlds__try_expand__closure = check_hlds__try_expand__closure_arg;
#line 280 "try_expand.m"
    MR_Word check_hlds__try_expand__conv1_STATE_VARIABLE_ModuleInfo_20;
#line 280 "try_expand.m"
    MR_Word check_hlds__try_expand__conv0_STATE_VARIABLE_Specs_22;

#line 280 "try_expand.m"
    {
#line 280 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__try_expand__closure, (MR_Integer) 3))), ((MR_Integer) check_hlds__try_expand__wrapper_arg_1), ((MR_Word) check_hlds__try_expand__wrapper_arg_2), &check_hlds__try_expand__conv1_STATE_VARIABLE_ModuleInfo_20, ((MR_Word) check_hlds__try_expand__wrapper_arg_4), &check_hlds__try_expand__conv0_STATE_VARIABLE_Specs_22);
    }
#line 280 "try_expand.m"
    *check_hlds__try_expand__wrapper_arg_3 = ((MR_Box) (check_hlds__try_expand__conv1_STATE_VARIABLE_ModuleInfo_20));
#line 280 "try_expand.m"
    *check_hlds__try_expand__wrapper_arg_5 = ((MR_Box) (check_hlds__try_expand__conv0_STATE_VARIABLE_Specs_22));
#line 280 "try_expand.m"
  }
#line 280 "try_expand.m"
}

#line 273 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_pred_5_p_0(
#line 273 "try_expand.m"
  MR_Word check_hlds__try_expand__PredId_6,
#line 273 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11,
#line 273 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_12,
#line 273 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Specs_0_13,
#line 273 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Specs_14)
#line 273 "try_expand.m"
{
#line 277 "try_expand.m"
  {
#line 277 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 277 "try_expand.m"
    MR_Word check_hlds__try_expand__PredInfo_9;
#line 277 "try_expand.m"
    MR_Word check_hlds__try_expand__ProcIds_10;
#line 277 "try_expand.m"
    MR_Word check_hlds__try_expand__V_15_15;
#line 280 "try_expand.m"
    MR_Box check_hlds__try_expand__conv3_STATE_VARIABLE_ModuleInfo_12;
#line 280 "try_expand.m"
    MR_Box check_hlds__try_expand__conv2_STATE_VARIABLE_Specs_14;

#line 278 "try_expand.m"
    {
#line 278 "try_expand.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11, check_hlds__try_expand__PredId_6, &check_hlds__try_expand__PredInfo_9);
    }
#line 279 "try_expand.m"
    {
#line 279 "try_expand.m"
      check_hlds__try_expand__ProcIds_10 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(check_hlds__try_expand__PredInfo_9);
    }
#line 280 "try_expand.m"
    {
#line 280 "try_expand.m"
      check_hlds__try_expand__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 280 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_15_15, 0) = ((MR_Box) (&check_hlds__try_expand_scalar_common_4[0]));
#line 280 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_15_15, 1) = ((MR_Box) (check_hlds__try_expand__expand_try_goals_in_pred_5_p_0_1));
#line 280 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 280 "try_expand.m"
      MR_hl_field(MR_mktag(0), check_hlds__try_expand__V_15_15, 3) = ((MR_Box) (check_hlds__try_expand__PredId_6));
#line 280 "try_expand.m"
    }
#line 280 "try_expand.m"
    {
#line 280 "try_expand.m"
      mercury__list__foldl2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &check_hlds__try_expand_scalar_common_1[0], check_hlds__try_expand__V_15_15, check_hlds__try_expand__ProcIds_10, ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_11)), &check_hlds__try_expand__conv3_STATE_VARIABLE_ModuleInfo_12, ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_Specs_0_13)), &check_hlds__try_expand__conv2_STATE_VARIABLE_Specs_14);
    }
#line 280 "try_expand.m"
    *check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_12 = ((MR_Word) check_hlds__try_expand__conv3_STATE_VARIABLE_ModuleInfo_12);
#line 280 "try_expand.m"
    *check_hlds__try_expand__STATE_VARIABLE_Specs_14 = ((MR_Word) check_hlds__try_expand__conv2_STATE_VARIABLE_Specs_14);
#line 277 "try_expand.m"
  }
#line 273 "try_expand.m"
}

#line 213 "try_expand.m"
MR_bool MR_CALL 
check_hlds__try_expand__try_expand_may_introduce_calls_2_p_0(
#line 213 "try_expand.m"
  MR_String check_hlds__try_expand__HeadVar__1_1,
#line 213 "try_expand.m"
  MR_Integer check_hlds__try_expand__HeadVar__2_2)
#line 213 "try_expand.m"
{
#line 951 "try_expand.m"
  {
#line 951 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;

#line 951 "try_expand.m"
    if ((strcmp(check_hlds__try_expand__HeadVar__1_1, (MR_String) "try") == 0))
#line 951 "try_expand.m"
      check_hlds__try_expand__succeeded = (check_hlds__try_expand__HeadVar__2_2 == (MR_Integer) 2);
#line 951 "try_expand.m"
    else
#line 951 "try_expand.m"
    if ((strcmp(check_hlds__try_expand__HeadVar__1_1, (MR_String) "try_io") == 0))
#line 952 "try_expand.m"
      check_hlds__try_expand__succeeded = (check_hlds__try_expand__HeadVar__2_2 == (MR_Integer) 4);
#line 951 "try_expand.m"
    else
#line 951 "try_expand.m"
    if ((strcmp(check_hlds__try_expand__HeadVar__1_1, (MR_String) "unreachable") == 0))
#line 953 "try_expand.m"
      check_hlds__try_expand__succeeded = (check_hlds__try_expand__HeadVar__2_2 == (MR_Integer) 0);
#line 951 "try_expand.m"
    else
#line 951 "try_expand.m"
      check_hlds__try_expand__succeeded = MR_FALSE;
#line 951 "try_expand.m"
    return check_hlds__try_expand__succeeded;
#line 951 "try_expand.m"
  }
#line 213 "try_expand.m"
}

#line 262 "try_expand.m"
static void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_module_4_p_0_1(
#line 262 "try_expand.m"
  MR_Box check_hlds__try_expand__closure_arg,
#line 262 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_1,
#line 262 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_2,
#line 262 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_3,
#line 262 "try_expand.m"
  MR_Box check_hlds__try_expand__wrapper_arg_4,
#line 262 "try_expand.m"
  MR_Box * check_hlds__try_expand__wrapper_arg_5)
#line 262 "try_expand.m"
{
#line 262 "try_expand.m"
  {
#line 262 "try_expand.m"
    MR_Box check_hlds__try_expand__closure = check_hlds__try_expand__closure_arg;
#line 262 "try_expand.m"
    MR_Word check_hlds__try_expand__conv2_STATE_VARIABLE_ModuleInfo_12;
#line 262 "try_expand.m"
    MR_Word check_hlds__try_expand__conv1_STATE_VARIABLE_Specs_14;

#line 262 "try_expand.m"
    {
#line 262 "try_expand.m"
      check_hlds__try_expand__expand_try_goals_in_pred_5_p_0(((MR_Word) check_hlds__try_expand__wrapper_arg_1), ((MR_Word) check_hlds__try_expand__wrapper_arg_2), &check_hlds__try_expand__conv2_STATE_VARIABLE_ModuleInfo_12, ((MR_Word) check_hlds__try_expand__wrapper_arg_4), &check_hlds__try_expand__conv1_STATE_VARIABLE_Specs_14);
    }
#line 262 "try_expand.m"
    *check_hlds__try_expand__wrapper_arg_3 = ((MR_Box) (check_hlds__try_expand__conv2_STATE_VARIABLE_ModuleInfo_12));
#line 262 "try_expand.m"
    *check_hlds__try_expand__wrapper_arg_5 = ((MR_Box) (check_hlds__try_expand__conv1_STATE_VARIABLE_Specs_14));
#line 262 "try_expand.m"
  }
#line 262 "try_expand.m"
}

#line 205 "try_expand.m"
void MR_CALL 
check_hlds__try_expand__expand_try_goals_in_module_4_p_0(
#line 205 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_12,
#line 205 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_13,
#line 205 "try_expand.m"
  MR_Word check_hlds__try_expand__STATE_VARIABLE_Specs_0_14,
#line 205 "try_expand.m"
  MR_Word * check_hlds__try_expand__STATE_VARIABLE_Specs_15)
#line 205 "try_expand.m"
{
#line 250 "try_expand.m"
  {
#line 250 "try_expand.m"
    MR_bool check_hlds__try_expand__succeeded;
#line 250 "try_expand.m"
    MR_Word check_hlds__try_expand__AvailModuleMap_7;
#line 255 "try_expand.m"
    MR_Word check_hlds__try_expand__V_16_16;
#line 255 "try_expand.m"
    MR_Word check_hlds__try_expand__V_8_8;
#line 255 "try_expand.m"
    MR_Box check_hlds__try_expand__conv0_V_8_8;

#line 254 "try_expand.m"
    {
#line 254 "try_expand.m"
      hlds__hlds_module__module_info_get_avail_module_map_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_12, &check_hlds__try_expand__AvailModuleMap_7);
    }
#line 255 "try_expand.m"
    {
#line 255 "try_expand.m"
      check_hlds__try_expand__V_16_16 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 255 "try_expand.m"
    {
#line 255 "try_expand.m"
      check_hlds__try_expand__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0, check_hlds__try_expand__AvailModuleMap_7, ((MR_Box) (check_hlds__try_expand__V_16_16)), &check_hlds__try_expand__conv0_V_8_8);
    }
#line 255 "try_expand.m"
    if (check_hlds__try_expand__succeeded)
#line 255 "try_expand.m"
      {
#line 255 "try_expand.m"
        check_hlds__try_expand__V_8_8 = ((MR_Word) check_hlds__try_expand__conv0_V_8_8);
#line 255 "try_expand.m"
        check_hlds__try_expand__succeeded = MR_TRUE;
#line 255 "try_expand.m"
      }
#line 255 "try_expand.m"
    if (check_hlds__try_expand__succeeded)
#line 257 "try_expand.m"
      {
#line 257 "try_expand.m"
        MR_Word check_hlds__try_expand__OptionsToRestore_10;
#line 257 "try_expand.m"
        MR_Word check_hlds__try_expand__PredIds_11;
#line 257 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Globals_17_17;
#line 257 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Globals_18_18;
#line 257 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_19_19;
#line 257 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_21_21;
#line 257 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Globals_23_23;
#line 257 "try_expand.m"
        MR_Word check_hlds__try_expand__STATE_VARIABLE_Globals_24_24;
#line 262 "try_expand.m"
        MR_Box check_hlds__try_expand__conv4_STATE_VARIABLE_ModuleInfo_21_21;
#line 262 "try_expand.m"
        MR_Box check_hlds__try_expand__conv3_STATE_VARIABLE_Specs_15;

#line 257 "try_expand.m"
        {
#line 257 "try_expand.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_12, &check_hlds__try_expand__STATE_VARIABLE_Globals_17_17);
        }
#line 258 "try_expand.m"
        {
#line 258 "try_expand.m"
          check_hlds__det_report__disable_det_warnings_3_p_0(&check_hlds__try_expand__OptionsToRestore_10, check_hlds__try_expand__STATE_VARIABLE_Globals_17_17, &check_hlds__try_expand__STATE_VARIABLE_Globals_18_18);
        }
#line 259 "try_expand.m"
        {
#line 259 "try_expand.m"
          hlds__hlds_module__module_info_set_globals_3_p_0(check_hlds__try_expand__STATE_VARIABLE_Globals_18_18, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_12, &check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_19_19);
        }
#line 261 "try_expand.m"
        {
#line 261 "try_expand.m"
          hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_19_19, &check_hlds__try_expand__PredIds_11);
        }
#line 262 "try_expand.m"
        {
#line 262 "try_expand.m"
          mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &check_hlds__try_expand_scalar_common_1[0], (MR_Word) &check_hlds__try_expand_scalar_common_3[0], check_hlds__try_expand__PredIds_11, ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_19_19)), &check_hlds__try_expand__conv4_STATE_VARIABLE_ModuleInfo_21_21, ((MR_Box) (check_hlds__try_expand__STATE_VARIABLE_Specs_0_14)), &check_hlds__try_expand__conv3_STATE_VARIABLE_Specs_15);
        }
#line 262 "try_expand.m"
        check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_21_21 = ((MR_Word) check_hlds__try_expand__conv4_STATE_VARIABLE_ModuleInfo_21_21);
#line 262 "try_expand.m"
        *check_hlds__try_expand__STATE_VARIABLE_Specs_15 = ((MR_Word) check_hlds__try_expand__conv3_STATE_VARIABLE_Specs_15);
#line 265 "try_expand.m"
        {
#line 265 "try_expand.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_21_21, &check_hlds__try_expand__STATE_VARIABLE_Globals_23_23);
        }
#line 266 "try_expand.m"
        {
#line 266 "try_expand.m"
          check_hlds__det_report__restore_det_warnings_3_p_0(check_hlds__try_expand__OptionsToRestore_10, check_hlds__try_expand__STATE_VARIABLE_Globals_23_23, &check_hlds__try_expand__STATE_VARIABLE_Globals_24_24);
        }
#line 267 "try_expand.m"
        {
#line 267 "try_expand.m"
          hlds__hlds_module__module_info_set_globals_3_p_0(check_hlds__try_expand__STATE_VARIABLE_Globals_24_24, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_21_21, check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_13);
        }
#line 257 "try_expand.m"
      }
#line 255 "try_expand.m"
    else
#line 270 "try_expand.m"
      {
#line 270 "try_expand.m"
        *check_hlds__try_expand__STATE_VARIABLE_Specs_15 = check_hlds__try_expand__STATE_VARIABLE_Specs_0_14;
#line 270 "try_expand.m"
        *check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_13 = check_hlds__try_expand__STATE_VARIABLE_ModuleInfo_0_12;
#line 270 "try_expand.m"
      }
#line 250 "try_expand.m"
  }
#line 205 "try_expand.m"
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
