/*
** Automatically generated from `polymorphism.m'
** by the Mercury compiler,
** version 22.01-beta-2022-02-12
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


// :- module check_hlds.polymorphism.
// :- implementation.

/*
INIT mercury__check_hlds__polymorphism__init
ENDINIT
*/

#include "check_hlds.polymorphism.mih"


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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.clause_to_proc.mih"
#include "check_hlds.introduce_exists_casts.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.polymorphism_info.mih"
#include "check_hlds.polymorphism_lambda.mih"
#include "check_hlds.polymorphism_type_class_info.mih"
#include "check_hlds.polymorphism_type_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.from_ground_term_util.mih"
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
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__hlds__hlds_args__pti_proc_arg_vector_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__hlds__hlds_args__pti_proc_arg_vector_1__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__polymorphism__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__fixup_lambda_quantification__2118__1_2_p_0(
  MR_Word VarTypes0_19,
  MR_Word LambdaHeadVar__1_38);

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_new_call__1995__1_3_p_0(
  MR_Word CalleeRttiVarMaps_31,
  MR_Word LambdaHeadVar__1_67,
  MR_Word * LambdaHeadVar__2_68);

static MR_Word MR_CALL 
check_hlds__polymorphism__IntroducedFrom__func__polymorphism_process_foreign_proc_args__1654__1_1_f_0(
  MR_Word LambdaHeadVar__1_55);

static MR_Word MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_111_108_121_109_111_114_112_104_105_115_109_95_112_114_111_99_101_115_115_95_102_111_114_101_105_103_110_95_112_114_111_99_95_97_114_103_115_95_95_49_54_53_52_95_95_49_95_95_91_49_93_95_48_1_f_0(void);

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_foreign_proc_args__1640__1_2_p_0(
  MR_Word ExistQVars_10,
  MR_Word HeadVar__2_72);

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__409__1_2_p_0(
  MR_Word SafeToContinue_6,
  MR_Word HeadVar__2_20);

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__407__1_2_p_0(
  MR_Word Specs_7,
  MR_Word HeadVar__2_16);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_new_call_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_new_call_12_p_0(
  MR_Word CalleePredInfo_13,
  MR_Word CalleeProcInfo_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word CallArgs0_17,
  MR_Word BuiltinState_18,
  MR_Word MaybeCallUnifyContext_19,
  MR_Word SymName_20,
  MR_Word GoalInfo0_21,
  MR_Word * Goal_22,
  MR_Word STATE_VARIABLE_Info_0_62,
  MR_Word * STATE_VARIABLE_Info_63);

static MR_String MR_CALL 
check_hlds__polymorphism__underscore_and_tvar_name_2_f_0(
  MR_Word TypeVarSet_4,
  MR_Word TVar_5);

static void MR_CALL 
check_hlds__polymorphism__foreign_proc_add_typeinfo_8_p_0(
  MR_String InOut_9,
  MR_Word Mode_10,
  MR_Word Impl_11,
  MR_Word TypeVarSet_12,
  MR_Word TVar_13,
  MR_Word * MaybeArgNameBox_14,
  MR_Integer STATE_VARIABLE_N_0_20,
  MR_Integer * STATE_VARIABLE_N_21);

static MR_Box MR_CALL 
check_hlds__polymorphism__foreign_proc_add_typeclass_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__polymorphism__foreign_proc_add_typeclass_info_5_p_0(
  MR_Word Mode_6,
  MR_Word Impl_7,
  MR_Word TypeVarSet_8,
  MR_Word Constraint_9,
  MR_Word * MaybeArgNameBox_10);

static MR_Word MR_CALL 
check_hlds__polymorphism__get_constrained_vars_1_f_0(
  MR_Word Constraint_3);

static void MR_CALL 
check_hlds__polymorphism__var_as_type_info_locn_2_p_0(
  MR_Word Var_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
check_hlds__polymorphism__add_extra_arg_modes_to_proc_3_p_0(
  MR_Word ExtraArgModes_4,
  MR_Word STATE_VARIABLE_ProcInfo_0_9,
  MR_Word * STATE_VARIABLE_ProcInfo_10);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_clause_10_p_0(
  MR_Word PredInfo0_11,
  MR_Word OldHeadVars_12,
  MR_Word NewHeadVars_13,
  MR_Word UnconstrainedTVars_14,
  MR_Word ExtraTypeInfoHeadVars_15,
  MR_Word ExistTypeClassInfoHeadVars_16,
  MR_Word STATE_VARIABLE_Clause_0_24,
  MR_Word * STATE_VARIABLE_Clause_25,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_Info_0_108,
  MR_Word * STATE_VARIABLE_Info_109);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_fgti_goals_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ConstructOrderMarkedGoals_0_2,
  MR_Word * STATE_VARIABLE_ConstructOrderMarkedGoals_3,
  MR_Word STATE_VARIABLE_InvariantsStatus_0_4,
  MR_Word * STATE_VARIABLE_InvariantsStatus_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_cases_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word InitialSnapshot_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_disj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word InitialSnapshot_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_par_conj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word InitialSnapshot_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_plain_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_unify_functor_11_p_0(
  MR_Word X0_12,
  MR_Word ConsId0_13,
  MR_Word ArgVars0_14,
  MR_Word Mode0_15,
  MR_Word Unification0_16,
  MR_Word UnifyContext_17,
  MR_Word GoalInfo0_18,
  MR_Word * Goal_19,
  MR_Word * Changed_20,
  MR_Word STATE_VARIABLE_Info_0_67,
  MR_Word * STATE_VARIABLE_Info_68);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_unify_9_p_0(
  MR_Word LHSVar_10,
  MR_Word RHS0_11,
  MR_Word Mode_12,
  MR_Word Unification0_13,
  MR_Word UnifyContext_14,
  MR_Word GoalInfo0_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_from_ground_term_initial_6_p_0(
  MR_Word TermVar_7,
  MR_Word GoalInfo0_8,
  MR_Word SubGoal0_9,
  MR_Word * GoalExpr_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static MR_Box MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_6_p_0(
  MR_Word PredInfo_7,
  MR_Word GoalExpr0_8,
  MR_Word GoalInfo0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_call_8_p_0(
  MR_Word PredId_9,
  MR_Word ArgVars0_10,
  MR_Word GoalInfo0_11,
  MR_Word * GoalInfo_12,
  MR_Word * ExtraVars_13,
  MR_Word * ExtraGoals_14,
  MR_Word STATE_VARIABLE_Info_0_71,
  MR_Word * STATE_VARIABLE_Info_72);

static MR_Box MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0(
  MR_Word PredInfo_5,
  MR_Word Impl_6,
  MR_Word Vars_7,
  MR_Word * Args_8);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_existq_unify_functor_9_p_0(
  MR_Word CtorDefn_10,
  MR_Word IsExistConstr_11,
  MR_Word ActualArgTypes_12,
  MR_Word ActualRetType_13,
  MR_Word GoalInfo_14,
  MR_Word * ExtraVars_15,
  MR_Word * ExtraGoals_16,
  MR_Word STATE_VARIABLE_Info_0_51,
  MR_Word * STATE_VARIABLE_Info_52);

static MR_bool MR_CALL 
check_hlds__polymorphism__fixup_lambda_quantification_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__polymorphism__fixup_lambda_quantification_9_p_0(
  MR_Word LambdaNonLocals0_10,
  MR_Word ArgVars_11,
  MR_Word ExistQVars_12,
  MR_Word STATE_VARIABLE_Goal_0_34,
  MR_Word * STATE_VARIABLE_Goal_35,
  MR_Word * LambdaTiTciVars_14,
  MR_Word * AllTiTciGoalVars_15,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37);

static void MR_CALL 
check_hlds__polymorphism__unification_typeinfos_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism__unification_typeinfos_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__polymorphism__unification_typeinfos_8_p_0(
  MR_Word Type_9,
  MR_Word STATE_VARIABLE_Unification_0_18,
  MR_Word * STATE_VARIABLE_Unification_19,
  MR_Word STATE_VARIABLE_GoalInfo_0_20,
  MR_Word * STATE_VARIABLE_GoalInfo_21,
  MR_Word * Changed_12,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
check_hlds__polymorphism__produce_existq_tvars_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__polymorphism__produce_existq_tvars_9_p_0(
  MR_Word PredInfo_10,
  MR_Word HeadVars_11,
  MR_Word UnconstrainedTVars_12,
  MR_Word TypeInfoHeadVars_13,
  MR_Word ExistTypeClassInfoHeadVars_14,
  MR_Word Goal0_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46);

static void MR_CALL 
check_hlds__polymorphism__maybe_polymorphism_process_pred_7_p_0(
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_SafeToContinue_0_16,
  MR_Word * STATE_VARIABLE_SafeToContinue_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19,
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21);

static void MR_CALL 
check_hlds__polymorphism__unification_typeinfos_rtti_varmaps_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism__unification_typeinfos_rtti_varmaps_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_pred_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_pred_6_p_0(
  MR_Word PredId_7,
  MR_Word * SafeToContinue_8,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30);

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_9_p_0(
  MR_Word PredInfo_10,
  MR_Word STATE_VARIABLE_HeadVars_0_47,
  MR_Word * STATE_VARIABLE_HeadVars_48,
  MR_Word * ExtraArgModes_12,
  MR_Word * UnconstrainedTVars_13,
  MR_Word * ExtraHeadTypeInfoVars_14,
  MR_Word * ExistHeadTypeClassInfoVars_15,
  MR_Word STATE_VARIABLE_Info_0_49,
  MR_Word * STATE_VARIABLE_Info_50);

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_instance_method_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_instance_method_11_p_0(
  MR_Word PredInfo_12,
  MR_Word InstanceMethodConstraints_13,
  MR_Word STATE_VARIABLE_HeadVars_0_36,
  MR_Word * STATE_VARIABLE_HeadVars_37,
  MR_Word * UnconstrainedTVars_15,
  MR_Word * ExtraHeadTypeInfoVars_16,
  MR_Word * ExistHeadTypeClassInfoVars_17,
  MR_Word STATE_VARIABLE_ExtraArgModes_0_38,
  MR_Word * STATE_VARIABLE_ExtraArgModes_39,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41);

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_2_14_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_2_14_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_2_14_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_2_14_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_2_14_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_2_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_2_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_2_14_p_0(
  MR_Word PredInfo_15,
  MR_Word ClassContext_16,
  MR_Word InstanceTVars_17,
  MR_Word UnconstrainedInstanceTVars_18,
  MR_Word UnconstrainedInstanceTypeInfoVars_19,
  MR_Word HeadVars0_20,
  MR_Word * HeadVars_21,
  MR_Word * AllUnconstrainedTVars_22,
  MR_Word * AllExtraHeadTypeInfoVars_23,
  MR_Word * ExistHeadTypeClassInfoVars_24,
  MR_Word STATE_VARIABLE_ExtraArgModes_0_68,
  MR_Word * STATE_VARIABLE_ExtraArgModes_69,
  MR_Word STATE_VARIABLE_Info_0_70,
  MR_Word * STATE_VARIABLE_Info_71);

static void MR_CALL 
check_hlds__polymorphism__get_improved_exists_head_constraints_3_p_0(
  MR_Word ConstraintMap_4,
  MR_Word ExistConstraints_5,
  MR_Word * ActualExistConstraints_6);

static void MR_CALL 
check_hlds__polymorphism__make_head_vars_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TypeVarSet_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
check_hlds__polymorphism__fixup_pred_polymorphism_5_p_0(
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ExistsCastPredIds_0_29,
  MR_Word * STATE_VARIABLE_ExistsCastPredIds_30,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_module_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_module_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);


static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_1[7][2];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_2[1][1];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_3[20][3];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_4[1][10];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_5[2][8];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_6[9][5];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_7[2][7];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_8[6][6];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_9[1][13];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_10[1][11];




static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_1[2]))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_2[0]))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 42))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_3[20][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_scalar_common_1[6]))),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_4[0])),
    ((MR_Box) (check_hlds__polymorphism__polymorphism_process_module_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[0])),
    ((MR_Box) (check_hlds__polymorphism__polymorphism_process_module_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_6[0])),
    ((MR_Box) (check_hlds__polymorphism__setup_headvars_2_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[0])),
    ((MR_Box) (check_hlds__polymorphism__setup_headvars_2_14_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_6[0])),
    ((MR_Box) (check_hlds__polymorphism__setup_headvars_2_14_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[0])),
    ((MR_Box) (check_hlds__polymorphism__setup_headvars_2_14_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_6[0])),
    ((MR_Box) (check_hlds__polymorphism__setup_headvars_2_14_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[0])),
    ((MR_Box) (check_hlds__polymorphism__setup_headvars_2_14_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_8[0])),
    ((MR_Box) (check_hlds__polymorphism__setup_headvars_2_14_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_8[0])),
    ((MR_Box) (check_hlds__polymorphism__setup_headvars_instance_method_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_8[2])),
    ((MR_Box) (check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_6[3])),
    ((MR_Box) (check_hlds__polymorphism__unification_typeinfos_rtti_varmaps_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_8[0])),
    ((MR_Box) (check_hlds__polymorphism__produce_existq_tvars_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[1])),
    ((MR_Box) (check_hlds__polymorphism__unification_typeinfos_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_6[3])),
    ((MR_Box) (check_hlds__polymorphism__unification_typeinfos_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_6[5])),
    ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_6[5])),
    ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_6[7])),
    ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_6[8])),
    ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_4[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0)),
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_5[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_impl_0)),
    ((MR_Box) (&check_hlds__polymorphism__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_6[9][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0)),
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__polymorphism__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_7[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0)),
    ((MR_Box) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_8[6][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__polymorphism__hlds__hlds_args__pti_proc_arg_vector_1__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__polymorphism__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_9[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&check_hlds__polymorphism__hlds__hlds_args__pti_proc_arg_vector_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__polymorphism__hlds__hlds_args__pti_proc_arg_vector_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0)),
    ((MR_Box) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_10[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_impl_0)),
    ((MR_Box) (&check_hlds__polymorphism__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__hlds__hlds_args__pti_proc_arg_vector_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &hlds__hlds_args__hlds__hlds_args__type_ctor_info_proc_arg_vector_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__polymorphism__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__polymorphism__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__polymorphism__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__hlds__hlds_args__pti_proc_arg_vector_1__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &hlds__hlds_args__hlds__hlds_args__type_ctor_info_proc_arg_vector_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__polymorphism__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__polymorphism__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__fixup_lambda_quantification__2118__1_2_p_0(
  MR_Word VarTypes0_19,
  MR_Word LambdaHeadVar__1_38)
{
  {
    MR_bool succeeded;
    MR_Word VarType_28;

    hlds__vartypes__lookup_var_type_3_p_0(VarTypes0_19, LambdaHeadVar__1_38, &VarType_28);
    {
      MR_Word Var_46;

      Var_46 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(VarType_28, Var_46);
    }
    if (!(succeeded))
    {
      MR_Word Var_47;

      Var_47 = parse_tree__builtin_lib_types__typeclass_info_type_0_f_0();
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(VarType_28, Var_47);
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_new_call__1995__1_3_p_0(
  MR_Word CalleeRttiVarMaps_31,
  MR_Word LambdaHeadVar__1_67,
  MR_Word * LambdaHeadVar__2_68)
{
  {
    MR_Word VarInfo_46;

    hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(CalleeRttiVarMaps_31, LambdaHeadVar__1_67, &VarInfo_46);
    switch (MR_tag((MR_Word) VarInfo_46)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_new_call\'/12", (MR_String) "missing rtti_var_info for initialisation pred");
          return;
        }
        break;
      case (MR_Integer) 1:
        *LambdaHeadVar__2_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarInfo_46, (MR_Integer) 0))));
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_new_call\'/12", (MR_String) "unsupported: constraints on initialisation preds");
          return;
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
check_hlds__polymorphism__IntroducedFrom__func__polymorphism_process_foreign_proc_args__1654__1_1_f_0(
  MR_Word LambdaHeadVar__1_55)
{
  {
    MR_Word LambdaHeadVar__2_56;

    LambdaHeadVar__2_56 = check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_111_108_121_109_111_114_112_104_105_115_109_95_112_114_111_99_101_115_115_95_102_111_114_101_105_103_110_95_112_114_111_99_95_97_114_103_115_95_95_49_54_53_52_95_95_49_95_95_91_49_93_95_48_1_f_0();
    return LambdaHeadVar__2_56;
  }
}

static MR_Word MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_111_108_121_109_111_114_112_104_105_115_109_95_112_114_111_99_101_115_115_95_102_111_114_101_105_103_110_95_112_114_111_99_95_97_114_103_115_95_95_49_54_53_52_95_95_49_95_95_91_49_93_95_48_1_f_0(void)
{
  {
    MR_Word LambdaHeadVar__2_56;

    LambdaHeadVar__2_56 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    return LambdaHeadVar__2_56;
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_foreign_proc_args__1640__1_2_p_0(
  MR_Word ExistQVars_10,
  MR_Word HeadVar__2_72)
{
  {
    MR_bool succeeded;

    succeeded = mercury__list__contains_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), ExistQVars_10, ((MR_Box) (HeadVar__2_72)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__409__1_2_p_0(
  MR_Word SafeToContinue_6,
  MR_Word HeadVar__2_20)
{
  {
    MR_bool succeeded = (SafeToContinue_6 == HeadVar__2_20);

    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__407__1_2_p_0(
  MR_Word Specs_7,
  MR_Word HeadVar__2_16)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[0]), ((MR_Box) (Specs_7)), ((MR_Box) (HeadVar__2_16)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_new_call_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_68;

    check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_new_call__1995__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_68);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_68));
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_new_call_12_p_0(
  MR_Word CalleePredInfo_13,
  MR_Word CalleeProcInfo_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word CallArgs0_17,
  MR_Word BuiltinState_18,
  MR_Word MaybeCallUnifyContext_19,
  MR_Word SymName_20,
  MR_Word GoalInfo0_21,
  MR_Word * Goal_22,
  MR_Word STATE_VARIABLE_Info_0_62,
  MR_Word * STATE_VARIABLE_Info_63)
{
  {
    MR_bool succeeded;
    MR_Word TVarSet0_24;
    MR_Word VarTypes0_25;
    MR_Word ActualArgTypes0_26;
    MR_Word PredTVarSet_27;
    MR_Word PredArgTypes_29;
    MR_Word CalleeHeadVars_30;
    MR_Word CalleeRttiVarMaps_31;
    MR_Integer NCallArgs0_32;
    MR_Integer NPredArgs_33;
    MR_Integer NExtraArgs_34;
    MR_Word OrigPredArgTypes_37;
    MR_Word CalleeExtraHeadVars_38;
    MR_Word TVarSet_39;
    MR_Word PredToParentRenaming_40;
    MR_Word OrigParentArgTypes_41;
    MR_Word ParentToActualTSubst_42;
    MR_Word GetTypeInfoTypes_43;
    MR_Word PredTypeInfoTypes_48;
    MR_Word ParentTypeInfoTypes_49;
    MR_Word ActualTypeInfoTypes_50;
    MR_Word Ctxt_51;
    MR_Word ExtraArgsConstArgs_52;
    MR_Word ExtraGoals_53;
    MR_Word ExtraArgs_54;
    MR_Word CallArgs_55;
    MR_Word NonLocals0_56;
    MR_Word NonLocals1_57;
    MR_Word NonLocals_58;
    MR_Word GoalInfo_59;
    MR_Word CallGoalExpr_60;
    MR_Word CallGoal_61;
    MR_Word STATE_VARIABLE_Info_66_66;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word _PredExistQVars_28;
    MR_Word OrigPredArgTypes0_35;
    MR_Word CalleeExtraHeadVars0_36;
    MR_Word TypeInfo_80_80;

    check_hlds__polymorphism_info__poly_info_get_typevarset_2_p_0(STATE_VARIABLE_Info_0_62, &TVarSet0_24);
    check_hlds__polymorphism_info__poly_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_62, &VarTypes0_25);
    hlds__vartypes__lookup_var_types_3_p_0(VarTypes0_25, CallArgs0_17, &ActualArgTypes0_26);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(CalleePredInfo_13, &PredTVarSet_27, &_PredExistQVars_28, &PredArgTypes_29);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(CalleeProcInfo_14, &CalleeHeadVars_30);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(CalleeProcInfo_14, &CalleeRttiVarMaps_31);
    NCallArgs0_32 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ActualArgTypes0_26);
    NPredArgs_33 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), PredArgTypes_29);
    NExtraArgs_34 = (MR_Integer) ((MR_Unsigned) NPredArgs_33 - (MR_Unsigned) NCallArgs0_32);
    succeeded = mercury__list__drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), NExtraArgs_34, PredArgTypes_29, &OrigPredArgTypes0_35);
    if (succeeded)
    {
      TypeInfo_80_80 = (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]);
      succeeded = mercury__list__take_3_p_0(TypeInfo_80_80, NExtraArgs_34, CalleeHeadVars_30, &CalleeExtraHeadVars0_36);
    }
    if (succeeded)
    {
      OrigPredArgTypes_37 = OrigPredArgTypes0_35;
      CalleeExtraHeadVars_38 = CalleeExtraHeadVars0_36;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_new_call\'/12", (MR_String) "extra args not found");
        return;
      }
    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet0_24, PredTVarSet_27, &TVarSet_39, &PredToParentRenaming_40);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(PredToParentRenaming_40, OrigPredArgTypes_37, &OrigParentArgTypes_41);
    parse_tree__prog_type__type_list_subsumes_det_3_p_0(OrigParentArgTypes_41, ActualArgTypes0_26, &ParentToActualTSubst_42);
    check_hlds__polymorphism_info__poly_info_set_typevarset_3_p_0(TVarSet_39, STATE_VARIABLE_Info_0_62, &STATE_VARIABLE_Info_66_66);
    {
      GetTypeInfoTypes_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), GetTypeInfoTypes_43, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_8[5]));
      MR_hl_field(MR_mktag(0), GetTypeInfoTypes_43, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_new_call_12_p_0_1));
      MR_hl_field(MR_mktag(0), GetTypeInfoTypes_43, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), GetTypeInfoTypes_43, 3) = ((MR_Box) (CalleeRttiVarMaps_31));
    }
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), GetTypeInfoTypes_43, CalleeExtraHeadVars_38, &PredTypeInfoTypes_48);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(PredToParentRenaming_40, PredTypeInfoTypes_48, &ParentTypeInfoTypes_49);
    parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(ParentToActualTSubst_42, ParentTypeInfoTypes_49, &ActualTypeInfoTypes_50);
    Ctxt_51 = mercury__term__context_init_0_f_0();
    check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_vars_6_p_0(ActualTypeInfoTypes_50, Ctxt_51, &ExtraArgsConstArgs_52, &ExtraGoals_53, STATE_VARIABLE_Info_66_66, STATE_VARIABLE_Info_63);
    mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[4]), ExtraArgsConstArgs_52, &ExtraArgs_54);
    CallArgs_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ExtraArgs_54, CallArgs0_17);
    NonLocals0_56 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_21);
    NonLocals1_57 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ExtraArgs_54);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals0_56, NonLocals1_57, &NonLocals_58);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_58, GoalInfo0_21, &GoalInfo_59);
    {
      CallGoalExpr_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), CallGoalExpr_60, 0) = ((MR_Box) (PredId_15));
      MR_hl_field(MR_mktag(2), CallGoalExpr_60, 1) = ((MR_Box) (ProcId_16));
      MR_hl_field(MR_mktag(2), CallGoalExpr_60, 2) = ((MR_Box) (CallArgs_55));
      MR_hl_field(MR_mktag(2), CallGoalExpr_60, 3) = (MR_Box) ((MR_Unsigned) (BuiltinState_18));
      MR_hl_field(MR_mktag(2), CallGoalExpr_60, 4) = ((MR_Box) (MaybeCallUnifyContext_19));
      MR_hl_field(MR_mktag(2), CallGoalExpr_60, 5) = ((MR_Box) (SymName_20));
    }
    {
      CallGoal_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CallGoal_61, 0) = ((MR_Box) (CallGoalExpr_60));
      MR_hl_field(MR_mktag(0), CallGoal_61, 1) = ((MR_Box) (GoalInfo_59));
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (CallGoal_61));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraGoals_53, Var_75);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_74, GoalInfo_59, Goal_22);
  }
}

