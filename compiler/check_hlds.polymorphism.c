/*
** Automatically generated from `polymorphism.m'
** by the Mercury compiler,
** version rotd-2021-04-14
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
#include "solutions.mih"
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
#include "check_hlds.mode_info.mih"
#include "check_hlds.polymorphism_info.mih"
#include "check_hlds.polymorphism_lambda.mih"
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
#include "hlds.hlds_code_util.mih"
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
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0_s {
  MR_Word check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__RttiVarMaps0_20;
  MR_Word * check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__LambdaHeadVar__1_41;
  MR_Cont check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__cont;
  void * check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__cont_env_ptr;
  MR_bool check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__succeeded;
  MR_Word check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__TypeInfo_70_70;
  MR_Word check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__Type_23;
  MR_Integer check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__Index_24;
  MR_Word check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__TypeVars_25;
  MR_Word check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__TypeVar_26;
  MR_Word check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__Var_42;
  MR_Box check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__conv0_Var_42;
  MR_Box check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__conv1_TypeVar_26;
};

struct check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0_2_env_0_s {
  MR_Box * check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0_2_env_0__wrapper_arg_1;
  MR_Cont check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0_2_env_0__cont;
  void * check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0_2_env_0__cont_env_ptr;
  MR_Word check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0_2_env_0__conv1_LambdaHeadVar__1_41;
};


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

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__polymorphism__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism__maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__polymorphism__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_EnumFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_record_type_info_locns_0_0;

static const MR_EnumFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_record_type_info_locns_0_1;

static const MR_EnumFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__enum_ordinal_ordered_record_type_info_locns_0[2];

static const MR_EnumFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__enum_name_ordered_record_type_info_locns_0[2];

static const MR_Integer check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_record_type_info_locns_0[2];

static const MR_EnumFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_tci_var_kind_0_0;

static const MR_EnumFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_tci_var_kind_0_1;

static const MR_EnumFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__enum_ordinal_ordered_tci_var_kind_0[2];

static const MR_EnumFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__enum_name_ordered_tci_var_kind_0[2];

static const MR_Integer check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_tci_var_kind_0[2];

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3020__1_4_p_0(
  MR_Word ExtraHeadVar_6,
  MR_Word LambdaHeadVar__1_43,
  MR_Word LambdaHeadVar__2_44,
  MR_Word * LambdaHeadVar__3_45);

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0(
  MR_Word IndexedClassTypes_19,
  MR_Word RttiVarMaps0_20,
  MR_Word * LambdaHeadVar__1_41,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__do_make_typeclass_info_from_instance__2628__1_2_p_0(
  MR_Word BaseConsId_76,
  MR_Word BaseConsId1_84);

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_new_call__2021__1_3_p_0(
  MR_Word CalleeRttiVarMaps_31,
  MR_Word LambdaHeadVar__1_67,
  MR_Word * LambdaHeadVar__2_68);

static MR_Word MR_CALL 
check_hlds__polymorphism__IntroducedFrom__func__polymorphism_process_foreign_proc_args__1689__1_1_f_0(
  MR_Word LambdaHeadVar__1_53);

static MR_Word MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_111_108_121_109_111_114_112_104_105_115_109_95_112_114_111_99_101_115_115_95_102_111_114_101_105_103_110_95_112_114_111_99_95_97_114_103_115_95_95_49_54_56_57_95_95_49_95_95_91_49_93_95_48_1_f_0(void);

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_foreign_proc_args__1675__1_2_p_0(
  MR_Word ExistQVars_10,
  MR_Word HeadVar__2_72);

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__446__1_2_p_0(
  MR_Word SafeToContinue_6,
  MR_Word HeadVar__2_20);

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__444__1_2_p_0(
  MR_Word Specs_7,
  MR_Word HeadVar__2_16);

static void MR_CALL 
check_hlds__polymorphism____Compare____tci_var_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____tci_var_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__polymorphism____Compare____record_type_info_locns_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____record_type_info_locns_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__polymorphism__get_constrained_vars_1_f_0(
  MR_Word Constraint_3);

static void MR_CALL 
check_hlds__polymorphism__expand_class_method_body_5_p_0(
  MR_Word ClassProc_6,
  MR_Integer STATE_VARIABLE_ProcNum_0_47,
  MR_Integer * STATE_VARIABLE_ProcNum_48,
  MR_Word STATE_VARIABLE_ModuleInfo_0_49,
  MR_Word * STATE_VARIABLE_ModuleInfo_50);

static MR_bool MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_110_116_104_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer N_6,
  MR_Word * Result_7);

static void MR_CALL 
check_hlds__polymorphism__expand_class_method_bodies_in_defn_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__polymorphism__expand_class_method_bodies_in_defn_3_p_0(
  MR_Word ClassDefn_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9);

static MR_bool MR_CALL 
check_hlds__polymorphism__class_id_is_from_given_module_2_p_0(
  MR_Word ModuleName_3,
  MR_Word ClassId_4);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_maybe_extract_type_info_7_p_0(
  MR_Word OldRttiVarMaps_8,
  MR_Word Context_9,
  MR_Word TVar_10,
  MR_Word STATE_VARIABLE_ExtraGoals_0_20,
  MR_Word * STATE_VARIABLE_ExtraGoals_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
check_hlds__polymorphism__make_const_or_var_arg_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * ConstOrVarArg_5);

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
  MR_Word XVar_10,
  MR_Word Y_11,
  MR_Word Mode_12,
  MR_Word Unification0_13,
  MR_Word UnifyContext_14,
  MR_Word GoalInfo0_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_Info_0_46,
  MR_Word * STATE_VARIABLE_Info_47);

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

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_115_95_95_91_50_93_95_48_7_p_0(
  MR_Word Constraints_8,
  MR_Word Context_10,
  MR_Word * TypeClassInfoVarsMCAs_11,
  MR_Word * ExtraGoals_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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

static void MR_CALL 
check_hlds__polymorphism__make_existq_typeclass_info_vars_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__polymorphism__make_existq_typeclass_info_vars_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__polymorphism__make_existq_typeclass_info_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__polymorphism__make_existq_typeclass_info_vars_6_p_0(
  MR_Word ExistentialConstraints_7,
  MR_Word Context_8,
  MR_Word * ExtraTypeClassVars_9,
  MR_Word * ExtraGoals_10,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

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
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_112_114_111_111_102_95_95_91_52_93_95_48_9_p_0(
  MR_Word Constraint_10,
  MR_Word Seen_11,
  MR_Word Proof_12,
  MR_Word Context_14,
  MR_Word * TypeClassInfoVarMCA_15,
  MR_Word * Goals_16,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_95_95_91_51_93_95_48_8_p_0(
  MR_Word Constraint_9,
  MR_Word Seen_10,
  MR_Word Context_12,
  MR_Word * TypeClassInfoVarMCA_13,
  MR_Word * Goals_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_52_93_95_48_9_p_0(
  MR_Word Constraint_10,
  MR_Word Seen_11,
  MR_Integer InstanceNum_12,
  MR_Word Context_14,
  MR_Word * TypeClassInfoVarMCA_15,
  MR_Word * Goals_16,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34);

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_115_95_102_111_114_95_115_117_112_101_114_99_108_97_115_115_101_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_114_103_95_115_117_112_101_114_99_108_97_115_115_95_118_97_114_115_95_95_91_52_93_95_48_8_p_0(
  MR_Word ClassDefn_9,
  MR_Word InstanceTypes_10,
  MR_Word SuperClassProofMap_11,
  MR_Word * SuperClassTypeClassInfoVarsMCAs_13,
  MR_Word * SuperClassGoals_14,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static MR_bool MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0(
  MR_Word InstanceId_8,
  MR_Word Context_10,
  MR_Word * TypeClassInfoVarMCA_11,
  MR_Word * Goals_12,
  MR_Word STATE_VARIABLE_Info_0_95,
  MR_Word * STATE_VARIABLE_Info_96);

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_115_117_98_99_108_97_115_115_95_95_91_52_93_95_48_9_p_0(
  MR_Word Constraint_10,
  MR_Word Seen_11,
  MR_Word SubClassConstraint_12,
  MR_Word Context_14,
  MR_Word * HeadVar__6_6,
  MR_Word * Goals_17,
  MR_Word STATE_VARIABLE_Info_0_68,
  MR_Word * STATE_VARIABLE_Info_69);

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_115_95_50_95_95_91_51_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
check_hlds__polymorphism__materialize_base_typeclass_info_var_6_p_0(
  MR_Word Constraint_7,
  MR_Word ConsId_8,
  MR_Word * Var_9,
  MR_Word * Goals_10,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
check_hlds__polymorphism__construct_typeclass_info_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism__construct_typeclass_info_11_p_0(
  MR_Word Constraint_12,
  MR_Word BaseVar_13,
  MR_Word BaseConsId_14,
  MR_Word ArgVarsMCAs_15,
  MR_Word InitialVarMapsSnapshot_16,
  MR_Word * TypeClassInfoVar_17,
  MR_Word * TypeClassInfoMCA_18,
  MR_Word PrevGoals_19,
  MR_Word * AllGoals_20,
  MR_Word STATE_VARIABLE_Info_0_63,
  MR_Word * STATE_VARIABLE_Info_64);

static void MR_CALL 
check_hlds__polymorphism__materialize_typeclass_info_var_6_p_0(
  MR_Word Constraint_7,
  MR_Integer InstanceIdConstNum_8,
  MR_Word * Var_9,
  MR_Word * Goals_10,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30);

static void MR_CALL 
check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0(
  MR_Word RecordLocns_6,
  MR_Word Constraint_7,
  MR_Word * TypeClassInfoVar_8,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
check_hlds__polymorphism__new_typeclass_info_var_6_p_0(
  MR_Word Constraint_7,
  MR_Word VarKind_8,
  MR_Word * Var_9,
  MR_Word * VarType_10,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
check_hlds__polymorphism__assign_var_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

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
check_hlds__polymorphism__post_copy_polymorphism_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism__post_copy_polymorphism_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__polymorphism__post_copy_polymorphism_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
check_hlds__polymorphism__setup_headvars_instance_method_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_instance_method_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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
check_hlds__polymorphism__make_typeclass_info_head_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__polymorphism__make_typeclass_info_head_vars_5_p_0(
  MR_Word RecordLocns_6,
  MR_Word Constraints_7,
  MR_Word * ExtraHeadVars_8,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
check_hlds__polymorphism__make_head_vars_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TypeVarSet_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
check_hlds__polymorphism__get_improved_exists_head_constraints_3_p_0(
  MR_Word ConstraintMap_4,
  MR_Word ExistConstraints_5,
  MR_Word * ActualExistConstraints_6);

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

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____record_type_info_locns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism____Compare____record_type_info_locns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____tci_var_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__polymorphism____Compare____tci_var_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_1[15][2];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_2[32][3];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_3[2][10];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_4[4][8];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_5[12][5];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_6[3][7];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_7[9][6];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_8[4][4];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_9[1][13];

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_10[1][11];




static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_1[15][2] = {
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_const_or_var_arg_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_Integer) 42))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_1[12])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_2[32][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_1[3])),
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_1[4]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_1[7])),
    ((MR_Box) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_1[2])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_scalar_common_1[10]))),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_3[0])),
    ((MR_Box) (check_hlds__polymorphism__polymorphism_process_module_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_4[0])),
    ((MR_Box) (check_hlds__polymorphism__polymorphism_process_module_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[0])),
    ((MR_Box) (check_hlds__polymorphism__setup_headvars_2_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_6[0])),
    ((MR_Box) (check_hlds__polymorphism__setup_headvars_2_14_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[0])),
    ((MR_Box) (check_hlds__polymorphism__setup_headvars_2_14_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_6[0])),
    ((MR_Box) (check_hlds__polymorphism__setup_headvars_2_14_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[0])),
    ((MR_Box) (check_hlds__polymorphism__setup_headvars_2_14_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_6[0])),
    ((MR_Box) (check_hlds__polymorphism__setup_headvars_2_14_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[0])),
    ((MR_Box) (check_hlds__polymorphism__setup_headvars_2_14_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[0])),
    ((MR_Box) (check_hlds__polymorphism__setup_headvars_instance_method_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[2])),
    ((MR_Box) (check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[3])),
    ((MR_Box) (check_hlds__polymorphism__unification_typeinfos_rtti_varmaps_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[2])),
    ((MR_Box) (check_hlds__polymorphism__post_copy_polymorphism_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[4])),
    ((MR_Box) (check_hlds__polymorphism__post_copy_polymorphism_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 20 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[5])),
    ((MR_Box) (check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[0])),
    ((MR_Box) (check_hlds__polymorphism__produce_existq_tvars_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_6[2])),
    ((MR_Box) (check_hlds__polymorphism__unification_typeinfos_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[3])),
    ((MR_Box) (check_hlds__polymorphism__unification_typeinfos_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[0])),
    ((MR_Box) (check_hlds__polymorphism__make_existq_typeclass_info_vars_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[7])),
    ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[7])),
    ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[9])),
    ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[10])),
    ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[10])),
    ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[11])),
    ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 31 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_4[3])),
    ((MR_Box) (check_hlds__polymorphism__expand_class_method_bodies_in_defn_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_3[2][10] = {
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0)),
    ((MR_Box) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_4[4][8] = {
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
    ((MR_Box) (&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_record_type_info_locns_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0)),
    ((MR_Box) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0))
  },
  /* row 2 */
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
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_5[12][5] = {
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__polymorphism__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_const_or_var_arg_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_6[3][7] = {
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
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__polymorphism__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0))
  },
  /* row 2 */
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

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_7[9][6] = {
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
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__polymorphism__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&check_hlds__polymorphism__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_builtin__type_ctor_info_int_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_db_0)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__polymorphism__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&check_hlds__polymorphism__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__polymorphism_scalar_common_8[4][4] = {
  /* row 0 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_4[1])),
    ((MR_Box) (check_hlds__polymorphism__setup_headvars_instance_method_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_scalar_common_2[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_scalar_common_2[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_scalar_common_2[19])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__polymorphism_scalar_common_1[13])))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__polymorphism_scalar_common_4[1])),
    ((MR_Box) (check_hlds__polymorphism__make_existq_typeclass_info_vars_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
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

static const MR_FA_TypeInfo_Struct2 check_hlds__polymorphism__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__polymorphism__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_mer_type_0builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__polymorphism__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__polymorphism__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__polymorphism__maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__polymorphism__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__polymorphism__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__polymorphism__maybe__ti_maybe_1hlds__const_struct__type_ctor_info_const_struct_arg_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__polymorphism__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_EnumFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_record_type_info_locns_0_0 = {
  (MR_String) "do_record_type_info_locns",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_record_type_info_locns_0_1 = {
  (MR_String) "do_not_record_type_info_locns",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__enum_ordinal_ordered_record_type_info_locns_0[2] = {
  &check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_record_type_info_locns_0_0,
  &check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_record_type_info_locns_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__enum_name_ordered_record_type_info_locns_0[2] = {
  &check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_record_type_info_locns_0_1,
  &check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_record_type_info_locns_0_0
};

static const MR_Integer check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_record_type_info_locns_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_record_type_info_locns_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__polymorphism____Unify____record_type_info_locns_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism____Compare____record_type_info_locns_0_0_10001)),
  (MR_String) "check_hlds.polymorphism",
  (MR_String) "record_type_info_locns",
  {     check_hlds__polymorphism__check_hlds__polymorphism__enum_name_ordered_record_type_info_locns_0 },
  {     check_hlds__polymorphism__check_hlds__polymorphism__enum_ordinal_ordered_record_type_info_locns_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_record_type_info_locns_0,

};

static const MR_EnumFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_tci_var_kind_0_0 = {
  (MR_String) "base_typeclass_info_kind",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_tci_var_kind_0_1 = {
  (MR_String) "typeclass_info_kind",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__enum_ordinal_ordered_tci_var_kind_0[2] = {
  &check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_tci_var_kind_0_0,
  &check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_tci_var_kind_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__polymorphism__check_hlds__polymorphism__enum_name_ordered_tci_var_kind_0[2] = {
  &check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_tci_var_kind_0_0,
  &check_hlds__polymorphism__check_hlds__polymorphism__enum_functor_desc_tci_var_kind_0_1
};

static const MR_Integer check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_tci_var_kind_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_tci_var_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__polymorphism____Unify____tci_var_kind_0_0_10001)),
  ((MR_Box) (check_hlds__polymorphism____Compare____tci_var_kind_0_0_10001)),
  (MR_String) "check_hlds.polymorphism",
  (MR_String) "tci_var_kind",
  {     check_hlds__polymorphism__check_hlds__polymorphism__enum_name_ordered_tci_var_kind_0 },
  {     check_hlds__polymorphism__check_hlds__polymorphism__enum_ordinal_ordered_tci_var_kind_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__polymorphism__check_hlds__polymorphism__functor_number_map_tci_var_kind_0,

};

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3020__1_4_p_0(
  MR_Word ExtraHeadVar_6,
  MR_Word LambdaHeadVar__1_43,
  MR_Word LambdaHeadVar__2_44,
  MR_Word * LambdaHeadVar__3_45)
{
  {
    MR_Word TheTypeVar_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_43, (MR_Integer) 0))));
    MR_Word Location_35;
    MR_Integer Index_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_43, (MR_Integer) 1))));

    {
      Location_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Location_35, 0) = ((MR_Box) (ExtraHeadVar_6));
      MR_hl_field(MR_mktag(1), Location_35, 1) = ((MR_Box) (Index_48));
    }
    hlds__hlds_rtti__rtti_set_type_info_locn_4_p_0(TheTypeVar_34, Location_35, LambdaHeadVar__2_44, LambdaHeadVar__3_45);
  }
}

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__Var_42 = ((MR_Word) ((env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__conv0_Var_42));
    check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__TypeVar_26 = ((MR_Word) ((env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__conv1_TypeVar_26));
    check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_3(env_ptr);
  }
}

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word TypeInfoLocn_27;

      (env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__succeeded = hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0((env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__RttiVarMaps0_20, (env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__TypeVar_26, &TypeInfoLocn_27);
      if ((env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__succeeded)
      {
        MR_Word Var_28;

        (env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) TypeInfoLocn_27)) == (MR_Integer) 0);
        if ((env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__succeeded)
          Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeInfoLocn_27, (MR_Integer) 0))));
      }
      else
        (env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__succeeded = MR_TRUE;
      if ((env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *((env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__LambdaHeadVar__1_41) = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__TypeVar_26));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__Index_24));
        }
        ((env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__cont)((env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__cont_env_ptr);
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0_s * env_ptr = (struct check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__Type_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__Var_42, (MR_Integer) 0))));
    (env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__Index_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__Var_42, (MR_Integer) 1))));
    parse_tree__prog_type__type_vars_2_p_0((env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__Type_23, &(env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__TypeVars_25);
    (env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__TypeInfo_70_70 = (MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]);
    mercury__list__member_2_p_1((env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__TypeInfo_70_70, &(env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__conv1_TypeVar_26, (env_ptr)->check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__TypeVars_25, check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_4, env_ptr);
  }
}

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0(
  MR_Word IndexedClassTypes_19,
  MR_Word RttiVarMaps0_20,
  MR_Word * LambdaHeadVar__1_41,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0_s env;

    (env).check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__RttiVarMaps0_20 = RttiVarMaps0_20;
    (env).check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__LambdaHeadVar__1_41 = LambdaHeadVar__1_41;
    (env).check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__cont = cont;
    (env).check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
    mercury__list__member_2_p_1((MR_Word) (&check_hlds__polymorphism_scalar_common_2[2]), &(env).check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_env_0__conv0_Var_42, IndexedClassTypes_19, check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0_2, &env);
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__do_make_typeclass_info_from_instance__2628__1_2_p_0(
  MR_Word BaseConsId_76,
  MR_Word BaseConsId1_84)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____cons_id_0_0(BaseConsId1_84, BaseConsId_76);
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_new_call__2021__1_3_p_0(
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
check_hlds__polymorphism__IntroducedFrom__func__polymorphism_process_foreign_proc_args__1689__1_1_f_0(
  MR_Word LambdaHeadVar__1_53)
{
  {
    MR_Word LambdaHeadVar__2_54;

    LambdaHeadVar__2_54 = check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_111_108_121_109_111_114_112_104_105_115_109_95_112_114_111_99_101_115_115_95_102_111_114_101_105_103_110_95_112_114_111_99_95_97_114_103_115_95_95_49_54_56_57_95_95_49_95_95_91_49_93_95_48_1_f_0();
    return LambdaHeadVar__2_54;
  }
}

static MR_Word MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_112_111_108_121_109_111_114_112_104_105_115_109_95_112_114_111_99_101_115_115_95_102_111_114_101_105_103_110_95_112_114_111_99_95_97_114_103_115_95_95_49_54_56_57_95_95_49_95_95_91_49_93_95_48_1_f_0(void)
{
  {
    MR_Word LambdaHeadVar__2_54;

    LambdaHeadVar__2_54 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    return LambdaHeadVar__2_54;
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_foreign_proc_args__1675__1_2_p_0(
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
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__446__1_2_p_0(
  MR_Word SafeToContinue_6,
  MR_Word HeadVar__2_20)
{
  {
    MR_bool succeeded = (SafeToContinue_6 == HeadVar__2_20);

    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__444__1_2_p_0(
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
check_hlds__polymorphism____Compare____tci_var_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____tci_var_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism____Compare____record_type_info_locns_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____record_type_info_locns_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
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
check_hlds__polymorphism__expand_class_method_body_5_p_0(
  MR_Word ClassProc_6,
  MR_Integer STATE_VARIABLE_ProcNum_0_47,
  MR_Integer * STATE_VARIABLE_ProcNum_48,
  MR_Word STATE_VARIABLE_ModuleInfo_0_49,
  MR_Word * STATE_VARIABLE_ModuleInfo_50)
{
  {
    MR_bool succeeded;
    MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassProc_6, (MR_Integer) 0))));
    MR_Integer ProcId_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassProc_6, (MR_Integer) 1))));
    MR_Word PredTable0_11;
    MR_Word PredInfo0_12;
    MR_Word ProcTable0_13;
    MR_Box conv0_PredInfo0_12;
    MR_Word ProcInfo0_14;
    MR_Box conv1_ProcInfo0_14;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_49, &PredTable0_11);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_11, ((MR_Box) (PredId_9)), &conv0_PredInfo0_12);
    PredInfo0_12 = ((MR_Word) (conv0_PredInfo0_12));
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_12, &ProcTable0_13);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_13, ((MR_Box) (ProcId_10)), &conv1_ProcInfo0_14);
    if (succeeded)
    {
      ProcInfo0_14 = ((MR_Word) (conv1_ProcInfo0_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ClassContext_15;
      MR_Word InstanceConstraint_19;
      MR_Word RttiVarMaps_20;
      MR_Word TypeClassInfoVar_21;
      MR_Word HeadVars0_22;
      MR_Word Modes0_23;
      MR_Word MaybeDetism0_24;
      MR_Word Detism_25;
      MR_Word HeadVars_29;
      MR_Word Modes_30;
      MR_Word ClassName_31;
      MR_Word InstanceArgs_32;
      MR_Integer InstanceArity_33;
      MR_Word PFSymNameArity_34;
      MR_Word BodyGoalExpr_35;
      MR_Word NonLocals_36;
      MR_Word InstmapDelta_37;
      MR_Word Purity_38;
      MR_Word Context_39;
      MR_Word GoalInfo_40;
      MR_Word BodyGoal_41;
      MR_Word ProcInfo_42;
      MR_Word ProcTable_43;
      MR_Word PredInfo1_44;
      MR_Word PredInfo_45;
      MR_Word PredTable_46;
      MR_Word STATE_VARIABLE_ModuleInfo_54_54;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Head_16;
      MR_Word Var_51;
      MR_Word HeadVarsPrime_27;
      MR_Word ModesPrime_28;
      MR_Integer N_26;

      hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo0_12, &ClassContext_15);
      Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassContext_15, (MR_Integer) 0))));
      succeeded = (Var_51 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Head_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_51, (MR_Integer) 0))));
        InstanceConstraint_19 = Head_16;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.expand_class_method_body\'/5", (MR_String) "class method is not constrained");
          return;
        }
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo0_14, &RttiVarMaps_20);
      hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_p_0(RttiVarMaps_20, InstanceConstraint_19, &TypeClassInfoVar_21);
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_14, &HeadVars0_22);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo0_14, &Modes0_23);
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo0_14, &MaybeDetism0_24);
      if ((MaybeDetism0_24 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Detism_25 = (MR_Integer) 3;
        hlds__hlds_module__module_info_make_pred_id_invalid_3_p_0(PredId_9, STATE_VARIABLE_ModuleInfo_0_49, &STATE_VARIABLE_ModuleInfo_54_54);
      }
      else
      {
        Detism_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDetism0_24, (MR_Integer) 0))));
        STATE_VARIABLE_ModuleInfo_54_54 = STATE_VARIABLE_ModuleInfo_0_49;
      }
      succeeded = mercury__list__index1_of_first_occurrence_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), HeadVars0_22, ((MR_Box) (TypeClassInfoVar_21)), &N_26);
      if (succeeded)
      {
        succeeded = check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_110_116_104_95_95_91_49_93_95_48_3_p_0(HeadVars0_22, N_26, &HeadVarsPrime_27);
        if (succeeded)
          succeeded = check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_110_116_104_95_95_91_49_93_95_48_3_p_0(Modes0_23, N_26, &ModesPrime_28);
      }
      if (succeeded)
      {
        HeadVars_29 = HeadVarsPrime_27;
        Modes_30 = ModesPrime_28;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.expand_class_method_body\'/5", (MR_String) "typeclass_info var not found");
          return;
        }
      ClassName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceConstraint_19, (MR_Integer) 0))));
      InstanceArgs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceConstraint_19, (MR_Integer) 1))));
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), InstanceArgs_32, &InstanceArity_33);
      hlds__hlds_pred__pred_info_get_pf_sym_name_arity_2_p_0(PredInfo0_12, &PFSymNameArity_34);
      {
        Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (ClassName_31));
        MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (InstanceArity_33));
      }
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (TypeClassInfoVar_21));
        MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (STATE_VARIABLE_ProcNum_0_47));
        MR_hl_field(MR_mktag(1), Var_57, 2) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(1), Var_57, 3) = ((MR_Box) (PFSymNameArity_34));
      }
      {
        BodyGoalExpr_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), BodyGoalExpr_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), BodyGoalExpr_35, 1) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(3), BodyGoalExpr_35, 2) = ((MR_Box) (HeadVars_29));
        MR_hl_field(MR_mktag(3), BodyGoalExpr_35, 3) = ((MR_Box) (Modes_30));
        MR_hl_field(MR_mktag(3), BodyGoalExpr_35, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), BodyGoalExpr_35, 5) = (MR_Box) ((MR_Unsigned) (Detism_25));
      }
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars0_22, &NonLocals_36);
      hlds__instmap__instmap_delta_from_mode_list_4_p_0(STATE_VARIABLE_ModuleInfo_54_54, HeadVars0_22, Modes0_23, &InstmapDelta_37);
      hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo0_12, &Purity_38);
      hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo0_12, &Context_39);
      hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_36, InstmapDelta_37, Detism_25, Purity_38, Context_39, &GoalInfo_40);
      {
        BodyGoal_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), BodyGoal_41, 0) = ((MR_Box) (BodyGoalExpr_35));
        MR_hl_field(MR_mktag(0), BodyGoal_41, 1) = ((MR_Box) (GoalInfo_40));
      }
      hlds__hlds_pred__proc_info_set_goal_3_p_0(BodyGoal_41, ProcInfo0_14, &ProcInfo_42);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_10)), ((MR_Box) (ProcInfo_42)), ProcTable0_13, &ProcTable_43);
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_43, PredInfo0_12, &PredInfo1_44);
      succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo1_44);
      if (succeeded)
        hlds__hlds_pred__pred_info_set_status_3_p_0((MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), PredInfo1_44, &PredInfo_45);
      else
        PredInfo_45 = PredInfo1_44;
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_9)), ((MR_Box) (PredInfo_45)), PredTable0_11, &PredTable_46);
      hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_46, STATE_VARIABLE_ModuleInfo_54_54, STATE_VARIABLE_ModuleInfo_50);
    }
    else
      *STATE_VARIABLE_ModuleInfo_50 = STATE_VARIABLE_ModuleInfo_0_49;
    *STATE_VARIABLE_ProcNum_48 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ProcNum_0_47 + (MR_Unsigned) 1);
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_110_116_104_95_95_91_49_93_95_48_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer N_6,
  MR_Word * Result_7)
{
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Box X_4;
    MR_Word Xs_5;
    MR_Integer Var_9;

    if (succeeded)
    {
      X_4 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      Xs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      Var_9 = (MR_Integer) 1;
      succeeded = (N_6 > Var_9);
      if (succeeded)
      {
        MR_Word ResultTail_8;
        MR_Integer Var_10 = (MR_Integer) ((MR_Unsigned) N_6 - (MR_Unsigned) 1);

        succeeded = check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_110_116_104_95_95_91_49_93_95_48_3_p_0(Xs_5, Var_10, &ResultTail_8);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Result_7 = base;
            MR_hl_field(MR_mktag(1), base, 0) = X_4;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ResultTail_8));
          }
          succeeded = MR_TRUE;
        }
      }
      else
      {
        *Result_7 = Xs_5;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism__expand_class_method_bodies_in_defn_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv1_STATE_VARIABLE_ProcNum_48;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_50;

    check_hlds__polymorphism__expand_class_method_body_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ProcNum_48, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ModuleInfo_50);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ProcNum_48));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_50));
  }
}

static void MR_CALL 
check_hlds__polymorphism__expand_class_method_bodies_in_defn_3_p_0(
  MR_Word ClassDefn_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_Word Interface_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_4, (MR_Integer) 7))));
    MR_Box conv3_Var_7;
    MR_Box conv2_STATE_VARIABLE_ModuleInfo_9;

    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[31]), Interface_6, ((MR_Box) ((MR_Integer) 1)), &conv3_Var_7, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_8)), &conv2_STATE_VARIABLE_ModuleInfo_9);
    *STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) (conv2_STATE_VARIABLE_ModuleInfo_9));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism__class_id_is_from_given_module_2_p_0(
  MR_Word ModuleName_3,
  MR_Word ClassId_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_4, (MR_Integer) 0))));
    MR_Word Var_8;

    succeeded = ((MR_tag((MR_Word) Var_7)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_7, (MR_Integer) 0))));
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_3, Var_8);
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_maybe_extract_type_info_7_p_0(
  MR_Word OldRttiVarMaps_8,
  MR_Word Context_9,
  MR_Word TVar_10,
  MR_Word STATE_VARIABLE_ExtraGoals_0_20,
  MR_Word * STATE_VARIABLE_ExtraGoals_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_bool succeeded;
    MR_Word RttiVarMaps_13;
    MR_Word TypeInfoVar0_14;
    MR_Word TypeClassInfoVar_15;
    MR_Integer Index_16;
    MR_Word Var_24;
    MR_Word Var_25;

    check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_22, &RttiVarMaps_13);
    succeeded = hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0(OldRttiVarMaps_8, TVar_10, &Var_24);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 0);
      if (succeeded)
      {
        TypeInfoVar0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))));
        succeeded = hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0(RttiVarMaps_13, TVar_10, &Var_25);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 1);
          if (succeeded)
          {
            TypeClassInfoVar_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0))));
            Index_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1))));
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word NewGoals_17;
      MR_Word TypeInfoVar1_18;
      MR_Word AssignGoal_19;
      MR_Word Var_28;

      check_hlds__polymorphism_type_info__polymorphism_extract_type_info_8_p_0(TVar_10, TypeClassInfoVar_15, Index_16, Context_9, &NewGoals_17, &TypeInfoVar1_18, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ((MR_Box) (TypeInfoVar0_14)), ((MR_Box) (TypeInfoVar1_18)));
      if (succeeded)
        AssignGoal_19 = hlds__make_goal__true_goal_0_f_0();
      else
      {
        MR_Word Context_33;
        MR_Word Var_34;

        mercury__term__context_init_1_p_0(&Context_33);
        {
          Var_34 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (TypeInfoVar1_18));
        }
        hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(TypeInfoVar0_14, Var_34, Context_33, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &AssignGoal_19);
      }
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (AssignGoal_19));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (STATE_VARIABLE_ExtraGoals_0_20));
      }
      *STATE_VARIABLE_ExtraGoals_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), NewGoals_17, Var_28);
    }
    else
    {
      *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
      *STATE_VARIABLE_ExtraGoals_21 = STATE_VARIABLE_ExtraGoals_0_20;
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__make_const_or_var_arg_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * ConstOrVarArg_5)
{
  {
    MR_Word Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word MCA_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    if ((MCA_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *ConstOrVarArg_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_3));
      }
    else
    {
      MR_Word ConstArg_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MCA_4, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *ConstOrVarArg_5 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ConstArg_6));
      }
    }
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

    check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_new_call__2021__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_68);
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
      MR_hl_field(MR_mktag(0), GetTypeInfoTypes_43, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[8]));
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
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[7]));
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
        }
      }
      if (succeeded)
      {
        Goal_23 = Goal2_21;
        *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_32_32;
      }
      else
      {
        MR_Word VarSet0_49;
        MR_Word VarTypes0_50;
        MR_Word OutsideVars_51;
        MR_Word VarSet_53;
        MR_Word VarTypes_54;
        MR_Word RttiVarMaps_55;
        MR_Word Var_57;
        MR_Word RttiVarMaps0_59;
        MR_Word _Warnings_52;

        check_hlds__polymorphism_info__poly_info_get_varset_2_p_0(STATE_VARIABLE_Info_32_32, &VarSet0_49);
        check_hlds__polymorphism_info__poly_info_get_var_types_2_p_0(STATE_VARIABLE_Info_32_32, &VarTypes0_50);
        check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_32_32, &RttiVarMaps0_59);
        OutsideVars_51 = hlds__hlds_args__proc_arg_vector_to_set_1_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), NewHeadVars_13);
        Var_57 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutsideVars_51);
        hlds__quantification__implicitly_quantify_goal_general_11_p_0((MR_Integer) 0, Var_57, &_Warnings_52, Goal2_21, &Goal_23, VarSet0_49, &VarSet_53, VarTypes0_50, &VarTypes_54, RttiVarMaps0_59, &RttiVarMaps_55);
        check_hlds__polymorphism_info__poly_info_set_varset_types_rtti_5_p_0(VarSet_53, VarTypes_54, RttiVarMaps_55, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_27);
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
          MR_Word XVar_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 0))));
          MR_Word Y_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 1))));
          MR_Word Mode_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 2))));
          MR_Word Unification_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 3))));
          MR_Word UnifyContext_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 4))));

          check_hlds__polymorphism__polymorphism_process_unify_9_p_0(XVar_39, Y_40, Mode_41, Unification_42, UnifyContext_43, GoalInfo0_9, Goal_6, STATE_VARIABLE_Info_0_108, STATE_VARIABLE_Info_109);
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
      MR_Word XVar_33;
      MR_Word Mode_34;
      MR_Word Unification_35;
      MR_Word UnifyContext_36;
      MR_Word ConsId_37;
      MR_Word YVars_38;
      MR_Word Goal_39;
      MR_Word Changed_40;
      MR_Word MarkedGoal_47;
      MR_Word STATE_VARIABLE_Info_56_56;
      MR_Word STATE_VARIABLE_InvariantsStatus_57_57;
      MR_Word STATE_VARIABLE_ConstructOrderMarkedGoals_67_67;
      MR_Word XVarPrime_25;
      MR_Word ModePrime_27;
      MR_Word UnificationPrime_28;
      MR_Word UnifyContextPrime_29;
      MR_Word ConsIdPrime_30;
      MR_Word YVarsPrime_32;
      MR_Word Y_26;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ConstructOrderMarkedGoals_0_2;
      MR_Word next_value_of_STATE_VARIABLE_InvariantsStatus_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_6;

      succeeded = ((MR_tag((MR_Word) GoalExpr0_23)) == (MR_Integer) 1);
      if (succeeded)
      {
        XVarPrime_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_23, (MR_Integer) 0))));
        Y_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_23, (MR_Integer) 1))));
        ModePrime_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_23, (MR_Integer) 2))));
        UnificationPrime_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_23, (MR_Integer) 3))));
        UnifyContextPrime_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_23, (MR_Integer) 4))));
        succeeded = ((MR_tag((MR_Word) Y_26)) == (MR_Integer) 1);
        if (succeeded)
        {
          ConsIdPrime_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Y_26, (MR_Integer) 0))));
          YVarsPrime_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Y_26, (MR_Integer) 2))));
        }
      }
      if (succeeded)
      {
        XVar_33 = XVarPrime_25;
        Mode_34 = ModePrime_27;
        Unification_35 = UnificationPrime_28;
        UnifyContext_36 = UnifyContextPrime_29;
        ConsId_37 = ConsIdPrime_30;
        YVars_38 = YVarsPrime_32;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_fgti_goals\'/7", (MR_String) "from_ground_term_initial conjunct is not functor unify");
          return;
        }
      check_hlds__polymorphism__polymorphism_process_unify_functor_11_p_0(XVar_33, ConsId_37, YVars_38, Mode_34, Unification_35, UnifyContext_36, GoalInfo0_24, &Goal_39, &Changed_40, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_56_56);
      switch (Changed_40) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              MarkedGoal_47 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), MarkedGoal_47, 0) = ((MR_Box) (Goal0_17));
              MR_hl_field(MR_mktag(0), MarkedGoal_47, 1) = ((MR_Box) (XVar_33));
              MR_hl_field(MR_mktag(0), MarkedGoal_47, 2) = ((MR_Box) (YVars_38));
            }
            STATE_VARIABLE_InvariantsStatus_57_57 = STATE_VARIABLE_InvariantsStatus_0_4;
          }
          break;
        case (MR_Integer) 1:
          {
            {
              MarkedGoal_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MarkedGoal_47, 0) = ((MR_Box) (Goal_39));
              MR_hl_field(MR_mktag(1), MarkedGoal_47, 1) = ((MR_Box) (XVar_33));
              MR_hl_field(MR_mktag(1), MarkedGoal_47, 2) = ((MR_Box) (YVars_38));
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
      MR_Integer Var_99;

      Var_99 = hlds__hlds_pred__invalid_proc_id_0_f_0();
      succeeded = (ProcId0_29 == Var_99);
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
        check_hlds__polymorphism__polymorphism_process_unify_9_p_0(X0_12, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__polymorphism_scalar_common_2[4])), Mode0_15, Unification0_16, UnifyContext_17, GoalInfo1_38, Goal_19, STATE_VARIABLE_Info_75_75, STATE_VARIABLE_Info_68);
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
      MR_Integer Var_100;
      MR_Word OrigFunctor_50;

      succeeded = ((((MR_tag((MR_Word) ConsId0_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_13, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Functor0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_13, (MR_Integer) 1))));
        Var_100 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_13, (MR_Integer) 2))));
        ConsTypeCtor_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_13, (MR_Integer) 3))));
        succeeded = (Arity_25 == Var_100);
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
        MR_Word STATE_VARIABLE_Info_82_82;
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word GoalInfo1_89;
        MR_Word _Changed_62;

        hlds__vartypes__lookup_var_types_3_p_0(VarTypes0_23, ArgVars0_14, &ActualArgTypes_54);
        check_hlds__polymorphism__polymorphism_process_existq_unify_functor_9_p_0(ConsDefn_53, IsExistConstr_52, ActualArgTypes_54, TypeOfX_24, GoalInfo0_18, &ExtraVars_55, &ExtraGoals_56, STATE_VARIABLE_Info_0_67, &STATE_VARIABLE_Info_82_82);
        ArgVars_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ExtraVars_55, ArgVars0_14);
        NonLocals0_58 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_18);
        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ExtraVars_55, NonLocals0_58, &NonLocals_59);
        hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_59, GoalInfo0_18, &GoalInfo1_89);
        check_hlds__polymorphism__unification_typeinfos_8_p_0(TypeOfX_24, Unification0_16, &Unification_60, GoalInfo1_89, &GoalInfo_61, &_Changed_62, STATE_VARIABLE_Info_82_82, STATE_VARIABLE_Info_68);
        {
          Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (ConsId_51));
          MR_hl_field(MR_mktag(1), Var_84, 1) = (MR_Box) ((MR_Unsigned) (IsExistConstr_52));
          MR_hl_field(MR_mktag(1), Var_84, 2) = ((MR_Box) (ArgVars_57));
        }
        {
          UnifyExpr_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), UnifyExpr_63, 0) = ((MR_Box) (X0_12));
          MR_hl_field(MR_mktag(1), UnifyExpr_63, 1) = ((MR_Box) (Var_84));
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
          Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Unify_64));
          MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        GoalList_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraGoals_56, Var_85);
        hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_65, GoalInfo0_18, Goal_19);
        *Changed_20 = (MR_Integer) 1;
      }
      else
      {
        MR_Word GoalExpr_66;
        MR_Word RHS_90;
        MR_Word Unification_91;
        MR_Word GoalInfo_92;

        check_hlds__polymorphism__unification_typeinfos_8_p_0(TypeOfX_24, Unification0_16, &Unification_91, GoalInfo0_18, &GoalInfo_92, Changed_20, STATE_VARIABLE_Info_0_67, STATE_VARIABLE_Info_68);
        {
          RHS_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RHS_90, 0) = ((MR_Box) (ConsId0_13));
          MR_hl_field(MR_mktag(1), RHS_90, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), RHS_90, 2) = ((MR_Box) (ArgVars0_14));
        }
        {
          GoalExpr_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), GoalExpr_66, 0) = ((MR_Box) (X0_12));
          MR_hl_field(MR_mktag(1), GoalExpr_66, 1) = ((MR_Box) (RHS_90));
          MR_hl_field(MR_mktag(1), GoalExpr_66, 2) = ((MR_Box) (Mode0_15));
          MR_hl_field(MR_mktag(1), GoalExpr_66, 3) = ((MR_Box) (Unification_91));
          MR_hl_field(MR_mktag(1), GoalExpr_66, 4) = ((MR_Box) (UnifyContext_17));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_19 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_66));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_92));
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_unify_9_p_0(
  MR_Word XVar_10,
  MR_Word Y_11,
  MR_Word Mode_12,
  MR_Word Unification0_13,
  MR_Word UnifyContext_14,
  MR_Word GoalInfo0_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_Info_0_46,
  MR_Word * STATE_VARIABLE_Info_47)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Y_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word VarTypes_19;
          MR_Word Type_20;
          MR_Word Unification_21;
          MR_Word GoalInfo_22;
          MR_Word Var_58;
          MR_Word _Changed_23;

          check_hlds__polymorphism_info__poly_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_46, &VarTypes_19);
          hlds__vartypes__lookup_var_type_3_p_0(VarTypes_19, XVar_10, &Type_20);
          check_hlds__polymorphism__unification_typeinfos_8_p_0(Type_20, Unification0_13, &Unification_21, GoalInfo0_15, &GoalInfo_22, &_Changed_23, STATE_VARIABLE_Info_0_46, STATE_VARIABLE_Info_47);
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (XVar_10));
            MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Y_11));
            MR_hl_field(MR_mktag(1), Var_58, 2) = ((MR_Box) (Mode_12));
            MR_hl_field(MR_mktag(1), Var_58, 3) = ((MR_Box) (Unification_21));
            MR_hl_field(MR_mktag(1), Var_58, 4) = ((MR_Box) (UnifyContext_14));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_16 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_22));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ConsId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Y_11, (MR_Integer) 0))));
          MR_Word Args_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Y_11, (MR_Integer) 2))));
          MR_Word _Changed_59;

          check_hlds__polymorphism__polymorphism_process_unify_functor_11_p_0(XVar_10, ConsId_24, Args_26, Mode_12, Unification0_13, UnifyContext_14, GoalInfo0_15, Goal_16, &_Changed_59, STATE_VARIABLE_Info_0_46, STATE_VARIABLE_Info_47);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgVars0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Y_11, (MR_Integer) 2))));
          MR_Word LambdaVars_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Y_11, (MR_Integer) 3))));
          MR_Word Modes_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Y_11, (MR_Integer) 4))));
          MR_Word Det_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Y_11, (MR_Integer) 5))) & (MR_Integer) 7);
          MR_Word LambdaGoal0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Y_11, (MR_Integer) 6))));
          MR_Word InitialSnapshot_36;
          MR_Word LambdaGoal1_37;
          MR_Word LambdaGoal_39;
          MR_Word NonLocalTypeInfos_40;
          MR_Word NonLocalTypeInfosList_41;
          MR_Word ArgVars_42;
          MR_Word Y1_43;
          MR_Word NonLocals0_44;
          MR_Word NonLocals_45;
          MR_Word STATE_VARIABLE_Info_49_49;
          MR_Word STATE_VARIABLE_Info_50_50;
          MR_Word STATE_VARIABLE_Info_51_51;
          MR_Word STATE_VARIABLE_Info_53_53;
          MR_Word Var_55;
          MR_Word GoalInfo_61;
          MR_Word RttiVarMaps0_74;
          MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), Y_11, (MR_Integer) 0)));

          check_hlds__polymorphism_info__get_cache_maps_snapshot_4_p_0((MR_String) "lambda", &InitialSnapshot_36, STATE_VARIABLE_Info_0_46, &STATE_VARIABLE_Info_49_49);
          check_hlds__polymorphism_info__empty_cache_maps_2_p_0(STATE_VARIABLE_Info_49_49, &STATE_VARIABLE_Info_50_50);
          check_hlds__polymorphism__polymorphism_process_goal_4_p_0(LambdaGoal0_35, &LambdaGoal1_37, STATE_VARIABLE_Info_50_50, &STATE_VARIABLE_Info_51_51);
          check_hlds__polymorphism_info__set_cache_maps_snapshot_4_p_0((MR_String) "after lambda", InitialSnapshot_36, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_53_53);
          check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_53_53, &RttiVarMaps0_74);
          succeeded = hlds__hlds_rtti__rtti_varmaps_no_tvars_1_p_0(RttiVarMaps0_74);
          if (succeeded)
          {
            parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &NonLocalTypeInfos_40);
            *STATE_VARIABLE_Info_47 = STATE_VARIABLE_Info_53_53;
            LambdaGoal_39 = LambdaGoal1_37;
          }
          else
          {
            MR_Word VarSet0_75;
            MR_Word VarTypes0_76;
            MR_Word GoalInfo0_78;
            MR_Word NonLocals_79;
            MR_Word NonLocalsPlusArgs0_80;
            MR_Word NonLocalsPlusArgs_81;
            MR_Word OutsideVars_82;
            MR_Word VarSet_84;
            MR_Word VarTypes_85;
            MR_Word RttiVarMaps_86;
            MR_Word _Warnings_83;

            check_hlds__polymorphism_info__poly_info_get_varset_2_p_0(STATE_VARIABLE_Info_53_53, &VarSet0_75);
            check_hlds__polymorphism_info__poly_info_get_var_types_2_p_0(STATE_VARIABLE_Info_53_53, &VarTypes0_76);
            GoalInfo0_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaGoal1_37, (MR_Integer) 1))));
            NonLocals_79 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_78);
            parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars0_31, NonLocals_79, &NonLocalsPlusArgs0_80);
            parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LambdaVars_32, NonLocalsPlusArgs0_80, &NonLocalsPlusArgs_81);
            hlds__goal_util__extra_nonlocal_typeinfos_5_p_0(RttiVarMaps0_74, VarTypes0_76, (MR_Word) ((MR_Unsigned) 0U), NonLocalsPlusArgs_81, &NonLocalTypeInfos_40);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_79, NonLocalTypeInfos_40, &OutsideVars_82);
            hlds__quantification__implicitly_quantify_goal_general_11_p_0((MR_Integer) 0, OutsideVars_82, &_Warnings_83, LambdaGoal1_37, &LambdaGoal_39, VarSet0_75, &VarSet_84, VarTypes0_76, &VarTypes_85, RttiVarMaps0_74, &RttiVarMaps_86);
            check_hlds__polymorphism_info__poly_info_set_varset_types_rtti_5_p_0(VarSet_84, VarTypes_85, RttiVarMaps_86, STATE_VARIABLE_Info_53_53, STATE_VARIABLE_Info_47);
          }
          parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalTypeInfos_40, &NonLocalTypeInfosList_41);
          ArgVars_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), NonLocalTypeInfosList_41, ArgVars0_31);
          {
            Y1_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Y1_43, 0) = (MR_Box) (packed_word_1);
            MR_hl_field(MR_mktag(2), Y1_43, 1) = NULL;
            MR_hl_field(MR_mktag(2), Y1_43, 2) = ((MR_Box) (ArgVars_42));
            MR_hl_field(MR_mktag(2), Y1_43, 3) = ((MR_Box) (LambdaVars_32));
            MR_hl_field(MR_mktag(2), Y1_43, 4) = ((MR_Box) (Modes_33));
            MR_hl_field(MR_mktag(2), Y1_43, 5) = (MR_Box) ((MR_Unsigned) (Det_34));
            MR_hl_field(MR_mktag(2), Y1_43, 6) = ((MR_Box) (LambdaGoal_39));
          }
          NonLocals0_44 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_15);
          parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals0_44, NonLocalTypeInfos_40, &NonLocals_45);
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_45, GoalInfo0_15, &GoalInfo_61);
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (XVar_10));
            MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Y1_43));
            MR_hl_field(MR_mktag(1), Var_55, 2) = ((MR_Box) (Mode_12));
            MR_hl_field(MR_mktag(1), Var_55, 3) = ((MR_Box) (Unification0_13));
            MR_hl_field(MR_mktag(1), Var_55, 4) = ((MR_Box) (UnifyContext_14));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_16 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_55));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_61));
          }
        }
        break;
    }
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

    ArgVars0_19 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[30]), Args0_15);
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
      if (!(succeeded))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_call\'/8", (MR_String) "existq_tvar bound");
          return;
        }
      Context_53 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_11);
      check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_115_95_95_91_50_93_95_48_7_p_0(ActualUnivConstraints_49, Context_53, &ExtraUnivClassVarsMCAs_54, &ExtraUnivClassGoals_55, STATE_VARIABLE_Info_75_75, &STATE_VARIABLE_Info_79_79);
      mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[4]), ExtraUnivClassVarsMCAs_54, &ExtraUnivClassVars_56);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ParentExistConstraints_36, &NumExistConstraints_57);
      hlds__hlds_class__lookup_hlds_constraint_list_5_p_0(ConstraintMap_46, (MR_Integer) 1, GoalId_47, NumExistConstraints_57, &ActualExistConstraints_58);
      check_hlds__polymorphism__make_existq_typeclass_info_vars_6_p_0(ActualExistConstraints_58, Context_53, &ExtraExistClassVars_59, &ExtraExistClassGoals_60, STATE_VARIABLE_Info_79_79, &STATE_VARIABLE_Info_81_81);
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

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_115_95_95_91_50_93_95_48_7_p_0(
  MR_Word Constraints_8,
  MR_Word Context_10,
  MR_Word * TypeClassInfoVarsMCAs_11,
  MR_Word * ExtraGoals_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_115_95_50_95_95_91_51_93_95_48_8_p_0(Constraints_8, (MR_Word) ((MR_Unsigned) 0U), Context_10, TypeClassInfoVarsMCAs_11, ExtraGoals_12, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_DictionaryType_4;

    check_hlds__polymorphism__build_typeclass_info_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv12_DictionaryType_4);
    *wrapper_arg_2 = ((MR_Box) (conv12_DictionaryType_4));
  }
}

static void MR_CALL 
check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv11_DictionaryType_4;

    check_hlds__polymorphism__build_typeclass_info_type_2_p_0(((MR_Word) (wrapper_arg_1)), &conv11_DictionaryType_4);
    *wrapper_arg_2 = ((MR_Box) (conv11_DictionaryType_4));
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
    MR_Word conv10_LambdaHeadVar__2_54;

    conv10_LambdaHeadVar__2_54 = check_hlds__polymorphism__IntroducedFrom__func__polymorphism_process_foreign_proc_args__1689__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv10_LambdaHeadVar__2_54));
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

    succeeded = check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_foreign_proc_args__1675__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
    MR_Word UnivTypes_37;
    MR_Word ExistTypes_38;
    MR_Word OrigArgTypes_39;
    MR_Word Var_40;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_49;
    MR_Word Var_57;
    MR_Box conv6_Var_30;
    MR_Box conv9_Var_32;

    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_5, &PredTypeVarSet_9, &ExistQVars_10, &PredArgTypes_11);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_5, &Var_40);
    UnivCs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 0))));
    ExistCs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 1))));
    UnivVars0_14 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[5]), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[25]), UnivCs_12);
    mercury__list__condense_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), UnivVars0_14, &UnivConstrainedVars_15);
    ExistVars0_16 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[5]), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[26]), ExistCs_13);
    mercury__list__condense_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), ExistVars0_16, &ExistConstrainedVars_17);
    parse_tree__prog_type__type_vars_list_2_p_0(PredArgTypes_11, &PredTypeVars0_18);
    mercury__list__remove_dups_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), PredTypeVars0_18, &PredTypeVars1_19);
    mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), PredTypeVars1_19, UnivConstrainedVars_15, &PredTypeVars2_20);
    mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), PredTypeVars2_20, ExistConstrainedVars_17, &PredTypeVars_21);
    parse_tree__prog_mode__in_mode_1_p_0(&In_22);
    parse_tree__prog_mode__out_mode_1_p_0(&Out_23);
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_3));
      MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (Out_23));
      MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) (Impl_6));
      MR_hl_field(MR_mktag(0), Var_43, 5) = ((MR_Box) (PredTypeVarSet_9));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), Var_43, ExistCs_13, &ExistTypeClassArgInfos_24);
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_4));
      MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (In_22));
      MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) (Impl_6));
      MR_hl_field(MR_mktag(0), Var_44, 5) = ((MR_Box) (PredTypeVarSet_9));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), Var_44, UnivCs_12, &UnivTypeClassArgInfos_25);
    TypeClassArgInfos_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), UnivTypeClassArgInfos_25, ExistTypeClassArgInfos_24);
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[8]));
      MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_5));
      MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (ExistQVars_10));
    }
    mercury__list__filter_4_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), Var_45, PredTypeVars_21, &ExistUnconstrainedVars_27, &UnivUnconstrainedVars_28);
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_6));
      MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) ((MR_String) "Out"));
      MR_hl_field(MR_mktag(0), Var_46, 4) = ((MR_Box) (Out_23));
      MR_hl_field(MR_mktag(0), Var_46, 5) = ((MR_Box) (Impl_6));
      MR_hl_field(MR_mktag(0), Var_46, 6) = ((MR_Box) (PredTypeVarSet_9));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_46, ExistUnconstrainedVars_27, &ExistTypeArgInfos_29, ((MR_Box) ((MR_Integer) 1)), &conv6_Var_30);
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_foreign_proc_args_4_p_0_7));
      MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) ((MR_String) "In"));
      MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) (In_22));
      MR_hl_field(MR_mktag(0), Var_49, 5) = ((MR_Box) (Impl_6));
      MR_hl_field(MR_mktag(0), Var_49, 6) = ((MR_Box) (PredTypeVarSet_9));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_49, UnivUnconstrainedVars_28, &UnivTypeArgInfos_31, ((MR_Box) ((MR_Integer) 1)), &conv9_Var_32);
    TypeInfoArgInfos_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), UnivTypeArgInfos_31, ExistTypeArgInfos_29);
    ArgInfos_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), TypeInfoArgInfos_33, TypeClassArgInfos_26);
    TypeInfoTypes_35 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[27]), PredTypeVars_21);
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[28]), UnivCs_12, &UnivTypes_37);
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[29]), ExistCs_13, &ExistTypes_38);
    Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), UnivTypes_37, ExistTypes_38);
    OrigArgTypes_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeInfoTypes_35, Var_57);
    hlds__hlds_goal__make_foreign_args_4_p_0(Vars_7, ArgInfos_34, OrigArgTypes_39, Args_8);
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
          check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_115_95_50_95_95_91_51_93_95_48_8_p_0(ActualExistentialConstraints_44, (MR_Word) ((MR_Unsigned) 0U), Context_43, &ExtraTypeClassVarsMCAs_45, &ExtraTypeClassGoals_46, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_60_60);
          mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[4]), ExtraTypeClassVarsMCAs_45, &ExtraTypeClassVars_47);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word ActualExistentialConstraints_62;

          hlds__hlds_class__lookup_hlds_constraint_list_5_p_0(ConstraintMap_41, (MR_Integer) 1, GoalId_42, NumExistentialConstraints_33, &ActualExistentialConstraints_62);
          check_hlds__polymorphism__make_existq_typeclass_info_vars_6_p_0(ActualExistentialConstraints_62, Context_43, &ExtraTypeClassVars_47, &ExtraTypeClassGoals_46, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_60_60);
        }
        break;
    }
    check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_vars_6_p_0(ActualExistentialTypes_38, Context_43, &ExtraTypeInfoVarsMCAs_48, &ExtraTypeInfoGoals_49, STATE_VARIABLE_Info_60_60, STATE_VARIABLE_Info_52);
    mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[4]), ExtraTypeInfoVarsMCAs_48, &ExtraTypeInfoVars_50);
    *ExtraGoals_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraTypeInfoGoals_49, ExtraTypeClassGoals_46);
    *ExtraVars_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ExtraTypeInfoVars_50, ExtraTypeClassVars_47);
  }
}

static void MR_CALL 
check_hlds__polymorphism__make_existq_typeclass_info_vars_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_ExtraGoals_21;
    MR_Word conv5_STATE_VARIABLE_Info_23;

    check_hlds__polymorphism__polymorphism_maybe_extract_type_info_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ExtraGoals_21, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_Info_23);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ExtraGoals_21));
    *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_Info_23));
  }
}

static void MR_CALL 
check_hlds__polymorphism__make_existq_typeclass_info_vars_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__3_3;

    hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__polymorphism__make_existq_typeclass_info_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_TypeClassInfoVar_8;
    MR_Word conv0_STATE_VARIABLE_Info_14;

    check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_TypeClassInfoVar_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_14);
    *wrapper_arg_2 = ((MR_Box) (conv1_TypeClassInfoVar_8));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
  }
}

static void MR_CALL 
check_hlds__polymorphism__make_existq_typeclass_info_vars_6_p_0(
  MR_Word ExistentialConstraints_7,
  MR_Word Context_8,
  MR_Word * ExtraTypeClassVars_9,
  MR_Word * ExtraGoals_10,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_Word OldRttiVarMaps_12;
    MR_Word RttiVarMaps0_13;
    MR_Word RttiVarMaps_14;
    MR_Word TVars0_15;
    MR_Word TVars_16;
    MR_Word STATE_VARIABLE_Info_20_20;
    MR_Word STATE_VARIABLE_Info_22_22;
    MR_Word Var_23;
    MR_Box conv2_STATE_VARIABLE_Info_20_20;
    MR_Box conv4_RttiVarMaps_14;
    MR_Box conv8_ExtraGoals_10;
    MR_Box conv7_STATE_VARIABLE_Info_18;

    check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_17, &OldRttiVarMaps_12);
    mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_8[3]), ExistentialConstraints_7, ExtraTypeClassVars_9, ((MR_Box) (STATE_VARIABLE_Info_0_17)), &conv2_STATE_VARIABLE_Info_20_20);
    STATE_VARIABLE_Info_20_20 = ((MR_Word) (conv2_STATE_VARIABLE_Info_20_20));
    check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_20_20, &RttiVarMaps0_13);
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[24]), *ExtraTypeClassVars_9, ((MR_Box) (RttiVarMaps0_13)), &conv4_RttiVarMaps_14);
    RttiVarMaps_14 = ((MR_Word) (conv4_RttiVarMaps_14));
    check_hlds__polymorphism_info__poly_info_set_rtti_varmaps_3_p_0(RttiVarMaps_14, STATE_VARIABLE_Info_20_20, &STATE_VARIABLE_Info_22_22);
    parse_tree__prog_type__constraint_list_get_tvars_2_p_0(ExistentialConstraints_7, &TVars0_15);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), TVars0_15, &TVars_16);
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (check_hlds__polymorphism__make_existq_typeclass_info_vars_6_p_0_3));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (OldRttiVarMaps_12));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (Context_8));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[9]), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0), Var_23, TVars_16, ((MR_Box) ((MR_Unsigned) 0U)), &conv8_ExtraGoals_10, ((MR_Box) (STATE_VARIABLE_Info_22_22)), &conv7_STATE_VARIABLE_Info_18);
    *ExtraGoals_10 = ((MR_Word) (conv8_ExtraGoals_10));
    *STATE_VARIABLE_Info_18 = ((MR_Word) (conv7_STATE_VARIABLE_Info_18));
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

      mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[22]), TypeVars_14, &TypeInfoLocns_17, ((MR_Box) (STATE_VARIABLE_Info_0_22)), &conv2_STATE_VARIABLE_Info_23);
      *STATE_VARIABLE_Info_23 = ((MR_Word) (conv2_STATE_VARIABLE_Info_23));
      mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[23]), TypeInfoLocns_17, &TypeInfoVars0_42);
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
    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_115_95_50_95_95_91_51_93_95_48_8_p_0(ActualExistConstraints_24, (MR_Word) ((MR_Unsigned) 0U), Context_28, &ExistTypeClassVarsMCAs_29, &ExtraTypeClassGoals_30, STATE_VARIABLE_Info_0_45, &STATE_VARIABLE_Info_47_47);
    mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[4]), ExistTypeClassVarsMCAs_29, &ExistTypeClassVars_31);
    check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_47_47, &RttiVarMaps0_32);
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[21]), ExistTypeClassVars_31, ((MR_Box) (RttiVarMaps0_32)), &conv1_RttiVarMaps_33);
    RttiVarMaps_33 = ((MR_Word) (conv1_RttiVarMaps_33));
    check_hlds__polymorphism_info__poly_info_set_rtti_varmaps_3_p_0(RttiVarMaps_33, STATE_VARIABLE_Info_47_47, &STATE_VARIABLE_Info_49_49);
    check_hlds__polymorphism__assign_var_list_3_p_0(ExistTypeClassInfoHeadVars_14, ExistTypeClassVars_31, &ExtraTypeClassUnifyGoals_34);
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
    check_hlds__polymorphism__assign_var_list_3_p_0(TypeInfoHeadVars_13, TypeInfoVars_42, &ExtraTypeInfoUnifyGoals_43);
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
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_112_114_111_111_102_95_95_91_52_93_95_48_9_p_0(
  MR_Word Constraint_10,
  MR_Word Seen_11,
  MR_Word Proof_12,
  MR_Word Context_14,
  MR_Word * TypeClassInfoVarMCA_15,
  MR_Word * Goals_16,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  if (((MR_tag((MR_Word) Proof_12)) == (MR_Integer) 0))
  {
    MR_Integer InstanceNum_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Proof_12, (MR_Integer) 0))));

    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_52_93_95_48_9_p_0(Constraint_10, Seen_11, InstanceNum_19, Context_14, TypeClassInfoVarMCA_15, Goals_16, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
  }
  else
  {
    MR_Word SubClassConstraint_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Proof_12, (MR_Integer) 0))));

    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_115_117_98_99_108_97_115_115_95_95_91_52_93_95_48_9_p_0(Constraint_10, Seen_11, SubClassConstraint_18, Context_14, TypeClassInfoVarMCA_15, Goals_16, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
  }
}

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_95_95_91_51_93_95_48_8_p_0(
  MR_Word Constraint_9,
  MR_Word Seen_10,
  MR_Word Context_12,
  MR_Word * TypeClassInfoVarMCA_13,
  MR_Word * Goals_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_bool succeeded;
    MR_Word OldTypeClassInfoVar_17;
    MR_Word RttiVarMaps0_16;

    check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_22, &RttiVarMaps0_16);
    succeeded = hlds__hlds_rtti__rtti_search_typeclass_info_var_3_p_0(RttiVarMaps0_16, Constraint_9, &OldTypeClassInfoVar_17);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *TypeClassInfoVarMCA_13 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OldTypeClassInfoVar_17));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *Goals_14 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
    }
    else
    {
      MR_Word Proof_20;
      MR_Word ProofMap_19;
      MR_Box conv0_Proof_20;

      check_hlds__polymorphism_info__poly_info_get_proof_map_2_p_0(STATE_VARIABLE_Info_0_22, &ProofMap_19);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ProofMap_19, ((MR_Box) (Constraint_9)), &conv0_Proof_20);
      if (succeeded)
      {
        Proof_20 = ((MR_Word) (conv0_Proof_20));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        if (((MR_tag((MR_Word) Proof_20)) == (MR_Integer) 0))
        {
          MR_Integer InstanceNum_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Proof_20, (MR_Integer) 0))));

          check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_52_93_95_48_9_p_0(Constraint_9, Seen_10, InstanceNum_47, Context_12, TypeClassInfoVarMCA_13, Goals_14, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
        }
        else
        {
          MR_Word SubClassConstraint_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Proof_20, (MR_Integer) 0))));

          check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_115_117_98_99_108_97_115_115_95_95_91_52_93_95_48_9_p_0(Constraint_9, Seen_10, SubClassConstraint_46, Context_12, TypeClassInfoVarMCA_13, Goals_14, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
        }
      else
      {
        MR_Word RttiVarMaps_21;
        MR_Word STATE_VARIABLE_Info_27_27;
        MR_Word RttiVarMaps0_30;
        MR_Word TypeClassInfoVar_31;

        check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0((MR_Integer) 0, Constraint_9, &TypeClassInfoVar_31, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_27_27);
        check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_27_27, &RttiVarMaps0_30);
        hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(TypeClassInfoVar_31, RttiVarMaps0_30, &RttiVarMaps_21);
        check_hlds__polymorphism_info__poly_info_set_rtti_varmaps_3_p_0(RttiVarMaps_21, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_23);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *TypeClassInfoVarMCA_13 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeClassInfoVar_31));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *Goals_14 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_52_93_95_48_9_p_0(
  MR_Word Constraint_10,
  MR_Word Seen_11,
  MR_Integer InstanceNum_12,
  MR_Word Context_14,
  MR_Word * TypeClassInfoVarMCA_15,
  MR_Word * Goals_16,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34)
{
  {
    MR_bool succeeded;
    MR_Word ConstStructDb0_23;
    MR_Word InstanceId_24;
    MR_Integer InstanceIdConstNum_25;

    check_hlds__polymorphism_info__poly_info_get_const_struct_db_2_p_0(STATE_VARIABLE_Info_0_33, &ConstStructDb0_23);
    {
      InstanceId_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InstanceId_24, 0) = ((MR_Box) (InstanceNum_12));
      MR_hl_field(MR_mktag(0), InstanceId_24, 1) = ((MR_Box) (Constraint_10));
      MR_hl_field(MR_mktag(0), InstanceId_24, 2) = ((MR_Box) (Seen_11));
    }
    succeeded = hlds__const_struct__search_for_constant_instance_3_p_0(ConstStructDb0_23, InstanceId_24, &InstanceIdConstNum_25);
    if (succeeded)
    {
      MR_Word TypeClassInfoVar_26;
      MR_Word Var_80;
      MR_Word Var_81;

      check_hlds__polymorphism__materialize_typeclass_info_var_6_p_0(Constraint_10, InstanceIdConstNum_25, &TypeClassInfoVar_26, Goals_16, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
      {
        Var_81 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (InstanceIdConstNum_25));
      }
      {
        Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *TypeClassInfoVarMCA_15 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeClassInfoVar_26));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_80));
      }
    }
    else
      check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0(InstanceId_24, Context_14, TypeClassInfoVarMCA_15, Goals_16, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
  }
}

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_115_95_102_111_114_95_115_117_112_101_114_99_108_97_115_115_101_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Constraint_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Constraints_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypeClassInfoVarMCA_14;
      MR_Word TypeClassInfoVarsMCAs_15;
      MR_Word Context_18;
      MR_Word HeadGoals_19;
      MR_Word TailGoals_20;
      MR_Word STATE_VARIABLE_Info_24_24;
      MR_Word OldTypeClassInfoVar_37;
      MR_Word RttiVarMaps0_36;

      mercury__term__context_init_1_p_0(&Context_18);
      check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_5, &RttiVarMaps0_36);
      succeeded = hlds__hlds_rtti__rtti_search_typeclass_info_var_3_p_0(RttiVarMaps0_36, Constraint_11, &OldTypeClassInfoVar_37);
      if (succeeded)
      {
        {
          TypeClassInfoVarMCA_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeClassInfoVarMCA_14, 0) = ((MR_Box) (OldTypeClassInfoVar_37));
          MR_hl_field(MR_mktag(0), TypeClassInfoVarMCA_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        HeadGoals_19 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Info_24_24 = STATE_VARIABLE_Info_0_5;
      }
      else
      {
        MR_Word Proof_40;
        MR_Word ProofMap_39;
        MR_Box conv0_Proof_40;

        check_hlds__polymorphism_info__poly_info_get_proof_map_2_p_0(STATE_VARIABLE_Info_0_5, &ProofMap_39);
        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ProofMap_39, ((MR_Box) (Constraint_11)), &conv0_Proof_40);
        if (succeeded)
        {
          Proof_40 = ((MR_Word) (conv0_Proof_40));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          if (((MR_tag((MR_Word) Proof_40)) == (MR_Integer) 0))
          {
            MR_Integer InstanceNum_65 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Proof_40, (MR_Integer) 0))));

            check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_52_93_95_48_9_p_0(Constraint_11, (MR_Word) ((MR_Unsigned) 0U), InstanceNum_65, Context_18, &TypeClassInfoVarMCA_14, &HeadGoals_19, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_24_24);
          }
          else
          {
            MR_Word SubClassConstraint_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Proof_40, (MR_Integer) 0))));

            check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_115_117_98_99_108_97_115_115_95_95_91_52_93_95_48_9_p_0(Constraint_11, (MR_Word) ((MR_Unsigned) 0U), SubClassConstraint_64, Context_18, &TypeClassInfoVarMCA_14, &HeadGoals_19, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_24_24);
          }
        else
        {
          MR_Word RttiVarMaps_41;
          MR_Word STATE_VARIABLE_Info_27_45;
          MR_Word RttiVarMaps0_48;
          MR_Word TypeClassInfoVar_49;

          check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0((MR_Integer) 0, Constraint_11, &TypeClassInfoVar_49, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_27_45);
          check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_27_45, &RttiVarMaps0_48);
          hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(TypeClassInfoVar_49, RttiVarMaps0_48, &RttiVarMaps_41);
          check_hlds__polymorphism_info__poly_info_set_rtti_varmaps_3_p_0(RttiVarMaps_41, STATE_VARIABLE_Info_27_45, &STATE_VARIABLE_Info_24_24);
          {
            TypeClassInfoVarMCA_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeClassInfoVarMCA_14, 0) = ((MR_Box) (TypeClassInfoVar_49));
            MR_hl_field(MR_mktag(0), TypeClassInfoVarMCA_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          HeadGoals_19 = (MR_Word) ((MR_Unsigned) 0U);
        }
      }
      check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_115_95_102_111_114_95_115_117_112_101_114_99_108_97_115_115_101_115_95_95_91_50_93_95_48_6_p_0(Constraints_12, &TypeClassInfoVarsMCAs_15, &TailGoals_20, STATE_VARIABLE_Info_24_24, STATE_VARIABLE_Info_6);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeClassInfoVarMCA_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TypeClassInfoVarsMCAs_15));
      }
      *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadGoals_19, TailGoals_20);
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_114_103_95_115_117_112_101_114_99_108_97_115_115_95_118_97_114_115_95_95_91_52_93_95_48_8_p_0(
  MR_Word ClassDefn_9,
  MR_Word InstanceTypes_10,
  MR_Word SuperClassProofMap_11,
  MR_Word * SuperClassTypeClassInfoVarsMCAs_13,
  MR_Word * SuperClassGoals_14,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  {
    MR_Word ProofMap_16;
    MR_Word TVarSet0_17;
    MR_Word SuperClasses0_18;
    MR_Word ClassVars0_19;
    MR_Word ClassTVarSet_20;
    MR_Word TVarSet1_21;
    MR_Word Renaming_22;
    MR_Word ClassVars_23;
    MR_Word TypeSubst_24;
    MR_Word SuperClasses1_25;
    MR_Word SuperClasses_26;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Info_30_30;
    MR_Word STATE_VARIABLE_Info_31_31;

    check_hlds__polymorphism_info__poly_info_get_proof_map_2_p_0(STATE_VARIABLE_Info_0_27, &ProofMap_16);
    check_hlds__polymorphism_info__poly_info_get_typevarset_2_p_0(STATE_VARIABLE_Info_0_27, &TVarSet0_17);
    SuperClasses0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 1))));
    ClassVars0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 4))));
    ClassTVarSet_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_9, (MR_Integer) 8))));
    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet0_17, ClassTVarSet_20, &TVarSet1_21, &Renaming_22);
    check_hlds__polymorphism_info__poly_info_set_typevarset_3_p_0(TVarSet1_21, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_29_29);
    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_22, ClassVars0_19, &ClassVars_23);
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ClassVars_23, InstanceTypes_10, &TypeSubst_24);
    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(Renaming_22, SuperClasses0_18, &SuperClasses1_25);
    parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(TypeSubst_24, SuperClasses1_25, &SuperClasses_26);
    check_hlds__polymorphism_info__poly_info_set_proof_map_3_p_0(SuperClassProofMap_11, STATE_VARIABLE_Info_29_29, &STATE_VARIABLE_Info_30_30);
    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_115_95_102_111_114_95_115_117_112_101_114_99_108_97_115_115_101_115_95_95_91_50_93_95_48_6_p_0(SuperClasses_26, SuperClassTypeClassInfoVarsMCAs_13, SuperClassGoals_14, STATE_VARIABLE_Info_30_30, &STATE_VARIABLE_Info_31_31);
    check_hlds__polymorphism_info__poly_info_set_proof_map_3_p_0(ProofMap_16, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_28);
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__polymorphism__IntroducedFrom__pred__do_make_typeclass_info_from_instance__2628__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_ConstOrVarArg_5;

    check_hlds__polymorphism__make_const_or_var_arg_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_ConstOrVarArg_5);
    *wrapper_arg_2 = ((MR_Box) (conv3_ConstOrVarArg_5));
  }
}

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0(
  MR_Word InstanceId_8,
  MR_Word Context_10,
  MR_Word * TypeClassInfoVarMCA_11,
  MR_Word * Goals_12,
  MR_Word STATE_VARIABLE_Info_0_95,
  MR_Word * STATE_VARIABLE_Info_96)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_14;
    MR_Word InstanceTable_15;
    MR_Word ClassTable_16;
    MR_Word TypeVarSet_17;
    MR_Word ProofMap0_18;
    MR_Integer InstanceNum_19;
    MR_Word Constraint_20;
    MR_Word Seen_21;
    MR_Word ClassName_22;
    MR_Word ConstrainedTypes_23;
    MR_Integer ClassArity_24;
    MR_Word ClassId_25;
    MR_Word InstanceList_26;
    MR_Word ProofInstanceDefn_27;
    MR_Word InstanceTypes_29;
    MR_Word InstanceConstraints_33;
    MR_Word InstanceTVarset_36;
    MR_Word InstanceProofMap_37;
    MR_Word KindMap_38;
    MR_Word InstanceTvars_39;
    MR_Word UnconstrainedTvars_40;
    MR_Word Renaming_42;
    MR_Word RenamedInstanceTypes_43;
    MR_Word InstanceSubst_44;
    MR_Word RenamedInstanceConstraints_45;
    MR_Word ActualInstanceConstraints0_46;
    MR_Word ActualInstanceConstraints_47;
    MR_Word RenamedInstanceProofMap_48;
    MR_Word ActualInstanceProofMap_49;
    MR_Word RenamedUnconstrainedTvars_50;
    MR_Word RenamedKindMap_51;
    MR_Word ActualUnconstrainedTypes_52;
    MR_Word ProofMap_53;
    MR_Word InitialVarMapsSnapshot_54;
    MR_Word ArgTypeInfoVarsMCAs_55;
    MR_Word TypeInfoGoals_56;
    MR_Word ArgTypeClassInfoVarsMCAs_57;
    MR_Word InstanceConstraintGoals_58;
    MR_Word ArgUnconstrainedTypeInfoVarsMCAs_59;
    MR_Word UnconstrainedTypeInfoGoals_60;
    MR_Word ClassDefn_61;
    MR_Word ArgSuperClassVarsMCAs_62;
    MR_Word SuperClassGoals_63;
    MR_Word PrevGoals_64;
    MR_Word ArgVarsMCAs_65;
    MR_Word ArgCOVAs_66;
    MR_Word ConstraintClassName_67;
    MR_Word ConstraintArgTypes_68;
    MR_Word TypeClassInfoMap0_69;
    MR_Word STATE_VARIABLE_Info_98_98;
    MR_Word STATE_VARIABLE_Info_99_99;
    MR_Word STATE_VARIABLE_Info_100_100;
    MR_Word STATE_VARIABLE_Info_101_101;
    MR_Word STATE_VARIABLE_Info_102_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word STATE_VARIABLE_Info_111_111;
    MR_Box conv0_InstanceList_26;
    MR_Box conv1_ProofInstanceDefn_27;
    MR_Word _NewTVarset_41;
    MR_Box conv2_ClassDefn_61;
    MR_Word OldTypeClassInfoVarMCA0_74;
    MR_Word TypeInfo_144_144;
    MR_Word TypeCtorInfo_145_145;
    MR_Word TypeInfo_146_146;
    MR_Word ClassNameMap0_70;
    MR_Word OldEntry0_71;
    MR_Word ArgsMap0_73;
    MR_Box conv4_ClassNameMap0_70;
    MR_Box conv5_OldEntry0_71;
    MR_Box conv6_OldTypeClassInfoVarMCA0_74;
    MR_Integer TypeClassInfoConstArgNum_92;
    MR_Word TypeClassInfoConstArg_91;
    MR_Word Var_120;

    check_hlds__polymorphism_info__poly_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_95, &ModuleInfo_14);
    hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_14, &InstanceTable_15);
    hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_14, &ClassTable_16);
    check_hlds__polymorphism_info__poly_info_get_typevarset_2_p_0(STATE_VARIABLE_Info_0_95, &TypeVarSet_17);
    check_hlds__polymorphism_info__poly_info_get_proof_map_2_p_0(STATE_VARIABLE_Info_0_95, &ProofMap0_18);
    InstanceNum_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), InstanceId_8, (MR_Integer) 0))));
    Constraint_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceId_8, (MR_Integer) 1))));
    Seen_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceId_8, (MR_Integer) 2))));
    ClassName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_20, (MR_Integer) 0))));
    ConstrainedTypes_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_20, (MR_Integer) 1))));
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ConstrainedTypes_23, &ClassArity_24);
    {
      ClassId_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ClassId_25, 0) = ((MR_Box) (ClassName_22));
      MR_hl_field(MR_mktag(0), ClassId_25, 1) = ((MR_Box) (ClassArity_24));
    }
    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[6]), InstanceTable_15, ((MR_Box) (ClassId_25)), &conv0_InstanceList_26);
    InstanceList_26 = ((MR_Word) (conv0_InstanceList_26));
    mercury__list__det_index1_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), InstanceList_26, InstanceNum_19, &conv1_ProofInstanceDefn_27);
    ProofInstanceDefn_27 = ((MR_Word) (conv1_ProofInstanceDefn_27));
    InstanceTypes_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProofInstanceDefn_27, (MR_Integer) 1))));
    InstanceConstraints_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProofInstanceDefn_27, (MR_Integer) 5))));
    InstanceTVarset_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProofInstanceDefn_27, (MR_Integer) 8))));
    InstanceProofMap_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProofInstanceDefn_27, (MR_Integer) 9))));
    mercury__map__init_1_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0), &KindMap_38);
    parse_tree__prog_type__type_vars_list_2_p_0(InstanceTypes_29, &InstanceTvars_39);
    parse_tree__prog_type__get_unconstrained_tvars_3_p_0(InstanceTvars_39, InstanceConstraints_33, &UnconstrainedTvars_40);
    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TypeVarSet_17, InstanceTVarset_36, &_NewTVarset_41, &Renaming_42);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_42, InstanceTypes_29, &RenamedInstanceTypes_43);
    parse_tree__prog_type__type_list_subsumes_det_3_p_0(RenamedInstanceTypes_43, ConstrainedTypes_23, &InstanceSubst_44);
    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(Renaming_42, InstanceConstraints_33, &RenamedInstanceConstraints_45);
    parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(InstanceSubst_44, RenamedInstanceConstraints_45, &ActualInstanceConstraints0_46);
    mercury__list__delete_elems_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ActualInstanceConstraints0_46, Seen_21, &ActualInstanceConstraints_47);
    check_hlds__type_util__apply_variable_renaming_to_constraint_proof_map_3_p_0(Renaming_42, InstanceProofMap_37, &RenamedInstanceProofMap_48);
    check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_3_p_0(InstanceSubst_44, RenamedInstanceProofMap_48, &ActualInstanceProofMap_49);
    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_42, UnconstrainedTvars_40, &RenamedUnconstrainedTvars_50);
    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0(Renaming_42, KindMap_38, &RenamedKindMap_51);
    parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(RenamedKindMap_51, InstanceSubst_44, RenamedUnconstrainedTvars_50, &ActualUnconstrainedTypes_52);
    mercury__map__overlay_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ProofMap0_18, ActualInstanceProofMap_49, &ProofMap_53);
    check_hlds__polymorphism_info__get_var_maps_snapshot_4_p_0((MR_String) "make_typeclass_info_from_instance", &InitialVarMapsSnapshot_54, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_98_98);
    check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_vars_6_p_0(ConstrainedTypes_23, Context_10, &ArgTypeInfoVarsMCAs_55, &TypeInfoGoals_56, STATE_VARIABLE_Info_98_98, &STATE_VARIABLE_Info_99_99);
    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_115_95_50_95_95_91_51_93_95_48_8_p_0(ActualInstanceConstraints_47, Seen_21, Context_10, &ArgTypeClassInfoVarsMCAs_57, &InstanceConstraintGoals_58, STATE_VARIABLE_Info_99_99, &STATE_VARIABLE_Info_100_100);
    check_hlds__polymorphism_type_info__polymorphism_do_make_type_info_vars_6_p_0(ActualUnconstrainedTypes_52, Context_10, &ArgUnconstrainedTypeInfoVarsMCAs_59, &UnconstrainedTypeInfoGoals_60, STATE_VARIABLE_Info_100_100, &STATE_VARIABLE_Info_101_101);
    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_16, ((MR_Box) (ClassId_25)), &conv2_ClassDefn_61);
    ClassDefn_61 = ((MR_Word) (conv2_ClassDefn_61));
    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_114_103_95_115_117_112_101_114_99_108_97_115_115_95_118_97_114_115_95_95_91_52_93_95_48_8_p_0(ClassDefn_61, ConstrainedTypes_23, ProofMap_53, &ArgSuperClassVarsMCAs_62, &SuperClassGoals_63, STATE_VARIABLE_Info_101_101, &STATE_VARIABLE_Info_102_102);
    Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), InstanceConstraintGoals_58, SuperClassGoals_63);
    Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), TypeInfoGoals_56, Var_104);
    PrevGoals_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), UnconstrainedTypeInfoGoals_60, Var_103);
    Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[0]), ArgSuperClassVarsMCAs_62, ArgTypeInfoVarsMCAs_55);
    Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[0]), ArgTypeClassInfoVarsMCAs_57, Var_106);
    ArgVarsMCAs_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[0]), ArgUnconstrainedTypeInfoVarsMCAs_59, Var_105);
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[0]), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_const_or_var_arg_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[20]), ArgVarsMCAs_65, &ArgCOVAs_66);
    ConstraintClassName_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_20, (MR_Integer) 0))));
    ConstraintArgTypes_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_20, (MR_Integer) 1))));
    check_hlds__polymorphism_info__poly_info_get_typeclass_info_map_2_p_0(STATE_VARIABLE_Info_102_102, &TypeClassInfoMap0_69);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[1]), TypeClassInfoMap0_69, ((MR_Box) (ConstraintClassName_67)), &conv4_ClassNameMap0_70);
    if (succeeded)
    {
      ClassNameMap0_70 = ((MR_Word) (conv4_ClassNameMap0_70));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeInfo_144_144 = (MR_Word) (&check_hlds__polymorphism_scalar_common_1[7]);
      TypeCtorInfo_145_145 = (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0);
      succeeded = mercury__map__search_3_p_0(TypeInfo_144_144, TypeCtorInfo_145_145, ClassNameMap0_70, ((MR_Box) (ConstraintArgTypes_68)), &conv5_OldEntry0_71);
      if (succeeded)
      {
        OldEntry0_71 = ((MR_Word) (conv5_OldEntry0_71));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        ArgsMap0_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldEntry0_71, (MR_Integer) 1))));
        TypeInfo_146_146 = (MR_Word) (&check_hlds__polymorphism_scalar_common_1[8]);
        succeeded = mercury__map__search_3_p_0(TypeInfo_146_146, (MR_Word) (&check_hlds__polymorphism_scalar_common_2[0]), ArgsMap0_73, ((MR_Box) (ArgCOVAs_66)), &conv6_OldTypeClassInfoVarMCA0_74);
        if (succeeded)
        {
          OldTypeClassInfoVarMCA0_74 = ((MR_Word) (conv6_OldTypeClassInfoVarMCA0_74));
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
    {
      MR_Integer NumReuses_75;
      MR_Word STATE_VARIABLE_Info_109_109;
      MR_Integer Var_110;

      *TypeClassInfoVarMCA_11 = OldTypeClassInfoVarMCA0_74;
      *Goals_12 = (MR_Word) ((MR_Unsigned) 0U);
      check_hlds__polymorphism_info__set_var_maps_snapshot_4_p_0((MR_String) "make_typeclass_info", InitialVarMapsSnapshot_54, STATE_VARIABLE_Info_102_102, &STATE_VARIABLE_Info_109_109);
      check_hlds__polymorphism_info__poly_info_get_num_reuses_2_p_0(STATE_VARIABLE_Info_109_109, &NumReuses_75);
      Var_110 = (MR_Integer) ((MR_Unsigned) NumReuses_75 + (MR_Unsigned) 2);
      check_hlds__polymorphism_info__poly_info_set_num_reuses_3_p_0(Var_110, STATE_VARIABLE_Info_109_109, &STATE_VARIABLE_Info_111_111);
    }
    else
    {
      MR_Word BaseConsId_76;
      MR_Word BaseVar_77;
      MR_Word BaseGoals_78;
      MR_Word TypeClassInfoVar_79;
      MR_Word TypeClassInfoMCA_80;
      MR_Word TypeClassInfoMap1_81;
      MR_Word TypeClassInfoMap_89;
      MR_Word STATE_VARIABLE_Info_113_113;
      MR_Word Var_114;
      MR_Word STATE_VARIABLE_Info_115_115;
      MR_Word ClassNameMap1_82;
      MR_Box conv7_ClassNameMap1_82;

      BaseConsId_76 = hlds__hlds_code_util__base_typeclass_info_cons_id_4_f_0(InstanceTable_15, Constraint_20, InstanceNum_19, InstanceTypes_29);
      check_hlds__polymorphism__materialize_base_typeclass_info_var_6_p_0(Constraint_20, BaseConsId_76, &BaseVar_77, &BaseGoals_78, STATE_VARIABLE_Info_102_102, &STATE_VARIABLE_Info_113_113);
      Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), BaseGoals_78, PrevGoals_64);
      check_hlds__polymorphism__construct_typeclass_info_11_p_0(Constraint_20, BaseVar_77, BaseConsId_76, ArgVarsMCAs_65, InitialVarMapsSnapshot_54, &TypeClassInfoVar_79, &TypeClassInfoMCA_80, Var_114, Goals_12, STATE_VARIABLE_Info_113_113, &STATE_VARIABLE_Info_115_115);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *TypeClassInfoVarMCA_11 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeClassInfoVar_79));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeClassInfoMCA_80));
      }
      check_hlds__polymorphism_info__poly_info_get_typeclass_info_map_2_p_0(STATE_VARIABLE_Info_115_115, &TypeClassInfoMap1_81);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[1]), TypeClassInfoMap1_81, ((MR_Box) (ConstraintClassName_67)), &conv7_ClassNameMap1_82);
      if (succeeded)
      {
        ClassNameMap1_82 = ((MR_Word) (conv7_ClassNameMap1_82));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word OldEntry1_83;
        MR_Box conv8_OldEntry1_83;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[7]), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0), ClassNameMap1_82, ((MR_Box) (ConstraintArgTypes_68)), &conv8_OldEntry1_83);
        if (succeeded)
        {
          OldEntry1_83 = ((MR_Word) (conv8_OldEntry1_83));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word BaseConsId1_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldEntry1_83, (MR_Integer) 0))));
          MR_Word ArgsMap1_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldEntry1_83, (MR_Integer) 1))));
          MR_Word ArgsMap_86;
          MR_Word Entry_87;
          MR_Word ClassNameMap_88;
          MR_Word Var_116;

          {
            Var_116 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[6]));
            MR_hl_field(MR_mktag(0), Var_116, 1) = ((MR_Box) (check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_105_110_115_116_97_110_99_101_95_95_91_50_93_95_48_7_p_0_2));
            MR_hl_field(MR_mktag(0), Var_116, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_116, 3) = ((MR_Box) (BaseConsId_76));
            MR_hl_field(MR_mktag(0), Var_116, 4) = ((MR_Box) (BaseConsId1_84));
          }
          mercury__require__expect_3_p_0(Var_116, (MR_String) "predicate \140check_hlds.polymorphism.do_make_typeclass_info_from_instance\'/7", (MR_String) "BaseConsId1 != BaseConsId");
          mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[8]), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[0]), ((MR_Box) (ArgCOVAs_66)), ((MR_Box) (*TypeClassInfoVarMCA_11)), ArgsMap1_85, &ArgsMap_86);
          {
            Entry_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Entry_87, 0) = ((MR_Box) (BaseConsId_76));
            MR_hl_field(MR_mktag(0), Entry_87, 1) = ((MR_Box) (ArgsMap_86));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[7]), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0), ((MR_Box) (ConstraintArgTypes_68)), ((MR_Box) (Entry_87)), ClassNameMap1_82, &ClassNameMap_88);
          mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[1]), ((MR_Box) (ConstraintClassName_67)), ((MR_Box) (ClassNameMap_88)), TypeClassInfoMap1_81, &TypeClassInfoMap_89);
        }
        else
        {
          MR_Word ArgsMap_122;
          MR_Word Entry_123;
          MR_Word ClassNameMap_124;

          ArgsMap_122 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[8]), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[0]), ((MR_Box) (ArgCOVAs_66)), ((MR_Box) (*TypeClassInfoVarMCA_11)));
          {
            Entry_123 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Entry_123, 0) = ((MR_Box) (BaseConsId_76));
            MR_hl_field(MR_mktag(0), Entry_123, 1) = ((MR_Box) (ArgsMap_122));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[7]), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0), ((MR_Box) (ConstraintArgTypes_68)), ((MR_Box) (Entry_123)), ClassNameMap1_82, &ClassNameMap_124);
          mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[1]), ((MR_Box) (ConstraintClassName_67)), ((MR_Box) (ClassNameMap_124)), TypeClassInfoMap1_81, &TypeClassInfoMap_89);
        }
      }
      else
      {
        MR_Word ArgsMap_125;
        MR_Word Entry_126;
        MR_Word ClassNameMap_127;

        ArgsMap_125 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[8]), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[0]), ((MR_Box) (ArgCOVAs_66)), ((MR_Box) (*TypeClassInfoVarMCA_11)));
        {
          Entry_126 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Entry_126, 0) = ((MR_Box) (BaseConsId_76));
          MR_hl_field(MR_mktag(0), Entry_126, 1) = ((MR_Box) (ArgsMap_125));
        }
        ClassNameMap_127 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[7]), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_typeclass_info_map_entry_0), ((MR_Box) (ConstraintArgTypes_68)), ((MR_Box) (Entry_126)));
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[1]), ((MR_Box) (ConstraintClassName_67)), ((MR_Box) (ClassNameMap_127)), TypeClassInfoMap1_81, &TypeClassInfoMap_89);
      }
      check_hlds__polymorphism_info__poly_info_set_typeclass_info_map_3_p_0(TypeClassInfoMap_89, STATE_VARIABLE_Info_115_115, &STATE_VARIABLE_Info_111_111);
    }
    Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *TypeClassInfoVarMCA_11, (MR_Integer) 1))));
    succeeded = (Var_120 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TypeClassInfoConstArg_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_120, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) TypeClassInfoConstArg_91)) == (MR_Integer) 0);
      if (succeeded)
        TypeClassInfoConstArgNum_92 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeClassInfoConstArg_91, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word ConstStructDb1_93;
      MR_Word ConstStructDb_94;

      check_hlds__polymorphism_info__poly_info_get_const_struct_db_2_p_0(STATE_VARIABLE_Info_111_111, &ConstStructDb1_93);
      hlds__const_struct__insert_constant_instance_4_p_0(InstanceId_8, TypeClassInfoConstArgNum_92, ConstStructDb1_93, &ConstStructDb_94);
      check_hlds__polymorphism_info__poly_info_set_const_struct_db_3_p_0(ConstStructDb_94, STATE_VARIABLE_Info_111_111, STATE_VARIABLE_Info_96);
    }
    else
      *STATE_VARIABLE_Info_96 = STATE_VARIABLE_Info_111_111;
  }
}

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_115_117_98_99_108_97_115_115_95_95_91_52_93_95_48_9_p_0(
  MR_Word Constraint_10,
  MR_Word Seen_11,
  MR_Word SubClassConstraint_12,
  MR_Word Context_14,
  MR_Word * HeadVar__6_6,
  MR_Word * Goals_17,
  MR_Word STATE_VARIABLE_Info_0_68,
  MR_Word * STATE_VARIABLE_Info_69)
{
  {
    MR_bool succeeded;
    MR_Word TypeClassInfoVar_15;
    MR_Word MaybeTCIConstArg_16;
    MR_Word SubClassName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubClassConstraint_12, (MR_Integer) 0))));
    MR_Word SubClassTypes_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubClassConstraint_12, (MR_Integer) 1))));
    MR_Integer SubClassArity_26;
    MR_Word SubClassId_27;
    MR_Word SubClassVarMCA_28;
    MR_Word SubClassVarGoals_29;
    MR_Word SubClassVar_30;
    MR_Word SubClassMCA_31;
    MR_Word ModuleInfo_32;
    MR_Word ClassTable_33;
    MR_Word SubClassDefn_34;
    MR_Word SubTypeSubst_35;
    MR_Word SuperClasses_36;
    MR_Integer SuperClassIndex_38;
    MR_Word STATE_VARIABLE_Info_113_113;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Box conv0_SubClassDefn_34;
    MR_Integer SuperClassIndexPrime_37;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), SubClassTypes_25, &SubClassArity_26);
    {
      SubClassId_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SubClassId_27, 0) = ((MR_Box) (SubClassName_24));
      MR_hl_field(MR_mktag(0), SubClassId_27, 1) = ((MR_Box) (SubClassArity_26));
    }
    check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_95_95_91_51_93_95_48_8_p_0(SubClassConstraint_12, Seen_11, Context_14, &SubClassVarMCA_28, &SubClassVarGoals_29, STATE_VARIABLE_Info_0_68, &STATE_VARIABLE_Info_113_113);
    SubClassVar_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubClassVarMCA_28, (MR_Integer) 0))));
    SubClassMCA_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubClassVarMCA_28, (MR_Integer) 1))));
    check_hlds__polymorphism_info__poly_info_get_module_info_2_p_0(STATE_VARIABLE_Info_113_113, &ModuleInfo_32);
    hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_32, &ClassTable_33);
    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_33, ((MR_Box) (SubClassId_27)), &conv0_SubClassDefn_34);
    SubClassDefn_34 = ((MR_Word) (conv0_SubClassDefn_34));
    Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubClassDefn_34, (MR_Integer) 4))));
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_114, SubClassTypes_25, &SubTypeSubst_35);
    Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubClassDefn_34, (MR_Integer) 1))));
    parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0(SubTypeSubst_35, Var_115, &SuperClasses_36);
    succeeded = mercury__list__index1_of_first_occurrence_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), SuperClasses_36, ((MR_Box) (Constraint_10)), &SuperClassIndexPrime_37);
    if (succeeded)
      SuperClassIndex_38 = SuperClassIndexPrime_37;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.make_typeclass_info_from_subclass\'/9", (MR_String) "constraint not in constraint list");
        return;
      }
    if ((SubClassMCA_31 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word IndexVar_65;
      MR_Word IndexGoals_66;
      MR_Word SuperClassGoal_67;
      MR_Word STATE_VARIABLE_Info_119_119;
      MR_Word Var_121;
      MR_Word Var_127;
      MR_Word Var_129;
      MR_Word Var_130;
      MR_Word Var_131;
      MR_Word Var_132;
      MR_Word Var_134;
      MR_Word Var_135;
      MR_Word _TypeClassInfoVarType_64;

      check_hlds__polymorphism__new_typeclass_info_var_6_p_0(Constraint_10, (MR_Integer) 1, &TypeClassInfoVar_15, &_TypeClassInfoVarType_64, STATE_VARIABLE_Info_113_113, &STATE_VARIABLE_Info_119_119);
      check_hlds__polymorphism_info__get_poly_const_5_p_0(SuperClassIndex_38, &IndexVar_65, &IndexGoals_66, STATE_VARIABLE_Info_119_119, STATE_VARIABLE_Info_69);
      Var_121 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
      {
        Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (TypeClassInfoVar_15));
        MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (IndexVar_65));
        MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (Var_132));
      }
      {
        Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (SubClassVar_30));
        MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) (Var_131));
      }
      Var_129 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
      Var_130 = mercury__term__context_init_0_f_0();
      hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_32, Var_121, (MR_String) "superclass_from_typeclass_info", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, Var_127, (MR_Word) ((MR_Unsigned) 0U), Var_129, Var_130, &SuperClassGoal_67);
      {
        Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (SuperClassGoal_67));
        MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_134 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), IndexGoals_66, Var_135);
      *Goals_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SubClassVarGoals_29, Var_134);
      MaybeTCIConstArg_16 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word SubClassConstArg_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubClassMCA_31, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) SubClassConstArg_39)) == (MR_Integer) 0))
      {
        MR_Integer SubClassConstNum_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SubClassConstArg_39, (MR_Integer) 0))));
        MR_Word ConstStructDb_43;
        MR_Word SubClassConstStruct_44;
        MR_Word SubClassConsId_45;
        MR_Word SubClassArgs_46;
        MR_Word SelectedArg_62;
        MR_Integer SelectedConstNum_63;
        MR_Word TypeInfo_234_234;
        MR_Word TypeCtorInfo_235_235;
        MR_Word TypeCtorInfo_236_236;
        MR_Word BTCIArg_50;
        MR_Word OtherArgs_51;
        MR_Word BTCIConsId_52;
        MR_Integer SubInstanceNum_55;
        MR_Word InstanceTable_57;
        MR_Word SubInstanceDefns_58;
        MR_Word SubInstanceDefn_59;
        MR_Integer NumExtra_60;
        MR_Integer Index_61;
        MR_Word Var_241;
        MR_Box conv1_SubInstanceDefns_58;
        MR_Box conv2_SubInstanceDefn_59;
        MR_Box conv3_SelectedArg_62;

        check_hlds__polymorphism_info__poly_info_get_const_struct_db_2_p_0(STATE_VARIABLE_Info_113_113, &ConstStructDb_43);
        hlds__const_struct__lookup_const_struct_num_3_p_0(ConstStructDb_43, SubClassConstNum_42, &SubClassConstStruct_44);
        SubClassConsId_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubClassConstStruct_44, (MR_Integer) 0))));
        SubClassArgs_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubClassConstStruct_44, (MR_Integer) 1))));
        succeeded = (SubClassConsId_45 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (SubClassArgs_46 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            BTCIArg_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubClassArgs_46, (MR_Integer) 0))));
            OtherArgs_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubClassArgs_46, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) BTCIArg_50)) == (MR_Integer) 1);
            if (succeeded)
            {
              BTCIConsId_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BTCIArg_50, (MR_Integer) 0))));
              succeeded = ((((MR_tag((MR_Word) BTCIConsId_52)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), BTCIConsId_52, (MR_Integer) 0)))) == (MR_Integer) 20)));
              if (succeeded)
              {
                Var_241 = ((MR_Word) ((MR_hl_field(MR_mktag(3), BTCIConsId_52, (MR_Integer) 2))));
                SubInstanceNum_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), BTCIConsId_52, (MR_Integer) 3))));
                succeeded = parse_tree__prog_data____Unify____class_id_0_0(SubClassId_27, Var_241);
                if (succeeded)
                {
                  hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_32, &InstanceTable_57);
                  TypeInfo_234_234 = (MR_Word) (&check_hlds__polymorphism_scalar_common_1[6]);
                  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), TypeInfo_234_234, InstanceTable_57, ((MR_Box) (SubClassId_27)), &conv1_SubInstanceDefns_58);
                  SubInstanceDefns_58 = ((MR_Word) (conv1_SubInstanceDefns_58));
                  TypeCtorInfo_235_235 = (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0);
                  succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_235_235, SubInstanceDefns_58, SubInstanceNum_55, &conv2_SubInstanceDefn_59);
                  if (succeeded)
                  {
                    SubInstanceDefn_59 = ((MR_Word) (conv2_SubInstanceDefn_59));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    hlds__hlds_class__num_extra_instance_args_2_p_0(SubInstanceDefn_59, &NumExtra_60);
                    Index_61 = (MR_Integer) ((MR_Unsigned) NumExtra_60 + (MR_Unsigned) SuperClassIndex_38);
                    TypeCtorInfo_236_236 = (MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0);
                    mercury__list__det_index1_3_p_0(TypeCtorInfo_236_236, OtherArgs_51, Index_61, &conv3_SelectedArg_62);
                    SelectedArg_62 = ((MR_Word) (conv3_SelectedArg_62));
                    succeeded = ((MR_tag((MR_Word) SelectedArg_62)) == (MR_Integer) 0);
                    if (succeeded)
                      SelectedConstNum_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SelectedArg_62, (MR_Integer) 0))));
                  }
                }
              }
            }
          }
        }
        if (succeeded)
        {
          check_hlds__polymorphism__materialize_typeclass_info_var_6_p_0(Constraint_10, SelectedConstNum_63, &TypeClassInfoVar_15, Goals_17, STATE_VARIABLE_Info_113_113, STATE_VARIABLE_Info_69);
          {
            MaybeTCIConstArg_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeTCIConstArg_16, 0) = ((MR_Box) (SelectedArg_62));
          }
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.make_typeclass_info_from_subclass\'/9", (MR_String) "unexpected typeclass info structure");
            return;
          }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.make_typeclass_info_from_subclass\'/9", (MR_String) "typeclass infos need a cell");
          return;
        }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeClassInfoVar_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeTCIConstArg_16));
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_115_95_50_95_95_91_51_93_95_48_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
    }
    else
    {
      MR_Word Constraint_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Constraints_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypeClassInfoVarMCA_20;
      MR_Word TypeClassInfoVarsMCAs_21;
      MR_Word HeadExtraGoals_24;
      MR_Word TailExtraGoals_25;
      MR_Word Var_28;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word OldTypeClassInfoVar_42;
      MR_Word RttiVarMaps0_41;

      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Constraint_15));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (HeadVar__2_2));
      }
      check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_7, &RttiVarMaps0_41);
      succeeded = hlds__hlds_rtti__rtti_search_typeclass_info_var_3_p_0(RttiVarMaps0_41, Constraint_15, &OldTypeClassInfoVar_42);
      if (succeeded)
      {
        {
          TypeClassInfoVarMCA_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeClassInfoVarMCA_20, 0) = ((MR_Box) (OldTypeClassInfoVar_42));
          MR_hl_field(MR_mktag(0), TypeClassInfoVarMCA_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        HeadExtraGoals_24 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Info_29_29 = STATE_VARIABLE_Info_0_7;
      }
      else
      {
        MR_Word Proof_45;
        MR_Word ProofMap_44;
        MR_Box conv0_Proof_45;

        check_hlds__polymorphism_info__poly_info_get_proof_map_2_p_0(STATE_VARIABLE_Info_0_7, &ProofMap_44);
        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), ProofMap_44, ((MR_Box) (Constraint_15)), &conv0_Proof_45);
        if (succeeded)
        {
          Proof_45 = ((MR_Word) (conv0_Proof_45));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_114_111_109_95_112_114_111_111_102_95_95_91_52_93_95_48_9_p_0(Constraint_15, Var_28, Proof_45, HeadVar__4_4, &TypeClassInfoVarMCA_20, &HeadExtraGoals_24, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_29_29);
        else
        {
          MR_Word RttiVarMaps_46;
          MR_Word STATE_VARIABLE_Info_27_50;
          MR_Word RttiVarMaps0_53;
          MR_Word TypeClassInfoVar_54;

          check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0((MR_Integer) 0, Constraint_15, &TypeClassInfoVar_54, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_27_50);
          check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_27_50, &RttiVarMaps0_53);
          hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(TypeClassInfoVar_54, RttiVarMaps0_53, &RttiVarMaps_46);
          check_hlds__polymorphism_info__poly_info_set_rtti_varmaps_3_p_0(RttiVarMaps_46, STATE_VARIABLE_Info_27_50, &STATE_VARIABLE_Info_29_29);
          {
            TypeClassInfoVarMCA_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeClassInfoVarMCA_20, 0) = ((MR_Box) (TypeClassInfoVar_54));
            MR_hl_field(MR_mktag(0), TypeClassInfoVarMCA_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          HeadExtraGoals_24 = (MR_Word) ((MR_Unsigned) 0U);
        }
      }
      check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_118_97_114_115_95_50_95_95_91_51_93_95_48_8_p_0(Constraints_16, HeadVar__2_2, HeadVar__4_4, &TypeClassInfoVarsMCAs_21, &TailExtraGoals_25, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_8);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeClassInfoVarMCA_20));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TypeClassInfoVarsMCAs_21));
      }
      *HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadExtraGoals_24, TailExtraGoals_25);
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__materialize_base_typeclass_info_var_6_p_0(
  MR_Word Constraint_7,
  MR_Word ConsId_8,
  MR_Word * Var_9,
  MR_Word * Goals_10,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  {
    MR_bool succeeded;
    MR_Word ConstStructVarMap0_12;
    MR_Word ConstArgType_13;
    MR_Word ConstArg_14;
    MR_Word PrivateBuiltin_57;
    MR_Word TypeclassInfoTypeName_58;
    MR_Word OldVar_15;
    MR_Box conv0_OldVar_15;

    check_hlds__polymorphism_info__poly_info_get_const_struct_var_map_2_p_0(STATE_VARIABLE_Info_0_28, &ConstStructVarMap0_12);
    PrivateBuiltin_57 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    {
      TypeclassInfoTypeName_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeclassInfoTypeName_58, 0) = ((MR_Box) (PrivateBuiltin_57));
      MR_hl_field(MR_mktag(1), TypeclassInfoTypeName_58, 1) = ((MR_Box) ((MR_String) "typeclass_info"));
    }
    {
      ConstArgType_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ConstArgType_13, 0) = ((MR_Box) (TypeclassInfoTypeName_58));
      MR_hl_field(MR_mktag(1), ConstArgType_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), ConstArgType_13, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      ConstArg_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ConstArg_14, 0) = ((MR_Box) (ConsId_8));
      MR_hl_field(MR_mktag(1), ConstArg_14, 1) = ((MR_Box) (ConstArgType_13));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ConstStructVarMap0_12, ((MR_Box) (ConstArg_14)), &conv0_OldVar_15);
    if (succeeded)
    {
      OldVar_15 = ((MR_Word) (conv0_OldVar_15));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Integer NumReuses_16;
      MR_Integer Var_30;

      check_hlds__polymorphism_info__poly_info_get_num_reuses_2_p_0(STATE_VARIABLE_Info_0_28, &NumReuses_16);
      Var_30 = (MR_Integer) ((MR_Unsigned) NumReuses_16 + (MR_Unsigned) 1);
      check_hlds__polymorphism_info__poly_info_set_num_reuses_3_p_0(Var_30, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
      *Var_9 = OldVar_15;
      *Goals_10 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word RHS_18;
      MR_Word Unification_19;
      MR_Word Unify_23;
      MR_Word NonLocals_24;
      MR_Word InstmapDelta_25;
      MR_Word GoalInfo_26;
      MR_Word Goal_27;
      MR_Word _VarType_17;

      check_hlds__polymorphism__new_typeclass_info_var_6_p_0(Constraint_7, (MR_Integer) 0, Var_9, &_VarType_17, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
      {
        RHS_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RHS_18, 0) = ((MR_Box) (ConsId_8));
        MR_hl_field(MR_mktag(1), RHS_18, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), RHS_18, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Unification_19 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Unification_19, 0) = ((MR_Box) (*Var_9));
        MR_hl_field(MR_mktag(0), Unification_19, 1) = ((MR_Box) (ConsId_8));
        MR_hl_field(MR_mktag(0), Unification_19, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_19, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_19, 4) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(0), Unification_19, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Unification_19, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Unify_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Unify_23, 0) = ((MR_Box) (*Var_9));
        MR_hl_field(MR_mktag(1), Unify_23, 1) = ((MR_Box) (RHS_18));
        MR_hl_field(MR_mktag(1), Unify_23, 2) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_8[1]));
        MR_hl_field(MR_mktag(1), Unify_23, 3) = ((MR_Box) (Unification_19));
        MR_hl_field(MR_mktag(1), Unify_23, 4) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_1[11]));
      }
      NonLocals_24 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Var_9);
      InstmapDelta_25 = hlds__instmap__instmap_delta_bind_var_1_f_0(*Var_9);
      hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_24, InstmapDelta_25, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_26);
      {
        Goal_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Goal_27, 0) = ((MR_Box) (Unify_23));
        MR_hl_field(MR_mktag(0), Goal_27, 1) = ((MR_Box) (GoalInfo_26));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Goals_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_27));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__construct_typeclass_info_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    check_hlds__polymorphism_info__get_inst_of_const_struct_arg_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__polymorphism__construct_typeclass_info_11_p_0(
  MR_Word Constraint_12,
  MR_Word BaseVar_13,
  MR_Word BaseConsId_14,
  MR_Word ArgVarsMCAs_15,
  MR_Word InitialVarMapsSnapshot_16,
  MR_Word * TypeClassInfoVar_17,
  MR_Word * TypeClassInfoMCA_18,
  MR_Word PrevGoals_19,
  MR_Word * AllGoals_20,
  MR_Word STATE_VARIABLE_Info_0_63,
  MR_Word * STATE_VARIABLE_Info_64)
{
  {
    MR_bool succeeded;
    MR_Word ConstStructDb0_23;
    MR_Word ConstStructEnabled_24;
    MR_Word VarConstArgs_25;

    check_hlds__polymorphism_info__poly_info_get_const_struct_db_2_p_0(STATE_VARIABLE_Info_0_63, &ConstStructDb0_23);
    hlds__const_struct__const_struct_db_get_poly_enabled_2_p_0(ConstStructDb0_23, &ConstStructEnabled_24);
    succeeded = (ConstStructEnabled_24 == (MR_Integer) 0);
    if (succeeded)
      succeeded = check_hlds__polymorphism_info__all_are_const_struct_args_2_p_0(ArgVarsMCAs_15, &VarConstArgs_25);
    if (succeeded)
    {
      MR_Integer NumReuses_26;
      MR_Word TypeClassInfoVarType_27;
      MR_Word BaseConstArgType_28;
      MR_Word BaseConstArg_29;
      MR_Word StructArgs_30;
      MR_Word VarInsts_31;
      MR_Integer NumArgs_32;
      MR_Word InstConsId_33;
      MR_Word StructInst_34;
      MR_Word DefinedWhere_35;
      MR_Word ConstStruct_36;
      MR_Integer ConstNum_37;
      MR_Word ConstStructDb_38;
      MR_Word TypeClassInfoConstArg_39;
      MR_Word ConstConsId_40;
      MR_Word Unification_41;
      MR_Word TypeClassInfoRHS_45;
      MR_Word GoalExpr_46;
      MR_Word GoalInfo0_47;
      MR_Word NonLocals_48;
      MR_Word GoalInfo1_49;
      MR_Word TypeClassInfoVarInst_51;
      MR_Word InstMapDelta_52;
      MR_Word GoalInfo2_53;
      MR_Word GoalInfo_54;
      MR_Word Goal_55;
      MR_Integer Var_65;
      MR_Word STATE_VARIABLE_Info_66_66;
      MR_Word STATE_VARIABLE_Info_69_69;
      MR_Word STATE_VARIABLE_Info_71_71;
      MR_Word Var_72;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_100;

      check_hlds__polymorphism_info__poly_info_get_num_reuses_2_p_0(STATE_VARIABLE_Info_0_63, &NumReuses_26);
      Var_65 = (MR_Integer) ((MR_Unsigned) NumReuses_26 + (MR_Unsigned) 1);
      check_hlds__polymorphism_info__poly_info_set_num_reuses_3_p_0(Var_65, STATE_VARIABLE_Info_0_63, &STATE_VARIABLE_Info_66_66);
      check_hlds__polymorphism_info__set_var_maps_snapshot_4_p_0((MR_String) "construct_typeclass_info", InitialVarMapsSnapshot_16, STATE_VARIABLE_Info_66_66, &STATE_VARIABLE_Info_69_69);
      check_hlds__polymorphism__new_typeclass_info_var_6_p_0(Constraint_12, (MR_Integer) 1, TypeClassInfoVar_17, &TypeClassInfoVarType_27, STATE_VARIABLE_Info_69_69, &STATE_VARIABLE_Info_71_71);
      check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_116_121_112_101_95_95_91_49_93_95_48_2_p_0(&BaseConstArgType_28);
      {
        BaseConstArg_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), BaseConstArg_29, 0) = ((MR_Box) (BaseConsId_14));
        MR_hl_field(MR_mktag(1), BaseConstArg_29, 1) = ((MR_Box) (BaseConstArgType_28));
      }
      {
        StructArgs_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), StructArgs_30, 0) = ((MR_Box) (BaseConstArg_29));
        MR_hl_field(MR_mktag(1), StructArgs_30, 1) = ((MR_Box) (VarConstArgs_25));
      }
      {
        Var_72 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[6]));
        MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (check_hlds__polymorphism__construct_typeclass_info_11_p_0_1));
        MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (ConstStructDb0_23));
      }
      mercury__list__map_3_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_72, VarConstArgs_25, &VarInsts_31);
      mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[0]), ArgVarsMCAs_15, &NumArgs_32);
      InstConsId_33 = parse_tree__prog_type__cell_inst_cons_id_2_f_0((MR_Word) ((MR_Unsigned) 0U), NumArgs_32);
      {
        Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (InstConsId_33));
        MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (VarInsts_31));
      }
      {
        Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        StructInst_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), StructInst_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), StructInst_34, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), StructInst_34, 2) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), StructInst_34, 3) = ((MR_Box) (Var_76));
      }
      check_hlds__polymorphism_info__poly_info_get_defined_where_2_p_0(STATE_VARIABLE_Info_71_71, &DefinedWhere_35);
      {
        ConstStruct_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConstStruct_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), ConstStruct_36, 1) = ((MR_Box) (StructArgs_30));
        MR_hl_field(MR_mktag(0), ConstStruct_36, 2) = ((MR_Box) (TypeClassInfoVarType_27));
        MR_hl_field(MR_mktag(0), ConstStruct_36, 3) = ((MR_Box) (StructInst_34));
        MR_hl_field(MR_mktag(0), ConstStruct_36, 4) = (MR_Box) ((MR_Unsigned) (DefinedWhere_35));
      }
      hlds__const_struct__lookup_insert_const_struct_4_p_0(ConstStruct_36, &ConstNum_37, ConstStructDb0_23, &ConstStructDb_38);
      check_hlds__polymorphism_info__poly_info_set_const_struct_db_3_p_0(ConstStructDb_38, STATE_VARIABLE_Info_71_71, STATE_VARIABLE_Info_64);
      {
        TypeClassInfoConstArg_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfoConstArg_39, 0) = ((MR_Box) (ConstNum_37));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *TypeClassInfoMCA_18 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeClassInfoConstArg_39));
      }
      {
        ConstConsId_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConstConsId_40, 0) = ((MR_Box) ((MR_Unsigned) 22U));
        MR_hl_field(MR_mktag(3), ConstConsId_40, 1) = ((MR_Box) (ConstNum_37));
      }
      {
        Unification_41 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Unification_41, 0) = ((MR_Box) (*TypeClassInfoVar_17));
        MR_hl_field(MR_mktag(0), Unification_41, 1) = ((MR_Box) (ConstConsId_40));
        MR_hl_field(MR_mktag(0), Unification_41, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_41, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_41, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_41, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Unification_41, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        TypeClassInfoRHS_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TypeClassInfoRHS_45, 0) = ((MR_Box) (ConstConsId_40));
        MR_hl_field(MR_mktag(1), TypeClassInfoRHS_45, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), TypeClassInfoRHS_45, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        GoalExpr_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalExpr_46, 0) = ((MR_Box) (*TypeClassInfoVar_17));
        MR_hl_field(MR_mktag(1), GoalExpr_46, 1) = ((MR_Box) (TypeClassInfoRHS_45));
        MR_hl_field(MR_mktag(1), GoalExpr_46, 2) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_8[1]));
        MR_hl_field(MR_mktag(1), GoalExpr_46, 3) = ((MR_Box) (Unification_41));
        MR_hl_field(MR_mktag(1), GoalExpr_46, 4) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_1[11]));
      }
      hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_47);
      NonLocals_48 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *TypeClassInfoVar_17);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_48, GoalInfo0_47, &GoalInfo1_49);
      {
        TypeClassInfoVarInst_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfoVarInst_51, 0) = ((MR_Box) (*TypeClassInfoVar_17));
        MR_hl_field(MR_mktag(0), TypeClassInfoVarInst_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_scalar_common_8[2])));
      }
      {
        Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (TypeClassInfoVarInst_51));
        MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      InstMapDelta_52 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_100);
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_52, GoalInfo1_49, &GoalInfo2_53);
      hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, GoalInfo2_53, &GoalInfo_54);
      {
        Goal_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Goal_55, 0) = ((MR_Box) (GoalExpr_46));
        MR_hl_field(MR_mktag(0), Goal_55, 1) = ((MR_Box) (GoalInfo_54));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *AllGoals_20 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_55));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word ArgVars_57;
      MR_Word AllArgVars_58;
      MR_Word ArgModes_60;
      MR_Word ArgInsts_61;
      MR_Word InstResults_62;
      MR_Word Var_120;
      MR_Word Var_124;
      MR_Word Var_125;
      MR_Word Var_130;
      MR_Word Var_131;
      MR_Word Var_133;
      MR_Word Var_136;
      MR_Integer NumArgs_138;
      MR_Word InstConsId_139;
      MR_Word Unification_140;
      MR_Word TypeClassInfoRHS_144;
      MR_Word GoalExpr_145;
      MR_Word GoalInfo0_146;
      MR_Word NonLocals_147;
      MR_Word GoalInfo1_148;
      MR_Word TypeClassInfoInst_149;
      MR_Word TypeClassInfoVarInst_150;
      MR_Word InstMapDelta_151;
      MR_Word GoalInfo2_152;
      MR_Word GoalInfo_153;
      MR_Word Goal_154;
      MR_Word _TypeClassInfoVarType_56;

      *TypeClassInfoMCA_18 = (MR_Word) ((MR_Unsigned) 0U);
      check_hlds__polymorphism__new_typeclass_info_var_6_p_0(Constraint_12, (MR_Integer) 1, TypeClassInfoVar_17, &_TypeClassInfoVarType_56, STATE_VARIABLE_Info_0_63, STATE_VARIABLE_Info_64);
      mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[4]), ArgVarsMCAs_15, &ArgVars_57);
      {
        AllArgVars_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), AllArgVars_58, 0) = ((MR_Box) (BaseVar_13));
        MR_hl_field(MR_mktag(1), AllArgVars_58, 1) = ((MR_Box) (ArgVars_57));
      }
      {
        TypeClassInfoRHS_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TypeClassInfoRHS_144, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), TypeClassInfoRHS_144, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), TypeClassInfoRHS_144, 2) = ((MR_Box) (AllArgVars_58));
      }
      mercury__list__length_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), AllArgVars_58, &NumArgs_138);
      mercury__list__duplicate_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), NumArgs_138, ((MR_Box) (&check_hlds__polymorphism_scalar_common_8[1])), &ArgModes_60);
      {
        Unification_140 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Unification_140, 0) = ((MR_Box) (*TypeClassInfoVar_17));
        MR_hl_field(MR_mktag(0), Unification_140, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_140, 2) = ((MR_Box) (AllArgVars_58));
        MR_hl_field(MR_mktag(0), Unification_140, 3) = ((MR_Box) (ArgModes_60));
        MR_hl_field(MR_mktag(0), Unification_140, 4) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(0), Unification_140, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), Unification_140, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        GoalExpr_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalExpr_145, 0) = ((MR_Box) (*TypeClassInfoVar_17));
        MR_hl_field(MR_mktag(1), GoalExpr_145, 1) = ((MR_Box) (TypeClassInfoRHS_144));
        MR_hl_field(MR_mktag(1), GoalExpr_145, 2) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_8[1]));
        MR_hl_field(MR_mktag(1), GoalExpr_145, 3) = ((MR_Box) (Unification_140));
        MR_hl_field(MR_mktag(1), GoalExpr_145, 4) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_1[14]));
      }
      hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_146);
      {
        Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (*TypeClassInfoVar_17));
        MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (AllArgVars_58));
      }
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_120, &NonLocals_147);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_147, GoalInfo0_146, &GoalInfo1_148);
      mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), NumArgs_138, ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__polymorphism_scalar_common_2[19]))), &ArgInsts_61);
      InstConsId_139 = parse_tree__prog_type__cell_inst_cons_id_2_f_0((MR_Word) ((MR_Unsigned) 0U), NumArgs_138);
      Var_125 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0));
      {
        Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (Var_125));
      }
      {
        InstResults_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), InstResults_62, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
        MR_hl_field(MR_mktag(1), InstResults_62, 1) = ((MR_Box) (Var_124));
        MR_hl_field(MR_mktag(1), InstResults_62, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), InstResults_62, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), InstResults_62, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_131 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_131, 0) = ((MR_Box) (InstConsId_139));
        MR_hl_field(MR_mktag(0), Var_131, 1) = ((MR_Box) (ArgInsts_61));
      }
      {
        Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (Var_131));
        MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        TypeClassInfoInst_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TypeClassInfoInst_149, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), TypeClassInfoInst_149, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), TypeClassInfoInst_149, 2) = ((MR_Box) (InstResults_62));
        MR_hl_field(MR_mktag(3), TypeClassInfoInst_149, 3) = ((MR_Box) (Var_130));
      }
      {
        TypeClassInfoVarInst_150 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeClassInfoVarInst_150, 0) = ((MR_Box) (*TypeClassInfoVar_17));
        MR_hl_field(MR_mktag(0), TypeClassInfoVarInst_150, 1) = ((MR_Box) (TypeClassInfoInst_149));
      }
      {
        Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (TypeClassInfoVarInst_150));
        MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      InstMapDelta_151 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_133);
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_151, GoalInfo1_148, &GoalInfo2_152);
      hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, GoalInfo2_152, &GoalInfo_153);
      {
        Goal_154 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Goal_154, 0) = ((MR_Box) (GoalExpr_145));
        MR_hl_field(MR_mktag(0), Goal_154, 1) = ((MR_Box) (GoalInfo_153));
      }
      {
        Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (Goal_154));
        MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *AllGoals_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), PrevGoals_19, Var_136);
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__materialize_typeclass_info_var_6_p_0(
  MR_Word Constraint_7,
  MR_Integer InstanceIdConstNum_8,
  MR_Word * Var_9,
  MR_Word * Goals_10,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  {
    MR_bool succeeded;
    MR_Word ConstStructVarMap0_12;
    MR_Word InstanceIdConstArg_13;
    MR_Word OldVar_14;
    MR_Box conv0_OldVar_14;

    check_hlds__polymorphism_info__poly_info_get_const_struct_var_map_2_p_0(STATE_VARIABLE_Info_0_29, &ConstStructVarMap0_12);
    {
      InstanceIdConstArg_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InstanceIdConstArg_13, 0) = ((MR_Box) (InstanceIdConstNum_8));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ConstStructVarMap0_12, ((MR_Box) (InstanceIdConstArg_13)), &conv0_OldVar_14);
    if (succeeded)
    {
      OldVar_14 = ((MR_Word) (conv0_OldVar_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Integer NumReuses_15;
      MR_Integer Var_31;

      check_hlds__polymorphism_info__poly_info_get_num_reuses_2_p_0(STATE_VARIABLE_Info_0_29, &NumReuses_15);
      Var_31 = (MR_Integer) ((MR_Unsigned) NumReuses_15 + (MR_Unsigned) 1);
      check_hlds__polymorphism_info__poly_info_set_num_reuses_3_p_0(Var_31, STATE_VARIABLE_Info_0_29, STATE_VARIABLE_Info_30);
      *Var_9 = OldVar_14;
      *Goals_10 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word ConstStructVarMap_17;
      MR_Word ConsId_18;
      MR_Word RHS_19;
      MR_Word Unification_20;
      MR_Word GoalExpr_24;
      MR_Word NonLocals_25;
      MR_Word InstmapDelta_26;
      MR_Word GoalInfo_27;
      MR_Word Goal_28;
      MR_Word STATE_VARIABLE_Info_35_35;
      MR_Word _VarType_16;

      check_hlds__polymorphism__new_typeclass_info_var_6_p_0(Constraint_7, (MR_Integer) 1, Var_9, &_VarType_16, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_35_35);
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ((MR_Box) (InstanceIdConstArg_13)), ((MR_Box) (*Var_9)), ConstStructVarMap0_12, &ConstStructVarMap_17);
      check_hlds__polymorphism_info__poly_info_set_const_struct_var_map_3_p_0(ConstStructVarMap_17, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_30);
      {
        ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_18, 0) = ((MR_Box) ((MR_Unsigned) 22U));
        MR_hl_field(MR_mktag(3), ConsId_18, 1) = ((MR_Box) (InstanceIdConstNum_8));
      }
      {
        RHS_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RHS_19, 0) = ((MR_Box) (ConsId_18));
        MR_hl_field(MR_mktag(1), RHS_19, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), RHS_19, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Unification_20 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Unification_20, 0) = ((MR_Box) (*Var_9));
        MR_hl_field(MR_mktag(0), Unification_20, 1) = ((MR_Box) (ConsId_18));
        MR_hl_field(MR_mktag(0), Unification_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_20, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Unification_20, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Unification_20, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalExpr_24, 0) = ((MR_Box) (*Var_9));
        MR_hl_field(MR_mktag(1), GoalExpr_24, 1) = ((MR_Box) (RHS_19));
        MR_hl_field(MR_mktag(1), GoalExpr_24, 2) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_8[1]));
        MR_hl_field(MR_mktag(1), GoalExpr_24, 3) = ((MR_Box) (Unification_20));
        MR_hl_field(MR_mktag(1), GoalExpr_24, 4) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_1[11]));
      }
      NonLocals_25 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Var_9);
      InstmapDelta_26 = hlds__instmap__instmap_delta_bind_var_1_f_0(*Var_9);
      hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_25, InstmapDelta_26, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_27);
      {
        Goal_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Goal_28, 0) = ((MR_Box) (GoalExpr_24));
        MR_hl_field(MR_mktag(0), Goal_28, 1) = ((MR_Box) (GoalInfo_27));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Goals_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_28));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__3_45;

    check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3020__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_LambdaHeadVar__3_45);
    *wrapper_arg_3 = ((MR_Box) (conv2_LambdaHeadVar__3_45));
  }
}

static void MR_CALL 
check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0_2_env_0_s * env_ptr = (struct check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0_2_env_0_s *) (env_ptr_arg);

    *((env_ptr)->check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0_2_env_0__conv1_LambdaHeadVar__1_41));
    ((env_ptr)->check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0_2_env_0__cont)((env_ptr)->check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0_2_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0_2_env_0_s env;

    (env).check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0_2_env_0__cont = cont;
    (env).check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      check_hlds__polymorphism__IntroducedFrom__pred__record_constraint_type_info_locns__3001__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &(env).check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0_2_env_0__conv1_LambdaHeadVar__1_41, check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0_1, &env);
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0(
  MR_Word RecordLocns_6,
  MR_Word Constraint_7,
  MR_Word * TypeClassInfoVar_8,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  {
    MR_bool succeeded;
    MR_Word OldTypeClassInfoVar_11;
    MR_Word RttiVarMaps0_10;

    check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_13, &RttiVarMaps0_10);
    succeeded = hlds__hlds_rtti__rtti_search_typeclass_info_var_3_p_0(RttiVarMaps0_10, Constraint_7, &OldTypeClassInfoVar_11);
    if (succeeded)
    {
      *TypeClassInfoVar_8 = OldTypeClassInfoVar_11;
      *STATE_VARIABLE_Info_14 = STATE_VARIABLE_Info_0_13;
    }
    else
    {
      MR_Word STATE_VARIABLE_Info_16_16;
      MR_Word _TypeClassInfoVarType_12;

      check_hlds__polymorphism__new_typeclass_info_var_6_p_0(Constraint_7, (MR_Integer) 1, TypeClassInfoVar_8, &_TypeClassInfoVarType_12, STATE_VARIABLE_Info_0_13, &STATE_VARIABLE_Info_16_16);
      switch (RecordLocns_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          *STATE_VARIABLE_Info_14 = STATE_VARIABLE_Info_16_16;
          break;
        case (MR_Integer) 0:
          {
            MR_Word ModuleInfo_23;
            MR_Word ClassName_24;
            MR_Word ClassTypes_25;
            MR_Integer ClassArity_26;
            MR_Word ClassId_27;
            MR_Word ClassTable_28;
            MR_Word ClassDefn_29;
            MR_Word SuperClasses_30;
            MR_Integer NumSuperClasses_31;
            MR_Integer First_32;
            MR_Integer Last_33;
            MR_Word IndexedClassTypes_34;
            MR_Word RttiVarMaps0_35;
            MR_Word NewTVarAndIndex_36;
            MR_Word NewClassTypeVars_44;
            MR_Word MakeEntry_45;
            MR_Word RttiVarMaps_51;
            MR_Word Var_53;
            MR_Box conv0_ClassDefn_29;
            MR_Box conv3_RttiVarMaps_51;

            check_hlds__polymorphism_info__poly_info_get_module_info_2_p_0(STATE_VARIABLE_Info_16_16, &ModuleInfo_23);
            ClassName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_7, (MR_Integer) 0))));
            ClassTypes_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_7, (MR_Integer) 1))));
            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ClassTypes_25, &ClassArity_26);
            {
              ClassId_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ClassId_27, 0) = ((MR_Box) (ClassName_24));
              MR_hl_field(MR_mktag(0), ClassId_27, 1) = ((MR_Box) (ClassArity_26));
            }
            hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_23, &ClassTable_28);
            mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_28, ((MR_Box) (ClassId_27)), &conv0_ClassDefn_29);
            ClassDefn_29 = ((MR_Word) (conv0_ClassDefn_29));
            SuperClasses_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_29, (MR_Integer) 1))));
            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), SuperClasses_30, &NumSuperClasses_31);
            First_32 = (MR_Integer) ((MR_Unsigned) NumSuperClasses_31 + (MR_Unsigned) 1);
            Last_33 = (MR_Integer) ((MR_Unsigned) NumSuperClasses_31 + (MR_Unsigned) ClassArity_26);
            Var_53 = mercury__list__f_46_46_2_f_0(First_32, Last_33);
            mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ClassTypes_25, Var_53, &IndexedClassTypes_34);
            check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_16_16, &RttiVarMaps0_35);
            {
              NewTVarAndIndex_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), NewTVarAndIndex_36, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[5]));
              MR_hl_field(MR_mktag(0), NewTVarAndIndex_36, 1) = ((MR_Box) (check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0_2));
              MR_hl_field(MR_mktag(0), NewTVarAndIndex_36, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), NewTVarAndIndex_36, 3) = ((MR_Box) (IndexedClassTypes_34));
              MR_hl_field(MR_mktag(0), NewTVarAndIndex_36, 4) = ((MR_Box) (RttiVarMaps0_35));
            }
            mercury__solutions__solutions_2_p_1((MR_Word) (&check_hlds__polymorphism_scalar_common_2[3]), NewTVarAndIndex_36, &NewClassTypeVars_44);
            {
              MakeEntry_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), MakeEntry_45, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_6[1]));
              MR_hl_field(MR_mktag(0), MakeEntry_45, 1) = ((MR_Box) (check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0_3));
              MR_hl_field(MR_mktag(0), MakeEntry_45, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), MakeEntry_45, 3) = ((MR_Box) (*TypeClassInfoVar_8));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_2[3]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), MakeEntry_45, NewClassTypeVars_44, ((MR_Box) (RttiVarMaps0_35)), &conv3_RttiVarMaps_51);
            RttiVarMaps_51 = ((MR_Word) (conv3_RttiVarMaps_51));
            check_hlds__polymorphism_info__poly_info_set_rtti_varmaps_3_p_0(RttiVarMaps_51, STATE_VARIABLE_Info_16_16, STATE_VARIABLE_Info_14);
          }
          break;
      }
    }
  }
}

static void MR_CALL 
check_hlds__polymorphism__new_typeclass_info_var_6_p_0(
  MR_Word Constraint_7,
  MR_Word VarKind_8,
  MR_Word * Var_9,
  MR_Word * VarType_10,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  {
    MR_Word VarSet0_12;
    MR_Word VarTypes0_13;
    MR_Word RttiVarMaps0_14;
    MR_Word ClassName_15;
    MR_String ClassNameString_17;
    MR_Word VarSet1_18;
    MR_String Name_19;
    MR_Word VarSet_20;
    MR_Word VarTypes_21;
    MR_Word RttiVarMaps_22;
    MR_Word PrivateBuiltin_31;
    MR_Word TypeclassInfoTypeName_32;

    check_hlds__polymorphism_info__poly_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_23, &VarSet0_12);
    check_hlds__polymorphism_info__poly_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_23, &VarTypes0_13);
    check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_0_23, &RttiVarMaps0_14);
    ClassName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_7, (MR_Integer) 0))));
    ClassNameString_17 = mdbcomp__sym_name__unqualify_name_1_f_0(ClassName_15);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_9, VarSet0_12, &VarSet1_18);
    switch (VarKind_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Name_19 = mercury__string__f_43_43_2_f_0((MR_String) "BaseTypeClassInfo_for_", ClassNameString_17);
        break;
      case (MR_Integer) 1:
        Name_19 = mercury__string__f_43_43_2_f_0((MR_String) "TypeClassInfo_for_", ClassNameString_17);
        break;
    }
    mercury__varset__name_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *Var_9, Name_19, VarSet1_18, &VarSet_20);
    PrivateBuiltin_31 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    {
      TypeclassInfoTypeName_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeclassInfoTypeName_32, 0) = ((MR_Box) (PrivateBuiltin_31));
      MR_hl_field(MR_mktag(1), TypeclassInfoTypeName_32, 1) = ((MR_Box) ((MR_String) "typeclass_info"));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *VarType_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeclassInfoTypeName_32));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    hlds__vartypes__add_var_type_4_p_0(*Var_9, *VarType_10, VarTypes0_13, &VarTypes_21);
    hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_p_0(Constraint_7, *Var_9, RttiVarMaps0_14, &RttiVarMaps_22);
    check_hlds__polymorphism_info__poly_info_set_varset_types_rtti_5_p_0(VarSet_20, VarTypes_21, RttiVarMaps_22, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
  }
}

static void MR_CALL 
check_hlds__polymorphism__assign_var_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.assign_var_list\'/3", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.polymorphism.assign_var_list\'/3", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word Var2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Vars2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word Goal_18;
        MR_Word Goals_19;

        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), ((MR_Box) (Var_21)), ((MR_Box) (Var2_16)));
        if (succeeded)
          Goal_18 = hlds__make_goal__true_goal_0_f_0();
        else
        {
          MR_Word Context_25;
          MR_Word Var_26;

          mercury__term__context_init_1_p_0(&Context_25);
          {
            Var_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (Var2_16));
          }
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Var_21, Var_26, Context_25, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &Goal_18);
        }
        check_hlds__polymorphism__assign_var_list_3_p_0(Var_20, Vars2_17, &Goals_19);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_19));
        }
      }
    }
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
check_hlds__polymorphism__post_copy_polymorphism_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ModuleInfo_9;

    check_hlds__polymorphism__expand_class_method_bodies_in_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_9);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_9));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism__post_copy_polymorphism_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__polymorphism__class_id_is_from_given_module_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism__post_copy_polymorphism_3_p_0_1(
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

void MR_CALL 
check_hlds__polymorphism__post_copy_polymorphism_3_p_0(
  MR_Word ExistsCastPredIds_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15)
{
  {
    MR_bool succeeded;
    MR_Word ClassMap_6;
    MR_Word ModuleName_7;
    MR_Word ClassIds0_8;
    MR_Word Globals_9;
    MR_Word OptTuple_10;
    MR_Word UserTypeSpec_11;
    MR_Word ClassIds_12;
    MR_Word ClassDefns_13;
    MR_Word STATE_VARIABLE_ModuleInfo_17_17;
    MR_Box conv1_STATE_VARIABLE_ModuleInfo_17_17;
    MR_Box conv3_STATE_VARIABLE_ModuleInfo_15;

    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[17]), ExistsCastPredIds_4, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_14)), &conv1_STATE_VARIABLE_ModuleInfo_17_17);
    STATE_VARIABLE_ModuleInfo_17_17 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_17_17));
    hlds__hlds_module__module_info_get_class_table_2_p_0(STATE_VARIABLE_ModuleInfo_17_17, &ClassMap_6);
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_17_17, &ModuleName_7);
    mercury__map__keys_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassMap_6, &ClassIds0_8);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_17_17, &Globals_9);
    libs__globals__get_opt_tuple_2_p_0(Globals_9, &OptTuple_10);
    UserTypeSpec_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_10, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    switch (UserTypeSpec_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_18;

          {
            Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[4]));
            MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (check_hlds__polymorphism__post_copy_polymorphism_3_p_0_2));
            MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (ModuleName_7));
          }
          mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), Var_18, ClassIds0_8, &ClassIds_12);
        }
        break;
      case (MR_Integer) 0:
        ClassIds_12 = ClassIds0_8;
        break;
    }
    mercury__map__apply_to_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassIds_12, ClassMap_6, &ClassDefns_13);
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[18]), ClassDefns_13, ((MR_Box) (STATE_VARIABLE_ModuleInfo_17_17)), &conv3_STATE_VARIABLE_ModuleInfo_15);
    *STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_15));
  }
}

void MR_CALL 
check_hlds__polymorphism__build_type_info_type_2_p_0(
  MR_Word Type_3,
  MR_Word * TypeInfoType_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_5;
    MR_Word Var_6;

    succeeded = parse_tree__prog_type__type_has_variable_arity_ctor_3_p_0(Type_3, &Var_5, &Var_6);
    if (succeeded)
      *TypeInfoType_4 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    else
    {
      MR_Word Args_8;
      MR_Word _Ctor_7;

      succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_3, &_Ctor_7, &Args_8);
      if (succeeded)
        if ((Args_8 == (MR_Word) ((MR_Unsigned) 0U)))
          *TypeInfoType_4 = parse_tree__builtin_lib_types__type_ctor_info_type_0_f_0();
        else
          *TypeInfoType_4 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
      else
        *TypeInfoType_4 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
    }
  }
}

MR_bool MR_CALL 
check_hlds__polymorphism__type_is_type_info_or_ctor_type_1_p_0(
  MR_Word TypeInfoType_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_11_11;
    MR_Word TypeCtor_3;
    MR_Word ModuleName_4;
    MR_String TypeName_5;
    MR_Word Var_7;
    MR_Integer Var_8;
    MR_Word Var_9;
    MR_Word Var_10;

    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeInfoType_2, &TypeCtor_3, &Var_9);
    if (succeeded)
    {
      TypeInfo_11_11 = (MR_Word) (&check_hlds__polymorphism_scalar_common_1[7]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_9)));
      if (succeeded)
      {
        Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_3, (MR_Integer) 0))));
        Var_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_3, (MR_Integer) 1))));
        succeeded = (Var_8 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_7)) == (MR_Integer) 1);
          if (succeeded)
          {
            ModuleName_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_7, (MR_Integer) 0))));
            TypeName_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_7, (MR_Integer) 1))));
            Var_10 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_4, Var_10);
            if (succeeded)
            {
              if ((strcmp(TypeName_5, (MR_String) "type_info") == 0))
                succeeded = MR_TRUE;
              else
              if ((strcmp(TypeName_5, (MR_String) "type_ctor_info") == 0))
                succeeded = MR_TRUE;
              else
                succeeded = MR_FALSE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__polymorphism__type_is_typeclass_info_1_p_0(
  MR_Word TypeClassInfoType_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_3;
    MR_Word ModuleName_4;
    MR_Word Var_5;
    MR_String Var_6;
    MR_Integer Var_7;
    MR_Word Var_8;

    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(TypeClassInfoType_2, &TypeCtor_3);
    if (succeeded)
    {
      Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_3, (MR_Integer) 0))));
      Var_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_3, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_Integer) 1);
      if (succeeded)
      {
        ModuleName_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_5, (MR_Integer) 0))));
        Var_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_5, (MR_Integer) 1))));
        succeeded = (strcmp(Var_6, (MR_String) "typeclass_info") == 0);
        if (succeeded)
        {
          succeeded = (Var_7 == (MR_Integer) 0);
          if (succeeded)
          {
            Var_8 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_4, Var_8);
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__polymorphism__build_typeclass_info_type_2_p_0(
  MR_Word _Constraint_3,
  MR_Word * DictionaryType_4)
{
  check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_116_121_112_101_95_95_91_49_93_95_48_2_p_0(DictionaryType_4);
}

void MR_CALL 
check_hlds__polymorphism__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_116_121_112_101_95_95_91_49_93_95_48_2_p_0(
  MR_Word * DictionaryType_4)
{
  {
    MR_Word PrivateBuiltin_5;
    MR_Word TypeclassInfoTypeName_6;

    PrivateBuiltin_5 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    {
      TypeclassInfoTypeName_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeclassInfoTypeName_6, 0) = ((MR_Box) (PrivateBuiltin_5));
      MR_hl_field(MR_mktag(1), TypeclassInfoTypeName_6, 1) = ((MR_Box) ((MR_String) "typeclass_info"));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *DictionaryType_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeclassInfoTypeName_6));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
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
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[3]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (check_hlds__polymorphism__unification_typeinfos_rtti_varmaps_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (RttiVarMaps_8));
    }
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), Var_17, TypeVars_11, &TypeInfoLocns_12);
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[16]), TypeInfoLocns_12, &TypeInfoVars0_31);
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

    succeeded = check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__446__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = check_hlds__polymorphism__IntroducedFrom__pred__polymorphism_process_generated_pred__444__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Specs_7));
      MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_13, (MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_generated_pred\'/3", (MR_String) "generated pred has errors");
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (check_hlds__polymorphism__polymorphism_process_generated_pred_3_p_0_2));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (SafeToContinue_6));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_17, (MR_String) "predicate \140check_hlds.polymorphism.polymorphism_process_generated_pred\'/3", (MR_String) "generated pred has errors");
    check_hlds__polymorphism__fixup_pred_polymorphism_5_p_0(PredId_4, (MR_Word) ((MR_Unsigned) 0U), &ExistsPredIds_8, STATE_VARIABLE_ModuleInfo_12_12, &STATE_VARIABLE_ModuleInfo_22_22);
    check_hlds__clause_to_proc__copy_clauses_to_procs_for_pred_in_module_info_3_p_0(PredId_4, STATE_VARIABLE_ModuleInfo_22_22, &STATE_VARIABLE_ModuleInfo_23_23);
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[15]), ExistsPredIds_8, ((MR_Box) (STATE_VARIABLE_ModuleInfo_23_23)), &conv1_STATE_VARIABLE_ModuleInfo_10);
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
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_7[1]));
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
check_hlds__polymorphism__setup_headvars_instance_method_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__3_3;

    hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__polymorphism__setup_headvars_instance_method_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_TypeClassInfoVar_8;
    MR_Word conv0_STATE_VARIABLE_Info_14;

    check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_TypeClassInfoVar_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_14);
    *wrapper_arg_2 = ((MR_Box) (conv1_TypeClassInfoVar_8));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
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
    MR_Box conv2_STATE_VARIABLE_Info_44_44;
    MR_Box conv4_RttiVarMaps_32;

    parse_tree__prog_type__type_vars_list_2_p_0(InstanceTypes_21, &InstanceTVars_24);
    parse_tree__prog_type__get_unconstrained_tvars_3_p_0(InstanceTVars_24, InstanceConstraints_22, &UnconstrainedInstanceTVars_25);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_12, &ArgTypeVarSet_26, &Var_27, &Var_28);
    check_hlds__polymorphism__make_head_vars_5_p_0(UnconstrainedInstanceTVars_25, ArgTypeVarSet_26, &UnconstrainedInstanceTypeInfoVars_29, STATE_VARIABLE_Info_0_40, &STATE_VARIABLE_Info_42_42);
    mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_8[0]), InstanceConstraints_22, &InstanceHeadTypeClassInfoVars_30, ((MR_Box) (STATE_VARIABLE_Info_42_42)), &conv2_STATE_VARIABLE_Info_44_44);
    STATE_VARIABLE_Info_44_44 = ((MR_Word) (conv2_STATE_VARIABLE_Info_44_44));
    hlds__hlds_args__proc_arg_vector_set_instance_type_infos_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), UnconstrainedInstanceTypeInfoVars_29, STATE_VARIABLE_HeadVars_0_36, &STATE_VARIABLE_HeadVars_45_45);
    hlds__hlds_args__proc_arg_vector_set_instance_typeclass_infos_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), InstanceHeadTypeClassInfoVars_30, STATE_VARIABLE_HeadVars_45_45, &STATE_VARIABLE_HeadVars_46_46);
    check_hlds__polymorphism_info__poly_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_Info_44_44, &RttiVarMaps0_31);
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[14]), InstanceHeadTypeClassInfoVars_30, ((MR_Box) (RttiVarMaps0_31)), &conv4_RttiVarMaps_32);
    RttiVarMaps_32 = ((MR_Word) (conv4_RttiVarMaps_32));
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
    check_hlds__polymorphism__make_typeclass_info_head_vars_5_p_0(RecordExistQLocns_37, ActualExistConstraints_35, ExistHeadTypeClassInfoVars_24, STATE_VARIABLE_Info_0_70, &STATE_VARIABLE_Info_73_73);
    check_hlds__polymorphism__make_typeclass_info_head_vars_5_p_0((MR_Integer) 0, UnivConstraints_30, &UnivHeadTypeClassInfoVars_38, STATE_VARIABLE_Info_73_73, &STATE_VARIABLE_Info_75_75);
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
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[7]), UnivHeadTypeInfoVars_49, &UnivTypeLocns_65);
    mercury__list__foldl_corresponding_5_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[8]), UnconstrainedUnivTVars_44, UnivTypeLocns_65, ((MR_Box) (STATE_VARIABLE_RttiVarMaps_86_86)), &conv2_STATE_VARIABLE_RttiVarMaps_89_89);
    STATE_VARIABLE_RttiVarMaps_89_89 = ((MR_Word) (conv2_STATE_VARIABLE_RttiVarMaps_89_89));
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[9]), ExistHeadTypeInfoVars_46, &ExistTypeLocns_66);
    mercury__list__foldl_corresponding_5_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[10]), UnconstrainedExistTVars_45, ExistTypeLocns_66, ((MR_Box) (STATE_VARIABLE_RttiVarMaps_89_89)), &conv5_STATE_VARIABLE_RttiVarMaps_92_92);
    STATE_VARIABLE_RttiVarMaps_92_92 = ((MR_Word) (conv5_STATE_VARIABLE_RttiVarMaps_92_92));
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[11]), UnconstrainedInstanceTypeInfoVars_19, &UnconstrainedInstanceTypeLocns_67);
    mercury__list__foldl_corresponding_5_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[2]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[12]), UnconstrainedInstanceTVars_18, UnconstrainedInstanceTypeLocns_67, ((MR_Box) (STATE_VARIABLE_RttiVarMaps_92_92)), &conv8_STATE_VARIABLE_RttiVarMaps_95_95);
    STATE_VARIABLE_RttiVarMaps_95_95 = ((MR_Word) (conv8_STATE_VARIABLE_RttiVarMaps_95_95));
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[13]), UnivHeadTypeClassInfoVars_38, ((MR_Box) (STATE_VARIABLE_RttiVarMaps_95_95)), &conv10_STATE_VARIABLE_RttiVarMaps_97_97);
    STATE_VARIABLE_RttiVarMaps_97_97 = ((MR_Word) (conv10_STATE_VARIABLE_RttiVarMaps_97_97));
    check_hlds__polymorphism_info__poly_info_set_rtti_varmaps_3_p_0(STATE_VARIABLE_RttiVarMaps_97_97, STATE_VARIABLE_Info_77_77, STATE_VARIABLE_Info_71);
  }
}

static void MR_CALL 
check_hlds__polymorphism__make_typeclass_info_head_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_TypeClassInfoVar_8;
    MR_Word conv0_STATE_VARIABLE_Info_14;

    check_hlds__polymorphism__make_typeclass_info_head_var_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_TypeClassInfoVar_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_14);
    *wrapper_arg_2 = ((MR_Box) (conv1_TypeClassInfoVar_8));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
  }
}

static void MR_CALL 
check_hlds__polymorphism__make_typeclass_info_head_vars_5_p_0(
  MR_Word RecordLocns_6,
  MR_Word Constraints_7,
  MR_Word * ExtraHeadVars_8,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  {
    MR_Word Var_12;
    MR_Box conv2_STATE_VARIABLE_Info_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&check_hlds__polymorphism_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (check_hlds__polymorphism__make_typeclass_info_head_vars_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (RecordLocns_6));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[3]), (MR_Word) (&check_hlds__polymorphism_info__check_hlds__polymorphism_info__type_ctor_info_poly_info_0), Var_12, Constraints_7, ExtraHeadVars_8, ((MR_Box) (STATE_VARIABLE_Info_0_10)), &conv2_STATE_VARIABLE_Info_11);
    *STATE_VARIABLE_Info_11 = ((MR_Word) (conv2_STATE_VARIABLE_Info_11));
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
    mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe_safe_to_continue_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[5]), PredIds0_11, ((MR_Box) ((MR_Integer) 0)), &conv5_SafeToContinue_8, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_Specs_9, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_14)), &conv3_STATE_VARIABLE_ModuleInfo_19_19);
    *SafeToContinue_8 = ((MR_Word) (conv5_SafeToContinue_8));
    *Specs_9 = ((MR_Word) (conv4_Specs_9));
    STATE_VARIABLE_ModuleInfo_19_19 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_19_19));
    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_19_19, &Preds1_12);
    mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds1_12, &PredIds1_13);
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_1[1]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__polymorphism_scalar_common_2[6]), PredIds1_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv9_ExistsCastPredIds_7, ((MR_Box) (STATE_VARIABLE_ModuleInfo_19_19)), &conv8_STATE_VARIABLE_ModuleInfo_15);
    *ExistsCastPredIds_7 = ((MR_Word) (conv9_ExistsCastPredIds_7));
    *STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) (conv8_STATE_VARIABLE_ModuleInfo_15));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____record_type_info_locns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__polymorphism____Unify____record_type_info_locns_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism____Compare____record_type_info_locns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__polymorphism____Compare____record_type_info_locns_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__polymorphism____Unify____tci_var_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__polymorphism____Unify____tci_var_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__polymorphism____Compare____tci_var_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__polymorphism____Compare____tci_var_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__polymorphism__init(void)
{
}

void mercury__check_hlds__polymorphism__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_record_type_info_locns_0);
	MR_register_type_ctor_info(&check_hlds__polymorphism__check_hlds__polymorphism__type_ctor_info_tci_var_kind_0);
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
