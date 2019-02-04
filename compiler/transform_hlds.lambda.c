/*
** Automatically generated from `lambda.m'
** by the Mercury compiler,
** version rotd-2017-08-02
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


/* :- module transform_hlds.lambda. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__lambda__init
ENDINIT
*/

#include "transform_hlds.lambda.mih"


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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
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
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s {
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21;
  MR_bool transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded;
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_38;
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVars_91;
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__CurriedArgModes_101;
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeInfo_189_189;
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_190_190;
  jmp_buf transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__commit_0;
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVar_92;
  MR_Box transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__conv1_InitialVar_92;
  jmp_buf transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__commit_1;
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Mode_102;
  MR_Box transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__conv2_Mode_102;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lambda__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lambda__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__lambda__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__lambda__transform_hlds__lambda__field_types_lambda_info_0_0[10];

static const MR_ConstString transform_hlds__lambda__transform_hlds__lambda__field_names_lambda_info_0_0[10];

static const MR_DuFunctorDesc transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_lambda_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_lambda_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__lambda__transform_hlds__lambda__du_ptag_ordered_lambda_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_name_ordered_lambda_info_0[1];

static const MR_Integer transform_hlds__lambda__transform_hlds__lambda__functor_number_map_lambda_info_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__lambda__transform_hlds__lambda__field_types_reg_wrapper_proc_0_0[1];

static const MR_DuFunctorDesc transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_0;

static const MR_DuFunctorDesc transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_1;

static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_1[1];

static const MR_DuPtagLayout transform_hlds__lambda__transform_hlds__lambda__du_ptag_ordered_reg_wrapper_proc_0[2];

static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_name_ordered_reg_wrapper_proc_0[2];

static const MR_Integer transform_hlds__lambda__transform_hlds__lambda__functor_number_map_reg_wrapper_proc_0[2];

static void MR_CALL 
transform_hlds__lambda__check_lambda_arg_type_and_mode_5_p_0(
  MR_Word transform_hlds__lambda__ModuleInfo_6,
  MR_Word transform_hlds__lambda__Type_7,
  MR_Word transform_hlds__lambda__Mode_8,
  MR_Integer transform_hlds__lambda__X_9,
  MR_Integer * transform_hlds__lambda__X_5);

static void MR_CALL 
transform_hlds__lambda__constraint_contains_vars_2_p_0_1(
  MR_Box transform_hlds__lambda__closure_arg,
  MR_Box transform_hlds__lambda__wrapper_arg_1,
  MR_Box * transform_hlds__lambda__wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__lambda__constraint_contains_vars_2_p_0(
  MR_Word transform_hlds__lambda__LambdaVars_3,
  MR_Word transform_hlds__lambda__ClassConstraint_4);

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_proc_4_p_0(
  MR_Word transform_hlds__lambda__PredId_5,
  MR_Integer transform_hlds__lambda__ProcId_6,
  MR_Word transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_20);

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_proc_2_6_p_0(
  MR_Word transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_ProcInfo_43,
  MR_Word transform_hlds__lambda__STATE_VARIABLE_PredInfo_0_44,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_PredInfo_45,
  MR_Word transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_46,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_47);

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_unify_goal_8_p_0(
  MR_Word transform_hlds__lambda__LHS_9,
  MR_Word transform_hlds__lambda__RHS0_10,
  MR_Word transform_hlds__lambda__Mode_11,
  MR_Word transform_hlds__lambda__Unification0_12,
  MR_Word transform_hlds__lambda__Context_13,
  MR_Word * transform_hlds__lambda__GoalExpr_14,
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_32,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_33);

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_cases_4_p_0(
  MR_Word transform_hlds__lambda__HeadVar__1_1,
  MR_Word * transform_hlds__lambda__HeadVar__2_2,
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_3,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_4);

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(
  MR_Word transform_hlds__lambda__HeadVar__1_1,
  MR_Word * transform_hlds__lambda__HeadVar__2_2,
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_3,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_4);

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(
  MR_Word transform_hlds__lambda__Goal0_5,
  MR_Word * transform_hlds__lambda__Goal_6,
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_68,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_69);

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_11(
  MR_Box transform_hlds__lambda__closure_arg,
  MR_Box transform_hlds__lambda__wrapper_arg_1,
  MR_Box transform_hlds__lambda__wrapper_arg_2,
  MR_Box transform_hlds__lambda__wrapper_arg_3,
  MR_Box * transform_hlds__lambda__wrapper_arg_4);

static MR_bool MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_2(
  MR_Box transform_hlds__lambda__closure_arg,
  MR_Box transform_hlds__lambda__wrapper_arg_1);

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_1(
  MR_Box transform_hlds__lambda__closure_arg,
  MR_Box transform_hlds__lambda__wrapper_arg_1,
  MR_Box * transform_hlds__lambda__wrapper_arg_2);

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_3(
  void * transform_hlds__lambda__env_ptr_arg);

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_5(
  void * transform_hlds__lambda__env_ptr_arg);

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_4(
  void * transform_hlds__lambda__env_ptr_arg);

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_6(
  void * transform_hlds__lambda__env_ptr_arg);

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_7(
  void * transform_hlds__lambda__env_ptr_arg);

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_9(
  void * transform_hlds__lambda__env_ptr_arg);

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_8(
  void * transform_hlds__lambda__env_ptr_arg);

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_10(
  void * transform_hlds__lambda__env_ptr_arg);

static void MR_CALL 
transform_hlds__lambda__restrict_var_maps_8_p_0(
  MR_Word transform_hlds__lambda__HeadVars_9,
  MR_Word transform_hlds__lambda__Goal_10,
  MR_Word transform_hlds__lambda__STATE_VARIABLE_VarSet_0_22,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_VarSet_23,
  MR_Word transform_hlds__lambda__STATE_VARIABLE_VarTypes_0_24,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_VarTypes_25,
  MR_Word transform_hlds__lambda__STATE_VARIABLE_RttiVarMaps_0_26,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_RttiVarMaps_27);

static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_cases_3_p_0(
  MR_Word transform_hlds__lambda__HeadVar__1_1,
  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2,
  MR_ArrayPtr * transform_hlds__lambda__STATE_VARIABLE_VarUses_3);

static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_goals_3_p_0(
  MR_Word transform_hlds__lambda__HeadVar__1_1,
  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2,
  MR_ArrayPtr * transform_hlds__lambda__STATE_VARIABLE_VarUses_3);

static MR_Box MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0_2(
  MR_Box transform_hlds__lambda__closure_arg,
  MR_Box transform_hlds__lambda__wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0_1(
  MR_Box transform_hlds__lambda__closure_arg,
  MR_Box transform_hlds__lambda__wrapper_arg_1);

static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0(
  MR_Word transform_hlds__lambda__Goal_4,
  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0_121,
  MR_ArrayPtr * transform_hlds__lambda__STATE_VARIABLE_VarUses_122);

static void MR_CALL 
transform_hlds__lambda__mark_vars_as_used_3_p_0(
  MR_Word transform_hlds__lambda__HeadVar__1_1,
  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2,
  MR_ArrayPtr * transform_hlds__lambda__STATE_VARIABLE_VarUses_3);

static void MR_CALL 
transform_hlds__lambda__filter_vartypes_4_p_0(
  MR_Word transform_hlds__lambda__HeadVar__1_1,
  MR_Word transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_0_2,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_3,
  MR_ArrayPtr transform_hlds__lambda__HeadVar__4_4);

static void MR_CALL 
transform_hlds__lambda__unify_modes_to_modes_2_p_0(
  MR_Word transform_hlds__lambda__HeadVar__1_1,
  MR_Word * transform_hlds__lambda__HeadVar__2_2);

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_pred_3_p_0_1(
  MR_Box transform_hlds__lambda__closure_arg,
  MR_Box transform_hlds__lambda__wrapper_arg_1,
  MR_Box transform_hlds__lambda__wrapper_arg_2,
  MR_Box * transform_hlds__lambda__wrapper_arg_3);

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_module_2_p_0_1(
  MR_Box transform_hlds__lambda__closure_arg,
  MR_Box transform_hlds__lambda__wrapper_arg_1,
  MR_Box transform_hlds__lambda__wrapper_arg_2,
  MR_Box * transform_hlds__lambda__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__lambda____Unify____lambda_info_0_0_10001(
  MR_Box transform_hlds__lambda__wrapper_arg_1,
  MR_Box transform_hlds__lambda__wrapper_arg_2);

static void MR_CALL 
transform_hlds__lambda____Compare____lambda_info_0_0_10001(
  MR_Box * transform_hlds__lambda__wrapper_arg_1,
  MR_Box transform_hlds__lambda__wrapper_arg_2,
  MR_Box transform_hlds__lambda__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__lambda____Unify____reg_wrapper_proc_0_0_10001(
  MR_Box transform_hlds__lambda__wrapper_arg_1,
  MR_Box transform_hlds__lambda__wrapper_arg_2);

static void MR_CALL 
transform_hlds__lambda____Compare____reg_wrapper_proc_0_0_10001(
  MR_Box * transform_hlds__lambda__wrapper_arg_1,
  MR_Box transform_hlds__lambda__wrapper_arg_2,
  MR_Box transform_hlds__lambda__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__lambda_scalar_common_1[7][2];

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_2[7][3];

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_3[1][6];

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_4[1][7];

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_5[3][5];

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_6[1][8];




static /* final */ const MR_Box transform_hlds__lambda_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__lambda_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&transform_hlds__lambda_scalar_common_1[2]))
  },
};

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__lambda_scalar_common_1[2])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__lambda_scalar_common_1[2])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__lambda_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__lambda__expand_lambdas_in_module_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__lambda_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__lambda__find_used_vars_in_goal_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__lambda_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__lambda__find_used_vars_in_goal_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__lambda_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__lambda_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__lambda__constraint_contains_vars_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_5[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__lambda__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__lambda__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__lambda__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lambda__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lambda__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__lambda__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__lambda__transform_hlds__lambda__field_types_lambda_info_0_0[10] = {
  (MR_PseudoTypeInfo) &transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__lambda__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_has_parallel_conj_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_ConstString transform_hlds__lambda__transform_hlds__lambda__field_names_lambda_info_0_0[10] = {
  (MR_String) "li_varset",
  (MR_String) "li_vartypes",
  (MR_String) "li_tvarset",
  (MR_String) "li_inst_varset",
  (MR_String) "li_rtti_varmaps",
  (MR_String) "li_has_parallel_conj",
  (MR_String) "li_pred_info",
  (MR_String) "li_module_info",
  (MR_String) "li_recompute_nonlocals",
  (MR_String) "li_have_expanded_lambda"
};

static const MR_DuFunctorDesc transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_lambda_info_0_0 = {
  (MR_String) "lambda_info",
  (MR_Integer) 10,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__lambda__transform_hlds__lambda__field_types_lambda_info_0_0,
  transform_hlds__lambda__transform_hlds__lambda__field_names_lambda_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_lambda_info_0_0[1] = {
  &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_lambda_info_0_0
};

static const MR_DuPtagLayout transform_hlds__lambda__transform_hlds__lambda__du_ptag_ordered_lambda_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_lambda_info_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_name_ordered_lambda_info_0[1] = {
  &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_lambda_info_0_0
};

static const MR_Integer transform_hlds__lambda__transform_hlds__lambda__functor_number_map_lambda_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lambda____Unify____lambda_info_0_0_10001)),
  ((MR_Box) (transform_hlds__lambda____Compare____lambda_info_0_0_10001)),
  (MR_String) "transform_hlds.lambda",
  (MR_String) "lambda_info",
  {     transform_hlds__lambda__transform_hlds__lambda__du_name_ordered_lambda_info_0 },
  {     transform_hlds__lambda__transform_hlds__lambda__du_ptag_ordered_lambda_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__lambda__transform_hlds__lambda__functor_number_map_lambda_info_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__lambda__transform_hlds__lambda__field_types_reg_wrapper_proc_0_0[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__lambda__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_0 = {
  (MR_String) "reg_wrapper_proc",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__lambda__transform_hlds__lambda__field_types_reg_wrapper_proc_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_1 = {
  (MR_String) "not_reg_wrapper_proc",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_0[1] = {
  &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_1
};

static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_1[1] = {
  &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_0
};

static const MR_DuPtagLayout transform_hlds__lambda__transform_hlds__lambda__du_ptag_ordered_reg_wrapper_proc_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_1
  }
};

static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_name_ordered_reg_wrapper_proc_0[2] = {
  &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_1,
  &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_0
};

static const MR_Integer transform_hlds__lambda__transform_hlds__lambda__functor_number_map_reg_wrapper_proc_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_reg_wrapper_proc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lambda____Unify____reg_wrapper_proc_0_0_10001)),
  ((MR_Box) (transform_hlds__lambda____Compare____reg_wrapper_proc_0_0_10001)),
  (MR_String) "transform_hlds.lambda",
  (MR_String) "reg_wrapper_proc",
  {     transform_hlds__lambda__transform_hlds__lambda__du_name_ordered_reg_wrapper_proc_0 },
  {     transform_hlds__lambda__transform_hlds__lambda__du_ptag_ordered_reg_wrapper_proc_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__lambda__transform_hlds__lambda__functor_number_map_reg_wrapper_proc_0
};

void MR_CALL 
transform_hlds__lambda____Compare____reg_wrapper_proc_0_0(
  MR_Word * transform_hlds__lambda__HeadVar__1_1,
  MR_Word transform_hlds__lambda__HeadVar__2_2,
  MR_Word transform_hlds__lambda__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__lambda__succeeded;
    MR_Integer transform_hlds__lambda__CastX_8 = (MR_Integer) transform_hlds__lambda__HeadVar__2_2;
    MR_Integer transform_hlds__lambda__CastY_9 = (MR_Integer) transform_hlds__lambda__HeadVar__3_3;

    transform_hlds__lambda__succeeded = (transform_hlds__lambda__CastX_8 == transform_hlds__lambda__CastY_9);
    if (transform_hlds__lambda__succeeded)
      *transform_hlds__lambda__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((transform_hlds__lambda__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((transform_hlds__lambda__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *transform_hlds__lambda__HeadVar__1_1 = (MR_Integer) 0;
      else
        *transform_hlds__lambda__HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word transform_hlds__lambda__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 0)));

      if ((transform_hlds__lambda__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *transform_hlds__lambda__HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word transform_hlds__lambda__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 0)));

        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lambda_scalar_common_1[6], transform_hlds__lambda__HeadVar__1_1, ((MR_Box) (transform_hlds__lambda__Var_11)), ((MR_Box) (transform_hlds__lambda__ArgY1_5)));
      }
    }
  }
}

MR_bool MR_CALL 
transform_hlds__lambda____Unify____reg_wrapper_proc_0_0(
  MR_Word transform_hlds__lambda__HeadVar__1_1,
  MR_Word transform_hlds__lambda__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__lambda__succeeded;
    MR_Integer transform_hlds__lambda__CastX_7 = (MR_Integer) transform_hlds__lambda__HeadVar__1_1;
    MR_Integer transform_hlds__lambda__CastY_8 = (MR_Integer) transform_hlds__lambda__HeadVar__2_2;

    transform_hlds__lambda__succeeded = (transform_hlds__lambda__CastX_7 == transform_hlds__lambda__CastY_8);
    if (transform_hlds__lambda__succeeded)
      transform_hlds__lambda__succeeded = MR_TRUE;
    else
    if ((transform_hlds__lambda__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer transform_hlds__lambda__CastX_5 = (MR_Integer) transform_hlds__lambda__HeadVar__1_1;
      MR_Integer transform_hlds__lambda__CastY_6 = (MR_Integer) transform_hlds__lambda__HeadVar__2_2;

      transform_hlds__lambda__succeeded = (transform_hlds__lambda__CastY_6 == transform_hlds__lambda__CastX_5);
    }
    else
    {
      MR_Word transform_hlds__lambda__TypeInfo_9_9;
      MR_Word transform_hlds__lambda__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__lambda__ArgY1_4;

      transform_hlds__lambda__succeeded = ((MR_tag((MR_Word) transform_hlds__lambda__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (transform_hlds__lambda__succeeded)
      {
        transform_hlds__lambda__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 0)));
        transform_hlds__lambda__TypeInfo_9_9 = (MR_Word) &transform_hlds__lambda_scalar_common_1[6];
        transform_hlds__lambda__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lambda__TypeInfo_9_9, ((MR_Box) (transform_hlds__lambda__ArgX1_3)), ((MR_Box) (transform_hlds__lambda__ArgY1_4)));
      }
    }
    return transform_hlds__lambda__succeeded;
  }
}