static MR_String MR_CALL 
check_hlds__polymorphism__underscore_and_tvar_name_2_f_0(
  MR_Word TypeVarSet_4,
  MR_Word TVar_5)
{
  {
    MR_String TVarName_6;
    MR_String TVarName0_7;

    mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_4, TVar_5, &TVarName0_7);
    TVarName_6 = mercury__string__f_43_43_2_f_0((MR_String) "_", TVarName0_7);
    return TVarName_6;
  }
}

static void MR_CALL 
check_hlds__polymorphism__foreign_proc_add_typeinfo_8_p_0(
  MR_String InOut_9,
  MR_Word Mode_10,
  MR_Word Impl_11,
  MR_Word TypeVarSet_12,
  MR_Word TVar_13,
  MR_Word * MaybeArgNameBox_14,
  MR_Integer STATE_VARIABLE_N_0_20,
  MR_Integer * STATE_VARIABLE_N_21)
{
  {
    MR_bool succeeded;
    MR_Word MaybeArgName_19;
    MR_String TypeVarName_16;

    succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_12, TVar_13, &TypeVarName_16);
    if (succeeded)
    {
      MR_String OldCVarName_17;
      MR_String NewCVarName_18;
      MR_String Var_24;
      MR_String Var_25;
      MR_String Var_27;

      OldCVarName_17 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_for_", TypeVarName_16);
      Var_27 = mercury__string__int_to_string_1_f_0(STATE_VARIABLE_N_0_20);
      Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_27);
      Var_24 = mercury__string__f_43_43_2_f_0(InOut_9, Var_25);
      NewCVarName_18 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_", Var_24);
      succeeded = hlds__goal_util__foreign_proc_uses_variable_2_p_0(Impl_11, OldCVarName_17);
      if (!(succeeded))
        succeeded = hlds__goal_util__foreign_proc_uses_variable_2_p_0(Impl_11, NewCVarName_18);
      if (succeeded)
      {
        MR_Word Var_28;

        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (OldCVarName_17));
          MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (Mode_10));
        }
        {
          MaybeArgName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeArgName_19, 0) = ((MR_Box) (Var_28));
        }
      }
      else
        MaybeArgName_19 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
      MaybeArgName_19 = (MR_Word) ((MR_Unsigned) 0U);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *MaybeArgNameBox_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeArgName_19));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    *STATE_VARIABLE_N_21 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_20 + (MR_Unsigned) 1);
  }
}

static MR_Box MR_CALL 
check_hlds__polymorphism__foreign_proc_add_typeclass_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_TVarName_6;

    conv0_TVarName_6 = check_hlds__polymorphism__underscore_and_tvar_name_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_TVarName_6));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__polymorphism__foreign_proc_add_typeclass_info_5_p_0(
  MR_Word Mode_6,
  MR_Word Impl_7,
  MR_Word TypeVarSet_8,
  MR_Word Constraint_9,
  MR_Word * MaybeArgNameBox_10)
{
  {
    MR_bool succeeded;
    MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_9, (MR_Integer) 0))));
    MR_Word Types_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_9, (MR_Integer) 1))));
    MR_String Name_13;
    MR_Word TypeVars_14;
    MR_Word TypeVarNames_15;
    MR_String ConstraintVarName_16;
    MR_Word MaybeArgName_17;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_22;

    Name_13 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(SymName_11, (MR_String) "__");
    parse_tree__prog_type__type_vars_list_2_p_0(Types_12, &TypeVars_14);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_8[4]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (check_hlds__polymorphism__foreign_proc_add_typeclass_info_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (TypeVarSet_8));
    }
    TypeVarNames_15 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_19, TypeVars_14);
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Name_13));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (TypeVarNames_15));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) ((MR_String) "TypeClassInfo_for_"));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
    }
    mercury__string__append_list_2_p_0(Var_20, &ConstraintVarName_16);
    succeeded = hlds__goal_util__foreign_proc_uses_variable_2_p_0(Impl_7, ConstraintVarName_16);
    if (succeeded)
    {
      MR_Word Var_23;

      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (ConstraintVarName_16));
        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (Mode_6));
      }
      {
        MaybeArgName_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeArgName_17, 0) = ((MR_Box) (Var_23));
      }
    }
    else
      MaybeArgName_17 = (MR_Word) ((MR_Unsigned) 0U);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *MaybeArgNameBox_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeArgName_17));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
  }
}

static MR_Word MR_CALL 
check_hlds__polymorphism__get_constrained_vars_1_f_0(
  MR_Word Constraint_3)
{
  {
    MR_Word CVars_4;
    MR_Word CTypes_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_3, (MR_Integer) 1))));

    parse_tree__prog_type__type_vars_list_2_p_0(CTypes_6, &CVars_4);
    return CVars_4;
  }
}

static void MR_CALL 
check_hlds__polymorphism__var_as_type_info_locn_2_p_0(
  MR_Word Var_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__2_2 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_3));
  }
}

