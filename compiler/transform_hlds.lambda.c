/*
** Automatically generated from `lambda.m'
** by the Mercury compiler,
** version rotd-2019-11-09
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


// :- module transform_hlds.lambda.
// :- implementation.

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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
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
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s {
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21;
  MR_bool transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded;
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_37;
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVars_91;
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__CurriedArgModes_101;
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeInfo_187_187;
  MR_Word transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_188_188;
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

static const MR_DuArgLocn transform_hlds__lambda__transform_hlds__lambda__field_locns_lambda_info_0_0[10];

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
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word Mode_8,
  MR_Integer X_9,
  MR_Integer * X_5);

static void MR_CALL 
transform_hlds__lambda__constraint_contains_vars_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__lambda__constraint_contains_vars_2_p_0(
  MR_Word LambdaVars_3,
  MR_Word ClassConstraint_4);

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_proc_4_p_0(
  MR_Word PredId_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20);

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_proc_2_6_p_0(
  MR_Word STATE_VARIABLE_ProcInfo_0_42,
  MR_Word * STATE_VARIABLE_ProcInfo_43,
  MR_Word STATE_VARIABLE_PredInfo_0_44,
  MR_Word * STATE_VARIABLE_PredInfo_45,
  MR_Word STATE_VARIABLE_ModuleInfo_0_46,
  MR_Word * STATE_VARIABLE_ModuleInfo_47);

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_unify_goal_8_p_0(
  MR_Word LHS_9,
  MR_Word RHS0_10,
  MR_Word Mode_11,
  MR_Word Unification0_12,
  MR_Word Context_13,
  MR_Word * GoalExpr_14,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33);

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4);

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4);

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_Info_0_68,
  MR_Word * STATE_VARIABLE_Info_69);

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_9(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_8(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_10(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__lambda__restrict_var_maps_8_p_0(
  MR_Word HeadVars_9,
  MR_Word Goal_10,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23,
  MR_Word STATE_VARIABLE_VarTypes_0_24,
  MR_Word * STATE_VARIABLE_VarTypes_25,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_26,
  MR_Word * STATE_VARIABLE_RttiVarMaps_27);

static MR_Box MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0(
  MR_Word Goal_4,
  MR_ArrayPtr STATE_VARIABLE_VarUses_0_121,
  MR_ArrayPtr * STATE_VARIABLE_VarUses_122);

static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_cases_3_p_0(
  MR_Word HeadVar__1_1,
  MR_ArrayPtr STATE_VARIABLE_VarUses_0_2,
  MR_ArrayPtr * STATE_VARIABLE_VarUses_3);

static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_goals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_ArrayPtr STATE_VARIABLE_VarUses_0_2,
  MR_ArrayPtr * STATE_VARIABLE_VarUses_3);

static void MR_CALL 
transform_hlds__lambda__mark_vars_as_used_3_p_0(
  MR_Word HeadVar__1_1,
  MR_ArrayPtr STATE_VARIABLE_VarUses_0_2,
  MR_ArrayPtr * STATE_VARIABLE_VarUses_3);

static void MR_CALL 
transform_hlds__lambda__filter_vartypes_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevVarTypes_0_2,
  MR_Word * STATE_VARIABLE_RevVarTypes_3,
  MR_ArrayPtr HeadVar__4_4);

static void MR_CALL 
transform_hlds__lambda__unify_modes_to_modes_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_module_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__lambda____Unify____lambda_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__lambda____Compare____lambda_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__lambda____Unify____reg_wrapper_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__lambda____Compare____reg_wrapper_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__lambda_scalar_common_1[7][2];

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_2[6][3];

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
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_2[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__lambda_scalar_common_1[2])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__lambda_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__lambda__expand_lambdas_in_module_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__lambda_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__lambda__find_used_vars_in_goal_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__lambda_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__lambda__find_used_vars_in_goal_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__lambda_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__lambda_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__lambda__constraint_contains_vars_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
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
    ((MR_Box) ((MR_Integer) 4)),
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
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__lambda__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__lambda__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__lambda__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box transform_hlds__lambda_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lambda__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__lambda__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__lambda__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__lambda__transform_hlds__lambda__field_types_lambda_info_0_0[10] = {
  (MR_PseudoTypeInfo) (&transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__lambda__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__lambda__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_has_parallel_conj_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString transform_hlds__lambda__transform_hlds__lambda__field_names_lambda_info_0_0[10] = {
  (MR_String) "li_varset",
  (MR_String) "li_vartypes",
  (MR_String) "li_tvarset",
  (MR_String) "li_inst_varset",
  (MR_String) "li_rtti_varmaps",
  (MR_String) "li_pred_info",
  (MR_String) "li_module_info",
  (MR_String) "li_has_parallel_conj",
  (MR_String) "li_recompute_nonlocals",
  (MR_String) "li_have_expanded_lambda"
};

static const MR_DuArgLocn transform_hlds__lambda__transform_hlds__lambda__field_locns_lambda_info_0_0[10] = {
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_lambda_info_0_0 = {
  (MR_String) "lambda_info",
  INT16_C(10),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__lambda__transform_hlds__lambda__field_types_lambda_info_0_0,
  transform_hlds__lambda__transform_hlds__lambda__field_names_lambda_info_0_0,
  transform_hlds__lambda__transform_hlds__lambda__field_locns_lambda_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_lambda_info_0_0[1] = {
  &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_lambda_info_0_0
};

static const MR_DuPtagLayout transform_hlds__lambda__transform_hlds__lambda__du_ptag_ordered_lambda_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_lambda_info_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lambda____Unify____lambda_info_0_0_10001)),
  ((MR_Box) (transform_hlds__lambda____Compare____lambda_info_0_0_10001)),
  (MR_String) "transform_hlds.lambda",
  (MR_String) "lambda_info",
  {     transform_hlds__lambda__transform_hlds__lambda__du_name_ordered_lambda_info_0 },
  {     transform_hlds__lambda__transform_hlds__lambda__du_ptag_ordered_lambda_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__lambda__transform_hlds__lambda__functor_number_map_lambda_info_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__lambda__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) (&transform_hlds__lambda__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__lambda__transform_hlds__lambda__field_types_reg_wrapper_proc_0_0[1] = {
  (MR_PseudoTypeInfo) (&transform_hlds__lambda__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_0 = {
  (MR_String) "reg_wrapper_proc",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__lambda__transform_hlds__lambda__field_types_reg_wrapper_proc_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_1 = {
  (MR_String) "not_reg_wrapper_proc",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_0[1] = {
  &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_1
};

static const MR_DuFunctorDescPtr transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_1[1] = {
  &transform_hlds__lambda__transform_hlds__lambda__du_functor_desc_reg_wrapper_proc_0_0
};

static const MR_DuPtagLayout transform_hlds__lambda__transform_hlds__lambda__du_ptag_ordered_reg_wrapper_proc_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__lambda__transform_hlds__lambda__du_stag_ordered_reg_wrapper_proc_0_1,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__lambda____Unify____reg_wrapper_proc_0_0_10001)),
  ((MR_Box) (transform_hlds__lambda____Compare____reg_wrapper_proc_0_0_10001)),
  (MR_String) "transform_hlds.lambda",
  (MR_String) "reg_wrapper_proc",
  {     transform_hlds__lambda__transform_hlds__lambda__du_name_ordered_reg_wrapper_proc_0 },
  {     transform_hlds__lambda__transform_hlds__lambda__du_ptag_ordered_reg_wrapper_proc_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__lambda__transform_hlds__lambda__functor_number_map_reg_wrapper_proc_0
};

void MR_CALL 
transform_hlds__lambda____Compare____reg_wrapper_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Var_11)), ((MR_Box) (ArgY1_5)));
      }
    }
  }
}

MR_bool MR_CALL 
transform_hlds__lambda____Unify____reg_wrapper_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_6 == CastX_5);
    }
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_9_9 = (MR_Word) (&transform_hlds__lambda_scalar_common_1[6]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__lambda____Compare____lambda_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_33 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_34 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_33 == CastY_34);
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
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY8_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX9_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY9_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX10_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) & (MR_Integer) 1);
      MR_Word ArgY10_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[3]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[4]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[5]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                hlds__hlds_pred____Compare____pred_info_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  hlds__hlds_module____Compare____module_info_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;
                    MR_Integer Var_45 = (MR_Integer) (ArgX8_25);
                    MR_Integer Var_46 = (MR_Integer) (ArgY8_26);

                    succeeded = (Var_45 < Var_46);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_45 > Var_46);
                      if (succeeded)
                      {
                        SubResult8_27 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult8_27 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                    {
                      MR_Word SubResult9_30;
                      MR_Integer Var_47 = (MR_Integer) (ArgX9_28);
                      MR_Integer Var_48 = (MR_Integer) (ArgY9_29);

                      succeeded = (Var_47 < Var_48);
                      if (succeeded)
                      {
                        SubResult9_30 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_47 > Var_48);
                        if (succeeded)
                        {
                          SubResult9_30 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult9_30 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult9_30;
                      else
                      {
                        MR_Integer Var_49 = (MR_Integer) (ArgX10_31);
                        MR_Integer Var_50 = (MR_Integer) (ArgY10_32);

                        succeeded = (Var_49 < Var_50);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_49 > Var_50);
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
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
transform_hlds__lambda____Unify____lambda_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_23 == CastY_24);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_26_26;
      MR_Word TypeInfo_27_27;
      MR_Word TypeInfo_28_28;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX8_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY8_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX9_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY9_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX10_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))) & (MR_Integer) 1);
      MR_Word ArgY10_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) & (MR_Integer) 1);

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeCtorInfo_26_26 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
        succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_26_26, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_27_27 = (MR_Word) (&transform_hlds__lambda_scalar_common_1[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_28_28 = (MR_Word) (&transform_hlds__lambda_scalar_common_1[5]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX6_13, ArgY6_14);
                if (succeeded)
                {
                  succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX7_15, ArgY7_16);
                  if (succeeded)
                  {
                    succeeded = (ArgX8_17 == ArgY8_18);
                    if (succeeded)
                    {
                      succeeded = (ArgX9_19 == ArgY9_20);
                      if (succeeded)
                        succeeded = (ArgX10_21 == ArgY10_22);
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
transform_hlds__lambda__check_lambda_arg_type_and_mode_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word Mode_8,
  MR_Integer X_9,
  MR_Integer * X_5)
{
  {
    MR_bool succeeded;
    MR_Word Inst_10;
    MR_Word Var_13;

    *X_5 = X_9;
    Inst_10 = check_hlds__mode_util__mode_get_initial_inst_2_f_0(ModuleInfo_6, Mode_8);
    succeeded = ((((MR_tag((MR_Word) Inst_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_10, (MR_Integer) 2))));
      succeeded = (Var_13 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(Type_7);
      if (!(succeeded))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lambda.check_lambda_arg_type_and_mode\'/5", (MR_String) "non-higher order argument with higher order inst");
          return;
        }
    }
  }
}

static void MR_CALL 
transform_hlds__lambda__constraint_contains_vars_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    parse_tree__prog_type__type_vars_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static MR_bool MR_CALL 
transform_hlds__lambda__constraint_contains_vars_2_p_0(
  MR_Word LambdaVars_3,
  MR_Word ClassConstraint_4)
{
  {
    MR_bool succeeded;
    MR_Word ConstraintTypes_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassConstraint_4, (MR_Integer) 1))));
    MR_Word ConstraintVarsList_7;
    MR_Word ConstraintVars_8;
    MR_Word LambdaVarsSet_9;
    MR_Word ConstraintVarsSet_10;

    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__lambda_scalar_common_1[1]), (MR_Word) (&transform_hlds__lambda_scalar_common_2[5]), ConstraintTypes_6, &ConstraintVarsList_7);
    mercury__list__condense_2_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), ConstraintVarsList_7, &ConstraintVars_8);
    mercury__set__list_to_set_2_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), LambdaVars_3, &LambdaVarsSet_9);
    mercury__set__list_to_set_2_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), ConstraintVars_8, &ConstraintVarsSet_10);
    succeeded = mercury__set__subset_2_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), ConstraintVarsSet_10, LambdaVarsSet_9);
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_proc_4_p_0(
  MR_Word PredId_5,
  MR_Integer ProcId_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20)
{
  {
    MR_Word PredTable0_8;
    MR_Word PredInfo0_9;
    MR_Word ProcTable0_10;
    MR_Word ProcInfo0_11;
    MR_Word ProcInfo_12;
    MR_Word PredInfo1_13;
    MR_Word ProcTable1_14;
    MR_Word ProcTable_15;
    MR_Word PredInfo_16;
    MR_Word PredTable1_17;
    MR_Word PredTable_18;
    MR_Word STATE_VARIABLE_ModuleInfo_21_21;
    MR_Box conv0_PredInfo0_9;
    MR_Box conv1_ProcInfo0_11;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_19, &PredTable0_8);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_8, ((MR_Box) (PredId_5)), &conv0_PredInfo0_9);
    PredInfo0_9 = ((MR_Word) (conv0_PredInfo0_9));
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_9, &ProcTable0_10);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_10, ((MR_Box) (ProcId_6)), &conv1_ProcInfo0_11);
    ProcInfo0_11 = ((MR_Word) (conv1_ProcInfo0_11));
    transform_hlds__lambda__expand_lambdas_in_proc_2_6_p_0(ProcInfo0_11, &ProcInfo_12, PredInfo0_9, &PredInfo1_13, STATE_VARIABLE_ModuleInfo_0_19, &STATE_VARIABLE_ModuleInfo_21_21);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo1_13, &ProcTable1_14);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_6)), ((MR_Box) (ProcInfo_12)), ProcTable1_14, &ProcTable_15);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_15, PredInfo1_13, &PredInfo_16);
    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_21_21, &PredTable1_17);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_5)), ((MR_Box) (PredInfo_16)), PredTable1_17, &PredTable_18);
    hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_18, STATE_VARIABLE_ModuleInfo_21_21, STATE_VARIABLE_ModuleInfo_20);
  }
}

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_proc_2_6_p_0(
  MR_Word STATE_VARIABLE_ProcInfo_0_42,
  MR_Word * STATE_VARIABLE_ProcInfo_43,
  MR_Word STATE_VARIABLE_PredInfo_0_44,
  MR_Word * STATE_VARIABLE_PredInfo_45,
  MR_Word STATE_VARIABLE_ModuleInfo_0_46,
  MR_Word * STATE_VARIABLE_ModuleInfo_47)
{
  {
    MR_Word TypeVarSet0_10;
    MR_Word HeadVars_11;
    MR_Word VarSet0_12;
    MR_Word VarTypes0_13;
    MR_Word Goal0_14;
    MR_Word RttiVarMaps0_15;
    MR_Word InstVarSet0_16;
    MR_Word HasParallelConj_17;
    MR_Word Info0_20;
    MR_Word Goal1_21;
    MR_Word Info1_22;
    MR_Word VarSet1_23;
    MR_Word VarTypes1_24;
    MR_Word TypeVarSet_25;
    MR_Word RttiVarMaps1_27;
    MR_Word MustRecomputeNonLocals_30;
    MR_Word HaveExpandedLambdas_31;
    MR_Word VarSet2_34;
    MR_Word VarTypes2_35;
    MR_Word RttiVarMaps2_36;
    MR_Word Goal_38;
    MR_Word VarSet_39;
    MR_Word VarTypes_40;
    MR_Word RttiVarMaps_41;
    MR_Word STATE_VARIABLE_ModuleInfo_48_48;
    MR_Word STATE_VARIABLE_ProcInfo_52_52;
    MR_Word STATE_VARIABLE_ProcInfo_53_53;
    MR_Word STATE_VARIABLE_ProcInfo_54_54;

    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_PredInfo_0_44, &TypeVarSet0_10);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_42, &HeadVars_11);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_42, &VarSet0_12);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_42, &VarTypes0_13);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_42, &Goal0_14);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_0_42, &RttiVarMaps0_15);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_42, &InstVarSet0_16);
    hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(STATE_VARIABLE_ProcInfo_0_42, &HasParallelConj_17);
    {
      Info0_20 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info0_20, 0) = ((MR_Box) (VarSet0_12));
      MR_hl_field(MR_mktag(0), Info0_20, 1) = ((MR_Box) (VarTypes0_13));
      MR_hl_field(MR_mktag(0), Info0_20, 2) = ((MR_Box) (TypeVarSet0_10));
      MR_hl_field(MR_mktag(0), Info0_20, 3) = ((MR_Box) (InstVarSet0_16));
      MR_hl_field(MR_mktag(0), Info0_20, 4) = ((MR_Box) (RttiVarMaps0_15));
      MR_hl_field(MR_mktag(0), Info0_20, 5) = ((MR_Box) (STATE_VARIABLE_PredInfo_0_44));
      MR_hl_field(MR_mktag(0), Info0_20, 6) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_46));
      MR_hl_field(MR_mktag(0), Info0_20, 7) = (MR_Box) (((((MR_Unsigned) (HasParallelConj_17) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
    }
    transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(Goal0_14, &Goal1_21, Info0_20, &Info1_22);
    VarSet1_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info1_22, (MR_Integer) 0))));
    VarTypes1_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info1_22, (MR_Integer) 1))));
    TypeVarSet_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info1_22, (MR_Integer) 2))));
    RttiVarMaps1_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info1_22, (MR_Integer) 4))));
    STATE_VARIABLE_ModuleInfo_48_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info1_22, (MR_Integer) 6))));
    MustRecomputeNonLocals_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info1_22, (MR_Integer) 7))) >> 1)) & (MR_Integer) 1);
    HaveExpandedLambdas_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info1_22, (MR_Integer) 7))) & (MR_Integer) 1);
    switch (MustRecomputeNonLocals_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          Goal_38 = Goal1_21;
          VarSet2_34 = VarSet1_23;
          VarTypes2_35 = VarTypes1_24;
          RttiVarMaps2_36 = RttiVarMaps1_27;
          *STATE_VARIABLE_ModuleInfo_47 = STATE_VARIABLE_ModuleInfo_48_48;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Goal2_33;
          MR_Word InstMap0_37;
          MR_Word _Warnings_32;

          hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, HeadVars_11, &_Warnings_32, Goal1_21, &Goal2_33, VarSet1_23, &VarSet2_34, VarTypes1_24, &VarTypes2_35, RttiVarMaps1_27, &RttiVarMaps2_36);
          hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ProcInfo_0_42, STATE_VARIABLE_ModuleInfo_48_48, &InstMap0_37);
          check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 0, Goal2_33, &Goal_38, VarTypes2_35, InstVarSet0_16, InstMap0_37, STATE_VARIABLE_ModuleInfo_48_48, STATE_VARIABLE_ModuleInfo_47);
        }
        break;
    }
    switch (HaveExpandedLambdas_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          VarSet_39 = VarSet2_34;
          VarTypes_40 = VarTypes2_35;
          RttiVarMaps_41 = RttiVarMaps2_36;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MaxVar_68;
          MR_Integer MaxVarNum_69;
          MR_ArrayPtr VarUses0_70;
          MR_ArrayPtr VarUses1_71;
          MR_ArrayPtr VarUses_72;
          MR_Word VarTypesList0_73;
          MR_Word RevVarTypesList_74;
          MR_Word VarTypesList_75;
          MR_Integer Var_76;
          MR_ArrayPtr conv0_VarUses0_70;

          MaxVar_68 = mercury__varset__max_var_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet2_34);
          MaxVarNum_69 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MaxVar_68);
          Var_76 = (MR_Integer) ((MR_Unsigned) MaxVarNum_69 + (MR_Unsigned) 1);
          mercury__array__init_3_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_76, ((MR_Box) ((MR_Integer) 0)), &conv0_VarUses0_70);
          VarUses0_70 = (MR_ArrayPtr) (conv0_VarUses0_70);
          transform_hlds__lambda__mark_vars_as_used_3_p_0(HeadVars_11, VarUses0_70, &VarUses1_71);
          transform_hlds__lambda__find_used_vars_in_goal_3_p_0(Goal_38, VarUses1_71, &VarUses_72);
          hlds__vartypes__vartypes_to_sorted_assoc_list_2_p_0(VarTypes2_35, &VarTypesList0_73);
          transform_hlds__lambda__filter_vartypes_4_p_0(VarTypesList0_73, (MR_Word) ((MR_Unsigned) 0U), &RevVarTypesList_74, VarUses_72);
          mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_2[0]), RevVarTypesList_74, &VarTypesList_75);
          hlds__vartypes__vartypes_from_sorted_assoc_list_2_p_0(VarTypesList_75, &VarTypes_40);
          hlds__hlds_rtti__restrict_rtti_varmaps_3_p_0(VarUses_72, RttiVarMaps2_36, &RttiVarMaps_41);
          VarSet_39 = VarSet2_34;
        }
        break;
    }
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_38, STATE_VARIABLE_ProcInfo_0_42, &STATE_VARIABLE_ProcInfo_52_52);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_39, STATE_VARIABLE_ProcInfo_52_52, &STATE_VARIABLE_ProcInfo_53_53);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_40, STATE_VARIABLE_ProcInfo_53_53, &STATE_VARIABLE_ProcInfo_54_54);
    hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_41, STATE_VARIABLE_ProcInfo_54_54, STATE_VARIABLE_ProcInfo_43);
    hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVarSet_25, STATE_VARIABLE_PredInfo_0_44, STATE_VARIABLE_PredInfo_45);
  }
}

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_unify_goal_8_p_0(
  MR_Word LHS_9,
  MR_Word RHS0_10,
  MR_Word Mode_11,
  MR_Word Unification0_12,
  MR_Word Context_13,
  MR_Word * GoalExpr_14,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33)
{
  switch (MR_tag((MR_Word) RHS0_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LHS_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RHS0_10));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Mode_11));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Unification0_12));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (Context_13));
        }
        *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_0_32;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Purity_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_10, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
        MR_Word PredOrFunc_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_10, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word Vars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_10, (MR_Integer) 3))));
        MR_Word Modes_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_10, (MR_Integer) 4))));
        MR_Word Det_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_10, (MR_Integer) 5))) & (MR_Integer) 7);
        MR_Word LambdaGoal0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_10, (MR_Integer) 6))));
        MR_Word LambdaGoal_25;
        MR_Word Y_26;
        MR_Word Unification_27;
        MR_Word STATE_VARIABLE_Info_34_34;

        transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(LambdaGoal0_24, &LambdaGoal_25, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_34_34);
        transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0(Purity_16, PredOrFunc_18, (MR_Word) ((MR_Unsigned) 0U), Vars_21, Modes_22, Det_23, LambdaGoal_25, Unification0_12, &Y_26, &Unification_27, STATE_VARIABLE_Info_34_34, STATE_VARIABLE_Info_33);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LHS_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Y_26));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Mode_11));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Unification_27));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (Context_13));
        }
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word Case0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_10;
    MR_Word Cases_11;
    MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 0))));
    MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 1))));
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 2))));
    MR_Word Goal_16;
    MR_Word STATE_VARIABLE_Info_19_19;

    transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(Goal0_15, &Goal_16, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_19_19);
    {
      Case_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_10, 0) = ((MR_Box) (MainConsId_13));
      MR_hl_field(MR_mktag(0), Case_10, 1) = ((MR_Box) (OtherConsIds_14));
      MR_hl_field(MR_mktag(0), Case_10, 2) = ((MR_Box) (Goal_16));
    }
    transform_hlds__lambda__expand_lambdas_in_cases_4_p_0(Cases0_9, &Cases_11, STATE_VARIABLE_Info_19_19, STATE_VARIABLE_Info_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_11));
    }
  }
}

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word Goal0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_10;
    MR_Word Goals_11;
    MR_Word STATE_VARIABLE_Info_15_15;

    transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(Goal0_8, &Goal_10, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_15_15);
    transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(Goals0_9, &Goals_11, STATE_VARIABLE_Info_15_15, STATE_VARIABLE_Info_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_11));
    }
  }
}

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_Info_0_68,
  MR_Word * STATE_VARIABLE_Info_69)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 0))));
    MR_Word GoalInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1))));
    MR_Word GoalExpr_15;

    switch (MR_tag((MR_Word) GoalExpr0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_23 = (MR_Word) ((MR_Word) (GoalExpr0_8));
          MR_Word SubGoal_24;

          transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(SubGoal0_23, &SubGoal_24, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
          GoalExpr_15 = (MR_Word) ((MR_Word) (SubGoal_24));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 0))));
          MR_Word RHS_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 1))));
          MR_Word Mode_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 2))));
          MR_Word Unification_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 3))));
          MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 4))));

          transform_hlds__lambda__expand_lambdas_in_unify_goal_8_p_0(LHS_10, RHS_11, Mode_12, Unification_13, Context_14, &GoalExpr_15, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
        }
        break;
      case (MR_Integer) 2:
        {
          GoalExpr_15 = GoalExpr0_8;
          *STATE_VARIABLE_Info_69 = STATE_VARIABLE_Info_0_68;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              GoalExpr_15 = GoalExpr0_8;
              *STATE_VARIABLE_Info_69 = STATE_VARIABLE_Info_0_68;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word Goals_18;

              transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(Goals0_17, &Goals_18, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = (MR_Box) ((MR_Unsigned) (ConjType_16));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 2) = ((MR_Box) (Goals_18));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word Goals_85;

              transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(Goals0_84, &Goals_85, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = ((MR_Box) (Goals_85));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word CanFail_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3))));
              MR_Word Cases_22;

              transform_hlds__lambda__expand_lambdas_in_cases_4_p_0(Cases0_21, &Cases_22, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = ((MR_Box) (Var_19));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 2) = (MR_Box) ((MR_Unsigned) (CanFail_20));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 3) = ((MR_Box) (Cases_22));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word SubGoal0_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word FGT_27;

              succeeded = ((((MR_tag((MR_Word) Reason_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_25, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_25, (MR_Integer) 2))) & (MR_Integer) 3);
                switch (FGT_27) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
              {
                GoalExpr_15 = GoalExpr0_8;
                *STATE_VARIABLE_Info_69 = STATE_VARIABLE_Info_0_68;
              }
              else
              {
                MR_Word SubGoal_86;

                transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(SubGoal0_88, &SubGoal_86, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
                {
                  GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = ((MR_Box) (Reason_25));
                  MR_hl_field(MR_mktag(3), GoalExpr_15, 2) = ((MR_Box) (SubGoal_86));
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word Cond0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word Then0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3))));
              MR_Word Else0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 4))));
              MR_Word Cond_32;
              MR_Word Then_33;
              MR_Word Else_34;
              MR_Word STATE_VARIABLE_Info_75_75;
              MR_Word STATE_VARIABLE_Info_76_76;

              transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(Cond0_29, &Cond_32, STATE_VARIABLE_Info_0_68, &STATE_VARIABLE_Info_75_75);
              transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(Then0_30, &Then_33, STATE_VARIABLE_Info_75_75, &STATE_VARIABLE_Info_76_76);
              transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(Else0_31, &Else_34, STATE_VARIABLE_Info_76_76, STATE_VARIABLE_Info_69);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = ((MR_Box) (Vars_28));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 2) = ((MR_Box) (Cond_32));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 3) = ((MR_Box) (Then_33));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 4) = ((MR_Box) (Else_34));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word ShortHand_63;

              switch (MR_tag((MR_Word) ShortHand0_53)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lambda.expand_lambdas_in_goal\'/4", (MR_String) "bi_implication");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_54 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShortHand0_53, (MR_Integer) 0))) & (MR_Integer) 3);
                    MR_Word Outer_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_53, (MR_Integer) 1))));
                    MR_Word Inner_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_53, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_53, (MR_Integer) 3))));
                    MR_Word MainGoal0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_53, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_53, (MR_Integer) 5))));
                    MR_Word OrElseInners_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_53, (MR_Integer) 6))));
                    MR_Word MainGoal_61;
                    MR_Word OrElseGoals_62;
                    MR_Word STATE_VARIABLE_Info_73_73;

                    transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(MainGoal0_58, &MainGoal_61, STATE_VARIABLE_Info_0_68, &STATE_VARIABLE_Info_73_73);
                    transform_hlds__lambda__expand_lambdas_in_goal_list_4_p_0(OrElseGoals0_59, &OrElseGoals_62, STATE_VARIABLE_Info_73_73, STATE_VARIABLE_Info_69);
                    {
                      ShortHand_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ShortHand_63, 0) = (MR_Box) ((MR_Unsigned) (GoalType_54));
                      MR_hl_field(MR_mktag(1), ShortHand_63, 1) = ((MR_Box) (Outer_55));
                      MR_hl_field(MR_mktag(1), ShortHand_63, 2) = ((MR_Box) (Inner_56));
                      MR_hl_field(MR_mktag(1), ShortHand_63, 3) = ((MR_Box) (MaybeOutputVars_57));
                      MR_hl_field(MR_mktag(1), ShortHand_63, 4) = ((MR_Box) (MainGoal_61));
                      MR_hl_field(MR_mktag(1), ShortHand_63, 5) = ((MR_Box) (OrElseGoals_62));
                      MR_hl_field(MR_mktag(1), ShortHand_63, 6) = ((MR_Box) (OrElseInners_60));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_64 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_53, (MR_Integer) 0))));
                    MR_Word ResultVar_65 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_53, (MR_Integer) 1))));
                    MR_Word SubGoal0_90 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_53, (MR_Integer) 2))));
                    MR_Word SubGoal_91;

                    transform_hlds__lambda__expand_lambdas_in_goal_4_p_0(SubGoal0_90, &SubGoal_91, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
                    {
                      ShortHand_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ShortHand_63, 0) = ((MR_Box) (MaybeIO_64));
                      MR_hl_field(MR_mktag(2), ShortHand_63, 1) = ((MR_Box) (ResultVar_65));
                      MR_hl_field(MR_mktag(2), ShortHand_63, 2) = ((MR_Box) (SubGoal_91));
                    }
                  }
                  break;
              }
              {
                GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = ((MR_Box) (ShortHand_63));
              }
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_9));
    }
  }
}

void MR_CALL 
transform_hlds__lambda__lambda_info_set_recompute_nonlocals_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 2U)))) | (((MR_Unsigned) (X_4) << 1))));
    }
  }
}

void MR_CALL 
transform_hlds__lambda__lambda_info_set_module_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 7) = (MR_Box) (packed_word_0);
    }
  }
}

void MR_CALL 
transform_hlds__lambda__lambda_info_set_vartypes_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = (MR_Box) (packed_word_0);
    }
  }
}

void MR_CALL 
transform_hlds__lambda__lambda_info_set_varset_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = (MR_Box) (packed_word_0);
    }
  }
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_recompute_nonlocals_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7))) >> 1)) & (MR_Integer) 1);
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_module_info_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6))));
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_pred_info_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5))));
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_inst_varset_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3))));
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_rtti_varmaps_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4))));
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_tvarset_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2))));
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_vartypes_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1))));
}

void MR_CALL 
transform_hlds__lambda__lambda_info_get_varset_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))));
}

void MR_CALL 
transform_hlds__lambda__init_lambda_info_9_p_0(
  MR_Word VarSet_10,
  MR_Word VarTypes_11,
  MR_Word TypeVarSet_12,
  MR_Word InstVarSet_13,
  MR_Word RttiVarMaps_14,
  MR_Word HasParallelConj_15,
  MR_Word PredInfo_16,
  MR_Word ModuleInfo_17,
  MR_Word * Info_18)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *Info_18 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarSet_10));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarTypes_11));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeVarSet_12));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (InstVarSet_13));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (RttiVarMaps_14));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (PredInfo_16));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ModuleInfo_17));
    MR_hl_field(MR_mktag(0), base, 7) = (MR_Box) (((((MR_Unsigned) (HasParallelConj_15) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
  }
}

void MR_CALL 
transform_hlds__lambda__expand_lambda_15_p_0(
  MR_Word Purity_16,
  MR_Word _Groundness_17,
  MR_Word PredOrFunc_18,
  MR_Word RegWrapperProc_20,
  MR_Word Vars_21,
  MR_Word Modes_22,
  MR_Word Detism_23,
  MR_Word OrigNonLocals0_24,
  MR_Word LambdaGoal_25,
  MR_Word Unification0_26,
  MR_Word * Functor_27,
  MR_Word * Unification_28,
  MR_Word LambdaInfo0_29,
  MR_Word * LambdaInfo_30)
{
  transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0(Purity_16, PredOrFunc_18, RegWrapperProc_20, Vars_21, Modes_22, Detism_23, LambdaGoal_25, Unification0_26, Functor_27, Unification_28, LambdaInfo0_29, LambdaInfo_30);
}

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv3_X_5;

    transform_hlds__lambda__check_lambda_arg_type_and_mode_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), &conv3_X_5);
    *wrapper_arg_4 = ((MR_Box) (conv3_X_5));
  }
}

static MR_bool MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__lambda__constraint_contains_vars_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    parse_tree__prog_type__type_vars_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_5(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVar_92 = ((MR_Word) ((env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__conv1_InitialVar_92));
    transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_4(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__list__member_2_p_0((env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeInfo_187_187, ((MR_Box) ((env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVar_92)), (env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21);
    if ((env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
      transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_3(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_6(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
      {
        mercury__list__member_2_p_1((env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeInfo_187_187, &(env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__conv1_InitialVar_92, (env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVars_91, transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_5, env_ptr);
        (env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_7(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__commit_1, 1);
  }
}

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_9(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Mode_102 = ((MR_Word) ((env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__conv2_Mode_102));
    transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_8(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_8(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = check_hlds__mode_util__mode_is_input_2_p_0((env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_37, (env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Mode_102);
    (env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = !((env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded);
    if ((env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
      transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_7(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_10(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__commit_1) == 0)
      {
        mercury__list__member_2_p_1((env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_188_188, &(env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__conv2_Mode_102, (env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__CurriedArgModes_101, transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_9, env_ptr);
        (env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
  }
}

void MR_CALL 
transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0(
  MR_Word Purity_16,
  MR_Word PredOrFunc_18,
  MR_Word RegWrapperProc_20,
  MR_Word Vars_21,
  MR_Word Modes_22,
  MR_Word Detism_23,
  MR_Word LambdaGoal_25,
  MR_Word Unification0_26,
  MR_Word * Functor_27,
  MR_Word * Unification_28,
  MR_Word LambdaInfo0_29,
  MR_Word * LambdaInfo_30)
{
  {
    struct transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_0_s env;

    (env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21 = Vars_21;
    {
      MR_Word VarSet_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaInfo0_29, (MR_Integer) 0))));
      MR_Word VarTypes_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaInfo0_29, (MR_Integer) 1))));
      MR_Word TVarSet_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaInfo0_29, (MR_Integer) 2))));
      MR_Word InstVarSet_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaInfo0_29, (MR_Integer) 3))));
      MR_Word RttiVarMaps_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaInfo0_29, (MR_Integer) 4))));
      MR_Word OrigPredInfo_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaInfo0_29, (MR_Integer) 5))));
      MR_Word HasParallelConj_38;
      MR_Word MustRecomputeNonLocals0_39;
      MR_Word AllConstraints_41;
      MR_Word LambdaVarTypeList_42;
      MR_Word LambdaTypeVarsList_43;
      MR_Word LambdaTypeVars_44;
      MR_Word UnivConstraints_45;
      MR_Word Constraints_46;
      MR_Word LambdaGoalInfo_49;
      MR_Word LambdaGoalNonLocals_50;
      MR_Word LambdaNonLocals_51;
      MR_Word ExtraTypeInfos_52;
      MR_Word Var_53;
      MR_Word ArgUnifyModes0_56;
      MR_Word OrigVars_60;
      MR_Word NonLocals1_76;
      MR_Word NewTypeInfos_77;
      MR_Word NonLocals_78;
      MR_Word MustRecomputeNonLocals_79;
      MR_Word ArgVars1_80;
      MR_Word ArgVars_103;
      MR_Word PredId_104;
      MR_Integer ProcId_105;
      MR_Word ArgUnifyModes_106;
      MR_Word ModuleInfo_108;
      MR_Word ShroudedPredProcId_144;
      MR_Word ConsId_145;
      MR_Word Var_148;
      MR_Word Var_172;
      MR_Word _HaveExpandedLambdas_40;
      MR_Unsigned packed_word_0;
      MR_Word Var_48;
      MR_Word PredId0_83;
      MR_Integer ProcId0_84;
      MR_Word Call_PredInfo_89;
      MR_Word Call_ProcInfo_90;
      MR_Word LambdaGoalExpr_81;
      MR_Word CallVars_85;
      MR_Word Call_CodeModel_93;
      MR_Word CodeModel_94;
      MR_Word Globals_95;
      MR_Word Target_96;
      MR_Word HighLevelCode_97;
      MR_Word Call_ArgModes_99;
      MR_Integer NumInitialVars_100;
      MR_Word Var_155;
      MR_Word Var_82;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Unsigned packed_word_2;

      (env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaInfo0_29, (MR_Integer) 6))));
      packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), LambdaInfo0_29, (MR_Integer) 7)));
      HasParallelConj_38 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LambdaInfo0_29, (MR_Integer) 7))) >> 2)) & (MR_Integer) 1);
      MustRecomputeNonLocals0_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LambdaInfo0_29, (MR_Integer) 7))) >> 1)) & (MR_Integer) 1);
      _HaveExpandedLambdas_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LambdaInfo0_29, (MR_Integer) 7))) & (MR_Integer) 1);
      hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_p_0(RttiVarMaps_35, &AllConstraints_41);
      hlds__vartypes__lookup_var_types_3_p_0(VarTypes_32, (env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21, &LambdaVarTypeList_42);
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__lambda_scalar_common_1[1]), (MR_Word) (&transform_hlds__lambda_scalar_common_2[4]), LambdaVarTypeList_42, &LambdaTypeVarsList_43);
      mercury__list__condense_2_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[0]), LambdaTypeVarsList_43, &LambdaTypeVars_44);
      {
        Var_148 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_148, 0) = ((MR_Box) (&transform_hlds__lambda_scalar_common_5[2]));
        MR_hl_field(MR_mktag(0), Var_148, 1) = ((MR_Box) (transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_2));
        MR_hl_field(MR_mktag(0), Var_148, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_148, 3) = ((MR_Box) (LambdaTypeVars_44));
      }
      mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_148, AllConstraints_41, &UnivConstraints_45);
      {
        Constraints_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Constraints_46, 0) = ((MR_Box) (UnivConstraints_45));
        MR_hl_field(MR_mktag(0), Constraints_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaGoal_25, (MR_Integer) 0))));
      LambdaGoalInfo_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaGoal_25, (MR_Integer) 1))));
      LambdaGoalNonLocals_50 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(LambdaGoalInfo_49);
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21, LambdaGoalNonLocals_50, &LambdaNonLocals_51);
      hlds__goal_util__extra_nonlocal_typeinfos_5_p_0(RttiVarMaps_35, VarTypes_32, (MR_Word) ((MR_Unsigned) 0U), LambdaNonLocals_51, &ExtraTypeInfos_52);
      switch (MR_tag((MR_Word) Unification0_26)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_54;
            MR_Word Var_57;
            MR_Word Var_58;
            MR_Word Var_59;
            MR_Unsigned packed_word_1;

            Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_26, (MR_Integer) 0))));
            Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_26, (MR_Integer) 1))));
            OrigVars_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_26, (MR_Integer) 2))));
            ArgUnifyModes0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_26, (MR_Integer) 3))));
            Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_26, (MR_Integer) 4))));
            packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Unification0_26, (MR_Integer) 5)));
            Var_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Unification0_26, (MR_Integer) 5))) & (MR_Integer) 1);
            Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification0_26, (MR_Integer) 6))));
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lambda.expand_lambda\'/15", (MR_String) "unexpected unification");
            return;
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lambda.expand_lambda\'/15", (MR_String) "unexpected unification");
            return;
          }
          break;
      }
      parse_tree__set_of_var__delete_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21, LambdaGoalNonLocals_50, &NonLocals1_76);
      parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ExtraTypeInfos_52, NonLocals1_76, &NewTypeInfos_77);
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals1_76, NewTypeInfos_77, &NonLocals_78);
      (env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NewTypeInfos_77);
      if ((env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
        MustRecomputeNonLocals_79 = MustRecomputeNonLocals0_39;
      else
        MustRecomputeNonLocals_79 = (MR_Integer) 1;
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_78, &ArgVars1_80);
      LambdaGoalExpr_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaGoal_25, (MR_Integer) 0))));
      Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaGoal_25, (MR_Integer) 1))));
      (env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = ((MR_tag((MR_Word) LambdaGoalExpr_81)) == (MR_Integer) 2);
      if ((env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
      {
        PredId0_83 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LambdaGoalExpr_81, (MR_Integer) 0))));
        ProcId0_84 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), LambdaGoalExpr_81, (MR_Integer) 1))));
        CallVars_85 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LambdaGoalExpr_81, (MR_Integer) 2))));
        packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), LambdaGoalExpr_81, (MR_Integer) 3)));
        Var_86 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), LambdaGoalExpr_81, (MR_Integer) 3))) & (MR_Integer) 1);
        Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LambdaGoalExpr_81, (MR_Integer) 4))));
        Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LambdaGoalExpr_81, (MR_Integer) 5))));
        hlds__hlds_module__module_info_pred_proc_info_5_p_0((env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_37, PredId0_83, ProcId0_84, &Call_PredInfo_89, &Call_ProcInfo_90);
        (env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeInfo_187_187 = (MR_Word) (&transform_hlds__lambda_scalar_common_1[2]);
        (env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__list__remove_suffix_3_p_0((env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeInfo_187_187, CallVars_85, (env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21, &(env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVars_91);
        if ((env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
        {
          transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_6(&env);
          (env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = !((env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded);
          if ((env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
          {
            Call_CodeModel_93 = hlds__code_model__proc_info_interface_code_model_1_f_0(Call_ProcInfo_90);
            hlds__code_model__determinism_to_code_model_2_p_0(Detism_23, &CodeModel_94);
            hlds__hlds_module__module_info_get_globals_2_p_0((env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_37, &Globals_95);
            libs__globals__get_target_2_p_0(Globals_95, &Target_96);
            Var_155 = (MR_Integer) 284;
            libs__globals__lookup_bool_option_3_p_0(Globals_95, Var_155, &HighLevelCode_97);
            switch (Target_96) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                switch (HighLevelCode_97) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      (env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = (CodeModel_94 == Call_CodeModel_93);
                      if (!((env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded))
                      {
                        (env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = (CodeModel_94 == (MR_Integer) 2);
                        if ((env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
                          (env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = (Call_CodeModel_93 == (MR_Integer) 0);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Call_PredOrFunc_98;

                      Call_PredOrFunc_98 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(Call_PredInfo_89);
                      (env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = (PredOrFunc_18 == Call_PredOrFunc_98);
                      if ((env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
                        (env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = (CodeModel_94 == Call_CodeModel_93);
                    }
                    break;
                }
                break;
              case (MR_Integer) 3:
                (env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = (CodeModel_94 == Call_CodeModel_93);
                break;
            }
            if ((env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
            {
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(Call_ProcInfo_90, &Call_ArgModes_99);
              mercury__list__length_2_p_0((env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeInfo_187_187, (env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVars_91, &NumInitialVars_100);
              (env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_188_188 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
              (env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__list__take_3_p_0((env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__TypeCtorInfo_188_188, NumInitialVars_100, Call_ArgModes_99, &(env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__CurriedArgModes_101);
              if ((env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
              {
                transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_10(&env);
                (env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded = !((env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded);
              }
            }
          }
        }
      }
      if ((env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__succeeded)
      {
        MR_Word Call_NewProcInfo_107;

        ArgVars_103 = (env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__InitialVars_91;
        PredId_104 = PredId0_83;
        ProcId_105 = ProcId0_84;
        check_hlds__mode_util__modes_to_unify_modes_4_p_0((env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_37, (env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__CurriedArgModes_101, (env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__CurriedArgModes_101, &ArgUnifyModes_106);
        hlds__hlds_pred__proc_info_set_address_taken_3_p_0((MR_Integer) 0, Call_ProcInfo_90, &Call_NewProcInfo_107);
        hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_104, ProcId_105, Call_PredInfo_89, Call_NewProcInfo_107, (env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_37, &ModuleInfo_108);
      }
      else
      {
        MR_Word AllArgVars_109;
        MR_Word ModuleName_110;
        MR_String OrigPredName_111;
        MR_Word OrigContext_112;
        MR_String OrigFile_113;
        MR_Integer OrigLine_114;
        MR_Integer LambdaCount_115;
        MR_Word ModuleInfo1_116;
        MR_Word PredName_117;
        MR_Word LambdaContext_118;
        MR_Word OrigArgModes_119;
        MR_Integer NumArgVars_120;
        MR_Word In_121;
        MR_Word InModes_122;
        MR_Word ArgModesMap_123;
        MR_Word OrigArgModesMap_124;
        MR_Word ArgModesMap1_125;
        MR_Word ArgModes1_126;
        MR_Word AllArgModes_127;
        MR_Word ArgTypes_128;
        MR_Word PurityMarkers_130;
        MR_Word LambdaMarkers0_131;
        MR_Word LambdaMarkers_132;
        MR_Word VarNameRemap_133;
        MR_Word LambdaVarSet_134;
        MR_Word LambdaVarTypes_135;
        MR_Word LambdaRttiVarMaps_136;
        MR_Word ProcInfo_137;
        MR_Word Assertions_140;
        MR_Word PredInfo_141;
        MR_Word PredicateTable0_142;
        MR_Word PredicateTable_143;
        MR_Word Var_160;
        MR_Word STATE_VARIABLE_ProcInfo_164_164;
        MR_Word STATE_VARIABLE_ProcInfo_165_165;
        MR_Word STATE_VARIABLE_ProcInfo_167_167;
        MR_Word Var_169;
        MR_Integer Var_129;
        MR_Box conv4_Var_129;

        ArgVars_103 = check_hlds__type_util__put_typeinfo_vars_first_2_f_0(ArgVars1_80, VarTypes_32);
        mercury__list__append_3_p_1((MR_Word) (&transform_hlds__lambda_scalar_common_1[2]), ArgVars_103, (env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__Vars_21, &AllArgVars_109);
        hlds__hlds_module__module_info_get_name_2_p_0((env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_37, &ModuleName_110);
        OrigPredName_111 = hlds__hlds_pred__pred_info_name_1_f_0(OrigPredInfo_36);
        OrigContext_112 = hlds__hlds_goal__goal_info_get_context_1_f_0(LambdaGoalInfo_49);
        mercury__term__context_file_2_p_0(OrigContext_112, &OrigFile_113);
        mercury__term__context_line_2_p_0(OrigContext_112, &OrigLine_114);
        hlds__hlds_module__module_info_next_lambda_count_4_p_0(OrigContext_112, &LambdaCount_115, (env).transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_95_49_53_95_112_95_48_95_101_110_118_95_48__ModuleInfo0_37, &ModuleInfo1_116);
        parse_tree__prog_util__make_pred_name_with_context_7_p_0(ModuleName_110, (MR_String) "IntroducedFrom", PredOrFunc_18, OrigPredName_111, OrigLine_114, LambdaCount_115, &PredName_117);
        LambdaContext_118 = hlds__hlds_goal__goal_info_get_context_1_f_0(LambdaGoalInfo_49);
        transform_hlds__lambda__unify_modes_to_modes_2_p_0(ArgUnifyModes0_56, &OrigArgModes_119);
        mercury__list__length_2_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[2]), ArgVars_103, &NumArgVars_120);
        parse_tree__prog_mode__in_mode_1_p_0(&In_121);
        mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumArgVars_120, ((MR_Box) (In_121)), &InModes_122);
        mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVars_103, InModes_122, &ArgModesMap_123);
        mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), OrigVars_60, OrigArgModes_119, &OrigArgModesMap_124);
        mercury__map__overlay_3_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModesMap_123, OrigArgModesMap_124, &ArgModesMap1_125);
        mercury__map__apply_to_list_3_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVars_103, ArgModesMap1_125, &ArgModes1_126);
        check_hlds__mode_util__modes_to_unify_modes_4_p_0(ModuleInfo1_116, ArgModes1_126, ArgModes1_126, &ArgUnifyModes_106);
        mercury__list__append_3_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes1_126, Modes_22, &AllArgModes_127);
        hlds__vartypes__lookup_var_types_3_p_0(VarTypes_32, AllArgVars_109, &ArgTypes_128);
        {
          Var_160 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_160, 0) = ((MR_Box) (&transform_hlds__lambda_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), Var_160, 1) = ((MR_Box) (transform_hlds__lambda__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_112_97_110_100_95_108_97_109_98_100_97_95_95_91_50_44_32_57_93_95_48_15_p_0_11));
          MR_hl_field(MR_mktag(0), Var_160, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_160, 3) = ((MR_Box) (ModuleInfo1_116));
        }
        mercury__list__foldl_corresponding_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_160, ArgTypes_128, AllArgModes_127, ((MR_Box) ((MR_Integer) 0)), &conv4_Var_129);
        Var_129 = ((MR_Integer) (conv4_Var_129));
        hlds__hlds_pred__purity_to_markers_2_p_0(Purity_16, &PurityMarkers_130);
        hlds__hlds_pred__init_markers_1_p_0(&LambdaMarkers0_131);
        hlds__hlds_pred__add_markers_3_p_0(PurityMarkers_130, LambdaMarkers0_131, &LambdaMarkers_132);
        mercury__map__init_1_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &VarNameRemap_133);
        transform_hlds__lambda__restrict_var_maps_8_p_0(AllArgVars_109, LambdaGoal_25, VarSet_31, &LambdaVarSet_134, VarTypes_32, &LambdaVarTypes_135, RttiVarMaps_35, &LambdaRttiVarMaps_136);
        hlds__hlds_pred__proc_info_create_15_p_0(LambdaContext_118, (MR_Integer) -1, LambdaVarSet_134, LambdaVarTypes_135, AllArgVars_109, InstVarSet_34, AllArgModes_127, (MR_Integer) 0, Detism_23, LambdaGoal_25, LambdaRttiVarMaps_136, (MR_Integer) 0, HasParallelConj_38, VarNameRemap_133, &STATE_VARIABLE_ProcInfo_164_164);
        hlds__hlds_pred__ensure_all_headvars_are_named_2_p_0(STATE_VARIABLE_ProcInfo_164_164, &STATE_VARIABLE_ProcInfo_165_165);
        switch (MustRecomputeNonLocals0_39) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_ProcInfo_167_167 = STATE_VARIABLE_ProcInfo_165_165;
            break;
          case (MR_Integer) 1:
            hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_165_165, &STATE_VARIABLE_ProcInfo_167_167);
            break;
        }
        if ((RegWrapperProc_20 == (MR_Word) ((MR_Unsigned) 0U)))
          ProcInfo_137 = STATE_VARIABLE_ProcInfo_167_167;
        else
        {
          MR_Word RegR_HeadVars_139 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RegWrapperProc_20, (MR_Integer) 0))));

          hlds__hlds_pred__proc_info_set_reg_r_headvars_3_p_0(RegR_HeadVars_139, STATE_VARIABLE_ProcInfo_167_167, &ProcInfo_137);
        }
        mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_assert_id_0), &Assertions_140);
        {
          Var_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_169, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(MR_mktag(3), Var_169, 1) = ((MR_Box) (OrigFile_113));
          MR_hl_field(MR_mktag(3), Var_169, 2) = ((MR_Box) (OrigLine_114));
          MR_hl_field(MR_mktag(3), Var_169, 3) = ((MR_Box) (LambdaCount_115));
        }
        hlds__hlds_pred__pred_info_create_16_p_0(ModuleName_110, PredName_117, PredOrFunc_18, LambdaContext_118, Var_169, (MR_Word) (((MR_Box) ((MR_Unsigned) 32U))), LambdaMarkers_132, ArgTypes_128, TVarSet_33, (MR_Word) ((MR_Unsigned) 0U), Constraints_46, Assertions_140, VarNameRemap_133, ProcInfo_137, &ProcId_105, &PredInfo_141);
        hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo1_116, &PredicateTable0_142);
        hlds__pred_table__predicate_table_insert_4_p_0(PredInfo_141, &PredId_104, PredicateTable0_142, &PredicateTable_143);
        hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredicateTable_143, ModuleInfo1_116, &ModuleInfo_108);
      }
      {
        Var_172 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_172, 0) = ((MR_Box) (PredId_104));
        MR_hl_field(MR_mktag(0), Var_172, 1) = ((MR_Box) (ProcId_105));
      }
      ShroudedPredProcId_144 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(Var_172);
      {
        ConsId_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_145, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), ConsId_145, 1) = ((MR_Box) (ShroudedPredProcId_144));
        MR_hl_field(MR_mktag(3), ConsId_145, 2) = NULL;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Functor_27 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConsId_145));
        MR_hl_field(MR_mktag(1), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ArgVars_103));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        *Unification_28 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ConsId_145));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ArgVars_103));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ArgUnifyModes_106));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(0), base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *LambdaInfo_30 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarSet_31));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarTypes_32));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TVarSet_33));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (InstVarSet_34));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (RttiVarMaps_35));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (OrigPredInfo_36));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ModuleInfo_108));
        MR_hl_field(MR_mktag(0), base, 7) = (MR_Box) (((((MR_Unsigned) (HasParallelConj_38) << 2)) | (((((MR_Unsigned) (MustRecomputeNonLocals_79) << 1)) | (MR_Unsigned) ((MR_Integer) 1)))));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__lambda__restrict_var_maps_8_p_0(
  MR_Word HeadVars_9,
  MR_Word Goal_10,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23,
  MR_Word STATE_VARIABLE_VarTypes_0_24,
  MR_Word * STATE_VARIABLE_VarTypes_25,
  MR_Word STATE_VARIABLE_RttiVarMaps_0_26,
  MR_Word * STATE_VARIABLE_RttiVarMaps_27)
{
  {
    MR_Word MaxVar_14;
    MR_Integer MaxVarNum_15;
    MR_ArrayPtr VarUses0_16;
    MR_ArrayPtr VarUses1_17;
    MR_ArrayPtr VarUses_18;
    MR_Word VarTypesList0_19;
    MR_Word RevVarTypesList_20;
    MR_Word VarTypesList_21;
    MR_Integer Var_28;
    MR_ArrayPtr conv0_VarUses0_16;

    MaxVar_14 = mercury__varset__max_var_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_22);
    MaxVarNum_15 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MaxVar_14);
    Var_28 = (MR_Integer) ((MR_Unsigned) MaxVarNum_15 + (MR_Unsigned) 1);
    mercury__array__init_3_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_28, ((MR_Box) ((MR_Integer) 0)), &conv0_VarUses0_16);
    VarUses0_16 = (MR_ArrayPtr) (conv0_VarUses0_16);
    transform_hlds__lambda__mark_vars_as_used_3_p_0(HeadVars_9, VarUses0_16, &VarUses1_17);
    transform_hlds__lambda__find_used_vars_in_goal_3_p_0(Goal_10, VarUses1_17, &VarUses_18);
    hlds__vartypes__vartypes_to_sorted_assoc_list_2_p_0(STATE_VARIABLE_VarTypes_0_24, &VarTypesList0_19);
    transform_hlds__lambda__filter_vartypes_4_p_0(VarTypesList0_19, (MR_Word) ((MR_Unsigned) 0U), &RevVarTypesList_20, VarUses_18);
    mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__lambda_scalar_common_2[0]), RevVarTypesList_20, &VarTypesList_21);
    hlds__vartypes__vartypes_from_sorted_assoc_list_2_p_0(VarTypesList_21, STATE_VARIABLE_VarTypes_25);
    hlds__hlds_rtti__restrict_rtti_varmaps_3_p_0(VarUses_18, STATE_VARIABLE_RttiVarMaps_0_26, STATE_VARIABLE_RttiVarMaps_27);
    *STATE_VARIABLE_VarSet_23 = STATE_VARIABLE_VarSet_0_22;
  }
}

static MR_Box MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__lambda__find_used_vars_in_goal_3_p_0_1(
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
transform_hlds__lambda__find_used_vars_in_goal_3_p_0(
  MR_Word Goal_4,
  MR_ArrayPtr STATE_VARIABLE_VarUses_0_121,
  MR_ArrayPtr * STATE_VARIABLE_VarUses_122)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_173 = (MR_Word) ((MR_Word) (GoalExpr_6));
          MR_Word next_value_of_Goal_4 = SubGoal_173;

          // direct tailcall eliminated
          ;
          Goal_4 = next_value_of_Goal_4;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHSVar_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 0))));
          MR_Word RHS_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 1))));
          MR_Word Unif_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 3))));
          MR_ArrayPtr STATE_VARIABLE_VarUses_157_157;
          MR_ArrayPtr STATE_VARIABLE_VarUses_159_159;
          MR_Integer Var_280;
          MR_ArrayPtr conv12_STATE_VARIABLE_VarUses_157_157;

          Var_280 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LHSVar_8);
          mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_280, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_121), &conv12_STATE_VARIABLE_VarUses_157_157);
          STATE_VARIABLE_VarUses_157_157 = (MR_ArrayPtr) (conv12_STATE_VARIABLE_VarUses_157_157);
          switch (MR_tag((MR_Word) Unif_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word CellToReuse_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unif_11, (MR_Integer) 4))));
                MR_Word ReuseVar_20;
                MR_Word Var_158;

                succeeded = ((MR_tag((MR_Word) CellToReuse_17)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_158 = (MR_Word) (MR_body((MR_Word) (CellToReuse_17), (MR_Integer) 1));
                  ReuseVar_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_158, (MR_Integer) 0))));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Integer Var_289;
                  MR_ArrayPtr conv13_STATE_VARIABLE_VarUses_159_159;

                  Var_289 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ReuseVar_20);
                  mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_289, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_157_157), &conv13_STATE_VARIABLE_VarUses_159_159);
                  STATE_VARIABLE_VarUses_159_159 = (MR_ArrayPtr) (conv13_STATE_VARIABLE_VarUses_159_159);
                }
                else
                  STATE_VARIABLE_VarUses_159_159 = STATE_VARIABLE_VarUses_157_157;
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_VarUses_159_159 = STATE_VARIABLE_VarUses_157_157;
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_VarUses_159_159 = STATE_VARIABLE_VarUses_157_157;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unif_11, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_VarUses_159_159 = STATE_VARIABLE_VarUses_157_157;
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_VarUses_159_159 = STATE_VARIABLE_VarUses_157_157;
                  break;
              }
              break;
          }
          switch (MR_tag((MR_Word) RHS_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word RHSVar_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHS_9, (MR_Integer) 0))));
                MR_Integer Var_298;
                MR_ArrayPtr conv14_STATE_VARIABLE_VarUses_122;

                Var_298 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), RHSVar_36);
                mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_298, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_159_159), &conv14_STATE_VARIABLE_VarUses_122);
                *STATE_VARIABLE_VarUses_122 = (MR_ArrayPtr) (conv14_STATE_VARIABLE_VarUses_122);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgVars_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_9, (MR_Integer) 2))));

                transform_hlds__lambda__mark_vars_as_used_3_p_0(ArgVars_39, STATE_VARIABLE_VarUses_159_159, STATE_VARIABLE_VarUses_122);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word NonLocals_44 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_9, (MR_Integer) 2))));
                MR_Word LambdaVars_45 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_9, (MR_Integer) 3))));
                MR_Word LambdaGoal_48 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_9, (MR_Integer) 6))));
                MR_ArrayPtr STATE_VARIABLE_VarUses_160_160;
                MR_ArrayPtr STATE_VARIABLE_VarUses_161_161;
                MR_Word next_value_of_Goal_4;
                MR_ArrayPtr next_value_of_STATE_VARIABLE_VarUses_0_121;

                transform_hlds__lambda__mark_vars_as_used_3_p_0(NonLocals_44, STATE_VARIABLE_VarUses_159_159, &STATE_VARIABLE_VarUses_160_160);
                transform_hlds__lambda__mark_vars_as_used_3_p_0(LambdaVars_45, STATE_VARIABLE_VarUses_160_160, &STATE_VARIABLE_VarUses_161_161);
                // direct tailcall eliminated
                ;
                next_value_of_Goal_4 = LambdaGoal_48;
                next_value_of_STATE_VARIABLE_VarUses_0_121 = STATE_VARIABLE_VarUses_161_161;
                Goal_4 = next_value_of_Goal_4;
                STATE_VARIABLE_VarUses_0_121 = next_value_of_STATE_VARIABLE_VarUses_0_121;
                continue;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgVars_167 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 2))));

          transform_hlds__lambda__mark_vars_as_used_3_p_0(ArgVars_167, STATE_VARIABLE_VarUses_0_121, STATE_VARIABLE_VarUses_122);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_ArrayPtr STATE_VARIABLE_VarUses_155_155;
              MR_Word ArgVars_166 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));

              switch (MR_tag((MR_Word) GenericCall_49)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GenericCall_49, (MR_Integer) 0))));
                    MR_Integer Var_199;
                    MR_ArrayPtr conv3_STATE_VARIABLE_VarUses_155_155;

                    Var_199 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_53);
                    mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_199, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_121), &conv3_STATE_VARIABLE_VarUses_155_155);
                    STATE_VARIABLE_VarUses_155_155 = (MR_ArrayPtr) (conv3_STATE_VARIABLE_VarUses_155_155);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_165 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GenericCall_49, (MR_Integer) 0))));
                    MR_Integer Var_190;
                    MR_ArrayPtr conv2_STATE_VARIABLE_VarUses_155_155;

                    Var_190 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_165);
                    mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_190, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_121), &conv2_STATE_VARIABLE_VarUses_155_155);
                    STATE_VARIABLE_VarUses_155_155 = (MR_ArrayPtr) (conv2_STATE_VARIABLE_VarUses_155_155);
                  }
                  break;
                case (MR_Integer) 2:
                  STATE_VARIABLE_VarUses_155_155 = STATE_VARIABLE_VarUses_0_121;
                  break;
                case (MR_Integer) 3:
                  STATE_VARIABLE_VarUses_155_155 = STATE_VARIABLE_VarUses_0_121;
                  break;
              }
              transform_hlds__lambda__mark_vars_as_used_3_p_0(ArgVars_166, STATE_VARIABLE_VarUses_155_155, STATE_VARIABLE_VarUses_122);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
              MR_Word ExtraArgs_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 5))));
              MR_Word ExtraVars_103;
              MR_ArrayPtr STATE_VARIABLE_VarUses_135_135;
              MR_Word ArgVars_175;

              ArgVars_175 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__lambda_scalar_common_1[2]), (MR_Word) (&transform_hlds__lambda_scalar_common_2[2]), Args_99);
              ExtraVars_103 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&transform_hlds__lambda_scalar_common_1[2]), (MR_Word) (&transform_hlds__lambda_scalar_common_2[3]), ExtraArgs_100);
              transform_hlds__lambda__mark_vars_as_used_3_p_0(ArgVars_175, STATE_VARIABLE_VarUses_0_121, &STATE_VARIABLE_VarUses_135_135);
              transform_hlds__lambda__mark_vars_as_used_3_p_0(ExtraVars_103, STATE_VARIABLE_VarUses_135_135, STATE_VARIABLE_VarUses_122);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));

              transform_hlds__lambda__find_used_vars_in_goals_3_p_0(Goals_68, STATE_VARIABLE_VarUses_0_121, STATE_VARIABLE_VarUses_122);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_185 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));

              transform_hlds__lambda__find_used_vars_in_goals_3_p_0(Goals_185, STATE_VARIABLE_VarUses_0_121, STATE_VARIABLE_VarUses_122);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
              MR_ArrayPtr STATE_VARIABLE_VarUses_150_150;
              MR_Word Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_Integer Var_271;
              MR_ArrayPtr conv11_STATE_VARIABLE_VarUses_150_150;

              Var_271 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_168);
              mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_271, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_121), &conv11_STATE_VARIABLE_VarUses_150_150);
              STATE_VARIABLE_VarUses_150_150 = (MR_ArrayPtr) (conv11_STATE_VARIABLE_VarUses_150_150);
              transform_hlds__lambda__find_used_vars_in_cases_3_p_0(Cases_70, STATE_VARIABLE_VarUses_150_150, STATE_VARIABLE_VarUses_122);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_Word SubGoal_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
              MR_ArrayPtr STATE_VARIABLE_VarUses_148_148;
              MR_Word next_value_of_Goal_4;
              MR_ArrayPtr next_value_of_STATE_VARIABLE_VarUses_0_121;

              switch (MR_tag((MR_Word) Reason_71)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Vars_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Reason_71, (MR_Integer) 0))));

                    transform_hlds__lambda__mark_vars_as_used_3_p_0(Vars_73, STATE_VARIABLE_VarUses_0_121, &STATE_VARIABLE_VarUses_148_148);
                  }
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_VarUses_148_148 = STATE_VARIABLE_VarUses_0_121;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Vars_169 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Reason_71, (MR_Integer) 0))));

                    transform_hlds__lambda__mark_vars_as_used_3_p_0(Vars_169, STATE_VARIABLE_VarUses_0_121, &STATE_VARIABLE_VarUses_148_148);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_71, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      STATE_VARIABLE_VarUses_148_148 = STATE_VARIABLE_VarUses_0_121;
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.lambda.find_used_vars_in_goal\'/3", (MR_String) "unexpected scope");
                        return;
                      }
                      break;
                    case (MR_Integer) 4:
                      STATE_VARIABLE_VarUses_148_148 = STATE_VARIABLE_VarUses_0_121;
                      break;
                    case (MR_Integer) 5:
                      STATE_VARIABLE_VarUses_148_148 = STATE_VARIABLE_VarUses_0_121;
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word Var_170 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_71, (MR_Integer) 1))));
                        MR_Integer Var_208;
                        MR_ArrayPtr conv4_STATE_VARIABLE_VarUses_148_148;

                        Var_208 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_170);
                        mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_208, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_121), &conv4_STATE_VARIABLE_VarUses_148_148);
                        STATE_VARIABLE_VarUses_148_148 = (MR_ArrayPtr) (conv4_STATE_VARIABLE_VarUses_148_148);
                      }
                      break;
                    case (MR_Integer) 7:
                      STATE_VARIABLE_VarUses_148_148 = STATE_VARIABLE_VarUses_0_121;
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word LCVar_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_71, (MR_Integer) 1))));
                        MR_Word LCSVar_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_71, (MR_Integer) 2))));
                        MR_ArrayPtr STATE_VARIABLE_VarUses_144_144;
                        MR_Integer Var_217;
                        MR_Integer Var_226;
                        MR_ArrayPtr conv5_STATE_VARIABLE_VarUses_144_144;
                        MR_ArrayPtr conv6_STATE_VARIABLE_VarUses_148_148;

                        Var_217 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCVar_76);
                        mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_217, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_121), &conv5_STATE_VARIABLE_VarUses_144_144);
                        STATE_VARIABLE_VarUses_144_144 = (MR_ArrayPtr) (conv5_STATE_VARIABLE_VarUses_144_144);
                        Var_226 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCSVar_77);
                        mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_226, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_144_144), &conv6_STATE_VARIABLE_VarUses_148_148);
                        STATE_VARIABLE_VarUses_148_148 = (MR_ArrayPtr) (conv6_STATE_VARIABLE_VarUses_148_148);
                      }
                      break;
                  }
                  break;
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_72;
              next_value_of_STATE_VARIABLE_VarUses_0_121 = STATE_VARIABLE_VarUses_148_148;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_VarUses_0_121 = next_value_of_STATE_VARIABLE_VarUses_0_121;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
              MR_Word Then_94 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
              MR_Word Else_95 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
              MR_ArrayPtr STATE_VARIABLE_VarUses_137_137;
              MR_ArrayPtr STATE_VARIABLE_VarUses_138_138;
              MR_ArrayPtr STATE_VARIABLE_VarUses_139_139;
              MR_Word Vars_174 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
              MR_Word next_value_of_Goal_4;
              MR_ArrayPtr next_value_of_STATE_VARIABLE_VarUses_0_121;

              transform_hlds__lambda__mark_vars_as_used_3_p_0(Vars_174, STATE_VARIABLE_VarUses_0_121, &STATE_VARIABLE_VarUses_137_137);
              transform_hlds__lambda__find_used_vars_in_goal_3_p_0(Cond_93, STATE_VARIABLE_VarUses_137_137, &STATE_VARIABLE_VarUses_138_138);
              transform_hlds__lambda__find_used_vars_in_goal_3_p_0(Then_94, STATE_VARIABLE_VarUses_138_138, &STATE_VARIABLE_VarUses_139_139);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = Else_95;
              next_value_of_STATE_VARIABLE_VarUses_0_121 = STATE_VARIABLE_VarUses_139_139;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_VarUses_0_121 = next_value_of_STATE_VARIABLE_VarUses_0_121;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Shorthand_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) Shorthand_104)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word LeftGoal_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Shorthand_104, (MR_Integer) 0))));
                    MR_Word RightGoal_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Shorthand_104, (MR_Integer) 1))));
                    MR_ArrayPtr STATE_VARIABLE_VarUses_123_123;
                    MR_Word next_value_of_Goal_4;
                    MR_ArrayPtr next_value_of_STATE_VARIABLE_VarUses_0_121;

                    transform_hlds__lambda__find_used_vars_in_goal_3_p_0(LeftGoal_119, STATE_VARIABLE_VarUses_0_121, &STATE_VARIABLE_VarUses_123_123);
                    // direct tailcall eliminated
                    ;
                    next_value_of_Goal_4 = RightGoal_120;
                    next_value_of_STATE_VARIABLE_VarUses_0_121 = STATE_VARIABLE_VarUses_123_123;
                    Goal_4 = next_value_of_Goal_4;
                    STATE_VARIABLE_VarUses_0_121 = next_value_of_STATE_VARIABLE_VarUses_0_121;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Outer_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_104, (MR_Integer) 1))));
                    MR_Word Inner_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_104, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_104, (MR_Integer) 3))));
                    MR_Word MainGoal_109 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_104, (MR_Integer) 4))));
                    MR_Word OrElseGoals_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Shorthand_104, (MR_Integer) 5))));
                    MR_Word OuterDI_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_106, (MR_Integer) 0))));
                    MR_Word OuterUO_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_106, (MR_Integer) 1))));
                    MR_Word InnerDI_114;
                    MR_Word InnerUO_115;
                    MR_ArrayPtr STATE_VARIABLE_VarUses_126_126;
                    MR_ArrayPtr STATE_VARIABLE_VarUses_127_127;
                    MR_ArrayPtr STATE_VARIABLE_VarUses_128_128;
                    MR_ArrayPtr STATE_VARIABLE_VarUses_129_129;
                    MR_ArrayPtr STATE_VARIABLE_VarUses_130_130;
                    MR_ArrayPtr STATE_VARIABLE_VarUses_131_131;
                    MR_Integer Var_235;
                    MR_Integer Var_244;
                    MR_Integer Var_253;
                    MR_Integer Var_262;
                    MR_ArrayPtr conv7_STATE_VARIABLE_VarUses_126_126;
                    MR_ArrayPtr conv8_STATE_VARIABLE_VarUses_127_127;
                    MR_ArrayPtr conv9_STATE_VARIABLE_VarUses_128_128;
                    MR_ArrayPtr conv10_STATE_VARIABLE_VarUses_129_129;

                    Var_235 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OuterDI_112);
                    mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_235, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_121), &conv7_STATE_VARIABLE_VarUses_126_126);
                    STATE_VARIABLE_VarUses_126_126 = (MR_ArrayPtr) (conv7_STATE_VARIABLE_VarUses_126_126);
                    Var_244 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OuterUO_113);
                    mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_244, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_126_126), &conv8_STATE_VARIABLE_VarUses_127_127);
                    STATE_VARIABLE_VarUses_127_127 = (MR_ArrayPtr) (conv8_STATE_VARIABLE_VarUses_127_127);
                    InnerDI_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_107, (MR_Integer) 0))));
                    InnerUO_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_107, (MR_Integer) 1))));
                    Var_253 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InnerDI_114);
                    mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_253, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_127_127), &conv9_STATE_VARIABLE_VarUses_128_128);
                    STATE_VARIABLE_VarUses_128_128 = (MR_ArrayPtr) (conv9_STATE_VARIABLE_VarUses_128_128);
                    Var_262 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InnerUO_115);
                    mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_262, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_128_128), &conv10_STATE_VARIABLE_VarUses_129_129);
                    STATE_VARIABLE_VarUses_129_129 = (MR_ArrayPtr) (conv10_STATE_VARIABLE_VarUses_129_129);
                    if ((MaybeOutputVars_108 == (MR_Word) ((MR_Unsigned) 0U)))
                      STATE_VARIABLE_VarUses_130_130 = STATE_VARIABLE_VarUses_129_129;
                    else
                    {
                      MR_Word OutputVars_116 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOutputVars_108, (MR_Integer) 0))));

                      transform_hlds__lambda__mark_vars_as_used_3_p_0(OutputVars_116, STATE_VARIABLE_VarUses_129_129, &STATE_VARIABLE_VarUses_130_130);
                    }
                    transform_hlds__lambda__find_used_vars_in_goal_3_p_0(MainGoal_109, STATE_VARIABLE_VarUses_130_130, &STATE_VARIABLE_VarUses_131_131);
                    transform_hlds__lambda__find_used_vars_in_goals_3_p_0(OrElseGoals_110, STATE_VARIABLE_VarUses_131_131, STATE_VARIABLE_VarUses_122);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_176 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Shorthand_104, (MR_Integer) 2))));
                    MR_Word next_value_of_Goal_4 = SubGoal_176;

                    // direct tailcall eliminated
                    ;
                    Goal_4 = next_value_of_Goal_4;
                    continue;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_cases_3_p_0(
  MR_Word HeadVar__1_1,
  MR_ArrayPtr STATE_VARIABLE_VarUses_0_2,
  MR_ArrayPtr * STATE_VARIABLE_VarUses_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_VarUses_3 = STATE_VARIABLE_VarUses_0_2;
    else
    {
      MR_Word Case_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_7, (MR_Integer) 2))));
      MR_ArrayPtr STATE_VARIABLE_VarUses_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_VarUses_0_2;

      transform_hlds__lambda__find_used_vars_in_goal_3_p_0(Goal_12, STATE_VARIABLE_VarUses_0_2, &STATE_VARIABLE_VarUses_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cases_8;
      next_value_of_STATE_VARIABLE_VarUses_0_2 = STATE_VARIABLE_VarUses_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_VarUses_0_2 = next_value_of_STATE_VARIABLE_VarUses_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__lambda__find_used_vars_in_goals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_ArrayPtr STATE_VARIABLE_VarUses_0_2,
  MR_ArrayPtr * STATE_VARIABLE_VarUses_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_VarUses_3 = STATE_VARIABLE_VarUses_0_2;
    else
    {
      MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_ArrayPtr STATE_VARIABLE_VarUses_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_VarUses_0_2;

      transform_hlds__lambda__find_used_vars_in_goal_3_p_0(Goal_7, STATE_VARIABLE_VarUses_0_2, &STATE_VARIABLE_VarUses_12_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_8;
      next_value_of_STATE_VARIABLE_VarUses_0_2 = STATE_VARIABLE_VarUses_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_VarUses_0_2 = next_value_of_STATE_VARIABLE_VarUses_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__lambda__mark_vars_as_used_3_p_0(
  MR_Word HeadVar__1_1,
  MR_ArrayPtr STATE_VARIABLE_VarUses_0_2,
  MR_ArrayPtr * STATE_VARIABLE_VarUses_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_VarUses_3 = STATE_VARIABLE_VarUses_0_2;
    else
    {
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_ArrayPtr STATE_VARIABLE_VarUses_12_12;
      MR_Integer Var_18;
      MR_ArrayPtr conv0_STATE_VARIABLE_VarUses_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_VarUses_0_2;

      Var_18 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_7);
      mercury__array__set_4_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), Var_18, ((MR_Box) ((MR_Integer) 1)), (MR_ArrayPtr) (STATE_VARIABLE_VarUses_0_2), &conv0_STATE_VARIABLE_VarUses_12_12);
      STATE_VARIABLE_VarUses_12_12 = (MR_ArrayPtr) (conv0_STATE_VARIABLE_VarUses_12_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_8;
      next_value_of_STATE_VARIABLE_VarUses_0_2 = STATE_VARIABLE_VarUses_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_VarUses_0_2 = next_value_of_STATE_VARIABLE_VarUses_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__lambda__filter_vartypes_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevVarTypes_0_2,
  MR_Word * STATE_VARIABLE_RevVarTypes_3,
  MR_ArrayPtr HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevVarTypes_3 = STATE_VARIABLE_RevVarTypes_0_2;
    else
    {
      MR_Word VarType_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word VarTypes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarType_9, (MR_Integer) 0))));
      MR_Integer VarNum_15;
      MR_Word Used_16;
      MR_Word STATE_VARIABLE_RevVarTypes_19_19;
      MR_Box conv0_Used_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevVarTypes_0_2;

      VarNum_15 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_13);
      mercury__array__unsafe_lookup_3_p_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_ArrayPtr) (HeadVar__4_4), VarNum_15, &conv0_Used_16);
      Used_16 = ((MR_Word) (conv0_Used_16));
      switch (Used_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_RevVarTypes_19_19 = STATE_VARIABLE_RevVarTypes_0_2;
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_RevVarTypes_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevVarTypes_19_19, 0) = ((MR_Box) (VarType_9));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevVarTypes_19_19, 1) = ((MR_Box) (STATE_VARIABLE_RevVarTypes_0_2));
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = VarTypes_10;
      next_value_of_STATE_VARIABLE_RevVarTypes_0_2 = STATE_VARIABLE_RevVarTypes_19_19;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevVarTypes_0_2 = next_value_of_STATE_VARIABLE_RevVarTypes_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__lambda__unify_modes_to_modes_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word UnifyMode_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word UnifyModes_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Mode_5;
    MR_Word Modes_6;
    MR_Word RHSInit_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyMode_3, (MR_Integer) 2))));

    {
      Mode_5 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Mode_5, 0) = ((MR_Box) (RHSInit_9));
      MR_hl_field(MR_mktag(0), Mode_5, 1) = ((MR_Box) (RHSInit_9));
    }
    transform_hlds__lambda__unify_modes_to_modes_2_p_0(UnifyModes_4, &Modes_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Mode_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Modes_6));
    }
  }
}

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_20;

    transform_hlds__lambda__expand_lambdas_in_proc_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_20);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_20));
  }
}

void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_Word PredInfo_6;
    MR_Word ProcIds_7;
    MR_Word Var_10;
    MR_Box conv1_STATE_VARIABLE_ModuleInfo_9;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_8, PredId_4, &PredInfo_6);
    ProcIds_7 = hlds__hlds_pred__pred_info_procids_1_f_0(PredInfo_6);
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&transform_hlds__lambda_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (transform_hlds__lambda__expand_lambdas_in_pred_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (PredId_4));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_10, ProcIds_7, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_8)), &conv1_STATE_VARIABLE_ModuleInfo_9);
    *STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_9));
  }
}

static void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_module_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_9;

    transform_hlds__lambda__expand_lambdas_in_pred_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_9));
  }
}

void MR_CALL 
transform_hlds__lambda__expand_lambdas_in_module_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6)
{
  {
    MR_Word PredIds_4;
    MR_Word STATE_VARIABLE_ModuleInfo_8_8;
    MR_Box conv1_STATE_VARIABLE_ModuleInfo_8_8;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_5, &PredIds_4);
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__lambda_scalar_common_2[1]), PredIds_4, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_5)), &conv1_STATE_VARIABLE_ModuleInfo_8_8);
    STATE_VARIABLE_ModuleInfo_8_8 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_8_8));
    hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(STATE_VARIABLE_ModuleInfo_8_8, STATE_VARIABLE_ModuleInfo_6);
  }
}

static MR_bool MR_CALL 
transform_hlds__lambda____Unify____lambda_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__lambda____Unify____lambda_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lambda____Compare____lambda_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__lambda____Compare____lambda_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__lambda____Unify____reg_wrapper_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__lambda____Unify____reg_wrapper_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__lambda____Compare____reg_wrapper_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__lambda____Compare____reg_wrapper_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module transform_hlds.lambda.