void MR_CALL 
transform_hlds__lambda____Compare____lambda_info_0_0(
  MR_Word * transform_hlds__lambda__HeadVar__1_1,
  MR_Word transform_hlds__lambda__HeadVar__2_2,
  MR_Word transform_hlds__lambda__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__lambda__succeeded;
    MR_Integer transform_hlds__lambda__CastX_33 = (MR_Integer) transform_hlds__lambda__HeadVar__2_2;
    MR_Integer transform_hlds__lambda__CastY_34 = (MR_Integer) transform_hlds__lambda__HeadVar__3_3;

    transform_hlds__lambda__succeeded = (transform_hlds__lambda__CastX_33 == transform_hlds__lambda__CastY_34);
    if (transform_hlds__lambda__succeeded)
      *transform_hlds__lambda__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word transform_hlds__lambda__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word transform_hlds__lambda__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word transform_hlds__lambda__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word transform_hlds__lambda__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word transform_hlds__lambda__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word transform_hlds__lambda__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word transform_hlds__lambda__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word transform_hlds__lambda__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word transform_hlds__lambda__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word transform_hlds__lambda__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 4)));
      MR_Word transform_hlds__lambda__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 5)));
      MR_Word transform_hlds__lambda__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 5)));
      MR_Word transform_hlds__lambda__ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 6)));
      MR_Word transform_hlds__lambda__ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 6)));
      MR_Word transform_hlds__lambda__ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 7)));
      MR_Word transform_hlds__lambda__ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 7)));
      MR_Word transform_hlds__lambda__ArgX9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 8)));
      MR_Word transform_hlds__lambda__ArgY9_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 8)));
      MR_Word transform_hlds__lambda__ArgX10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 9)));
      MR_Word transform_hlds__lambda__ArgY10_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__3_3, (MR_Integer) 9)));
      MR_Word transform_hlds__lambda__Var_24;

      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lambda_scalar_common_1[3], &transform_hlds__lambda__Var_24, ((MR_Box) (transform_hlds__lambda__ArgX1_4)), ((MR_Box) (transform_hlds__lambda__ArgY1_5)));
      transform_hlds__lambda__succeeded = (transform_hlds__lambda__Var_24 == (MR_Integer) 0);
      transform_hlds__lambda__succeeded = !(transform_hlds__lambda__succeeded);
      if (transform_hlds__lambda__succeeded)
        *transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__Var_24;
      else
      {
        MR_Word transform_hlds__lambda__Var_25;

        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lambda_scalar_common_2[1], &transform_hlds__lambda__Var_25, ((MR_Box) (transform_hlds__lambda__ArgX2_6)), ((MR_Box) (transform_hlds__lambda__ArgY2_7)));
        transform_hlds__lambda__succeeded = (transform_hlds__lambda__Var_25 == (MR_Integer) 0);
        transform_hlds__lambda__succeeded = !(transform_hlds__lambda__succeeded);
        if (transform_hlds__lambda__succeeded)
          *transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__Var_25;
        else
        {
          MR_Word transform_hlds__lambda__Var_26;

          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lambda_scalar_common_1[4], &transform_hlds__lambda__Var_26, ((MR_Box) (transform_hlds__lambda__ArgX3_8)), ((MR_Box) (transform_hlds__lambda__ArgY3_9)));
          transform_hlds__lambda__succeeded = (transform_hlds__lambda__Var_26 == (MR_Integer) 0);
          transform_hlds__lambda__succeeded = !(transform_hlds__lambda__succeeded);
          if (transform_hlds__lambda__succeeded)
            *transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__Var_26;
          else
          {
            MR_Word transform_hlds__lambda__Var_27;

            mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__lambda_scalar_common_1[5], &transform_hlds__lambda__Var_27, ((MR_Box) (transform_hlds__lambda__ArgX4_10)), ((MR_Box) (transform_hlds__lambda__ArgY4_11)));
            transform_hlds__lambda__succeeded = (transform_hlds__lambda__Var_27 == (MR_Integer) 0);
            transform_hlds__lambda__succeeded = !(transform_hlds__lambda__succeeded);
            if (transform_hlds__lambda__succeeded)
              *transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__Var_27;
            else
            {
              MR_Word transform_hlds__lambda__Var_28;

              hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&transform_hlds__lambda__Var_28, transform_hlds__lambda__ArgX5_12, transform_hlds__lambda__ArgY5_13);
              transform_hlds__lambda__succeeded = (transform_hlds__lambda__Var_28 == (MR_Integer) 0);
              transform_hlds__lambda__succeeded = !(transform_hlds__lambda__succeeded);
              if (transform_hlds__lambda__succeeded)
                *transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__Var_28;
              else
              {
                MR_Word transform_hlds__lambda__Var_29;
                MR_Integer transform_hlds__lambda__Var_45 = (MR_Integer) transform_hlds__lambda__ArgX6_14;
                MR_Integer transform_hlds__lambda__Var_46 = (MR_Integer) transform_hlds__lambda__ArgY6_15;

                mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__lambda__Var_29, transform_hlds__lambda__Var_45, transform_hlds__lambda__Var_46);
                transform_hlds__lambda__succeeded = (transform_hlds__lambda__Var_29 == (MR_Integer) 0);
                transform_hlds__lambda__succeeded = !(transform_hlds__lambda__succeeded);
                if (transform_hlds__lambda__succeeded)
                  *transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__Var_29;
                else
                {
                  MR_Word transform_hlds__lambda__Var_30;

                  hlds__hlds_pred____Compare____pred_info_0_0(&transform_hlds__lambda__Var_30, transform_hlds__lambda__ArgX7_16, transform_hlds__lambda__ArgY7_17);
                  transform_hlds__lambda__succeeded = (transform_hlds__lambda__Var_30 == (MR_Integer) 0);
                  transform_hlds__lambda__succeeded = !(transform_hlds__lambda__succeeded);
                  if (transform_hlds__lambda__succeeded)
                    *transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__Var_30;
                  else
                  {
                    MR_Word transform_hlds__lambda__Var_31;

                    hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__lambda__Var_31, transform_hlds__lambda__ArgX8_18, transform_hlds__lambda__ArgY8_19);
                    transform_hlds__lambda__succeeded = (transform_hlds__lambda__Var_31 == (MR_Integer) 0);
                    transform_hlds__lambda__succeeded = !(transform_hlds__lambda__succeeded);
                    if (transform_hlds__lambda__succeeded)
                      *transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__Var_31;
                    else
                    {
                      MR_Word transform_hlds__lambda__Var_32;
                      MR_Integer transform_hlds__lambda__Var_47 = (MR_Integer) transform_hlds__lambda__ArgX9_20;
                      MR_Integer transform_hlds__lambda__Var_48 = (MR_Integer) transform_hlds__lambda__ArgY9_21;

                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__lambda__Var_32, transform_hlds__lambda__Var_47, transform_hlds__lambda__Var_48);
                      transform_hlds__lambda__succeeded = (transform_hlds__lambda__Var_32 == (MR_Integer) 0);
                      transform_hlds__lambda__succeeded = !(transform_hlds__lambda__succeeded);
                      if (transform_hlds__lambda__succeeded)
                        *transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__Var_32;
                      else
                      {
                        MR_Integer transform_hlds__lambda__Var_49 = (MR_Integer) transform_hlds__lambda__ArgX10_22;
                        MR_Integer transform_hlds__lambda__Var_50 = (MR_Integer) transform_hlds__lambda__ArgY10_23;

                        mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__lambda__HeadVar__1_1, transform_hlds__lambda__Var_49, transform_hlds__lambda__Var_50);
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

MR_bool MR_CALL 
transform_hlds__lambda____Unify____lambda_info_0_0(
  MR_Word transform_hlds__lambda__HeadVar__1_1,
  MR_Word transform_hlds__lambda__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__lambda__succeeded;
    MR_Integer transform_hlds__lambda__CastX_23 = (MR_Integer) transform_hlds__lambda__HeadVar__1_1;
    MR_Integer transform_hlds__lambda__CastY_24 = (MR_Integer) transform_hlds__lambda__HeadVar__2_2;

    transform_hlds__lambda__succeeded = (transform_hlds__lambda__CastX_23 == transform_hlds__lambda__CastY_24);
    if (transform_hlds__lambda__succeeded)
      transform_hlds__lambda__succeeded = MR_TRUE;
    else
    {
      MR_Word transform_hlds__lambda__TypeInfo_26_26;
      MR_Word transform_hlds__lambda__TypeInfo_27_27;
      MR_Word transform_hlds__lambda__TypeInfo_28_28;
      MR_Word transform_hlds__lambda__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__lambda__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word transform_hlds__lambda__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word transform_hlds__lambda__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word transform_hlds__lambda__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word transform_hlds__lambda__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word transform_hlds__lambda__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 3)));
      MR_Word transform_hlds__lambda__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word transform_hlds__lambda__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 4)));
      MR_Word transform_hlds__lambda__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word transform_hlds__lambda__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 5)));
      MR_Word transform_hlds__lambda__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 5)));
      MR_Word transform_hlds__lambda__ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 6)));
      MR_Word transform_hlds__lambda__ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 6)));
      MR_Word transform_hlds__lambda__ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 7)));
      MR_Word transform_hlds__lambda__ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 7)));
      MR_Word transform_hlds__lambda__ArgX9_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 8)));
      MR_Word transform_hlds__lambda__ArgY9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 8)));
      MR_Word transform_hlds__lambda__ArgX10_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 9)));
      MR_Word transform_hlds__lambda__ArgY10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__HeadVar__2_2, (MR_Integer) 9)));

      transform_hlds__lambda__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__lambda_scalar_common_1[3], ((MR_Box) (transform_hlds__lambda__ArgX1_3)), ((MR_Box) (transform_hlds__lambda__ArgY1_4)));
      if (transform_hlds__lambda__succeeded)
      {
        transform_hlds__lambda__TypeInfo_26_26 = (MR_Word) &transform_hlds__lambda_scalar_common_2[1];
        transform_hlds__lambda__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lambda__TypeInfo_26_26, ((MR_Box) (transform_hlds__lambda__ArgX2_5)), ((MR_Box) (transform_hlds__lambda__ArgY2_6)));
        if (transform_hlds__lambda__succeeded)
        {
          transform_hlds__lambda__TypeInfo_27_27 = (MR_Word) &transform_hlds__lambda_scalar_common_1[4];
          transform_hlds__lambda__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lambda__TypeInfo_27_27, ((MR_Box) (transform_hlds__lambda__ArgX3_7)), ((MR_Box) (transform_hlds__lambda__ArgY3_8)));
          if (transform_hlds__lambda__succeeded)
          {
            transform_hlds__lambda__TypeInfo_28_28 = (MR_Word) &transform_hlds__lambda_scalar_common_1[5];
            transform_hlds__lambda__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__lambda__TypeInfo_28_28, ((MR_Box) (transform_hlds__lambda__ArgX4_9)), ((MR_Box) (transform_hlds__lambda__ArgY4_10)));
            if (transform_hlds__lambda__succeeded)
            {
              transform_hlds__lambda__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(transform_hlds__lambda__ArgX5_11, transform_hlds__lambda__ArgY5_12);
              if (transform_hlds__lambda__succeeded)
              {
                transform_hlds__lambda__succeeded = (transform_hlds__lambda__ArgX6_13 == transform_hlds__lambda__ArgY6_14);
                if (transform_hlds__lambda__succeeded)
                {
                  transform_hlds__lambda__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(transform_hlds__lambda__ArgX7_15, transform_hlds__lambda__ArgY7_16);
                  if (transform_hlds__lambda__succeeded)
                  {
                    transform_hlds__lambda__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__lambda__ArgX8_17, transform_hlds__lambda__ArgY8_18);
                    if (transform_hlds__lambda__succeeded)
                    {
                      transform_hlds__lambda__succeeded = (transform_hlds__lambda__ArgX9_19 == transform_hlds__lambda__ArgY9_20);
                      if (transform_hlds__lambda__succeeded)
                        transform_hlds__lambda__succeeded = (transform_hlds__lambda__ArgX10_21 == transform_hlds__lambda__ArgY10_22);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return transform_hlds__lambda__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lambda__check_lambda_arg_type_and_mode_5_p_0(
  MR_Word transform_hlds__lambda__ModuleInfo_6,
  MR_Word transform_hlds__lambda__Type_7,
  MR_Word transform_hlds__lambda__Mode_8,
  MR_Integer transform_hlds__lambda__X_9,
  MR_Integer * transform_hlds__lambda__X_5)
{
  {
    MR_bool transform_hlds__lambda__succeeded;
    MR_Word transform_hlds__lambda__Inst_10;
    MR_Word transform_hlds__lambda__Var_13;
    MR_Word transform_hlds__lambda__Var_11;
    MR_Word transform_hlds__lambda__Var_12;

    *transform_hlds__lambda__X_5 = transform_hlds__lambda__X_9;
    transform_hlds__lambda__Inst_10 = check_hlds__mode_util__mode_get_initial_inst_2_f_0(transform_hlds__lambda__ModuleInfo_6, transform_hlds__lambda__Mode_8);
    transform_hlds__lambda__succeeded = ((((MR_tag((MR_Word) transform_hlds__lambda__Inst_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Inst_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (transform_hlds__lambda__succeeded)
    {
      transform_hlds__lambda__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Inst_10, (MR_Integer) 1)));
      transform_hlds__lambda__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Inst_10, (MR_Integer) 2)));
      transform_hlds__lambda__succeeded = ((MR_tag((MR_Word) transform_hlds__lambda__Var_13)) == (MR_mktag((MR_Integer) 1)));
      if (transform_hlds__lambda__succeeded)
        transform_hlds__lambda__Var_12 = (MR_Word) MR_body(((MR_Word) transform_hlds__lambda__Var_13), (MR_Integer) 1);
    }
    if (transform_hlds__lambda__succeeded)
    {
      transform_hlds__lambda__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(transform_hlds__lambda__Type_7);
      if (!(transform_hlds__lambda__succeeded))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lambda", (MR_String) "predicate \140transform_hlds.lambda.check_lambda_arg_type_and_mode\'/5", (MR_String) "non-higher order argument with higher order inst");
          return;
        }
      }
    }
    else
    {
    }
  }
}

static void MR_CALL 
transform_hlds__lambda__constraint_contains_vars_2_p_0_1(
  MR_Box transform_hlds__lambda__closure_arg,
  MR_Box transform_hlds__lambda__wrapper_arg_1,
  MR_Box * transform_hlds__lambda__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__lambda__closure = transform_hlds__lambda__closure_arg;
    MR_Word transform_hlds__lambda__conv0_HeadVar__2_2;

    parse_tree__prog_type__type_vars_2_p_0(((MR_Word) transform_hlds__lambda__wrapper_arg_1), &transform_hlds__lambda__conv0_HeadVar__2_2);
    *transform_hlds__lambda__wrapper_arg_2 = ((MR_Box) (transform_hlds__lambda__conv0_HeadVar__2_2));
  }
}