static void MR_CALL 
check_hlds__polymorphism__add_extra_arg_modes_to_proc_3_p_0(
  MR_Word ExtraArgModes_4,
  MR_Word STATE_VARIABLE_ProcInfo_0_9,
  MR_Word * STATE_VARIABLE_ProcInfo_10)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(STATE_VARIABLE_ProcInfo_0_9);
    if (succeeded)
    {
      MR_Word ArgModes1_6;
      MR_Word ExtraArgModesList_7;
      MR_Word ArgModes_8;

      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_0_9, &ArgModes1_6);
      ExtraArgModesList_7 = hlds__hlds_args__poly_arg_vector_to_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ExtraArgModes_4);
      ArgModes_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ExtraArgModesList_7, ArgModes1_6);
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(ArgModes_8, STATE_VARIABLE_ProcInfo_0_9, STATE_VARIABLE_ProcInfo_10);
    }
    else
      *STATE_VARIABLE_ProcInfo_10 = STATE_VARIABLE_ProcInfo_0_9;
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_clause_10_p_0(
  MR_Word PredInfo0_11,
  MR_Word OldHeadVars_12,
  MR_Word NewHeadVars_13,
  MR_Word UnconstrainedTVars_14,
  MR_Word ExtraTypeInfoHeadVars_15,
  MR_Word ExistTypeClassInfoHeadVars_16,
  MR_Word STATE_VARIABLE_Clause_0_24,
  MR_Word * STATE_VARIABLE_Clause_25,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_11);
    if (succeeded)
    {
      *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
      *STATE_VARIABLE_Clause_25 = STATE_VARIABLE_Clause_0_24;
    }
    else
    {
      MR_Word Goal0_19;
      MR_Word Goal1_20;
      MR_Word Goal2_21;
      MR_Word ExistQVars_22;
      MR_Word Goal_23;
      MR_Word STATE_VARIABLE_Info_28_28;
      MR_Word STATE_VARIABLE_Info_30_30;
      MR_Word STATE_VARIABLE_Info_31_31;
      MR_Word STATE_VARIABLE_Info_32_32;
      MR_Word RttiVarMaps0_47;
      MR_Integer NumReuses_48;
      MR_Word MustRequantify_49;
      MR_Word Var_35;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;

      Goal0_19 = hlds__hlds_clauses__clause_body_1_f_0(STATE_VARIABLE_Clause_0_24);
      check_hlds__polymorphism_info__empty_cache_maps_2_p_0(STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_28_28);
      check_hlds__polymorphism_info__poly_info_set_num_reuses_3_p_0((MR_Integer) 0, STATE_VARIABLE_Info_28_28, &STATE_VARIABLE_Info_30_30);
      check_hlds__polymorphism__polymorphism_process_goal_4_p_0(Goal0_19, &Goal1_20, STATE_VARIABLE_Info_30_30, &STATE_VARIABLE_Info_31_31);
      check_hlds__polymorphism__produce_existq_tvars_9_p_0(PredInfo0_11, OldHeadVars_12, UnconstrainedTVars_14, ExtraTypeInfoHeadVars_15, ExistTypeClassInfoHeadVars_16, Goal1_20, &Goal2_21, STATE_VARIABLE_Info_31_31, &STATE_VARIABLE_Info_32_32);
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo0_11, &ExistQVars_22);
      succeeded = (ExistQVars_22 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_32_32, &RttiVarMaps0_47);
        succeeded = hlds__hlds_rtti__rtti_varmaps_no_tvars_1_p_0(RttiVarMaps0_47);
        if (succeeded)
        {
          check_hlds__polymorphism_info__poly_info_get_num_reuses_2_p_0(STATE_VARIABLE_Info_32_32, &NumReuses_48);
          succeeded = (NumReuses_48 == (MR_Integer) 0);
          if (succeeded)
          {
            check_hlds__polymorphism_info__poly_info_get_must_requantify_2_p_0(STATE_VARIABLE_Info_32_32, &MustRequantify_49);
            succeeded = (MustRequantify_49 == (MR_Integer) 0);
          }
        }
      }
      if (succeeded)
      {
        Goal_23 = Goal2_21;
        *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_32_32;
      }
      else
      {
        MR_Word VarSet0_50;
        MR_Word VarTypes0_51;
        MR_Word OutsideVars_52;
        MR_Word VarSet_54;
        MR_Word VarTypes_55;
        MR_Word RttiVarMaps_56;
        MR_Word Var_58;
        MR_Word RttiVarMaps0_60;
        MR_Word _Warnings_53;

        check_hlds__polymorphism_info__poly_info_get_varset_2_p_0(STATE_VARIABLE_Info_32_32, &VarSet0_50);
        check_hlds__polymorphism_info__poly_info_get_var_types_2_p_0(STATE_VARIABLE_Info_32_32, &VarTypes0_51);
        check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_32_32, &RttiVarMaps0_60);
        OutsideVars_52 = hlds__hlds_args__proc_arg_vector_to_set_1_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), NewHeadVars_13);
        Var_58 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_52);
        hlds__quantification__implicitly_quantify_goal_general_11_p_0((MR_Integer) 0, Var_58, &_Warnings_53, Goal2_21, &Goal_23, VarSet0_50, &VarSet_54, VarTypes0_51, &VarTypes_55, RttiVarMaps0_60, &RttiVarMaps_56);
        check_hlds__polymorphism_info__poly_info_set_varset_types_rtti_5_p_0(VarSet_54, VarTypes_55, RttiVarMaps_56, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_27);
      }
      Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Clause_0_24, (MR_Integer) 0))));
      Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Clause_0_24, (MR_Integer) 2))));
      Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Clause_0_24, (MR_Integer) 3))));
      Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Clause_0_24, (MR_Integer) 4))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Clause_25 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Goal_23));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_39));
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_Info_0_108,
  MR_Word * STATE_VARIABLE_Info_109)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 0))));
    MR_Word GoalInfo0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_56 = (MR_Word) ((MR_Word) (GoalExpr0_8));
          MR_Word SubGoal_57;
          MR_Word STATE_VARIABLE_Info_158_158;
          MR_Word STATE_VARIABLE_Info_159_159;
          MR_Word InitialSnapshot_192;
          MR_Word GoalExpr_233;

          check_hlds__polymorphism_info__get_cache_maps_snapshot_4_p_0((MR_String) "neg", &InitialSnapshot_192, STATE_VARIABLE_Info_0_108, &STATE_VARIABLE_Info_158_158);
          check_hlds__polymorphism__polymorphism_process_goal_4_p_0(SubGoal0_56, &SubGoal_57, STATE_VARIABLE_Info_158_158, &STATE_VARIABLE_Info_159_159);
          check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "after neg", InitialSnapshot_192, STATE_VARIABLE_Info_159_159, STATE_VARIABLE_Info_109);
          GoalExpr_233 = (MR_Word) ((MR_Word) (SubGoal_57));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_233));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHSVar_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 0))));
          MR_Word RHS_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 1))));
          MR_Word Mode_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 2))));
          MR_Word Unification_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 3))));
          MR_Word UnifyContext_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 4))));

          check_hlds__polymorphism__polymorphism_process_unify_9_p_0(LHSVar_39, RHS_40, Mode_41, Unification_42, UnifyContext_43, GoalInfo0_9, Goal_6, STATE_VARIABLE_Info_0_108, STATE_VARIABLE_Info_109);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 0))));
          MR_Word ArgVars0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 2))));
          MR_Word GoalInfo_21;
          MR_Word ExtraVars_22;
          MR_Word ExtraGoals_23;
          MR_Word ArgVars_24;
          MR_Word CallExpr_25;
          MR_Word Call_26;
          MR_Word GoalList_27;
          MR_Word Var_185;
          MR_Word Var_223;
          MR_Integer Var_224;
          MR_Word Var_226;
          MR_Word Var_227;
          MR_Word Var_228;

          check_hlds__polymorphism__polymorphism_process_call_8_p_0(PredId_15, ArgVars0_17, GoalInfo0_9, &GoalInfo_21, &ExtraVars_22, &ExtraGoals_23, STATE_VARIABLE_Info_0_108, STATE_VARIABLE_Info_109);
          ArgVars_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ExtraVars_22, ArgVars0_17);
          Var_223 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 0))));
          Var_224 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 1))));
          Var_226 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 3))) & (MR_Integer) 1);
          Var_227 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 4))));
          Var_228 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 5))));
          {
            CallExpr_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), CallExpr_25, 0) = ((MR_Box) (Var_223));
            MR_hl_field(MR_mktag(2), CallExpr_25, 1) = ((MR_Box) (Var_224));
            MR_hl_field(MR_mktag(2), CallExpr_25, 2) = ((MR_Box) (ArgVars_24));
            MR_hl_field(MR_mktag(2), CallExpr_25, 3) = (MR_Box) ((MR_Unsigned) (Var_226));
            MR_hl_field(MR_mktag(2), CallExpr_25, 4) = ((MR_Box) (Var_227));
            MR_hl_field(MR_mktag(2), CallExpr_25, 5) = ((MR_Box) (Var_228));
          }
          {
            Call_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Call_26, 0) = ((MR_Box) (CallExpr_25));
            MR_hl_field(MR_mktag(0), Call_26, 1) = ((MR_Box) (GoalInfo_21));
          }
          {
            Var_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_185, 0) = ((MR_Box) (Call_26));
            MR_hl_field(MR_mktag(1), Var_185, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          GoalList_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraGoals_23, Var_185);
          hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_27, GoalInfo0_9, Goal_6);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *Goal_6 = Goal0_5;
              *STATE_VARIABLE_Info_109 = STATE_VARIABLE_Info_0_108;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ModuleInfo_34;
              MR_Word PredInfo_35;
              MR_Word PredModule_36;
              MR_String PredName_37;
              MR_Integer PredArity_38;
              MR_Word PredId_187 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));

              check_hlds__polymorphism_info__poly_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_108, &ModuleInfo_34);
              hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_34, PredId_187, &PredInfo_35);
              PredModule_36 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_35);
              PredName_37 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_35);
              PredArity_38 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_35);
              succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(PredModule_36, PredName_37, PredArity_38);
              if (succeeded)
              {
                *Goal_6 = Goal0_5;
                *STATE_VARIABLE_Info_109 = STATE_VARIABLE_Info_0_108;
              }
              else
                check_hlds__polymorphism__polymorphism_process_foreign_proc_6_p_0(PredInfo_35, GoalExpr0_8, GoalInfo0_9, Goal_6, STATE_VARIABLE_Info_0_108, STATE_VARIABLE_Info_109);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word Goals_46;
              MR_Word GoalExpr_48;

              switch (ConjType_44) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word InitialSnapshot_47;
                    MR_Word STATE_VARIABLE_Info_179_179;

                    check_hlds__polymorphism_info__get_cache_maps_snapshot_4_p_0((MR_String) "parconj", &InitialSnapshot_47, STATE_VARIABLE_Info_0_108, &STATE_VARIABLE_Info_179_179);
                    check_hlds__polymorphism__polymorphism_process_par_conj_5_p_0(Goals0_45, &Goals_46, InitialSnapshot_47, STATE_VARIABLE_Info_179_179, STATE_VARIABLE_Info_109);
                  }
                  break;
                case (MR_Integer) 0:
                  check_hlds__polymorphism__polymorphism_process_plain_conj_4_p_0(Goals0_45, &Goals_46, STATE_VARIABLE_Info_0_108, STATE_VARIABLE_Info_109);
                  break;
              }
              {
                GoalExpr_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_48, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr_48, 1) = (MR_Box) ((MR_Unsigned) (ConjType_44));
                MR_hl_field(MR_mktag(3), GoalExpr_48, 2) = ((MR_Box) (Goals_46));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_48));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word STATE_VARIABLE_Info_174_174;
              MR_Word STATE_VARIABLE_Info_175_175;
              MR_Word Goals0_188 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word Goals_189;
              MR_Word InitialSnapshot_190;
              MR_Word GoalExpr_231;

              check_hlds__polymorphism_info__get_cache_maps_snapshot_4_p_0((MR_String) "disj", &InitialSnapshot_190, STATE_VARIABLE_Info_0_108, &STATE_VARIABLE_Info_174_174);
              check_hlds__polymorphism__polymorphism_process_disj_5_p_0(Goals0_188, &Goals_189, InitialSnapshot_190, STATE_VARIABLE_Info_174_174, &STATE_VARIABLE_Info_175_175);
              check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "after disj", InitialSnapshot_190, STATE_VARIABLE_Info_175_175, STATE_VARIABLE_Info_109);
              {
                GoalExpr_231 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_231, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExpr_231, 1) = ((MR_Box) (Goals_189));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_231));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word CanFail_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3))));
              MR_Word Cases_61;
              MR_Word STATE_VARIABLE_Info_153_153;
              MR_Word STATE_VARIABLE_Info_154_154;
              MR_Word InitialSnapshot_193;
              MR_Word GoalExpr_235;

              check_hlds__polymorphism_info__get_cache_maps_snapshot_4_p_0((MR_String) "switch", &InitialSnapshot_193, STATE_VARIABLE_Info_0_108, &STATE_VARIABLE_Info_153_153);
              check_hlds__polymorphism__polymorphism_process_cases_5_p_0(Cases0_60, &Cases_61, InitialSnapshot_193, STATE_VARIABLE_Info_153_153, &STATE_VARIABLE_Info_154_154);
              check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "after switch", InitialSnapshot_193, STATE_VARIABLE_Info_154_154, STATE_VARIABLE_Info_109);
              {
                GoalExpr_235 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_235, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_235, 1) = ((MR_Box) (Var_58));
                MR_hl_field(MR_mktag(3), GoalExpr_235, 2) = (MR_Box) ((MR_Unsigned) (CanFail_59));
                MR_hl_field(MR_mktag(3), GoalExpr_235, 3) = ((MR_Box) (Cases_61));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_235));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason0_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word SubGoal0_207 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word GoalExpr_234;

              switch (MR_tag((MR_Word) Reason0_62)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word STATE_VARIABLE_Info_140_140;
                    MR_Word STATE_VARIABLE_Info_141_141;
                    MR_Word InitialSnapshot_200;
                    MR_Word SubGoal_201;

                    check_hlds__polymorphism_info__get_cache_maps_snapshot_4_p_0((MR_String) "exists", &InitialSnapshot_200, STATE_VARIABLE_Info_0_108, &STATE_VARIABLE_Info_140_140);
                    check_hlds__polymorphism__polymorphism_process_goal_4_p_0(SubGoal0_207, &SubGoal_201, STATE_VARIABLE_Info_140_140, &STATE_VARIABLE_Info_141_141);
                    check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "after exists", InitialSnapshot_200, STATE_VARIABLE_Info_141_141, STATE_VARIABLE_Info_109);
                    {
                      GoalExpr_234 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_234, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), GoalExpr_234, 1) = ((MR_Box) (Reason0_62));
                      MR_hl_field(MR_mktag(3), GoalExpr_234, 2) = ((MR_Box) (SubGoal_201));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word SubGoal_199;

                    check_hlds__polymorphism__polymorphism_process_goal_4_p_0(SubGoal0_207, &SubGoal_199, STATE_VARIABLE_Info_0_108, STATE_VARIABLE_Info_109);
                    {
                      GoalExpr_234 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_234, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), GoalExpr_234, 1) = ((MR_Box) (Reason0_62));
                      MR_hl_field(MR_mktag(3), GoalExpr_234, 2) = ((MR_Box) (SubGoal_199));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word STATE_VARIABLE_Info_146_146;
                    MR_Word STATE_VARIABLE_Info_147_147;
                    MR_Word InitialSnapshot_197;
                    MR_Word SubGoal_198;

                    check_hlds__polymorphism_info__get_cache_maps_snapshot_4_p_0((MR_String) "promise_solns", &InitialSnapshot_197, STATE_VARIABLE_Info_0_108, &STATE_VARIABLE_Info_146_146);
                    check_hlds__polymorphism__polymorphism_process_goal_4_p_0(SubGoal0_207, &SubGoal_198, STATE_VARIABLE_Info_146_146, &STATE_VARIABLE_Info_147_147);
                    check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "after promise_solns", InitialSnapshot_197, STATE_VARIABLE_Info_147_147, STATE_VARIABLE_Info_109);
                    {
                      GoalExpr_234 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_234, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), GoalExpr_234, 1) = ((MR_Box) (Reason0_62));
                      MR_hl_field(MR_mktag(3), GoalExpr_234, 2) = ((MR_Box) (SubGoal_198));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason0_62, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 8:
                      {
                        MR_Word SubGoal_199;

                        check_hlds__polymorphism__polymorphism_process_goal_4_p_0(SubGoal0_207, &SubGoal_199, STATE_VARIABLE_Info_0_108, STATE_VARIABLE_Info_109);
                        {
                          GoalExpr_234 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_234, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(MR_mktag(3), GoalExpr_234, 1) = ((MR_Box) (Reason0_62));
                          MR_hl_field(MR_mktag(3), GoalExpr_234, 2) = ((MR_Box) (SubGoal_199));
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word TermVar_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_62, (MR_Integer) 1))));
                        MR_Word Kind_64 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason0_62, (MR_Integer) 2))) & (MR_Integer) 3);

                        switch (Kind_64) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                          case (MR_Integer) 2:
                          case (MR_Integer) 3:
                            {
                              MR_Word SubGoal_194;

                              check_hlds__polymorphism__polymorphism_process_goal_4_p_0(SubGoal0_207, &SubGoal_194, STATE_VARIABLE_Info_0_108, STATE_VARIABLE_Info_109);
                              {
                                GoalExpr_234 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), GoalExpr_234, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                                MR_hl_field(MR_mktag(3), GoalExpr_234, 1) = ((MR_Box) (Reason0_62));
                                MR_hl_field(MR_mktag(3), GoalExpr_234, 2) = ((MR_Box) (SubGoal_194));
                              }
                            }
                            break;
                          case (MR_Integer) 0:
                            check_hlds__polymorphism__polymorphism_process_from_ground_term_initial_6_p_0(TermVar_63, GoalInfo0_9, SubGoal0_207, &GoalExpr_234, STATE_VARIABLE_Info_0_108, STATE_VARIABLE_Info_109);
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Word STATE_VARIABLE_Info_135_135;
                        MR_Word STATE_VARIABLE_Info_136_136;
                        MR_Word InitialSnapshot_202;
                        MR_Word SubGoal_203;

                        check_hlds__polymorphism_info__get_cache_maps_snapshot_4_p_0((MR_String) "trace", &InitialSnapshot_202, STATE_VARIABLE_Info_0_108, &STATE_VARIABLE_Info_135_135);
                        check_hlds__polymorphism__polymorphism_process_goal_4_p_0(SubGoal0_207, &SubGoal_203, STATE_VARIABLE_Info_135_135, &STATE_VARIABLE_Info_136_136);
                        check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "after trace", InitialSnapshot_202, STATE_VARIABLE_Info_136_136, STATE_VARIABLE_Info_109);
                        {
                          GoalExpr_234 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_234, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(MR_mktag(3), GoalExpr_234, 1) = ((MR_Box) (Reason0_62));
                          MR_hl_field(MR_mktag(3), GoalExpr_234, 2) = ((MR_Box) (SubGoal_203));
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
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_234));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word Cond0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word Then0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3))));
              MR_Word Else0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 4))));
              MR_Word Cond_53;
              MR_Word Then_54;
              MR_Word Else_55;
              MR_Word STATE_VARIABLE_Info_163_163;
              MR_Word STATE_VARIABLE_Info_164_164;
              MR_Word STATE_VARIABLE_Info_166_166;
              MR_Word STATE_VARIABLE_Info_167_167;
              MR_Word STATE_VARIABLE_Info_169_169;
              MR_Word STATE_VARIABLE_Info_170_170;
              MR_Word InitialSnapshot_191;
              MR_Word GoalExpr_232;

              check_hlds__polymorphism_info__get_cache_maps_snapshot_4_p_0((MR_String) "ite", &InitialSnapshot_191, STATE_VARIABLE_Info_0_108, &STATE_VARIABLE_Info_163_163);
              check_hlds__polymorphism__polymorphism_process_goal_4_p_0(Cond0_50, &Cond_53, STATE_VARIABLE_Info_163_163, &STATE_VARIABLE_Info_164_164);
              check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "before then", InitialSnapshot_191, STATE_VARIABLE_Info_164_164, &STATE_VARIABLE_Info_166_166);
              check_hlds__polymorphism__polymorphism_process_goal_4_p_0(Then0_51, &Then_54, STATE_VARIABLE_Info_166_166, &STATE_VARIABLE_Info_167_167);
              check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "before else", InitialSnapshot_191, STATE_VARIABLE_Info_167_167, &STATE_VARIABLE_Info_169_169);
              check_hlds__polymorphism__polymorphism_process_goal_4_p_0(Else0_52, &Else_55, STATE_VARIABLE_Info_169_169, &STATE_VARIABLE_Info_170_170);
              check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "after ite", InitialSnapshot_191, STATE_VARIABLE_Info_170_170, STATE_VARIABLE_Info_109);
              {
                GoalExpr_232 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_232, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_232, 1) = ((MR_Box) (Vars_49));
                MR_hl_field(MR_mktag(3), GoalExpr_232, 2) = ((MR_Box) (Cond_53));
                MR_hl_field(MR_mktag(3), GoalExpr_232, 3) = ((MR_Box) (Then_54));
                MR_hl_field(MR_mktag(3), GoalExpr_232, 4) = ((MR_Box) (Else_55));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_232));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word ShortHand_94;
              MR_Word GoalExpr_219;

              switch (MR_tag((MR_Word) ShortHand0_85)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_goal\'/4", (MR_String) "bi_implication");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_86 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShortHand0_85, (MR_Integer) 0))) & (MR_Integer) 3);
                    MR_Word Outer_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_85, (MR_Integer) 1))));
                    MR_Word Inner_88 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_85, (MR_Integer) 2))));
                    MR_Word MainGoal0_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_85, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_85, (MR_Integer) 5))));
                    MR_Word OrElseInners_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_85, (MR_Integer) 6))));
                    MR_Word MainGoal_92;
                    MR_Word OrElseGoals_93;
                    MR_Word STATE_VARIABLE_Info_129_129;
                    MR_Word STATE_VARIABLE_Info_130_130;
                    MR_Word STATE_VARIABLE_Info_131_131;
                    MR_Word InitialSnapshot_209;
                    MR_Word Vars_210 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_85, (MR_Integer) 3))));

                    check_hlds__polymorphism_info__get_cache_maps_snapshot_4_p_0((MR_String) "atomic", &InitialSnapshot_209, STATE_VARIABLE_Info_0_108, &STATE_VARIABLE_Info_129_129);
                    check_hlds__polymorphism__polymorphism_process_goal_4_p_0(MainGoal0_89, &MainGoal_92, STATE_VARIABLE_Info_129_129, &STATE_VARIABLE_Info_130_130);
                    check_hlds__polymorphism__polymorphism_process_disj_5_p_0(OrElseGoals0_90, &OrElseGoals_93, InitialSnapshot_209, STATE_VARIABLE_Info_130_130, &STATE_VARIABLE_Info_131_131);
                    check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "after atomic", InitialSnapshot_209, STATE_VARIABLE_Info_131_131, STATE_VARIABLE_Info_109);
                    {
                      ShortHand_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ShortHand_94, 0) = (MR_Box) ((MR_Unsigned) (GoalType_86));
                      MR_hl_field(MR_mktag(1), ShortHand_94, 1) = ((MR_Box) (Outer_87));
                      MR_hl_field(MR_mktag(1), ShortHand_94, 2) = ((MR_Box) (Inner_88));
                      MR_hl_field(MR_mktag(1), ShortHand_94, 3) = ((MR_Box) (Vars_210));
                      MR_hl_field(MR_mktag(1), ShortHand_94, 4) = ((MR_Box) (MainGoal_92));
                      MR_hl_field(MR_mktag(1), ShortHand_94, 5) = ((MR_Box) (OrElseGoals_93));
                      MR_hl_field(MR_mktag(1), ShortHand_94, 6) = ((MR_Box) (OrElseInners_91));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_95 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_85, (MR_Integer) 0))));
                    MR_Word ResultVar_96 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_85, (MR_Integer) 1))));
                    MR_Word STATE_VARIABLE_Info_113_113;
                    MR_Word STATE_VARIABLE_Info_120_120;
                    MR_Word InitialSnapshot_211;
                    MR_Word SubGoal0_212 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_85, (MR_Integer) 2))));
                    MR_Word SubGoal_213;
                    MR_Word SubGoalInfo_98;
                    MR_Word ConjunctA0_100;
                    MR_Word ConjunctB0_101;
                    MR_Word SubGoalExpr0_97;
                    MR_Word Conjuncts0_99;
                    MR_Word Var_114;
                    MR_Word Var_115;
                    MR_Word Var_116;

                    check_hlds__polymorphism_info__get_cache_maps_snapshot_4_p_0((MR_String) "try", &InitialSnapshot_211, STATE_VARIABLE_Info_0_108, &STATE_VARIABLE_Info_113_113);
                    SubGoalExpr0_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal0_212, (MR_Integer) 0))));
                    SubGoalInfo_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal0_212, (MR_Integer) 1))));
                    succeeded = ((((MR_tag((MR_Word) SubGoalExpr0_97)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SubGoalExpr0_97, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (succeeded)
                    {
                      Var_114 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), SubGoalExpr0_97, (MR_Integer) 1))) & (MR_Integer) 1);
                      Conjuncts0_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubGoalExpr0_97, (MR_Integer) 2))));
                      succeeded = (Var_114 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        succeeded = (Conjuncts0_99 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          ConjunctA0_100 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjuncts0_99, (MR_Integer) 0))));
                          Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjuncts0_99, (MR_Integer) 1))));
                          succeeded = (Var_115 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ConjunctB0_101 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_115, (MR_Integer) 0))));
                            Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_115, (MR_Integer) 1))));
                            succeeded = (Var_116 == (MR_Word) ((MR_Unsigned) 0U));
                          }
                        }
                      }
                    }
                    if (succeeded)
                    {
                      MR_Word ConjunctA_102;
                      MR_Word ConjunctB_103;
                      MR_Word Conjuncts_104;
                      MR_Word SubGoalExpr_105;
                      MR_Word STATE_VARIABLE_Info_117_117;
                      MR_Word STATE_VARIABLE_Info_118_118;
                      MR_Word STATE_VARIABLE_Info_119_119;
                      MR_Word Var_121;

                      check_hlds__polymorphism_info__empty_cache_maps_2_p_0(STATE_VARIABLE_Info_113_113, &STATE_VARIABLE_Info_117_117);
                      check_hlds__polymorphism__polymorphism_process_goal_4_p_0(ConjunctA0_100, &ConjunctA_102, STATE_VARIABLE_Info_117_117, &STATE_VARIABLE_Info_118_118);
                      check_hlds__polymorphism_info__empty_cache_maps_2_p_0(STATE_VARIABLE_Info_118_118, &STATE_VARIABLE_Info_119_119);
                      check_hlds__polymorphism__polymorphism_process_goal_4_p_0(ConjunctB0_101, &ConjunctB_103, STATE_VARIABLE_Info_119_119, &STATE_VARIABLE_Info_120_120);
                      {
                        Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (ConjunctB_103));
                        MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Conjuncts_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Conjuncts_104, 0) = ((MR_Box) (ConjunctA_102));
                        MR_hl_field(MR_mktag(1), Conjuncts_104, 1) = ((MR_Box) (Var_121));
                      }
                      {
                        SubGoalExpr_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), SubGoalExpr_105, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(MR_mktag(3), SubGoalExpr_105, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                        MR_hl_field(MR_mktag(3), SubGoalExpr_105, 2) = ((MR_Box) (Conjuncts_104));
                      }
                      {
                        SubGoal_213 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), SubGoal_213, 0) = ((MR_Box) (SubGoalExpr_105));
                        MR_hl_field(MR_mktag(0), SubGoal_213, 1) = ((MR_Box) (SubGoalInfo_98));
                      }
                    }
                    else
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_goal\'/4", (MR_String) "malformed try goal");
                        return;
                      }
                    check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "after try", InitialSnapshot_211, STATE_VARIABLE_Info_120_120, STATE_VARIABLE_Info_109);
                    {
                      ShortHand_94 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ShortHand_94, 0) = ((MR_Box) (MaybeIO_95));
                      MR_hl_field(MR_mktag(2), ShortHand_94, 1) = ((MR_Box) (ResultVar_96));
                      MR_hl_field(MR_mktag(2), ShortHand_94, 2) = ((MR_Box) (SubGoal_213));
                    }
                  }
                  break;
              }
              {
                GoalExpr_219 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_219, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), GoalExpr_219, 1) = ((MR_Box) (ShortHand_94));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_219));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_fgti_goals_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ConstructOrderMarkedGoals_0_2,
  MR_Word * STATE_VARIABLE_ConstructOrderMarkedGoals_3,
  MR_Word STATE_VARIABLE_InvariantsStatus_0_4,
  MR_Word * STATE_VARIABLE_InvariantsStatus_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
      *STATE_VARIABLE_InvariantsStatus_5 = STATE_VARIABLE_InvariantsStatus_0_4;
      *STATE_VARIABLE_ConstructOrderMarkedGoals_3 = STATE_VARIABLE_ConstructOrderMarkedGoals_0_2;
    }
    else
    {
      MR_Word Goal0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalExpr0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_17, (MR_Integer) 0))));
      MR_Word GoalInfo0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_17, (MR_Integer) 1))));
      MR_Word LHSVar_33;
      MR_Word Mode_34;
      MR_Word Unification_35;
      MR_Word UnifyContext_36;
      MR_Word ConsId_37;
      MR_Word RHSVars_38;
      MR_Word Goal_39;
      MR_Word Changed_40;
      MR_Word MarkedGoal_47;
      MR_Word STATE_VARIABLE_Info_56_56;
      MR_Word STATE_VARIABLE_InvariantsStatus_57_57;
      MR_Word STATE_VARIABLE_ConstructOrderMarkedGoals_67_67;
      MR_Word LHSVarPrime_25;
      MR_Word ModePrime_27;
      MR_Word UnificationPrime_28;
      MR_Word UnifyContextPrime_29;
      MR_Word ConsIdPrime_30;
      MR_Word RHSVarsPrime_32;
      MR_Word RHS_26;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ConstructOrderMarkedGoals_0_2;
      MR_Word next_value_of_STATE_VARIABLE_InvariantsStatus_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_6;

      succeeded = ((MR_tag((MR_Word) GoalExpr0_23)) == (MR_Integer) 1);
      if (succeeded)
      {
        LHSVarPrime_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_23, (MR_Integer) 0))));
        RHS_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_23, (MR_Integer) 1))));
        ModePrime_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_23, (MR_Integer) 2))));
        UnificationPrime_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_23, (MR_Integer) 3))));
        UnifyContextPrime_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_23, (MR_Integer) 4))));
        succeeded = ((MR_tag((MR_Word) RHS_26)) == (MR_Integer) 1);
        if (succeeded)
        {
          ConsIdPrime_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_26, (MR_Integer) 0))));
          RHSVarsPrime_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_26, (MR_Integer) 2))));
        }
      }
      if (succeeded)
      {
        LHSVar_33 = LHSVarPrime_25;
        Mode_34 = ModePrime_27;
        Unification_35 = UnificationPrime_28;
        UnifyContext_36 = UnifyContextPrime_29;
        ConsId_37 = ConsIdPrime_30;
        RHSVars_38 = RHSVarsPrime_32;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_fgti_goals\'/7", (MR_String) "from_ground_term_initial conjunct is not functor unify");
          return;
        }
      check_hlds__polymorphism__polymorphism_process_unify_functor_11_p_0(LHSVar_33, ConsId_37, RHSVars_38, Mode_34, Unification_35, UnifyContext_36, GoalInfo0_24, &Goal_39, &Changed_40, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_56_56);
      switch (Changed_40) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              MarkedGoal_47 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), MarkedGoal_47, 0) = ((MR_Box) (Goal0_17));
              MR_hl_field(MR_mktag(0), MarkedGoal_47, 1) = ((MR_Box) (LHSVar_33));
              MR_hl_field(MR_mktag(0), MarkedGoal_47, 2) = ((MR_Box) (RHSVars_38));
            }
            STATE_VARIABLE_InvariantsStatus_57_57 = STATE_VARIABLE_InvariantsStatus_0_4;
          }
          break;
        case (MR_Integer) 1:
          {
            {
              MarkedGoal_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MarkedGoal_47, 0) = ((MR_Box) (Goal_39));
              MR_hl_field(MR_mktag(1), MarkedGoal_47, 1) = ((MR_Box) (LHSVar_33));
              MR_hl_field(MR_mktag(1), MarkedGoal_47, 2) = ((MR_Box) (RHSVars_38));
            }
            STATE_VARIABLE_InvariantsStatus_57_57 = (MR_Integer) 1;
          }
          break;
      }
      {
        STATE_VARIABLE_ConstructOrderMarkedGoals_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ConstructOrderMarkedGoals_67_67, 0) = ((MR_Box) (MarkedGoal_47));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ConstructOrderMarkedGoals_67_67, 1) = ((MR_Box) (STATE_VARIABLE_ConstructOrderMarkedGoals_0_2));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals0_18;
      next_value_of_STATE_VARIABLE_ConstructOrderMarkedGoals_0_2 = STATE_VARIABLE_ConstructOrderMarkedGoals_67_67;
      next_value_of_STATE_VARIABLE_InvariantsStatus_0_4 = STATE_VARIABLE_InvariantsStatus_57_57;
      next_value_of_STATE_VARIABLE_Info_0_6 = STATE_VARIABLE_Info_56_56;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ConstructOrderMarkedGoals_0_2 = next_value_of_STATE_VARIABLE_ConstructOrderMarkedGoals_0_2;
      STATE_VARIABLE_InvariantsStatus_0_4 = next_value_of_STATE_VARIABLE_InvariantsStatus_0_4;
      STATE_VARIABLE_Info_0_6 = next_value_of_STATE_VARIABLE_Info_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_cases_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word InitialSnapshot_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Case0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_12;
    MR_Word Cases_13;
    MR_Word MainConsId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 0))));
    MR_Word OtherConsIds_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 1))));
    MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 2))));
    MR_Word Goal_19;
    MR_Word STATE_VARIABLE_Info_23_23;
    MR_Word STATE_VARIABLE_Info_24_24;

    check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "case", InitialSnapshot_3, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_23_23);
    check_hlds__polymorphism__polymorphism_process_goal_4_p_0(Goal0_18, &Goal_19, STATE_VARIABLE_Info_23_23, &STATE_VARIABLE_Info_24_24);
    {
      Case_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_12, 0) = ((MR_Box) (MainConsId_16));
      MR_hl_field(MR_mktag(0), Case_12, 1) = ((MR_Box) (OtherConsIds_17));
      MR_hl_field(MR_mktag(0), Case_12, 2) = ((MR_Box) (Goal_19));
    }
    check_hlds__polymorphism__polymorphism_process_cases_5_p_0(Cases0_11, &Cases_13, InitialSnapshot_3, STATE_VARIABLE_Info_24_24, STATE_VARIABLE_Info_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_13));
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_disj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word InitialSnapshot_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Goal0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_12;
    MR_Word Goals_13;
    MR_Word STATE_VARIABLE_Info_19_19;
    MR_Word STATE_VARIABLE_Info_20_20;

    check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "disjunct", InitialSnapshot_3, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_19_19);
    check_hlds__polymorphism__polymorphism_process_goal_4_p_0(Goal0_10, &Goal_12, STATE_VARIABLE_Info_19_19, &STATE_VARIABLE_Info_20_20);
    check_hlds__polymorphism__polymorphism_process_disj_5_p_0(Goals0_11, &Goals_13, InitialSnapshot_3, STATE_VARIABLE_Info_20_20, STATE_VARIABLE_Info_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_13));
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_par_conj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word InitialSnapshot_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Goal0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_12;
    MR_Word Goals_13;
    MR_Word STATE_VARIABLE_Info_19_19;
    MR_Word STATE_VARIABLE_Info_20_20;

    check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "par conjunct", InitialSnapshot_3, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_19_19);
    check_hlds__polymorphism__polymorphism_process_goal_4_p_0(Goal0_10, &Goal_12, STATE_VARIABLE_Info_19_19, &STATE_VARIABLE_Info_20_20);
    check_hlds__polymorphism__polymorphism_process_par_conj_5_p_0(Goals0_11, &Goals_13, InitialSnapshot_3, STATE_VARIABLE_Info_20_20, STATE_VARIABLE_Info_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_13));
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_plain_conj_4_p_0(
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

    check_hlds__polymorphism__polymorphism_process_goal_4_p_0(Goal0_8, &Goal_10, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_15_15);
    check_hlds__polymorphism__polymorphism_process_plain_conj_4_p_0(Goals0_9, &Goals_11, STATE_VARIABLE_Info_15_15, STATE_VARIABLE_Info_4);
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
check_hlds__polymorphism__polymorphism_process_unify_functor_11_p_0(
  MR_Word X0_12,
  MR_Word ConsId0_13,
  MR_Word ArgVars0_14,
  MR_Word Mode0_15,
  MR_Word Unification0_16,
  MR_Word UnifyContext_17,
  MR_Word GoalInfo0_18,
  MR_Word * Goal_19,
  MR_Word * Changed_20,
  MR_Word STATE_VARIABLE_Info_0_67,
  MR_Word * STATE_VARIABLE_Info_68)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo0_22;
    MR_Word VarTypes0_23;
    MR_Word TypeOfX_24;
    MR_Integer Arity_25;
    MR_Word PredId_28;
    MR_Integer ProcId0_29;
    MR_Word Purity_30;
    MR_Word CalleeArgTypes_33;
    MR_Word ShroudedPredProcId_26;
    MR_Word Var_69;
    MR_Word _PredOrFunc_31;

    check_hlds__polymorphism_info__poly_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_67, &ModuleInfo0_22);
    check_hlds__polymorphism_info__poly_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_67, &VarTypes0_23);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes0_23, X0_12, &TypeOfX_24);
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ArgVars0_14, &Arity_25);
    succeeded = ((((MR_tag((MR_Word) ConsId0_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_13, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if (succeeded)
    {
      ShroudedPredProcId_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_13, (MR_Integer) 1))));
      Var_69 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_26);
      PredId_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_69, (MR_Integer) 0))));
      ProcId0_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_69, (MR_Integer) 1))));
      succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(TypeOfX_24, &Purity_30, &_PredOrFunc_31, &CalleeArgTypes_33);
    }
    if (succeeded)
    {
      MR_Integer ProcId_36;
      MR_Word GoalInfo1_38;
      MR_Word VarSet0_39;
      MR_Word Context_40;
      MR_Word MaybeRHS0_41;
      MR_Word VarSet_42;
      MR_Word VarTypes_43;
      MR_Word STATE_VARIABLE_Info_73_73;
      MR_Integer Var_100;

      Var_100 = hlds__hlds_pred__invalid_proc_id_0_f_0();
      succeeded = (ProcId0_29 == Var_100);
      if (succeeded)
      {
        MR_Word PredInfo_34;
        MR_Word ProcIds_35;

        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo0_22, PredId_28, &PredInfo_34);
        ProcIds_35 = hlds__hlds_pred__pred_info_valid_procids_1_f_0(PredInfo_34);
        if ((ProcIds_35 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_unify_functor\'/11", (MR_String) "no modes");
            return;
          }
        else
        {
          ProcId_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ProcIds_35, (MR_Integer) 0))));
          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 23, GoalInfo0_18, &GoalInfo1_38);
        }
      }
      else
      {
        ProcId_36 = ProcId0_29;
        GoalInfo1_38 = GoalInfo0_18;
      }
      check_hlds__polymorphism_info__poly_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_67, &VarSet0_39);
      Context_40 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_18);
      check_hlds__polymorphism_lambda__convert_pred_to_lambda_goal_16_p_0(Purity_30, X0_12, PredId_28, ProcId_36, ArgVars0_14, CalleeArgTypes_33, UnifyContext_17, GoalInfo1_38, Context_40, ModuleInfo0_22, &MaybeRHS0_41, VarSet0_39, &VarSet_42, VarTypes0_23, &VarTypes_43);
      check_hlds__polymorphism_info__poly_info_set_varset_types_4_p_0(VarSet_42, VarTypes_43, STATE_VARIABLE_Info_0_67, &STATE_VARIABLE_Info_73_73);
      if (((MR_tag((MR_Word) MaybeRHS0_41)) == (MR_Integer) 0))
      {
        MR_Word Specs_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeRHS0_41, (MR_Integer) 0))));
        MR_Word Specs0_46;
        MR_Word Var_74;
        MR_Word STATE_VARIABLE_Info_75_75;

        check_hlds__polymorphism_info__poly_info_get_errors_2_p_0(STATE_VARIABLE_Info_73_73, &Specs0_46);
        Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_45, Specs0_46);
        check_hlds__polymorphism_info__poly_info_set_errors_3_p_0(Var_74, STATE_VARIABLE_Info_73_73, &STATE_VARIABLE_Info_75_75);
        check_hlds__polymorphism__polymorphism_process_unify_9_p_0(X0_12, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__polymorphism_scalar_common_3[0])), Mode0_15, Unification0_16, UnifyContext_17, GoalInfo1_38, Goal_19, STATE_VARIABLE_Info_75_75, STATE_VARIABLE_Info_68);
      }
      else
      {
        MR_Word RHS0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRHS0_41, (MR_Integer) 0))));

        check_hlds__polymorphism__polymorphism_process_unify_9_p_0(X0_12, RHS0_44, Mode0_15, Unification0_16, UnifyContext_17, GoalInfo1_38, Goal_19, STATE_VARIABLE_Info_73_73, STATE_VARIABLE_Info_68);
      }
      *Changed_20 = (MR_Integer) 1;
    }
    else
    {
      MR_Word ConsId_51;
      MR_Word IsExistConstr_52;
      MR_Word ConsDefn_53;
      MR_Word Functor0_48;
      MR_Word ConsTypeCtor_49;
      MR_Integer Var_101;
      MR_Word OrigFunctor_50;

      succeeded = ((((MR_tag((MR_Word) ConsId0_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_13, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Functor0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_13, (MR_Integer) 1))));
        Var_101 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_13, (MR_Integer) 2))));
        ConsTypeCtor_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_13, (MR_Integer) 3))));
        succeeded = (Arity_25 == Var_101);
        if (succeeded)
        {
          succeeded = parse_tree__prog_type__remove_new_prefix_2_p_0(Functor0_48, &OrigFunctor_50);
          if (succeeded)
          {
            {
              ConsId_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ConsId_51, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), ConsId_51, 1) = ((MR_Box) (OrigFunctor_50));
              MR_hl_field(MR_mktag(3), ConsId_51, 2) = ((MR_Box) (Arity_25));
              MR_hl_field(MR_mktag(3), ConsId_51, 3) = ((MR_Box) (ConsTypeCtor_49));
            }
            IsExistConstr_52 = (MR_Integer) 1;
          }
          else
          {
            ConsId_51 = ConsId0_13;
            IsExistConstr_52 = (MR_Integer) 0;
          }
          succeeded = check_hlds__type_util__get_existq_cons_defn_4_p_0(ModuleInfo0_22, TypeOfX_24, ConsId_51, &ConsDefn_53);
        }
      }
      if (succeeded)
      {
        MR_Word ActualArgTypes_54;
        MR_Word ExtraVars_55;
        MR_Word ExtraGoals_56;
        MR_Word ArgVars_57;
        MR_Word NonLocals0_58;
        MR_Word NonLocals_59;
        MR_Word Unification_60;
        MR_Word GoalInfo_61;
        MR_Word UnifyExpr_63;
        MR_Word Unify_64;
        MR_Word GoalList_65;
        MR_Word STATE_VARIABLE_Info_83_83;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word GoalInfo1_90;
        MR_Word _Changed_62;

        hlds__vartypes__lookup_var_types_3_p_0(VarTypes0_23, ArgVars0_14, &ActualArgTypes_54);
        check_hlds__polymorphism__polymorphism_process_existq_unify_functor_9_p_0(ConsDefn_53, IsExistConstr_52, ActualArgTypes_54, TypeOfX_24, GoalInfo0_18, &ExtraVars_55, &ExtraGoals_56, STATE_VARIABLE_Info_0_67, &STATE_VARIABLE_Info_83_83);
        ArgVars_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ExtraVars_55, ArgVars0_14);
        NonLocals0_58 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_18);
        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ExtraVars_55, NonLocals0_58, &NonLocals_59);
        hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_59, GoalInfo0_18, &GoalInfo1_90);
        check_hlds__polymorphism__unification_typeinfos_8_p_0(TypeOfX_24, Unification0_16, &Unification_60, GoalInfo1_90, &GoalInfo_61, &_Changed_62, STATE_VARIABLE_Info_83_83, STATE_VARIABLE_Info_68);
        {
          Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (ConsId_51));
          MR_hl_field(MR_mktag(1), Var_85, 1) = (MR_Box) ((MR_Unsigned) (IsExistConstr_52));
          MR_hl_field(MR_mktag(1), Var_85, 2) = ((MR_Box) (ArgVars_57));
        }
        {
          UnifyExpr_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), UnifyExpr_63, 0) = ((MR_Box) (X0_12));
          MR_hl_field(MR_mktag(1), UnifyExpr_63, 1) = ((MR_Box) (Var_85));
          MR_hl_field(MR_mktag(1), UnifyExpr_63, 2) = ((MR_Box) (Mode0_15));
          MR_hl_field(MR_mktag(1), UnifyExpr_63, 3) = ((MR_Box) (Unification_60));
          MR_hl_field(MR_mktag(1), UnifyExpr_63, 4) = ((MR_Box) (UnifyContext_17));
        }
        {
          Unify_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Unify_64, 0) = ((MR_Box) (UnifyExpr_63));
          MR_hl_field(MR_mktag(0), Unify_64, 1) = ((MR_Box) (GoalInfo_61));
        }
        {
          Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Unify_64));
          MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        GoalList_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraGoals_56, Var_86);
        hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_65, GoalInfo0_18, Goal_19);
        *Changed_20 = (MR_Integer) 1;
      }
      else
      {
        MR_Word GoalExpr_66;
        MR_Word RHS_91;
        MR_Word Unification_92;
        MR_Word GoalInfo_93;

        check_hlds__polymorphism__unification_typeinfos_8_p_0(TypeOfX_24, Unification0_16, &Unification_92, GoalInfo0_18, &GoalInfo_93, Changed_20, STATE_VARIABLE_Info_0_67, STATE_VARIABLE_Info_68);
        {
          RHS_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RHS_91, 0) = ((MR_Box) (ConsId0_13));
          MR_hl_field(MR_mktag(1), RHS_91, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), RHS_91, 2) = ((MR_Box) (ArgVars0_14));
        }
        {
          GoalExpr_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), GoalExpr_66, 0) = ((MR_Box) (X0_12));
          MR_hl_field(MR_mktag(1), GoalExpr_66, 1) = ((MR_Box) (RHS_91));
          MR_hl_field(MR_mktag(1), GoalExpr_66, 2) = ((MR_Box) (Mode0_15));
          MR_hl_field(MR_mktag(1), GoalExpr_66, 3) = ((MR_Box) (Unification_92));
          MR_hl_field(MR_mktag(1), GoalExpr_66, 4) = ((MR_Box) (UnifyContext_17));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_19 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_66));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_93));
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_unify_9_p_0(
  MR_Word LHSVar_10,
  MR_Word RHS0_11,
  MR_Word Mode_12,
  MR_Word Unification0_13,
  MR_Word UnifyContext_14,
  MR_Word GoalInfo0_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49)
{
  switch (MR_tag((MR_Word) RHS0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word VarTypes_19;
        MR_Word Type_20;
        MR_Word Unification_21;
        MR_Word GoalInfo_22;
        MR_Word Var_62;
        MR_Word _Changed_23;

        check_hlds__polymorphism_info__poly_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_48, &VarTypes_19);
        hlds__vartypes__lookup_var_type_3_p_0(VarTypes_19, LHSVar_10, &Type_20);
        check_hlds__polymorphism__unification_typeinfos_8_p_0(Type_20, Unification0_13, &Unification_21, GoalInfo0_15, &GoalInfo_22, &_Changed_23, STATE_VARIABLE_Info_0_48, STATE_VARIABLE_Info_49);
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (LHSVar_10));
          MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (RHS0_11));
          MR_hl_field(MR_mktag(1), Var_62, 2) = ((MR_Box) (Mode_12));
          MR_hl_field(MR_mktag(1), Var_62, 3) = ((MR_Box) (Unification_21));
          MR_hl_field(MR_mktag(1), Var_62, 4) = ((MR_Box) (UnifyContext_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_62));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_22));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ConsId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS0_11, (MR_Integer) 0))));
        MR_Word Args_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS0_11, (MR_Integer) 2))));
        MR_Word _Changed_63;

        check_hlds__polymorphism__polymorphism_process_unify_functor_11_p_0(LHSVar_10, ConsId_24, Args_26, Mode_12, Unification0_13, UnifyContext_14, GoalInfo0_15, Goal_16, &_Changed_63, STATE_VARIABLE_Info_0_48, STATE_VARIABLE_Info_49);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word LambdaNonLocals0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_11, (MR_Integer) 2))));
        MR_Word ArgVarsModes_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_11, (MR_Integer) 3))));
        MR_Word Det_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_11, (MR_Integer) 4))) & (MR_Integer) 7);
        MR_Word LambdaGoal0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_11, (MR_Integer) 5))));
        MR_Word InitialSnapshot_35;
        MR_Word LambdaGoal1_36;
        MR_Word ArgVars_37;
        MR_Word LambdaGoal_39;
        MR_Word LambdaTiTciVars_40;
        MR_Word PossibleNonLocalTiTciVars_41;
        MR_Word LambdaNonLocals1_42;
        MR_Word LambdaNonLocals_43;
        MR_Word RHS_44;
        MR_Word NonLocals0_45;
        MR_Word NonLocals_46;
        MR_Word GoalExpr_47;
        MR_Word STATE_VARIABLE_Info_51_51;
        MR_Word STATE_VARIABLE_Info_52_52;
        MR_Word STATE_VARIABLE_Info_53_53;
        MR_Word STATE_VARIABLE_Info_55_55;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word GoalInfo_65;
        MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_11, (MR_Integer) 0)));

        check_hlds__polymorphism_info__get_cache_maps_snapshot_4_p_0((MR_String) "lambda", &InitialSnapshot_35, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_51_51);
        check_hlds__polymorphism_info__empty_cache_maps_2_p_0(STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_52_52);
        check_hlds__polymorphism__polymorphism_process_goal_4_p_0(LambdaGoal0_34, &LambdaGoal1_36, STATE_VARIABLE_Info_52_52, &STATE_VARIABLE_Info_53_53);
        check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "after lambda", InitialSnapshot_35, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_55_55);
        mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVarsModes_32, &ArgVars_37);
        check_hlds__polymorphism__fixup_lambda_quantification_9_p_0(LambdaNonLocals0_31, ArgVars_37, (MR_Word) ((MR_Unsigned) 0U), LambdaGoal1_36, &LambdaGoal_39, &LambdaTiTciVars_40, &PossibleNonLocalTiTciVars_41, STATE_VARIABLE_Info_55_55, STATE_VARIABLE_Info_49);
        Var_57 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaTiTciVars_40);
        Var_59 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PossibleNonLocalTiTciVars_41);
        Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), Var_59, LambdaNonLocals0_31);
        LambdaNonLocals1_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), Var_57, Var_58);
        mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), LambdaNonLocals1_42, &LambdaNonLocals_43);
        {
          RHS_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), RHS_44, 0) = (MR_Box) (packed_word_1);
          MR_hl_field(MR_mktag(2), RHS_44, 1) = NULL;
          MR_hl_field(MR_mktag(2), RHS_44, 2) = ((MR_Box) (LambdaNonLocals_43));
          MR_hl_field(MR_mktag(2), RHS_44, 3) = ((MR_Box) (ArgVarsModes_32));
          MR_hl_field(MR_mktag(2), RHS_44, 4) = (MR_Box) ((MR_Unsigned) (Det_33));
          MR_hl_field(MR_mktag(2), RHS_44, 5) = ((MR_Box) (LambdaGoal_39));
        }
        NonLocals0_45 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_15);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PossibleNonLocalTiTciVars_41, NonLocals0_45, &NonLocals_46);
        hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_46, GoalInfo0_15, &GoalInfo_65);
        {
          GoalExpr_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), GoalExpr_47, 0) = ((MR_Box) (LHSVar_10));
          MR_hl_field(MR_mktag(1), GoalExpr_47, 1) = ((MR_Box) (RHS_44));
          MR_hl_field(MR_mktag(1), GoalExpr_47, 2) = ((MR_Box) (Mode_12));
          MR_hl_field(MR_mktag(1), GoalExpr_47, 3) = ((MR_Box) (Unification0_13));
          MR_hl_field(MR_mktag(1), GoalExpr_47, 4) = ((MR_Box) (UnifyContext_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_47));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_65));
        }
      }
      break;
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_from_ground_term_initial_6_p_0(
  MR_Word TermVar_7,
  MR_Word GoalInfo0_8,
  MR_Word SubGoal0_9,
  MR_Word * GoalExpr_10,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  {
    MR_bool succeeded;
    MR_Word SubGoalExpr0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal0_9, (MR_Integer) 0))));
    MR_Word SubGoalInfo0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal0_9, (MR_Integer) 1))));
    MR_Word SubGoals0_15;
    MR_Word ConstructOrderMarkedSubGoals_16;
    MR_Word InvariantsStatus_17;
    MR_Word SubGoals0Prime_14;
    MR_Word Var_23;

    succeeded = ((((MR_tag((MR_Word) SubGoalExpr0_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SubGoalExpr0_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), SubGoalExpr0_12, (MR_Integer) 1))) & (MR_Integer) 1);
      SubGoals0Prime_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubGoalExpr0_12, (MR_Integer) 2))));
      succeeded = (Var_23 == (MR_Integer) 0);
    }
    if (succeeded)
      SubGoals0_15 = SubGoals0Prime_14;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_from_ground_term_initial\'/6", (MR_String) "from_ground_term_initial goal is not plain conj");
        return;
      }
    check_hlds__polymorphism__polymorphism_process_fgti_goals_7_p_0(SubGoals0_15, (MR_Word) ((MR_Unsigned) 0U), &ConstructOrderMarkedSubGoals_16, (MR_Integer) 0, &InvariantsStatus_17, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
    switch (InvariantsStatus_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word SubGoal_19;

          hlds__from_ground_term_util__introduce_partial_fgt_scopes_5_p_0(GoalInfo0_8, SubGoalInfo0_13, ConstructOrderMarkedSubGoals_16, (MR_Integer) 1, &SubGoal_19);
          *GoalExpr_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal_19, (MR_Integer) 0))));
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Reason_18;

          {
            Reason_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Reason_18, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), Reason_18, 1) = ((MR_Box) (TermVar_7));
            MR_hl_field(MR_mktag(3), Reason_18, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_18));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal0_9));
          }
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_6_p_0_1(
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
check_hlds__polymorphism__polymorphism_process_foreign_proc_6_p_0(
  MR_Word PredInfo_7,
  MR_Word GoalExpr0_8,
  MR_Word GoalInfo0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  {
    MR_Word Attributes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
    MR_Word PredId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
    MR_Integer ProcId_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3))));
    MR_Word Args0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 4))));
    MR_Word ProcExtraArgs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 5))));
    MR_Word MaybeTraceRuntimeCond_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 6))));
    MR_Word Impl_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 7))));
    MR_Word ArgVars0_19;
    MR_Word GoalInfo_20;
    MR_Word ExtraVars_21;
    MR_Word ExtraGoals_22;
    MR_Word ExtraArgs_23;
    MR_Word Args_24;
    MR_Word CallExpr_25;
    MR_Word Call_26;
    MR_Word GoalList_27;
    MR_Word Var_32;

    ArgVars0_19 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_3[19]), Args0_15);
    check_hlds__polymorphism__polymorphism_process_call_8_p_0(PredId_13, ArgVars0_19, GoalInfo0_9, &GoalInfo_20, &ExtraVars_21, &ExtraGoals_22, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
    check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0(PredInfo_7, Impl_18, ExtraVars_21, &ExtraArgs_23);
    Args_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), ExtraArgs_23, Args0_15);
    {
      CallExpr_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CallExpr_25, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), CallExpr_25, 1) = ((MR_Box) (Attributes_12));
      MR_hl_field(MR_mktag(3), CallExpr_25, 2) = ((MR_Box) (PredId_13));
      MR_hl_field(MR_mktag(3), CallExpr_25, 3) = ((MR_Box) (ProcId_14));
      MR_hl_field(MR_mktag(3), CallExpr_25, 4) = ((MR_Box) (Args_24));
      MR_hl_field(MR_mktag(3), CallExpr_25, 5) = ((MR_Box) (ProcExtraArgs_16));
      MR_hl_field(MR_mktag(3), CallExpr_25, 6) = ((MR_Box) (MaybeTraceRuntimeCond_17));
      MR_hl_field(MR_mktag(3), CallExpr_25, 7) = ((MR_Box) (Impl_18));
    }
    {
      Call_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Call_26, 0) = ((MR_Box) (CallExpr_25));
      MR_hl_field(MR_mktag(0), Call_26, 1) = ((MR_Box) (GoalInfo_20));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Call_26));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    GoalList_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraGoals_22, Var_32);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_27, GoalInfo0_9, Goal_10);
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_call_8_p_0(
  MR_Word PredId_9,
  MR_Word ArgVars0_10,
  MR_Word GoalInfo0_11,
  MR_Word * GoalInfo_12,
  MR_Word * ExtraVars_13,
  MR_Word * ExtraGoals_14,
  MR_Word STATE_VARIABLE_Info_0_71,
  MR_Word * STATE_VARIABLE_Info_72)
{
  {
    MR_bool succeeded;
    MR_Word VarTypes_16;
    MR_Word TypeVarSet0_17;
    MR_Word ModuleInfo_18;
    MR_Word PredInfo_19;
    MR_Word PredTypeVarSet_20;
    MR_Word PredExistQVars_21;
    MR_Word PredArgTypes_22;
    MR_Word PredKindMap_23;
    MR_Word PredClassContext_24;
    MR_Word PredToParentTypeRenaming_25;
    MR_Word TypeVarSet_26;
    MR_Word ParentArgTypes_27;
    MR_Word ParentKindMap_28;
    MR_Word ParentTVars_29;
    MR_Word ParentExistQVars_30;
    MR_Word PredModule_31;
    MR_String PredName_32;
    MR_Integer PredArity_33;

    check_hlds__polymorphism_info__poly_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_71, &VarTypes_16);
    check_hlds__polymorphism_info__poly_info_get_typevarset_2_p_0(STATE_VARIABLE_Info_0_71, &TypeVarSet0_17);
    check_hlds__polymorphism_info__poly_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_71, &ModuleInfo_18);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_18, PredId_9, &PredInfo_19);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_19, &PredTypeVarSet_20, &PredExistQVars_21, &PredArgTypes_22);
    hlds__hlds_pred__pred_info_get_tvar_kind_map_2_p_0(PredInfo_19, &PredKindMap_23);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_19, &PredClassContext_24);
    succeeded = mercury__varset__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), PredTypeVarSet_20);
    if (succeeded)
    {
      mercury__map__init_1_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), &PredToParentTypeRenaming_25);
      TypeVarSet_26 = TypeVarSet0_17;
      ParentArgTypes_27 = PredArgTypes_22;
      ParentKindMap_28 = PredKindMap_23;
      ParentTVars_29 = (MR_Word) ((MR_Unsigned) 0U);
      ParentExistQVars_30 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TypeVarSet0_17, PredTypeVarSet_20, &TypeVarSet_26, &PredToParentTypeRenaming_25);
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(PredToParentTypeRenaming_25, PredArgTypes_22, &ParentArgTypes_27);
      parse_tree__prog_type__type_vars_list_2_p_0(ParentArgTypes_27, &ParentTVars_29);
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0(PredToParentTypeRenaming_25, PredKindMap_23, &ParentKindMap_28);
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(PredToParentTypeRenaming_25, PredExistQVars_21, &ParentExistQVars_30);
    }
    PredModule_31 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_19);
    PredName_32 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_19);
    PredArity_33 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_19);
    {
      MR_Word Var_73;
      MR_Word Var_74;

      succeeded = (ParentTVars_29 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredClassContext_24, (MR_Integer) 0))));
        Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredClassContext_24, (MR_Integer) 1))));
        succeeded = (Var_73 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (Var_74 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (!(succeeded))
      succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(PredModule_31, PredName_32, PredArity_33);
    if (succeeded)
    {
      *GoalInfo_12 = GoalInfo0_11;
      *ExtraGoals_14 = (MR_Word) ((MR_Unsigned) 0U);
      *ExtraVars_13 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_72 = STATE_VARIABLE_Info_0_71;
    }
    else
    {
      MR_Word ParentClassContext_34;
      MR_Word ParentUnivConstraints_35;
      MR_Word ParentExistConstraints_36;
      MR_Word ParentUnivConstrainedTVars_37;
      MR_Word ParentExistConstrainedTVars_38;
      MR_Word ParentUnconstrainedTVars0_39;
      MR_Word ParentUnconstrainedTVars1_40;
      MR_Word ParentUnconstrainedTVars_41;
      MR_Word ParentUnconstrainedUnivTVars_42;
      MR_Word ParentUnconstrainedExistTVars_43;
      MR_Word ActualArgTypes_44;
      MR_Word ParentToActualTypeSubst_45;
      MR_Word ConstraintMap_46;
      MR_Word GoalId_47;
      MR_Integer NumUnivConstraints_48;
      MR_Word ActualUnivConstraints_49;
      MR_Word ActualExistQVarTypes_50;
      MR_Word ActualExistQVars_52;
      MR_Word Context_53;
      MR_Word ExtraUnivClassVarsMCAs_54;
      MR_Word ExtraUnivClassGoals_55;
      MR_Word ExtraUnivClassVars_56;
      MR_Integer NumExistConstraints_57;
      MR_Word ActualExistConstraints_58;
      MR_Word ExtraExistClassVars_59;
      MR_Word ExtraExistClassGoals_60;
      MR_Word ActualUnconstrainedUnivTypes_61;
      MR_Word ExtraUnivTypeInfoVarsMCAs_62;
      MR_Word ExtraUnivTypeInfoGoals_63;
      MR_Word ExtraUnivTypeInfoVars_64;
      MR_Word ActualUnconstrainedExistTypes_65;
      MR_Word ExtraExistTypeInfoVarsMCAs_66;
      MR_Word ExtraExistTypeInfoGoals_67;
      MR_Word ExtraExistTypeInfoVars_68;
      MR_Word NonLocals0_69;
      MR_Word NonLocals_70;
      MR_Word STATE_VARIABLE_Info_75_75;
      MR_Word STATE_VARIABLE_Info_79_79;
      MR_Word STATE_VARIABLE_Info_81_81;
      MR_Word STATE_VARIABLE_Info_82_82;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word ActualExistQVars0_51;

      check_hlds__polymorphism_info__poly_info_set_typevarset_3_p_0(TypeVarSet_26, STATE_VARIABLE_Info_0_71, &STATE_VARIABLE_Info_75_75);
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(PredToParentTypeRenaming_25, PredClassContext_24, &ParentClassContext_34);
      ParentUnivConstraints_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParentClassContext_34, (MR_Integer) 0))));
      ParentExistConstraints_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParentClassContext_34, (MR_Integer) 1))));
      parse_tree__prog_type__constraint_list_get_tvars_2_p_0(ParentUnivConstraints_35, &ParentUnivConstrainedTVars_37);
      parse_tree__prog_type__constraint_list_get_tvars_2_p_0(ParentExistConstraints_36, &ParentExistConstrainedTVars_38);
      mercury__list__remove_dups_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), ParentTVars_29, &ParentUnconstrainedTVars0_39);
      mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), ParentUnconstrainedTVars0_39, ParentUnivConstrainedTVars_37, &ParentUnconstrainedTVars1_40);
      mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), ParentUnconstrainedTVars1_40, ParentExistConstrainedTVars_38, &ParentUnconstrainedTVars_41);
      mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), ParentUnconstrainedTVars_41, ParentExistQVars_30, &ParentUnconstrainedUnivTVars_42);
      mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), ParentUnconstrainedTVars_41, ParentUnconstrainedUnivTVars_42, &ParentUnconstrainedExistTVars_43);
      hlds__vartypes__lookup_var_types_3_p_0(VarTypes_16, ArgVars0_10, &ActualArgTypes_44);
      parse_tree__prog_type__type_list_subsumes_det_3_p_0(ParentArgTypes_27, ActualArgTypes_44, &ParentToActualTypeSubst_45);
      check_hlds__polymorphism_info__poly_info_get_constraint_map_2_p_0(STATE_VARIABLE_Info_75_75, &ConstraintMap_46);
      GoalId_47 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_11);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ParentUnivConstraints_35, &NumUnivConstraints_48);
      hlds__hlds_class__lookup_hlds_constraint_list_5_p_0(ConstraintMap_46, (MR_Integer) 0, GoalId_47, NumUnivConstraints_48, &ActualUnivConstraints_49);
      parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(ParentKindMap_28, ParentToActualTypeSubst_45, ParentExistQVars_30, &ActualExistQVarTypes_50);
      succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(ActualExistQVarTypes_50, &ActualExistQVars0_51);
      if (succeeded)
        ActualExistQVars_52 = ActualExistQVars0_51;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_call\'/8", (MR_String) "existq_tvar bound");
          return;
        }
      Context_53 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_11);
      check_hlds__polymorphism_type_class_info__make_typeclass_info_vars_7_p_0(ActualUnivConstraints_49, ActualExistQVars_52, Context_53, &ExtraUnivClassVarsMCAs_54, &ExtraUnivClassGoals_55, STATE_VARIABLE_Info_75_75, &STATE_VARIABLE_Info_79_79);
      mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[4]), ExtraUnivClassVarsMCAs_54, &ExtraUnivClassVars_56);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ParentExistConstraints_36, &NumExistConstraints_57);
      hlds__hlds_class__lookup_hlds_constraint_list_5_p_0(ConstraintMap_46, (MR_Integer) 1, GoalId_47, NumExistConstraints_57, &ActualExistConstraints_58);
      check_hlds__polymorphism_type_class_info__make_existq_typeclass_info_vars_6_p_0(ActualExistConstraints_58, Context_53, &ExtraExistClassVars_59, &ExtraExistClassGoals_60, STATE_VARIABLE_Info_79_79, &STATE_VARIABLE_Info_81_81);
      parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(ParentKindMap_28, ParentToActualTypeSubst_45, ParentUnconstrainedUnivTVars_42, &ActualUnconstrainedUnivTypes_61);
      check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_vars_6_p_0(ActualUnconstrainedUnivTypes_61, Context_53, &ExtraUnivTypeInfoVarsMCAs_62, &ExtraUnivTypeInfoGoals_63, STATE_VARIABLE_Info_81_81, &STATE_VARIABLE_Info_82_82);
      mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[4]), ExtraUnivTypeInfoVarsMCAs_62, &ExtraUnivTypeInfoVars_64);
      parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(ParentKindMap_28, ParentToActualTypeSubst_45, ParentUnconstrainedExistTVars_43, &ActualUnconstrainedExistTypes_65);
      check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_vars_6_p_0(ActualUnconstrainedExistTypes_65, Context_53, &ExtraExistTypeInfoVarsMCAs_66, &ExtraExistTypeInfoGoals_67, STATE_VARIABLE_Info_82_82, STATE_VARIABLE_Info_72);
      mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[4]), ExtraExistTypeInfoVarsMCAs_66, &ExtraExistTypeInfoVars_68);
      Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraUnivTypeInfoGoals_63, ExtraExistTypeInfoGoals_67);
      Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraExistClassGoals_60, Var_85);
      *ExtraGoals_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraUnivClassGoals_55, Var_84);
      Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ExtraUnivClassVars_56, ExtraExistClassVars_59);
      Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ExtraExistTypeInfoVars_68, Var_87);
      *ExtraVars_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ExtraUnivTypeInfoVars_64, Var_86);
      NonLocals0_69 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_11);
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *ExtraVars_13, NonLocals0_69, &NonLocals_70);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_70, GoalInfo0_11, GoalInfo_12);
    }
  }
}