static MR_bool MR_CALL 
transform_hlds__lambda__constraint_contains_vars_2_p_0(
  MR_Word transform_hlds__lambda__LambdaVars_3,
  MR_Word transform_hlds__lambda__ClassConstraint_4)
{
  {
    MR_bool transform_hlds__lambda__succeeded;
    MR_Word transform_hlds__lambda__TypeInfo_16_16;
    MR_Word transform_hlds__lambda__ConstraintTypes_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__ClassConstraint_4, (MR_Integer) 1)));
    MR_Word transform_hlds__lambda__ConstraintVarsList_7;
    MR_Word transform_hlds__lambda__ConstraintVars_8;
    MR_Word transform_hlds__lambda__LambdaVarsSet_9;
    MR_Word transform_hlds__lambda__ConstraintVarsSet_10;
    MR_Word transform_hlds__lambda__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__ClassConstraint_4, (MR_Integer) 0)));

    mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__lambda_scalar_common_1[1], (MR_Word) &transform_hlds__lambda_scalar_common_2[6], transform_hlds__lambda__ConstraintTypes_6, &transform_hlds__lambda__ConstraintVarsList_7);
    transform_hlds__lambda__TypeInfo_16_16 = (MR_Word) &transform_hlds__lambda_scalar_common_1[0];
    mercury__list__condense_2_p_0(transform_hlds__lambda__TypeInfo_16_16, transform_hlds__lambda__ConstraintVarsList_7, &transform_hlds__lambda__ConstraintVars_8);
    mercury__set__list_to_set_2_p_0(transform_hlds__lambda__TypeInfo_16_16, transform_hlds__lambda__LambdaVars_3, &transform_hlds__lambda__LambdaVarsSet_9);
    mercury__set__list_to_set_2_p_0(transform_hlds__lambda__TypeInfo_16_16, transform_hlds__lambda__ConstraintVars_8, &transform_hlds__lambda__ConstraintVarsSet_10);
    transform_hlds__lambda__succeeded = mercury__set__subset_2_p_0(transform_hlds__lambda__TypeInfo_16_16, transform_hlds__lambda__ConstraintVarsSet_10, transform_hlds__lambda__LambdaVarsSet_9);
    return transform_hlds__lambda__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_proc_4_p_0(
  MR_Word transform_hlds__lambda__PredId_5,
  MR_Integer transform_hlds__lambda__ProcId_6,
  MR_Word transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_20)
{
  {
    MR_Word transform_hlds__lambda__TypeCtorInfo_23_23;
    MR_Word transform_hlds__lambda__TypeCtorInfo_24_24;
    MR_Word transform_hlds__lambda__TypeCtorInfo_26_26;
    MR_Word transform_hlds__lambda__PredTable0_8;
    MR_Word transform_hlds__lambda__PredInfo0_9;
    MR_Word transform_hlds__lambda__ProcTable0_10;
    MR_Word transform_hlds__lambda__ProcInfo0_11;
    MR_Word transform_hlds__lambda__ProcInfo_12;
    MR_Word transform_hlds__lambda__PredInfo1_13;
    MR_Word transform_hlds__lambda__ProcTable1_14;
    MR_Word transform_hlds__lambda__ProcTable_15;
    MR_Word transform_hlds__lambda__PredInfo_16;
    MR_Word transform_hlds__lambda__PredTable1_17;
    MR_Word transform_hlds__lambda__PredTable_18;
    MR_Word transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_21_21;
    MR_Box transform_hlds__lambda__conv0_PredInfo0_9;
    MR_Box transform_hlds__lambda__conv1_ProcInfo0_11;

    hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_19, &transform_hlds__lambda__PredTable0_8);
    transform_hlds__lambda__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    transform_hlds__lambda__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    mercury__map__lookup_3_p_0(transform_hlds__lambda__TypeCtorInfo_23_23, transform_hlds__lambda__TypeCtorInfo_24_24, transform_hlds__lambda__PredTable0_8, ((MR_Box) (transform_hlds__lambda__PredId_5)), &transform_hlds__lambda__conv0_PredInfo0_9);
    transform_hlds__lambda__PredInfo0_9 = ((MR_Word) transform_hlds__lambda__conv0_PredInfo0_9);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__lambda__PredInfo0_9, &transform_hlds__lambda__ProcTable0_10);
    transform_hlds__lambda__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__lambda__TypeCtorInfo_26_26, transform_hlds__lambda__ProcTable0_10, transform_hlds__lambda__ProcId_6, &transform_hlds__lambda__conv1_ProcInfo0_11);
    transform_hlds__lambda__ProcInfo0_11 = ((MR_Word) transform_hlds__lambda__conv1_ProcInfo0_11);
    transform_hlds__lambda__expand_lambdas_in_proc_2_6_p_0(transform_hlds__lambda__ProcInfo0_11, &transform_hlds__lambda__ProcInfo_12, transform_hlds__lambda__PredInfo0_9, &transform_hlds__lambda__PredInfo1_13, transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_19, &transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_21_21);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__lambda__PredInfo1_13, &transform_hlds__lambda__ProcTable1_14);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__lambda__TypeCtorInfo_26_26, transform_hlds__lambda__ProcId_6, ((MR_Box) (transform_hlds__lambda__ProcInfo_12)), transform_hlds__lambda__ProcTable1_14, &transform_hlds__lambda__ProcTable_15);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__lambda__ProcTable_15, transform_hlds__lambda__PredInfo1_13, &transform_hlds__lambda__PredInfo_16);
    hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_21_21, &transform_hlds__lambda__PredTable1_17);
    mercury__map__det_update_4_p_0(transform_hlds__lambda__TypeCtorInfo_23_23, transform_hlds__lambda__TypeCtorInfo_24_24, ((MR_Box) (transform_hlds__lambda__PredId_5)), ((MR_Box) (transform_hlds__lambda__PredInfo_16)), transform_hlds__lambda__PredTable1_17, &transform_hlds__lambda__PredTable_18);
    hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__lambda__PredTable_18, transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_21_21, transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_20);
  }
}

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_proc_2_6_p_0(
  MR_Word transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_ProcInfo_43,
  MR_Word transform_hlds__lambda__STATE_VARIABLE_PredInfo_0_44,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_PredInfo_45,
  MR_Word transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_46,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_47)
{
  {
    MR_Word transform_hlds__lambda__TypeVarSet0_10;
    MR_Word transform_hlds__lambda__HeadVars_11;
    MR_Word transform_hlds__lambda__VarSet0_12;
    MR_Word transform_hlds__lambda__VarTypes0_13;
    MR_Word transform_hlds__lambda__Goal0_14;
    MR_Word transform_hlds__lambda__RttiVarMaps0_15;
    MR_Word transform_hlds__lambda__InstVarSet0_16;
    MR_Word transform_hlds__lambda__HasParallelConj_17;
    MR_Word transform_hlds__lambda__Info0_20;
    MR_Word transform_hlds__lambda__Goal1_21;
    MR_Word transform_hlds__lambda__Info1_22;
    MR_Word transform_hlds__lambda__VarSet1_23;
    MR_Word transform_hlds__lambda__VarTypes1_24;
    MR_Word transform_hlds__lambda__TypeVarSet_25;
    MR_Word transform_hlds__lambda__RttiVarMaps1_27;
    MR_Word transform_hlds__lambda__MustRecomputeNonLocals_30;
    MR_Word transform_hlds__lambda__HaveExpandedLambdas_31;
    MR_Word transform_hlds__lambda__VarSet2_34;
    MR_Word transform_hlds__lambda__VarTypes2_35;
    MR_Word transform_hlds__lambda__RttiVarMaps2_36;
    MR_Word transform_hlds__lambda__Goal_38;
    MR_Word transform_hlds__lambda__VarSet_39;
    MR_Word transform_hlds__lambda__VarTypes_40;
    MR_Word transform_hlds__lambda__RttiVarMaps_41;
    MR_Word transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_48_48;
    MR_Word transform_hlds__lambda__STATE_VARIABLE_ProcInfo_52_52;
    MR_Word transform_hlds__lambda__STATE_VARIABLE_ProcInfo_53_53;
    MR_Word transform_hlds__lambda__STATE_VARIABLE_ProcInfo_54_54;
    MR_Word transform_hlds__lambda___InstVarSet_26;
    MR_Word transform_hlds__lambda__Var_28;
    MR_Word transform_hlds__lambda___PredInfo_29;

    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__lambda__STATE_VARIABLE_PredInfo_0_44, &transform_hlds__lambda__TypeVarSet0_10);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42, &transform_hlds__lambda__HeadVars_11);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42, &transform_hlds__lambda__VarSet0_12);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42, &transform_hlds__lambda__VarTypes0_13);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42, &transform_hlds__lambda__Goal0_14);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42, &transform_hlds__lambda__RttiVarMaps0_15);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42, &transform_hlds__lambda__InstVarSet0_16);
    hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42, &transform_hlds__lambda__HasParallelConj_17);
    {
      transform_hlds__lambda__Info0_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 0) = ((MR_Box) (transform_hlds__lambda__VarSet0_12));
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 1) = ((MR_Box) (transform_hlds__lambda__VarTypes0_13));
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 2) = ((MR_Box) (transform_hlds__lambda__TypeVarSet0_10));
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 3) = ((MR_Box) (transform_hlds__lambda__InstVarSet0_16));
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 4) = ((MR_Box) (transform_hlds__lambda__RttiVarMaps0_15));
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 5) = ((MR_Box) (transform_hlds__lambda__HasParallelConj_17));
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 6) = ((MR_Box) (transform_hlds__lambda__STATE_VARIABLE_PredInfo_0_44));
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 7) = ((MR_Box) (transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_46));
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 8) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info0_20, 9) = ((MR_Box) ((MR_Integer) 0));
    }
    transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__Goal0_14, &transform_hlds__lambda__Goal1_21, transform_hlds__lambda__Info0_20, &transform_hlds__lambda__Info1_22);
    transform_hlds__lambda__VarSet1_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 0)));
    transform_hlds__lambda__VarTypes1_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 1)));
    transform_hlds__lambda__TypeVarSet_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 2)));
    transform_hlds__lambda___InstVarSet_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 3)));
    transform_hlds__lambda__RttiVarMaps1_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 4)));
    transform_hlds__lambda__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 5)));
    transform_hlds__lambda___PredInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 6)));
    transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 7)));
    transform_hlds__lambda__MustRecomputeNonLocals_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 8)));
    transform_hlds__lambda__HaveExpandedLambdas_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info1_22, (MR_Integer) 9)));
    switch (transform_hlds__lambda__MustRecomputeNonLocals_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          transform_hlds__lambda__Goal_38 = transform_hlds__lambda__Goal1_21;
          transform_hlds__lambda__VarSet2_34 = transform_hlds__lambda__VarSet1_23;
          transform_hlds__lambda__VarTypes2_35 = transform_hlds__lambda__VarTypes1_24;
          transform_hlds__lambda__RttiVarMaps2_36 = transform_hlds__lambda__RttiVarMaps1_27;
          *transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_47 = transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_48_48;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__lambda__Goal2_33;
          MR_Word transform_hlds__lambda__InstMap0_37;
          MR_Word transform_hlds__lambda___Warnings_32;

          hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, transform_hlds__lambda__HeadVars_11, &transform_hlds__lambda___Warnings_32, transform_hlds__lambda__Goal1_21, &transform_hlds__lambda__Goal2_33, transform_hlds__lambda__VarSet1_23, &transform_hlds__lambda__VarSet2_34, transform_hlds__lambda__VarTypes1_24, &transform_hlds__lambda__VarTypes2_35, transform_hlds__lambda__RttiVarMaps1_27, &transform_hlds__lambda__RttiVarMaps2_36);
          hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42, transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_48_48, &transform_hlds__lambda__InstMap0_37);
          check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 0, transform_hlds__lambda__Goal2_33, &transform_hlds__lambda__Goal_38, transform_hlds__lambda__VarTypes2_35, transform_hlds__lambda__InstVarSet0_16, transform_hlds__lambda__InstMap0_37, transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_48_48, transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_47);
        }
        break;
    }
    switch (transform_hlds__lambda__HaveExpandedLambdas_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          transform_hlds__lambda__VarSet_39 = transform_hlds__lambda__VarSet2_34;
          transform_hlds__lambda__VarTypes_40 = transform_hlds__lambda__VarTypes2_35;
          transform_hlds__lambda__RttiVarMaps_41 = transform_hlds__lambda__RttiVarMaps2_36;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__lambda__TypeCtorInfo_34_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          MR_Word transform_hlds__lambda__MaxVar_68;
          MR_Integer transform_hlds__lambda__MaxVarNum_69;
          MR_ArrayPtr transform_hlds__lambda__VarUses0_70;
          MR_ArrayPtr transform_hlds__lambda__VarUses1_71;
          MR_ArrayPtr transform_hlds__lambda__VarUses_72;
          MR_Word transform_hlds__lambda__VarTypesList0_73;
          MR_Word transform_hlds__lambda__RevVarTypesList_74;
          MR_Word transform_hlds__lambda__VarTypesList_75;
          MR_Integer transform_hlds__lambda__Var_76;
          MR_ArrayPtr transform_hlds__lambda__conv0_VarUses0_70;

          transform_hlds__lambda__MaxVar_68 = mercury__varset__max_var_1_f_0(transform_hlds__lambda__TypeCtorInfo_34_82, transform_hlds__lambda__VarSet2_34);
          transform_hlds__lambda__MaxVarNum_69 = mercury__term__var_to_int_1_f_0(transform_hlds__lambda__TypeCtorInfo_34_82, transform_hlds__lambda__MaxVar_68);
          transform_hlds__lambda__Var_76 = (transform_hlds__lambda__MaxVarNum_69 + (MR_Integer) 1);
          mercury__array__init_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__Var_76, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__lambda__conv0_VarUses0_70);
          transform_hlds__lambda__VarUses0_70 = (MR_ArrayPtr) transform_hlds__lambda__conv0_VarUses0_70;
          transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__HeadVars_11, transform_hlds__lambda__VarUses0_70, &transform_hlds__lambda__VarUses1_71);
          transform_hlds__lambda__find_used_vars_in_goal_3_p_0(transform_hlds__lambda__Goal_38, transform_hlds__lambda__VarUses1_71, &transform_hlds__lambda__VarUses_72);
          hlds__vartypes__vartypes_to_assoc_list_2_p_0(transform_hlds__lambda__VarTypes2_35, &transform_hlds__lambda__VarTypesList0_73);
          transform_hlds__lambda__filter_vartypes_4_p_0(transform_hlds__lambda__VarTypesList0_73, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__lambda__RevVarTypesList_74, transform_hlds__lambda__VarUses_72);
          mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__lambda_scalar_common_2[0], transform_hlds__lambda__RevVarTypesList_74, &transform_hlds__lambda__VarTypesList_75);
          hlds__vartypes__vartypes_from_sorted_assoc_list_2_p_0(transform_hlds__lambda__VarTypesList_75, &transform_hlds__lambda__VarTypes_40);
          hlds__hlds_rtti__restrict_rtti_varmaps_3_p_0(transform_hlds__lambda__VarUses_72, transform_hlds__lambda__RttiVarMaps2_36, &transform_hlds__lambda__RttiVarMaps_41);
          transform_hlds__lambda__VarSet_39 = transform_hlds__lambda__VarSet2_34;
        }
        break;
    }
    hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__lambda__Goal_38, transform_hlds__lambda__STATE_VARIABLE_ProcInfo_0_42, &transform_hlds__lambda__STATE_VARIABLE_ProcInfo_52_52);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__lambda__VarSet_39, transform_hlds__lambda__STATE_VARIABLE_ProcInfo_52_52, &transform_hlds__lambda__STATE_VARIABLE_ProcInfo_53_53);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__lambda__VarTypes_40, transform_hlds__lambda__STATE_VARIABLE_ProcInfo_53_53, &transform_hlds__lambda__STATE_VARIABLE_ProcInfo_54_54);
    hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__lambda__RttiVarMaps_41, transform_hlds__lambda__STATE_VARIABLE_ProcInfo_54_54, transform_hlds__lambda__STATE_VARIABLE_ProcInfo_43);
    hlds__hlds_pred__pred_info_set_typevarset_3_p_0(transform_hlds__lambda__TypeVarSet_25, transform_hlds__lambda__STATE_VARIABLE_PredInfo_0_44, transform_hlds__lambda__STATE_VARIABLE_PredInfo_45);
  }
}

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_unify_goal_8_p_0(
  MR_Word transform_hlds__lambda__LHS_9,
  MR_Word transform_hlds__lambda__RHS0_10,
  MR_Word transform_hlds__lambda__Mode_11,
  MR_Word transform_hlds__lambda__Unification0_12,
  MR_Word transform_hlds__lambda__Context_13,
  MR_Word * transform_hlds__lambda__GoalExpr_14,
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_32,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_33)
{
  switch (MR_tag((MR_Word) transform_hlds__lambda__RHS0_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__lambda__GoalExpr_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lambda__LHS_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lambda__RHS0_10));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__lambda__Mode_11));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__lambda__Unification0_12));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__lambda__Context_13));
        }
        *transform_hlds__lambda__STATE_VARIABLE_Info_33 = transform_hlds__lambda__STATE_VARIABLE_Info_0_32;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word transform_hlds__lambda__Purity_16 = ((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS0_10, (MR_Integer) 0)))) & (MR_Integer) 3);
        MR_Word transform_hlds__lambda__PredOrFunc_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS0_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word transform_hlds__lambda__Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS0_10, (MR_Integer) 3)));
        MR_Word transform_hlds__lambda__Modes_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS0_10, (MR_Integer) 4)));
        MR_Word transform_hlds__lambda__Det_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS0_10, (MR_Integer) 5)));
        MR_Word transform_hlds__lambda__LambdaGoal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS0_10, (MR_Integer) 6)));
        MR_Word transform_hlds__lambda__LambdaGoal_25;
        MR_Word transform_hlds__lambda__Y_26;
        MR_Word transform_hlds__lambda__Unification_27;
        MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_34_34;
        MR_Word transform_hlds__lambda__Groundness_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS0_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word transform_hlds__lambda__NonLocalVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS0_10, (MR_Integer) 2)));

        transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__LambdaGoal0_24, &transform_hlds__lambda__LambdaGoal_25, transform_hlds__lambda__STATE_VARIABLE_Info_0_32, &transform_hlds__lambda__STATE_VARIABLE_Info_34_34);
        transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0(transform_hlds__lambda__Purity_16, transform_hlds__lambda__PredOrFunc_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__lambda__Vars_21, transform_hlds__lambda__Modes_22, transform_hlds__lambda__Det_23, transform_hlds__lambda__LambdaGoal_25, transform_hlds__lambda__Unification0_12, &transform_hlds__lambda__Y_26, &transform_hlds__lambda__Unification_27, transform_hlds__lambda__STATE_VARIABLE_Info_34_34, transform_hlds__lambda__STATE_VARIABLE_Info_33);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__lambda__GoalExpr_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lambda__LHS_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lambda__Y_26));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__lambda__Mode_11));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__lambda__Unification_27));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__lambda__Context_13));
        }
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_cases_4_p_0(
  MR_Word transform_hlds__lambda__HeadVar__1_1,
  MR_Word * transform_hlds__lambda__HeadVar__2_2,
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_3,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_4)
{
  if ((transform_hlds__lambda__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *transform_hlds__lambda__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *transform_hlds__lambda__STATE_VARIABLE_Info_4 = transform_hlds__lambda__STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word transform_hlds__lambda__Case0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word transform_hlds__lambda__Cases0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word transform_hlds__lambda__Case_10;
    MR_Word transform_hlds__lambda__Cases_11;
    MR_Word transform_hlds__lambda__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Case0_8, (MR_Integer) 0)));
    MR_Word transform_hlds__lambda__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Case0_8, (MR_Integer) 1)));
    MR_Word transform_hlds__lambda__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Case0_8, (MR_Integer) 2)));
    MR_Word transform_hlds__lambda__Goal_16;
    MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_19_19;

    transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__Goal0_15, &transform_hlds__lambda__Goal_16, transform_hlds__lambda__STATE_VARIABLE_Info_0_3, &transform_hlds__lambda__STATE_VARIABLE_Info_19_19);
    {
      transform_hlds__lambda__Case_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Case_10, 0) = ((MR_Box) (transform_hlds__lambda__MainConsId_13));
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Case_10, 1) = ((MR_Box) (transform_hlds__lambda__OtherConsIds_14));
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Case_10, 2) = ((MR_Box) (transform_hlds__lambda__Goal_16));
    }
    transform_hlds__lambda__expand_lambdas_in_cases_4_p_0(transform_hlds__lambda__Cases0_9, &transform_hlds__lambda__Cases_11, transform_hlds__lambda__STATE_VARIABLE_Info_19_19, transform_hlds__lambda__STATE_VARIABLE_Info_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *transform_hlds__lambda__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lambda__Case_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lambda__Cases_11));
    }
  }
}

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(
  MR_Word transform_hlds__lambda__HeadVar__1_1,
  MR_Word * transform_hlds__lambda__HeadVar__2_2,
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_3,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_4)
{
  if ((transform_hlds__lambda__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *transform_hlds__lambda__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *transform_hlds__lambda__STATE_VARIABLE_Info_4 = transform_hlds__lambda__STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word transform_hlds__lambda__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word transform_hlds__lambda__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word transform_hlds__lambda__Goal_10;
    MR_Word transform_hlds__lambda__Goals_11;
    MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_15_15;

    transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__Goal0_8, &transform_hlds__lambda__Goal_10, transform_hlds__lambda__STATE_VARIABLE_Info_0_3, &transform_hlds__lambda__STATE_VARIABLE_Info_15_15);
    transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(transform_hlds__lambda__Goals0_9, &transform_hlds__lambda__Goals_11, transform_hlds__lambda__STATE_VARIABLE_Info_15_15, transform_hlds__lambda__STATE_VARIABLE_Info_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *transform_hlds__lambda__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lambda__Goal_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lambda__Goals_11));
    }
  }
}

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(
  MR_Word transform_hlds__lambda__Goal0_5,
  MR_Word * transform_hlds__lambda__Goal_6,
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_68,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_69)
{
  {
    MR_bool transform_hlds__lambda__succeeded;
    MR_Word transform_hlds__lambda__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Goal0_5, (MR_Integer) 0)));
    MR_Word transform_hlds__lambda__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Goal0_5, (MR_Integer) 1)));
    MR_Word transform_hlds__lambda__GoalExpr_15;

    switch (MR_tag((MR_Word) transform_hlds__lambda__GoalExpr0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__lambda__SubGoal0_23 = (MR_Word) MR_body(((MR_Word) transform_hlds__lambda__GoalExpr0_8), (MR_Integer) 0);
          MR_Word transform_hlds__lambda__SubGoal_24;

          transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__SubGoal0_23, &transform_hlds__lambda__SubGoal_24, transform_hlds__lambda__STATE_VARIABLE_Info_0_68, transform_hlds__lambda__STATE_VARIABLE_Info_69);
          transform_hlds__lambda__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__lambda__SubGoal_24);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__lambda__LHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 0)));
          MR_Word transform_hlds__lambda__RHS_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 1)));
          MR_Word transform_hlds__lambda__Mode_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 2)));
          MR_Word transform_hlds__lambda__Unification_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 3)));
          MR_Word transform_hlds__lambda__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 4)));

          transform_hlds__lambda__expand_lambdas_in_unify_goal_8_p_0(transform_hlds__lambda__LHS_10, transform_hlds__lambda__RHS_11, transform_hlds__lambda__Mode_12, transform_hlds__lambda__Unification_13, transform_hlds__lambda__Context_14, &transform_hlds__lambda__GoalExpr_15, transform_hlds__lambda__STATE_VARIABLE_Info_0_68, transform_hlds__lambda__STATE_VARIABLE_Info_69);
        }
        break;
      case (MR_Integer) 2:
        {
          transform_hlds__lambda__GoalExpr_15 = transform_hlds__lambda__GoalExpr0_8;
          *transform_hlds__lambda__STATE_VARIABLE_Info_69 = transform_hlds__lambda__STATE_VARIABLE_Info_0_68;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              transform_hlds__lambda__GoalExpr_15 = transform_hlds__lambda__GoalExpr0_8;
              *transform_hlds__lambda__STATE_VARIABLE_Info_69 = transform_hlds__lambda__STATE_VARIABLE_Info_0_68;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__lambda__ConjType_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__lambda__Goals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word transform_hlds__lambda__Goals_18;

              transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(transform_hlds__lambda__Goals0_17, &transform_hlds__lambda__Goals_18, transform_hlds__lambda__STATE_VARIABLE_Info_0_68, transform_hlds__lambda__STATE_VARIABLE_Info_69);
              {
                transform_hlds__lambda__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__lambda__ConjType_16));
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__lambda__Goals_18));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__lambda__Goals0_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__lambda__Goals_86;

              transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(transform_hlds__lambda__Goals0_85, &transform_hlds__lambda__Goals_86, transform_hlds__lambda__STATE_VARIABLE_Info_0_68, transform_hlds__lambda__STATE_VARIABLE_Info_69);
              {
                transform_hlds__lambda__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__lambda__Goals_86));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__lambda__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__lambda__CanFail_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word transform_hlds__lambda__Cases0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 3)));
              MR_Word transform_hlds__lambda__Cases_22;

              transform_hlds__lambda__expand_lambdas_in_cases_4_p_0(transform_hlds__lambda__Cases0_21, &transform_hlds__lambda__Cases_22, transform_hlds__lambda__STATE_VARIABLE_Info_0_68, transform_hlds__lambda__STATE_VARIABLE_Info_69);
              {
                transform_hlds__lambda__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__lambda__Var_19));
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__lambda__CanFail_20));
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 3) = ((MR_Box) (transform_hlds__lambda__Cases_22));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word transform_hlds__lambda__Reason_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__lambda__SubGoal0_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word transform_hlds__lambda__FGT_27;
              MR_Word transform_hlds__lambda__Var_26;

              transform_hlds__lambda__succeeded = ((((MR_tag((MR_Word) transform_hlds__lambda__Reason_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_25, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (transform_hlds__lambda__succeeded)
              {
                transform_hlds__lambda__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_25, (MR_Integer) 1)));
                transform_hlds__lambda__FGT_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_25, (MR_Integer) 2)));
                switch (transform_hlds__lambda__FGT_27) {
                  default:
                    transform_hlds__lambda__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    transform_hlds__lambda__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    transform_hlds__lambda__succeeded = MR_TRUE;
                    break;
                }
              }
              if (transform_hlds__lambda__succeeded)
              {
                transform_hlds__lambda__GoalExpr_15 = transform_hlds__lambda__GoalExpr0_8;
                *transform_hlds__lambda__STATE_VARIABLE_Info_69 = transform_hlds__lambda__STATE_VARIABLE_Info_0_68;
              }
              else
              {
                MR_Word transform_hlds__lambda__SubGoal_87;

                transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__SubGoal0_89, &transform_hlds__lambda__SubGoal_87, transform_hlds__lambda__STATE_VARIABLE_Info_0_68, transform_hlds__lambda__STATE_VARIABLE_Info_69);
                {
                  transform_hlds__lambda__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__lambda__Reason_25));
                  MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__lambda__SubGoal_87));
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word transform_hlds__lambda__Vars_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__lambda__Cond0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word transform_hlds__lambda__Then0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 3)));
              MR_Word transform_hlds__lambda__Else0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 4)));
              MR_Word transform_hlds__lambda__Cond_32;
              MR_Word transform_hlds__lambda__Then_33;
              MR_Word transform_hlds__lambda__Else_34;
              MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_76_76;
              MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_77_77;

              transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__Cond0_29, &transform_hlds__lambda__Cond_32, transform_hlds__lambda__STATE_VARIABLE_Info_0_68, &transform_hlds__lambda__STATE_VARIABLE_Info_76_76);
              transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__Then0_30, &transform_hlds__lambda__Then_33, transform_hlds__lambda__STATE_VARIABLE_Info_76_76, &transform_hlds__lambda__STATE_VARIABLE_Info_77_77);
              transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__Else0_31, &transform_hlds__lambda__Else_34, transform_hlds__lambda__STATE_VARIABLE_Info_77_77, transform_hlds__lambda__STATE_VARIABLE_Info_69);
              {
                transform_hlds__lambda__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__lambda__Vars_28));
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__lambda__Cond_32));
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 3) = ((MR_Box) (transform_hlds__lambda__Then_33));
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 4) = ((MR_Box) (transform_hlds__lambda__Else_34));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word transform_hlds__lambda__ShortHand0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__lambda__ShortHand_63;

              switch (MR_tag((MR_Word) transform_hlds__lambda__ShortHand0_53)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lambda", (MR_String) "predicate \140transform_hlds.lambda.expand_lambdas_in_goal\'/4", (MR_String) "bi_implication");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word transform_hlds__lambda__GoalType_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 0)));
                    MR_Word transform_hlds__lambda__Outer_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 1)));
                    MR_Word transform_hlds__lambda__Inner_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 2)));
                    MR_Word transform_hlds__lambda__MaybeOutputVars_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 3)));
                    MR_Word transform_hlds__lambda__MainGoal0_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 4)));
                    MR_Word transform_hlds__lambda__OrElseGoals0_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 5)));
                    MR_Word transform_hlds__lambda__OrElseInners_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 6)));
                    MR_Word transform_hlds__lambda__MainGoal_61;
                    MR_Word transform_hlds__lambda__OrElseGoals_62;
                    MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_74_74;

                    transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__MainGoal0_58, &transform_hlds__lambda__MainGoal_61, transform_hlds__lambda__STATE_VARIABLE_Info_0_68, &transform_hlds__lambda__STATE_VARIABLE_Info_74_74);
                    transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(transform_hlds__lambda__OrElseGoals0_59, &transform_hlds__lambda__OrElseGoals_62, transform_hlds__lambda__STATE_VARIABLE_Info_74_74, transform_hlds__lambda__STATE_VARIABLE_Info_69);
                    {
                      transform_hlds__lambda__ShortHand_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand_63, 0) = ((MR_Box) (transform_hlds__lambda__GoalType_54));
                      MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand_63, 1) = ((MR_Box) (transform_hlds__lambda__Outer_55));
                      MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand_63, 2) = ((MR_Box) (transform_hlds__lambda__Inner_56));
                      MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand_63, 3) = ((MR_Box) (transform_hlds__lambda__MaybeOutputVars_57));
                      MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand_63, 4) = ((MR_Box) (transform_hlds__lambda__MainGoal_61));
                      MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand_63, 5) = ((MR_Box) (transform_hlds__lambda__OrElseGoals_62));
                      MR_hl_field(MR_mktag(1), transform_hlds__lambda__ShortHand_63, 6) = ((MR_Box) (transform_hlds__lambda__OrElseInners_60));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word transform_hlds__lambda__MaybeIO_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 0)));
                    MR_Word transform_hlds__lambda__ResultVar_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 1)));
                    MR_Word transform_hlds__lambda__SubGoal0_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__ShortHand0_53, (MR_Integer) 2)));
                    MR_Word transform_hlds__lambda__SubGoal_92;

                    transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(transform_hlds__lambda__SubGoal0_91, &transform_hlds__lambda__SubGoal_92, transform_hlds__lambda__STATE_VARIABLE_Info_0_68, transform_hlds__lambda__STATE_VARIABLE_Info_69);
                    {
                      transform_hlds__lambda__ShortHand_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), transform_hlds__lambda__ShortHand_63, 0) = ((MR_Box) (transform_hlds__lambda__MaybeIO_64));
                      MR_hl_field(MR_mktag(2), transform_hlds__lambda__ShortHand_63, 1) = ((MR_Box) (transform_hlds__lambda__ResultVar_65));
                      MR_hl_field(MR_mktag(2), transform_hlds__lambda__ShortHand_63, 2) = ((MR_Box) (transform_hlds__lambda__SubGoal_92));
                    }
                  }
                  break;
              }
              {
                transform_hlds__lambda__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__lambda__ShortHand_63));
              }
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__lambda__Goal_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lambda__GoalExpr_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lambda__GoalInfo_9));
    }
  }
}