static MR_Box MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv10_LambdaHeadVar__2_56;

    conv10_LambdaHeadVar__2_56 = check_hlds__polymorphism__IntroducedFrom__func__polymorphism_process_foreign_proc_args__1654__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv10_LambdaHeadVar__2_56));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_MaybeArgNameBox_14;
    MR_Integer conv7_STATE_VARIABLE_N_21;

    check_hlds__polymorphism__foreign_proc_add_typeinfo_8_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv8_MaybeArgNameBox_14, ((MR_Integer) (wrapper_arg_3)), &conv7_STATE_VARIABLE_N_21);
    *wrapper_arg_2 = ((MR_Box) (conv8_MaybeArgNameBox_14));
    *wrapper_arg_4 = ((MR_Box) (conv7_STATE_VARIABLE_N_21));
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_MaybeArgNameBox_14;
    MR_Integer conv4_STATE_VARIABLE_N_21;

    check_hlds__polymorphism__foreign_proc_add_typeinfo_8_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv5_MaybeArgNameBox_14, ((MR_Integer) (wrapper_arg_3)), &conv4_STATE_VARIABLE_N_21);
    *wrapper_arg_2 = ((MR_Box) (conv5_MaybeArgNameBox_14));
    *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_N_21));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_foreign_proc_args__1640__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_MaybeArgNameBox_10;

    check_hlds__polymorphism__foreign_proc_add_typeclass_info_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_MaybeArgNameBox_10);
    *wrapper_arg_2 = ((MR_Box) (conv3_MaybeArgNameBox_10));
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_MaybeArgNameBox_10;

    check_hlds__polymorphism__foreign_proc_add_typeclass_info_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_MaybeArgNameBox_10);
    *wrapper_arg_2 = ((MR_Box) (conv2_MaybeArgNameBox_10));
  }
}