void MR_CALL 
transform_hlds__lambda__expand_lambda_15_p_0(
  MR_Word transform_hlds__lambda__Purity_16,
  MR_Word transform_hlds__lambda___Groundness_17,
  MR_Word transform_hlds__lambda__PredOrFunc_18,
  MR_Word transform_hlds__lambda__RegWrapperProc_20,
  MR_Word transform_hlds__lambda__Vars_21,
  MR_Word transform_hlds__lambda__Modes_22,
  MR_Word transform_hlds__lambda__Detism_23,
  MR_Word transform_hlds__lambda__OrigNonLocals0_24,
  MR_Word transform_hlds__lambda__LambdaGoal_25,
  MR_Word transform_hlds__lambda__Unification0_26,
  MR_Word * transform_hlds__lambda__Functor_27,
  MR_Word * transform_hlds__lambda__Unification_28,
  MR_Word transform_hlds__lambda__LambdaInfo0_29,
  MR_Word * transform_hlds__lambda__LambdaInfo_30)
{
  transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0(transform_hlds__lambda__Purity_16, transform_hlds__lambda__PredOrFunc_18, transform_hlds__lambda__RegWrapperProc_20, transform_hlds__lambda__Vars_21, transform_hlds__lambda__Modes_22, transform_hlds__lambda__Detism_23, transform_hlds__lambda__LambdaGoal_25, transform_hlds__lambda__Unification0_26, transform_hlds__lambda__Functor_27, transform_hlds__lambda__Unification_28, transform_hlds__lambda__LambdaInfo0_29, transform_hlds__lambda__LambdaInfo_30);
}

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_11(
  MR_Box transform_hlds__lambda__closure_arg,
  MR_Box transform_hlds__lambda__wrapper_arg_1,
  MR_Box transform_hlds__lambda__wrapper_arg_2,
  MR_Box transform_hlds__lambda__wrapper_arg_3,
  MR_Box * transform_hlds__lambda__wrapper_arg_4)
{
  {
    MR_Box transform_hlds__lambda__closure = transform_hlds__lambda__closure_arg;
    MR_Integer transform_hlds__lambda__conv3_X_5;

    transform_hlds__lambda__check_lambda_arg_type_and_mode_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__lambda__wrapper_arg_1), ((MR_Word) transform_hlds__lambda__wrapper_arg_2), ((MR_Integer) transform_hlds__lambda__wrapper_arg_3), &transform_hlds__lambda__conv3_X_5);
    *transform_hlds__lambda__wrapper_arg_4 = ((MR_Box) (transform_hlds__lambda__conv3_X_5));
  }
}