static MR_Box MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_CVars_4;

    conv1_CVars_4 = check_hlds__polymorphism__get_constrained_vars_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_CVars_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_CVars_4;

    conv0_CVars_4 = check_hlds__polymorphism__get_constrained_vars_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_CVars_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0(
  MR_Word PredInfo_5,
  MR_Word Impl_6,
  MR_Word Vars_7,
  MR_Word * Args_8)
{
  {
    MR_bool succeeded;
    MR_Word PredTypeVarSet_9;
    MR_Word ExistQVars_10;
    MR_Word PredArgTypes_11;
    MR_Word UnivCs_12;
    MR_Word ExistCs_13;
    MR_Word UnivVars0_14;
    MR_Word UnivConstrainedVars_15;
    MR_Word ExistVars0_16;
    MR_Word ExistConstrainedVars_17;
    MR_Word PredTypeVars0_18;
    MR_Word PredTypeVars1_19;
    MR_Word PredTypeVars2_20;
    MR_Word PredTypeVars_21;
    MR_Word In_22;
    MR_Word Out_23;
    MR_Word ExistTypeClassArgInfos_24;
    MR_Word UnivTypeClassArgInfos_25;
    MR_Word TypeClassArgInfos_26;
    MR_Word ExistUnconstrainedVars_27;
    MR_Word UnivUnconstrainedVars_28;
    MR_Word ExistTypeArgInfos_29;
    MR_Word UnivTypeArgInfos_31;
    MR_Word TypeInfoArgInfos_33;
    MR_Word ArgInfos_34;
    MR_Word TypeInfoTypes_35;
    MR_Word TypeClassInfoType_37;
    MR_Integer NumUnivCs_38;
    MR_Integer NumExistCs_39;
    MR_Word TypeClassInfoTypes_40;
    MR_Word OrigArgTypes_41;
    MR_Word Var_42;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_51;
    MR_Integer Var_57;
    MR_Box conv6_Var_30;
    MR_Box conv9_Var_32;

    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_5, &PredTypeVarSet_9, &ExistQVars_10, &PredArgTypes_11);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_5, &Var_42);
    UnivCs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 0))));
    ExistCs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 1))));
    UnivVars0_14 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[5]), (MR_Word) (&check_hlds__polymorphism_scalar_common_3[16]), UnivCs_12);
    mercury__list__condense_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), UnivVars0_14, &UnivConstrainedVars_15);
    ExistVars0_16 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[5]), (MR_Word) (&check_hlds__polymorphism_scalar_common_3[17]), ExistCs_13);
    mercury__list__condense_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), ExistVars0_16, &ExistConstrainedVars_17);
    parse_tree__prog_type__type_vars_list_2_p_0(PredArgTypes_11, &PredTypeVars0_18);
    mercury__list__remove_dups_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), PredTypeVars0_18, &PredTypeVars1_19);
    mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), PredTypeVars1_19, UnivConstrainedVars_15, &PredTypeVars2_20);
    mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), PredTypeVars2_20, ExistConstrainedVars_17, &PredTypeVars_21);
    parse_tree__prog_mode__in_mode_1_p_0(&In_22);
    parse_tree__prog_mode__out_mode_1_p_0(&Out_23);
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_3));
      MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (Out_23));
      MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) (Impl_6));
      MR_hl_field(MR_mktag(0), Var_45, 5) = ((MR_Box) (PredTypeVarSet_9));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), Var_45, ExistCs_13, &ExistTypeClassArgInfos_24);
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_4));
      MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (In_22));
      MR_hl_field(MR_mktag(0), Var_46, 4) = ((MR_Box) (Impl_6));
      MR_hl_field(MR_mktag(0), Var_46, 5) = ((MR_Box) (PredTypeVarSet_9));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), Var_46, UnivCs_12, &UnivTypeClassArgInfos_25);
    TypeClassArgInfos_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), UnivTypeClassArgInfos_25, ExistTypeClassArgInfos_24);
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_6[6]));
      MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_5));
      MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (ExistQVars_10));
    }
    mercury__list__filter_4_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), Var_47, PredTypeVars_21, &ExistUnconstrainedVars_27, &UnivUnconstrainedVars_28);
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_6));
      MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) ((MR_String) "Out"));
      MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) (Out_23));
      MR_hl_field(MR_mktag(0), Var_48, 5) = ((MR_Box) (Impl_6));
      MR_hl_field(MR_mktag(0), Var_48, 6) = ((MR_Box) (PredTypeVarSet_9));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_48, ExistUnconstrainedVars_27, &ExistTypeArgInfos_29, ((MR_Box) ((MR_Integer) 1)), &conv6_Var_30);
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_7));
      MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) ((MR_String) "In"));
      MR_hl_field(MR_mktag(0), Var_51, 4) = ((MR_Box) (In_22));
      MR_hl_field(MR_mktag(0), Var_51, 5) = ((MR_Box) (Impl_6));
      MR_hl_field(MR_mktag(0), Var_51, 6) = ((MR_Box) (PredTypeVarSet_9));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_51, UnivUnconstrainedVars_28, &UnivTypeArgInfos_31, ((MR_Box) ((MR_Integer) 1)), &conv9_Var_32);
    TypeInfoArgInfos_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), UnivTypeArgInfos_31, ExistTypeArgInfos_29);
    ArgInfos_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), TypeInfoArgInfos_33, TypeClassArgInfos_26);
    TypeInfoTypes_35 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_3[18]), PredTypeVars_21);
    TypeClassInfoType_37 = parse_tree__builtin_lib_types__typeclass_info_type_0_f_0();
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), UnivCs_12, &NumUnivCs_38);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ExistCs_13, &NumExistCs_39);
    Var_57 = (MR_Integer) ((MR_Unsigned) NumUnivCs_38 + (MR_Unsigned) NumExistCs_39);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_57, ((MR_Box) (TypeClassInfoType_37)), &TypeClassInfoTypes_40);
    OrigArgTypes_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeInfoTypes_35, TypeClassInfoTypes_40);
    hlds__hlds_goal__make_foreign_args_4_p_0(Vars_7, ArgInfos_34, OrigArgTypes_41, Args_8);
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_existq_unify_functor_9_p_0(
  MR_Word CtorDefn_10,
  MR_Word IsExistConstr_11,
  MR_Word ActualArgTypes_12,
  MR_Word ActualRetType_13,
  MR_Word GoalInfo_14,
  MR_Word * ExtraVars_15,
  MR_Word * ExtraGoals_16,
  MR_Word STATE_VARIABLE_Info_0_51,
  MR_Word * STATE_VARIABLE_Info_52)
{
  {
    MR_Word CtorTypeVarSet_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorDefn_10, (MR_Integer) 0))));
    MR_Word CtorKindMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorDefn_10, (MR_Integer) 1))));
    MR_Word CtorMaybeExistConstraints_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorDefn_10, (MR_Integer) 2))));
    MR_Word CtorArgTypes_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorDefn_10, (MR_Integer) 3))));
    MR_Word CtorRetType_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorDefn_10, (MR_Integer) 4))));
    MR_Word TypeVarSet0_23;
    MR_Word TypeVarSet_24;
    MR_Word CtorToParentRenaming_25;
    MR_Integer NumExistentialConstraints_33;
    MR_Word ParentKindMap_36;
    MR_Word ParentToActualTypeSubst_37;
    MR_Word ActualExistentialTypes_38;
    MR_Word ParentArgTypes_39;
    MR_Word ParentRetType_40;
    MR_Word ConstraintMap_41;
    MR_Word GoalId_42;
    MR_Word Context_43;
    MR_Word ExtraTypeClassGoals_46;
    MR_Word ExtraTypeClassVars_47;
    MR_Word ExtraTypeInfoVarsMCAs_48;
    MR_Word ExtraTypeInfoGoals_49;
    MR_Word ExtraTypeInfoVars_50;
    MR_Word STATE_VARIABLE_Info_53_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word STATE_VARIABLE_Info_60_60;

    check_hlds__polymorphism_info__poly_info_get_typevarset_2_p_0(STATE_VARIABLE_Info_0_51, &TypeVarSet0_23);
    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TypeVarSet0_23, CtorTypeVarSet_18, &TypeVarSet_24, &CtorToParentRenaming_25);
    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0(CtorToParentRenaming_25, CtorKindMap_19, &ParentKindMap_36);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(CtorToParentRenaming_25, CtorArgTypes_21, &ParentArgTypes_39);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(CtorToParentRenaming_25, CtorRetType_22, &ParentRetType_40);
    check_hlds__polymorphism_info__poly_info_set_typevarset_3_p_0(TypeVarSet_24, STATE_VARIABLE_Info_0_51, &STATE_VARIABLE_Info_53_53);
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (ParentRetType_40));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (ParentArgTypes_39));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (ActualRetType_13));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (ActualArgTypes_12));
    }
    parse_tree__prog_type__type_list_subsumes_det_3_p_0(Var_54, Var_55, &ParentToActualTypeSubst_37);
    if ((CtorMaybeExistConstraints_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      NumExistentialConstraints_33 = (MR_Integer) 0;
      ActualExistentialTypes_38 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word CtorExistConstraints_26 = (MR_Word) (MR_body((MR_Word) (CtorMaybeExistConstraints_20), (MR_Integer) 1));
      MR_Word CtorExistQVars_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorExistConstraints_26, (MR_Integer) 0))));
      MR_Word CtorExistentialConstraints_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorExistConstraints_26, (MR_Integer) 1))));
      MR_Word ParentExistQVars_31;
      MR_Word ParentExistentialConstraints_32;
      MR_Word ParentExistConstrainedTVars_34;
      MR_Word ParentUnconstrainedExistQVars_35;

      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(CtorToParentRenaming_25, CtorExistQVars_27, &ParentExistQVars_31);
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(CtorToParentRenaming_25, CtorExistentialConstraints_28, &ParentExistentialConstraints_32);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ParentExistentialConstraints_32, &NumExistentialConstraints_33);
      parse_tree__prog_type__constraint_list_get_tvars_2_p_0(ParentExistentialConstraints_32, &ParentExistConstrainedTVars_34);
      mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), ParentExistQVars_31, ParentExistConstrainedTVars_34, &ParentUnconstrainedExistQVars_35);
      parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(ParentKindMap_36, ParentToActualTypeSubst_37, ParentUnconstrainedExistQVars_35, &ActualExistentialTypes_38);
    }
    check_hlds__polymorphism_info__poly_info_get_constraint_map_2_p_0(STATE_VARIABLE_Info_53_53, &ConstraintMap_41);
    GoalId_42 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_14);
    Context_43 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_14);
    switch (IsExistConstr_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ActualExistentialConstraints_44;
          MR_Word ExtraTypeClassVarsMCAs_45;

          hlds__hlds_class__lookup_hlds_constraint_list_5_p_0(ConstraintMap_41, (MR_Integer) 0, GoalId_42, NumExistentialConstraints_33, &ActualExistentialConstraints_44);
          check_hlds__polymorphism_type_class_info__make_typeclass_info_vars_7_p_0(ActualExistentialConstraints_44, (MR_Word) ((MR_Unsigned) 0U), Context_43, &ExtraTypeClassVarsMCAs_45, &ExtraTypeClassGoals_46, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_60_60);
          mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[4]), ExtraTypeClassVarsMCAs_45, &ExtraTypeClassVars_47);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word ActualExistentialConstraints_62;

          hlds__hlds_class__lookup_hlds_constraint_list_5_p_0(ConstraintMap_41, (MR_Integer) 1, GoalId_42, NumExistentialConstraints_33, &ActualExistentialConstraints_62);
          check_hlds__polymorphism_type_class_info__make_existq_typeclass_info_vars_6_p_0(ActualExistentialConstraints_62, Context_43, &ExtraTypeClassVars_47, &ExtraTypeClassGoals_46, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_60_60);
        }
        break;
    }
    check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_vars_6_p_0(ActualExistentialTypes_38, Context_43, &ExtraTypeInfoVarsMCAs_48, &ExtraTypeInfoGoals_49, STATE_VARIABLE_Info_60_60, STATE_VARIABLE_Info_52);
    mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[4]), ExtraTypeInfoVarsMCAs_48, &ExtraTypeInfoVars_50);
    *ExtraGoals_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraTypeInfoGoals_49, ExtraTypeClassGoals_46);
    *ExtraVars_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ExtraTypeInfoVars_50, ExtraTypeClassVars_47);
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism__fixup_lambda_quantification_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__polymorphism__IntroducedFrom__pred__fixup_lambda_quantification__2118__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism__fixup_lambda_quantification_9_p_0(
  MR_Word LambdaNonLocals0_10,
  MR_Word ArgVars_11,
  MR_Word ExistQVars_12,
  MR_Word STATE_VARIABLE_Goal_0_34,
  MR_Word * STATE_VARIABLE_Goal_35,
  MR_Word * LambdaTiTciVars_14,
  MR_Word * AllTiTciGoalVars_15,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37)
{
  {
    MR_bool succeeded;
    MR_Word RttiVarMaps0_17;

    check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_36, &RttiVarMaps0_17);
    succeeded = hlds__hlds_rtti__rtti_varmaps_no_tvars_1_p_0(RttiVarMaps0_17);
    if (succeeded)
    {
      parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaTiTciVars_14);
      parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AllTiTciGoalVars_15);
      *STATE_VARIABLE_Info_37 = STATE_VARIABLE_Info_0_36;
      *STATE_VARIABLE_Goal_35 = STATE_VARIABLE_Goal_0_34;
    }
    else
    {
      MR_Word VarSet0_18;
      MR_Word VarTypes0_19;
      MR_Word GoalInfo0_21;
      MR_Word NonLocals_22;
      MR_Word BothNonLocals_23;
      MR_Word NonLocalsWithArgVars_24;
      MR_Word GoalVars_25;
      MR_Word IsTiOrTci_26;
      MR_Word PossibleOutsideVars_29;
      MR_Word VarSet_31;
      MR_Word VarTypes_32;
      MR_Word RttiVarMaps_33;
      MR_Word STATE_VARIABLE_Info_39_39;
      MR_Word _Warnings_30;

      check_hlds__polymorphism_info__poly_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_36, &VarSet0_18);
      check_hlds__polymorphism_info__poly_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_36, &VarTypes0_19);
      GoalInfo0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_34, (MR_Integer) 1))));
      NonLocals_22 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_21);
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaNonLocals0_10, NonLocals_22, &BothNonLocals_23);
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_11, BothNonLocals_23, &NonLocalsWithArgVars_24);
      hlds__goal_util__extra_nonlocal_typeinfos_typeclass_infos_5_p_0(RttiVarMaps0_17, VarTypes0_19, ExistQVars_12, NonLocalsWithArgVars_24, LambdaTiTciVars_14);
      hlds__goal_util__goal_vars_2_p_0(STATE_VARIABLE_Goal_0_34, &GoalVars_25);
      {
        IsTiOrTci_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), IsTiOrTci_26, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_6[4]));
        MR_hl_field(MR_mktag(0), IsTiOrTci_26, 1) = ((MR_Box) (check_hlds__polymorphism__fixup_lambda_quantification_9_p_0_1));
        MR_hl_field(MR_mktag(0), IsTiOrTci_26, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), IsTiOrTci_26, 3) = ((MR_Box) (VarTypes0_19));
      }
      parse_tree__set_of_var__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), IsTiOrTci_26, GoalVars_25, AllTiTciGoalVars_15);
      check_hlds__polymorphism_info__poly_info_set_must_requantify_2_p_0(STATE_VARIABLE_Info_0_36, &STATE_VARIABLE_Info_39_39);
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsWithArgVars_24, *AllTiTciGoalVars_15, &PossibleOutsideVars_29);
      hlds__quantification__implicitly_quantify_goal_general_11_p_0((MR_Integer) 0, PossibleOutsideVars_29, &_Warnings_30, STATE_VARIABLE_Goal_0_34, STATE_VARIABLE_Goal_35, VarSet0_18, &VarSet_31, VarTypes0_19, &VarTypes_32, RttiVarMaps0_17, &RttiVarMaps_33);
      check_hlds__polymorphism_info__poly_info_set_varset_types_rtti_5_p_0(VarSet_31, VarTypes_32, RttiVarMaps_33, STATE_VARIABLE_Info_39_39, STATE_VARIABLE_Info_37);
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__unification_typeinfos_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    hlds__hlds_rtti__type_info_locn_var_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  }
}