static MR_bool MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_2(
  MR_Box transform_hlds__lambda__closure_arg,
  MR_Box transform_hlds__lambda__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__lambda__succeeded;
    MR_Box transform_hlds__lambda__closure = transform_hlds__lambda__closure_arg;

    transform_hlds__lambda__succeeded = transform_hlds__lambda__constraint_contains_vars_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__lambda__wrapper_arg_1));
    return transform_hlds__lambda__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_1(
  MR_Box transform_hlds__lambda__closure_arg,
  MR_Box transform_hlds__lambda__wrapper_arg_1,
  MR_Box * transform_hlds__lambda__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__lambda__closure = transform_hlds__lambda__closure_arg;
    MR_Word transform_hlds__lambda__conv0_HeadVar__2_2;

    parse_tree__prog_type__type_vars_2_p_0(((MR_Word) transform_hlds__lambda__wrapper_arg_1), &transform_hlds__lambda__conv0_HeadVar__2_2);
    *transform_hlds__lambda__wrapper_arg_2 = ((MR_Box) (transform_hlds__lambda__conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_3(
  void * transform_hlds__lambda__env_ptr_arg)
{
  {
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * transform_hlds__lambda__env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) transform_hlds__lambda__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_5(
  void * transform_hlds__lambda__env_ptr_arg)
{
  {
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * transform_hlds__lambda__env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) transform_hlds__lambda__env_ptr_arg;

    (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVar_92 = ((MR_Word) (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__conv1_InitialVar_92);
    transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_4(transform_hlds__lambda__env_ptr);
  }
}

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_4(
  void * transform_hlds__lambda__env_ptr_arg)
{
  {
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * transform_hlds__lambda__env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) transform_hlds__lambda__env_ptr_arg;

    (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__list__member_2_p_0((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeInfo_189_189, ((MR_Box) ((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVar_92)), (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21);
    if ((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
      transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_3(transform_hlds__lambda__env_ptr);
  }
}

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_6(
  void * transform_hlds__lambda__env_ptr_arg)
{
  {
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * transform_hlds__lambda__env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) transform_hlds__lambda__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
      {
        mercury__list__member_2_p_1((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeInfo_189_189, &(transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__conv1_InitialVar_92, (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVars_91, transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_5, transform_hlds__lambda__env_ptr);
        (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_7(
  void * transform_hlds__lambda__env_ptr_arg)
{
  {
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * transform_hlds__lambda__env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) transform_hlds__lambda__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__commit_1, 1);
  }
}

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_9(
  void * transform_hlds__lambda__env_ptr_arg)
{
  {
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * transform_hlds__lambda__env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) transform_hlds__lambda__env_ptr_arg;

    (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Mode_102 = ((MR_Word) (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__conv2_Mode_102);
    transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_8(transform_hlds__lambda__env_ptr);
  }
}

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_8(
  void * transform_hlds__lambda__env_ptr_arg)
{
  {
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * transform_hlds__lambda__env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) transform_hlds__lambda__env_ptr_arg;

    (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = check_hlds__mode_util__mode_is_input_2_p_0((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_38, (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Mode_102);
    (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = !((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded);
    if ((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
      transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_7(transform_hlds__lambda__env_ptr);
  }
}

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_10(
  void * transform_hlds__lambda__env_ptr_arg)
{
  {
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * transform_hlds__lambda__env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) transform_hlds__lambda__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__commit_1) == 0)
      {
        mercury__list__member_2_p_1((transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_190_190, &(transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__conv2_Mode_102, (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__CurriedArgModes_101, transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_9, transform_hlds__lambda__env_ptr);
        (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__lambda__env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
  }
}

void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0(
  MR_Word transform_hlds__lambda__Purity_16,
  MR_Word transform_hlds__lambda__PredOrFunc_18,
  MR_Word transform_hlds__lambda__RegWrapperProc_20,
  MR_Word transform_hlds__lambda__Vars_21,
  MR_Word transform_hlds__lambda__Modes_22,
  MR_Word transform_hlds__lambda__Detism_23,
  MR_Word transform_hlds__lambda__LambdaGoal_25,
  MR_Word transform_hlds__lambda__Unification0_26,
  MR_Word * transform_hlds__lambda__Functor_27,
  MR_Word * transform_hlds__lambda__Unification_28,
  MR_Word transform_hlds__lambda__LambdaInfo0_29,
  MR_Word * transform_hlds__lambda__LambdaInfo_30)
{
  {
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s transform_hlds__lambda__env;

    (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21 = transform_hlds__lambda__Vars_21;
    {
      MR_Word transform_hlds__lambda__TypeCtorInfo_181_181;
      MR_Word transform_hlds__lambda__TypeCtorInfo_186_186;
      MR_Word transform_hlds__lambda__VarSet_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 0)));
      MR_Word transform_hlds__lambda__VarTypes_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 1)));
      MR_Word transform_hlds__lambda__TVarSet_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 2)));
      MR_Word transform_hlds__lambda__InstVarSet_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 3)));
      MR_Word transform_hlds__lambda__RttiVarMaps_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 4)));
      MR_Word transform_hlds__lambda__HasParallelConj_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 5)));
      MR_Word transform_hlds__lambda__OrigPredInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 6)));
      MR_Word transform_hlds__lambda__MustRecomputeNonLocals0_39;
      MR_Word transform_hlds__lambda__AllConstraints_41;
      MR_Word transform_hlds__lambda__LambdaVarTypeList_42;
      MR_Word transform_hlds__lambda__LambdaTypeVarsList_43;
      MR_Word transform_hlds__lambda__LambdaTypeVars_44;
      MR_Word transform_hlds__lambda__UnivConstraints_45;
      MR_Word transform_hlds__lambda__Constraints_46;
      MR_Word transform_hlds__lambda__ExistQVars_47;
      MR_Word transform_hlds__lambda__LambdaGoalInfo_49;
      MR_Word transform_hlds__lambda__LambdaGoalNonLocals_50;
      MR_Word transform_hlds__lambda__LambdaNonLocals_51;
      MR_Word transform_hlds__lambda__ExtraTypeInfos_52;
      MR_Word transform_hlds__lambda__Var_53;
      MR_Word transform_hlds__lambda__ArgUnifyModes0_56;
      MR_Word transform_hlds__lambda__OrigVars_60;
      MR_Word transform_hlds__lambda__NonLocals1_76;
      MR_Word transform_hlds__lambda__NewTypeInfos_77;
      MR_Word transform_hlds__lambda__NonLocals_78;
      MR_Word transform_hlds__lambda__MustRecomputeNonLocals_79;
      MR_Word transform_hlds__lambda__ArgVars1_80;
      MR_Word transform_hlds__lambda__ArgVars_103;
      MR_Word transform_hlds__lambda__PredId_104;
      MR_Integer transform_hlds__lambda__ProcId_105;
      MR_Word transform_hlds__lambda__ArgUnifyModes_106;
      MR_Word transform_hlds__lambda__ModuleInfo_108;
      MR_Word transform_hlds__lambda__ShroudedPredProcId_144;
      MR_Word transform_hlds__lambda__ConsId_145;
      MR_Word transform_hlds__lambda__Var_148;
      MR_Word transform_hlds__lambda__Var_174;
      MR_Word transform_hlds__lambda___HaveExpandedLambdas_40;
      MR_Word transform_hlds__lambda__Var_48;
      MR_Word transform_hlds__lambda__PredId0_83;
      MR_Integer transform_hlds__lambda__ProcId0_84;
      MR_Word transform_hlds__lambda__Call_PredInfo_89;
      MR_Word transform_hlds__lambda__Call_ProcInfo_90;
      MR_Word transform_hlds__lambda__LambdaGoalExpr_81;
      MR_Word transform_hlds__lambda__CallVars_85;
      MR_Word transform_hlds__lambda__Call_CodeModel_93;
      MR_Word transform_hlds__lambda__CodeModel_94;
      MR_Word transform_hlds__lambda__Globals_95;
      MR_Word transform_hlds__lambda__Target_96;
      MR_Word transform_hlds__lambda__HighLevelCode_97;
      MR_Word transform_hlds__lambda__Call_ArgModes_99;
      MR_Integer transform_hlds__lambda__NumInitialVars_100;
      MR_Word transform_hlds__lambda__Var_157;
      MR_Word transform_hlds__lambda__Var_82;
      MR_Word transform_hlds__lambda__Var_86;
      MR_Word transform_hlds__lambda__Var_87;
      MR_Word transform_hlds__lambda__Var_88;

      (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 7)));
      transform_hlds__lambda__MustRecomputeNonLocals0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 8)));
      transform_hlds__lambda___HaveExpandedLambdas_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaInfo0_29, (MR_Integer) 9)));
      hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_p_0(transform_hlds__lambda__RttiVarMaps_35, &transform_hlds__lambda__AllConstraints_41);
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__lambda__VarTypes_32, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21, &transform_hlds__lambda__LambdaVarTypeList_42);
      transform_hlds__lambda__TypeCtorInfo_181_181 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
      mercury__list__map_3_p_0(transform_hlds__lambda__TypeCtorInfo_181_181, (MR_Word) &transform_hlds__lambda_scalar_common_1[1], (MR_Word) &transform_hlds__lambda_scalar_common_2[5], transform_hlds__lambda__LambdaVarTypeList_42, &transform_hlds__lambda__LambdaTypeVarsList_43);
      mercury__list__condense_2_p_0((MR_Word) &transform_hlds__lambda_scalar_common_1[0], transform_hlds__lambda__LambdaTypeVarsList_43, &transform_hlds__lambda__LambdaTypeVars_44);
      {
        transform_hlds__lambda__Var_148 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__lambda__Var_148, 0) = ((MR_Box) (&transform_hlds__lambda_scalar_common_5[2]));
        MR_hl_field(MR_mktag(0), transform_hlds__lambda__Var_148, 1) = ((MR_Box) (transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_2));
        MR_hl_field(MR_mktag(0), transform_hlds__lambda__Var_148, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), transform_hlds__lambda__Var_148, 3) = ((MR_Box) (transform_hlds__lambda__LambdaTypeVars_44));
      }
      mercury__list__filter_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, transform_hlds__lambda__Var_148, transform_hlds__lambda__AllConstraints_41, &transform_hlds__lambda__UnivConstraints_45);
      {
        transform_hlds__lambda__Constraints_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__lambda__Constraints_46, 0) = ((MR_Box) (transform_hlds__lambda__UnivConstraints_45));
        MR_hl_field(MR_mktag(0), transform_hlds__lambda__Constraints_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      transform_hlds__lambda__ExistQVars_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      transform_hlds__lambda__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaGoal_25, (MR_Integer) 0)));
      transform_hlds__lambda__LambdaGoalInfo_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaGoal_25, (MR_Integer) 1)));
      transform_hlds__lambda__LambdaGoalNonLocals_50 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__lambda__LambdaGoalInfo_49);
      transform_hlds__lambda__TypeCtorInfo_186_186 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
      parse_tree__set_of_var__insert_list_3_p_0(transform_hlds__lambda__TypeCtorInfo_186_186, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21, transform_hlds__lambda__LambdaGoalNonLocals_50, &transform_hlds__lambda__LambdaNonLocals_51);
      hlds__goal_util__extra_nonlocal_typeinfos_5_p_0(transform_hlds__lambda__RttiVarMaps_35, transform_hlds__lambda__VarTypes_32, transform_hlds__lambda__ExistQVars_47, transform_hlds__lambda__LambdaNonLocals_51, &transform_hlds__lambda__ExtraTypeInfos_52);
      switch (MR_tag((MR_Word) transform_hlds__lambda__Unification0_26)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word transform_hlds__lambda__Var_54;
            MR_Word transform_hlds__lambda__Var_57;
            MR_Word transform_hlds__lambda__Var_58;
            MR_Word transform_hlds__lambda__Var_59;

            transform_hlds__lambda__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unification0_26, (MR_Integer) 0)));
            transform_hlds__lambda__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unification0_26, (MR_Integer) 1)));
            transform_hlds__lambda__OrigVars_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unification0_26, (MR_Integer) 2)));
            transform_hlds__lambda__ArgUnifyModes0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unification0_26, (MR_Integer) 3)));
            transform_hlds__lambda__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unification0_26, (MR_Integer) 4)));
            transform_hlds__lambda__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unification0_26, (MR_Integer) 5)));
            transform_hlds__lambda__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unification0_26, (MR_Integer) 6)));
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lambda", (MR_String) "predicate \140transform_hlds.lambda.expand_lambda\'/15", (MR_String) "unexpected unification");
              return;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lambda", (MR_String) "predicate \140transform_hlds.lambda.expand_lambda\'/15", (MR_String) "unexpected unification");
              return;
            }
          }
          break;
      }
      parse_tree__set_of_var__delete_list_3_p_0(transform_hlds__lambda__TypeCtorInfo_186_186, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21, transform_hlds__lambda__LambdaGoalNonLocals_50, &transform_hlds__lambda__NonLocals1_76);
      parse_tree__set_of_var__difference_3_p_0(transform_hlds__lambda__TypeCtorInfo_186_186, transform_hlds__lambda__ExtraTypeInfos_52, transform_hlds__lambda__NonLocals1_76, &transform_hlds__lambda__NewTypeInfos_77);
      parse_tree__set_of_var__union_3_p_0(transform_hlds__lambda__TypeCtorInfo_186_186, transform_hlds__lambda__NonLocals1_76, transform_hlds__lambda__NewTypeInfos_77, &transform_hlds__lambda__NonLocals_78);
      (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = parse_tree__set_of_var__is_empty_1_p_0(transform_hlds__lambda__TypeCtorInfo_186_186, transform_hlds__lambda__NewTypeInfos_77);
      if ((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
        transform_hlds__lambda__MustRecomputeNonLocals_79 = transform_hlds__lambda__MustRecomputeNonLocals0_39;
      else
        transform_hlds__lambda__MustRecomputeNonLocals_79 = (MR_Integer) 1;
      parse_tree__set_of_var__to_sorted_list_2_p_0(transform_hlds__lambda__TypeCtorInfo_186_186, transform_hlds__lambda__NonLocals_78, &transform_hlds__lambda__ArgVars1_80);
      transform_hlds__lambda__LambdaGoalExpr_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaGoal_25, (MR_Integer) 0)));
      transform_hlds__lambda__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__LambdaGoal_25, (MR_Integer) 1)));
      (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = ((MR_tag((MR_Word) transform_hlds__lambda__LambdaGoalExpr_81)) == (MR_mktag((MR_Integer) 2)));
      if ((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
      {
        transform_hlds__lambda__PredId0_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__LambdaGoalExpr_81, (MR_Integer) 0)));
        transform_hlds__lambda__ProcId0_84 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__LambdaGoalExpr_81, (MR_Integer) 1)));
        transform_hlds__lambda__CallVars_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__LambdaGoalExpr_81, (MR_Integer) 2)));
        transform_hlds__lambda__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__LambdaGoalExpr_81, (MR_Integer) 3)));
        transform_hlds__lambda__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__LambdaGoalExpr_81, (MR_Integer) 4)));
        transform_hlds__lambda__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__LambdaGoalExpr_81, (MR_Integer) 5)));
        hlds__hlds_module__module_info_pred_proc_info_5_p_0((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_38, transform_hlds__lambda__PredId0_83, transform_hlds__lambda__ProcId0_84, &transform_hlds__lambda__Call_PredInfo_89, &transform_hlds__lambda__Call_ProcInfo_90);
        (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeInfo_189_189 = (MR_Word) &transform_hlds__lambda_scalar_common_1[2];
        (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__list__remove_suffix_3_p_0((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeInfo_189_189, transform_hlds__lambda__CallVars_85, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21, &(transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVars_91);
        if ((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
        {
          transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_6(&transform_hlds__lambda__env);
          (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = !((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded);
          if ((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
          {
            transform_hlds__lambda__Call_CodeModel_93 = hlds__code_model__proc_info_interface_code_model_1_f_0(transform_hlds__lambda__Call_ProcInfo_90);
            hlds__code_model__determinism_to_code_model_2_p_0(transform_hlds__lambda__Detism_23, &transform_hlds__lambda__CodeModel_94);
            hlds__hlds_module__module_info_get_globals_2_p_0((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_38, &transform_hlds__lambda__Globals_95);
            libs__globals__get_target_2_p_0(transform_hlds__lambda__Globals_95, &transform_hlds__lambda__Target_96);
            transform_hlds__lambda__Var_157 = (MR_Integer) 264;
            libs__globals__lookup_bool_option_3_p_0(transform_hlds__lambda__Globals_95, transform_hlds__lambda__Var_157, &transform_hlds__lambda__HighLevelCode_97);
            switch (transform_hlds__lambda__Target_96) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                switch (transform_hlds__lambda__HighLevelCode_97) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = (transform_hlds__lambda__CodeModel_94 == transform_hlds__lambda__Call_CodeModel_93);
                      if (!((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded))
                      {
                        (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = (transform_hlds__lambda__CodeModel_94 == (MR_Integer) 2);
                        if ((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
                          (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = (transform_hlds__lambda__Call_CodeModel_93 == (MR_Integer) 0);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word transform_hlds__lambda__Call_PredOrFunc_98;

                      transform_hlds__lambda__Call_PredOrFunc_98 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__lambda__Call_PredInfo_89);
                      (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = (transform_hlds__lambda__PredOrFunc_18 == transform_hlds__lambda__Call_PredOrFunc_98);
                      if ((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
                        (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = (transform_hlds__lambda__CodeModel_94 == transform_hlds__lambda__Call_CodeModel_93);
                    }
                    break;
                }
                break;
              case (MR_Integer) 3:
                (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = (transform_hlds__lambda__CodeModel_94 == transform_hlds__lambda__Call_CodeModel_93);
                break;
            }
            if ((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
            {
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__lambda__Call_ProcInfo_90, &transform_hlds__lambda__Call_ArgModes_99);
              mercury__list__length_2_p_0((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeInfo_189_189, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVars_91, &transform_hlds__lambda__NumInitialVars_100);
              (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_190_190 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
              (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__list__take_3_p_0((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_190_190, transform_hlds__lambda__NumInitialVars_100, transform_hlds__lambda__Call_ArgModes_99, &(transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__CurriedArgModes_101);
              if ((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
              {
                transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_10(&transform_hlds__lambda__env);
                (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = !((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded);
              }
            }
          }
        }
      }
      if ((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
      {
        MR_Word transform_hlds__lambda__Call_NewProcInfo_107;

        transform_hlds__lambda__ArgVars_103 = (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVars_91;
        transform_hlds__lambda__PredId_104 = transform_hlds__lambda__PredId0_83;
        transform_hlds__lambda__ProcId_105 = transform_hlds__lambda__ProcId0_84;
        check_hlds__mode_util__modes_to_unify_modes_4_p_0((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_38, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__CurriedArgModes_101, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__CurriedArgModes_101, &transform_hlds__lambda__ArgUnifyModes_106);
        hlds__hlds_pred__proc_info_set_address_taken_3_p_0((MR_Integer) 0, transform_hlds__lambda__Call_ProcInfo_90, &transform_hlds__lambda__Call_NewProcInfo_107);
        hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__lambda__PredId_104, transform_hlds__lambda__ProcId_105, transform_hlds__lambda__Call_PredInfo_89, transform_hlds__lambda__Call_NewProcInfo_107, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_38, &transform_hlds__lambda__ModuleInfo_108);
      }
      else
      {
        MR_Word transform_hlds__lambda__TypeInfo_191_191;
        MR_Word transform_hlds__lambda__TypeCtorInfo_192_192;
        MR_Word transform_hlds__lambda__TypeCtorInfo_197_197;
        MR_Word transform_hlds__lambda__AllArgVars_109;
        MR_Word transform_hlds__lambda__ModuleName_110;
        MR_String transform_hlds__lambda__OrigPredName_111;
        MR_Word transform_hlds__lambda__OrigContext_112;
        MR_String transform_hlds__lambda__OrigFile_113;
        MR_Integer transform_hlds__lambda__OrigLine_114;
        MR_Integer transform_hlds__lambda__LambdaCount_115;
        MR_Word transform_hlds__lambda__ModuleInfo1_116;
        MR_Word transform_hlds__lambda__PredName_117;
        MR_Word transform_hlds__lambda__LambdaContext_118;
        MR_Word transform_hlds__lambda__OrigArgModes_119;
        MR_Integer transform_hlds__lambda__NumArgVars_120;
        MR_Word transform_hlds__lambda__In_121;
        MR_Word transform_hlds__lambda__InModes_122;
        MR_Word transform_hlds__lambda__ArgModesMap_123;
        MR_Word transform_hlds__lambda__OrigArgModesMap_124;
        MR_Word transform_hlds__lambda__ArgModesMap1_125;
        MR_Word transform_hlds__lambda__ArgModes1_126;
        MR_Word transform_hlds__lambda__AllArgModes_127;
        MR_Word transform_hlds__lambda__ArgTypes_128;
        MR_Word transform_hlds__lambda__PurityMarkers_130;
        MR_Word transform_hlds__lambda__LambdaMarkers0_131;
        MR_Word transform_hlds__lambda__LambdaMarkers_132;
        MR_Word transform_hlds__lambda__VarNameRemap_133;
        MR_Word transform_hlds__lambda__LambdaVarSet_134;
        MR_Word transform_hlds__lambda__LambdaVarTypes_135;
        MR_Word transform_hlds__lambda__LambdaRttiVarMaps_136;
        MR_Word transform_hlds__lambda__ProcInfo_137;
        MR_Word transform_hlds__lambda__Assertions_140;
        MR_Word transform_hlds__lambda__PredInfo_141;
        MR_Word transform_hlds__lambda__PredicateTable0_142;
        MR_Word transform_hlds__lambda__PredicateTable_143;
        MR_Word transform_hlds__lambda__Var_162;
        MR_Word transform_hlds__lambda__STATE_VARIABLE_ProcInfo_166_166;
        MR_Word transform_hlds__lambda__STATE_VARIABLE_ProcInfo_167_167;
        MR_Word transform_hlds__lambda__STATE_VARIABLE_ProcInfo_169_169;
        MR_Word transform_hlds__lambda__Var_171;
        MR_Integer transform_hlds__lambda__Var_129;
        MR_Box transform_hlds__lambda__conv4_Var_129;

        transform_hlds__lambda__ArgVars_103 = check_hlds__type_util__put_typeinfo_vars_first_2_f_0(transform_hlds__lambda__ArgVars1_80, transform_hlds__lambda__VarTypes_32);
        transform_hlds__lambda__TypeInfo_191_191 = (MR_Word) &transform_hlds__lambda_scalar_common_1[2];
        mercury__list__append_3_p_1(transform_hlds__lambda__TypeInfo_191_191, transform_hlds__lambda__ArgVars_103, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21, &transform_hlds__lambda__AllArgVars_109);
        hlds__hlds_module__module_info_get_name_2_p_0((transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_38, &transform_hlds__lambda__ModuleName_110);
        transform_hlds__lambda__OrigPredName_111 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__lambda__OrigPredInfo_37);
        transform_hlds__lambda__OrigContext_112 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__lambda__LambdaGoalInfo_49);
        mercury__term__context_file_2_p_0(transform_hlds__lambda__OrigContext_112, &transform_hlds__lambda__OrigFile_113);
        mercury__term__context_line_2_p_0(transform_hlds__lambda__OrigContext_112, &transform_hlds__lambda__OrigLine_114);
        hlds__hlds_module__module_info_next_lambda_count_4_p_0(transform_hlds__lambda__OrigContext_112, &transform_hlds__lambda__LambdaCount_115, (transform_hlds__lambda__env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_38, &transform_hlds__lambda__ModuleInfo1_116);
        parse_tree__prog_util__make_pred_name_with_context_7_p_0(transform_hlds__lambda__ModuleName_110, (MR_String) "IntroducedFrom", transform_hlds__lambda__PredOrFunc_18, transform_hlds__lambda__OrigPredName_111, transform_hlds__lambda__OrigLine_114, transform_hlds__lambda__LambdaCount_115, &transform_hlds__lambda__PredName_117);
        transform_hlds__lambda__LambdaContext_118 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__lambda__LambdaGoalInfo_49);
        transform_hlds__lambda__unify_modes_to_modes_2_p_0(transform_hlds__lambda__ArgUnifyModes0_56, &transform_hlds__lambda__OrigArgModes_119);
        mercury__list__length_2_p_0(transform_hlds__lambda__TypeInfo_191_191, transform_hlds__lambda__ArgVars_103, &transform_hlds__lambda__NumArgVars_120);
        parse_tree__prog_mode__in_mode_1_p_0(&transform_hlds__lambda__In_121);
        transform_hlds__lambda__TypeCtorInfo_192_192 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
        mercury__list__duplicate_3_p_0(transform_hlds__lambda__TypeCtorInfo_192_192, transform_hlds__lambda__NumArgVars_120, ((MR_Box) (transform_hlds__lambda__In_121)), &transform_hlds__lambda__InModes_122);
        mercury__map__from_corresponding_lists_3_p_0(transform_hlds__lambda__TypeInfo_191_191, transform_hlds__lambda__TypeCtorInfo_192_192, transform_hlds__lambda__ArgVars_103, transform_hlds__lambda__InModes_122, &transform_hlds__lambda__ArgModesMap_123);
        mercury__map__from_corresponding_lists_3_p_0(transform_hlds__lambda__TypeInfo_191_191, transform_hlds__lambda__TypeCtorInfo_192_192, transform_hlds__lambda__OrigVars_60, transform_hlds__lambda__OrigArgModes_119, &transform_hlds__lambda__OrigArgModesMap_124);
        mercury__map__overlay_3_p_0(transform_hlds__lambda__TypeInfo_191_191, transform_hlds__lambda__TypeCtorInfo_192_192, transform_hlds__lambda__ArgModesMap_123, transform_hlds__lambda__OrigArgModesMap_124, &transform_hlds__lambda__ArgModesMap1_125);
        mercury__map__apply_to_list_3_p_0(transform_hlds__lambda__TypeInfo_191_191, transform_hlds__lambda__TypeCtorInfo_192_192, transform_hlds__lambda__ArgVars_103, transform_hlds__lambda__ArgModesMap1_125, &transform_hlds__lambda__ArgModes1_126);
        check_hlds__mode_util__modes_to_unify_modes_4_p_0(transform_hlds__lambda__ModuleInfo1_116, transform_hlds__lambda__ArgModes1_126, transform_hlds__lambda__ArgModes1_126, &transform_hlds__lambda__ArgUnifyModes_106);
        mercury__list__append_3_p_1(transform_hlds__lambda__TypeCtorInfo_192_192, transform_hlds__lambda__ArgModes1_126, transform_hlds__lambda__Modes_22, &transform_hlds__lambda__AllArgModes_127);
        hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__lambda__VarTypes_32, transform_hlds__lambda__AllArgVars_109, &transform_hlds__lambda__ArgTypes_128);
        {
          transform_hlds__lambda__Var_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__lambda__Var_162, 0) = ((MR_Box) (&transform_hlds__lambda_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), transform_hlds__lambda__Var_162, 1) = ((MR_Box) (transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_11));
          MR_hl_field(MR_mktag(0), transform_hlds__lambda__Var_162, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), transform_hlds__lambda__Var_162, 3) = ((MR_Box) (transform_hlds__lambda__ModuleInfo1_116));
        }
        transform_hlds__lambda__TypeCtorInfo_197_197 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        mercury__list__foldl_corresponding_5_p_0(transform_hlds__lambda__TypeCtorInfo_181_181, transform_hlds__lambda__TypeCtorInfo_192_192, transform_hlds__lambda__TypeCtorInfo_197_197, transform_hlds__lambda__Var_162, transform_hlds__lambda__ArgTypes_128, transform_hlds__lambda__AllArgModes_127, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__lambda__conv4_Var_129);
        transform_hlds__lambda__Var_129 = ((MR_Integer) transform_hlds__lambda__conv4_Var_129);
        hlds__hlds_pred__purity_to_markers_2_p_0(transform_hlds__lambda__Purity_16, &transform_hlds__lambda__PurityMarkers_130);
        hlds__hlds_pred__init_markers_1_p_0(&transform_hlds__lambda__LambdaMarkers0_131);
        hlds__hlds_pred__add_markers_3_p_0(transform_hlds__lambda__PurityMarkers_130, transform_hlds__lambda__LambdaMarkers0_131, &transform_hlds__lambda__LambdaMarkers_132);
        mercury__map__init_1_p_0(transform_hlds__lambda__TypeInfo_191_191, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &transform_hlds__lambda__VarNameRemap_133);
        transform_hlds__lambda__restrict_var_maps_8_p_0(transform_hlds__lambda__AllArgVars_109, transform_hlds__lambda__LambdaGoal_25, transform_hlds__lambda__VarSet_31, &transform_hlds__lambda__LambdaVarSet_134, transform_hlds__lambda__VarTypes_32, &transform_hlds__lambda__LambdaVarTypes_135, transform_hlds__lambda__RttiVarMaps_35, &transform_hlds__lambda__LambdaRttiVarMaps_136);
        hlds__hlds_pred__proc_info_create_15_p_0(transform_hlds__lambda__LambdaContext_118, (MR_Integer) -1, transform_hlds__lambda__LambdaVarSet_134, transform_hlds__lambda__LambdaVarTypes_135, transform_hlds__lambda__AllArgVars_109, transform_hlds__lambda__InstVarSet_34, transform_hlds__lambda__AllArgModes_127, (MR_Integer) 0, transform_hlds__lambda__Detism_23, transform_hlds__lambda__LambdaGoal_25, transform_hlds__lambda__LambdaRttiVarMaps_136, (MR_Integer) 0, transform_hlds__lambda__HasParallelConj_36, transform_hlds__lambda__VarNameRemap_133, &transform_hlds__lambda__STATE_VARIABLE_ProcInfo_166_166);
        hlds__hlds_pred__ensure_all_headvars_are_named_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ProcInfo_166_166, &transform_hlds__lambda__STATE_VARIABLE_ProcInfo_167_167);
        switch (transform_hlds__lambda__MustRecomputeNonLocals0_39) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            transform_hlds__lambda__STATE_VARIABLE_ProcInfo_169_169 = transform_hlds__lambda__STATE_VARIABLE_ProcInfo_167_167;
            break;
          case (MR_Integer) 1:
            {
              hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, transform_hlds__lambda__STATE_VARIABLE_ProcInfo_167_167, &transform_hlds__lambda__STATE_VARIABLE_ProcInfo_169_169);
            }
            break;
        }
        if ((transform_hlds__lambda__RegWrapperProc_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          transform_hlds__lambda__ProcInfo_137 = transform_hlds__lambda__STATE_VARIABLE_ProcInfo_169_169;
        else
        {
          MR_Word transform_hlds__lambda__RegR_HeadVars_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__RegWrapperProc_20, (MR_Integer) 0)));

          hlds__hlds_pred__proc_info_set_reg_r_headvars_3_p_0(transform_hlds__lambda__RegR_HeadVars_139, transform_hlds__lambda__STATE_VARIABLE_ProcInfo_169_169, &transform_hlds__lambda__ProcInfo_137);
        }
        mercury__set__init_1_p_0(transform_hlds__lambda__TypeCtorInfo_197_197, &transform_hlds__lambda__Assertions_140);
        {
          transform_hlds__lambda__Var_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), transform_hlds__lambda__Var_171, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), transform_hlds__lambda__Var_171, 1) = ((MR_Box) (transform_hlds__lambda__OrigFile_113));
          MR_hl_field(MR_mktag(3), transform_hlds__lambda__Var_171, 2) = ((MR_Box) (transform_hlds__lambda__OrigLine_114));
          MR_hl_field(MR_mktag(3), transform_hlds__lambda__Var_171, 3) = ((MR_Box) (transform_hlds__lambda__LambdaCount_115));
        }
        hlds__hlds_pred__pred_info_create_16_p_0(transform_hlds__lambda__ModuleName_110, transform_hlds__lambda__PredName_117, transform_hlds__lambda__PredOrFunc_18, transform_hlds__lambda__LambdaContext_118, transform_hlds__lambda__Var_171, (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))), transform_hlds__lambda__LambdaMarkers_132, transform_hlds__lambda__ArgTypes_128, transform_hlds__lambda__TVarSet_33, transform_hlds__lambda__ExistQVars_47, transform_hlds__lambda__Constraints_46, transform_hlds__lambda__Assertions_140, transform_hlds__lambda__VarNameRemap_133, transform_hlds__lambda__ProcInfo_137, &transform_hlds__lambda__ProcId_105, &transform_hlds__lambda__PredInfo_141);
        hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__lambda__ModuleInfo1_116, &transform_hlds__lambda__PredicateTable0_142);
        hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__lambda__PredInfo_141, &transform_hlds__lambda__PredId_104, transform_hlds__lambda__PredicateTable0_142, &transform_hlds__lambda__PredicateTable_143);
        hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__lambda__PredicateTable_143, transform_hlds__lambda__ModuleInfo1_116, &transform_hlds__lambda__ModuleInfo_108);
      }
      {
        transform_hlds__lambda__Var_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__lambda__Var_174, 0) = ((MR_Box) (transform_hlds__lambda__PredId_104));
        MR_hl_field(MR_mktag(0), transform_hlds__lambda__Var_174, 1) = ((MR_Box) (transform_hlds__lambda__ProcId_105));
      }
      transform_hlds__lambda__ShroudedPredProcId_144 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(transform_hlds__lambda__Var_174);
      {
        transform_hlds__lambda__ConsId_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), transform_hlds__lambda__ConsId_145, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(3), transform_hlds__lambda__ConsId_145, 1) = ((MR_Box) (transform_hlds__lambda__ShroudedPredProcId_144));
        MR_hl_field(MR_mktag(3), transform_hlds__lambda__ConsId_145, 2) = NULL;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        *transform_hlds__lambda__Functor_27 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lambda__ConsId_145));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__lambda__ArgVars_103));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        *transform_hlds__lambda__Unification_28 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lambda__Var_53));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lambda__ConsId_145));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lambda__ArgVars_103));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lambda__ArgUnifyModes_106));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
        *transform_hlds__lambda__LambdaInfo_30 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lambda__VarSet_31));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lambda__VarTypes_32));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lambda__TVarSet_33));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lambda__InstVarSet_34));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lambda__RttiVarMaps_35));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lambda__HasParallelConj_36));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__lambda__OrigPredInfo_37));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__lambda__ModuleInfo_108));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__lambda__MustRecomputeNonLocals_79));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((MR_Integer) 1));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__lambda__restrict_var_maps_8_p_0(
  MR_Word transform_hlds__lambda__HeadVars_9,
  MR_Word transform_hlds__lambda__Goal_10,
  MR_Word transform_hlds__lambda__STATE_VARIABLE_VarSet_0_22,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_VarSet_23,
  MR_Word transform_hlds__lambda__STATE_VARIABLE_VarTypes_0_24,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_VarTypes_25,
  MR_Word transform_hlds__lambda__STATE_VARIABLE_RttiVarMaps_0_26,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_RttiVarMaps_27)
{
  {
    MR_Word transform_hlds__lambda__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word transform_hlds__lambda__MaxVar_14;
    MR_Integer transform_hlds__lambda__MaxVarNum_15;
    MR_ArrayPtr transform_hlds__lambda__VarUses0_16;
    MR_ArrayPtr transform_hlds__lambda__VarUses1_17;
    MR_ArrayPtr transform_hlds__lambda__VarUses_18;
    MR_Word transform_hlds__lambda__VarTypesList0_19;
    MR_Word transform_hlds__lambda__RevVarTypesList_20;
    MR_Word transform_hlds__lambda__VarTypesList_21;
    MR_Integer transform_hlds__lambda__Var_28;
    MR_ArrayPtr transform_hlds__lambda__conv0_VarUses0_16;

    transform_hlds__lambda__MaxVar_14 = mercury__varset__max_var_1_f_0(transform_hlds__lambda__TypeCtorInfo_34_34, transform_hlds__lambda__STATE_VARIABLE_VarSet_0_22);
    transform_hlds__lambda__MaxVarNum_15 = mercury__term__var_to_int_1_f_0(transform_hlds__lambda__TypeCtorInfo_34_34, transform_hlds__lambda__MaxVar_14);
    transform_hlds__lambda__Var_28 = (transform_hlds__lambda__MaxVarNum_15 + (MR_Integer) 1);
    mercury__array__init_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__Var_28, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__lambda__conv0_VarUses0_16);
    transform_hlds__lambda__VarUses0_16 = (MR_ArrayPtr) transform_hlds__lambda__conv0_VarUses0_16;
    transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__HeadVars_9, transform_hlds__lambda__VarUses0_16, &transform_hlds__lambda__VarUses1_17);
    transform_hlds__lambda__find_used_vars_in_goal_3_p_0(transform_hlds__lambda__Goal_10, transform_hlds__lambda__VarUses1_17, &transform_hlds__lambda__VarUses_18);
    hlds__vartypes__vartypes_to_assoc_list_2_p_0(transform_hlds__lambda__STATE_VARIABLE_VarTypes_0_24, &transform_hlds__lambda__VarTypesList0_19);
    transform_hlds__lambda__filter_vartypes_4_p_0(transform_hlds__lambda__VarTypesList0_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__lambda__RevVarTypesList_20, transform_hlds__lambda__VarUses_18);
    mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__lambda_scalar_common_2[0], transform_hlds__lambda__RevVarTypesList_20, &transform_hlds__lambda__VarTypesList_21);
    hlds__vartypes__vartypes_from_sorted_assoc_list_2_p_0(transform_hlds__lambda__VarTypesList_21, transform_hlds__lambda__STATE_VARIABLE_VarTypes_25);
    hlds__hlds_rtti__restrict_rtti_varmaps_3_p_0(transform_hlds__lambda__VarUses_18, transform_hlds__lambda__STATE_VARIABLE_RttiVarMaps_0_26, transform_hlds__lambda__STATE_VARIABLE_RttiVarMaps_27);
    *transform_hlds__lambda__STATE_VARIABLE_VarSet_23 = transform_hlds__lambda__STATE_VARIABLE_VarSet_0_22;
  }
}

static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_cases_3_p_0(
  MR_Word transform_hlds__lambda__HeadVar__1_1,
  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2,
  MR_ArrayPtr * transform_hlds__lambda__STATE_VARIABLE_VarUses_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((transform_hlds__lambda__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *transform_hlds__lambda__STATE_VARIABLE_VarUses_3 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2;
    else
    {
      MR_Word transform_hlds__lambda__Case_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__lambda__Cases_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word transform_hlds__lambda__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Case_7, (MR_Integer) 2)));
      MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_15_15;
      MR_Word transform_hlds__lambda__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Case_7, (MR_Integer) 0)));
      MR_Word transform_hlds__lambda__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Case_7, (MR_Integer) 1)));

      transform_hlds__lambda__find_used_vars_in_goal_3_p_0(transform_hlds__lambda__Goal_12, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2, &transform_hlds__lambda__STATE_VARIABLE_VarUses_15_15);
      /* direct tailcall eliminated */
      {
        MR_Word transform_hlds__lambda__next_value_of_HeadVar__1_1 = transform_hlds__lambda__Cases_8;
        MR_ArrayPtr transform_hlds__lambda__next_value_of_STATE_VARIABLE_VarUses_0_2 = transform_hlds__lambda__STATE_VARIABLE_VarUses_15_15;

        transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2 = transform_hlds__lambda__next_value_of_STATE_VARIABLE_VarUses_0_2;
        transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__next_value_of_HeadVar__1_1;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_goals_3_p_0(
  MR_Word transform_hlds__lambda__HeadVar__1_1,
  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2,
  MR_ArrayPtr * transform_hlds__lambda__STATE_VARIABLE_VarUses_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((transform_hlds__lambda__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *transform_hlds__lambda__STATE_VARIABLE_VarUses_3 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2;
    else
    {
      MR_Word transform_hlds__lambda__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__lambda__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 1)));
      MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_12_12;

      transform_hlds__lambda__find_used_vars_in_goal_3_p_0(transform_hlds__lambda__Goal_7, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2, &transform_hlds__lambda__STATE_VARIABLE_VarUses_12_12);
      /* direct tailcall eliminated */
      {
        MR_Word transform_hlds__lambda__next_value_of_HeadVar__1_1 = transform_hlds__lambda__Goals_8;
        MR_ArrayPtr transform_hlds__lambda__next_value_of_STATE_VARIABLE_VarUses_0_2 = transform_hlds__lambda__STATE_VARIABLE_VarUses_12_12;

        transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2 = transform_hlds__lambda__next_value_of_STATE_VARIABLE_VarUses_0_2;
        transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__next_value_of_HeadVar__1_1;
      }
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0_2(
  MR_Box transform_hlds__lambda__closure_arg,
  MR_Box transform_hlds__lambda__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__lambda__wrapper_arg_2;
    MR_Box transform_hlds__lambda__closure = transform_hlds__lambda__closure_arg;
    MR_Word transform_hlds__lambda__conv1_HeadVar__2_2;

    transform_hlds__lambda__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__lambda__wrapper_arg_1));
    transform_hlds__lambda__wrapper_arg_2 = ((MR_Box) (transform_hlds__lambda__conv1_HeadVar__2_2));
    return transform_hlds__lambda__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0_1(
  MR_Box transform_hlds__lambda__closure_arg,
  MR_Box transform_hlds__lambda__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__lambda__wrapper_arg_2;
    MR_Box transform_hlds__lambda__closure = transform_hlds__lambda__closure_arg;
    MR_Word transform_hlds__lambda__conv0_HeadVar__2_2;

    transform_hlds__lambda__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) transform_hlds__lambda__wrapper_arg_1));
    transform_hlds__lambda__wrapper_arg_2 = ((MR_Box) (transform_hlds__lambda__conv0_HeadVar__2_2));
    return transform_hlds__lambda__wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0(
  MR_Word transform_hlds__lambda__Goal_4,
  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0_121,
  MR_ArrayPtr * transform_hlds__lambda__STATE_VARIABLE_VarUses_122)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool transform_hlds__lambda__succeeded;
      MR_Word transform_hlds__lambda__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Goal_4, (MR_Integer) 0)));
      MR_Word transform_hlds__lambda___GoalInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Goal_4, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) transform_hlds__lambda__GoalExpr_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word transform_hlds__lambda__SubGoal_174 = (MR_Word) MR_body(((MR_Word) transform_hlds__lambda__GoalExpr_6), (MR_Integer) 0);

            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__lambda__next_value_of_Goal_4 = transform_hlds__lambda__SubGoal_174;

              transform_hlds__lambda__Goal_4 = transform_hlds__lambda__next_value_of_Goal_4;
            }
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word transform_hlds__lambda__LHSVar_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 0)));
            MR_Word transform_hlds__lambda__RHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));
            MR_Word transform_hlds__lambda__Unif_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 3)));
            MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_158_158;
            MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_160_160;
            MR_Integer transform_hlds__lambda__Var_281;
            MR_Word transform_hlds__lambda__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 2)));
            MR_Word transform_hlds__lambda__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 4)));
            MR_ArrayPtr transform_hlds__lambda__conv12_STATE_VARIABLE_VarUses_158_158;

            transform_hlds__lambda__Var_281 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__LHSVar_8);
            mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__Var_281, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_0_121, &transform_hlds__lambda__conv12_STATE_VARIABLE_VarUses_158_158);
            transform_hlds__lambda__STATE_VARIABLE_VarUses_158_158 = (MR_ArrayPtr) transform_hlds__lambda__conv12_STATE_VARIABLE_VarUses_158_158;
            switch (MR_tag((MR_Word) transform_hlds__lambda__Unif_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word transform_hlds__lambda__CellToReuse_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unif_11, (MR_Integer) 4)));
                  MR_Word transform_hlds__lambda__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unif_11, (MR_Integer) 0)));
                  MR_Word transform_hlds__lambda__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unif_11, (MR_Integer) 1)));
                  MR_Word transform_hlds__lambda__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unif_11, (MR_Integer) 2)));
                  MR_Word transform_hlds__lambda__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unif_11, (MR_Integer) 3)));
                  MR_Word transform_hlds__lambda__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unif_11, (MR_Integer) 5)));
                  MR_Word transform_hlds__lambda__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Unif_11, (MR_Integer) 6)));
                  MR_Word transform_hlds__lambda__ReuseVar_20;
                  MR_Word transform_hlds__lambda__Var_159;
                  MR_Word transform_hlds__lambda__Var_21;
                  MR_Word transform_hlds__lambda__Var_22;

                  transform_hlds__lambda__succeeded = ((MR_tag((MR_Word) transform_hlds__lambda__CellToReuse_17)) == (MR_mktag((MR_Integer) 1)));
                  if (transform_hlds__lambda__succeeded)
                  {
                    transform_hlds__lambda__Var_159 = (MR_Word) MR_body(((MR_Word) transform_hlds__lambda__CellToReuse_17), (MR_Integer) 1);
                    transform_hlds__lambda__ReuseVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Var_159, (MR_Integer) 0)));
                    transform_hlds__lambda__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Var_159, (MR_Integer) 1)));
                    transform_hlds__lambda__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Var_159, (MR_Integer) 2)));
                    transform_hlds__lambda__succeeded = MR_TRUE;
                  }
                  if (transform_hlds__lambda__succeeded)
                  {
                    MR_Integer transform_hlds__lambda__Var_290;
                    MR_ArrayPtr transform_hlds__lambda__conv13_STATE_VARIABLE_VarUses_160_160;

                    transform_hlds__lambda__Var_290 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__ReuseVar_20);
                    mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__Var_290, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_158_158, &transform_hlds__lambda__conv13_STATE_VARIABLE_VarUses_160_160);
                    transform_hlds__lambda__STATE_VARIABLE_VarUses_160_160 = (MR_ArrayPtr) transform_hlds__lambda__conv13_STATE_VARIABLE_VarUses_160_160;
                  }
                  else
                    transform_hlds__lambda__STATE_VARIABLE_VarUses_160_160 = transform_hlds__lambda__STATE_VARIABLE_VarUses_158_158;
                }
                break;
              case (MR_Integer) 1:
                transform_hlds__lambda__STATE_VARIABLE_VarUses_160_160 = transform_hlds__lambda__STATE_VARIABLE_VarUses_158_158;
                break;
              case (MR_Integer) 2:
                transform_hlds__lambda__STATE_VARIABLE_VarUses_160_160 = transform_hlds__lambda__STATE_VARIABLE_VarUses_158_158;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Unif_11, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    transform_hlds__lambda__STATE_VARIABLE_VarUses_160_160 = transform_hlds__lambda__STATE_VARIABLE_VarUses_158_158;
                    break;
                  case (MR_Integer) 1:
                    transform_hlds__lambda__STATE_VARIABLE_VarUses_160_160 = transform_hlds__lambda__STATE_VARIABLE_VarUses_158_158;
                    break;
                }
                break;
            }
            switch (MR_tag((MR_Word) transform_hlds__lambda__RHS_9)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word transform_hlds__lambda__RHSVar_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__RHS_9, (MR_Integer) 0)));
                  MR_Integer transform_hlds__lambda__Var_299;
                  MR_ArrayPtr transform_hlds__lambda__conv14_STATE_VARIABLE_VarUses_122;

                  transform_hlds__lambda__Var_299 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__RHSVar_36);
                  mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__Var_299, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_160_160, &transform_hlds__lambda__conv14_STATE_VARIABLE_VarUses_122);
                  *transform_hlds__lambda__STATE_VARIABLE_VarUses_122 = (MR_ArrayPtr) transform_hlds__lambda__conv14_STATE_VARIABLE_VarUses_122;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__lambda__ArgVars_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__RHS_9, (MR_Integer) 2)));
                  MR_Word transform_hlds__lambda__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__RHS_9, (MR_Integer) 0)));
                  MR_Word transform_hlds__lambda__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__RHS_9, (MR_Integer) 1)));

                  transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__ArgVars_39, transform_hlds__lambda__STATE_VARIABLE_VarUses_160_160, transform_hlds__lambda__STATE_VARIABLE_VarUses_122);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word transform_hlds__lambda__NonLocals_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS_9, (MR_Integer) 2)));
                  MR_Word transform_hlds__lambda__LambdaVars_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS_9, (MR_Integer) 3)));
                  MR_Word transform_hlds__lambda__LambdaGoal_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS_9, (MR_Integer) 6)));
                  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_161_161;
                  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_162_162;
                  MR_Word transform_hlds__lambda__Var_40 = ((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS_9, (MR_Integer) 0)))) & (MR_Integer) 3);
                  MR_Word transform_hlds__lambda__Var_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  MR_Word transform_hlds__lambda__Var_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  MR_Word transform_hlds__lambda__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS_9, (MR_Integer) 4)));
                  MR_Word transform_hlds__lambda__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__RHS_9, (MR_Integer) 5)));

                  transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__NonLocals_44, transform_hlds__lambda__STATE_VARIABLE_VarUses_160_160, &transform_hlds__lambda__STATE_VARIABLE_VarUses_161_161);
                  transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__LambdaVars_45, transform_hlds__lambda__STATE_VARIABLE_VarUses_161_161, &transform_hlds__lambda__STATE_VARIABLE_VarUses_162_162);
                  /* direct tailcall eliminated */
                  {
                    MR_Word transform_hlds__lambda__next_value_of_Goal_4 = transform_hlds__lambda__LambdaGoal_48;
                    MR_ArrayPtr transform_hlds__lambda__next_value_of_STATE_VARIABLE_VarUses_0_121 = transform_hlds__lambda__STATE_VARIABLE_VarUses_162_162;

                    transform_hlds__lambda__STATE_VARIABLE_VarUses_0_121 = transform_hlds__lambda__next_value_of_STATE_VARIABLE_VarUses_0_121;
                    transform_hlds__lambda__Goal_4 = transform_hlds__lambda__next_value_of_Goal_4;
                  }
                  continue;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word transform_hlds__lambda__ArgVars_168 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 2)));
            MR_Word transform_hlds__lambda__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 0)));
            MR_Integer transform_hlds__lambda__Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));
            MR_Word transform_hlds__lambda__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 3)));
            MR_Word transform_hlds__lambda__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 4)));
            MR_Word transform_hlds__lambda__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 5)));

            transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__ArgVars_168, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_121, transform_hlds__lambda__STATE_VARIABLE_VarUses_122);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word transform_hlds__lambda__GenericCall_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));
                MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_156_156;
                MR_Word transform_hlds__lambda__ArgVars_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 2)));
                MR_Word transform_hlds__lambda__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 3)));
                MR_Word transform_hlds__lambda__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 4)));
                MR_Word transform_hlds__lambda__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 5)));

                switch (MR_tag((MR_Word) transform_hlds__lambda__GenericCall_49)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word transform_hlds__lambda__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__GenericCall_49, (MR_Integer) 0)));
                      MR_Integer transform_hlds__lambda__Var_200;
                      MR_Word transform_hlds__lambda__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__GenericCall_49, (MR_Integer) 1)));
                      MR_Word transform_hlds__lambda__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__GenericCall_49, (MR_Integer) 2)));
                      MR_Integer transform_hlds__lambda__Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__GenericCall_49, (MR_Integer) 3)));
                      MR_ArrayPtr transform_hlds__lambda__conv3_STATE_VARIABLE_VarUses_156_156;

                      transform_hlds__lambda__Var_200 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__Var_53);
                      mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__Var_200, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_0_121, &transform_hlds__lambda__conv3_STATE_VARIABLE_VarUses_156_156);
                      transform_hlds__lambda__STATE_VARIABLE_VarUses_156_156 = (MR_ArrayPtr) transform_hlds__lambda__conv3_STATE_VARIABLE_VarUses_156_156;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word transform_hlds__lambda__Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GenericCall_49, (MR_Integer) 0)));
                      MR_Integer transform_hlds__lambda__Var_191;
                      MR_Integer transform_hlds__lambda__Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GenericCall_49, (MR_Integer) 1)));
                      MR_Word transform_hlds__lambda__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GenericCall_49, (MR_Integer) 2)));
                      MR_Word transform_hlds__lambda__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__GenericCall_49, (MR_Integer) 3)));
                      MR_ArrayPtr transform_hlds__lambda__conv2_STATE_VARIABLE_VarUses_156_156;

                      transform_hlds__lambda__Var_191 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__Var_166);
                      mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__Var_191, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_0_121, &transform_hlds__lambda__conv2_STATE_VARIABLE_VarUses_156_156);
                      transform_hlds__lambda__STATE_VARIABLE_VarUses_156_156 = (MR_ArrayPtr) transform_hlds__lambda__conv2_STATE_VARIABLE_VarUses_156_156;
                    }
                    break;
                  case (MR_Integer) 2:
                    transform_hlds__lambda__STATE_VARIABLE_VarUses_156_156 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0_121;
                    break;
                  case (MR_Integer) 3:
                    transform_hlds__lambda__STATE_VARIABLE_VarUses_156_156 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0_121;
                    break;
                }
                transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__ArgVars_167, transform_hlds__lambda__STATE_VARIABLE_VarUses_156_156, transform_hlds__lambda__STATE_VARIABLE_VarUses_122);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word transform_hlds__lambda__TypeCtorInfo_180_180 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
                MR_Word transform_hlds__lambda__TypeInfo_181_181 = (MR_Word) &transform_hlds__lambda_scalar_common_1[2];
                MR_Word transform_hlds__lambda__Args_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 4)));
                MR_Word transform_hlds__lambda__ExtraArgs_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 5)));
                MR_Word transform_hlds__lambda__ExtraVars_103;
                MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_135_135;
                MR_Word transform_hlds__lambda__ArgVars_176;
                MR_Word transform_hlds__lambda__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));
                MR_Word transform_hlds__lambda__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 2)));
                MR_Integer transform_hlds__lambda__Var_98 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 3)));
                MR_Word transform_hlds__lambda__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 6)));
                MR_Word transform_hlds__lambda__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 7)));

                transform_hlds__lambda__ArgVars_176 = mercury__list__map_2_f_0(transform_hlds__lambda__TypeCtorInfo_180_180, transform_hlds__lambda__TypeInfo_181_181, (MR_Word) &transform_hlds__lambda_scalar_common_2[3], transform_hlds__lambda__Args_99);
                transform_hlds__lambda__ExtraVars_103 = mercury__list__map_2_f_0(transform_hlds__lambda__TypeCtorInfo_180_180, transform_hlds__lambda__TypeInfo_181_181, (MR_Word) &transform_hlds__lambda_scalar_common_2[4], transform_hlds__lambda__ExtraArgs_100);
                transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__ArgVars_176, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_121, &transform_hlds__lambda__STATE_VARIABLE_VarUses_135_135);
                transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__ExtraVars_103, transform_hlds__lambda__STATE_VARIABLE_VarUses_135_135, transform_hlds__lambda__STATE_VARIABLE_VarUses_122);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word transform_hlds__lambda__Goals_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 2)));
                MR_Word transform_hlds__lambda__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));

                transform_hlds__lambda__find_used_vars_in_goals_3_p_0(transform_hlds__lambda__Goals_68, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_121, transform_hlds__lambda__STATE_VARIABLE_VarUses_122);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word transform_hlds__lambda__Goals_186 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));

                transform_hlds__lambda__find_used_vars_in_goals_3_p_0(transform_hlds__lambda__Goals_186, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_121, transform_hlds__lambda__STATE_VARIABLE_VarUses_122);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word transform_hlds__lambda__Cases_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 3)));
                MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_151_151;
                MR_Word transform_hlds__lambda__Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));
                MR_Integer transform_hlds__lambda__Var_272;
                MR_Word transform_hlds__lambda___Det_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 2)));
                MR_ArrayPtr transform_hlds__lambda__conv11_STATE_VARIABLE_VarUses_151_151;

                transform_hlds__lambda__Var_272 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__Var_169);
                mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__Var_272, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_0_121, &transform_hlds__lambda__conv11_STATE_VARIABLE_VarUses_151_151);
                transform_hlds__lambda__STATE_VARIABLE_VarUses_151_151 = (MR_ArrayPtr) transform_hlds__lambda__conv11_STATE_VARIABLE_VarUses_151_151;
                transform_hlds__lambda__find_used_vars_in_cases_3_p_0(transform_hlds__lambda__Cases_70, transform_hlds__lambda__STATE_VARIABLE_VarUses_151_151, transform_hlds__lambda__STATE_VARIABLE_VarUses_122);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word transform_hlds__lambda__Reason_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));
                MR_Word transform_hlds__lambda__SubGoal_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 2)));
                MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_149_149;

                switch (MR_tag((MR_Word) transform_hlds__lambda__Reason_71)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word transform_hlds__lambda__Vars_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Reason_71, (MR_Integer) 0)));

                      transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__Vars_73, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_121, &transform_hlds__lambda__STATE_VARIABLE_VarUses_149_149);
                    }
                    break;
                  case (MR_Integer) 1:
                    transform_hlds__lambda__STATE_VARIABLE_VarUses_149_149 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0_121;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word transform_hlds__lambda__Vars_170 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__Reason_71, (MR_Integer) 0)));
                      MR_Word transform_hlds__lambda__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__Reason_71, (MR_Integer) 1)));

                      transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__Vars_170, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_121, &transform_hlds__lambda__STATE_VARIABLE_VarUses_149_149);
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_71, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        transform_hlds__lambda__STATE_VARIABLE_VarUses_149_149 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0_121;
                        break;
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                      case (MR_Integer) 3:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.lambda", (MR_String) "predicate \140transform_hlds.lambda.find_used_vars_in_goal\'/3", (MR_String) "unexpected scope");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 4:
                        transform_hlds__lambda__STATE_VARIABLE_VarUses_149_149 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0_121;
                        break;
                      case (MR_Integer) 5:
                        transform_hlds__lambda__STATE_VARIABLE_VarUses_149_149 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0_121;
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_Word transform_hlds__lambda__Var_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_71, (MR_Integer) 1)));
                          MR_Integer transform_hlds__lambda__Var_209;
                          MR_Word transform_hlds__lambda__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_71, (MR_Integer) 2)));
                          MR_ArrayPtr transform_hlds__lambda__conv4_STATE_VARIABLE_VarUses_149_149;

                          transform_hlds__lambda__Var_209 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__Var_171);
                          mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__Var_209, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_0_121, &transform_hlds__lambda__conv4_STATE_VARIABLE_VarUses_149_149);
                          transform_hlds__lambda__STATE_VARIABLE_VarUses_149_149 = (MR_ArrayPtr) transform_hlds__lambda__conv4_STATE_VARIABLE_VarUses_149_149;
                        }
                        break;
                      case (MR_Integer) 7:
                        transform_hlds__lambda__STATE_VARIABLE_VarUses_149_149 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0_121;
                        break;
                      case (MR_Integer) 8:
                        {
                          MR_Word transform_hlds__lambda__LCVar_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_71, (MR_Integer) 1)));
                          MR_Word transform_hlds__lambda__LCSVar_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_71, (MR_Integer) 2)));
                          MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_145_145;
                          MR_Integer transform_hlds__lambda__Var_218;
                          MR_Integer transform_hlds__lambda__Var_227;
                          MR_Word transform_hlds__lambda__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__Reason_71, (MR_Integer) 3)));
                          MR_ArrayPtr transform_hlds__lambda__conv5_STATE_VARIABLE_VarUses_145_145;
                          MR_ArrayPtr transform_hlds__lambda__conv6_STATE_VARIABLE_VarUses_149_149;

                          transform_hlds__lambda__Var_218 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__LCVar_76);
                          mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__Var_218, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_0_121, &transform_hlds__lambda__conv5_STATE_VARIABLE_VarUses_145_145);
                          transform_hlds__lambda__STATE_VARIABLE_VarUses_145_145 = (MR_ArrayPtr) transform_hlds__lambda__conv5_STATE_VARIABLE_VarUses_145_145;
                          transform_hlds__lambda__Var_227 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__LCSVar_77);
                          mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__Var_227, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_145_145, &transform_hlds__lambda__conv6_STATE_VARIABLE_VarUses_149_149);
                          transform_hlds__lambda__STATE_VARIABLE_VarUses_149_149 = (MR_ArrayPtr) transform_hlds__lambda__conv6_STATE_VARIABLE_VarUses_149_149;
                        }
                        break;
                    }
                    break;
                }
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__lambda__next_value_of_Goal_4 = transform_hlds__lambda__SubGoal_72;
                  MR_ArrayPtr transform_hlds__lambda__next_value_of_STATE_VARIABLE_VarUses_0_121 = transform_hlds__lambda__STATE_VARIABLE_VarUses_149_149;

                  transform_hlds__lambda__STATE_VARIABLE_VarUses_0_121 = transform_hlds__lambda__next_value_of_STATE_VARIABLE_VarUses_0_121;
                  transform_hlds__lambda__Goal_4 = transform_hlds__lambda__next_value_of_Goal_4;
                }
                continue;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word transform_hlds__lambda__Cond_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 2)));
                MR_Word transform_hlds__lambda__Then_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 3)));
                MR_Word transform_hlds__lambda__Else_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 4)));
                MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_137_137;
                MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_138_138;
                MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_139_139;
                MR_Word transform_hlds__lambda__Vars_175 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));

                transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__Vars_175, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_121, &transform_hlds__lambda__STATE_VARIABLE_VarUses_137_137);
                transform_hlds__lambda__find_used_vars_in_goal_3_p_0(transform_hlds__lambda__Cond_93, transform_hlds__lambda__STATE_VARIABLE_VarUses_137_137, &transform_hlds__lambda__STATE_VARIABLE_VarUses_138_138);
                transform_hlds__lambda__find_used_vars_in_goal_3_p_0(transform_hlds__lambda__Then_94, transform_hlds__lambda__STATE_VARIABLE_VarUses_138_138, &transform_hlds__lambda__STATE_VARIABLE_VarUses_139_139);
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__lambda__next_value_of_Goal_4 = transform_hlds__lambda__Else_95;
                  MR_ArrayPtr transform_hlds__lambda__next_value_of_STATE_VARIABLE_VarUses_0_121 = transform_hlds__lambda__STATE_VARIABLE_VarUses_139_139;

                  transform_hlds__lambda__STATE_VARIABLE_VarUses_0_121 = transform_hlds__lambda__next_value_of_STATE_VARIABLE_VarUses_0_121;
                  transform_hlds__lambda__Goal_4 = transform_hlds__lambda__next_value_of_Goal_4;
                }
                continue;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word transform_hlds__lambda__Shorthand_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__lambda__GoalExpr_6, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) transform_hlds__lambda__Shorthand_104)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word transform_hlds__lambda__LeftGoal_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Shorthand_104, (MR_Integer) 0)));
                      MR_Word transform_hlds__lambda__RightGoal_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Shorthand_104, (MR_Integer) 1)));
                      MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_123_123;

                      transform_hlds__lambda__find_used_vars_in_goal_3_p_0(transform_hlds__lambda__LeftGoal_119, transform_hlds__lambda__STATE_VARIABLE_VarUses_0_121, &transform_hlds__lambda__STATE_VARIABLE_VarUses_123_123);
                      /* direct tailcall eliminated */
                      {
                        MR_Word transform_hlds__lambda__next_value_of_Goal_4 = transform_hlds__lambda__RightGoal_120;
                        MR_ArrayPtr transform_hlds__lambda__next_value_of_STATE_VARIABLE_VarUses_0_121 = transform_hlds__lambda__STATE_VARIABLE_VarUses_123_123;

                        transform_hlds__lambda__STATE_VARIABLE_VarUses_0_121 = transform_hlds__lambda__next_value_of_STATE_VARIABLE_VarUses_0_121;
                        transform_hlds__lambda__Goal_4 = transform_hlds__lambda__next_value_of_Goal_4;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word transform_hlds__lambda__Outer_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__Shorthand_104, (MR_Integer) 1)));
                      MR_Word transform_hlds__lambda__Inner_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__Shorthand_104, (MR_Integer) 2)));
                      MR_Word transform_hlds__lambda__MaybeOutputVars_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__Shorthand_104, (MR_Integer) 3)));
                      MR_Word transform_hlds__lambda__MainGoal_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__Shorthand_104, (MR_Integer) 4)));
                      MR_Word transform_hlds__lambda__OrElseGoals_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__Shorthand_104, (MR_Integer) 5)));
                      MR_Word transform_hlds__lambda__OuterDI_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Outer_106, (MR_Integer) 0)));
                      MR_Word transform_hlds__lambda__OuterUO_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Outer_106, (MR_Integer) 1)));
                      MR_Word transform_hlds__lambda__InnerDI_114;
                      MR_Word transform_hlds__lambda__InnerUO_115;
                      MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_126_126;
                      MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_127_127;
                      MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_128_128;
                      MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_129_129;
                      MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_130_130;
                      MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_131_131;
                      MR_Integer transform_hlds__lambda__Var_236;
                      MR_Integer transform_hlds__lambda__Var_245;
                      MR_Integer transform_hlds__lambda__Var_254;
                      MR_Integer transform_hlds__lambda__Var_263;
                      MR_Word transform_hlds__lambda__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__Shorthand_104, (MR_Integer) 0)));
                      MR_Word transform_hlds__lambda__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__Shorthand_104, (MR_Integer) 6)));
                      MR_ArrayPtr transform_hlds__lambda__conv7_STATE_VARIABLE_VarUses_126_126;
                      MR_ArrayPtr transform_hlds__lambda__conv8_STATE_VARIABLE_VarUses_127_127;
                      MR_ArrayPtr transform_hlds__lambda__conv9_STATE_VARIABLE_VarUses_128_128;
                      MR_ArrayPtr transform_hlds__lambda__conv10_STATE_VARIABLE_VarUses_129_129;

                      transform_hlds__lambda__Var_236 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__OuterDI_112);
                      mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__Var_236, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_0_121, &transform_hlds__lambda__conv7_STATE_VARIABLE_VarUses_126_126);
                      transform_hlds__lambda__STATE_VARIABLE_VarUses_126_126 = (MR_ArrayPtr) transform_hlds__lambda__conv7_STATE_VARIABLE_VarUses_126_126;
                      transform_hlds__lambda__Var_245 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__OuterUO_113);
                      mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__Var_245, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_126_126, &transform_hlds__lambda__conv8_STATE_VARIABLE_VarUses_127_127);
                      transform_hlds__lambda__STATE_VARIABLE_VarUses_127_127 = (MR_ArrayPtr) transform_hlds__lambda__conv8_STATE_VARIABLE_VarUses_127_127;
                      transform_hlds__lambda__InnerDI_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Inner_107, (MR_Integer) 0)));
                      transform_hlds__lambda__InnerUO_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Inner_107, (MR_Integer) 1)));
                      transform_hlds__lambda__Var_254 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__InnerDI_114);
                      mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__Var_254, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_127_127, &transform_hlds__lambda__conv9_STATE_VARIABLE_VarUses_128_128);
                      transform_hlds__lambda__STATE_VARIABLE_VarUses_128_128 = (MR_ArrayPtr) transform_hlds__lambda__conv9_STATE_VARIABLE_VarUses_128_128;
                      transform_hlds__lambda__Var_263 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__InnerUO_115);
                      mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__Var_263, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_128_128, &transform_hlds__lambda__conv10_STATE_VARIABLE_VarUses_129_129);
                      transform_hlds__lambda__STATE_VARIABLE_VarUses_129_129 = (MR_ArrayPtr) transform_hlds__lambda__conv10_STATE_VARIABLE_VarUses_129_129;
                      if ((transform_hlds__lambda__MaybeOutputVars_108 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        transform_hlds__lambda__STATE_VARIABLE_VarUses_130_130 = transform_hlds__lambda__STATE_VARIABLE_VarUses_129_129;
                      else
                      {
                        MR_Word transform_hlds__lambda__OutputVars_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__MaybeOutputVars_108, (MR_Integer) 0)));

                        transform_hlds__lambda__mark_vars_as_used_3_p_0(transform_hlds__lambda__OutputVars_116, transform_hlds__lambda__STATE_VARIABLE_VarUses_129_129, &transform_hlds__lambda__STATE_VARIABLE_VarUses_130_130);
                      }
                      transform_hlds__lambda__find_used_vars_in_goal_3_p_0(transform_hlds__lambda__MainGoal_109, transform_hlds__lambda__STATE_VARIABLE_VarUses_130_130, &transform_hlds__lambda__STATE_VARIABLE_VarUses_131_131);
                      transform_hlds__lambda__find_used_vars_in_goals_3_p_0(transform_hlds__lambda__OrElseGoals_110, transform_hlds__lambda__STATE_VARIABLE_VarUses_131_131, transform_hlds__lambda__STATE_VARIABLE_VarUses_122);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word transform_hlds__lambda__SubGoal_177 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__Shorthand_104, (MR_Integer) 2)));
                      MR_Word transform_hlds__lambda__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__Shorthand_104, (MR_Integer) 0)));
                      MR_Word transform_hlds__lambda__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__lambda__Shorthand_104, (MR_Integer) 1)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word transform_hlds__lambda__next_value_of_Goal_4 = transform_hlds__lambda__SubGoal_177;

                        transform_hlds__lambda__Goal_4 = transform_hlds__lambda__next_value_of_Goal_4;
                      }
                      continue;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__lambda__mark_vars_as_used_3_p_0(
  MR_Word transform_hlds__lambda__HeadVar__1_1,
  MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2,
  MR_ArrayPtr * transform_hlds__lambda__STATE_VARIABLE_VarUses_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((transform_hlds__lambda__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *transform_hlds__lambda__STATE_VARIABLE_VarUses_3 = transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2;
    else
    {
      MR_Word transform_hlds__lambda__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__lambda__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 1)));
      MR_ArrayPtr transform_hlds__lambda__STATE_VARIABLE_VarUses_12_12;
      MR_Integer transform_hlds__lambda__Var_18;
      MR_ArrayPtr transform_hlds__lambda__conv0_STATE_VARIABLE_VarUses_12_12;

      transform_hlds__lambda__Var_18 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__Var_7);
      mercury__array__set_4_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__lambda__Var_18, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2, &transform_hlds__lambda__conv0_STATE_VARIABLE_VarUses_12_12);
      transform_hlds__lambda__STATE_VARIABLE_VarUses_12_12 = (MR_ArrayPtr) transform_hlds__lambda__conv0_STATE_VARIABLE_VarUses_12_12;
      /* direct tailcall eliminated */
      {
        MR_Word transform_hlds__lambda__next_value_of_HeadVar__1_1 = transform_hlds__lambda__Vars_8;
        MR_ArrayPtr transform_hlds__lambda__next_value_of_STATE_VARIABLE_VarUses_0_2 = transform_hlds__lambda__STATE_VARIABLE_VarUses_12_12;

        transform_hlds__lambda__STATE_VARIABLE_VarUses_0_2 = transform_hlds__lambda__next_value_of_STATE_VARIABLE_VarUses_0_2;
        transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__next_value_of_HeadVar__1_1;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__lambda__filter_vartypes_4_p_0(
  MR_Word transform_hlds__lambda__HeadVar__1_1,
  MR_Word transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_0_2,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_3,
  MR_ArrayPtr transform_hlds__lambda__HeadVar__4_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((transform_hlds__lambda__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_3 = transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_0_2;
    else
    {
      MR_Word transform_hlds__lambda__VarType_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__lambda__VarTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word transform_hlds__lambda__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__VarType_9, (MR_Integer) 0)));
      MR_Integer transform_hlds__lambda__VarNum_15;
      MR_Word transform_hlds__lambda__Used_16;
      MR_Word transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_19_19;
      MR_Word transform_hlds__lambda___Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__VarType_9, (MR_Integer) 1)));
      MR_Box transform_hlds__lambda__conv0_Used_16;

      transform_hlds__lambda__VarNum_15 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__lambda__Var_13);
      mercury__array__unsafe_lookup_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_ArrayPtr) transform_hlds__lambda__HeadVar__4_4, transform_hlds__lambda__VarNum_15, &transform_hlds__lambda__conv0_Used_16);
      transform_hlds__lambda__Used_16 = ((MR_Word) transform_hlds__lambda__conv0_Used_16);
      switch (transform_hlds__lambda__Used_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_19_19 = transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_0_2;
          break;
        case (MR_Integer) 1:
          {
            transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_19_19, 0) = ((MR_Box) (transform_hlds__lambda__VarType_9));
            MR_hl_field(MR_mktag(1), transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_19_19, 1) = ((MR_Box) (transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_0_2));
          }
          break;
      }
      /* direct tailcall eliminated */
      {
        MR_Word transform_hlds__lambda__next_value_of_HeadVar__1_1 = transform_hlds__lambda__VarTypes_10;
        MR_Word transform_hlds__lambda__next_value_of_STATE_VARIABLE_RevVarTypes_0_2 = transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_19_19;

        transform_hlds__lambda__STATE_VARIABLE_RevVarTypes_0_2 = transform_hlds__lambda__next_value_of_STATE_VARIABLE_RevVarTypes_0_2;
        transform_hlds__lambda__HeadVar__1_1 = transform_hlds__lambda__next_value_of_HeadVar__1_1;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__lambda__unify_modes_to_modes_2_p_0(
  MR_Word transform_hlds__lambda__HeadVar__1_1,
  MR_Word * transform_hlds__lambda__HeadVar__2_2)
{
  if ((transform_hlds__lambda__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *transform_hlds__lambda__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word transform_hlds__lambda__UnifyMode_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word transform_hlds__lambda__UnifyModes_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__lambda__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word transform_hlds__lambda__Mode_5;
    MR_Word transform_hlds__lambda__Modes_6;
    MR_Word transform_hlds__lambda__RHSInit_8;
    MR_Word transform_hlds__lambda__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__UnifyMode_3, (MR_Integer) 1)));
    MR_Word transform_hlds__lambda__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__UnifyMode_3, (MR_Integer) 0)));
    MR_Word transform_hlds__lambda___RHSFinal_9;

    transform_hlds__lambda__RHSInit_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Var_10, (MR_Integer) 0)));
    transform_hlds__lambda___RHSFinal_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Var_10, (MR_Integer) 1)));
    {
      transform_hlds__lambda__Mode_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Mode_5, 0) = ((MR_Box) (transform_hlds__lambda__RHSInit_8));
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Mode_5, 1) = ((MR_Box) (transform_hlds__lambda__RHSInit_8));
    }
    transform_hlds__lambda__unify_modes_to_modes_2_p_0(transform_hlds__lambda__UnifyModes_4, &transform_hlds__lambda__Modes_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *transform_hlds__lambda__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__lambda__Mode_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__lambda__Modes_6));
    }
  }
}