static void MR_CALL 
check_hlds__polymorphism__unification_typeinfos_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;
    MR_Word conv0_HeadVar__4_4;

    check_hlds__polymorphism_type_info__get_type_info_locn_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
check_hlds__polymorphism__unification_typeinfos_8_p_0(
  MR_Word Type_9,
  MR_Word STATE_VARIABLE_Unification_0_18,
  MR_Word * STATE_VARIABLE_Unification_19,
  MR_Word STATE_VARIABLE_GoalInfo_0_20,
  MR_Word * STATE_VARIABLE_GoalInfo_21,
  MR_Word * Changed_12,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_Word TypeVars_14;

    parse_tree__prog_type__type_vars_2_p_0(Type_9, &TypeVars_14);
    if ((TypeVars_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Changed_12 = (MR_Integer) 0;
      *STATE_VARIABLE_Unification_19 = STATE_VARIABLE_Unification_0_18;
      *STATE_VARIABLE_GoalInfo_21 = STATE_VARIABLE_GoalInfo_0_20;
      *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
    }
    else
    {
      MR_Word TypeInfoLocns_17;
      MR_Word TypeInfoVars0_42;
      MR_Word TypeInfoVars_43;
      MR_Word NonLocals0_44;
      MR_Word NonLocals_45;
      MR_Box conv2_STATE_VARIABLE_Info_23;

      mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_3[14]), TypeVars_14, &TypeInfoLocns_17, ((MR_Box) (STATE_VARIABLE_Info_0_22)), &conv2_STATE_VARIABLE_Info_23);
      *STATE_VARIABLE_Info_23 = ((MR_Word) (conv2_STATE_VARIABLE_Info_23));
      mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_3[15]), TypeInfoLocns_17, &TypeInfoVars0_42);
      mercury__list__remove_dups_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), TypeInfoVars0_42, &TypeInfoVars_43);
      NonLocals0_44 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(STATE_VARIABLE_GoalInfo_0_20);
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVars_43, NonLocals0_44, &NonLocals_45);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_45, STATE_VARIABLE_GoalInfo_0_20, STATE_VARIABLE_GoalInfo_21);
      switch (MR_tag((MR_Word) STATE_VARIABLE_Unification_0_18)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Unification_19 = STATE_VARIABLE_Unification_0_18;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Unification_19 = STATE_VARIABLE_Unification_0_18;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_Unification_19 = STATE_VARIABLE_Unification_0_18;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Unification_0_18, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_Unification_19 = STATE_VARIABLE_Unification_0_18;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Modes_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Unification_0_18, (MR_Integer) 1))));
                MR_Word CanFail_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Unification_0_18, (MR_Integer) 2))) & (MR_Integer) 1);

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Unification_19 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Modes_46));
                  MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) (CanFail_47));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (TypeInfoVars_43));
                }
              }
              break;
          }
          break;
      }
      *Changed_12 = (MR_Integer) 1;
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__produce_existq_tvars_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__polymorphism__produce_existq_tvars_9_p_0(
  MR_Word PredInfo_10,
  MR_Word HeadVars_11,
  MR_Word UnconstrainedTVars_12,
  MR_Word TypeInfoHeadVars_13,
  MR_Word ExistTypeClassInfoHeadVars_14,
  MR_Word Goal0_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46)
{
  {
    MR_bool succeeded;
    MR_Word VarTypes0_18;
    MR_Word ConstraintMap_19;
    MR_Word ArgTypes_20;
    MR_Word KindMap_21;
    MR_Word PredClassContext_22;
    MR_Word PredExistConstraints_23;
    MR_Word ActualExistConstraints_24;
    MR_Word GoalInfo_27;
    MR_Word Context_28;
    MR_Word ExistTypeClassVarsMCAs_29;
    MR_Word ExtraTypeClassGoals_30;
    MR_Word ExistTypeClassVars_31;
    MR_Word RttiVarMaps0_32;
    MR_Word RttiVarMaps_33;
    MR_Word ExtraTypeClassUnifyGoals_34;
    MR_Word PredToActualTypeSubst_35;
    MR_Word ActualTypes_39;
    MR_Word TypeInfoVarsMCAs_40;
    MR_Word ExtraTypeInfoGoals_41;
    MR_Word TypeInfoVars_42;
    MR_Word ExtraTypeInfoUnifyGoals_43;
    MR_Word GoalList_44;
    MR_Word STATE_VARIABLE_Info_47_47;
    MR_Word STATE_VARIABLE_Info_49_49;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Integer NumExistConstraints_72;
    MR_Word ActualExistConstraintsPrime_73;
    MR_Word Var_75;
    MR_Box conv1_RttiVarMaps_33;

    check_hlds__polymorphism_info__poly_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_45, &VarTypes0_18);
    check_hlds__polymorphism_info__poly_info_get_constraint_map_2_p_0(STATE_VARIABLE_Info_0_45, &ConstraintMap_19);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_10, &ArgTypes_20);
    hlds__hlds_pred__pred_info_get_tvar_kind_map_2_p_0(PredInfo_10, &KindMap_21);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_10, &PredClassContext_22);
    PredExistConstraints_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredClassContext_22, (MR_Integer) 1))));
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), PredExistConstraints_23, &NumExistConstraints_72);
    Var_75 = mdbcomp__goal_path__goal_id_for_head_constraints_0_f_0();
    succeeded = hlds__hlds_class__search_hlds_constraint_list_5_p_0(ConstraintMap_19, (MR_Integer) 0, Var_75, NumExistConstraints_72, &ActualExistConstraintsPrime_73);
    if (succeeded)
      ActualExistConstraints_24 = ActualExistConstraintsPrime_73;
    else
      ActualExistConstraints_24 = PredExistConstraints_23;
    GoalInfo_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_15, (MR_Integer) 1))));
    Context_28 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_27);
    check_hlds__polymorphism_type_class_info__make_typeclass_info_vars_7_p_0(ActualExistConstraints_24, (MR_Word) ((MR_Unsigned) 0U), Context_28, &ExistTypeClassVarsMCAs_29, &ExtraTypeClassGoals_30, STATE_VARIABLE_Info_0_45, &STATE_VARIABLE_Info_47_47);
    mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[4]), ExistTypeClassVarsMCAs_29, &ExistTypeClassVars_31);
    check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_47_47, &RttiVarMaps0_32);
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_3[13]), ExistTypeClassVars_31, ((MR_Box) (RttiVarMaps0_32)), &conv1_RttiVarMaps_33);
    RttiVarMaps_33 = ((MR_Word) (conv1_RttiVarMaps_33));
    check_hlds__polymorphism_info__poly_info_set_rtti_varmaps_3_p_0(RttiVarMaps_33, STATE_VARIABLE_Info_47_47, &STATE_VARIABLE_Info_49_49);
    hlds__make_goal__make_complicated_unify_assigns_3_p_0(ExistTypeClassInfoHeadVars_14, ExistTypeClassVars_31, &ExtraTypeClassUnifyGoals_34);
    succeeded = hlds__vartypes__vartypes_is_empty_1_p_0(VarTypes0_18);
    if (succeeded)
      mercury__map__init_1_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &PredToActualTypeSubst_35);
    else
    {
      MR_Word ArgTypeSubst_38;
      MR_Word HeadVarList_36;
      MR_Word ActualArgTypes_37;

      HeadVarList_36 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), HeadVars_11);
      hlds__vartypes__lookup_var_types_3_p_0(VarTypes0_18, HeadVarList_36, &ActualArgTypes_37);
      succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(ArgTypes_20, ActualArgTypes_37, &ArgTypeSubst_38);
      if (succeeded)
        PredToActualTypeSubst_35 = ArgTypeSubst_38;
      else
        mercury__map__init_1_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &PredToActualTypeSubst_35);
    }
    parse_tree__prog_type_subst__apply_subst_to_tvar_list_4_p_0(KindMap_21, PredToActualTypeSubst_35, UnconstrainedTVars_12, &ActualTypes_39);
    check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_vars_6_p_0(ActualTypes_39, Context_28, &TypeInfoVarsMCAs_40, &ExtraTypeInfoGoals_41, STATE_VARIABLE_Info_49_49, STATE_VARIABLE_Info_46);
    mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[4]), TypeInfoVarsMCAs_40, &TypeInfoVars_42);
    hlds__make_goal__make_complicated_unify_assigns_3_p_0(TypeInfoHeadVars_13, TypeInfoVars_42, &ExtraTypeInfoUnifyGoals_43);
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Goal0_15));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (ExtraTypeClassGoals_30));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (ExtraTypeInfoUnifyGoals_43));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (ExtraTypeInfoGoals_41));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (ExtraTypeClassUnifyGoals_34));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
    }
    mercury__list__condense_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_51, &GoalList_44);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_44, GoalInfo_27, Goal_16);
  }
}

static void MR_CALL 
check_hlds__polymorphism__maybe_polymorphism_process_pred_7_p_0(
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_SafeToContinue_0_16,
  MR_Word * STATE_VARIABLE_SafeToContinue_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19,
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo_12;
    MR_Word PredModule_13;
    MR_String PredName_14;
    MR_Integer PredArity_15;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_20, PredId_8, &PredInfo_12);
    PredModule_13 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_12);
    PredName_14 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_12);
    PredArity_15 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_12);
    succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(PredModule_13, PredName_14, PredArity_15);
    if (succeeded)
    {
      *STATE_VARIABLE_ModuleInfo_21 = STATE_VARIABLE_ModuleInfo_0_20;
      *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
      *STATE_VARIABLE_SafeToContinue_17 = STATE_VARIABLE_SafeToContinue_0_16;
    }
    else
    {
      MR_Word PredSafeToContinue_36;

      check_hlds__polymorphism__polymorphism_process_pred_6_p_0(PredId_8, &PredSafeToContinue_36, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19, STATE_VARIABLE_ModuleInfo_0_20, STATE_VARIABLE_ModuleInfo_21);
      switch (PredSafeToContinue_36) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_SafeToContinue_17 = STATE_VARIABLE_SafeToContinue_0_16;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_SafeToContinue_17 = (MR_Integer) 1;
          break;
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__unification_typeinfos_rtti_varmaps_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    hlds__hlds_rtti__type_info_locn_var_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  }
}

static void MR_CALL 
check_hlds__polymorphism__unification_typeinfos_rtti_varmaps_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

void MR_CALL 
check_hlds__polymorphism__unification_typeinfos_rtti_varmaps_6_p_0(
  MR_Word Type_7,
  MR_Word RttiVarMaps_8,
  MR_Word STATE_VARIABLE_Unification_0_13,
  MR_Word * STATE_VARIABLE_Unification_14,
  MR_Word STATE_VARIABLE_GoalInfo_0_15,
  MR_Word * STATE_VARIABLE_GoalInfo_16)
{
  {
    MR_Word TypeVars_11;
    MR_Word TypeInfoLocns_12;
    MR_Word Var_17;
    MR_Word TypeInfoVars0_31;
    MR_Word TypeInfoVars_32;
    MR_Word NonLocals0_33;
    MR_Word NonLocals_34;

    parse_tree__prog_type__type_vars_2_p_0(Type_7, &TypeVars_11);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_8[3]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (check_hlds__polymorphism__unification_typeinfos_rtti_varmaps_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (RttiVarMaps_8));
    }
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), Var_17, TypeVars_11, &TypeInfoLocns_12);
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_3[12]), TypeInfoLocns_12, &TypeInfoVars0_31);
    mercury__list__remove_dups_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), TypeInfoVars0_31, &TypeInfoVars_32);
    NonLocals0_33 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(STATE_VARIABLE_GoalInfo_0_15);
    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TypeInfoVars_32, NonLocals0_33, &NonLocals_34);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_34, STATE_VARIABLE_GoalInfo_0_15, STATE_VARIABLE_GoalInfo_16);
    switch (MR_tag((MR_Word) STATE_VARIABLE_Unification_0_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Unification_14 = STATE_VARIABLE_Unification_0_13;
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Unification_14 = STATE_VARIABLE_Unification_0_13;
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_Unification_14 = STATE_VARIABLE_Unification_0_13;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Unification_0_13, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Unification_14 = STATE_VARIABLE_Unification_0_13;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Modes_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Unification_0_13, (MR_Integer) 1))));
              MR_Word CanFail_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Unification_0_13, (MR_Integer) 2))) & (MR_Integer) 1);

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Unification_14 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Modes_35));
                MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) (CanFail_36));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (TypeInfoVars_32));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    check_hlds__introduce_exists_casts__introduce_exists_casts_poly_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__409__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__407__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10)
{
  {
    MR_bool succeeded;
    MR_Word SafeToContinue_6;
    MR_Word Specs_7;
    MR_Word ExistsPredIds_8;
    MR_Word STATE_VARIABLE_ModuleInfo_12_12;
    MR_Word Var_13;
    MR_Word Var_17;
    MR_Word STATE_VARIABLE_ModuleInfo_22_22;
    MR_Word STATE_VARIABLE_ModuleInfo_23_23;
    MR_Box conv1_STATE_VARIABLE_ModuleInfo_10;

    check_hlds__polymorphism__polymorphism_process_pred_6_p_0(PredId_4, &SafeToContinue_6, (MR_Word) ((MR_Unsigned) 0U), &Specs_7, STATE_VARIABLE_ModuleInfo_0_9, &STATE_VARIABLE_ModuleInfo_12_12);
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Specs_7));
      MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_13, (MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_generated_pred\'/3", (MR_String) "generated pred has errors");
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_2));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (SafeToContinue_6));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_17, (MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_generated_pred\'/3", (MR_String) "generated pred has errors");
    check_hlds__polymorphism__fixup_pred_polymorphism_5_p_0(PredId_4, (MR_Word) ((MR_Unsigned) 0U), &ExistsPredIds_8, STATE_VARIABLE_ModuleInfo_12_12, &STATE_VARIABLE_ModuleInfo_22_22);
    check_hlds__clause_to_proc__copy_clauses_to_procs_for_pred_in_module_info_3_p_0(PredId_4, STATE_VARIABLE_ModuleInfo_22_22, &STATE_VARIABLE_ModuleInfo_23_23);
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_3[11]), ExistsPredIds_8, ((MR_Box) (STATE_VARIABLE_ModuleInfo_23_23)), &conv1_STATE_VARIABLE_ModuleInfo_10);
    *STATE_VARIABLE_ModuleInfo_10 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_10));
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_pred_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_ProcInfo_10;

    check_hlds__polymorphism__add_extra_arg_modes_to_proc_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_STATE_VARIABLE_ProcInfo_10);
    *wrapper_arg_2 = ((MR_Box) (conv3_STATE_VARIABLE_ProcInfo_10));
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_pred_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Clause_25;
    MR_Word conv0_STATE_VARIABLE_Info_27;

    check_hlds__polymorphism__polymorphism_process_clause_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_Clause_25, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_27);
    *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Clause_25));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_27));
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_pred_6_p_0(
  MR_Word PredId_7,
  MR_Word * SafeToContinue_8,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30)
{
  {
    MR_Word PredInfo0_12;
    MR_Word ClausesInfo0_13;
    MR_Word ClausesInfo_14;
    MR_Word PolyInfo_15;
    MR_Word ExtraArgModes_16;
    MR_Word ConstStructDb_17;
    MR_Word TypeVarSet_18;
    MR_Word PredInfo1_19;
    MR_Word PredInfo2_20;
    MR_Word PredSpecs_21;
    MR_Word ProcMap0_24;
    MR_Word ProcMap_25;
    MR_Word PredInfo_26;
    MR_Word STATE_VARIABLE_ModuleInfo_35_35;
    MR_Word STATE_VARIABLE_ModuleInfo_36_36;
    MR_Word Var_38;
    MR_Word ExplicitVarTypes_57;
    MR_Word HeadVars0_60;
    MR_Word ClausesRep0_61;
    MR_Word ItemNumbers_62;
    MR_Word HeadVars_66;
    MR_Word UnconstrainedTVars_67;
    MR_Word ExtraTypeInfoHeadVars_68;
    MR_Word ExistTypeClassInfoHeadVars_69;
    MR_Word Clauses0_70;
    MR_Word Clauses_71;
    MR_Word VarSet_72;
    MR_Word VarTypes_73;
    MR_Word RttiVarMaps_74;
    MR_Word ClausesRep_75;
    MR_Word TVarNameMap_76;
    MR_Word STATE_VARIABLE_Info_36_77;
    MR_Word STATE_VARIABLE_Info_37_78;
    MR_Word Var_79;
    MR_Unsigned packed_word_0;
    MR_Box conv2_PolyInfo_15;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_29, PredId_7, &PredInfo0_12);
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_12, &ClausesInfo0_13);
    check_hlds__polymorphism_info__init_poly_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_29, PredInfo0_12, ClausesInfo0_13, &STATE_VARIABLE_Info_36_77);
    ExplicitVarTypes_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo0_13, (MR_Integer) 1))));
    HeadVars0_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo0_13, (MR_Integer) 4))));
    ClausesRep0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo0_13, (MR_Integer) 5))));
    ItemNumbers_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClausesInfo0_13, (MR_Integer) 6))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), ClausesInfo0_13, (MR_Integer) 8)));
    check_hlds__polymorphism__setup_headvars_9_p_0(PredInfo0_12, HeadVars0_60, &HeadVars_66, &ExtraArgModes_16, &UnconstrainedTVars_67, &ExtraTypeInfoHeadVars_68, &ExistTypeClassInfoHeadVars_69, STATE_VARIABLE_Info_36_77, &STATE_VARIABLE_Info_37_78);
    hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(ClausesRep0_61, &Clauses0_70);
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_pred_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (PredInfo0_12));
      MR_hl_field(MR_mktag(0), Var_79, 4) = ((MR_Box) (HeadVars0_60));
      MR_hl_field(MR_mktag(0), Var_79, 5) = ((MR_Box) (HeadVars_66));
      MR_hl_field(MR_mktag(0), Var_79, 6) = ((MR_Box) (UnconstrainedTVars_67));
      MR_hl_field(MR_mktag(0), Var_79, 7) = ((MR_Box) (ExtraTypeInfoHeadVars_68));
      MR_hl_field(MR_mktag(0), Var_79, 8) = ((MR_Box) (ExistTypeClassInfoHeadVars_69));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0), Var_79, Clauses0_70, &Clauses_71, ((MR_Box) (STATE_VARIABLE_Info_37_78)), &conv2_PolyInfo_15);
    PolyInfo_15 = ((MR_Word) (conv2_PolyInfo_15));
    check_hlds__polymorphism_info__poly_info_get_varset_2_p_0(PolyInfo_15, &VarSet_72);
    check_hlds__polymorphism_info__poly_info_get_var_types_2_p_0(PolyInfo_15, &VarTypes_73);
    check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(PolyInfo_15, &RttiVarMaps_74);
    hlds__hlds_clauses__set_clause_list_2_p_0(Clauses_71, &ClausesRep_75);
    hlds__vartypes__init_vartypes_1_p_0(&TVarNameMap_76);
    {
      ClausesInfo_14 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ClausesInfo_14, 0) = ((MR_Box) (VarSet_72));
      MR_hl_field(MR_mktag(0), ClausesInfo_14, 1) = ((MR_Box) (ExplicitVarTypes_57));
      MR_hl_field(MR_mktag(0), ClausesInfo_14, 2) = ((MR_Box) (TVarNameMap_76));
      MR_hl_field(MR_mktag(0), ClausesInfo_14, 3) = ((MR_Box) (VarTypes_73));
      MR_hl_field(MR_mktag(0), ClausesInfo_14, 4) = ((MR_Box) (HeadVars_66));
      MR_hl_field(MR_mktag(0), ClausesInfo_14, 5) = ((MR_Box) (ClausesRep_75));
      MR_hl_field(MR_mktag(0), ClausesInfo_14, 6) = ((MR_Box) (ItemNumbers_62));
      MR_hl_field(MR_mktag(0), ClausesInfo_14, 7) = ((MR_Box) (RttiVarMaps_74));
      MR_hl_field(MR_mktag(0), ClausesInfo_14, 8) = (MR_Box) (packed_word_0);
    }
    check_hlds__polymorphism_info__poly_info_get_module_info_2_p_0(PolyInfo_15, &STATE_VARIABLE_ModuleInfo_35_35);
    check_hlds__polymorphism_info__poly_info_get_const_struct_db_2_p_0(PolyInfo_15, &ConstStructDb_17);
    hlds__hlds_module__module_info_set_const_struct_db_3_p_0(ConstStructDb_17, STATE_VARIABLE_ModuleInfo_35_35, &STATE_VARIABLE_ModuleInfo_36_36);
    check_hlds__polymorphism_info__poly_info_get_typevarset_2_p_0(PolyInfo_15, &TypeVarSet_18);
    hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVarSet_18, PredInfo0_12, &PredInfo1_19);
    hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_14, PredInfo1_19, &PredInfo2_20);
    check_hlds__polymorphism_info__poly_info_get_errors_2_p_0(PolyInfo_15, &PredSpecs_21);
    if ((PredSpecs_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *SafeToContinue_8 = (MR_Integer) 0;
      *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
    }
    else
    {
      *SafeToContinue_8 = (MR_Integer) 1;
      *STATE_VARIABLE_Specs_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), PredSpecs_21, STATE_VARIABLE_Specs_0_27);
    }
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo2_20, &ProcMap0_24);
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_pred_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (ExtraArgModes_16));
    }
    mercury__map__map_values_only_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), Var_38, ProcMap0_24, &ProcMap_25);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcMap_25, PredInfo2_20, &PredInfo_26);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_7, PredInfo_26, STATE_VARIABLE_ModuleInfo_36_36, STATE_VARIABLE_ModuleInfo_30);
  }
}

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_9_p_0(
  MR_Word PredInfo_10,
  MR_Word STATE_VARIABLE_HeadVars_0_47,
  MR_Word * STATE_VARIABLE_HeadVars_48,
  MR_Word * ExtraArgModes_12,
  MR_Word * UnconstrainedTVars_13,
  MR_Word * ExtraHeadTypeInfoVars_14,
  MR_Word * ExistHeadTypeClassInfoVars_15,
  MR_Word STATE_VARIABLE_Info_0_49,
  MR_Word * STATE_VARIABLE_Info_50)
{
  {
    MR_Word Origin_17;
    MR_Word ExtraArgModes0_18;

    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_10, &Origin_17);
    ExtraArgModes0_18 = hlds__hlds_args__poly_arg_vector_init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0));
    switch (MR_tag((MR_Word) Origin_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ClassContext_43;

          hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_10, &ClassContext_43);
          check_hlds__polymorphism__setup_headvars_2_14_p_0(PredInfo_10, ClassContext_43, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_HeadVars_0_47, STATE_VARIABLE_HeadVars_48, UnconstrainedTVars_13, ExtraHeadTypeInfoVars_14, ExistHeadTypeClassInfoVars_15, ExtraArgModes0_18, ExtraArgModes_12, STATE_VARIABLE_Info_0_49, STATE_VARIABLE_Info_50);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ClassContext_43;

          hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_10, &ClassContext_43);
          check_hlds__polymorphism__setup_headvars_2_14_p_0(PredInfo_10, ClassContext_43, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_HeadVars_0_47, STATE_VARIABLE_HeadVars_48, UnconstrainedTVars_13, ExtraHeadTypeInfoVars_14, ExistHeadTypeClassInfoVars_15, ExtraArgModes0_18, ExtraArgModes_12, STATE_VARIABLE_Info_0_49, STATE_VARIABLE_Info_50);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word InstanceMethodConstraints_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Origin_17, (MR_Integer) 1))));

          check_hlds__polymorphism__setup_headvars_instance_method_11_p_0(PredInfo_10, InstanceMethodConstraints_20, STATE_VARIABLE_HeadVars_0_47, STATE_VARIABLE_HeadVars_48, UnconstrainedTVars_13, ExtraHeadTypeInfoVars_14, ExistHeadTypeClassInfoVars_15, ExtraArgModes0_18, ExtraArgModes_12, STATE_VARIABLE_Info_0_49, STATE_VARIABLE_Info_50);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ClassContext_43;

          hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_10, &ClassContext_43);
          check_hlds__polymorphism__setup_headvars_2_14_p_0(PredInfo_10, ClassContext_43, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_HeadVars_0_47, STATE_VARIABLE_HeadVars_48, UnconstrainedTVars_13, ExtraHeadTypeInfoVars_14, ExistHeadTypeClassInfoVars_15, ExtraArgModes0_18, ExtraArgModes_12, STATE_VARIABLE_Info_0_49, STATE_VARIABLE_Info_50);
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_instance_method_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_instance_method_11_p_0(
  MR_Word PredInfo_12,
  MR_Word InstanceMethodConstraints_13,
  MR_Word STATE_VARIABLE_HeadVars_0_36,
  MR_Word * STATE_VARIABLE_HeadVars_37,
  MR_Word * UnconstrainedTVars_15,
  MR_Word * ExtraHeadTypeInfoVars_16,
  MR_Word * ExistHeadTypeClassInfoVars_17,
  MR_Word STATE_VARIABLE_ExtraArgModes_0_38,
  MR_Word * STATE_VARIABLE_ExtraArgModes_39,
  MR_Word STATE_VARIABLE_Info_0_40,
  MR_Word * STATE_VARIABLE_Info_41)
{
  {
    MR_Word InstanceTypes_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceMethodConstraints_13, (MR_Integer) 1))));
    MR_Word InstanceConstraints_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceMethodConstraints_13, (MR_Integer) 2))));
    MR_Word ClassContext_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceMethodConstraints_13, (MR_Integer) 3))));
    MR_Word InstanceTVars_24;
    MR_Word UnconstrainedInstanceTVars_25;
    MR_Word ArgTypeVarSet_26;
    MR_Word UnconstrainedInstanceTypeInfoVars_29;
    MR_Word InstanceHeadTypeClassInfoVars_30;
    MR_Word RttiVarMaps0_31;
    MR_Word RttiVarMaps_32;
    MR_Word InMode_33;
    MR_Word UnconstrainedInstanceTypeInfoModes_34;
    MR_Word InstanceHeadTypeClassInfoModes_35;
    MR_Word STATE_VARIABLE_Info_42_42;
    MR_Word STATE_VARIABLE_Info_44_44;
    MR_Word STATE_VARIABLE_HeadVars_45_45;
    MR_Word STATE_VARIABLE_HeadVars_46_46;
    MR_Word STATE_VARIABLE_Info_48_48;
    MR_Integer Var_49;
    MR_Integer Var_50;
    MR_Word STATE_VARIABLE_ExtraArgModes_51_51;
    MR_Word STATE_VARIABLE_ExtraArgModes_52_52;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Box conv1_RttiVarMaps_32;

    parse_tree__prog_type__type_vars_list_2_p_0(InstanceTypes_21, &InstanceTVars_24);
    parse_tree__prog_type__get_unconstrained_tvars_3_p_0(InstanceTVars_24, InstanceConstraints_22, &UnconstrainedInstanceTVars_25);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_12, &ArgTypeVarSet_26, &Var_27, &Var_28);
    check_hlds__polymorphism__make_head_vars_5_p_0(UnconstrainedInstanceTVars_25, ArgTypeVarSet_26, &UnconstrainedInstanceTypeInfoVars_29, STATE_VARIABLE_Info_0_40, &STATE_VARIABLE_Info_42_42);
    check_hlds__polymorphism_type_class_info__make_typeclass_info_head_vars_5_p_0((MR_Integer) 0, InstanceConstraints_22, &InstanceHeadTypeClassInfoVars_30, STATE_VARIABLE_Info_42_42, &STATE_VARIABLE_Info_44_44);
    hlds__hlds_args__proc_arg_vector_set_instance_type_infos_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), UnconstrainedInstanceTypeInfoVars_29, STATE_VARIABLE_HeadVars_0_36, &STATE_VARIABLE_HeadVars_45_45);
    hlds__hlds_args__proc_arg_vector_set_instance_typeclass_infos_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), InstanceHeadTypeClassInfoVars_30, STATE_VARIABLE_HeadVars_45_45, &STATE_VARIABLE_HeadVars_46_46);
    check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_44_44, &RttiVarMaps0_31);
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_3[10]), InstanceHeadTypeClassInfoVars_30, ((MR_Box) (RttiVarMaps0_31)), &conv1_RttiVarMaps_32);
    RttiVarMaps_32 = ((MR_Word) (conv1_RttiVarMaps_32));
    check_hlds__polymorphism_info__poly_info_set_rtti_varmaps_3_p_0(RttiVarMaps_32, STATE_VARIABLE_Info_44_44, &STATE_VARIABLE_Info_48_48);
    parse_tree__prog_mode__in_mode_1_p_0(&InMode_33);
    Var_49 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), UnconstrainedInstanceTypeInfoVars_29);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_49, ((MR_Box) (InMode_33)), &UnconstrainedInstanceTypeInfoModes_34);
    Var_50 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), InstanceHeadTypeClassInfoVars_30);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_50, ((MR_Box) (InMode_33)), &InstanceHeadTypeClassInfoModes_35);
    hlds__hlds_args__poly_arg_vector_set_instance_type_infos_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), UnconstrainedInstanceTypeInfoModes_34, STATE_VARIABLE_ExtraArgModes_0_38, &STATE_VARIABLE_ExtraArgModes_51_51);
    hlds__hlds_args__poly_arg_vector_set_instance_typeclass_infos_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), InstanceHeadTypeClassInfoModes_35, STATE_VARIABLE_ExtraArgModes_51_51, &STATE_VARIABLE_ExtraArgModes_52_52);
    check_hlds__polymorphism__setup_headvars_2_14_p_0(PredInfo_12, ClassContext_23, InstanceTVars_24, UnconstrainedInstanceTVars_25, UnconstrainedInstanceTypeInfoVars_29, STATE_VARIABLE_HeadVars_46_46, STATE_VARIABLE_HeadVars_37, UnconstrainedTVars_15, ExtraHeadTypeInfoVars_16, ExistHeadTypeClassInfoVars_17, STATE_VARIABLE_ExtraArgModes_52_52, STATE_VARIABLE_ExtraArgModes_39, STATE_VARIABLE_Info_48_48, STATE_VARIABLE_Info_41);
  }
}

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_2_14_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_HeadVar__3_3;

    hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv9_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_2_14_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_HeadVar__4_4;

    hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv7_HeadVar__4_4);
    *wrapper_arg_4 = ((MR_Box) (conv7_HeadVar__4_4));
  }
}

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_2_14_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__2_2;

    check_hlds__polymorphism__var_as_type_info_locn_2_p_0(((MR_Word) (wrapper_arg_1)), &conv6_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
  }
}

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_2_14_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__4_4;

    hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_HeadVar__4_4);
    *wrapper_arg_4 = ((MR_Box) (conv4_HeadVar__4_4));
  }
}

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_2_14_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    check_hlds__polymorphism__var_as_type_info_locn_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  }
}

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_2_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;

    hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__4_4);
    *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_4));
  }
}

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_2_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    check_hlds__polymorphism__var_as_type_info_locn_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_2_14_p_0(
  MR_Word PredInfo_15,
  MR_Word ClassContext_16,
  MR_Word InstanceTVars_17,
  MR_Word UnconstrainedInstanceTVars_18,
  MR_Word UnconstrainedInstanceTypeInfoVars_19,
  MR_Word HeadVars0_20,
  MR_Word * HeadVars_21,
  MR_Word * AllUnconstrainedTVars_22,
  MR_Word * AllExtraHeadTypeInfoVars_23,
  MR_Word * ExistHeadTypeClassInfoVars_24,
  MR_Word STATE_VARIABLE_ExtraArgModes_0_68,
  MR_Word * STATE_VARIABLE_ExtraArgModes_69,
  MR_Word STATE_VARIABLE_Info_0_70,
  MR_Word * STATE_VARIABLE_Info_71)
{
  {
    MR_bool succeeded;
    MR_Word ArgTypeVarSet_27;
    MR_Word ExistQVars_28;
    MR_Word ArgTypes_29;
    MR_Word UnivConstraints_30;
    MR_Word ExistConstraints_31;
    MR_Word UnivConstrainedTVars_32;
    MR_Word ExistConstrainedTVars_33;
    MR_Word ConstraintMap_34;
    MR_Word ActualExistConstraints_35;
    MR_Word RecordExistQLocns_37;
    MR_Word UnivHeadTypeClassInfoVars_38;
    MR_Word HeadTypeVars_39;
    MR_Word UnconstrainedTVars0_40;
    MR_Word UnconstrainedTVars1_41;
    MR_Word UnconstrainedTVars2_42;
    MR_Word UnconstrainedTVars_43;
    MR_Word UnconstrainedUnivTVars_44;
    MR_Word UnconstrainedExistTVars_45;
    MR_Word ExistHeadTypeInfoVars_46;
    MR_Word UnivHeadTypeInfoVars_49;
    MR_Word ExtraHeadTypeInfoVars_50;
    MR_Word HeadVars1_51;
    MR_Word HeadVars2_52;
    MR_Word HeadVars3_53;
    MR_Word In_54;
    MR_Word Out_55;
    MR_Integer NumUnconstrainedUnivTVars_56;
    MR_Integer NumUnconstrainedExistTVars_57;
    MR_Integer NumUnivClassInfoVars_58;
    MR_Integer NumExistClassInfoVars_59;
    MR_Word UnivTypeInfoModes_60;
    MR_Word ExistTypeInfoModes_61;
    MR_Word UnivTypeClassInfoModes_62;
    MR_Word ExistTypeClassInfoModes_63;
    MR_Word UnivTypeLocns_65;
    MR_Word ExistTypeLocns_66;
    MR_Word UnconstrainedInstanceTypeLocns_67;
    MR_Word STATE_VARIABLE_Info_73_73;
    MR_Word STATE_VARIABLE_Info_75_75;
    MR_Word STATE_VARIABLE_Info_76_76;
    MR_Word STATE_VARIABLE_Info_77_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word STATE_VARIABLE_ExtraArgModes_82_82;
    MR_Word STATE_VARIABLE_ExtraArgModes_83_83;
    MR_Word STATE_VARIABLE_ExtraArgModes_84_84;
    MR_Word STATE_VARIABLE_RttiVarMaps_86_86;
    MR_Word STATE_VARIABLE_RttiVarMaps_89_89;
    MR_Word STATE_VARIABLE_RttiVarMaps_92_92;
    MR_Word STATE_VARIABLE_RttiVarMaps_95_95;
    MR_Word STATE_VARIABLE_RttiVarMaps_97_97;
    MR_Word PredMarkers_36;
    MR_Box conv2_STATE_VARIABLE_RttiVarMaps_89_89;
    MR_Box conv5_STATE_VARIABLE_RttiVarMaps_92_92;
    MR_Box conv8_STATE_VARIABLE_RttiVarMaps_95_95;
    MR_Box conv10_STATE_VARIABLE_RttiVarMaps_97_97;

    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_15, &ArgTypeVarSet_27, &ExistQVars_28, &ArgTypes_29);
    UnivConstraints_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassContext_16, (MR_Integer) 0))));
    ExistConstraints_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassContext_16, (MR_Integer) 1))));
    parse_tree__prog_type__constraint_list_get_tvars_2_p_0(UnivConstraints_30, &UnivConstrainedTVars_32);
    parse_tree__prog_type__constraint_list_get_tvars_2_p_0(ExistConstraints_31, &ExistConstrainedTVars_33);
    check_hlds__polymorphism_info__poly_info_get_constraint_map_2_p_0(STATE_VARIABLE_Info_0_70, &ConstraintMap_34);
    check_hlds__polymorphism__get_improved_exists_head_constraints_3_p_0(ConstraintMap_34, ExistConstraints_31, &ActualExistConstraints_35);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_15, &PredMarkers_36);
    succeeded = hlds__hlds_pred__check_marker_2_p_0(PredMarkers_36, (MR_Integer) 10);
    if (succeeded)
      RecordExistQLocns_37 = (MR_Integer) 0;
    else
      RecordExistQLocns_37 = (MR_Integer) 1;
    check_hlds__polymorphism_type_class_info__make_typeclass_info_head_vars_5_p_0(RecordExistQLocns_37, ActualExistConstraints_35, ExistHeadTypeClassInfoVars_24, STATE_VARIABLE_Info_0_70, &STATE_VARIABLE_Info_73_73);
    check_hlds__polymorphism_type_class_info__make_typeclass_info_head_vars_5_p_0((MR_Integer) 0, UnivConstraints_30, &UnivHeadTypeClassInfoVars_38, STATE_VARIABLE_Info_73_73, &STATE_VARIABLE_Info_75_75);
    parse_tree__prog_type__type_vars_list_2_p_0(ArgTypes_29, &HeadTypeVars_39);
    mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), HeadTypeVars_39, UnivConstrainedTVars_32, &UnconstrainedTVars0_40);
    mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), UnconstrainedTVars0_40, ExistConstrainedTVars_33, &UnconstrainedTVars1_41);
    mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), UnconstrainedTVars1_41, InstanceTVars_17, &UnconstrainedTVars2_42);
    mercury__list__remove_dups_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), UnconstrainedTVars2_42, &UnconstrainedTVars_43);
    if ((ExistQVars_28 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      UnconstrainedUnivTVars_44 = UnconstrainedTVars_43;
      UnconstrainedExistTVars_45 = (MR_Word) ((MR_Unsigned) 0U);
      ExistHeadTypeInfoVars_46 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Info_76_76 = STATE_VARIABLE_Info_75_75;
    }
    else
    {
      mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), UnconstrainedTVars_43, ExistQVars_28, &UnconstrainedUnivTVars_44);
      mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), UnconstrainedTVars_43, UnconstrainedUnivTVars_44, &UnconstrainedExistTVars_45);
      check_hlds__polymorphism__make_head_vars_5_p_0(UnconstrainedExistTVars_45, ArgTypeVarSet_27, &ExistHeadTypeInfoVars_46, STATE_VARIABLE_Info_75_75, &STATE_VARIABLE_Info_76_76);
    }
    check_hlds__polymorphism__make_head_vars_5_p_0(UnconstrainedUnivTVars_44, ArgTypeVarSet_27, &UnivHeadTypeInfoVars_49, STATE_VARIABLE_Info_76_76, &STATE_VARIABLE_Info_77_77);
    ExtraHeadTypeInfoVars_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), UnivHeadTypeInfoVars_49, ExistHeadTypeInfoVars_46);
    *AllExtraHeadTypeInfoVars_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), UnconstrainedInstanceTypeInfoVars_19, ExtraHeadTypeInfoVars_50);
    {
      Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (UnconstrainedExistTVars_45));
      MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (UnconstrainedUnivTVars_44));
      MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_80));
    }
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (UnconstrainedInstanceTVars_18));
      MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_79));
    }
    mercury__list__condense_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), Var_78, AllUnconstrainedTVars_22);
    hlds__hlds_args__proc_arg_vector_set_univ_type_infos_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), UnivHeadTypeInfoVars_49, HeadVars0_20, &HeadVars1_51);
    hlds__hlds_args__proc_arg_vector_set_exist_type_infos_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ExistHeadTypeInfoVars_46, HeadVars1_51, &HeadVars2_52);
    hlds__hlds_args__proc_arg_vector_set_univ_typeclass_infos_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), UnivHeadTypeClassInfoVars_38, HeadVars2_52, &HeadVars3_53);
    hlds__hlds_args__proc_arg_vector_set_exist_typeclass_infos_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), *ExistHeadTypeClassInfoVars_24, HeadVars3_53, HeadVars_21);
    parse_tree__prog_mode__in_mode_1_p_0(&In_54);
    parse_tree__prog_mode__out_mode_1_p_0(&Out_55);
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), UnconstrainedUnivTVars_44, &NumUnconstrainedUnivTVars_56);
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), UnconstrainedExistTVars_45, &NumUnconstrainedExistTVars_57);
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), UnivHeadTypeClassInfoVars_38, &NumUnivClassInfoVars_58);
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), *ExistHeadTypeClassInfoVars_24, &NumExistClassInfoVars_59);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumUnconstrainedUnivTVars_56, ((MR_Box) (In_54)), &UnivTypeInfoModes_60);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumUnconstrainedExistTVars_57, ((MR_Box) (Out_55)), &ExistTypeInfoModes_61);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumUnivClassInfoVars_58, ((MR_Box) (In_54)), &UnivTypeClassInfoModes_62);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumExistClassInfoVars_59, ((MR_Box) (Out_55)), &ExistTypeClassInfoModes_63);
    hlds__hlds_args__poly_arg_vector_set_univ_type_infos_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), UnivTypeInfoModes_60, STATE_VARIABLE_ExtraArgModes_0_68, &STATE_VARIABLE_ExtraArgModes_82_82);
    hlds__hlds_args__poly_arg_vector_set_exist_type_infos_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ExistTypeInfoModes_61, STATE_VARIABLE_ExtraArgModes_82_82, &STATE_VARIABLE_ExtraArgModes_83_83);
    hlds__hlds_args__poly_arg_vector_set_univ_typeclass_infos_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), UnivTypeClassInfoModes_62, STATE_VARIABLE_ExtraArgModes_83_83, &STATE_VARIABLE_ExtraArgModes_84_84);
    hlds__hlds_args__poly_arg_vector_set_exist_typeclass_infos_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ExistTypeClassInfoModes_63, STATE_VARIABLE_ExtraArgModes_84_84, STATE_VARIABLE_ExtraArgModes_69);
    check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_77_77, &STATE_VARIABLE_RttiVarMaps_86_86);
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_3[3]), UnivHeadTypeInfoVars_49, &UnivTypeLocns_65);
    mercury__list__foldl_corresponding_5_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_3[4]), UnconstrainedUnivTVars_44, UnivTypeLocns_65, ((MR_Box) (STATE_VARIABLE_RttiVarMaps_86_86)), &conv2_STATE_VARIABLE_RttiVarMaps_89_89);
    STATE_VARIABLE_RttiVarMaps_89_89 = ((MR_Word) (conv2_STATE_VARIABLE_RttiVarMaps_89_89));
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_3[5]), ExistHeadTypeInfoVars_46, &ExistTypeLocns_66);
    mercury__list__foldl_corresponding_5_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_3[6]), UnconstrainedExistTVars_45, ExistTypeLocns_66, ((MR_Box) (STATE_VARIABLE_RttiVarMaps_89_89)), &conv5_STATE_VARIABLE_RttiVarMaps_92_92);
    STATE_VARIABLE_RttiVarMaps_92_92 = ((MR_Word) (conv5_STATE_VARIABLE_RttiVarMaps_92_92));
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_3[7]), UnconstrainedInstanceTypeInfoVars_19, &UnconstrainedInstanceTypeLocns_67);
    mercury__list__foldl_corresponding_5_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_3[8]), UnconstrainedInstanceTVars_18, UnconstrainedInstanceTypeLocns_67, ((MR_Box) (STATE_VARIABLE_RttiVarMaps_92_92)), &conv8_STATE_VARIABLE_RttiVarMaps_95_95);
    STATE_VARIABLE_RttiVarMaps_95_95 = ((MR_Word) (conv8_STATE_VARIABLE_RttiVarMaps_95_95));
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_3[9]), UnivHeadTypeClassInfoVars_38, ((MR_Box) (STATE_VARIABLE_RttiVarMaps_95_95)), &conv10_STATE_VARIABLE_RttiVarMaps_97_97);
    STATE_VARIABLE_RttiVarMaps_97_97 = ((MR_Word) (conv10_STATE_VARIABLE_RttiVarMaps_97_97));
    check_hlds__polymorphism_info__poly_info_set_rtti_varmaps_3_p_0(STATE_VARIABLE_RttiVarMaps_97_97, STATE_VARIABLE_Info_77_77, STATE_VARIABLE_Info_71);
  }
}