void MR_CALL 
transform_hlds__lambda__lambda_info_set_recompute_nonlocals_3_p_0(
  MR_Word transform_hlds__lambda__Recompute_4,
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_6,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_7)
{
  {
    MR_Word transform_hlds__lambda__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word transform_hlds__lambda__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word transform_hlds__lambda__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word transform_hlds__lambda__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word transform_hlds__lambda__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word transform_hlds__lambda__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word transform_hlds__lambda__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word transform_hlds__lambda__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word transform_hlds__lambda__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 9)));
    MR_Word transform_hlds__lambda__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 8)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__lambda__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lambda__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lambda__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lambda__Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lambda__Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lambda__Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lambda__Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__lambda__Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__lambda__Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__lambda__Recompute_4));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__lambda__Var_18));
    }
  }
}

void MR_CALL 
transform_hlds__lambda__lambda_info_set_module_info_3_p_0(
  MR_Word transform_hlds__lambda__ModuleInfo_4,
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_6,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_7)
{
  {
    MR_Word transform_hlds__lambda__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word transform_hlds__lambda__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word transform_hlds__lambda__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word transform_hlds__lambda__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word transform_hlds__lambda__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word transform_hlds__lambda__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word transform_hlds__lambda__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word transform_hlds__lambda__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 8)));
    MR_Word transform_hlds__lambda__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 9)));
    MR_Word transform_hlds__lambda__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__lambda__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lambda__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lambda__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lambda__Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lambda__Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lambda__Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lambda__Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__lambda__Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__lambda__ModuleInfo_4));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__lambda__Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__lambda__Var_18));
    }
  }
}