static void MR_CALL 
check_hlds__polymorphism__get_improved_exists_head_constraints_3_p_0(
  MR_Word ConstraintMap_4,
  MR_Word ExistConstraints_5,
  MR_Word * ActualExistConstraints_6)
{
  {
    MR_bool succeeded;
    MR_Integer NumExistConstraints_7;
    MR_Word ActualExistConstraintsPrime_8;
    MR_Word Var_10;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ExistConstraints_5, &NumExistConstraints_7);
    Var_10 = mdbcomp__goal_path__goal_id_for_head_constraints_0_f_0();
    succeeded = hlds__hlds_class__search_hlds_constraint_list_5_p_0(ConstraintMap_4, (MR_Integer) 0, Var_10, NumExistConstraints_7, &ActualExistConstraintsPrime_8);
    if (succeeded)
      *ActualExistConstraints_6 = ActualExistConstraintsPrime_8;
    else
      *ActualExistConstraints_6 = ExistConstraints_5;
  }
}

static void MR_CALL 
check_hlds__polymorphism__make_head_vars_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TypeVarSet_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
    }
    else
    {
      MR_Word TypeVar_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeVars_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TVarKindMap_15;
      MR_Word Kind_16;
      MR_Word Type_17;
      MR_Word Var_18;
      MR_Word TypeInfoVars1_23;
      MR_Word STATE_VARIABLE_Info_27_27;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_String TypeVarName_19;

      check_hlds__polymorphism_info__poly_info_get_tvar_kind_map_2_p_0(STATE_VARIABLE_Info_0_4, &TVarKindMap_15);
      parse_tree__prog_data__get_tvar_kind_3_p_0(TVarKindMap_15, TypeVar_10, &Kind_16);
      {
        Type_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Type_17, 0) = ((MR_Box) (TypeVar_10));
        MR_hl_field(MR_mktag(0), Type_17, 1) = ((MR_Box) (Kind_16));
      }
      check_hlds__polymorphism_type_info__new_type_info_var_5_p_0(Type_17, (MR_Integer) 0, &Var_18, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_27_27);
      succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_2, TypeVar_10, &TypeVarName_19);
      if (succeeded)
      {
        MR_Word VarSet0_20;
        MR_String VarName_21;
        MR_Word VarSet_22;

        check_hlds__polymorphism_info__poly_info_get_varset_2_p_0(STATE_VARIABLE_Info_27_27, &VarSet0_20);
        VarName_21 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_for_", TypeVarName_19);
        mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_18, VarName_21, VarSet0_20, &VarSet_22);
        check_hlds__polymorphism_info__poly_info_set_varset_3_p_0(VarSet_22, STATE_VARIABLE_Info_27_27, &STATE_VARIABLE_Info_29_29);
      }
      else
        STATE_VARIABLE_Info_29_29 = STATE_VARIABLE_Info_27_27;
      check_hlds__polymorphism__make_head_vars_5_p_0(TypeVars_11, TypeVarSet_2, &TypeInfoVars1_23, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_5);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TypeInfoVars1_23));
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__fixup_pred_polymorphism_5_p_0(
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_ExistsCastPredIds_0_29,
  MR_Word * STATE_VARIABLE_ExistsCastPredIds_30,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32)
{
  {
    MR_bool succeeded;
    MR_Word PredTable0_10;
    MR_Word PredInfo0_11;
    MR_Word ClausesInfo0_12;
    MR_Word VarTypes0_13;
    MR_Word HeadVars_14;
    MR_Word TypeVarSet_15;
    MR_Word ExistQVars_16;
    MR_Word ArgTypes0_17;
    MR_Word ExtraHeadVarList_18;
    MR_Word OldHeadVarList_19;
    MR_Word ExtraArgTypes_20;
    MR_Word ArgTypes_21;
    MR_Word PredInfo1_22;
    MR_Word PredInfo_27;
    MR_Word PredTable_28;
    MR_Box conv0_PredInfo0_11;
    MR_Word Subn_26;
    MR_Word OldHeadVarTypes_25;
    MR_Word TypeInfo_42_42;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_31, &PredTable0_10);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_10, ((MR_Box) (PredId_6)), &conv0_PredInfo0_11);
    PredInfo0_11 = ((MR_Word) (conv0_PredInfo0_11));
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo0_11, &ClausesInfo0_12);
    hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(ClausesInfo0_12, &VarTypes0_13);
    hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(ClausesInfo0_12, &HeadVars_14);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo0_11, &TypeVarSet_15, &ExistQVars_16, &ArgTypes0_17);
    hlds__hlds_args__proc_arg_vector_partition_poly_args_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), HeadVars_14, &ExtraHeadVarList_18, &OldHeadVarList_19);
    hlds__vartypes__lookup_var_types_3_p_0(VarTypes0_13, ExtraHeadVarList_18, &ExtraArgTypes_20);
    ArgTypes_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ExtraArgTypes_20, ArgTypes0_17);
    hlds__hlds_pred__pred_info_set_arg_types_5_p_0(TypeVarSet_15, ExistQVars_16, ArgTypes_21, PredInfo0_11, &PredInfo1_22);
    succeeded = (ExistQVars_16 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      hlds__vartypes__lookup_var_types_3_p_0(VarTypes0_13, OldHeadVarList_19, &OldHeadVarTypes_25);
      succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(ArgTypes0_17, OldHeadVarTypes_25, &Subn_26);
      if (succeeded)
      {
        TypeInfo_42_42 = (MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]);
        succeeded = mercury__map__is_empty_1_p_0(TypeInfo_42_42, (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Subn_26);
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
    {
      hlds__hlds_pred__pred_info_set_existq_tvar_binding_3_p_0(Subn_26, PredInfo1_22, &PredInfo_27);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ExistsCastPredIds_30 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredId_6));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ExistsCastPredIds_0_29));
      }
    }
    else
    {
      PredInfo_27 = PredInfo1_22;
      *STATE_VARIABLE_ExistsCastPredIds_30 = STATE_VARIABLE_ExistsCastPredIds_0_29;
    }
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_6)), ((MR_Box) (PredInfo_27)), PredTable0_10, &PredTable_28);
    hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_28, STATE_VARIABLE_ModuleInfo_0_31, STATE_VARIABLE_ModuleInfo_32);
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_module_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_ExistsCastPredIds_30;
    MR_Word conv6_STATE_VARIABLE_ModuleInfo_32;

    check_hlds__polymorphism__fixup_pred_polymorphism_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_ExistsCastPredIds_30, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_ModuleInfo_32);
    *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_ExistsCastPredIds_30));
    *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_ModuleInfo_32));
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_module_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_SafeToContinue_17;
    MR_Word conv1_STATE_VARIABLE_Specs_19;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_21;

    check_hlds__polymorphism__maybe_polymorphism_process_pred_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_SafeToContinue_17, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Specs_19, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_ModuleInfo_21);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_SafeToContinue_17));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_19));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_21));
  }
}

void MR_CALL 
check_hlds__polymorphism__polymorphism_process_module_5_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15,
  MR_Word * ExistsCastPredIds_7,
  MR_Word * SafeToContinue_8,
  MR_Word * Specs_9)
{
  {
    MR_Word Preds0_10;
    MR_Word PredIds0_11;
    MR_Word Preds1_12;
    MR_Word PredIds1_13;
    MR_Word STATE_VARIABLE_ModuleInfo_19_19;
    MR_Box conv5_SafeToContinue_8;
    MR_Box conv4_Specs_9;
    MR_Box conv3_STATE_VARIABLE_ModuleInfo_19_19;
    MR_Box conv9_ExistsCastPredIds_7;
    MR_Box conv8_STATE_VARIABLE_ModuleInfo_15;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_14, &Preds0_10);
    mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds0_10, &PredIds0_11);
    mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_3[1]), PredIds0_11, ((MR_Box) ((MR_Integer) 0)), &conv5_SafeToContinue_8, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_Specs_9, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_14)), &conv3_STATE_VARIABLE_ModuleInfo_19_19);
    *SafeToContinue_8 = ((MR_Word) (conv5_SafeToContinue_8));
    *Specs_9 = ((MR_Word) (conv4_Specs_9));
    STATE_VARIABLE_ModuleInfo_19_19 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_19_19));
    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_19_19, &Preds1_12);
    mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds1_12, &PredIds1_13);
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[1]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_3[2]), PredIds1_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv9_ExistsCastPredIds_7, ((MR_Box) (STATE_VARIABLE_ModuleInfo_19_19)), &conv8_STATE_VARIABLE_ModuleInfo_15);
    *ExistsCastPredIds_7 = ((MR_Word) (conv9_ExistsCastPredIds_7));
    *STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) (conv8_STATE_VARIABLE_ModuleInfo_15));
  }
}

void mercury__check_hlds__polymorphism__init(void)
{
}

void mercury__check_hlds__polymorphism__init_type_tables(void)
{
}

void mercury__check_hlds__polymorphism__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__polymorphism__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.polymorphism.