void MR_CALL 
transform_hlds__lambda__lambda_info_set_vartypes_3_p_0(
  MR_Word transform_hlds__lambda__VarTypes_4,
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_6,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_7)
{
  {
    MR_Word transform_hlds__lambda__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word transform_hlds__lambda__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word transform_hlds__lambda__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word transform_hlds__lambda__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word transform_hlds__lambda__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word transform_hlds__lambda__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word transform_hlds__lambda__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word transform_hlds__lambda__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 8)));
    MR_Word transform_hlds__lambda__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 9)));
    MR_Word transform_hlds__lambda__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__lambda__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lambda__Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lambda__VarTypes_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lambda__Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lambda__Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lambda__Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lambda__Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__lambda__Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__lambda__Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__lambda__Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__lambda__Var_18));
    }
  }
}

void MR_CALL 
transform_hlds__lambda__lambda_info_set_varset_3_p_0(
  MR_Word transform_hlds__lambda__VarSet_4,
  MR_Word transform_hlds__lambda__STATE_VARIABLE_Info_0_6,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_Info_7)
{
  {
    MR_Word transform_hlds__lambda__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word transform_hlds__lambda__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word transform_hlds__lambda__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word transform_hlds__lambda__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word transform_hlds__lambda__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word transform_hlds__lambda__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word transform_hlds__lambda__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word transform_hlds__lambda__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 8)));
    MR_Word transform_hlds__lambda__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 9)));
    MR_Word transform_hlds__lambda__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__lambda__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lambda__VarSet_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lambda__Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lambda__Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lambda__Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lambda__Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lambda__Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__lambda__Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__lambda__Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__lambda__Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__lambda__Var_18));
    }
  }
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_recompute_nonlocals_2_p_0(
  MR_Word transform_hlds__lambda__Info_3,
  MR_Word * transform_hlds__lambda__HeadVar__2_2)
{
  {
    MR_Word transform_hlds__lambda__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 0)));
    MR_Word transform_hlds__lambda__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 1)));
    MR_Word transform_hlds__lambda__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 2)));
    MR_Word transform_hlds__lambda__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 3)));
    MR_Word transform_hlds__lambda__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 4)));
    MR_Word transform_hlds__lambda__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 5)));
    MR_Word transform_hlds__lambda__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 6)));
    MR_Word transform_hlds__lambda__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 7)));
    MR_Word transform_hlds__lambda__Var_12;

    *transform_hlds__lambda__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 8)));
    transform_hlds__lambda__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 9)));
  }
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_module_info_2_p_0(
  MR_Word transform_hlds__lambda__Info_3,
  MR_Word * transform_hlds__lambda__HeadVar__2_2)
{
  {
    MR_Word transform_hlds__lambda__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 0)));
    MR_Word transform_hlds__lambda__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 1)));
    MR_Word transform_hlds__lambda__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 2)));
    MR_Word transform_hlds__lambda__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 3)));
    MR_Word transform_hlds__lambda__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 4)));
    MR_Word transform_hlds__lambda__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 5)));
    MR_Word transform_hlds__lambda__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 6)));
    MR_Word transform_hlds__lambda__Var_11;
    MR_Word transform_hlds__lambda__Var_12;

    *transform_hlds__lambda__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 7)));
    transform_hlds__lambda__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 8)));
    transform_hlds__lambda__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 9)));
  }
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_pred_info_2_p_0(
  MR_Word transform_hlds__lambda__Info_3,
  MR_Word * transform_hlds__lambda__HeadVar__2_2)
{
  {
    MR_Word transform_hlds__lambda__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 0)));
    MR_Word transform_hlds__lambda__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 1)));
    MR_Word transform_hlds__lambda__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 2)));
    MR_Word transform_hlds__lambda__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 3)));
    MR_Word transform_hlds__lambda__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 4)));
    MR_Word transform_hlds__lambda__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 5)));
    MR_Word transform_hlds__lambda__Var_10;
    MR_Word transform_hlds__lambda__Var_11;
    MR_Word transform_hlds__lambda__Var_12;

    *transform_hlds__lambda__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 6)));
    transform_hlds__lambda__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 7)));
    transform_hlds__lambda__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 8)));
    transform_hlds__lambda__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 9)));
  }
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_inst_varset_2_p_0(
  MR_Word transform_hlds__lambda__Info_3,
  MR_Word * transform_hlds__lambda__HeadVar__2_2)
{
  {
    MR_Word transform_hlds__lambda__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 0)));
    MR_Word transform_hlds__lambda__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 1)));
    MR_Word transform_hlds__lambda__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 2)));
    MR_Word transform_hlds__lambda__Var_7;
    MR_Word transform_hlds__lambda__Var_8;
    MR_Word transform_hlds__lambda__Var_9;
    MR_Word transform_hlds__lambda__Var_10;
    MR_Word transform_hlds__lambda__Var_11;
    MR_Word transform_hlds__lambda__Var_12;

    *transform_hlds__lambda__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 3)));
    transform_hlds__lambda__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 4)));
    transform_hlds__lambda__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 5)));
    transform_hlds__lambda__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 6)));
    transform_hlds__lambda__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 7)));
    transform_hlds__lambda__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 8)));
    transform_hlds__lambda__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 9)));
  }
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_rtti_varmaps_2_p_0(
  MR_Word transform_hlds__lambda__Info_3,
  MR_Word * transform_hlds__lambda__HeadVar__2_2)
{
  {
    MR_Word transform_hlds__lambda__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 0)));
    MR_Word transform_hlds__lambda__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 1)));
    MR_Word transform_hlds__lambda__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 2)));
    MR_Word transform_hlds__lambda__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 3)));
    MR_Word transform_hlds__lambda__Var_8;
    MR_Word transform_hlds__lambda__Var_9;
    MR_Word transform_hlds__lambda__Var_10;
    MR_Word transform_hlds__lambda__Var_11;
    MR_Word transform_hlds__lambda__Var_12;

    *transform_hlds__lambda__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 4)));
    transform_hlds__lambda__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 5)));
    transform_hlds__lambda__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 6)));
    transform_hlds__lambda__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 7)));
    transform_hlds__lambda__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 8)));
    transform_hlds__lambda__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 9)));
  }
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_tvarset_2_p_0(
  MR_Word transform_hlds__lambda__Info_3,
  MR_Word * transform_hlds__lambda__HeadVar__2_2)
{
  {
    MR_Word transform_hlds__lambda__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 0)));
    MR_Word transform_hlds__lambda__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 1)));
    MR_Word transform_hlds__lambda__Var_6;
    MR_Word transform_hlds__lambda__Var_7;
    MR_Word transform_hlds__lambda__Var_8;
    MR_Word transform_hlds__lambda__Var_9;
    MR_Word transform_hlds__lambda__Var_10;
    MR_Word transform_hlds__lambda__Var_11;
    MR_Word transform_hlds__lambda__Var_12;

    *transform_hlds__lambda__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 2)));
    transform_hlds__lambda__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 3)));
    transform_hlds__lambda__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 4)));
    transform_hlds__lambda__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 5)));
    transform_hlds__lambda__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 6)));
    transform_hlds__lambda__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 7)));
    transform_hlds__lambda__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 8)));
    transform_hlds__lambda__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 9)));
  }
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(
  MR_Word transform_hlds__lambda__Info_3,
  MR_Word * transform_hlds__lambda__HeadVar__2_2)
{
  {
    MR_Word transform_hlds__lambda__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 0)));
    MR_Word transform_hlds__lambda__Var_5;
    MR_Word transform_hlds__lambda__Var_6;
    MR_Word transform_hlds__lambda__Var_7;
    MR_Word transform_hlds__lambda__Var_8;
    MR_Word transform_hlds__lambda__Var_9;
    MR_Word transform_hlds__lambda__Var_10;
    MR_Word transform_hlds__lambda__Var_11;
    MR_Word transform_hlds__lambda__Var_12;

    *transform_hlds__lambda__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 1)));
    transform_hlds__lambda__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 2)));
    transform_hlds__lambda__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 3)));
    transform_hlds__lambda__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 4)));
    transform_hlds__lambda__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 5)));
    transform_hlds__lambda__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 6)));
    transform_hlds__lambda__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 7)));
    transform_hlds__lambda__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 8)));
    transform_hlds__lambda__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 9)));
  }
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_varset_2_p_0(
  MR_Word transform_hlds__lambda__Info_3,
  MR_Word * transform_hlds__lambda__HeadVar__2_2)
{
  {
    MR_Word transform_hlds__lambda__Var_4;
    MR_Word transform_hlds__lambda__Var_5;
    MR_Word transform_hlds__lambda__Var_6;
    MR_Word transform_hlds__lambda__Var_7;
    MR_Word transform_hlds__lambda__Var_8;
    MR_Word transform_hlds__lambda__Var_9;
    MR_Word transform_hlds__lambda__Var_10;
    MR_Word transform_hlds__lambda__Var_11;
    MR_Word transform_hlds__lambda__Var_12;

    *transform_hlds__lambda__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 0)));
    transform_hlds__lambda__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 1)));
    transform_hlds__lambda__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 2)));
    transform_hlds__lambda__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 3)));
    transform_hlds__lambda__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 4)));
    transform_hlds__lambda__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 5)));
    transform_hlds__lambda__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 6)));
    transform_hlds__lambda__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 7)));
    transform_hlds__lambda__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 8)));
    transform_hlds__lambda__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__Info_3, (MR_Integer) 9)));
  }
}

void MR_CALL 
transform_hlds__lambda__init_lambda_info_9_p_0(
  MR_Word transform_hlds__lambda__VarSet_10,
  MR_Word transform_hlds__lambda__VarTypes_11,
  MR_Word transform_hlds__lambda__TypeVarSet_12,
  MR_Word transform_hlds__lambda__InstVarSet_13,
  MR_Word transform_hlds__lambda__RttiVarMaps_14,
  MR_Word transform_hlds__lambda__HasParallelConj_15,
  MR_Word transform_hlds__lambda__PredInfo_16,
  MR_Word transform_hlds__lambda__ModuleInfo_17,
  MR_Word * transform_hlds__lambda__Info_18)
{
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__lambda__Info_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__lambda__VarSet_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__lambda__VarTypes_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__lambda__TypeVarSet_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__lambda__InstVarSet_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__lambda__RttiVarMaps_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__lambda__HasParallelConj_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__lambda__PredInfo_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__lambda__ModuleInfo_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((MR_Integer) 0));
    }
  }
}

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_pred_3_p_0_1(
  MR_Box transform_hlds__lambda__closure_arg,
  MR_Box transform_hlds__lambda__wrapper_arg_1,
  MR_Box transform_hlds__lambda__wrapper_arg_2,
  MR_Box * transform_hlds__lambda__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__lambda__closure = transform_hlds__lambda__closure_arg;
    MR_Word transform_hlds__lambda__conv0_STATE_VARIABLE_ModuleInfo_20;

    transform_hlds__lambda__expand_lambdas_in_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__lambda__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__lambda__wrapper_arg_1), ((MR_Word) transform_hlds__lambda__wrapper_arg_2), &transform_hlds__lambda__conv0_STATE_VARIABLE_ModuleInfo_20);
    *transform_hlds__lambda__wrapper_arg_3 = ((MR_Box) (transform_hlds__lambda__conv0_STATE_VARIABLE_ModuleInfo_20));
  }
}

void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_pred_3_p_0(
  MR_Word transform_hlds__lambda__PredId_4,
  MR_Word transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_Word transform_hlds__lambda__PredInfo_6;
    MR_Word transform_hlds__lambda__ProcIds_7;
    MR_Word transform_hlds__lambda__Var_10;
    MR_Box transform_hlds__lambda__conv1_STATE_VARIABLE_ModuleInfo_9;

    hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__lambda__PredId_4, &transform_hlds__lambda__PredInfo_6);
    transform_hlds__lambda__ProcIds_7 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__lambda__PredInfo_6);
    {
      transform_hlds__lambda__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Var_10, 0) = ((MR_Box) (&transform_hlds__lambda_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Var_10, 1) = ((MR_Box) (transform_hlds__lambda__expand_lambdas_in_pred_3_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__lambda__Var_10, 3) = ((MR_Box) (transform_hlds__lambda__PredId_4));
    }
    mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__lambda__Var_10, transform_hlds__lambda__ProcIds_7, ((MR_Box) (transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_8)), &transform_hlds__lambda__conv1_STATE_VARIABLE_ModuleInfo_9);
    *transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) transform_hlds__lambda__conv1_STATE_VARIABLE_ModuleInfo_9);
  }
}

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_module_2_p_0_1(
  MR_Box transform_hlds__lambda__closure_arg,
  MR_Box transform_hlds__lambda__wrapper_arg_1,
  MR_Box transform_hlds__lambda__wrapper_arg_2,
  MR_Box * transform_hlds__lambda__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__lambda__closure = transform_hlds__lambda__closure_arg;
    MR_Word transform_hlds__lambda__conv0_STATE_VARIABLE_ModuleInfo_9;

    transform_hlds__lambda__expand_lambdas_in_pred_3_p_0(((MR_Word) transform_hlds__lambda__wrapper_arg_1), ((MR_Word) transform_hlds__lambda__wrapper_arg_2), &transform_hlds__lambda__conv0_STATE_VARIABLE_ModuleInfo_9);
    *transform_hlds__lambda__wrapper_arg_3 = ((MR_Box) (transform_hlds__lambda__conv0_STATE_VARIABLE_ModuleInfo_9));
  }
}

void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_module_2_p_0(
  MR_Word transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_6)
{
  {
    MR_Word transform_hlds__lambda__PredIds_4;
    MR_Word transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_8_8;
    MR_Box transform_hlds__lambda__conv1_STATE_VARIABLE_ModuleInfo_8_8;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_5, &transform_hlds__lambda__PredIds_4);
    mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__lambda_scalar_common_2[2], transform_hlds__lambda__PredIds_4, ((MR_Box) (transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_0_5)), &transform_hlds__lambda__conv1_STATE_VARIABLE_ModuleInfo_8_8);
    transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_8_8 = ((MR_Word) transform_hlds__lambda__conv1_STATE_VARIABLE_ModuleInfo_8_8);
    hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_8_8, transform_hlds__lambda__STATE_VARIABLE_ModuleInfo_6);
  }
}

static MR_bool MR_CALL 
transform_hlds__lambda____Unify____lambda_info_0_0_10001(
  MR_Box transform_hlds__lambda__wrapper_arg_1,
  MR_Box transform_hlds__lambda__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__lambda__succeeded;

    transform_hlds__lambda__succeeded = transform_hlds__lambda____Unify____lambda_info_0_0(((MR_Word) transform_hlds__lambda__wrapper_arg_1), ((MR_Word) transform_hlds__lambda__wrapper_arg_2));
    return transform_hlds__lambda__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lambda____Compare____lambda_info_0_0_10001(
  MR_Box * transform_hlds__lambda__wrapper_arg_1,
  MR_Box transform_hlds__lambda__wrapper_arg_2,
  MR_Box transform_hlds__lambda__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__lambda__conv0_HeadVar__1_1;

    transform_hlds__lambda____Compare____lambda_info_0_0(&transform_hlds__lambda__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lambda__wrapper_arg_2), ((MR_Word) transform_hlds__lambda__wrapper_arg_3));
    *transform_hlds__lambda__wrapper_arg_1 = ((MR_Box) (transform_hlds__lambda__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__lambda____Unify____reg_wrapper_proc_0_0_10001(
  MR_Box transform_hlds__lambda__wrapper_arg_1,
  MR_Box transform_hlds__lambda__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__lambda__succeeded;

    transform_hlds__lambda__succeeded = transform_hlds__lambda____Unify____reg_wrapper_proc_0_0(((MR_Word) transform_hlds__lambda__wrapper_arg_1), ((MR_Word) transform_hlds__lambda__wrapper_arg_2));
    return transform_hlds__lambda__succeeded;
  }
}

static void MR_CALL 
transform_hlds__lambda____Compare____reg_wrapper_proc_0_0_10001(
  MR_Box * transform_hlds__lambda__wrapper_arg_1,
  MR_Box transform_hlds__lambda__wrapper_arg_2,
  MR_Box transform_hlds__lambda__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__lambda__conv0_HeadVar__1_1;

    transform_hlds__lambda____Compare____reg_wrapper_proc_0_0(&transform_hlds__lambda__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__lambda__wrapper_arg_2), ((MR_Word) transform_hlds__lambda__wrapper_arg_3));
    *transform_hlds__lambda__wrapper_arg_1 = ((MR_Box) (transform_hlds__lambda__conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__lambda__init(void)
{
}

void mercury__transform_hlds__lambda__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_lambda_info_0);
	MR_register_type_ctor_info(&transform_hlds__lambda__transform_hlds__lambda__type_ctor_info_reg_wrapper_proc_0);
}

void mercury__transform_hlds__lambda__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__lambda__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module transform_hlds.lambda. */
