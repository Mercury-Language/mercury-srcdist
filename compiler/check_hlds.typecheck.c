/*
** Automatically generated from `typecheck.m'
** by the Mercury compiler,
** version DEV
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


// :- module check_hlds.typecheck.
// :- implementation.

/*
INIT mercury__check_hlds__typecheck__init
ENDINIT
*/

#include "check_hlds.typecheck.mih"


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
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_assign.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.typecheck_errors.mih"
#include "check_hlds.typecheck_info.mih"
#include "check_hlds.typeclasses.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
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
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_pred_decl.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_event.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s {
  MR_Word check_hlds__typecheck__rename_constraint_3_p_0_env_0__TVarRenaming_4;
  MR_bool check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded;
  MR_Word check_hlds__typecheck__rename_constraint_3_p_0_env_0__ArgTypes0_9;
  jmp_buf check_hlds__typecheck__rename_constraint_3_p_0_env_0__commit_0;
  MR_Word check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13;
  MR_Word check_hlds__typecheck__rename_constraint_3_p_0_env_0__Var_12;
};

struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s {
  MR_Word check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__HeadTypeVars_3;
  MR_bool check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded;
  MR_Word check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__ArgTypes_6;
  jmp_buf check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__commit_0;
  MR_Word check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__TVar_7;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_0;

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_1;

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_2;

static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_cons_constraints_action_0[3];

static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_cons_constraints_action_0[3];

static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_constraints_action_0[3];

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_cons_type_assign_0_0[3];

static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_cons_type_assign_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_cons_type_assign_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_cons_type_assign_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_cons_type_assign_0[1];

static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_type_assign_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__list__ti_list_1check_hlds__typecheck__type_ctor_info_cons_type_assign_0;

static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_0[1];

static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_0;

static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_1[1];

static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_1;

static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_1[1];

static const MR_DuPtagLayout check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_maybe_cons_type_info_0[2];

static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_maybe_cons_type_info_0[2];

static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_maybe_cons_type_info_0[2];

static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_need_typecheck_0_0[2];

static const MR_ConstString check_hlds__typecheck__check_hlds__typecheck__field_names_maybe_need_typecheck_0_0[2];

static const MR_DuArgLocn check_hlds__typecheck__check_hlds__typecheck__field_locns_maybe_need_typecheck_0_0[2];

static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_need_typecheck_0_0;

static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_need_typecheck_0_1;

static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_need_typecheck_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_need_typecheck_0_1[1];

static const MR_DuPtagLayout check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_maybe_need_typecheck_0[2];

static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_maybe_need_typecheck_0[2];

static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_maybe_need_typecheck_0[2];

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0;

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1;

static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_stuff_to_check_0[2];

static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_stuff_to_check_0[2];

static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_stuff_to_check_0[2];

static MR_Word MR_CALL 
check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3459__2_1_f_0(
  MR_Word LambdaHeadVar__1_42);

static MR_Word MR_CALL 
check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3459__1_1_f_0(
  MR_Word LambdaHeadVar__1_42);

static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_expr__1491__1_2_p_0(
  MR_Word GoalType_96,
  MR_Word HeadVar__2_161);

static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_predicate_if_stub__541__1_2_p_0(
  MR_Word STATE_VARIABLE_Specs_49_49,
  MR_Word HeadVar__2_60);

static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__construct_type_inference_message__293__1_2_p_0(
  MR_Word ModuleInfo_5,
  MR_Word LambdaHeadVar__1_53);

static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____stuff_to_check_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck____Compare____maybe_need_typecheck_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_need_typecheck_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_constraints_action_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_3(
  void * env_ptr_arg);

static MR_bool MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0(
  MR_Word TVarRenaming_4,
  MR_Word Constraint0_5,
  MR_Word * Constraint_6);

static MR_bool MR_CALL 
check_hlds__typecheck__project_constraint_2_p_0(
  MR_Word CallTVars_3,
  MR_Word Constraint_4);

static MR_bool MR_CALL 
check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(
  MR_Word Info_9,
  MR_Word GoalId_10,
  MR_Word FuncName_11,
  MR_Integer Arity_12,
  MR_Word AccessType_13,
  MR_Word FieldName_14,
  MR_Word FieldDefn_15,
  MR_Word * ConsTypeInfo_16);

static MR_Box MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_95_91_51_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_95_91_51_93_95_48_5_p_0(
  MR_Word Info_6,
  MR_Word GoalId_7,
  MR_Word HLDS_ConsDefn_9,
  MR_Word * ConsTypeInfo_10);

static void MR_CALL 
check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0(
  MR_Word ClassTable_8,
  MR_Word AccessType_9,
  MR_Word FieldName_10,
  MR_Word FieldDefn_11,
  MR_Word FunctorConsTypeInfo_12,
  MR_Word OrigExistTVars_13,
  MR_Word * ConsTypeInfo_14);

static MR_bool MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0(
  MR_Word ClassTable_7,
  MR_Word TVarSet_8,
  MR_Word CallTVars_9,
  MR_Word TVarRenaming_10,
  MR_Word STATE_VARIABLE_Constraints_0_20,
  MR_Word * STATE_VARIABLE_Constraints_21);

static void MR_CALL 
check_hlds__typecheck__type_assign_check_functor_type_builtin_5_p_0(
  MR_Word ConsType_6,
  MR_Word Y_7,
  MR_Word TypeAssign0_8,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_15,
  MR_Word * STATE_VARIABLE_TypeAssignSet_16);

static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_stm_atomic_type_6_p_0(
  MR_Word Context_7,
  MR_Word Var_8,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_11,
  MR_Word * STATE_VARIABLE_TypeAssignSet_12,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_3(
  void * env_ptr_arg);

static MR_bool MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0(
  MR_Word HeadTypeVars_3,
  MR_Word Constraint_4);

static void MR_CALL 
check_hlds__typecheck__check_mention_existq_var_6_p_0(
  MR_Word Context_7,
  MR_Word TypeVarSet_8,
  MR_Word Impl_9,
  MR_Word TVar_10,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
check_hlds__typecheck__check_existq_clause_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck__check_existq_clause_5_p_0(
  MR_Word TypeVarSet_6,
  MR_Word ExistQVars_7,
  MR_Word Clause_8,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
check_hlds__typecheck__typecheck_to_fixpoint_10_p_0(
  MR_Integer Iteration_11,
  MR_Integer MaxIterations_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_33,
  MR_Word * STATE_VARIABLE_ModuleInfo_34,
  MR_Word OrigValidPredIds_14,
  MR_Word OrigValidPredIdSet_15,
  MR_Word * FinalValidPredIdSet_16,
  MR_Word * Specs_17,
  MR_Word * FoundSyntaxError_18,
  MR_Word * ExceededIterationLimit_19);

static void MR_CALL 
check_hlds__typecheck__typecheck_module_one_iteration_12_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ValidPredIdSet_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_NewlyInvalidPredIds_0_5,
  MR_Word * STATE_VARIABLE_NewlyInvalidPredIds_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8,
  MR_Word STATE_VARIABLE_FoundSyntaxError_0_9,
  MR_Word * STATE_VARIABLE_FoundSyntaxError_10,
  MR_Word STATE_VARIABLE_Changed_0_11,
  MR_Word * STATE_VARIABLE_Changed_12);

static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_module_one_iteration_1_12_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ValidPredIdSet_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_71,
  MR_Word STATE_VARIABLE_NewlyInvalidPredIds_0_5,
  MR_Word * STATE_VARIABLE_NewlyInvalidPredIds_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8,
  MR_Word STATE_VARIABLE_FoundSyntaxError_0_9,
  MR_Word * STATE_VARIABLE_FoundSyntaxError_10,
  MR_Word STATE_VARIABLE_Changed_0_11,
  MR_Word * STATE_VARIABLE_Changed_12);

static void MR_CALL 
check_hlds__typecheck__typecheck_pred_if_needed_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_PredInfo_0_20,
  MR_Word * STATE_VARIABLE_PredInfo_21,
  MR_Word * STATE_VARIABLE_Specs_22,
  MR_Word * FoundSyntaxError_13,
  MR_Word * ContainsErrors_14,
  MR_Word * Changed_15);

static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Word STATE_VARIABLE_PredInfo_0_69,
  MR_Word * STATE_VARIABLE_PredInfo_70,
  MR_Word STATE_VARIABLE_Specs_0_71,
  MR_Word * STATE_VARIABLE_Specs_72,
  MR_Word * Changed_12);

static void MR_CALL 
check_hlds__typecheck__typecheck_clause_list_8_p_0(
  MR_Word HeadVars_1,
  MR_Word ArgTypes_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_5,
  MR_Word * STATE_VARIABLE_TypeAssignSet_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_clause_list_1_8_p_0(
  MR_Word HeadVars_1,
  MR_Word ArgTypes_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_34,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_5,
  MR_Word * STATE_VARIABLE_TypeAssignSet_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
check_hlds__typecheck__typecheck_clause_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck__typecheck_clause_8_p_0(
  MR_Word HeadVars_9,
  MR_Word ArgTypes_10,
  MR_Word STATE_VARIABLE_Clause_0_22,
  MR_Word * STATE_VARIABLE_Clause_23,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_24,
  MR_Word * STATE_VARIABLE_TypeAssignSet_25,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27);

static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_unification_1_10_p_0(
  MR_Word UnifyContext_11,
  MR_Word Context_12,
  MR_Word GoalId_13,
  MR_Word X_14,
  MR_Word RHS0_15,
  MR_Word * AddrOfRHS_83,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_33,
  MR_Word * STATE_VARIABLE_TypeAssignSet_34,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36);

static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_goal_list_1_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_31,
  MR_Word Context_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_goal_1_7_p_0(
  MR_Word Goal0_8,
  MR_Word * AddrOfGoal_43,
  MR_Word EnclosingContext_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_28,
  MR_Word * STATE_VARIABLE_TypeAssignSet_29,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31);

static void MR_CALL 
check_hlds__typecheck__typecheck_goal_list_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word Context_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_3(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0(
  MR_Word GoalExpr0_8,
  MR_Word * GoalExpr_9,
  MR_Word GoalInfo_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_117,
  MR_Word * STATE_VARIABLE_TypeAssignSet_118,
  MR_Word STATE_VARIABLE_Info_0_119,
  MR_Word * STATE_VARIABLE_Info_120);

static void MR_CALL 
check_hlds__typecheck__typecheck_goal_7_p_0(
  MR_Word Goal0_8,
  MR_Word * Goal_9,
  MR_Word EnclosingContext_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_28,
  MR_Word * STATE_VARIABLE_TypeAssignSet_29,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31);

static void MR_CALL 
check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Purity_2,
  MR_Word PredOrFunc_3,
  MR_Word Var_5,
  MR_Word ArgVars_6,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_7,
  MR_Word * STATE_VARIABLE_TypeAssignSet_8);

static void MR_CALL 
check_hlds__typecheck__type_assign_get_types_of_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_TypeAssign_0_3,
  MR_Word * STATE_VARIABLE_TypeAssign_4);

static void MR_CALL 
check_hlds__typecheck__LCMCpr_type_assign_get_types_of_vars_1_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_27,
  MR_Word STATE_VARIABLE_TypeAssign_0_3,
  MR_Word * STATE_VARIABLE_TypeAssign_4);

static void MR_CALL 
check_hlds__typecheck__type_assigns_unify_var_var_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word X_2,
  MR_Word Y_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5);

static MR_Box MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0(
  MR_Word UnifyContext_11,
  MR_Word Context_12,
  MR_Word Var_13,
  MR_Word ConsId_14,
  MR_Word ArgVars_15,
  MR_Word GoalId_16,
  MR_Word TypeAssignSet0_17,
  MR_Word * TypeAssignSet_18,
  MR_Word STATE_VARIABLE_Info_0_54,
  MR_Word * STATE_VARIABLE_Info_55);

static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word ArgVars_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5);

static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_115_95_118_97_114_115_95_104_97_118_101_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgVars_3,
  MR_Word Types_4,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_5,
  MR_Word * STATE_VARIABLE_TypeAssignSet_6);

static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0(
  MR_Word Info_7,
  MR_Word Functor_8,
  MR_Integer Arity_9,
  MR_Word GoalId_10,
  MR_Word * ConsInfos_11,
  MR_Word * ConsErrors_12);

static void MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_p_0(
  MR_Word Info_7,
  MR_Word Functor_8,
  MR_Integer Arity_9,
  MR_Word GoalId_10,
  MR_Word * ConsInfos_11,
  MR_Word * DataConsErrors_12);

static MR_bool MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word ConsId_6,
  MR_Integer Arity_7,
  MR_Word * ConsTypeInfos_8);

static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
check_hlds__typecheck__LCMCpr_convert_cons_defn_list_1_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * AddrOfHeadVar__5_17);

static MR_Box MR_CALL 
check_hlds__typecheck__convert_cons_defn_5_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_5_p_1(
  MR_Word Info_6,
  MR_Word GoalId_7,
  MR_Word Action_8,
  MR_Word HLDS_ConsDefn_9,
  MR_Word * ConsTypeInfo_10);

static void MR_CALL 
check_hlds__typecheck__split_cons_errors_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck__builtin_field_access_function_type_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__typecheck__builtin_field_access_function_type_5_p_0(
  MR_Word Info_6,
  MR_Word GoalId_7,
  MR_Word ConsId_8,
  MR_Integer Arity_9,
  MR_Word * MaybeConsTypeInfos_10);

static MR_bool MR_CALL 
check_hlds__typecheck__builtin_pred_type_5_p_0(
  MR_Word Info_6,
  MR_Word ConsId_7,
  MR_Integer Arity_8,
  MR_Word GoalId_9,
  MR_Word * ConsTypeInfos_10);

static void MR_CALL 
check_hlds__typecheck__accumulate_cons_type_infos_for_pred_ids_7_p_0(
  MR_Word Info_1,
  MR_Word PredTable_2,
  MR_Word GoalId_3,
  MR_Word HeadVar__4_4,
  MR_Integer Arity_5,
  MR_Word STATE_VARIABLE_ConsTypeInfos_0_6,
  MR_Word * STATE_VARIABLE_ConsTypeInfos_7);

static void MR_CALL 
check_hlds__typecheck__typecheck_var_functor_types_4_p_0(
  MR_Word Var_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ArgsTypeAssignSet_0_3,
  MR_Word * STATE_VARIABLE_ArgsTypeAssignSet_4);

static void MR_CALL 
check_hlds__typecheck__get_cons_type_assigns_for_cons_defns_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TypeAssigns_2,
  MR_Word STATE_VARIABLE_ConsTypeAssignSet_0_3,
  MR_Word * STATE_VARIABLE_ConsTypeAssignSet_4);

static void MR_CALL 
check_hlds__typecheck__get_cons_type_assigns_for_cons_defn_4_p_0(
  MR_Word ConsDefn_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ConsTypeAssignSet_0_3,
  MR_Word * STATE_VARIABLE_ConsTypeAssignSet_4);

static MR_bool MR_CALL 
check_hlds__typecheck__cons_id_must_be_builtin_type_3_p_0(
  MR_Word ConsId_4,
  MR_Word * ConsType_5,
  MR_String * BuiltinTypeName_6);

static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_8_p_0(
  MR_Word GoalContext_9,
  MR_Word Context_10,
  MR_Word Var_11,
  MR_Word Type_12,
  MR_Word TypeAssignSet0_13,
  MR_Word * TypeAssignSet_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_name_9_p_0(
  MR_Word SimpleCallId_10,
  MR_Word Context_11,
  MR_Word GoalId_12,
  MR_Word Args_13,
  MR_Word * PredId_14,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_31,
  MR_Word * STATE_VARIABLE_TypeAssignSet_32,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34);

static void MR_CALL 
check_hlds__typecheck__get_overloaded_pred_arg_types_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_ArgsTypeAssignSet_0_6,
  MR_Word * STATE_VARIABLE_ArgsTypeAssignSet_7);

static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_id_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_id_9_p_0(
  MR_Word ArgVectorKind_10,
  MR_Word Context_11,
  MR_Word GoalId_12,
  MR_Word PredId_13,
  MR_Word Args_14,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_27,
  MR_Word * STATE_VARIABLE_TypeAssignSet_28,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30);

static void MR_CALL 
check_hlds__typecheck__typecheck_event_call_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck__typecheck_event_call_7_p_0(
  MR_Word Context_8,
  MR_String EventName_9,
  MR_Word Args_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_21,
  MR_Word * STATE_VARIABLE_TypeAssignSet_22,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(
  MR_Word Info_1,
  MR_Word Context_2,
  MR_Word ArgVectorKind_3,
  MR_Integer ArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_7,
  MR_Word * STATE_VARIABLE_TypeAssignSet_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10,
  MR_Word STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11,
  MR_Word * STATE_VARIABLE_MaybeArgVectorTypeErrors_12);

static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_in_arg_vector_12_p_0(
  MR_Word Info_13,
  MR_Word Context_14,
  MR_Word ArgVectorKind_15,
  MR_Integer ArgNum_16,
  MR_Word Var_17,
  MR_Word Type_18,
  MR_Word TypeAssignSet0_19,
  MR_Word * TypeAssignSet_20,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35,
  MR_Word STATE_VARIABLE_MaybeArgVectorTypeErrors_0_36,
  MR_Word * STATE_VARIABLE_MaybeArgVectorTypeErrors_37);

static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Var_2,
  MR_Word Type_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5);

static void MR_CALL 
check_hlds__typecheck__typecheck_higher_order_call_9_p_0(
  MR_Word GenericCallId_10,
  MR_Word Context_11,
  MR_Word PredVar_12,
  MR_Word Purity_13,
  MR_Word Args_14,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_24,
  MR_Word * STATE_VARIABLE_TypeAssignSet_25,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27);

static void MR_CALL 
check_hlds__typecheck__ensure_vars_have_a_single_type_7_p_0(
  MR_Word VarVectorKind_8,
  MR_Word Context_9,
  MR_Word Vars_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_22,
  MR_Word * STATE_VARIABLE_TypeAssignSet_23,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
check_hlds__typecheck__ensure_vars_have_a_type_7_p_0(
  MR_Word VarVectorKind_8,
  MR_Word Context_9,
  MR_Word Vars_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_21,
  MR_Word * STATE_VARIABLE_TypeAssignSet_22,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(
  MR_Word VarVectorKind_1,
  MR_Integer ArgNum_2,
  MR_Word Context_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * TypeAssignSet_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_arg_type_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Var_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
check_hlds__typecheck__delete_first_arg_in_each_arg_type_assign_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck__LCMCpr_delete_first_arg_in_each_arg_type_assign_1_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_15);

static void MR_CALL 
check_hlds__typecheck__rename_apart_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredTypeVarSet_2,
  MR_Word PredExistQVars_3,
  MR_Word PredArgTypes_4,
  MR_Word PredConstraints_5,
  MR_Word STATE_VARIABLE_ArgTypeAssigns_0_6,
  MR_Word * STATE_VARIABLE_ArgTypeAssigns_7);

static MR_Word MR_CALL 
check_hlds__typecheck__atomic_interface_list_to_var_list_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
check_hlds__typecheck__LCMCfn_atomic_interface_list_to_var_list_1_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_10);

static void MR_CALL 
check_hlds__typecheck__typecheck_check_for_ambiguity_6_p_0(
  MR_Word Context_7,
  MR_Word StuffToCheck_8,
  MR_Word HeadVars_9,
  MR_Word TypeAssignSet_10,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static MR_bool MR_CALL 
check_hlds__typecheck__argtypes_identical_up_to_renaming_7_p_0(
  MR_Word KindMap_8,
  MR_Word ExistQVarsA_9,
  MR_Word ArgTypesA_10,
  MR_Word TypeConstraintsA_11,
  MR_Word ExistQVarsB_12,
  MR_Word ArgTypesB_13,
  MR_Word TypeConstraintsB_14);

static MR_bool MR_CALL 
check_hlds__typecheck__same_structure_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
check_hlds__typecheck__restrict_to_head_vars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck__restrict_to_head_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ArgVarTypes_7,
  MR_Word * HeadVar__3_3,
  MR_Word * UnprovenCs_10);

static void MR_CALL 
check_hlds__typecheck__infer_existential_types_4_p_0(
  MR_Word ArgTypeVars_5,
  MR_Word * ExistQVars_6,
  MR_Word ExternalTypeParams0_7,
  MR_Word * ExternalTypeParams_8);

static void MR_CALL 
check_hlds__typecheck__rename_instance_method_constraints_3_p_0(
  MR_Word Renaming_4,
  MR_Word Origin0_5,
  MR_Word * Origin_6);

static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_predicate_if_stub_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__typecheck__typecheck_predicate_if_stub_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Word STATE_VARIABLE_PredInfo_0_36,
  MR_Word * STATE_VARIABLE_PredInfo_37,
  MR_Word FoundSyntaxError_11,
  MR_Word * STATE_VARIABLE_Specs_38,
  MR_Word * MaybeNeedTypecheck_13);

static void MR_CALL 
check_hlds__typecheck__generate_stub_clause_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_PredInfo_0_16,
  MR_Word * STATE_VARIABLE_PredInfo_17);

static MR_Word MR_CALL 
check_hlds__typecheck__report_any_non_contiguous_clauses_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word PredInfo_9,
  MR_Word ItemNumbers_10,
  MR_Word Type_11);

static void MR_CALL 
check_hlds__typecheck__construct_type_inference_messages_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ValidPredIdSet_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5);

static void MR_CALL 
check_hlds__typecheck__construct_type_inference_message_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__typecheck__construct_type_inference_message_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__typecheck__construct_type_inference_message_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word PredInfo_7);

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_constraints_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_need_typecheck_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck____Compare____maybe_need_typecheck_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____stuff_to_check_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__typecheck_scalar_common_1[26][2];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_2[8][3];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_3[16][1];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_4[8][5];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_5[3][8];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_6[2][6];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_7[1][11];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_10[2][9];


/* sealed */ struct check_hlds__typecheck__vector_common_type_8_0_s {
  const MR_String check_hlds__typecheck__vector_common_type_8_0__vct_8_f_0;
  const MR_Integer check_hlds__typecheck__vector_common_type_8_0__vct_8_f_1;
};

static /* final */ const struct check_hlds__typecheck__vector_common_type_8_0_s check_hlds__typecheck_vector_common_8[4];

/* sealed */ struct check_hlds__typecheck__vector_common_type_9_0_s {
  const MR_String check_hlds__typecheck__vector_common_type_9_0__vct_9_f_0;
  const MR_String check_hlds__typecheck__vector_common_type_9_0__vct_9_f_1;
};

static /* final */ const struct check_hlds__typecheck__vector_common_type_9_0_s check_hlds__typecheck_vector_common_9[5];



static /* final */ const MR_Box check_hlds__typecheck_scalar_common_1[26][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_assign_0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option to increase the limit)."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--type-inference-iteration-limit"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "You can use the"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "iterations."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Inferred"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_3[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Type inference iteration limit exceeded."))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This probably indicates that your program has a type error."))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "You should declare the types explicitly."))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(The current limit is"))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_2[8][3] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 59U << 1)) | (MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_6[0])),
    ((MR_Box) (check_hlds__typecheck__typecheck_event_call_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_6[0])),
    ((MR_Box) (check_hlds__typecheck__typecheck_call_pred_id_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_4[3])),
    ((MR_Box) (check_hlds__typecheck__convert_cons_defn_5_p_1_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_4[4])),
    ((MR_Box) (check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_4[5])),
    ((MR_Box) (check_hlds__typecheck__typecheck_goal_expr_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_6[0])),
    ((MR_Box) (check_hlds__typecheck__typecheck_clause_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_4[3])),
    ((MR_Box) (check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_95_91_51_93_95_48_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_3[16][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 1 */
  {
    (MR_Box) (((MR_Unsigned) 1U << 1))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row 4 */
  {
    (MR_Box) ((MR_Unsigned) 6U)
  },
  /* row 5 */
  {
    (MR_Box) ((MR_Unsigned) 8U)
  },
  /* row 6 */
  {
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 7 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 8 */
  {
    (MR_Box) ((MR_Unsigned) 5U)
  },
  /* row 9 */
  {
    (MR_Box) ((MR_Unsigned) 7U)
  },
  /* row 10 */
  {
    (MR_Box) ((MR_Unsigned) 9U)
  },
  /* row 11 */
  {
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row 12 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "tuple"))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_4[8][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_goal_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_goal_type_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_5[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typecheck__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_6[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_7[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_field_access_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0)),
    ((MR_Box) (&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_10[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_foreign_proc_impl_0)),
    ((MR_Box) (&check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0))
  },
};


static /* final */ const struct check_hlds__typecheck__vector_common_type_8_0_s check_hlds__typecheck_vector_common_8[4] = {
  /* row 0 */
  {
    (MR_String) "",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "apply",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "impure_apply",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "semipure_apply",
    (MR_Integer) 3
  },
};

static /* final */ const struct check_hlds__typecheck__vector_common_type_9_0_s check_hlds__typecheck_vector_common_9[5] = {
  /* row 0 */
  {
    (MR_String) "file",
    (MR_String) "string"
  },
  /* row 1 */
  {
    (MR_String) "grade",
    (MR_String) "string"
  },
  /* row 2 */
  {
    (MR_String) "line",
    (MR_String) "int"
  },
  /* row 3 */
  {
    (MR_String) "module",
    (MR_String) "string"
  },
  /* row 4 */
  {
    (MR_String) "pred",
    (MR_String) "string"
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_0 = {
  (MR_String) "flip_constraints_for_new",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_1 = {
  (MR_String) "flip_constraints_for_field_set",
  INT32_C(1)
};

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_2 = {
  (MR_String) "do_not_flip_constraints",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_cons_constraints_action_0[3] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_0,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_1,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_2
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_cons_constraints_action_0[3] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_2,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_1,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_0
};

static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_constraints_action_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_constraints_action_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck____Unify____cons_constraints_action_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____cons_constraints_action_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "cons_constraints_action",
  {     check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_cons_constraints_action_0 },
  {     check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_cons_constraints_action_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_constraints_action_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_cons_type_assign_0_0[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_cons_type_assign_0_0 = {
  (MR_String) "cons_type_assign",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck__check_hlds__typecheck__field_types_cons_type_assign_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_cons_type_assign_0_0[1] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_cons_type_assign_0_0
};

static const MR_DuPtagLayout check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_cons_type_assign_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_cons_type_assign_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_cons_type_assign_0[1] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_cons_type_assign_0_0
};

static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_type_assign_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_assign_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck____Unify____cons_type_assign_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____cons_type_assign_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "cons_type_assign",
  {     check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_cons_type_assign_0 },
  {     check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_cons_type_assign_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_type_assign_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__list__ti_list_1check_hlds__typecheck__type_ctor_info_cons_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_assign_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_assign_set_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__typecheck____Unify____cons_type_assign_set_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____cons_type_assign_set_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "cons_type_assign_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__typecheck__list__ti_list_1check_hlds__typecheck__type_ctor_info_cons_type_assign_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_0[1] = {
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_0 = {
  (MR_String) "ok",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_1[1] = {
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_cons_error_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_1 = {
  (MR_String) "error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_0[1] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_0
};

static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_1[1] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_1
};

static const MR_DuPtagLayout check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_maybe_cons_type_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_maybe_cons_type_info_0[2] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_1,
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_0
};

static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_maybe_cons_type_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck____Unify____maybe_cons_type_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____maybe_cons_type_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "maybe_cons_type_info",
  {     check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_maybe_cons_type_info_0 },
  {     check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_maybe_cons_type_info_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__typecheck__check_hlds__typecheck__functor_number_map_maybe_cons_type_info_0
};

static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_need_typecheck_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString check_hlds__typecheck__check_hlds__typecheck__field_names_maybe_need_typecheck_0_0[2] = {
  (MR_String) "notc_contains_errors",
  (MR_String) "notc_changed"
};

static const MR_DuArgLocn check_hlds__typecheck__check_hlds__typecheck__field_locns_maybe_need_typecheck_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_need_typecheck_0_0 = {
  (MR_String) "do_not_need_typecheck",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_need_typecheck_0_0,
  check_hlds__typecheck__check_hlds__typecheck__field_names_maybe_need_typecheck_0_0,
  check_hlds__typecheck__check_hlds__typecheck__field_locns_maybe_need_typecheck_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_need_typecheck_0_1 = {
  (MR_String) "do_need_typecheck",
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

static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_need_typecheck_0_0[1] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_need_typecheck_0_1
};

static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_need_typecheck_0_1[1] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_need_typecheck_0_0
};

static const MR_DuPtagLayout check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_maybe_need_typecheck_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_need_typecheck_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_need_typecheck_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_maybe_need_typecheck_0[2] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_need_typecheck_0_1,
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_need_typecheck_0_0
};

static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_maybe_need_typecheck_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_need_typecheck_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck____Unify____maybe_need_typecheck_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____maybe_need_typecheck_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "maybe_need_typecheck",
  {     check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_maybe_need_typecheck_0 },
  {     check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_maybe_need_typecheck_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__typecheck__check_hlds__typecheck__functor_number_map_maybe_need_typecheck_0
};

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0 = {
  (MR_String) "clause_only",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1 = {
  (MR_String) "whole_pred",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_stuff_to_check_0[2] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_stuff_to_check_0[2] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1
};

static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_stuff_to_check_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_stuff_to_check_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck____Unify____stuff_to_check_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____stuff_to_check_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "stuff_to_check",
  {     check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_stuff_to_check_0 },
  {     check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_stuff_to_check_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__typecheck__check_hlds__typecheck__functor_number_map_stuff_to_check_0
};

static MR_Word MR_CALL 
check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3459__2_1_f_0(
  MR_Word LambdaHeadVar__1_42)
{
  {
    MR_Word LambdaHeadVar__2_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 1))));

    return LambdaHeadVar__2_43;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3459__1_1_f_0(
  MR_Word LambdaHeadVar__1_42)
{
  {
    MR_Word LambdaHeadVar__2_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_42, (MR_Integer) 1))));

    return LambdaHeadVar__2_43;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_expr__1491__1_2_p_0(
  MR_Word GoalType_96,
  MR_Word HeadVar__2_161)
{
  {
    MR_bool succeeded = (GoalType_96 == HeadVar__2_161);

    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_predicate_if_stub__541__1_2_p_0(
  MR_Word STATE_VARIABLE_Specs_49_49,
  MR_Word HeadVar__2_60)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[1]), ((MR_Box) (STATE_VARIABLE_Specs_49_49)), ((MR_Box) (HeadVar__2_60)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__construct_type_inference_message__293__1_2_p_0(
  MR_Word ModuleInfo_5,
  MR_Word LambdaHeadVar__1_53)
{
  {
    MR_bool succeeded;
    MR_Word OtherPredInfo_33;
    MR_Word OtherPredMarkers_34;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, LambdaHeadVar__1_53, &OtherPredInfo_33);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(OtherPredInfo_33, &OtherPredMarkers_34);
    succeeded = hlds__hlds_pred__check_marker_2_p_0(OtherPredMarkers_34, (MR_Integer) 2);
    succeeded = !(succeeded);
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0(
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
check_hlds__typecheck____Unify____stuff_to_check_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck____Compare____maybe_need_typecheck_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word SubResult1_6;
      MR_Integer Var_19 = (MR_Integer) (Var_18);
      MR_Integer Var_20 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_19 < Var_20);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_19 > Var_20);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Integer Var_21 = (MR_Integer) (Var_17);
        MR_Integer Var_22 = (MR_Integer) (ArgY2_8);

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

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_need_typecheck_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_8 == CastX_7);
    }
    else
    {
      MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY2_6;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
        succeeded = (ArgX1_3 == ArgY1_4);
        if (succeeded)
          succeeded = (ArgX2_5 == ArgY2_6);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

        check_hlds__typecheck_errors____Compare____cons_error_0_0(HeadVar__1_1, Var_16, ArgY1_11);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));
      MR_Word Var_17 = (MR_Word) ((MR_Word) (HeadVar__2_2));

      check_hlds__typecheck_info____Compare____cons_type_info_0_0(HeadVar__1_1, Var_17, ArgY1_5);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = check_hlds__typecheck_errors____Unify____cons_error_0_0(ArgX1_5, ArgY1_6);
      }
    }
    else
    {
      MR_Word ArgX1_3 = (MR_Word) ((MR_Word) (HeadVar__1_1));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
        succeeded = check_hlds__typecheck_info____Unify____cons_type_info_0_0(ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
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
      MR_Word SubResult1_6;

      check_hlds__type_assign____Compare____type_assign_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        parse_tree__prog_data____Compare____mer_type_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = check_hlds__type_assign____Unify____type_assign_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&check_hlds__typecheck_scalar_common_1[6]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0(
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
check_hlds__typecheck____Unify____cons_constraints_action_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13 = (MR_Word) (&check_hlds__typecheck_scalar_common_1[2]);
    (env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded = mercury__map__contains_2_p_0((env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13, (env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13, (env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TVarRenaming_4, ((MR_Box) ((env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__Var_12)));
    if ((env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded)
      check_hlds__typecheck__rename_constraint_3_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__commit_0) == 0)
      {
        parse_tree__prog_type__type_list_contains_var_2_p_0((env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__ArgTypes0_9, &(env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__Var_12, check_hlds__typecheck__rename_constraint_3_p_0_2, env_ptr);
        (env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0(
  MR_Word TVarRenaming_4,
  MR_Word Constraint0_5,
  MR_Word * Constraint_6)
{
  {
    struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s env;

    (env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__TVarRenaming_4 = TVarRenaming_4;
    {
      MR_Word Ids_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint0_5, (MR_Integer) 0))));
      MR_Word ClassName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint0_5, (MR_Integer) 1))));
      MR_Word ArgTypes_11;

      (env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__ArgTypes0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint0_5, (MR_Integer) 2))));
      check_hlds__typecheck__rename_constraint_3_p_0_3(&env);
      if ((env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded)
      {
        parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0((env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__TVarRenaming_4, (env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__ArgTypes0_9, &ArgTypes_11);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *Constraint_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Ids_7));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ClassName_8));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ArgTypes_11));
        }
        (env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded = MR_TRUE;
      }
      return (env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__project_constraint_2_p_0(
  MR_Word CallTVars_3,
  MR_Word Constraint_4)
{
  {
    MR_bool succeeded;
    MR_Word TypesToCheck_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_4, (MR_Integer) 2))));
    MR_Word TVarsToCheck0_8;
    MR_Word TVarsToCheck_9;
    MR_Word RelevantTVars_10;

    parse_tree__prog_type__type_vars_list_2_p_0(TypesToCheck_7, &TVarsToCheck0_8);
    mercury__set__list_to_set_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), TVarsToCheck0_8, &TVarsToCheck_9);
    mercury__set__intersect_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), TVarsToCheck_9, CallTVars_3, &RelevantTVars_10);
    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), RelevantTVars_10);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(
  MR_Word Info_9,
  MR_Word GoalId_10,
  MR_Word FuncName_11,
  MR_Integer Arity_12,
  MR_Word AccessType_13,
  MR_Word FieldName_14,
  MR_Word FieldDefn_15,
  MR_Word * ConsTypeInfo_16)
{
  {
    MR_bool succeeded;
    MR_Word OrigExistTVars_17;
    MR_Word MaybeFunctorConsTypeInfo_18;
    MR_Word TypeCtor_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldDefn_15, (MR_Integer) 2))));
    MR_Word ConsId_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldDefn_15, (MR_Integer) 3))));
    MR_Word TypeModule_36;
    MR_Word ModuleInfo_39;
    MR_Word PredTable_40;
    MR_String UnqualFuncName_41;
    MR_Word IsFieldAccessFunc_42;
    MR_Word ConsTable_45;
    MR_Word ConsDefn_46;
    MR_Word MaybeExistConstraints_47;
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_33, (MR_Integer) 0))));

    succeeded = ((MR_tag((MR_Word) Var_53)) == (MR_Integer) 1);
    if (succeeded)
    {
      TypeModule_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_53, (MR_Integer) 0))));
      check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(Info_9, &ModuleInfo_39);
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_39, &PredTable_40);
      UnqualFuncName_41 = mdbcomp__sym_name__unqualify_name_1_f_0(FuncName_11);
      check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_p_0(Info_9, &IsFieldAccessFunc_42);
      if ((IsFieldAccessFunc_42 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word PredIds_43;

        hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(PredTable_40, (MR_Integer) 0, TypeModule_36, UnqualFuncName_41, Arity_12, &PredIds_43);
        succeeded = (PredIds_43 == (MR_Word) ((MR_Unsigned) 0U));
      }
      else
        succeeded = MR_TRUE;
      if (succeeded)
      {
        hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_39, &ConsTable_45);
        hlds__hlds_cons__lookup_cons_table_of_type_ctor_4_p_0(ConsTable_45, TypeCtor_33, ConsId_34, &ConsDefn_46);
        MaybeExistConstraints_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_46, (MR_Integer) 4))));
        if ((MaybeExistConstraints_47 == (MR_Word) ((MR_Unsigned) 0U)))
          OrigExistTVars_17 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word ExistConstraints_48 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_47), (MR_Integer) 1));

          OrigExistTVars_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_48, (MR_Integer) 0))));
        }
        switch (AccessType_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_95_91_51_93_95_48_5_p_0(Info_9, GoalId_10, ConsDefn_46, &MaybeFunctorConsTypeInfo_18);
            break;
          case (MR_Integer) 1:
            {
              check_hlds__typecheck__convert_cons_defn_5_p_1(Info_9, GoalId_10, (MR_Integer) 1, ConsDefn_46, &MaybeFunctorConsTypeInfo_18);
            }
            break;
        }
        if (((MR_tag((MR_Word) MaybeFunctorConsTypeInfo_18)) == (MR_Integer) 1))
          *ConsTypeInfo_16 = MaybeFunctorConsTypeInfo_18;
        else
        {
          MR_Word FunctorConsTypeInfo_19 = (MR_Word) ((MR_Word) (MaybeFunctorConsTypeInfo_18));
          MR_Word ModuleInfo_20;
          MR_Word ClassTable_21;

          check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(Info_9, &ModuleInfo_20);
          hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_20, &ClassTable_21);
          check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0(ClassTable_21, AccessType_13, FieldName_14, FieldDefn_15, FunctorConsTypeInfo_19, OrigExistTVars_17, ConsTypeInfo_16);
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_95_91_51_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_43;

    conv0_LambdaHeadVar__2_43 = check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3459__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_43));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_95_91_51_93_95_48_5_p_0(
  MR_Word Info_6,
  MR_Word GoalId_7,
  MR_Word HLDS_ConsDefn_9,
  MR_Word * ConsTypeInfo_10)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HLDS_ConsDefn_9, (MR_Integer) 0))));
    MR_Word ConsTypeVarSet_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HLDS_ConsDefn_9, (MR_Integer) 1))));
    MR_Word ConsTypeParams_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HLDS_ConsDefn_9, (MR_Integer) 2))));
    MR_Word ConsTypeKinds_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HLDS_ConsDefn_9, (MR_Integer) 3))));
    MR_Word MaybeExistConstraints_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HLDS_ConsDefn_9, (MR_Integer) 4))));
    MR_Word Args_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HLDS_ConsDefn_9, (MR_Integer) 5))));
    MR_Word ArgTypes_18;
    MR_Word TypeTable_20;
    MR_Word TypeDefn_21;
    MR_Word Body_22;
    MR_Word PredId_23;
    MR_Word ModuleInfo_24;
    MR_Word PredInfo_25;
    MR_Word PredStatus_26;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_63;
    MR_Word Var_46;

    ArgTypes_18 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__typecheck_scalar_common_2[7]), Args_16);
    check_hlds__typecheck_info__typecheck_info_get_type_table_2_p_0(Info_6, &TypeTable_20);
    hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_20, TypeCtor_11, &TypeDefn_21);
    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_21, &Body_22);
    check_hlds__typecheck_info__typecheck_info_get_pred_id_2_p_0(Info_6, &PredId_23);
    check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(Info_6, &ModuleInfo_24);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_24, PredId_23, &PredInfo_25);
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_25, &PredStatus_26);
    succeeded = ((MR_tag((MR_Word) Body_22)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body_22, (MR_Integer) 3))));
      succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_45 = (MR_Word) ((MR_Unsigned) 8U);
        hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_25, &Var_63);
        succeeded = hlds__hlds_pred____Unify____goal_type_0_0(Var_45, Var_63);
        succeeded = !(succeeded);
        if (succeeded)
        {
          succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_25);
          succeeded = !(succeeded);
          if (succeeded)
          {
            Var_46 = (MR_Word) (PredStatus_26);
            succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_47;

      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (TypeCtor_11));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (TypeDefn_21));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *ConsTypeInfo_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_47));
      }
    }
    else
    {
      MR_Word TypeStatus_28;
      MR_Word Var_48;
      MR_Word Var_49;

      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_21, &TypeStatus_28);
      Var_48 = (MR_Word) (TypeStatus_28);
      succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 4U));
      if (succeeded)
      {
        succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_25);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_49 = (MR_Word) (PredStatus_26);
          succeeded = (Var_49 != (MR_Word) ((MR_Unsigned) 0U));
        }
      }
      if (succeeded)
        *ConsTypeInfo_10 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_3[13]));
      else
      {
        MR_Word ConsTypeArgs_29;
        MR_Word ConsType_30;
        MR_Word ExistProgConstraints_33;
        MR_Word ProgConstraints_37;
        MR_Word ExistQVars_38;
        MR_Word ClassTable_39;
        MR_Word Constraints_40;
        MR_Word Var_53;
        MR_Word Var_54;

        parse_tree__prog_type__var_list_to_type_list_3_p_0(ConsTypeKinds_14, ConsTypeParams_13, &ConsTypeArgs_29);
        parse_tree__prog_type__construct_type_3_p_0(TypeCtor_11, ConsTypeArgs_29, &ConsType_30);
        if ((MaybeExistConstraints_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          ExistQVars_38 = (MR_Word) ((MR_Unsigned) 0U);
          ExistProgConstraints_33 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word ExistConstraints_34 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_15), (MR_Integer) 1));

          ExistQVars_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_34, (MR_Integer) 0))));
          ExistProgConstraints_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_34, (MR_Integer) 1))));
        }
        {
          ProgConstraints_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ProgConstraints_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), ProgConstraints_37, 1) = ((MR_Box) (ExistProgConstraints_33));
        }
        hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_24, &ClassTable_39);
        hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_39, ConsTypeVarSet_12, GoalId_7, ProgConstraints_37, &Constraints_40);
        {
          Var_54 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (TypeCtor_11));
        }
        {
          Var_53 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (ConsTypeVarSet_12));
          MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (ExistQVars_38));
          MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) (ConsType_30));
          MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (ArgTypes_18));
          MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) (Constraints_40));
          MR_hl_field(MR_mktag(0), Var_53, 5) = ((MR_Box) (Var_54));
        }
        *ConsTypeInfo_10 = (MR_Word) ((MR_Word) (Var_53));
      }
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0(
  MR_Word ClassTable_8,
  MR_Word AccessType_9,
  MR_Word FieldName_10,
  MR_Word FieldDefn_11,
  MR_Word FunctorConsTypeInfo_12,
  MR_Word OrigExistTVars_13,
  MR_Word * ConsTypeInfo_14)
{
  {
    MR_bool succeeded;
    MR_Word TVarSet0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctorConsTypeInfo_12, (MR_Integer) 0))));
    MR_Word ExistQVars_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctorConsTypeInfo_12, (MR_Integer) 1))));
    MR_Word FunctorType_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctorConsTypeInfo_12, (MR_Integer) 2))));
    MR_Word ConsArgTypes_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctorConsTypeInfo_12, (MR_Integer) 3))));
    MR_Word Constraints0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctorConsTypeInfo_12, (MR_Integer) 4))));
    MR_Word Source0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctorConsTypeInfo_12, (MR_Integer) 5))));
    MR_Word SourceType_22;
    MR_Integer FieldNumber_32;
    MR_Word FieldType_33;
    MR_Box conv0_FieldType_33;

    switch (MR_tag((MR_Word) Source0_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        SourceType_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Source0_20, (MR_Integer) 0))));
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.convert_field_access_cons_type_info\'/7", (MR_String) "not type");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.convert_field_access_cons_type_info\'/7", (MR_String) "not type");
            return;
          }
        }
        break;
    }
    FieldNumber_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), FieldDefn_11, (MR_Integer) 4))));
    mercury__list__det_index1_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ConsArgTypes_18, FieldNumber_32, &conv0_FieldType_33);
    FieldType_33 = ((MR_Word) (conv0_FieldType_33));
    switch (AccessType_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Source_34;
          MR_Word ArgTypes_36;
          MR_Word Var_73;

          {
            Source_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Source_34, 0) = ((MR_Box) (SourceType_22));
          }
          {
            ArgTypes_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgTypes_36, 0) = ((MR_Box) (FunctorType_17));
            MR_hl_field(MR_mktag(1), ArgTypes_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_73 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (TVarSet0_15));
            MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (ExistQVars_16));
            MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) (FieldType_33));
            MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (ArgTypes_36));
            MR_hl_field(MR_mktag(0), Var_73, 4) = ((MR_Box) (Constraints0_19));
            MR_hl_field(MR_mktag(0), Var_73, 5) = ((MR_Box) (Source_34));
          }
          *ConsTypeInfo_14 = (MR_Word) ((MR_Word) (Var_73));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TVarsInField_39;
          MR_Word Source_94;

          {
            Source_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Source_94, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Source_94, 1) = ((MR_Box) (SourceType_22));
          }
          parse_tree__prog_type__type_vars_2_p_0(FieldType_33, &TVarsInField_39);
          if ((TVarsInField_39 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_69;
            MR_Word Var_71;
            MR_Word ArgTypes_75;

            {
              Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (FieldType_33));
              MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ArgTypes_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ArgTypes_75, 0) = ((MR_Box) (FunctorType_17));
              MR_hl_field(MR_mktag(1), ArgTypes_75, 1) = ((MR_Box) (Var_69));
            }
            {
              Var_71 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (TVarSet0_15));
              MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (ExistQVars_16));
              MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) (FunctorType_17));
              MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (ArgTypes_75));
              MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) (Constraints0_19));
              MR_hl_field(MR_mktag(0), Var_71, 5) = ((MR_Box) (Source_94));
            }
            *ConsTypeInfo_14 = (MR_Word) ((MR_Word) (Var_71));
          }
          else
          {
            MR_Word ArgTypesWithoutField_42;
            MR_Word TVarsInOtherArgs_43;
            MR_Word ExistQVarsInFieldAndOthers_44;
            MR_Word Var_57;
            MR_Word Var_58;
            MR_Word Var_59;
            MR_Word Var_60;
            MR_Word Var_61;

            Var_57 = parse_tree__builtin_lib_types__int_type_0_f_0();
            mercury__list__det_replace_nth_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ConsArgTypes_18, FieldNumber_32, ((MR_Box) (Var_57)), &ArgTypesWithoutField_42);
            parse_tree__prog_type__type_vars_list_2_p_0(ArgTypesWithoutField_42, &TVarsInOtherArgs_43);
            Var_58 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), TVarsInField_39);
            Var_60 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), TVarsInOtherArgs_43);
            Var_61 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), OrigExistTVars_13);
            Var_59 = mercury__set__intersect_2_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), Var_60, Var_61);
            mercury__set__intersect_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), Var_58, Var_59, &ExistQVarsInFieldAndOthers_44);
            succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), ExistQVarsInFieldAndOthers_44);
            if (succeeded)
            {
              MR_Word TVarsOnlyInField0_45;
              MR_Word TVarsOnlyInField_46;
              MR_Integer NumNewTVars_47;
              MR_Word NewTVars_48;
              MR_Word TVarRenaming_49;
              MR_Word RenamedFieldType_50;
              MR_Word CallTVars0_52;
              MR_Word CallTVars_53;
              MR_Word Var_62;
              MR_Word Var_63;
              MR_Word Var_65;
              MR_Word Var_67;
              MR_Word RetType_78;
              MR_Word ArgTypes_79;
              MR_Word TVarSet_80;
              MR_Word Constraints_81;

              mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), TVarsInField_39, TVarsInOtherArgs_43, &TVarsOnlyInField0_45);
              mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), TVarsOnlyInField0_45, &TVarsOnlyInField_46);
              mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), TVarsOnlyInField_46, &NumNewTVars_47);
              mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), NumNewTVars_47, &NewTVars_48, TVarSet0_15, &TVarSet_80);
              mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), (MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), TVarsOnlyInField_46, NewTVars_48, &TVarRenaming_49);
              parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(TVarRenaming_49, FieldType_33, &RenamedFieldType_50);
              parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(TVarRenaming_49, FunctorType_17, &RetType_78);
              {
                Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (FieldType_33));
                MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (FunctorType_17));
                MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_63));
              }
              parse_tree__prog_type__type_vars_list_2_p_0(Var_62, &CallTVars0_52);
              mercury__set__list_to_set_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), CallTVars0_52, &CallTVars_53);
              check_hlds__typecheck__project_and_rename_constraints_6_p_0(ClassTable_8, TVarSet_80, CallTVars_53, TVarRenaming_49, Constraints0_19, &Constraints_81);
              {
                Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (RenamedFieldType_50));
                MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                ArgTypes_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ArgTypes_79, 0) = ((MR_Box) (FunctorType_17));
                MR_hl_field(MR_mktag(1), ArgTypes_79, 1) = ((MR_Box) (Var_65));
              }
              {
                Var_67 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (TVarSet_80));
                MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (ExistQVars_16));
                MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) (RetType_78));
                MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (ArgTypes_79));
                MR_hl_field(MR_mktag(0), Var_67, 4) = ((MR_Box) (Constraints_81));
                MR_hl_field(MR_mktag(0), Var_67, 5) = ((MR_Box) (Source_94));
              }
              *ConsTypeInfo_14 = (MR_Word) ((MR_Word) (Var_67));
            }
            else
            {
              MR_Word ExistQVarsInFieldAndOthers1_54;
              MR_Word Var_68;

              mercury__set__to_sorted_list_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), ExistQVarsInFieldAndOthers_44, &ExistQVarsInFieldAndOthers1_54);
              {
                Var_68 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_68, 0) = ((MR_Box) (FieldName_10));
                MR_hl_field(MR_mktag(2), Var_68, 1) = ((MR_Box) (FieldDefn_11));
                MR_hl_field(MR_mktag(2), Var_68, 2) = ((MR_Box) (TVarSet0_15));
                MR_hl_field(MR_mktag(2), Var_68, 3) = ((MR_Box) (ExistQVarsInFieldAndOthers1_54));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *ConsTypeInfo_14 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_68));
              }
            }
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_Constraint_6;

    succeeded = check_hlds__typecheck__rename_constraint_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Constraint_6);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_Constraint_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__typecheck__project_constraint_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0(
  MR_Word ClassTable_7,
  MR_Word TVarSet_8,
  MR_Word CallTVars_9,
  MR_Word TVarRenaming_10,
  MR_Word STATE_VARIABLE_Constraints_0_20,
  MR_Word * STATE_VARIABLE_Constraints_21)
{
  {
    MR_bool succeeded;
    MR_Word Unproven0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_20, (MR_Integer) 0))));
    MR_Word Assumed_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_20, (MR_Integer) 1))));
    MR_Word Redundant0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_20, (MR_Integer) 2))));
    MR_Word Ancestors_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Constraints_0_20, (MR_Integer) 3))));
    MR_Word NewUnproven0_16;
    MR_Word NewUnproven_17;
    MR_Word Redundant_18;
    MR_Word Unproven_19;
    MR_Word Var_22;
    MR_Word Var_23;

    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_4[7]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (check_hlds__typecheck__project_and_rename_constraints_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (CallTVars_9));
    }
    mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_22, Unproven0_12, &NewUnproven0_16);
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (check_hlds__typecheck__project_and_rename_constraints_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (TVarRenaming_10));
    }
    mercury__list__filter_map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_23, NewUnproven0_16, &NewUnproven_17);
    hlds__hlds_class__update_redundant_constraints_5_p_0(ClassTable_7, TVarSet_8, NewUnproven_17, Redundant0_14, &Redundant_18);
    mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), NewUnproven_17, Unproven0_12, &Unproven_19);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Constraints_21 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Unproven_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Assumed_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Redundant_18));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Ancestors_15));
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__type_assign_check_functor_type_builtin_5_p_0(
  MR_Word ConsType_6,
  MR_Word Y_7,
  MR_Word TypeAssign0_8,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_15,
  MR_Word * STATE_VARIABLE_TypeAssignSet_16)
{
  {
    MR_bool succeeded;
    MR_Word VarTypes0_10;
    MR_Word MaybeTypeY_11;
    MR_Word VarTypes_12;

    check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign0_8, &VarTypes0_10);
    hlds__vartypes__search_insert_var_type_5_p_0(Y_7, ConsType_6, &MaybeTypeY_11, VarTypes0_10, &VarTypes_12);
    if ((MaybeTypeY_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word TypeAssign_19;

      check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_12, TypeAssign0_8, &TypeAssign_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_TypeAssignSet_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeAssign_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_15));
      }
    }
    else
    {
      MR_Word TypeY_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeY_11, (MR_Integer) 0))));
      MR_Word TypeAssign_14;
      MR_Word HeadTypeParams_24;
      MR_Word TypeBindings0_25;
      MR_Word TypeBindings_26;

      check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign0_8, &HeadTypeParams_24);
      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign0_8, &TypeBindings0_25);
      succeeded = parse_tree__prog_type__type_unify_5_p_0(ConsType_6, TypeY_13, HeadTypeParams_24, TypeBindings0_25, &TypeBindings_26);
      if (succeeded)
      {
        check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_26, TypeAssign0_8, &TypeAssign_14);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_TypeAssignSet_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeAssign_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_15));
        }
      else
        *STATE_VARIABLE_TypeAssignSet_16 = STATE_VARIABLE_TypeAssignSet_0_15;
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_stm_atomic_type_6_p_0(
  MR_Word Context_7,
  MR_Word Var_8,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_11,
  MR_Word * STATE_VARIABLE_TypeAssignSet_12,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  {
    MR_bool succeeded;
    MR_Word Var_16;
    MR_Word TypeAssignSet1_28;

    Var_16 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
    check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(STATE_VARIABLE_TypeAssignSet_0_11, Var_8, Var_16, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_28);
    succeeded = (TypeAssignSet1_28 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (STATE_VARIABLE_TypeAssignSet_0_11 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word SpecAndMaybeActualExpected_31;
      MR_Word Spec_32;

      *STATE_VARIABLE_TypeAssignSet_12 = STATE_VARIABLE_TypeAssignSet_0_11;
      SpecAndMaybeActualExpected_31 = check_hlds__typecheck_errors__report_error_var_6_f_0(STATE_VARIABLE_Info_0_13, (MR_Word) ((MR_Unsigned) 0U), Context_7, Var_8, Var_16, STATE_VARIABLE_TypeAssignSet_0_11);
      Spec_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecAndMaybeActualExpected_31, (MR_Integer) 0))));
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_32, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
    }
    else
    {
      *STATE_VARIABLE_TypeAssignSet_12 = TypeAssignSet1_28;
      *STATE_VARIABLE_Info_14 = STATE_VARIABLE_Info_0_13;
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s *) (env_ptr_arg);

    {
      (env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), ((MR_Box) ((env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__TVar_7)), (env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__HeadTypeVars_3);
      (env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = !((env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded);
      if ((env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded)
        check_hlds__typecheck__is_head_class_constraint_2_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__commit_0) == 0)
      {
        parse_tree__prog_type__type_list_contains_var_2_p_0((env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__ArgTypes_6, &(env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__TVar_7, check_hlds__typecheck__is_head_class_constraint_2_p_0_2, env_ptr);
        (env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0(
  MR_Word HeadTypeVars_3,
  MR_Word Constraint_4)
{
  {
    struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s env;

    (env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__HeadTypeVars_3 = HeadTypeVars_3;
    {
      MR_Word _ClassName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_4, (MR_Integer) 0))));

      (env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__ArgTypes_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_4, (MR_Integer) 1))));
      check_hlds__typecheck__is_head_class_constraint_2_p_0_3(&env);
      (env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = !((env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded);
      return (env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded;
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__check_mention_existq_var_6_p_0(
  MR_Word Context_7,
  MR_Word TypeVarSet_8,
  MR_Word Impl_9,
  MR_Word TVar_10,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_bool succeeded;
    MR_String Name_12;
    MR_String VarName_13;

    mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVarSet_8, TVar_10, &Name_12);
    VarName_13 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_for_", Name_12);
    succeeded = hlds__goal_util__foreign_proc_uses_variable_2_p_0(Impl_9, VarName_13);
    if (succeeded)
      *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
    else
    {
      MR_Word ClauseContext_14;
      MR_Word Spec_15;

      check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_16, &ClauseContext_14);
      Spec_15 = check_hlds__typecheck_errors__report_missing_tvar_in_foreign_code_3_f_0(ClauseContext_14, Context_7, VarName_13);
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_15, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__check_existq_clause_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_17;

    check_hlds__typecheck__check_mention_existq_var_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_17);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_17));
  }
}

static void MR_CALL 
check_hlds__typecheck__check_existq_clause_5_p_0(
  MR_Word TypeVarSet_6,
  MR_Word ExistQVars_7,
  MR_Word Clause_8,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  {
    MR_bool succeeded;
    MR_Word Goal_10;
    MR_Word Impl_17;
    MR_Word Var_22;

    Goal_10 = hlds__hlds_clauses__clause_body_1_f_0(Clause_8);
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) Var_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_22, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Impl_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_22, (MR_Integer) 7))));
      {
        MR_Word Context_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause_8, (MR_Integer) 3))));
        MR_Word Var_23;
        MR_Box conv1_STATE_VARIABLE_Info_21;

        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_10[1]));
          MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (check_hlds__typecheck__check_existq_clause_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Context_19));
          MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (TypeVarSet_6));
          MR_hl_field(MR_mktag(0), Var_23, 5) = ((MR_Box) (Impl_17));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), Var_23, ExistQVars_7, ((MR_Box) (STATE_VARIABLE_Info_0_20)), &conv1_STATE_VARIABLE_Info_21);
        *STATE_VARIABLE_Info_21 = ((MR_Word) (conv1_STATE_VARIABLE_Info_21));
      }
    }
    else
      *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
  }
}

void MR_CALL 
check_hlds__typecheck__typecheck_module_5_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18,
  MR_Word * Specs_7,
  MR_Word * FoundSyntaxError_8,
  MR_Word * ExceededIterationLimit_9)
{
  {
    MR_Word Globals_10;
    MR_Integer MaxIterations_11;
    MR_Word OrigValidPredIdSet_12;
    MR_Word OrigValidPredIds_13;
    MR_Word FinalValidPredIdSet_14;
    MR_Word CheckSpecs_15;
    MR_Word InferSpecs_16;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_17, &Globals_10);
    libs__globals__lookup_int_option_3_p_0(Globals_10, (MR_Integer) 197, &MaxIterations_11);
    hlds__hlds_module__module_info_get_valid_pred_id_set_2_p_0(STATE_VARIABLE_ModuleInfo_0_17, &OrigValidPredIdSet_12);
    OrigValidPredIds_13 = mercury__set_tree234__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), OrigValidPredIdSet_12);
    check_hlds__typecheck__typecheck_to_fixpoint_10_p_0((MR_Integer) 1, MaxIterations_11, STATE_VARIABLE_ModuleInfo_0_17, STATE_VARIABLE_ModuleInfo_18, OrigValidPredIds_13, OrigValidPredIdSet_12, &FinalValidPredIdSet_14, &CheckSpecs_15, FoundSyntaxError_8, ExceededIterationLimit_9);
    check_hlds__typecheck__construct_type_inference_messages_5_p_0(*STATE_VARIABLE_ModuleInfo_18, FinalValidPredIdSet_14, OrigValidPredIds_13, (MR_Word) ((MR_Unsigned) 0U), &InferSpecs_16);
    *Specs_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), InferSpecs_16, CheckSpecs_15);
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_to_fixpoint_10_p_0(
  MR_Integer Iteration_11,
  MR_Integer MaxIterations_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_33,
  MR_Word * STATE_VARIABLE_ModuleInfo_34,
  MR_Word OrigValidPredIds_14,
  MR_Word OrigValidPredIdSet_15,
  MR_Word * FinalValidPredIdSet_16,
  MR_Word * Specs_17,
  MR_Word * FoundSyntaxError_18,
  MR_Word * ExceededIterationLimit_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word PredMap0_20;
    MR_Word PredIdsInfos0_21;
    MR_Word PredIdsInfos_22;
    MR_Word NewlyInvalidPredIds_23;
    MR_Word CurSpecs_24;
    MR_Word CurFoundSyntaxError_25;
    MR_Word Changed_26;
    MR_Word PredMap_27;
    MR_Word NewValidPredIdSet_28;
    MR_Word Globals_29;
    MR_Word STATE_VARIABLE_ModuleInfo_39_39;
    MR_Word STATE_VARIABLE_ModuleInfo_40_40;

    // setup for model_det tailcalls optimized into a loop
    ;
    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_33, &PredMap0_20);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredMap0_20, &PredIdsInfos0_21);
    check_hlds__typecheck__typecheck_module_one_iteration_12_p_0(STATE_VARIABLE_ModuleInfo_0_33, OrigValidPredIdSet_15, PredIdsInfos0_21, &PredIdsInfos_22, (MR_Word) ((MR_Unsigned) 0U), &NewlyInvalidPredIds_23, (MR_Word) ((MR_Unsigned) 0U), &CurSpecs_24, (MR_Integer) 0, &CurFoundSyntaxError_25, (MR_Integer) 0, &Changed_26);
    mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdsInfos_22, &PredMap_27);
    hlds__hlds_module__module_info_set_preds_3_p_0(PredMap_27, STATE_VARIABLE_ModuleInfo_0_33, &STATE_VARIABLE_ModuleInfo_39_39);
    hlds__hlds_module__module_info_make_pred_ids_invalid_3_p_0(NewlyInvalidPredIds_23, STATE_VARIABLE_ModuleInfo_39_39, &STATE_VARIABLE_ModuleInfo_40_40);
    hlds__hlds_module__module_info_get_valid_pred_id_set_2_p_0(STATE_VARIABLE_ModuleInfo_40_40, &NewValidPredIdSet_28);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_40_40, &Globals_29);
    succeeded = (Changed_26 == (MR_Integer) 0);
    if (!(succeeded))
    {
      MR_Word Var_41;

      Var_41 = parse_tree__error_util__contains_errors_2_f_0(Globals_29, CurSpecs_24);
      succeeded = (Var_41 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      *FinalValidPredIdSet_16 = NewValidPredIdSet_28;
      *Specs_17 = CurSpecs_24;
      *FoundSyntaxError_18 = CurFoundSyntaxError_25;
      *ExceededIterationLimit_19 = (MR_Integer) 0;
      *STATE_VARIABLE_ModuleInfo_34 = STATE_VARIABLE_ModuleInfo_40_40;
    }
    else
    {
      MR_Word DebugTypes_30;

      libs__globals__lookup_bool_option_3_p_0(Globals_29, (MR_Integer) 76, &DebugTypes_30);
      switch (DebugTypes_30) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ProgressSpecs_31;

            check_hlds__typecheck__construct_type_inference_messages_5_p_0(STATE_VARIABLE_ModuleInfo_40_40, NewValidPredIdSet_28, OrigValidPredIds_14, (MR_Word) ((MR_Unsigned) 0U), &ProgressSpecs_31);
            parse_tree__error_util__write_error_specs_ignore_4_p_0(ProgressSpecs_31, Globals_29);
          }
          break;
      }
      succeeded = (Iteration_11 < MaxIterations_12);
      if (succeeded)
      {
        MR_Integer Var_46 = (MR_Integer) ((MR_Unsigned) Iteration_11 + (MR_Unsigned) 1);
        MR_Integer next_value_of_Iteration_11 = Var_46;
        MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_33 = STATE_VARIABLE_ModuleInfo_40_40;

        // direct tailcall eliminated
        ;
        Iteration_11 = next_value_of_Iteration_11;
        STATE_VARIABLE_ModuleInfo_0_33 = next_value_of_STATE_VARIABLE_ModuleInfo_0_33;
        continue;
      }
      else
      {
        MR_Word Var_49;
        MR_Word Pieces_55;
        MR_Word Msg_56;
        MR_Word Var_59;
        MR_Word Var_62;
        MR_Word Var_65;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Word Var_91;

        *FinalValidPredIdSet_16 = NewValidPredIdSet_28;
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (MaxIterations_12));
        }
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
          MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[15])));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[25])));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
        }
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[24])));
          MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
        }
        {
          Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[23])));
          MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
        }
        {
          Pieces_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[22])));
          MR_hl_field(MR_mktag(1), Pieces_55, 1) = ((MR_Box) (Var_59));
        }
        {
          Var_87 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (Pieces_55));
        }
        {
          Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Var_87));
          MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Msg_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Msg_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Msg_56, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(1), Msg_56, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), Msg_56, 3) = ((MR_Box) (Var_86));
        }
        {
          Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Msg_56));
          MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_49 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) (Var_91));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Specs_17 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_49));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *FoundSyntaxError_18 = CurFoundSyntaxError_25;
        *ExceededIterationLimit_19 = (MR_Integer) 1;
        *STATE_VARIABLE_ModuleInfo_34 = STATE_VARIABLE_ModuleInfo_40_40;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_module_one_iteration_12_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ValidPredIdSet_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_NewlyInvalidPredIds_0_5,
  MR_Word * STATE_VARIABLE_NewlyInvalidPredIds_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8,
  MR_Word STATE_VARIABLE_FoundSyntaxError_0_9,
  MR_Word * STATE_VARIABLE_FoundSyntaxError_10,
  MR_Word STATE_VARIABLE_Changed_0_11,
  MR_Word * STATE_VARIABLE_Changed_12)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Changed_12 = STATE_VARIABLE_Changed_0_11;
      *STATE_VARIABLE_FoundSyntaxError_10 = STATE_VARIABLE_FoundSyntaxError_0_9;
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_NewlyInvalidPredIds_6 = STATE_VARIABLE_NewlyInvalidPredIds_0_5;
    }
    else
    {
      MR_Word HeadPredIdInfo0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word TailPredIdsInfos0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word PredId_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadPredIdInfo0_29, (MR_Integer) 0))));
      MR_Word PredInfo0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadPredIdInfo0_29, (MR_Integer) 1))));

      succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_37);
      if (!(succeeded))
      {
        succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ValidPredIdSet_2, ((MR_Box) (PredId_36)));
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word * AddrTailPredIdsInfos_69;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadPredIdInfo0_29));
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
        }
        AddrTailPredIdsInfos_69 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_4, (MR_Integer) 1)));
        check_hlds__typecheck__LCMCpr_typecheck_module_one_iteration_1_12_p_0(ModuleInfo_1, ValidPredIdSet_2, TailPredIdsInfos0_30, AddrTailPredIdsInfos_69, STATE_VARIABLE_NewlyInvalidPredIds_0_5, STATE_VARIABLE_NewlyInvalidPredIds_6, STATE_VARIABLE_Specs_0_7, STATE_VARIABLE_Specs_8, STATE_VARIABLE_FoundSyntaxError_0_9, STATE_VARIABLE_FoundSyntaxError_10, STATE_VARIABLE_Changed_0_11, STATE_VARIABLE_Changed_12);
      }
      else
      {
        MR_Word PredInfo_40;
        MR_Word PredSpecs_41;
        MR_Word PredSyntaxError_42;
        MR_Word ContainsErrors_43;
        MR_Word PredChanged_44;
        MR_Word STATE_VARIABLE_NewlyInvalidPredIds_57_57;
        MR_Word STATE_VARIABLE_Specs_58_58;
        MR_Word STATE_VARIABLE_FoundSyntaxError_59_59;
        MR_Word STATE_VARIABLE_Changed_60_60;
        MR_Word HeadPredIdInfo_65;
        MR_Word * AddrTailPredIdsInfos_70;

        check_hlds__typecheck__typecheck_pred_if_needed_8_p_0(ModuleInfo_1, PredId_36, PredInfo0_37, &PredInfo_40, &PredSpecs_41, &PredSyntaxError_42, &ContainsErrors_43, &PredChanged_44);
        switch (ContainsErrors_43) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_NewlyInvalidPredIds_57_57 = STATE_VARIABLE_NewlyInvalidPredIds_0_5;
            break;
          case (MR_Integer) 1:
            {
              STATE_VARIABLE_NewlyInvalidPredIds_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_NewlyInvalidPredIds_57_57, 0) = ((MR_Box) (PredId_36));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_NewlyInvalidPredIds_57_57, 1) = ((MR_Box) (STATE_VARIABLE_NewlyInvalidPredIds_0_5));
            }
            break;
        }
        {
          HeadPredIdInfo_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadPredIdInfo_65, 0) = ((MR_Box) (PredId_36));
          MR_hl_field(MR_mktag(0), HeadPredIdInfo_65, 1) = ((MR_Box) (PredInfo_40));
        }
        STATE_VARIABLE_Specs_58_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), PredSpecs_41, STATE_VARIABLE_Specs_0_7);
        mercury__bool__or_3_p_0(PredSyntaxError_42, STATE_VARIABLE_FoundSyntaxError_0_9, &STATE_VARIABLE_FoundSyntaxError_59_59);
        mercury__bool__or_3_p_0(PredChanged_44, STATE_VARIABLE_Changed_0_11, &STATE_VARIABLE_Changed_60_60);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadPredIdInfo_65));
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
        }
        AddrTailPredIdsInfos_70 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_4, (MR_Integer) 1)));
        check_hlds__typecheck__LCMCpr_typecheck_module_one_iteration_1_12_p_0(ModuleInfo_1, ValidPredIdSet_2, TailPredIdsInfos0_30, AddrTailPredIdsInfos_70, STATE_VARIABLE_NewlyInvalidPredIds_57_57, STATE_VARIABLE_NewlyInvalidPredIds_6, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_8, STATE_VARIABLE_FoundSyntaxError_59_59, STATE_VARIABLE_FoundSyntaxError_10, STATE_VARIABLE_Changed_60_60, STATE_VARIABLE_Changed_12);
      }
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_module_one_iteration_1_12_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ValidPredIdSet_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_71,
  MR_Word STATE_VARIABLE_NewlyInvalidPredIds_0_5,
  MR_Word * STATE_VARIABLE_NewlyInvalidPredIds_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8,
  MR_Word STATE_VARIABLE_FoundSyntaxError_0_9,
  MR_Word * STATE_VARIABLE_FoundSyntaxError_10,
  MR_Word STATE_VARIABLE_Changed_0_11,
  MR_Word * STATE_VARIABLE_Changed_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_71 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Changed_12 = STATE_VARIABLE_Changed_0_11;
      *STATE_VARIABLE_FoundSyntaxError_10 = STATE_VARIABLE_FoundSyntaxError_0_9;
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_NewlyInvalidPredIds_6 = STATE_VARIABLE_NewlyInvalidPredIds_0_5;
    }
    else
    {
      MR_Word HeadPredIdInfo0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word TailPredIdsInfos0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word PredId_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadPredIdInfo0_29, (MR_Integer) 0))));
      MR_Word PredInfo0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadPredIdInfo0_29, (MR_Integer) 1))));

      succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_37);
      if (!(succeeded))
      {
        succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ValidPredIdSet_2, ((MR_Box) (PredId_36)));
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word * AddrTailPredIdsInfos_69;
        MR_Word HeadVar__4_72;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word * next_value_of_AddrOfHeadVar__4_71;

        {
          HeadVar__4_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__4_72, 0) = ((MR_Box) (HeadPredIdInfo0_29));
          MR_hl_field(MR_mktag(1), HeadVar__4_72, 1) = NULL;
        }
        AddrTailPredIdsInfos_69 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_72, (MR_Integer) 1)));
        *AddrOfHeadVar__4_71 = HeadVar__4_72;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = TailPredIdsInfos0_30;
        next_value_of_AddrOfHeadVar__4_71 = AddrTailPredIdsInfos_69;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        AddrOfHeadVar__4_71 = next_value_of_AddrOfHeadVar__4_71;
        continue;
      }
      else
      {
        MR_Word PredInfo_40;
        MR_Word PredSpecs_41;
        MR_Word PredSyntaxError_42;
        MR_Word ContainsErrors_43;
        MR_Word PredChanged_44;
        MR_Word STATE_VARIABLE_NewlyInvalidPredIds_57_57;
        MR_Word STATE_VARIABLE_Specs_58_58;
        MR_Word STATE_VARIABLE_FoundSyntaxError_59_59;
        MR_Word STATE_VARIABLE_Changed_60_60;
        MR_Word HeadPredIdInfo_65;
        MR_Word * AddrTailPredIdsInfos_70;
        MR_Word HeadVar__4_75;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word * next_value_of_AddrOfHeadVar__4_71;
        MR_Word next_value_of_STATE_VARIABLE_NewlyInvalidPredIds_0_5;
        MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;
        MR_Word next_value_of_STATE_VARIABLE_FoundSyntaxError_0_9;
        MR_Word next_value_of_STATE_VARIABLE_Changed_0_11;

        check_hlds__typecheck__typecheck_pred_if_needed_8_p_0(ModuleInfo_1, PredId_36, PredInfo0_37, &PredInfo_40, &PredSpecs_41, &PredSyntaxError_42, &ContainsErrors_43, &PredChanged_44);
        switch (ContainsErrors_43) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_NewlyInvalidPredIds_57_57 = STATE_VARIABLE_NewlyInvalidPredIds_0_5;
            break;
          case (MR_Integer) 1:
            {
              STATE_VARIABLE_NewlyInvalidPredIds_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_NewlyInvalidPredIds_57_57, 0) = ((MR_Box) (PredId_36));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_NewlyInvalidPredIds_57_57, 1) = ((MR_Box) (STATE_VARIABLE_NewlyInvalidPredIds_0_5));
            }
            break;
        }
        {
          HeadPredIdInfo_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadPredIdInfo_65, 0) = ((MR_Box) (PredId_36));
          MR_hl_field(MR_mktag(0), HeadPredIdInfo_65, 1) = ((MR_Box) (PredInfo_40));
        }
        STATE_VARIABLE_Specs_58_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), PredSpecs_41, STATE_VARIABLE_Specs_0_7);
        mercury__bool__or_3_p_0(PredSyntaxError_42, STATE_VARIABLE_FoundSyntaxError_0_9, &STATE_VARIABLE_FoundSyntaxError_59_59);
        mercury__bool__or_3_p_0(PredChanged_44, STATE_VARIABLE_Changed_0_11, &STATE_VARIABLE_Changed_60_60);
        {
          HeadVar__4_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__4_75, 0) = ((MR_Box) (HeadPredIdInfo_65));
          MR_hl_field(MR_mktag(1), HeadVar__4_75, 1) = NULL;
        }
        AddrTailPredIdsInfos_70 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_75, (MR_Integer) 1)));
        *AddrOfHeadVar__4_71 = HeadVar__4_75;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = TailPredIdsInfos0_30;
        next_value_of_AddrOfHeadVar__4_71 = AddrTailPredIdsInfos_70;
        next_value_of_STATE_VARIABLE_NewlyInvalidPredIds_0_5 = STATE_VARIABLE_NewlyInvalidPredIds_57_57;
        next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_58_58;
        next_value_of_STATE_VARIABLE_FoundSyntaxError_0_9 = STATE_VARIABLE_FoundSyntaxError_59_59;
        next_value_of_STATE_VARIABLE_Changed_0_11 = STATE_VARIABLE_Changed_60_60;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        AddrOfHeadVar__4_71 = next_value_of_AddrOfHeadVar__4_71;
        STATE_VARIABLE_NewlyInvalidPredIds_0_5 = next_value_of_STATE_VARIABLE_NewlyInvalidPredIds_0_5;
        STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
        STATE_VARIABLE_FoundSyntaxError_0_9 = next_value_of_STATE_VARIABLE_FoundSyntaxError_0_9;
        STATE_VARIABLE_Changed_0_11 = next_value_of_STATE_VARIABLE_Changed_0_11;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_pred_if_needed_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_PredInfo_0_20,
  MR_Word * STATE_VARIABLE_PredInfo_21,
  MR_Word * STATE_VARIABLE_Specs_22,
  MR_Word * FoundSyntaxError_13,
  MR_Word * ContainsErrors_14,
  MR_Word * Changed_15)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_PredInfo_23_23;
    MR_Word ClausesInfo0_34;
    MR_Word ClausesRep0_35;
    MR_Word IsEmpty_37;
    MR_Word _ItemNumbers_36;

    {
      MR_Word Origin_42;
      MR_Word SpecialPredId_43;
      MR_Word TypeCtor_44;
      MR_Word TypeTable_45;
      MR_Word TypeDefn_46;
      MR_Word Body_47;
      MR_Word TypeCtorInfo_12_49;
      MR_Word Var_48;

      succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(STATE_VARIABLE_PredInfo_0_20);
      if (succeeded)
      {
        hlds__hlds_pred__pred_info_get_origin_2_p_0(STATE_VARIABLE_PredInfo_0_20, &Origin_42);
        succeeded = ((MR_tag((MR_Word) Origin_42)) == (MR_Integer) 1);
        if (succeeded)
        {
          SpecialPredId_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Origin_42, (MR_Integer) 0))) & (MR_Integer) 3);
          TypeCtor_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Origin_42, (MR_Integer) 1))));
          Var_48 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
          TypeCtorInfo_12_49 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
          succeeded = mercury__list__member_2_p_0(TypeCtorInfo_12_49, ((MR_Box) (TypeCtor_44)), Var_48);
          succeeded = !(succeeded);
          if (succeeded)
          {
            hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_9, &TypeTable_45);
            hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_45, TypeCtor_44, &TypeDefn_46);
            hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_46, &Body_47);
            succeeded = hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(ModuleInfo_9, SpecialPredId_43, Body_47);
          }
        }
        succeeded = !(succeeded);
      }
    }
    if (!(succeeded))
    {
      MR_Word Markers_33;
      MR_Word Var_38;

      succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(STATE_VARIABLE_PredInfo_0_20);
      if (succeeded)
      {
        hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_0_20, &Markers_33);
        Var_38 = (MR_Integer) 1;
        succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_33, Var_38);
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
    {
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_20, &ClausesInfo0_34);
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo0_34, &ClausesRep0_35, &_ItemNumbers_36);
      IsEmpty_37 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(ClausesRep0_35);
      switch (IsEmpty_37) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_PredInfo_23_23 = STATE_VARIABLE_PredInfo_0_20;
          break;
        case (MR_Integer) 1:
          hlds__hlds_pred__pred_info_mark_as_external_2_p_0(STATE_VARIABLE_PredInfo_0_20, &STATE_VARIABLE_PredInfo_23_23);
          break;
      }
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *STATE_VARIABLE_PredInfo_21 = STATE_VARIABLE_PredInfo_23_23;
      *STATE_VARIABLE_Specs_22 = (MR_Word) ((MR_Unsigned) 0U);
      *FoundSyntaxError_13 = (MR_Integer) 0;
      *ContainsErrors_14 = (MR_Integer) 0;
      *Changed_15 = (MR_Integer) 0;
    }
    else
    {
      MR_Word ClausesInfo0_16;
      MR_Word FoundSyntaxError0_17;
      MR_Word MaybeNeedTypecheck_18;
      MR_Word STATE_VARIABLE_PredInfo_25_25;
      MR_Word STATE_VARIABLE_Specs_26_26;

      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_20, &ClausesInfo0_16);
      hlds__hlds_clauses__clauses_info_get_had_syntax_errors_2_p_0(ClausesInfo0_16, &FoundSyntaxError0_17);
      switch (FoundSyntaxError0_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *FoundSyntaxError_13 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *FoundSyntaxError_13 = (MR_Integer) 1;
          break;
      }
      check_hlds__typecheck__typecheck_predicate_if_stub_7_p_0(ModuleInfo_9, PredId_10, STATE_VARIABLE_PredInfo_0_20, &STATE_VARIABLE_PredInfo_25_25, *FoundSyntaxError_13, &STATE_VARIABLE_Specs_26_26, &MaybeNeedTypecheck_18);
      if ((MaybeNeedTypecheck_18 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Globals_19;

        check_hlds__typecheck__do_typecheck_pred_7_p_0(ModuleInfo_9, PredId_10, STATE_VARIABLE_PredInfo_25_25, STATE_VARIABLE_PredInfo_21, STATE_VARIABLE_Specs_26_26, STATE_VARIABLE_Specs_22, Changed_15);
        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_9, &Globals_19);
        *ContainsErrors_14 = parse_tree__error_util__contains_errors_2_f_0(Globals_19, *STATE_VARIABLE_Specs_22);
      }
      else
      {
        *ContainsErrors_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeNeedTypecheck_18, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        *Changed_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeNeedTypecheck_18, (MR_Integer) 0))) & (MR_Integer) 1);
        *STATE_VARIABLE_PredInfo_21 = STATE_VARIABLE_PredInfo_25_25;
        *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_26_26;
      }
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_21;

    check_hlds__typecheck__check_existq_clause_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_21);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_21));
  }
}

static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Word STATE_VARIABLE_PredInfo_0_69,
  MR_Word * STATE_VARIABLE_PredInfo_70,
  MR_Word STATE_VARIABLE_Specs_0_71,
  MR_Word * STATE_VARIABLE_Specs_72,
  MR_Word * Changed_12)
{
  {
    MR_bool succeeded;
    MR_Word ClausesRep0_17;
    MR_Word ItemNumbers_18;
    MR_Word HeadVars_19;
    MR_Word ClauseVarSet_20;
    MR_Word ExplicitVarTypes0_21;
    MR_Word PredStatus_22;
    MR_Word TypeVarSet0_23;
    MR_Word ExistQVars0_25;
    MR_Word ArgTypes0_26;
    MR_Word Markers0_27;
    MR_Word Inferring_28;
    MR_Word PredConstraints_30;
    MR_Word ClassTable_32;
    MR_Word Constraints_33;
    MR_Word IsFieldAccessFunction_34;
    MR_Word PredMarkers_35;
    MR_Word Clauses0_36;
    MR_Word Clauses_37;
    MR_Word Context_38;
    MR_Word TypeVarSet_39;
    MR_Word InferredVarTypes0_40;
    MR_Word InferredTypeConstraints0_41;
    MR_Word ConstraintProofMap_42;
    MR_Word ConstraintMap_43;
    MR_Word TVarRenaming_44;
    MR_Word ExistTypeRenaming_45;
    MR_Word InferredVarTypes_46;
    MR_Word ExplicitVarTypes1_47;
    MR_Word ExplicitVarTypes_50;
    MR_Word ClausesRep_51;
    MR_Word ArgTypes_52;
    MR_Word ArgTypeVars_53;
    MR_Word InferredTypeConstraints_54;
    MR_Word UnprovenBodyConstraints_55;
    MR_Word STATE_VARIABLE_ClausesInfo_73_73;
    MR_Word STATE_VARIABLE_ExternalTypeParams_78_78;
    MR_Word STATE_VARIABLE_TypeAssignSet_89_89;
    MR_Word STATE_VARIABLE_Info_90_90;
    MR_Word STATE_VARIABLE_TypeAssignSet_91_91;
    MR_Word STATE_VARIABLE_Info_92_92;
    MR_Word STATE_VARIABLE_TypeAssignSet_93_93;
    MR_Word STATE_VARIABLE_Info_94_94;
    MR_Word STATE_VARIABLE_Info_96_96;
    MR_Word STATE_VARIABLE_ExternalTypeParams_97_97;
    MR_Word STATE_VARIABLE_ClausesInfo_98_98;
    MR_Word STATE_VARIABLE_ClausesInfo_99_99;
    MR_Word STATE_VARIABLE_ClausesInfo_100_100;
    MR_Word STATE_VARIABLE_PredInfo_101_101;
    MR_Word STATE_VARIABLE_PredInfo_102_102;
    MR_Word STATE_VARIABLE_PredInfo_103_103;
    MR_Word STATE_VARIABLE_PredInfo_104_104;
    MR_Word STATE_VARIABLE_PredInfo_105_105;
    MR_Word STATE_VARIABLE_Info_108_108;
    MR_Word _ArgTypeVarSet_24;

    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_69, &STATE_VARIABLE_ClausesInfo_73_73);
    hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(STATE_VARIABLE_ClausesInfo_73_73, &ClausesRep0_17, &ItemNumbers_18);
    hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(STATE_VARIABLE_ClausesInfo_73_73, &HeadVars_19);
    hlds__hlds_clauses__clauses_info_get_varset_2_p_0(STATE_VARIABLE_ClausesInfo_73_73, &ClauseVarSet_20);
    hlds__hlds_clauses__clauses_info_get_explicit_vartypes_2_p_0(STATE_VARIABLE_ClausesInfo_73_73, &ExplicitVarTypes0_21);
    hlds__hlds_pred__pred_info_get_status_2_p_0(STATE_VARIABLE_PredInfo_0_69, &PredStatus_22);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_PredInfo_0_69, &TypeVarSet0_23);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(STATE_VARIABLE_PredInfo_0_69, &_ArgTypeVarSet_24, &ExistQVars0_25, &ArgTypes0_26);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_0_69, &Markers0_27);
    succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers0_27, (MR_Integer) 2);
    if (succeeded)
    {
      Inferring_28 = (MR_Integer) 1;
      hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Inferring type of ", PredId_9, ModuleInfo_8);
      STATE_VARIABLE_ExternalTypeParams_78_78 = (MR_Word) ((MR_Unsigned) 0U);
      PredConstraints_30 = (MR_Word) (&check_hlds__typecheck_scalar_common_1[21]);
    }
    else
    {
      MR_Word UnivTVars_31;
      MR_Word STATE_VARIABLE_ExternalTypeParams_84_84;
      MR_Word Var_85;
      MR_Word STATE_VARIABLE_ExternalTypeParams_86_86;
      MR_Word STATE_VARIABLE_ExternalTypeParams_87_87;

      Inferring_28 = (MR_Integer) 0;
      hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Type-checking ", PredId_9, ModuleInfo_8);
      parse_tree__prog_type__type_vars_list_2_p_0(ArgTypes0_26, &STATE_VARIABLE_ExternalTypeParams_84_84);
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(STATE_VARIABLE_PredInfo_0_69, &PredConstraints_30);
      Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredConstraints_30, (MR_Integer) 0))));
      parse_tree__prog_type__constraint_list_get_tvars_2_p_0(Var_85, &UnivTVars_31);
      STATE_VARIABLE_ExternalTypeParams_86_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), UnivTVars_31, STATE_VARIABLE_ExternalTypeParams_84_84);
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), STATE_VARIABLE_ExternalTypeParams_86_86, &STATE_VARIABLE_ExternalTypeParams_87_87);
      mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), STATE_VARIABLE_ExternalTypeParams_87_87, ExistQVars0_25, &STATE_VARIABLE_ExternalTypeParams_78_78);
    }
    hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_8, &ClassTable_32);
    hlds__hlds_class__make_head_hlds_constraints_4_p_0(ClassTable_32, TypeVarSet0_23, PredConstraints_30, &Constraints_33);
    succeeded = hlds__hlds_pred__pred_info_is_field_access_function_2_p_0(ModuleInfo_8, STATE_VARIABLE_PredInfo_0_69);
    if (succeeded)
      IsFieldAccessFunction_34 = (MR_Integer) 1;
    else
      IsFieldAccessFunction_34 = (MR_Integer) 0;
    hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_0_69, &PredMarkers_35);
    check_hlds__type_assign__type_assign_set_init_5_p_0(TypeVarSet0_23, ExplicitVarTypes0_21, STATE_VARIABLE_ExternalTypeParams_78_78, Constraints_33, &STATE_VARIABLE_TypeAssignSet_89_89);
    check_hlds__typecheck_info__typecheck_info_init_8_p_0(ModuleInfo_8, PredId_9, IsFieldAccessFunction_34, ClauseVarSet_20, PredStatus_22, PredMarkers_35, STATE_VARIABLE_Specs_0_71, &STATE_VARIABLE_Info_90_90);
    hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(ClausesRep0_17, &Clauses0_36);
    check_hlds__typecheck__typecheck_clause_list_8_p_0(HeadVars_19, ArgTypes0_26, Clauses0_36, &Clauses_37, STATE_VARIABLE_TypeAssignSet_89_89, &STATE_VARIABLE_TypeAssignSet_91_91, STATE_VARIABLE_Info_90_90, &STATE_VARIABLE_Info_92_92);
    hlds__hlds_pred__pred_info_get_context_2_p_0(STATE_VARIABLE_PredInfo_0_69, &Context_38);
    check_hlds__typeclasses__perform_context_reduction_5_p_0(Context_38, STATE_VARIABLE_TypeAssignSet_91_91, &STATE_VARIABLE_TypeAssignSet_93_93, STATE_VARIABLE_Info_92_92, &STATE_VARIABLE_Info_94_94);
    check_hlds__typecheck__typecheck_check_for_ambiguity_6_p_0(Context_38, (MR_Integer) 1, HeadVars_19, STATE_VARIABLE_TypeAssignSet_93_93, STATE_VARIABLE_Info_94_94, &STATE_VARIABLE_Info_96_96);
    check_hlds__type_assign__type_assign_set_get_final_info_12_p_0(STATE_VARIABLE_TypeAssignSet_93_93, STATE_VARIABLE_ExternalTypeParams_78_78, ExistQVars0_25, ExplicitVarTypes0_21, &TypeVarSet_39, &STATE_VARIABLE_ExternalTypeParams_97_97, &InferredVarTypes0_40, &InferredTypeConstraints0_41, &ConstraintProofMap_42, &ConstraintMap_43, &TVarRenaming_44, &ExistTypeRenaming_45);
    hlds__vartypes__vartypes_optimize_2_p_0(InferredVarTypes0_40, &InferredVarTypes_46);
    hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(InferredVarTypes_46, STATE_VARIABLE_ClausesInfo_73_73, &STATE_VARIABLE_ClausesInfo_98_98);
    if ((ExistQVars0_25 == (MR_Word) ((MR_Unsigned) 0U)))
      ExplicitVarTypes1_47 = ExplicitVarTypes0_21;
    else
      hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0(ExistTypeRenaming_45, ExplicitVarTypes0_21, &ExplicitVarTypes1_47);
    hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0(TVarRenaming_44, ExplicitVarTypes1_47, &ExplicitVarTypes_50);
    hlds__hlds_clauses__clauses_info_set_explicit_vartypes_3_p_0(ExplicitVarTypes_50, STATE_VARIABLE_ClausesInfo_98_98, &STATE_VARIABLE_ClausesInfo_99_99);
    hlds__hlds_clauses__set_clause_list_2_p_0(Clauses_37, &ClausesRep_51);
    hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(ClausesRep_51, ItemNumbers_18, STATE_VARIABLE_ClausesInfo_99_99, &STATE_VARIABLE_ClausesInfo_100_100);
    hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(STATE_VARIABLE_ClausesInfo_100_100, STATE_VARIABLE_PredInfo_0_69, &STATE_VARIABLE_PredInfo_101_101);
    hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVarSet_39, STATE_VARIABLE_PredInfo_101_101, &STATE_VARIABLE_PredInfo_102_102);
    hlds__hlds_pred__pred_info_set_constraint_proof_map_3_p_0(ConstraintProofMap_42, STATE_VARIABLE_PredInfo_102_102, &STATE_VARIABLE_PredInfo_103_103);
    hlds__hlds_pred__pred_info_set_constraint_map_3_p_0(ConstraintMap_43, STATE_VARIABLE_PredInfo_103_103, &STATE_VARIABLE_PredInfo_104_104);
    hlds__vartypes__lookup_var_types_3_p_0(InferredVarTypes_46, HeadVars_19, &ArgTypes_52);
    parse_tree__prog_type__type_vars_list_2_p_0(ArgTypes_52, &ArgTypeVars_53);
    check_hlds__typecheck__restrict_to_head_vars_4_p_0(InferredTypeConstraints0_41, ArgTypeVars_53, &InferredTypeConstraints_54, &UnprovenBodyConstraints_55);
    hlds__hlds_pred__pred_info_set_unproven_body_constraints_3_p_0(UnprovenBodyConstraints_55, STATE_VARIABLE_PredInfo_104_104, &STATE_VARIABLE_PredInfo_105_105);
    switch (Inferring_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Origin0_59;
          MR_Word ExistQVars1_60;
          MR_Word ArgTypes1_61;
          MR_Word PredConstraints1_62;
          MR_Word Origin1_63;
          MR_Word RenamedOldArgTypes_66;
          MR_Word RenamedOldConstraints_67;
          MR_Word Origin_68;
          MR_Word STATE_VARIABLE_PredInfo_106_106;
          MR_Word STATE_VARIABLE_PredInfo_109_109;
          MR_Word STATE_VARIABLE_PredInfo_110_110;
          MR_Word ExistQVars_117;

          hlds__hlds_pred__pred_info_set_external_type_params_3_p_0(STATE_VARIABLE_ExternalTypeParams_97_97, STATE_VARIABLE_PredInfo_105_105, &STATE_VARIABLE_PredInfo_106_106);
          hlds__hlds_pred__pred_info_get_origin_2_p_0(STATE_VARIABLE_PredInfo_106_106, &Origin0_59);
          if ((ExistQVars0_25 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            ExistQVars1_60 = (MR_Word) ((MR_Unsigned) 0U);
            ArgTypes1_61 = ArgTypes0_26;
            PredConstraints1_62 = PredConstraints_30;
            Origin1_63 = Origin0_59;
            STATE_VARIABLE_Info_108_108 = STATE_VARIABLE_Info_96_96;
          }
          else
          {
            MR_Word Var_107;
            MR_Box conv1_STATE_VARIABLE_Info_108_108;

            {
              Var_107 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_107, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_5[2]));
              MR_hl_field(MR_mktag(0), Var_107, 1) = ((MR_Box) (check_hlds__typecheck__do_typecheck_pred_7_p_0_1));
              MR_hl_field(MR_mktag(0), Var_107, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_107, 3) = ((MR_Box) (TypeVarSet_39));
              MR_hl_field(MR_mktag(0), Var_107, 4) = ((MR_Box) (ExistQVars0_25));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), Var_107, Clauses_37, ((MR_Box) (STATE_VARIABLE_Info_96_96)), &conv1_STATE_VARIABLE_Info_108_108);
            STATE_VARIABLE_Info_108_108 = ((MR_Word) (conv1_STATE_VARIABLE_Info_108_108));
            mercury__term__apply_renaming_in_vars_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), ExistTypeRenaming_45, ExistQVars0_25, &ExistQVars1_60);
            parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(ExistTypeRenaming_45, ArgTypes0_26, &ArgTypes1_61);
            parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(ExistTypeRenaming_45, PredConstraints_30, &PredConstraints1_62);
            check_hlds__typecheck__rename_instance_method_constraints_3_p_0(ExistTypeRenaming_45, Origin0_59, &Origin1_63);
          }
          mercury__term__apply_renaming_in_vars_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarRenaming_44, ExistQVars1_60, &ExistQVars_117);
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(TVarRenaming_44, ArgTypes1_61, &RenamedOldArgTypes_66);
          parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(TVarRenaming_44, PredConstraints1_62, &RenamedOldConstraints_67);
          check_hlds__typecheck__rename_instance_method_constraints_3_p_0(TVarRenaming_44, Origin1_63, &Origin_68);
          hlds__hlds_pred__pred_info_set_arg_types_5_p_0(TypeVarSet_39, ExistQVars_117, RenamedOldArgTypes_66, STATE_VARIABLE_PredInfo_106_106, &STATE_VARIABLE_PredInfo_109_109);
          hlds__hlds_pred__pred_info_set_class_context_3_p_0(RenamedOldConstraints_67, STATE_VARIABLE_PredInfo_109_109, &STATE_VARIABLE_PredInfo_110_110);
          hlds__hlds_pred__pred_info_set_origin_3_p_0(Origin_68, STATE_VARIABLE_PredInfo_110_110, STATE_VARIABLE_PredInfo_70);
          *Changed_12 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ExistQVars_56;
          MR_Word OldTypeConstraints_57;
          MR_Word STATE_VARIABLE_ExternalTypeParams_112_112;
          MR_Word STATE_VARIABLE_PredInfo_113_113;
          MR_Word STATE_VARIABLE_PredInfo_114_114;
          MR_Word TVarKindMap_58;

          check_hlds__typecheck__infer_existential_types_4_p_0(ArgTypeVars_53, &ExistQVars_56, STATE_VARIABLE_ExternalTypeParams_97_97, &STATE_VARIABLE_ExternalTypeParams_112_112);
          hlds__hlds_pred__pred_info_set_external_type_params_3_p_0(STATE_VARIABLE_ExternalTypeParams_112_112, STATE_VARIABLE_PredInfo_105_105, &STATE_VARIABLE_PredInfo_113_113);
          hlds__hlds_pred__pred_info_set_arg_types_5_p_0(TypeVarSet_39, ExistQVars_56, ArgTypes_52, STATE_VARIABLE_PredInfo_113_113, &STATE_VARIABLE_PredInfo_114_114);
          hlds__hlds_pred__pred_info_get_class_context_2_p_0(STATE_VARIABLE_PredInfo_114_114, &OldTypeConstraints_57);
          hlds__hlds_pred__pred_info_set_class_context_3_p_0(InferredTypeConstraints_54, STATE_VARIABLE_PredInfo_114_114, STATE_VARIABLE_PredInfo_70);
          hlds__hlds_pred__pred_info_get_tvar_kind_map_2_p_0(*STATE_VARIABLE_PredInfo_70, &TVarKindMap_58);
          succeeded = check_hlds__typecheck__argtypes_identical_up_to_renaming_7_p_0(TVarKindMap_58, ExistQVars0_25, ArgTypes0_26, OldTypeConstraints_57, ExistQVars_56, ArgTypes_52, InferredTypeConstraints_54);
          if (succeeded)
            *Changed_12 = (MR_Integer) 0;
          else
            *Changed_12 = (MR_Integer) 1;
          STATE_VARIABLE_Info_108_108 = STATE_VARIABLE_Info_96_96;
        }
        break;
    }
    check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(STATE_VARIABLE_Info_108_108, STATE_VARIABLE_Specs_72);
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_clause_list_8_p_0(
  MR_Word HeadVars_1,
  MR_Word ArgTypes_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_5,
  MR_Word * STATE_VARIABLE_TypeAssignSet_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
    *STATE_VARIABLE_TypeAssignSet_6 = STATE_VARIABLE_TypeAssignSet_0_5;
  }
  else
  {
    MR_Word Clause0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Clauses0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Clause_21;
    MR_Word STATE_VARIABLE_TypeAssignSet_29_29;
    MR_Word STATE_VARIABLE_Info_30_30;
    MR_Word * AddrClauses_33;

    check_hlds__typecheck__typecheck_clause_8_p_0(HeadVars_1, ArgTypes_2, Clause0_19, &Clause_21, STATE_VARIABLE_TypeAssignSet_0_5, &STATE_VARIABLE_TypeAssignSet_29_29, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_30_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Clause_21));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrClauses_33 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_4, (MR_Integer) 1)));
    check_hlds__typecheck__LCMCpr_typecheck_clause_list_1_8_p_0(HeadVars_1, ArgTypes_2, Clauses0_20, AddrClauses_33, STATE_VARIABLE_TypeAssignSet_29_29, STATE_VARIABLE_TypeAssignSet_6, STATE_VARIABLE_Info_30_30, STATE_VARIABLE_Info_8);
  }
}

static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_clause_list_1_8_p_0(
  MR_Word HeadVars_1,
  MR_Word ArgTypes_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_34,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_5,
  MR_Word * STATE_VARIABLE_TypeAssignSet_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_34 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
      *STATE_VARIABLE_TypeAssignSet_6 = STATE_VARIABLE_TypeAssignSet_0_5;
    }
    else
    {
      MR_Word Clause0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Clauses0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Clause_21;
      MR_Word STATE_VARIABLE_TypeAssignSet_29_29;
      MR_Word STATE_VARIABLE_Info_30_30;
      MR_Word * AddrClauses_33;
      MR_Word HeadVar__4_35;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_34;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_7;

      check_hlds__typecheck__typecheck_clause_8_p_0(HeadVars_1, ArgTypes_2, Clause0_19, &Clause_21, STATE_VARIABLE_TypeAssignSet_0_5, &STATE_VARIABLE_TypeAssignSet_29_29, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_30_30);
      {
        HeadVar__4_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_35, 0) = ((MR_Box) (Clause_21));
        MR_hl_field(MR_mktag(1), HeadVar__4_35, 1) = NULL;
      }
      AddrClauses_33 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_35, (MR_Integer) 1)));
      *AddrOfHeadVar__4_34 = HeadVar__4_35;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Clauses0_20;
      next_value_of_AddrOfHeadVar__4_34 = AddrClauses_33;
      next_value_of_STATE_VARIABLE_TypeAssignSet_0_5 = STATE_VARIABLE_TypeAssignSet_29_29;
      next_value_of_STATE_VARIABLE_Info_0_7 = STATE_VARIABLE_Info_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_34 = next_value_of_AddrOfHeadVar__4_34;
      STATE_VARIABLE_TypeAssignSet_0_5 = next_value_of_STATE_VARIABLE_TypeAssignSet_0_5;
      STATE_VARIABLE_Info_0_7 = next_value_of_STATE_VARIABLE_Info_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_clause_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_clause_8_p_0(
  MR_Word HeadVars_9,
  MR_Word ArgTypes_10,
  MR_Word STATE_VARIABLE_Clause_0_22,
  MR_Word * STATE_VARIABLE_Clause_23,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_24,
  MR_Word * STATE_VARIABLE_TypeAssignSet_25,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  {
    MR_bool succeeded;
    MR_Word Body0_14;
    MR_Word Context_15;
    MR_Word Body_17;
    MR_Word STATE_VARIABLE_TypeAssignSet_28_28;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Info_31_31;
    MR_Word Specs_67;
    MR_Word MaybeArgVectorTypeErrors_68;
    MR_Word ArgVectorTypeErrors_69;
    MR_Word Var_80;
    MR_Word Var_52;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;

    Body0_14 = hlds__hlds_clauses__clause_body_1_f_0(STATE_VARIABLE_Clause_0_22);
    Context_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Clause_0_22, (MR_Integer) 3))));
    check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(STATE_VARIABLE_Info_0_26, Context_15, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, HeadVars_9, ArgTypes_10, STATE_VARIABLE_TypeAssignSet_0_24, &STATE_VARIABLE_TypeAssignSet_28_28, (MR_Word) ((MR_Unsigned) 0U), &Specs_67, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_3[2])), &MaybeArgVectorTypeErrors_68);
    succeeded = (MaybeArgVectorTypeErrors_68 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgVectorTypeErrors_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgVectorTypeErrors_68, (MR_Integer) 0))));
      succeeded = (ArgVectorTypeErrors_69 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVectorTypeErrors_69, (MR_Integer) 1))));
        succeeded = (Var_80 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
    }
    if (succeeded)
    {
      MR_Word ClauseContext_73;
      MR_Word AllArgsSpec_74;

      check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_26, &ClauseContext_73);
      AllArgsSpec_74 = check_hlds__typecheck_errors__report_arg_vector_type_errors_5_f_0(ClauseContext_73, Context_15, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_TypeAssignSet_28_28, ArgVectorTypeErrors_69);
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(AllArgsSpec_74, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_29_29);
    }
    else
    {
      MR_Box conv1_STATE_VARIABLE_Info_29_29;

      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), (MR_Word) (&check_hlds__typecheck_scalar_common_2[6]), Specs_67, ((MR_Box) (STATE_VARIABLE_Info_0_26)), &conv1_STATE_VARIABLE_Info_29_29);
      STATE_VARIABLE_Info_29_29 = ((MR_Word) (conv1_STATE_VARIABLE_Info_29_29));
    }
    check_hlds__typecheck__typecheck_goal_7_p_0(Body0_14, &Body_17, Context_15, STATE_VARIABLE_TypeAssignSet_28_28, STATE_VARIABLE_TypeAssignSet_25, STATE_VARIABLE_Info_29_29, &STATE_VARIABLE_Info_31_31);
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Clause_0_22, (MR_Integer) 0))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Clause_0_22, (MR_Integer) 2))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Clause_0_22, (MR_Integer) 3))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Clause_0_22, (MR_Integer) 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Clause_23 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Body_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_56));
    }
    check_hlds__typecheck__typecheck_check_for_ambiguity_6_p_0(Context_15, (MR_Integer) 0, HeadVars_9, *STATE_VARIABLE_TypeAssignSet_25, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_27);
  }
}

static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_unification_1_10_p_0(
  MR_Word UnifyContext_11,
  MR_Word Context_12,
  MR_Word GoalId_13,
  MR_Word X_14,
  MR_Word RHS0_15,
  MR_Word * AddrOfRHS_83,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_33,
  MR_Word * STATE_VARIABLE_TypeAssignSet_34,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) RHS0_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Y_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHS0_15, (MR_Integer) 0))));
          MR_Word TypeAssignSet1_75;

          check_hlds__typecheck__type_assigns_unify_var_var_5_p_0(STATE_VARIABLE_TypeAssignSet_0_33, X_14, Y_19, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_75);
          succeeded = (TypeAssignSet1_75 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (STATE_VARIABLE_TypeAssignSet_0_33 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
            }
          }
          if (succeeded)
          {
            MR_Word ClauseContext_78;
            MR_Word Spec_79;

            *STATE_VARIABLE_TypeAssignSet_34 = STATE_VARIABLE_TypeAssignSet_0_33;
            check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_35, &ClauseContext_78);
            Spec_79 = check_hlds__typecheck_errors__report_error_unif_var_var_6_f_0(ClauseContext_78, UnifyContext_11, Context_12, X_14, Y_19, STATE_VARIABLE_TypeAssignSet_0_33);
            check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_79, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
          }
          else
          {
            *STATE_VARIABLE_TypeAssignSet_34 = TypeAssignSet1_75;
            *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_0_35;
          }
          *AddrOfRHS_83 = RHS0_15;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Functor_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS0_15, (MR_Integer) 0))));
          MR_Word Args_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS0_15, (MR_Integer) 2))));
          MR_Word STATE_VARIABLE_TypeAssignSet_41_41;
          MR_Word STATE_VARIABLE_Info_42_42;

          check_hlds__typecheck__typecheck_unify_var_functor_10_p_0(UnifyContext_11, Context_12, X_14, Functor_20, Args_22, GoalId_13, STATE_VARIABLE_TypeAssignSet_0_33, &STATE_VARIABLE_TypeAssignSet_41_41, STATE_VARIABLE_Info_0_35, &STATE_VARIABLE_Info_42_42);
          check_hlds__typeclasses__perform_context_reduction_5_p_0(Context_12, STATE_VARIABLE_TypeAssignSet_41_41, STATE_VARIABLE_TypeAssignSet_34, STATE_VARIABLE_Info_42_42, STATE_VARIABLE_Info_36);
          *AddrOfRHS_83 = RHS0_15;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Purity_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
          MR_Word PredOrFunc_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word NonLocals_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 2))));
          MR_Word Vars_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 3))));
          MR_Word Modes_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 4))));
          MR_Word Det_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 5))) & (MR_Integer) 7);
          MR_Word Goal0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 6))));
          MR_Word STATE_VARIABLE_TypeAssignSet_37_37;
          MR_Word STATE_VARIABLE_Info_38_38;
          MR_Word TypeAssignSet1_59;
          MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_15, (MR_Integer) 0)));
          MR_Word * AddrGoal_82;
          MR_Word RHS_84;

          check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_p_0(STATE_VARIABLE_TypeAssignSet_0_33, Purity_23, PredOrFunc_25, X_14, Vars_28, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_59);
          succeeded = (TypeAssignSet1_59 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (STATE_VARIABLE_TypeAssignSet_0_33 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
            }
          }
          if (succeeded)
          {
            MR_Word ClauseContext_62;
            MR_Word Spec_63;

            STATE_VARIABLE_TypeAssignSet_37_37 = STATE_VARIABLE_TypeAssignSet_0_33;
            check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_35, &ClauseContext_62);
            Spec_63 = check_hlds__typecheck_errors__report_error_lambda_var_8_f_0(ClauseContext_62, UnifyContext_11, Context_12, PredOrFunc_25, X_14, Vars_28, STATE_VARIABLE_TypeAssignSet_0_33);
            check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_63, STATE_VARIABLE_Info_0_35, &STATE_VARIABLE_Info_38_38);
          }
          else
          {
            STATE_VARIABLE_TypeAssignSet_37_37 = TypeAssignSet1_59;
            STATE_VARIABLE_Info_38_38 = STATE_VARIABLE_Info_0_35;
          }
          {
            RHS_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), RHS_84, 0) = (MR_Box) (packed_word_1);
            MR_hl_field(MR_mktag(2), RHS_84, 1) = NULL;
            MR_hl_field(MR_mktag(2), RHS_84, 2) = ((MR_Box) (NonLocals_27));
            MR_hl_field(MR_mktag(2), RHS_84, 3) = ((MR_Box) (Vars_28));
            MR_hl_field(MR_mktag(2), RHS_84, 4) = ((MR_Box) (Modes_29));
            MR_hl_field(MR_mktag(2), RHS_84, 5) = (MR_Box) ((MR_Unsigned) (Det_30));
            MR_hl_field(MR_mktag(2), RHS_84, 6) = NULL;
          }
          AddrGoal_82 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), RHS_84, (MR_Integer) 6)));
          *AddrOfRHS_83 = RHS_84;
          check_hlds__typecheck__LCMCpr_typecheck_goal_1_7_p_0(Goal0_31, AddrGoal_82, Context_12, STATE_VARIABLE_TypeAssignSet_37_37, STATE_VARIABLE_TypeAssignSet_34, STATE_VARIABLE_Info_38_38, STATE_VARIABLE_Info_36);
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_goal_list_1_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_31,
  MR_Word Context_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__2_31 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
      *STATE_VARIABLE_TypeAssignSet_5 = STATE_VARIABLE_TypeAssignSet_0_4;
    }
    else
    {
      MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_17;
      MR_Word STATE_VARIABLE_TypeAssignSet_26_26;
      MR_Word STATE_VARIABLE_Info_27_27;
      MR_Word * AddrGoals_30;
      MR_Word HeadVar__2_32;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_31;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_6;

      check_hlds__typecheck__typecheck_goal_7_p_0(Goal0_15, &Goal_17, Context_3, STATE_VARIABLE_TypeAssignSet_0_4, &STATE_VARIABLE_TypeAssignSet_26_26, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_27_27);
      {
        HeadVar__2_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_32, 0) = ((MR_Box) (Goal_17));
        MR_hl_field(MR_mktag(1), HeadVar__2_32, 1) = NULL;
      }
      AddrGoals_30 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__2_32, (MR_Integer) 1)));
      *AddrOfHeadVar__2_31 = HeadVar__2_32;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals0_16;
      next_value_of_AddrOfHeadVar__2_31 = AddrGoals_30;
      next_value_of_STATE_VARIABLE_TypeAssignSet_0_4 = STATE_VARIABLE_TypeAssignSet_26_26;
      next_value_of_STATE_VARIABLE_Info_0_6 = STATE_VARIABLE_Info_27_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      AddrOfHeadVar__2_31 = next_value_of_AddrOfHeadVar__2_31;
      STATE_VARIABLE_TypeAssignSet_0_4 = next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;
      STATE_VARIABLE_Info_0_6 = next_value_of_STATE_VARIABLE_Info_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__LCMCpr_typecheck_goal_1_7_p_0(
  MR_Word Goal0_8,
  MR_Word * AddrOfGoal_43,
  MR_Word EnclosingContext_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_28,
  MR_Word * STATE_VARIABLE_TypeAssignSet_29,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  {
    MR_bool succeeded;
    MR_Word Goal_9;
    MR_Word GoalExpr0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_8, (MR_Integer) 0))));
    MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_8, (MR_Integer) 1))));
    MR_Word Context0_15;
    MR_Word Context_16;
    MR_Word GoalInfo_17;
    MR_Integer NumTypeAssignSets_18;
    MR_Integer WarnLimit_19;
    MR_Word GoalExpr_24;
    MR_Word Var_41;

    Context0_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_14);
    Var_41 = mercury__term__context_init_0_f_0();
    succeeded = mercury__term____Unify____context_0_0(Context0_15, Var_41);
    if (succeeded)
    {
      Context_16 = EnclosingContext_10;
      hlds__hlds_goal__goal_info_set_context_3_p_0(Context_16, GoalInfo0_14, &GoalInfo_17);
    }
    else
    {
      Context_16 = Context0_15;
      GoalInfo_17 = GoalInfo0_14;
    }
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), STATE_VARIABLE_TypeAssignSet_0_28, &NumTypeAssignSets_18);
    check_hlds__typecheck_info__typecheck_info_get_ambiguity_warn_limit_2_p_0(STATE_VARIABLE_Info_0_30, &WarnLimit_19);
    succeeded = (NumTypeAssignSets_18 > WarnLimit_19);
    if (succeeded)
    {
      MR_Integer ErrorLimit_20;
      MR_Word ClauseContext_21;
      MR_Word OverloadedSymbolMap_22;

      check_hlds__typecheck_info__typecheck_info_get_ambiguity_error_limit_2_p_0(STATE_VARIABLE_Info_0_30, &ErrorLimit_20);
      check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_30, &ClauseContext_21);
      check_hlds__typecheck_info__typecheck_info_get_overloaded_symbol_map_2_p_0(STATE_VARIABLE_Info_0_30, &OverloadedSymbolMap_22);
      succeeded = (NumTypeAssignSets_18 > ErrorLimit_20);
      if (succeeded)
      {
        MR_Word ErrorSpec_23;
        MR_Word Var_32;

        ErrorSpec_23 = check_hlds__typecheck_errors__report_error_too_much_overloading_3_f_0(ClauseContext_21, Context_16, OverloadedSymbolMap_22);
        {
          Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (ErrorSpec_23));
        }
        check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(Var_32, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
        GoalExpr_24 = GoalExpr0_13;
        *STATE_VARIABLE_TypeAssignSet_29 = STATE_VARIABLE_TypeAssignSet_0_28;
      }
      else
      {
        MR_Word MaybePrevSpec_25;
        MR_Word STATE_VARIABLE_Info_35_35;

        check_hlds__typecheck_info__typecheck_info_get_overload_error_2_p_0(STATE_VARIABLE_Info_0_30, &MaybePrevSpec_25);
        if ((MaybePrevSpec_25 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word WarnSpec_26;
          MR_Word Var_34;

          WarnSpec_26 = check_hlds__typecheck_errors__report_warning_too_much_overloading_3_f_0(ClauseContext_21, Context_16, OverloadedSymbolMap_22);
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (WarnSpec_26));
          }
          check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(Var_34, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_35_35);
        }
        else
          STATE_VARIABLE_Info_35_35 = STATE_VARIABLE_Info_0_30;
        check_hlds__typecheck__typecheck_goal_expr_7_p_0(GoalExpr0_13, &GoalExpr_24, GoalInfo_17, STATE_VARIABLE_TypeAssignSet_0_28, STATE_VARIABLE_TypeAssignSet_29, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_31);
      }
    }
    else
      check_hlds__typecheck__typecheck_goal_expr_7_p_0(GoalExpr0_13, &GoalExpr_24, GoalInfo_17, STATE_VARIABLE_TypeAssignSet_0_28, STATE_VARIABLE_TypeAssignSet_29, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
    {
      Goal_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_9, 0) = ((MR_Box) (GoalExpr_24));
      MR_hl_field(MR_mktag(0), Goal_9, 1) = ((MR_Box) (GoalInfo_17));
    }
    *AddrOfGoal_43 = Goal_9;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_goal_list_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word Context_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    *STATE_VARIABLE_TypeAssignSet_5 = STATE_VARIABLE_TypeAssignSet_0_4;
  }
  else
  {
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_17;
    MR_Word STATE_VARIABLE_TypeAssignSet_26_26;
    MR_Word STATE_VARIABLE_Info_27_27;
    MR_Word * AddrGoals_30;

    check_hlds__typecheck__typecheck_goal_7_p_0(Goal0_15, &Goal_17, Context_3, STATE_VARIABLE_TypeAssignSet_0_4, &STATE_VARIABLE_TypeAssignSet_26_26, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_27_27);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_17));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrGoals_30 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__2_2, (MR_Integer) 1)));
    check_hlds__typecheck__LCMCpr_typecheck_goal_list_1_7_p_0(Goals0_16, AddrGoals_30, Context_3, STATE_VARIABLE_TypeAssignSet_26_26, STATE_VARIABLE_TypeAssignSet_5, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_7);
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_expr__1491__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_TypeAssignSet_12;
    MR_Word conv1_STATE_VARIABLE_Info_14;

    check_hlds__typecheck__typecheck_var_has_stm_atomic_type_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_TypeAssignSet_12, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Info_14);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_TypeAssignSet_12));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Info_14));
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_1(
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
check_hlds__typecheck__typecheck_goal_expr_7_p_0(
  MR_Word GoalExpr0_8,
  MR_Word * GoalExpr_9,
  MR_Word GoalInfo_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_117,
  MR_Word * STATE_VARIABLE_TypeAssignSet_118,
  MR_Word STATE_VARIABLE_Info_0_119,
  MR_Word * STATE_VARIABLE_Info_120)
{
  {
    MR_bool succeeded;
    MR_Word Context_16;
    MR_Word ClauseContext_13;

    check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_119, &ClauseContext_13);
    Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_10);
    switch (MR_tag((MR_Word) GoalExpr0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_28 = (MR_Word) ((MR_Word) (GoalExpr0_8));
          MR_Word SubGoal_29;

          check_hlds__typecheck__typecheck_goal_7_p_0(SubGoal0_28, &SubGoal_29, Context_16, STATE_VARIABLE_TypeAssignSet_0_117, STATE_VARIABLE_TypeAssignSet_118, STATE_VARIABLE_Info_0_119, STATE_VARIABLE_Info_120);
          *GoalExpr_9 = (MR_Word) ((MR_Word) (SubGoal_29));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 0))));
          MR_Word RHS0_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 1))));
          MR_Word UnifyMode_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 2))));
          MR_Word Unification_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 3))));
          MR_Word UnifyContext_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_8, (MR_Integer) 4))));
          MR_Word GoalId_249;
          MR_Word * AddrRHS_303;

          GoalId_249 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_10);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_9 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LHS_77));
            MR_hl_field(MR_mktag(1), base, 1) = NULL;
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (UnifyMode_79));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Unification_80));
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (UnifyContext_81));
          }
          AddrRHS_303 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *GoalExpr_9, (MR_Integer) 1)));
          check_hlds__typecheck__LCMCpr_typecheck_unification_1_10_p_0(UnifyContext_81, Context_16, GoalId_249, LHS_77, RHS0_78, AddrRHS_303, STATE_VARIABLE_TypeAssignSet_0_117, STATE_VARIABLE_TypeAssignSet_118, STATE_VARIABLE_Info_0_119, STATE_VARIABLE_Info_120);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ProcId_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 1))));
          MR_Word Args_54 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 2))));
          MR_Word BI_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 3))) & (MR_Integer) 1);
          MR_Word UC_56 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 4))));
          MR_Word Name_57 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_8, (MR_Integer) 5))));
          MR_Integer Arity_58;
          MR_Word SimpleCallId_59;
          MR_Word GoalId_60;
          MR_Word PredId_61;

          mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[3]), Args_54, &Arity_58);
          {
            SimpleCallId_59 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SimpleCallId_59, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), SimpleCallId_59, 1) = ((MR_Box) (Name_57));
            MR_hl_field(MR_mktag(0), SimpleCallId_59, 2) = ((MR_Box) (Arity_58));
          }
          GoalId_60 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_10);
          check_hlds__typecheck__typecheck_call_pred_name_9_p_0(SimpleCallId_59, Context_16, GoalId_60, Args_54, &PredId_61, STATE_VARIABLE_TypeAssignSet_0_117, STATE_VARIABLE_TypeAssignSet_118, STATE_VARIABLE_Info_0_119, STATE_VARIABLE_Info_120);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_9 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (PredId_61));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ProcId_53));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (Args_54));
            MR_hl_field(MR_mktag(2), base, 3) = (MR_Box) ((MR_Unsigned) (BI_55));
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (UC_56));
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (Name_57));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word Args_248 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));

              switch (MR_tag((MR_Word) GenericCall_62)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word PredVar_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GenericCall_62, (MR_Integer) 0))));
                    MR_Word Purity_67 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), GenericCall_62, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
                    MR_Word GenericCallId_70;

                    hlds__hlds_goal__generic_call_to_id_2_p_0(GenericCall_62, &GenericCallId_70);
                    check_hlds__typecheck__typecheck_higher_order_call_9_p_0(GenericCallId_70, Context_16, PredVar_66, Purity_67, Args_248, STATE_VARIABLE_TypeAssignSet_0_117, STATE_VARIABLE_TypeAssignSet_118, STATE_VARIABLE_Info_0_119, STATE_VARIABLE_Info_120);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.typecheck_goal_expr\'/7", (MR_String) "unexpected class method call");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_String EventName_75 = ((MR_String) ((MR_hl_field(MR_mktag(2), GenericCall_62, (MR_Integer) 0))));

                    check_hlds__typecheck__typecheck_event_call_7_p_0(Context_16, EventName_75, Args_248, STATE_VARIABLE_TypeAssignSet_0_117, STATE_VARIABLE_TypeAssignSet_118, STATE_VARIABLE_Info_0_119, STATE_VARIABLE_Info_120);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    *STATE_VARIABLE_TypeAssignSet_118 = STATE_VARIABLE_TypeAssignSet_0_117;
                    *STATE_VARIABLE_Info_120 = STATE_VARIABLE_Info_0_119;
                  }
                  break;
              }
              *GoalExpr_9 = GoalExpr0_8;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgVectorKind_91;
              MR_Word ArgVars_92;
              MR_Word STATE_VARIABLE_TypeAssignSet_170_170;
              MR_Word STATE_VARIABLE_Info_171_171;
              MR_Word Args_250 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 4))));
              MR_Word GoalId_251;
              MR_Word PredId_252 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));

              {
                ArgVectorKind_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ArgVectorKind_91, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), ArgVectorKind_91, 1) = ((MR_Box) (PredId_252));
              }
              ArgVars_92 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__typecheck_scalar_common_1[3]), (MR_Word) (&check_hlds__typecheck_scalar_common_2[5]), Args_250);
              GoalId_251 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_10);
              check_hlds__typecheck__typecheck_call_pred_id_9_p_0(ArgVectorKind_91, Context_16, GoalId_251, PredId_252, ArgVars_92, STATE_VARIABLE_TypeAssignSet_0_117, &STATE_VARIABLE_TypeAssignSet_170_170, STATE_VARIABLE_Info_0_119, &STATE_VARIABLE_Info_171_171);
              check_hlds__typeclasses__perform_context_reduction_5_p_0(Context_16, STATE_VARIABLE_TypeAssignSet_170_170, STATE_VARIABLE_TypeAssignSet_118, STATE_VARIABLE_Info_171_171, STATE_VARIABLE_Info_120);
              *GoalExpr_9 = GoalExpr0_8;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word List0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word * AddrList_301;

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (ConjType_17));
                MR_hl_field(MR_mktag(3), base, 2) = NULL;
              }
              AddrList_301 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *GoalExpr_9, (MR_Integer) 2)));
              check_hlds__typecheck__LCMCpr_typecheck_goal_list_1_7_p_0(List0_18, AddrList_301, Context_16, STATE_VARIABLE_TypeAssignSet_0_117, STATE_VARIABLE_TypeAssignSet_118, STATE_VARIABLE_Info_0_119, STATE_VARIABLE_Info_120);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word List0_241 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word * AddrList_302;

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), base, 1) = NULL;
              }
              AddrList_302 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *GoalExpr_9, (MR_Integer) 1)));
              check_hlds__typecheck__LCMCpr_typecheck_goal_list_1_7_p_0(List0_241, AddrList_302, Context_16, STATE_VARIABLE_TypeAssignSet_0_117, STATE_VARIABLE_TypeAssignSet_118, STATE_VARIABLE_Info_0_119, STATE_VARIABLE_Info_120);
            }
            break;
          case (MR_Integer) 4:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.typecheck_goal_expr\'/7", (MR_String) "switch");
                return;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_TypeAssignSet_202_202;
              MR_Word STATE_VARIABLE_Info_203_203;
              MR_Word SubGoal0_246 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word SubGoal_247;

              check_hlds__typecheck__typecheck_goal_7_p_0(SubGoal0_246, &SubGoal_247, Context_16, STATE_VARIABLE_TypeAssignSet_0_117, &STATE_VARIABLE_TypeAssignSet_202_202, STATE_VARIABLE_Info_0_119, &STATE_VARIABLE_Info_203_203);
              switch (MR_tag((MR_Word) Reason_30)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Vars_243 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Reason_30, (MR_Integer) 0))));

                    check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 4U), Context_16, Vars_243, STATE_VARIABLE_TypeAssignSet_202_202, STATE_VARIABLE_TypeAssignSet_118, STATE_VARIABLE_Info_203_203, STATE_VARIABLE_Info_120);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *STATE_VARIABLE_TypeAssignSet_118 = STATE_VARIABLE_TypeAssignSet_202_202;
                    *STATE_VARIABLE_Info_120 = STATE_VARIABLE_Info_203_203;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Vars_300 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Reason_30, (MR_Integer) 0))));

                    check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 8U), Context_16, Vars_300, STATE_VARIABLE_TypeAssignSet_202_202, STATE_VARIABLE_TypeAssignSet_118, STATE_VARIABLE_Info_203_203, STATE_VARIABLE_Info_120);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_30, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        *STATE_VARIABLE_TypeAssignSet_118 = STATE_VARIABLE_TypeAssignSet_202_202;
                        *STATE_VARIABLE_Info_120 = STATE_VARIABLE_Info_203_203;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        *STATE_VARIABLE_TypeAssignSet_118 = STATE_VARIABLE_TypeAssignSet_202_202;
                        *STATE_VARIABLE_Info_120 = STATE_VARIABLE_Info_203_203;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        *STATE_VARIABLE_TypeAssignSet_118 = STATE_VARIABLE_TypeAssignSet_202_202;
                        *STATE_VARIABLE_Info_120 = STATE_VARIABLE_Info_203_203;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        *STATE_VARIABLE_TypeAssignSet_118 = STATE_VARIABLE_TypeAssignSet_202_202;
                        *STATE_VARIABLE_Info_120 = STATE_VARIABLE_Info_203_203;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        *STATE_VARIABLE_TypeAssignSet_118 = STATE_VARIABLE_TypeAssignSet_202_202;
                        *STATE_VARIABLE_Info_120 = STATE_VARIABLE_Info_203_203;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        *STATE_VARIABLE_TypeAssignSet_118 = STATE_VARIABLE_TypeAssignSet_202_202;
                        *STATE_VARIABLE_Info_120 = STATE_VARIABLE_Info_203_203;
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        *STATE_VARIABLE_TypeAssignSet_118 = STATE_VARIABLE_TypeAssignSet_202_202;
                        *STATE_VARIABLE_Info_120 = STATE_VARIABLE_Info_203_203;
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        *STATE_VARIABLE_TypeAssignSet_118 = STATE_VARIABLE_TypeAssignSet_202_202;
                        *STATE_VARIABLE_Info_120 = STATE_VARIABLE_Info_203_203;
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word LCVar_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_30, (MR_Integer) 1))));
                        MR_Word LCSVar_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_30, (MR_Integer) 2))));
                        MR_Word Var_204;
                        MR_Word Vars_298;

                        {
                          Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_204, 0) = ((MR_Box) (LCSVar_34));
                          MR_hl_field(MR_mktag(1), Var_204, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Vars_298 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Vars_298, 0) = ((MR_Box) (LCVar_33));
                          MR_hl_field(MR_mktag(1), Vars_298, 1) = ((MR_Box) (Var_204));
                        }
                        check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 12U), Context_16, Vars_298, STATE_VARIABLE_TypeAssignSet_202_202, STATE_VARIABLE_TypeAssignSet_118, STATE_VARIABLE_Info_203_203, STATE_VARIABLE_Info_120);
                      }
                      break;
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason_30));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_247));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word Cond0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word Then0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3))));
              MR_Word Else0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 4))));
              MR_Word Cond_25;
              MR_Word Then_26;
              MR_Word Else_27;
              MR_Word STATE_VARIABLE_TypeAssignSet_216_216;
              MR_Word STATE_VARIABLE_Info_217_217;
              MR_Word STATE_VARIABLE_TypeAssignSet_221_221;
              MR_Word STATE_VARIABLE_Info_222_222;
              MR_Word STATE_VARIABLE_TypeAssignSet_226_226;
              MR_Word STATE_VARIABLE_Info_227_227;

              check_hlds__typecheck__typecheck_goal_7_p_0(Cond0_22, &Cond_25, Context_16, STATE_VARIABLE_TypeAssignSet_0_117, &STATE_VARIABLE_TypeAssignSet_216_216, STATE_VARIABLE_Info_0_119, &STATE_VARIABLE_Info_217_217);
              check_hlds__typecheck__typecheck_goal_7_p_0(Then0_23, &Then_26, Context_16, STATE_VARIABLE_TypeAssignSet_216_216, &STATE_VARIABLE_TypeAssignSet_221_221, STATE_VARIABLE_Info_217_217, &STATE_VARIABLE_Info_222_222);
              check_hlds__typecheck__typecheck_goal_7_p_0(Else0_24, &Else_27, Context_16, STATE_VARIABLE_TypeAssignSet_221_221, &STATE_VARIABLE_TypeAssignSet_226_226, STATE_VARIABLE_Info_222_222, &STATE_VARIABLE_Info_227_227);
              check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 0U), Context_16, Vars_21, STATE_VARIABLE_TypeAssignSet_226_226, STATE_VARIABLE_TypeAssignSet_118, STATE_VARIABLE_Info_227_227, STATE_VARIABLE_Info_120);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars_21));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_25));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_26));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_27));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word ShortHand_95;

              switch (MR_tag((MR_Word) ShortHand0_93)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word LHS0_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand0_93, (MR_Integer) 0))));
                    MR_Word STATE_VARIABLE_TypeAssignSet_165_165;
                    MR_Word STATE_VARIABLE_Info_166_166;
                    MR_Word LHS_253;
                    MR_Word RHS0_254 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand0_93, (MR_Integer) 1))));
                    MR_Word RHS_255;

                    check_hlds__typecheck__typecheck_goal_7_p_0(LHS0_94, &LHS_253, Context_16, STATE_VARIABLE_TypeAssignSet_0_117, &STATE_VARIABLE_TypeAssignSet_165_165, STATE_VARIABLE_Info_0_119, &STATE_VARIABLE_Info_166_166);
                    check_hlds__typecheck__typecheck_goal_7_p_0(RHS0_254, &RHS_255, Context_16, STATE_VARIABLE_TypeAssignSet_165_165, STATE_VARIABLE_TypeAssignSet_118, STATE_VARIABLE_Info_166_166, STATE_VARIABLE_Info_120);
                    {
                      ShortHand_95 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ShortHand_95, 0) = ((MR_Box) (LHS_253));
                      MR_hl_field(MR_mktag(0), ShortHand_95, 1) = ((MR_Box) (RHS_255));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_96 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShortHand0_93, (MR_Integer) 0))) & (MR_Integer) 3);
                    MR_Word Outer_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_93, (MR_Integer) 1))));
                    MR_Word Inner_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_93, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_99 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_93, (MR_Integer) 3))));
                    MR_Word MainGoal0_100 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_93, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_101 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_93, (MR_Integer) 5))));
                    MR_Word OrElseInners_102 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_93, (MR_Integer) 6))));
                    MR_Word MainGoal_105;
                    MR_Word OrElseGoals_106;
                    MR_Word OuterDI_108;
                    MR_Word OuterUO_109;
                    MR_Word InnerVars_110;
                    MR_Word STATE_VARIABLE_TypeAssignSet_143_143;
                    MR_Word STATE_VARIABLE_Info_144_144;
                    MR_Word STATE_VARIABLE_TypeAssignSet_145_145;
                    MR_Word STATE_VARIABLE_Info_146_146;
                    MR_Word STATE_VARIABLE_TypeAssignSet_147_147;
                    MR_Word STATE_VARIABLE_Info_148_148;
                    MR_Word Var_149;
                    MR_Word STATE_VARIABLE_TypeAssignSet_150_150;
                    MR_Word STATE_VARIABLE_Info_151_151;
                    MR_Word Var_152;
                    MR_Word Var_154;
                    MR_Word Var_155;
                    MR_Word Var_158;
                    MR_Box conv4_STATE_VARIABLE_TypeAssignSet_118;
                    MR_Box conv3_STATE_VARIABLE_Info_120;

                    if ((MaybeOutputVars_99 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      STATE_VARIABLE_TypeAssignSet_143_143 = STATE_VARIABLE_TypeAssignSet_0_117;
                      STATE_VARIABLE_Info_144_144 = STATE_VARIABLE_Info_0_119;
                    }
                    else
                    {
                      MR_Word OutputVars_103 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOutputVars_99, (MR_Integer) 0))));

                      check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 20U), Context_16, OutputVars_103, STATE_VARIABLE_TypeAssignSet_0_117, &STATE_VARIABLE_TypeAssignSet_143_143, STATE_VARIABLE_Info_0_119, &STATE_VARIABLE_Info_144_144);
                    }
                    check_hlds__typecheck__typecheck_goal_7_p_0(MainGoal0_100, &MainGoal_105, Context_16, STATE_VARIABLE_TypeAssignSet_143_143, &STATE_VARIABLE_TypeAssignSet_145_145, STATE_VARIABLE_Info_144_144, &STATE_VARIABLE_Info_146_146);
                    check_hlds__typecheck__typecheck_goal_list_7_p_0(OrElseGoals0_101, &OrElseGoals_106, Context_16, STATE_VARIABLE_TypeAssignSet_145_145, &STATE_VARIABLE_TypeAssignSet_147_147, STATE_VARIABLE_Info_146_146, &STATE_VARIABLE_Info_148_148);
                    OuterDI_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_97, (MR_Integer) 0))));
                    OuterUO_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer_97, (MR_Integer) 1))));
                    {
                      Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_152, 0) = ((MR_Box) (OuterUO_109));
                      MR_hl_field(MR_mktag(1), Var_152, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (OuterDI_108));
                      MR_hl_field(MR_mktag(1), Var_149, 1) = ((MR_Box) (Var_152));
                    }
                    check_hlds__typecheck__ensure_vars_have_a_single_type_7_p_0((MR_Word) ((MR_Unsigned) 24U), Context_16, Var_149, STATE_VARIABLE_TypeAssignSet_147_147, &STATE_VARIABLE_TypeAssignSet_150_150, STATE_VARIABLE_Info_148_148, &STATE_VARIABLE_Info_151_151);
                    {
                      Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (Inner_98));
                      MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) (OrElseInners_102));
                    }
                    InnerVars_110 = check_hlds__typecheck__atomic_interface_list_to_var_list_1_f_0(Var_154);
                    {
                      Var_155 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_155, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_10[0]));
                      MR_hl_field(MR_mktag(0), Var_155, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_goal_expr_7_p_0_2));
                      MR_hl_field(MR_mktag(0), Var_155, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), Var_155, 3) = ((MR_Box) (Context_16));
                    }
                    mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[3]), (MR_Word) (&check_hlds__typecheck_scalar_common_1[4]), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), Var_155, InnerVars_110, ((MR_Box) (STATE_VARIABLE_TypeAssignSet_150_150)), &conv4_STATE_VARIABLE_TypeAssignSet_118, ((MR_Box) (STATE_VARIABLE_Info_151_151)), &conv3_STATE_VARIABLE_Info_120);
                    *STATE_VARIABLE_TypeAssignSet_118 = ((MR_Word) (conv4_STATE_VARIABLE_TypeAssignSet_118));
                    *STATE_VARIABLE_Info_120 = ((MR_Word) (conv3_STATE_VARIABLE_Info_120));
                    {
                      Var_158 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_158, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_4[6]));
                      MR_hl_field(MR_mktag(0), Var_158, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_goal_expr_7_p_0_3));
                      MR_hl_field(MR_mktag(0), Var_158, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_158, 3) = ((MR_Box) (GoalType_96));
                      MR_hl_field(MR_mktag(0), Var_158, 4) = ((MR_Box) ((MR_Integer) 0));
                    }
                    mercury__require__expect_3_p_0(Var_158, (MR_String) "predicate \140check_hlds.typecheck.typecheck_goal_expr\'/7", (MR_String) "GoalType != unknown_atomic_goal_type");
                    {
                      ShortHand_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ShortHand_95, 0) = (MR_Box) ((MR_Unsigned) (GoalType_96));
                      MR_hl_field(MR_mktag(1), ShortHand_95, 1) = ((MR_Box) (Outer_97));
                      MR_hl_field(MR_mktag(1), ShortHand_95, 2) = ((MR_Box) (Inner_98));
                      MR_hl_field(MR_mktag(1), ShortHand_95, 3) = ((MR_Box) (MaybeOutputVars_99));
                      MR_hl_field(MR_mktag(1), ShortHand_95, 4) = ((MR_Box) (MainGoal_105));
                      MR_hl_field(MR_mktag(1), ShortHand_95, 5) = ((MR_Box) (OrElseGoals_106));
                      MR_hl_field(MR_mktag(1), ShortHand_95, 6) = ((MR_Box) (OrElseInners_102));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_111 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_93, (MR_Integer) 0))));
                    MR_Word ResultVar_112 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_93, (MR_Integer) 1))));
                    MR_Word STATE_VARIABLE_TypeAssignSet_124_124;
                    MR_Word STATE_VARIABLE_Info_125_125;
                    MR_Word SubGoal0_258 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_93, (MR_Integer) 2))));
                    MR_Word SubGoal_259;

                    check_hlds__typecheck__typecheck_goal_7_p_0(SubGoal0_258, &SubGoal_259, Context_16, STATE_VARIABLE_TypeAssignSet_0_117, &STATE_VARIABLE_TypeAssignSet_124_124, STATE_VARIABLE_Info_0_119, &STATE_VARIABLE_Info_125_125);
                    if ((MaybeIO_111 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      *STATE_VARIABLE_TypeAssignSet_118 = STATE_VARIABLE_TypeAssignSet_124_124;
                      *STATE_VARIABLE_Info_120 = STATE_VARIABLE_Info_125_125;
                    }
                    else
                    {
                      MR_Word InitialIO_113;
                      MR_Word FinalIO_114;
                      MR_Word Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIO_111, (MR_Integer) 0))));
                      MR_Word Var_127;
                      MR_Word STATE_VARIABLE_TypeAssignSet_128_128;
                      MR_Word STATE_VARIABLE_Info_129_129;
                      MR_Word Var_130;
                      MR_Word Var_134;
                      MR_Word STATE_VARIABLE_TypeAssignSet_135_135;
                      MR_Word STATE_VARIABLE_Info_136_136;
                      MR_Word Var_137;

                      InitialIO_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_126, (MR_Integer) 0))));
                      FinalIO_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_126, (MR_Integer) 1))));
                      {
                        Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (FinalIO_114));
                        MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (InitialIO_113));
                        MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) (Var_130));
                      }
                      check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 16U), Context_16, Var_127, STATE_VARIABLE_TypeAssignSet_124_124, &STATE_VARIABLE_TypeAssignSet_128_128, STATE_VARIABLE_Info_125_125, &STATE_VARIABLE_Info_129_129);
                      Var_134 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
                      check_hlds__typecheck__typecheck_var_has_type_8_p_0((MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[19])), Context_16, InitialIO_113, Var_134, STATE_VARIABLE_TypeAssignSet_128_128, &STATE_VARIABLE_TypeAssignSet_135_135, STATE_VARIABLE_Info_129_129, &STATE_VARIABLE_Info_136_136);
                      Var_137 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
                      check_hlds__typecheck__typecheck_var_has_type_8_p_0((MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[20])), Context_16, FinalIO_114, Var_137, STATE_VARIABLE_TypeAssignSet_135_135, STATE_VARIABLE_TypeAssignSet_118, STATE_VARIABLE_Info_136_136, STATE_VARIABLE_Info_120);
                    }
                    {
                      ShortHand_95 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ShortHand_95, 0) = ((MR_Box) (MaybeIO_111));
                      MR_hl_field(MR_mktag(2), ShortHand_95, 1) = ((MR_Box) (ResultVar_112));
                      MR_hl_field(MR_mktag(2), ShortHand_95, 2) = ((MR_Box) (SubGoal_259));
                    }
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ShortHand_95));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_goal_7_p_0(
  MR_Word Goal0_8,
  MR_Word * Goal_9,
  MR_Word EnclosingContext_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_28,
  MR_Word * STATE_VARIABLE_TypeAssignSet_29,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_8, (MR_Integer) 0))));
    MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_8, (MR_Integer) 1))));
    MR_Word Context0_15;
    MR_Word Context_16;
    MR_Word GoalInfo_17;
    MR_Integer NumTypeAssignSets_18;
    MR_Integer WarnLimit_19;
    MR_Word GoalExpr_24;
    MR_Word Var_41;

    Context0_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_14);
    Var_41 = mercury__term__context_init_0_f_0();
    succeeded = mercury__term____Unify____context_0_0(Context0_15, Var_41);
    if (succeeded)
    {
      Context_16 = EnclosingContext_10;
      hlds__hlds_goal__goal_info_set_context_3_p_0(Context_16, GoalInfo0_14, &GoalInfo_17);
    }
    else
    {
      Context_16 = Context0_15;
      GoalInfo_17 = GoalInfo0_14;
    }
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), STATE_VARIABLE_TypeAssignSet_0_28, &NumTypeAssignSets_18);
    check_hlds__typecheck_info__typecheck_info_get_ambiguity_warn_limit_2_p_0(STATE_VARIABLE_Info_0_30, &WarnLimit_19);
    succeeded = (NumTypeAssignSets_18 > WarnLimit_19);
    if (succeeded)
    {
      MR_Integer ErrorLimit_20;
      MR_Word ClauseContext_21;
      MR_Word OverloadedSymbolMap_22;

      check_hlds__typecheck_info__typecheck_info_get_ambiguity_error_limit_2_p_0(STATE_VARIABLE_Info_0_30, &ErrorLimit_20);
      check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_30, &ClauseContext_21);
      check_hlds__typecheck_info__typecheck_info_get_overloaded_symbol_map_2_p_0(STATE_VARIABLE_Info_0_30, &OverloadedSymbolMap_22);
      succeeded = (NumTypeAssignSets_18 > ErrorLimit_20);
      if (succeeded)
      {
        MR_Word ErrorSpec_23;
        MR_Word Var_32;

        ErrorSpec_23 = check_hlds__typecheck_errors__report_error_too_much_overloading_3_f_0(ClauseContext_21, Context_16, OverloadedSymbolMap_22);
        {
          Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (ErrorSpec_23));
        }
        check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(Var_32, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
        GoalExpr_24 = GoalExpr0_13;
        *STATE_VARIABLE_TypeAssignSet_29 = STATE_VARIABLE_TypeAssignSet_0_28;
      }
      else
      {
        MR_Word MaybePrevSpec_25;
        MR_Word STATE_VARIABLE_Info_35_35;

        check_hlds__typecheck_info__typecheck_info_get_overload_error_2_p_0(STATE_VARIABLE_Info_0_30, &MaybePrevSpec_25);
        if ((MaybePrevSpec_25 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word WarnSpec_26;
          MR_Word Var_34;

          WarnSpec_26 = check_hlds__typecheck_errors__report_warning_too_much_overloading_3_f_0(ClauseContext_21, Context_16, OverloadedSymbolMap_22);
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (WarnSpec_26));
          }
          check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(Var_34, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_35_35);
        }
        else
          STATE_VARIABLE_Info_35_35 = STATE_VARIABLE_Info_0_30;
        check_hlds__typecheck__typecheck_goal_expr_7_p_0(GoalExpr0_13, &GoalExpr_24, GoalInfo_17, STATE_VARIABLE_TypeAssignSet_0_28, STATE_VARIABLE_TypeAssignSet_29, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_31);
      }
    }
    else
      check_hlds__typecheck__typecheck_goal_expr_7_p_0(GoalExpr0_13, &GoalExpr_24, GoalInfo_17, STATE_VARIABLE_TypeAssignSet_0_28, STATE_VARIABLE_TypeAssignSet_29, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_17));
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Purity_2,
  MR_Word PredOrFunc_3,
  MR_Word Var_5,
  MR_Word ArgVars_6,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_7,
  MR_Word * STATE_VARIABLE_TypeAssignSet_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TypeAssignSet_8 = STATE_VARIABLE_TypeAssignSet_0_7;
    else
    {
      MR_Word TypeAssign0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeAssignSet0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgVarTypes_25;
      MR_Word TypeAssign1_26;
      MR_Word LambdaType_27;
      MR_Word STATE_VARIABLE_TypeAssignSet_30_30;
      MR_Word VarTypes0_38;
      MR_Word MaybeOldVarType_39;
      MR_Word VarTypes_40;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_7;

      check_hlds__typecheck__type_assign_get_types_of_vars_4_p_0(ArgVars_6, &ArgVarTypes_25, TypeAssign0_17, &TypeAssign1_26);
      parse_tree__prog_type__construct_higher_order_type_5_p_0(Purity_2, PredOrFunc_3, ArgVarTypes_25, &LambdaType_27);
      check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign1_26, &VarTypes0_38);
      hlds__vartypes__search_insert_var_type_5_p_0(Var_5, LambdaType_27, &MaybeOldVarType_39, VarTypes0_38, &VarTypes_40);
      if ((MaybeOldVarType_39 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeAssign_43;

        check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_40, TypeAssign1_26, &TypeAssign_43);
        {
          STATE_VARIABLE_TypeAssignSet_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_30_30, 0) = ((MR_Box) (TypeAssign_43));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_30_30, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_7));
        }
      }
      else
      {
        MR_Word OldVarType_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOldVarType_39, (MR_Integer) 0))));
        MR_Word TypeAssign1_42;
        MR_Word HeadTypeParams_51;
        MR_Word TypeBindings0_52;
        MR_Word TypeBindings_53;

        check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign1_26, &HeadTypeParams_51);
        check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign1_26, &TypeBindings0_52);
        succeeded = parse_tree__prog_type__type_unify_5_p_0(OldVarType_41, LambdaType_27, HeadTypeParams_51, TypeBindings0_52, &TypeBindings_53);
        if (succeeded)
        {
          check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_53, TypeAssign1_26, &TypeAssign1_42);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          {
            STATE_VARIABLE_TypeAssignSet_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_30_30, 0) = ((MR_Box) (TypeAssign1_42));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_30_30, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_7));
          }
        else
          STATE_VARIABLE_TypeAssignSet_30_30 = STATE_VARIABLE_TypeAssignSet_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TypeAssignSet0_18;
      next_value_of_STATE_VARIABLE_TypeAssignSet_0_7 = STATE_VARIABLE_TypeAssignSet_30_30;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeAssignSet_0_7 = next_value_of_STATE_VARIABLE_TypeAssignSet_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__type_assign_get_types_of_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_TypeAssign_0_3,
  MR_Word * STATE_VARIABLE_TypeAssign_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_TypeAssign_4 = STATE_VARIABLE_TypeAssign_0_3;
    }
    else
    {
      MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Type_10;
      MR_Word VarTypes0_13;
      MR_Word STATE_VARIABLE_TypeAssign_23_23;
      MR_Word VarType_14;
      MR_Word * AddrTypes_26;

      check_hlds__type_assign__type_assign_get_var_types_2_p_0(STATE_VARIABLE_TypeAssign_0_3, &VarTypes0_13);
      succeeded = hlds__vartypes__search_var_type_3_p_0(VarTypes0_13, Var_8, &VarType_14);
      if (succeeded)
      {
        Type_10 = VarType_14;
        STATE_VARIABLE_TypeAssign_23_23 = STATE_VARIABLE_TypeAssign_0_3;
      }
      else
      {
        MR_Word TypeVarSet0_15;
        MR_Word TypeVar_16;
        MR_Word TypeVarSet_17;
        MR_Word VarTypes1_18;
        MR_Word STATE_VARIABLE_TypeAssign_21_21;

        check_hlds__type_assign__type_assign_get_typevarset_2_p_0(STATE_VARIABLE_TypeAssign_0_3, &TypeVarSet0_15);
        mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVar_16, TypeVarSet0_15, &TypeVarSet_17);
        check_hlds__type_assign__type_assign_set_typevarset_3_p_0(TypeVarSet_17, STATE_VARIABLE_TypeAssign_0_3, &STATE_VARIABLE_TypeAssign_21_21);
        {
          Type_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Type_10, 0) = ((MR_Box) (TypeVar_16));
          MR_hl_field(MR_mktag(0), Type_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__vartypes__add_var_type_4_p_0(Var_8, Type_10, VarTypes0_13, &VarTypes1_18);
        check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes1_18, STATE_VARIABLE_TypeAssign_21_21, &STATE_VARIABLE_TypeAssign_23_23);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Type_10));
        MR_hl_field(MR_mktag(1), base, 1) = NULL;
      }
      AddrTypes_26 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__2_2, (MR_Integer) 1)));
      check_hlds__typecheck__LCMCpr_type_assign_get_types_of_vars_1_4_p_0(Vars_9, AddrTypes_26, STATE_VARIABLE_TypeAssign_23_23, STATE_VARIABLE_TypeAssign_4);
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__LCMCpr_type_assign_get_types_of_vars_1_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_27,
  MR_Word STATE_VARIABLE_TypeAssign_0_3,
  MR_Word * STATE_VARIABLE_TypeAssign_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__2_27 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_TypeAssign_4 = STATE_VARIABLE_TypeAssign_0_3;
    }
    else
    {
      MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Type_10;
      MR_Word VarTypes0_13;
      MR_Word STATE_VARIABLE_TypeAssign_23_23;
      MR_Word VarType_14;
      MR_Word * AddrTypes_26;
      MR_Word HeadVar__2_28;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_27;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssign_0_3;

      check_hlds__type_assign__type_assign_get_var_types_2_p_0(STATE_VARIABLE_TypeAssign_0_3, &VarTypes0_13);
      succeeded = hlds__vartypes__search_var_type_3_p_0(VarTypes0_13, Var_8, &VarType_14);
      if (succeeded)
      {
        Type_10 = VarType_14;
        STATE_VARIABLE_TypeAssign_23_23 = STATE_VARIABLE_TypeAssign_0_3;
      }
      else
      {
        MR_Word TypeVarSet0_15;
        MR_Word TypeVar_16;
        MR_Word TypeVarSet_17;
        MR_Word VarTypes1_18;
        MR_Word STATE_VARIABLE_TypeAssign_21_21;

        check_hlds__type_assign__type_assign_get_typevarset_2_p_0(STATE_VARIABLE_TypeAssign_0_3, &TypeVarSet0_15);
        mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVar_16, TypeVarSet0_15, &TypeVarSet_17);
        check_hlds__type_assign__type_assign_set_typevarset_3_p_0(TypeVarSet_17, STATE_VARIABLE_TypeAssign_0_3, &STATE_VARIABLE_TypeAssign_21_21);
        {
          Type_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Type_10, 0) = ((MR_Box) (TypeVar_16));
          MR_hl_field(MR_mktag(0), Type_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        hlds__vartypes__add_var_type_4_p_0(Var_8, Type_10, VarTypes0_13, &VarTypes1_18);
        check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes1_18, STATE_VARIABLE_TypeAssign_21_21, &STATE_VARIABLE_TypeAssign_23_23);
      }
      {
        HeadVar__2_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_28, 0) = ((MR_Box) (Type_10));
        MR_hl_field(MR_mktag(1), HeadVar__2_28, 1) = NULL;
      }
      AddrTypes_26 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__2_28, (MR_Integer) 1)));
      *AddrOfHeadVar__2_27 = HeadVar__2_28;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_9;
      next_value_of_AddrOfHeadVar__2_27 = AddrTypes_26;
      next_value_of_STATE_VARIABLE_TypeAssign_0_3 = STATE_VARIABLE_TypeAssign_23_23;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      AddrOfHeadVar__2_27 = next_value_of_AddrOfHeadVar__2_27;
      STATE_VARIABLE_TypeAssign_0_3 = next_value_of_STATE_VARIABLE_TypeAssign_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__type_assigns_unify_var_var_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word X_2,
  MR_Word Y_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TypeAssignSet_5 = STATE_VARIABLE_TypeAssignSet_0_4;
    else
    {
      MR_Word TypeAssign_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeAssigns_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TypeAssignSet_18_18;
      MR_Word VarTypes0_26;
      MR_Word TypeX_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;

      check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign_11, &VarTypes0_26);
      succeeded = hlds__vartypes__search_var_type_3_p_0(VarTypes0_26, X_2, &TypeX_27);
      if (succeeded)
      {
        MR_Word MaybeTypeY_28;
        MR_Word VarTypes_29;

        hlds__vartypes__search_insert_var_type_5_p_0(Y_3, TypeX_27, &MaybeTypeY_28, VarTypes0_26, &VarTypes_29);
        if ((MaybeTypeY_28 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word TypeAssign_32;

          check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_29, TypeAssign_11, &TypeAssign_32);
          {
            STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (TypeAssign_32));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_4));
          }
        }
        else
        {
          MR_Word TypeY_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeY_28, (MR_Integer) 0))));
          MR_Word TypeAssign3_31;
          MR_Word HeadTypeParams_58;
          MR_Word TypeBindings0_59;
          MR_Word TypeBindings_60;

          check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign_11, &HeadTypeParams_58);
          check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_11, &TypeBindings0_59);
          succeeded = parse_tree__prog_type__type_unify_5_p_0(TypeX_27, TypeY_30, HeadTypeParams_58, TypeBindings0_59, &TypeBindings_60);
          if (succeeded)
          {
            check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_60, TypeAssign_11, &TypeAssign3_31);
            succeeded = MR_TRUE;
          }
          if (succeeded)
            {
              STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (TypeAssign3_31));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_4));
            }
          else
            STATE_VARIABLE_TypeAssignSet_18_18 = STATE_VARIABLE_TypeAssignSet_0_4;
        }
      }
      else
      {
        MR_Word TypeY_50;

        succeeded = hlds__vartypes__search_var_type_3_p_0(VarTypes0_26, Y_3, &TypeY_50);
        if (succeeded)
        {
          MR_Word VarTypes_45;
          MR_Word TypeAssign_46;

          hlds__vartypes__add_var_type_4_p_0(X_2, TypeY_50, VarTypes0_26, &VarTypes_45);
          check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_45, TypeAssign_11, &TypeAssign_46);
          {
            STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (TypeAssign_46));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_4));
          }
        }
        else
        {
          MR_Word TypeVarSet0_33;
          MR_Word TypeVar_34;
          MR_Word TypeVarSet_35;
          MR_Word TypeAssign1_36;
          MR_Word Type_37;
          MR_Word VarTypes1_38;
          MR_Word VarTypes_47;
          MR_Word TypeAssign_48;

          check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign_11, &TypeVarSet0_33);
          mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVar_34, TypeVarSet0_33, &TypeVarSet_35);
          check_hlds__type_assign__type_assign_set_typevarset_3_p_0(TypeVarSet_35, TypeAssign_11, &TypeAssign1_36);
          {
            Type_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Type_37, 0) = ((MR_Box) (TypeVar_34));
            MR_hl_field(MR_mktag(0), Type_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          hlds__vartypes__add_var_type_4_p_0(X_2, Type_37, VarTypes0_26, &VarTypes1_38);
          succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[3]), ((MR_Box) (X_2)), ((MR_Box) (Y_3)));
          if (succeeded)
            VarTypes_47 = VarTypes1_38;
          else
            hlds__vartypes__add_var_type_4_p_0(Y_3, Type_37, VarTypes1_38, &VarTypes_47);
          check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_47, TypeAssign1_36, &TypeAssign_48);
          {
            STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (TypeAssign_48));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_4));
          }
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TypeAssigns_12;
      next_value_of_STATE_VARIABLE_TypeAssignSet_0_4 = STATE_VARIABLE_TypeAssignSet_18_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeAssignSet_0_4 = next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = check_hlds__typecheck_info__project_cons_type_info_source_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_TypeAssignSet_16;

    check_hlds__typecheck__type_assign_check_functor_type_builtin_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeAssignSet_16);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeAssignSet_16));
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0(
  MR_Word UnifyContext_11,
  MR_Word Context_12,
  MR_Word Var_13,
  MR_Word ConsId_14,
  MR_Word ArgVars_15,
  MR_Word GoalId_16,
  MR_Word TypeAssignSet0_17,
  MR_Word * TypeAssignSet_18,
  MR_Word STATE_VARIABLE_Info_0_54,
  MR_Word * STATE_VARIABLE_Info_55)
{
  {
    MR_bool succeeded;
    MR_Word ClauseContext_20;
    MR_Word ConsType_21;
    MR_String BuiltinTypeName_22;

    check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_54, &ClauseContext_20);
    succeeded = check_hlds__typecheck__cons_id_must_be_builtin_type_3_p_0(ConsId_14, &ConsType_21, &BuiltinTypeName_22);
    if (succeeded)
    {
      MR_Word TypeAssignSet1_23;
      MR_Word STATE_VARIABLE_Info_58_58;
      MR_Word Var_59;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Box conv1_TypeAssignSet1_23;

      succeeded = ((MR_tag((MR_Word) ConsType_21)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ConsType_21, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_56)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_56, (MR_Integer) 0))) & (MR_Integer) 15);
          succeeded = (Var_57 == (MR_Integer) 0);
        }
      }
      if (succeeded)
        check_hlds__typecheck_info__typecheck_info_add_nosuffix_integer_var_3_p_0(Var_13, STATE_VARIABLE_Info_0_54, &STATE_VARIABLE_Info_58_58);
      else
        STATE_VARIABLE_Info_58_58 = STATE_VARIABLE_Info_0_54;
      {
        Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (ConsType_21));
        MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) (Var_13));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_scalar_common_1[4]), Var_59, TypeAssignSet0_17, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_TypeAssignSet1_23);
      TypeAssignSet1_23 = ((MR_Word) (conv1_TypeAssignSet1_23));
      if ((TypeAssignSet1_23 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *TypeAssignSet_18 = TypeAssignSet0_17;
        if ((TypeAssignSet0_17 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_Info_55 = STATE_VARIABLE_Info_58_58;
        else
        {
          MR_Word ConsTypeVarSet_28;
          MR_Word EmptyConstraints_29;
          MR_Word ConsDefn_30;
          MR_Word ConsIdSpec_31;
          MR_Word Var_63;
          MR_Word Var_64;

          mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &ConsTypeVarSet_28);
          hlds__hlds_class__empty_hlds_constraints_1_p_0(&EmptyConstraints_29);
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (BuiltinTypeName_22));
          }
          {
            ConsDefn_30 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ConsDefn_30, 0) = ((MR_Box) (ConsTypeVarSet_28));
            MR_hl_field(MR_mktag(0), ConsDefn_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), ConsDefn_30, 2) = ((MR_Box) (ConsType_21));
            MR_hl_field(MR_mktag(0), ConsDefn_30, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), ConsDefn_30, 4) = ((MR_Box) (EmptyConstraints_29));
            MR_hl_field(MR_mktag(0), ConsDefn_30, 5) = ((MR_Box) (Var_63));
          }
          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (ConsDefn_30));
            MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          ConsIdSpec_31 = check_hlds__typecheck_errors__report_error_functor_type_8_f_0(STATE_VARIABLE_Info_58_58, UnifyContext_11, Context_12, Var_13, Var_64, ConsId_14, (MR_Integer) 0, TypeAssignSet0_17);
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(ConsIdSpec_31, STATE_VARIABLE_Info_58_58, STATE_VARIABLE_Info_55);
        }
      }
      else
      {
        *TypeAssignSet_18 = TypeAssignSet1_23;
        *STATE_VARIABLE_Info_55 = STATE_VARIABLE_Info_58_58;
      }
    }
    else
    {
      MR_Integer Arity_32;
      MR_Word ConsDefns_33;
      MR_Word ConsErrors_34;

      mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[3]), ArgVars_15, &Arity_32);
      check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0(STATE_VARIABLE_Info_0_54, ConsId_14, Arity_32, GoalId_16, &ConsDefns_33, &ConsErrors_34);
      if ((ConsDefns_33 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word GoalContext_35;
        MR_Word Spec_36;

        *TypeAssignSet_18 = TypeAssignSet0_17;
        {
          GoalContext_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), GoalContext_35, 0) = ((MR_Box) (UnifyContext_11));
        }
        Spec_36 = check_hlds__typecheck_errors__report_error_undef_cons_6_f_0(ClauseContext_20, GoalContext_35, Context_12, ConsErrors_34, ConsId_14, Arity_32);
        check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_36, STATE_VARIABLE_Info_0_54, STATE_VARIABLE_Info_55);
      }
      else
      {
        MR_Word Var_157 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsDefns_33, (MR_Integer) 1))));
        MR_Word Var_158 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsDefns_33, (MR_Integer) 0))));

        if ((Var_157 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word ConsTypeAssignSet_43;
          MR_Word ArgsTypeAssignSet_46;
          MR_Word STATE_VARIABLE_Info_76_76;
          MR_Word TypeAssignSet1_82;
          MR_Word STATE_VARIABLE_ConsTypeAssignSet_15_169;

          check_hlds__typecheck__get_cons_type_assigns_for_cons_defn_4_p_0(Var_158, TypeAssignSet0_17, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_ConsTypeAssignSet_15_169);
          check_hlds__typecheck__get_cons_type_assigns_for_cons_defns_4_p_0(Var_157, TypeAssignSet0_17, STATE_VARIABLE_ConsTypeAssignSet_15_169, &ConsTypeAssignSet_43);
          succeeded = (ConsTypeAssignSet_43 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (TypeAssignSet0_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
            }
          }
          if (succeeded)
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.typecheck_unify_var_functor\'/10", (MR_String) "undefined cons\?");
              return;
            }
          }
          check_hlds__typecheck__typecheck_var_functor_types_4_p_0(Var_13, ConsTypeAssignSet_43, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet_46);
          succeeded = (ArgsTypeAssignSet_46 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (ConsTypeAssignSet_43 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
            }
          }
          if (succeeded)
          {
            MR_Word ConsIdSpec_80;

            ConsIdSpec_80 = check_hlds__typecheck_errors__report_error_functor_type_8_f_0(STATE_VARIABLE_Info_0_54, UnifyContext_11, Context_12, Var_13, ConsDefns_33, ConsId_14, Arity_32, TypeAssignSet0_17);
            check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(ConsIdSpec_80, STATE_VARIABLE_Info_0_54, &STATE_VARIABLE_Info_76_76);
          }
          else
            STATE_VARIABLE_Info_76_76 = STATE_VARIABLE_Info_0_54;
          check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(ArgVars_15, ArgsTypeAssignSet_46, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_82);
          if ((TypeAssignSet1_82 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *TypeAssignSet_18 = TypeAssignSet0_17;
            if ((ArgsTypeAssignSet_46 == (MR_Word) ((MR_Unsigned) 0U)))
              *STATE_VARIABLE_Info_55 = STATE_VARIABLE_Info_76_76;
            else
            {
              MR_Word ArgSpec_53;

              ArgSpec_53 = check_hlds__typecheck_errors__report_error_functor_arg_types_8_f_0(ClauseContext_20, UnifyContext_11, Context_12, Var_13, ConsDefns_33, ConsId_14, ArgVars_15, ArgsTypeAssignSet_46);
              check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(ArgSpec_53, STATE_VARIABLE_Info_76_76, STATE_VARIABLE_Info_55);
            }
          }
          else
          {
            *TypeAssignSet_18 = TypeAssignSet1_82;
            *STATE_VARIABLE_Info_55 = STATE_VARIABLE_Info_76_76;
          }
        }
        else
        {
          MR_Word Sources_41;
          MR_Word Symbol_42;
          MR_Word ConsTypeAssignSet_137;
          MR_Word ArgsTypeAssignSet_140;
          MR_Word STATE_VARIABLE_Info_70_148;
          MR_Word STATE_VARIABLE_Info_76_153;
          MR_Word TypeAssignSet1_156;
          MR_Word ConsDefn_175;
          MR_Word ConsDefns_176;
          MR_Word STATE_VARIABLE_ConsTypeAssignSet_15_181;

          Sources_41 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0), (MR_Word) (&check_hlds__typecheck_scalar_common_2[4]), ConsDefns_33);
          {
            Symbol_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Symbol_42, 0) = ((MR_Box) (ConsId_14));
            MR_hl_field(MR_mktag(1), Symbol_42, 1) = ((MR_Box) (Sources_41));
          }
          check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_p_0(Symbol_42, Context_12, STATE_VARIABLE_Info_0_54, &STATE_VARIABLE_Info_70_148);
          ConsDefn_175 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsDefns_33, (MR_Integer) 0))));
          ConsDefns_176 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsDefns_33, (MR_Integer) 1))));
          check_hlds__typecheck__get_cons_type_assigns_for_cons_defn_4_p_0(ConsDefn_175, TypeAssignSet0_17, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_ConsTypeAssignSet_15_181);
          check_hlds__typecheck__get_cons_type_assigns_for_cons_defns_4_p_0(ConsDefns_176, TypeAssignSet0_17, STATE_VARIABLE_ConsTypeAssignSet_15_181, &ConsTypeAssignSet_137);
          succeeded = (ConsTypeAssignSet_137 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (TypeAssignSet0_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
            }
          }
          if (succeeded)
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.typecheck_unify_var_functor\'/10", (MR_String) "undefined cons\?");
              return;
            }
          }
          check_hlds__typecheck__typecheck_var_functor_types_4_p_0(Var_13, ConsTypeAssignSet_137, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet_140);
          succeeded = (ArgsTypeAssignSet_140 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (ConsTypeAssignSet_137 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
            }
          }
          if (succeeded)
          {
            MR_Word ConsIdSpec_113;

            ConsIdSpec_113 = check_hlds__typecheck_errors__report_error_functor_type_8_f_0(STATE_VARIABLE_Info_70_148, UnifyContext_11, Context_12, Var_13, ConsDefns_33, ConsId_14, Arity_32, TypeAssignSet0_17);
            check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(ConsIdSpec_113, STATE_VARIABLE_Info_70_148, &STATE_VARIABLE_Info_76_153);
          }
          else
            STATE_VARIABLE_Info_76_153 = STATE_VARIABLE_Info_70_148;
          check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(ArgVars_15, ArgsTypeAssignSet_140, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_156);
          if ((TypeAssignSet1_156 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *TypeAssignSet_18 = TypeAssignSet0_17;
            if ((ArgsTypeAssignSet_140 == (MR_Word) ((MR_Unsigned) 0U)))
              *STATE_VARIABLE_Info_55 = STATE_VARIABLE_Info_76_153;
            else
            {
              MR_Word ArgSpec_125;

              ArgSpec_125 = check_hlds__typecheck_errors__report_error_functor_arg_types_8_f_0(ClauseContext_20, UnifyContext_11, Context_12, Var_13, ConsDefns_33, ConsId_14, ArgVars_15, ArgsTypeAssignSet_140);
              check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(ArgSpec_125, STATE_VARIABLE_Info_76_153, STATE_VARIABLE_Info_55);
            }
          }
          else
          {
            *TypeAssignSet_18 = TypeAssignSet1_156;
            *STATE_VARIABLE_Info_55 = STATE_VARIABLE_Info_76_153;
          }
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word ArgVars_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TypeAssignSet_5 = STATE_VARIABLE_TypeAssignSet_0_4;
    else
    {
      MR_Word ConsTypeAssign_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ConsTypeAssigns_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word TypeAssign_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsTypeAssign_13, (MR_Integer) 0))));
      MR_Word ArgTypes_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsTypeAssign_13, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TypeAssignSet_21_21;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;

      if ((ArgVars_2 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((ArgTypes_17 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            STATE_VARIABLE_TypeAssignSet_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_21_21, 0) = ((MR_Box) (TypeAssign_16));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_21_21, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_4));
          }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.type_assign_vars_have_types\'/6", (MR_String) "length mismatch");
            return;
          }
        }
      else
      if ((ArgTypes_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.type_assign_vars_have_types\'/6", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word Type_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_17, (MR_Integer) 0))));
        MR_Word Types_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_17, (MR_Integer) 1))));
        MR_Word TypeAssignSet1_50;
        MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_2, (MR_Integer) 1))));
        MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_2, (MR_Integer) 0))));
        MR_Word VarTypes0_60;
        MR_Word MaybeOldVarType_61;
        MR_Word VarTypes_62;

        check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign_16, &VarTypes0_60);
        hlds__vartypes__search_insert_var_type_5_p_0(Var_53, Type_46, &MaybeOldVarType_61, VarTypes0_60, &VarTypes_62);
        if ((MaybeOldVarType_61 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word TypeAssign_65;

          check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_62, TypeAssign_16, &TypeAssign_65);
          {
            TypeAssignSet1_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), TypeAssignSet1_50, 0) = ((MR_Box) (TypeAssign_65));
            MR_hl_field(MR_mktag(1), TypeAssignSet1_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        {
          MR_Word OldVarType_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOldVarType_61, (MR_Integer) 0))));
          MR_Word TypeAssign1_64;
          MR_Word HeadTypeParams_73;
          MR_Word TypeBindings0_74;
          MR_Word TypeBindings_75;

          check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign_16, &HeadTypeParams_73);
          check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_16, &TypeBindings0_74);
          succeeded = parse_tree__prog_type__type_unify_5_p_0(OldVarType_63, Type_46, HeadTypeParams_73, TypeBindings0_74, &TypeBindings_75);
          if (succeeded)
          {
            check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_75, TypeAssign_16, &TypeAssign1_64);
            succeeded = MR_TRUE;
          }
          if (succeeded)
            {
              TypeAssignSet1_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), TypeAssignSet1_50, 0) = ((MR_Box) (TypeAssign1_64));
              MR_hl_field(MR_mktag(1), TypeAssignSet1_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          else
            TypeAssignSet1_50 = (MR_Word) ((MR_Unsigned) 0U);
        }
        check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_115_95_118_97_114_115_95_104_97_118_101_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0(TypeAssignSet1_50, Var_52, Types_47, STATE_VARIABLE_TypeAssignSet_0_4, &STATE_VARIABLE_TypeAssignSet_21_21);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ConsTypeAssigns_14;
      next_value_of_STATE_VARIABLE_TypeAssignSet_0_4 = STATE_VARIABLE_TypeAssignSet_21_21;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_TypeAssignSet_0_4 = next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_115_95_118_97_114_115_95_104_97_118_101_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgVars_3,
  MR_Word Types_4,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_5,
  MR_Word * STATE_VARIABLE_TypeAssignSet_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TypeAssignSet_6 = STATE_VARIABLE_TypeAssignSet_0_5;
    else
    {
      MR_Word TypeAssign_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TypeAssigns_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TypeAssignSet_21_21;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_5;

      if ((ArgVars_3 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((Types_4 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            STATE_VARIABLE_TypeAssignSet_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_21_21, 0) = ((MR_Box) (TypeAssign_14));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_21_21, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_5));
          }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.type_assign_vars_have_types\'/6", (MR_String) "length mismatch");
            return;
          }
        }
      else
      if ((Types_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.type_assign_vars_have_types\'/6", (MR_String) "length mismatch");
          return;
        }
      }
      else
      {
        MR_Word Type_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Types_4, (MR_Integer) 0))));
        MR_Word Types_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Types_4, (MR_Integer) 1))));
        MR_Word TypeAssignSet1_50;
        MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_3, (MR_Integer) 1))));
        MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_3, (MR_Integer) 0))));
        MR_Word VarTypes0_60;
        MR_Word MaybeOldVarType_61;
        MR_Word VarTypes_62;

        check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign_14, &VarTypes0_60);
        hlds__vartypes__search_insert_var_type_5_p_0(Var_53, Type_46, &MaybeOldVarType_61, VarTypes0_60, &VarTypes_62);
        if ((MaybeOldVarType_61 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word TypeAssign_65;

          check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_62, TypeAssign_14, &TypeAssign_65);
          {
            TypeAssignSet1_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), TypeAssignSet1_50, 0) = ((MR_Box) (TypeAssign_65));
            MR_hl_field(MR_mktag(1), TypeAssignSet1_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        {
          MR_Word OldVarType_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOldVarType_61, (MR_Integer) 0))));
          MR_Word TypeAssign1_64;
          MR_Word HeadTypeParams_73;
          MR_Word TypeBindings0_74;
          MR_Word TypeBindings_75;

          check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign_14, &HeadTypeParams_73);
          check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_14, &TypeBindings0_74);
          succeeded = parse_tree__prog_type__type_unify_5_p_0(OldVarType_63, Type_46, HeadTypeParams_73, TypeBindings0_74, &TypeBindings_75);
          if (succeeded)
          {
            check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_75, TypeAssign_14, &TypeAssign1_64);
            succeeded = MR_TRUE;
          }
          if (succeeded)
            {
              TypeAssignSet1_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), TypeAssignSet1_50, 0) = ((MR_Box) (TypeAssign1_64));
              MR_hl_field(MR_mktag(1), TypeAssignSet1_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          else
            TypeAssignSet1_50 = (MR_Word) ((MR_Unsigned) 0U);
        }
        check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_115_95_118_97_114_115_95_104_97_118_101_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0(TypeAssignSet1_50, Var_52, Types_47, STATE_VARIABLE_TypeAssignSet_0_5, &STATE_VARIABLE_TypeAssignSet_21_21);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = TypeAssigns_15;
      next_value_of_STATE_VARIABLE_TypeAssignSet_0_5 = STATE_VARIABLE_TypeAssignSet_21_21;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_TypeAssignSet_0_5 = next_value_of_STATE_VARIABLE_TypeAssignSet_0_5;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_ConsTypeInfo_16;

    succeeded = check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), &conv1_ConsTypeInfo_16);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv1_ConsTypeInfo_16));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0(
  MR_Word Info_7,
  MR_Word Functor_8,
  MR_Integer Arity_9,
  MR_Word GoalId_10,
  MR_Word * ConsInfos_11,
  MR_Word * ConsErrors_12)
{
  {
    MR_bool succeeded;
    MR_Word IsFieldAccessFunc_13;
    MR_Word PredStatus_14;
    MR_Word Var_16;

    check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_p_0(Info_7, &IsFieldAccessFunc_13);
    succeeded = (IsFieldAccessFunc_13 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      PredStatus_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IsFieldAccessFunc_13, (MR_Integer) 0))));
      Var_16 = (MR_Word) (PredStatus_14);
      succeeded = (Var_16 != (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word FieldAccessConsInfos_15;
      MR_Word TypeCtorInfo_19_30;
      MR_Word TypeInfo_20_31;
      MR_Word TypeCtorInfo_23_34;
      MR_Word TypeCtorInfo_24_35;
      MR_Word Name_22;
      MR_Word ModuleInfo_24;
      MR_Word AccessType_25;
      MR_Word FieldName_26;
      MR_Word CtorFieldTable_27;
      MR_Word FieldDefns_28;
      MR_Word Var_29;
      MR_Integer Var_36;
      MR_Integer Var_37;
      MR_Box conv0_FieldDefns_28;

      succeeded = ((((MR_tag((MR_Word) Functor_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Name_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_8, (MR_Integer) 1))));
        Var_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_8, (MR_Integer) 2))));
        succeeded = (Arity_9 == Var_36);
        if (succeeded)
        {
          check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(Info_7, &ModuleInfo_24);
          succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(ModuleInfo_24, Name_22, &Var_37, &AccessType_25, &FieldName_26);
          if (succeeded)
          {
            succeeded = (Arity_9 == Var_37);
            if (succeeded)
            {
              hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(ModuleInfo_24, &CtorFieldTable_27);
              TypeCtorInfo_19_30 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
              TypeInfo_20_31 = (MR_Word) (&check_hlds__typecheck_scalar_common_1[5]);
              succeeded = mercury__map__search_3_p_0(TypeCtorInfo_19_30, TypeInfo_20_31, CtorFieldTable_27, ((MR_Box) (FieldName_26)), &conv0_FieldDefns_28);
              if (succeeded)
              {
                FieldDefns_28 = ((MR_Word) (conv0_FieldDefns_28));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                TypeCtorInfo_23_34 = (MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0);
                TypeCtorInfo_24_35 = (MR_Word) (&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0);
                {
                  Var_29 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_7[0]));
                  MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (Info_7));
                  MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) (GoalId_10));
                  MR_hl_field(MR_mktag(0), Var_29, 5) = ((MR_Box) (Name_22));
                  MR_hl_field(MR_mktag(0), Var_29, 6) = ((MR_Box) (Arity_9));
                  MR_hl_field(MR_mktag(0), Var_29, 7) = ((MR_Box) (AccessType_25));
                  MR_hl_field(MR_mktag(0), Var_29, 8) = ((MR_Box) (FieldName_26));
                }
                mercury__list__filter_map_3_p_0(TypeCtorInfo_23_34, TypeCtorInfo_24_35, Var_29, FieldDefns_28, &FieldAccessConsInfos_15);
                succeeded = MR_TRUE;
              }
            }
          }
        }
      }
      if (succeeded)
        check_hlds__typecheck__split_cons_errors_3_p_0(FieldAccessConsInfos_15, ConsInfos_11, ConsErrors_12);
      else
      {
        *ConsInfos_11 = (MR_Word) ((MR_Unsigned) 0U);
        *ConsErrors_12 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
    else
      check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_p_0(Info_7, Functor_8, Arity_9, GoalId_10, ConsInfos_11, ConsErrors_12);
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_p_0(
  MR_Word Info_7,
  MR_Word Functor_8,
  MR_Integer Arity_9,
  MR_Word GoalId_10,
  MR_Word * ConsInfos_11,
  MR_Word * DataConsErrors_12)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_77_77;
    MR_Word EmptyConstraints_13;
    MR_Word ConsTable_14;
    MR_Word PlainMaybeConsInfos_19;
    MR_Word UnivQuantifiedMaybeConsInfos_25;
    MR_Word FieldAccessMaybeConsInfos_27;
    MR_Word DataMaybeConsInfos_28;
    MR_Word DataConsInfos_29;
    MR_Word BuiltinConsInfos_35;
    MR_Word TupleConsInfos_46;
    MR_Word PredConsInfos_48;
    MR_Word ApplyConsInfos_50;
    MR_Word OtherConsInfos_51;
    MR_Word Var_54;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word HLDS_ConsDefns_18;
    MR_Word HLDS_ExistQConsDefns_24;
    MR_Word Name_20;
    MR_Word FunctorTypeCtor_21;
    MR_Word OrigName_22;
    MR_Word OrigFunctor_23;
    MR_Integer Var_78;
    MR_Word FieldAccessMaybeConsInfosPrime_26;
    MR_String BuiltInTypeName_30;
    MR_Integer TupleArity_36;
    MR_Word PredConsInfosPrime_47;
    MR_Word ApplyConsInfosPrime_49;

    hlds__hlds_class__empty_hlds_constraints_1_p_0(&EmptyConstraints_13);
    check_hlds__typecheck_info__typecheck_info_get_cons_table_2_p_0(Info_7, &ConsTable_14);
    succeeded = ((((MR_tag((MR_Word) Functor_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      succeeded = hlds__hlds_cons__search_cons_table_3_p_0(ConsTable_14, Functor_8, &HLDS_ConsDefns_18);
    }
    if (succeeded)
    {
      check_hlds__typecheck__convert_cons_defn_list_5_p_0(Info_7, GoalId_10, (MR_Integer) 2, HLDS_ConsDefns_18, &PlainMaybeConsInfos_19);
    }
    else
      PlainMaybeConsInfos_19 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = ((((MR_tag((MR_Word) Functor_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Name_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_8, (MR_Integer) 1))));
      Var_78 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_8, (MR_Integer) 2))));
      FunctorTypeCtor_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_8, (MR_Integer) 3))));
      succeeded = (Arity_9 == Var_78);
      if (succeeded)
      {
        succeeded = parse_tree__prog_type__remove_new_prefix_2_p_0(Name_20, &OrigName_22);
        if (succeeded)
        {
          {
            OrigFunctor_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), OrigFunctor_23, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), OrigFunctor_23, 1) = ((MR_Box) (OrigName_22));
            MR_hl_field(MR_mktag(3), OrigFunctor_23, 2) = ((MR_Box) (Arity_9));
            MR_hl_field(MR_mktag(3), OrigFunctor_23, 3) = ((MR_Box) (FunctorTypeCtor_21));
          }
          succeeded = hlds__hlds_cons__search_cons_table_3_p_0(ConsTable_14, OrigFunctor_23, &HLDS_ExistQConsDefns_24);
        }
      }
    }
    if (succeeded)
    {
      check_hlds__typecheck__convert_cons_defn_list_5_p_0(Info_7, GoalId_10, (MR_Integer) 0, HLDS_ExistQConsDefns_24, &UnivQuantifiedMaybeConsInfos_25);
    }
    else
      UnivQuantifiedMaybeConsInfos_25 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = check_hlds__typecheck__builtin_field_access_function_type_5_p_0(Info_7, GoalId_10, Functor_8, Arity_9, &FieldAccessMaybeConsInfosPrime_26);
    if (succeeded)
      FieldAccessMaybeConsInfos_27 = FieldAccessMaybeConsInfosPrime_26;
    else
      FieldAccessMaybeConsInfos_27 = (MR_Word) ((MR_Unsigned) 0U);
    Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0), UnivQuantifiedMaybeConsInfos_25, FieldAccessMaybeConsInfos_27);
    DataMaybeConsInfos_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0), PlainMaybeConsInfos_19, Var_54);
    check_hlds__typecheck__split_cons_errors_3_p_0(DataMaybeConsInfos_28, &DataConsInfos_29, DataConsErrors_12);
    succeeded = (Arity_9 == (MR_Integer) 0);
    if (succeeded)
      switch (MR_tag((MR_Word) Functor_8)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_8, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              {
                MR_String String_92;
                MR_Word Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_8, (MR_Integer) 1))));
                MR_Integer Var_96 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_8, (MR_Integer) 2))));
                MR_Char Var_94;

                succeeded = (Var_96 == (MR_Integer) 0);
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) Var_95)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    String_92 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_95, (MR_Integer) 0))));
                    BuiltInTypeName_30 = (MR_String) "character";
                    succeeded = mercury__string__char_to_string_2_p_1(&Var_94, String_92);
                  }
                }
              }
              break;
            case (MR_Integer) 5:
              {
                BuiltInTypeName_30 = (MR_String) "int";
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 6:
              {
                BuiltInTypeName_30 = (MR_String) "uint";
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 7:
              {
                BuiltInTypeName_30 = (MR_String) "int8";
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 8:
              {
                BuiltInTypeName_30 = (MR_String) "uint8";
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 9:
              {
                BuiltInTypeName_30 = (MR_String) "int16";
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 10:
              {
                BuiltInTypeName_30 = (MR_String) "uint16";
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 11:
              {
                BuiltInTypeName_30 = (MR_String) "int32";
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 12:
              {
                BuiltInTypeName_30 = (MR_String) "uint32";
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 13:
              {
                BuiltInTypeName_30 = (MR_String) "int64";
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 14:
              {
                BuiltInTypeName_30 = (MR_String) "uint64";
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 15:
              {
                BuiltInTypeName_30 = (MR_String) "float";
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 16:
              {
                BuiltInTypeName_30 = (MR_String) "character";
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 17:
              {
                BuiltInTypeName_30 = (MR_String) "string";
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 18:
              {
                MR_String Name_97 = ((MR_String) ((MR_hl_field(MR_mktag(3), Functor_8, (MR_Integer) 1))));
                MR_Integer lo_0 = (MR_Integer) 0;
                MR_Integer hi_1 = (MR_Integer) 4;
                MR_Integer mid_2;
                MR_Integer result_3;

                // binary string simple lookup switch
                ;
                do
                {
                  mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
                  result_3 = MR_strcmp(Name_97, ((&check_hlds__typecheck_vector_common_9[0 + mid_2]))->check_hlds__typecheck__vector_common_type_9_0__vct_9_f_0);
                  if ((result_3 == (MR_Integer) 0))
                  {
                    BuiltInTypeName_30 = ((&check_hlds__typecheck_vector_common_9[0 + mid_2]))->check_hlds__typecheck__vector_common_type_9_0__vct_9_f_1;
                    succeeded = MR_TRUE;
                    // jump out of search loop
                    ;
                    goto label_0;
                  }
                  else
                  if ((result_3 < (MR_Integer) 0))
                    hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
                  else
                    lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
                }
                while ((lo_0 <= hi_1));
                succeeded = MR_FALSE;
              label_0:;
              }
              break;
          }
          break;
      }
    if (succeeded)
    {
      MR_Word TypeCtor_31;
      MR_Word ConsType_32;
      MR_Word ConsTypeVarSet_33;
      MR_Word ConsInfo_34;
      MR_Word Var_55;
      MR_Word Var_60;

      {
        Var_55 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (BuiltInTypeName_30));
      }
      {
        TypeCtor_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeCtor_31, 0) = ((MR_Box) (Var_55));
        MR_hl_field(MR_mktag(0), TypeCtor_31, 1) = ((MR_Box) ((MR_Integer) 0));
      }
      parse_tree__prog_type__construct_type_3_p_0(TypeCtor_31, (MR_Word) ((MR_Unsigned) 0U), &ConsType_32);
      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &ConsTypeVarSet_33);
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (BuiltInTypeName_30));
      }
      {
        ConsInfo_34 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConsInfo_34, 0) = ((MR_Box) (ConsTypeVarSet_33));
        MR_hl_field(MR_mktag(0), ConsInfo_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), ConsInfo_34, 2) = ((MR_Box) (ConsType_32));
        MR_hl_field(MR_mktag(0), ConsInfo_34, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), ConsInfo_34, 4) = ((MR_Box) (EmptyConstraints_13));
        MR_hl_field(MR_mktag(0), ConsInfo_34, 5) = ((MR_Box) (Var_60));
      }
      {
        BuiltinConsInfos_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), BuiltinConsInfos_35, 0) = ((MR_Box) (ConsInfo_34));
        MR_hl_field(MR_mktag(1), BuiltinConsInfos_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
      BuiltinConsInfos_35 = (MR_Word) ((MR_Unsigned) 0U);
    if (((((MR_tag((MR_Word) Functor_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
    {
      MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_8, (MR_Integer) 1))));
      MR_String Var_63;

      TupleArity_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_8, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Var_62)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_63 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 0))));
        succeeded = (strcmp(Var_63, (MR_String) "{}") == 0);
      }
    }
    else
    if (((((MR_tag((MR_Word) Functor_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
    {
      TupleArity_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_8, (MR_Integer) 1))));
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      MR_Word TupleConsTypeVarSet0_38;
      MR_Word TupleArgTVars_39;
      MR_Word TupleConsTypeVarSet_40;
      MR_Word TupleArgTypes_41;
      MR_Word TupleTypeCtor_42;
      MR_Word TupleConsType_43;
      MR_Word TupleConsInfo_45;
      MR_Word Var_64;

      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TupleConsTypeVarSet0_38);
      mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TupleArity_36, &TupleArgTVars_39, TupleConsTypeVarSet0_38, &TupleConsTypeVarSet_40);
      Var_64 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
      parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_64, TupleArgTVars_39, &TupleArgTypes_41);
      {
        TupleTypeCtor_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TupleTypeCtor_42, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_3[14]));
        MR_hl_field(MR_mktag(0), TupleTypeCtor_42, 1) = ((MR_Box) (TupleArity_36));
      }
      parse_tree__prog_type__construct_type_3_p_0(TupleTypeCtor_42, TupleArgTypes_41, &TupleConsType_43);
      {
        TupleConsInfo_45 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TupleConsInfo_45, 0) = ((MR_Box) (TupleConsTypeVarSet_40));
        MR_hl_field(MR_mktag(0), TupleConsInfo_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), TupleConsInfo_45, 2) = ((MR_Box) (TupleConsType_43));
        MR_hl_field(MR_mktag(0), TupleConsInfo_45, 3) = ((MR_Box) (TupleArgTypes_41));
        MR_hl_field(MR_mktag(0), TupleConsInfo_45, 4) = ((MR_Box) (EmptyConstraints_13));
        MR_hl_field(MR_mktag(0), TupleConsInfo_45, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_3[15])));
      }
      {
        TupleConsInfos_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TupleConsInfos_46, 0) = ((MR_Box) (TupleConsInfo_45));
        MR_hl_field(MR_mktag(1), TupleConsInfos_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
      TupleConsInfos_46 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = check_hlds__typecheck__builtin_pred_type_5_p_0(Info_7, Functor_8, Arity_9, GoalId_10, &PredConsInfosPrime_47);
    if (succeeded)
      PredConsInfos_48 = PredConsInfosPrime_47;
    else
      PredConsInfos_48 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(Functor_8, Arity_9, &ApplyConsInfosPrime_49);
    if (succeeded)
      ApplyConsInfos_50 = ApplyConsInfosPrime_49;
    else
      ApplyConsInfos_50 = (MR_Word) ((MR_Unsigned) 0U);
    TypeCtorInfo_77_77 = (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0);
    Var_71 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_77_77, PredConsInfos_48, ApplyConsInfos_50);
    Var_70 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_77_77, TupleConsInfos_46, Var_71);
    OtherConsInfos_51 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_77_77, BuiltinConsInfos_35, Var_70);
    *ConsInfos_11 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_77_77, DataConsInfos_29, OtherConsInfos_51);
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word ConsId_6,
  MR_Integer Arity_7,
  MR_Word * ConsTypeInfos_8)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word TypeCtorInfo_21_42;
    MR_Word TypeInfo_22_43;
    MR_Word TypeCtorInfo_23_44;
    MR_String ApplyName_9;
    MR_String ApplyNameToUse_12;
    MR_Word Purity_13;
    MR_Integer Arity1_14;
    MR_Word TypeVarSet_15;
    MR_Word FuncType_16;
    MR_Word ArgTypes_17;
    MR_Word RetType_18;
    MR_Word ExistQVars_19;
    MR_Word EmptyConstraints_20;
    MR_Word Var_21;
    MR_Integer Var_22;
    MR_Integer Var_23;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word TypeVarSet0_36;
    MR_Word ArgTypeVars_37;
    MR_Word TypeVarSet1_38;
    MR_Word RetTypeVar_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_6, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
      if (succeeded)
      {
        ApplyName_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
        // binary string jump switch
        ;
        lo_0 = (MR_Integer) 0;
        hi_1 = (MR_Integer) 3;
        do
        {
          mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
          result_3 = MR_strcmp(ApplyName_9, ((&check_hlds__typecheck_vector_common_8[0 + mid_2]))->check_hlds__typecheck__vector_common_type_8_0__vct_8_f_0);
          if ((result_3 == (MR_Integer) 0))
          {
            switch (((&check_hlds__typecheck_vector_common_8[0 + mid_2]))->check_hlds__typecheck__vector_common_type_8_0__vct_8_f_1) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  // case ""
                  ;
                  ApplyNameToUse_12 = (MR_String) "apply";
                  Purity_13 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 1:
                {
                  // case "apply"
                  ;
                  ApplyNameToUse_12 = ApplyName_9;
                  Purity_13 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  // case "impure_apply"
                  ;
                  ApplyNameToUse_12 = ApplyName_9;
                  Purity_13 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  // case "semipure_apply"
                  ;
                  ApplyNameToUse_12 = ApplyName_9;
                  Purity_13 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                break;
            }
            // jump out of search loop
            ;
            goto label_0;
          }
          else
          if ((result_3 < (MR_Integer) 0))
            hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
          else
            lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
        }
        while ((lo_0 <= hi_1));
        succeeded = MR_FALSE;
      label_0:;
        if (succeeded)
        {
          Var_22 = (MR_Integer) 1;
          succeeded = (Arity_7 >= Var_22);
          if (succeeded)
          {
            Var_23 = (MR_Integer) 1;
            Arity1_14 = (MR_Integer) ((MR_Unsigned) Arity_7 - (MR_Unsigned) Var_23);
            TypeCtorInfo_21_42 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
            mercury__varset__init_1_p_0(TypeCtorInfo_21_42, &TypeVarSet0_36);
            mercury__varset__new_vars_4_p_0(TypeCtorInfo_21_42, Arity1_14, &ArgTypeVars_37, TypeVarSet0_36, &TypeVarSet1_38);
            mercury__varset__new_var_3_p_0(TypeCtorInfo_21_42, &RetTypeVar_39, TypeVarSet1_38, &TypeVarSet_15);
            TypeInfo_22_43 = (MR_Word) (&check_hlds__typecheck_scalar_common_1[2]);
            TypeCtorInfo_23_44 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
            Var_40 = mercury__map__init_0_f_0(TypeInfo_22_43, TypeCtorInfo_23_44);
            parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_40, ArgTypeVars_37, &ArgTypes_17);
            Var_41 = (MR_Word) ((MR_Unsigned) 0U);
            {
              RetType_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), RetType_18, 0) = ((MR_Box) (RetTypeVar_39));
              MR_hl_field(MR_mktag(0), RetType_18, 1) = ((MR_Box) (Var_41));
            }
            parse_tree__prog_type__construct_higher_order_func_type_5_p_0(Purity_13, ArgTypes_17, RetType_18, &FuncType_16);
            ExistQVars_19 = (MR_Word) ((MR_Unsigned) 0U);
            hlds__hlds_class__empty_hlds_constraints_1_p_0(&EmptyConstraints_20);
            Var_28 = (MR_Word) ((MR_Unsigned) 0U);
            {
              Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (FuncType_16));
              MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (ArgTypes_17));
            }
            {
              Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (ApplyNameToUse_12));
            }
            {
              Var_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (TypeVarSet_15));
              MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (ExistQVars_19));
              MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) (RetType_18));
              MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (Var_26));
              MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (EmptyConstraints_20));
              MR_hl_field(MR_mktag(0), Var_25, 5) = ((MR_Box) (Var_27));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *ConsTypeInfos_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_25));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_28));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word X_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Xs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Y_14;
    MR_Word * AddrYs_16;

    check_hlds__typecheck__convert_cons_defn_5_p_1(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, X_12, &Y_14);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Y_14));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrYs_16 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__5_5, (MR_Integer) 1)));
    check_hlds__typecheck__LCMCpr_convert_cons_defn_list_1_5_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Xs_13, AddrYs_16);
  }
}

static void MR_CALL 
check_hlds__typecheck__LCMCpr_convert_cons_defn_list_1_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * AddrOfHeadVar__5_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__5_17 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word X_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Xs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Y_14;
      MR_Word * AddrYs_16;
      MR_Word HeadVar__5_18;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word * next_value_of_AddrOfHeadVar__5_17;

      check_hlds__typecheck__convert_cons_defn_5_p_1(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, X_12, &Y_14);
      {
        HeadVar__5_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__5_18, 0) = ((MR_Box) (Y_14));
        MR_hl_field(MR_mktag(1), HeadVar__5_18, 1) = NULL;
      }
      AddrYs_16 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__5_18, (MR_Integer) 1)));
      *AddrOfHeadVar__5_17 = HeadVar__5_18;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Xs_13;
      next_value_of_AddrOfHeadVar__5_17 = AddrYs_16;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      AddrOfHeadVar__5_17 = next_value_of_AddrOfHeadVar__5_17;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck__convert_cons_defn_5_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_43;

    conv0_LambdaHeadVar__2_43 = check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3459__2_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_43));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_5_p_1(
  MR_Word Info_6,
  MR_Word GoalId_7,
  MR_Word Action_8,
  MR_Word HLDS_ConsDefn_9,
  MR_Word * ConsTypeInfo_10)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HLDS_ConsDefn_9, (MR_Integer) 0))));
    MR_Word ConsTypeVarSet_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HLDS_ConsDefn_9, (MR_Integer) 1))));
    MR_Word ConsTypeParams_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HLDS_ConsDefn_9, (MR_Integer) 2))));
    MR_Word ConsTypeKinds_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HLDS_ConsDefn_9, (MR_Integer) 3))));
    MR_Word MaybeExistConstraints_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HLDS_ConsDefn_9, (MR_Integer) 4))));
    MR_Word Args_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HLDS_ConsDefn_9, (MR_Integer) 5))));
    MR_Word ArgTypes_18;
    MR_Word TypeTable_20;
    MR_Word TypeDefn_21;
    MR_Word Body_22;
    MR_Word PredId_23;
    MR_Word ModuleInfo_24;
    MR_Word PredInfo_25;
    MR_Word PredStatus_26;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_63;
    MR_Word Var_46;

    ArgTypes_18 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__typecheck_scalar_common_2[3]), Args_16);
    check_hlds__typecheck_info__typecheck_info_get_type_table_2_p_0(Info_6, &TypeTable_20);
    hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_20, TypeCtor_11, &TypeDefn_21);
    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_21, &Body_22);
    check_hlds__typecheck_info__typecheck_info_get_pred_id_2_p_0(Info_6, &PredId_23);
    check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(Info_6, &ModuleInfo_24);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_24, PredId_23, &PredInfo_25);
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_25, &PredStatus_26);
    succeeded = ((MR_tag((MR_Word) Body_22)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body_22, (MR_Integer) 3))));
      succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_45 = (MR_Word) ((MR_Unsigned) 8U);
        hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_25, &Var_63);
        succeeded = hlds__hlds_pred____Unify____goal_type_0_0(Var_45, Var_63);
        succeeded = !(succeeded);
        if (succeeded)
        {
          succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_25);
          succeeded = !(succeeded);
          if (succeeded)
          {
            Var_46 = (MR_Word) (PredStatus_26);
            succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_47;

      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (TypeCtor_11));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (TypeDefn_21));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *ConsTypeInfo_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_47));
      }
    }
    else
    {
      MR_Word TypeStatus_28;
      MR_Word Var_48;
      MR_Word Var_49;

      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_21, &TypeStatus_28);
      Var_48 = (MR_Word) (TypeStatus_28);
      succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 4U));
      if (succeeded)
      {
        succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_25);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_49 = (MR_Word) (PredStatus_26);
          succeeded = (Var_49 != (MR_Word) ((MR_Unsigned) 0U));
        }
      }
      if (succeeded)
        *ConsTypeInfo_10 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_3[13]));
      else
      {
        succeeded = (Action_8 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (MaybeExistConstraints_15 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MR_Word Var_51;

          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) (TypeCtor_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *ConsTypeInfo_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_51));
          }
        }
        else
        {
          MR_Word ConsTypeArgs_29;
          MR_Word ConsType_30;
          MR_Word ExistQVars0_32;
          MR_Word ExistProgConstraints_33;
          MR_Word ProgConstraints_37;
          MR_Word ExistQVars_38;
          MR_Word ClassTable_39;
          MR_Word Constraints_40;
          MR_Word Var_53;
          MR_Word Var_54;

          parse_tree__prog_type__var_list_to_type_list_3_p_0(ConsTypeKinds_14, ConsTypeParams_13, &ConsTypeArgs_29);
          parse_tree__prog_type__construct_type_3_p_0(TypeCtor_11, ConsTypeArgs_29, &ConsType_30);
          if ((MaybeExistConstraints_15 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            ExistQVars0_32 = (MR_Word) ((MR_Unsigned) 0U);
            ExistProgConstraints_33 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word ExistConstraints_34 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_15), (MR_Integer) 1));

            ExistQVars0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_34, (MR_Integer) 0))));
            ExistProgConstraints_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_34, (MR_Integer) 1))));
          }
          switch (Action_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                {
                  ProgConstraints_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ProgConstraints_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), ProgConstraints_37, 1) = ((MR_Box) (ExistProgConstraints_33));
                }
                ExistQVars_38 = ExistQVars0_32;
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  ProgConstraints_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ProgConstraints_37, 0) = ((MR_Box) (ExistProgConstraints_33));
                  MR_hl_field(MR_mktag(0), ProgConstraints_37, 1) = ((MR_Box) (ExistProgConstraints_33));
                }
                ExistQVars_38 = ExistQVars0_32;
              }
              break;
            case (MR_Integer) 0:
              {
                {
                  ProgConstraints_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ProgConstraints_37, 0) = ((MR_Box) (ExistProgConstraints_33));
                  MR_hl_field(MR_mktag(0), ProgConstraints_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                ExistQVars_38 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
          }
          hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_24, &ClassTable_39);
          hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_39, ConsTypeVarSet_12, GoalId_7, ProgConstraints_37, &Constraints_40);
          {
            Var_54 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (TypeCtor_11));
          }
          {
            Var_53 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (ConsTypeVarSet_12));
            MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (ExistQVars_38));
            MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) (ConsType_30));
            MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (ArgTypes_18));
            MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) (Constraints_40));
            MR_hl_field(MR_mktag(0), Var_53, 5) = ((MR_Box) (Var_54));
          }
          *ConsTypeInfo_10 = (MR_Word) ((MR_Word) (Var_53));
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__split_cons_errors_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word MaybeConsInfo_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word MaybeConsInfos_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word InfosTail_8;
    MR_Word ErrorsTail_9;

    check_hlds__typecheck__split_cons_errors_3_p_0(MaybeConsInfos_5, &InfosTail_8, &ErrorsTail_9);
    if (((MR_tag((MR_Word) MaybeConsInfo_4)) == (MR_Integer) 1))
    {
      MR_Word ConsError_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeConsInfo_4, (MR_Integer) 0))));

      *HeadVar__2_2 = InfosTail_8;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConsError_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ErrorsTail_9));
      }
    }
    else
    {
      MR_Word ConsInfo_10 = (MR_Word) ((MR_Word) (MaybeConsInfo_4));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConsInfo_10));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (InfosTail_8));
      }
      *HeadVar__3_3 = ErrorsTail_9;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__builtin_field_access_function_type_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_ConsTypeInfo_16;

    succeeded = check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), &conv1_ConsTypeInfo_16);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv1_ConsTypeInfo_16));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__builtin_field_access_function_type_5_p_0(
  MR_Word Info_6,
  MR_Word GoalId_7,
  MR_Word ConsId_8,
  MR_Integer Arity_9,
  MR_Word * MaybeConsTypeInfos_10)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word TypeCtorInfo_19_19;
    MR_Word TypeInfo_20_20;
    MR_Word TypeCtorInfo_23_23;
    MR_Word TypeCtorInfo_24_24;
    MR_Word Name_11;
    MR_Word ModuleInfo_13;
    MR_Word AccessType_14;
    MR_Word FieldName_15;
    MR_Word CtorFieldTable_16;
    MR_Word FieldDefns_17;
    MR_Word Var_18;
    MR_Integer Var_25;
    MR_Integer Var_26;
    MR_Box conv0_FieldDefns_17;

    if (succeeded)
    {
      Name_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 1))));
      Var_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 2))));
      succeeded = (Arity_9 == Var_25);
      if (succeeded)
      {
        check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(Info_6, &ModuleInfo_13);
        succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(ModuleInfo_13, Name_11, &Var_26, &AccessType_14, &FieldName_15);
        if (succeeded)
        {
          succeeded = (Arity_9 == Var_26);
          if (succeeded)
          {
            hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(ModuleInfo_13, &CtorFieldTable_16);
            TypeCtorInfo_19_19 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
            TypeInfo_20_20 = (MR_Word) (&check_hlds__typecheck_scalar_common_1[5]);
            succeeded = mercury__map__search_3_p_0(TypeCtorInfo_19_19, TypeInfo_20_20, CtorFieldTable_16, ((MR_Box) (FieldName_15)), &conv0_FieldDefns_17);
            if (succeeded)
            {
              FieldDefns_17 = ((MR_Word) (conv0_FieldDefns_17));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              TypeCtorInfo_23_23 = (MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0);
              TypeCtorInfo_24_24 = (MR_Word) (&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0);
              {
                Var_18 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_7[0]));
                MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (check_hlds__typecheck__builtin_field_access_function_type_5_p_0_1));
                MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Info_6));
                MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (GoalId_7));
                MR_hl_field(MR_mktag(0), Var_18, 5) = ((MR_Box) (Name_11));
                MR_hl_field(MR_mktag(0), Var_18, 6) = ((MR_Box) (Arity_9));
                MR_hl_field(MR_mktag(0), Var_18, 7) = ((MR_Box) (AccessType_14));
                MR_hl_field(MR_mktag(0), Var_18, 8) = ((MR_Box) (FieldName_15));
              }
              mercury__list__filter_map_3_p_0(TypeCtorInfo_23_23, TypeCtorInfo_24_24, Var_18, FieldDefns_17, MaybeConsTypeInfos_10);
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__builtin_pred_type_5_p_0(
  MR_Word Info_6,
  MR_Word ConsId_7,
  MR_Integer Arity_8,
  MR_Word GoalId_9,
  MR_Word * ConsTypeInfos_10)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word SymName_11;
    MR_Word PredicateTable_14;
    MR_Word IsFullyQualified_15;
    MR_Word PredIds_16;

    if (succeeded)
    {
      SymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));
      check_hlds__typecheck_info__typecheck_info_get_pred_table_2_p_0(Info_6, &PredicateTable_14);
      check_hlds__typecheck_info__typecheck_info_get_calls_are_fully_qualified_2_p_0(Info_6, &IsFullyQualified_15);
      hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredicateTable_14, IsFullyQualified_15, SymName_11, &PredIds_16);
      if ((PredIds_16 == (MR_Word) ((MR_Unsigned) 0U)))
        *ConsTypeInfos_10 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Preds_19;

        hlds__pred_table__predicate_table_get_preds_2_p_0(PredicateTable_14, &Preds_19);
        check_hlds__typecheck__accumulate_cons_type_infos_for_pred_ids_7_p_0(Info_6, Preds_19, GoalId_9, PredIds_16, Arity_8, (MR_Word) ((MR_Unsigned) 0U), ConsTypeInfos_10);
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck__accumulate_cons_type_infos_for_pred_ids_7_p_0(
  MR_Word Info_1,
  MR_Word PredTable_2,
  MR_Word GoalId_3,
  MR_Word HeadVar__4_4,
  MR_Integer Arity_5,
  MR_Word STATE_VARIABLE_ConsTypeInfos_0_6,
  MR_Word * STATE_VARIABLE_ConsTypeInfos_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ConsTypeInfos_7 = STATE_VARIABLE_ConsTypeInfos_0_6;
    else
    {
      MR_Word PredId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word PredIds_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ConsTypeInfos_24_24;
      MR_Word ModuleInfo_34;
      MR_Word ClassTable_35;
      MR_Word PredInfo_36;
      MR_Integer PredArity_37;
      MR_Word IsPredOrFunc_38;
      MR_Word PredClassContext_39;
      MR_Word PredTypeVarSet_40;
      MR_Word PredExistQVars_41;
      MR_Word CompleteArgTypes_42;
      MR_Word Purity_43;
      MR_Box conv0_PredInfo_36;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_ConsTypeInfos_0_6;

      check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(Info_1, &ModuleInfo_34);
      hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_34, &ClassTable_35);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_2, ((MR_Box) (PredId_18)), &conv0_PredInfo_36);
      PredInfo_36 = ((MR_Word) (conv0_PredInfo_36));
      PredArity_37 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_36);
      IsPredOrFunc_38 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_36);
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_36, &PredClassContext_39);
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_36, &PredTypeVarSet_40, &PredExistQVars_41, &CompleteArgTypes_42);
      hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_36, &Purity_43);
      succeeded = (IsPredOrFunc_38 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (PredArity_37 >= Arity_5);
        if (succeeded)
          succeeded = (PredExistQVars_41 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        MR_Word ArgTypes_44;
        MR_Word PredTypeParams_45;
        MR_Word PredType_46;
        MR_Word PredConstraints_47;
        MR_Word ConsTypeInfo_48;
        MR_Word Var_58;

        mercury__list__det_split_list_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Arity_5, CompleteArgTypes_42, &ArgTypes_44, &PredTypeParams_45);
        parse_tree__prog_type__construct_higher_order_pred_type_4_p_0(Purity_43, PredTypeParams_45, &PredType_46);
        hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_35, PredTypeVarSet_40, GoalId_3, PredClassContext_39, &PredConstraints_47);
        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (PredId_18));
        }
        {
          ConsTypeInfo_48 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ConsTypeInfo_48, 0) = ((MR_Box) (PredTypeVarSet_40));
          MR_hl_field(MR_mktag(0), ConsTypeInfo_48, 1) = ((MR_Box) (PredExistQVars_41));
          MR_hl_field(MR_mktag(0), ConsTypeInfo_48, 2) = ((MR_Box) (PredType_46));
          MR_hl_field(MR_mktag(0), ConsTypeInfo_48, 3) = ((MR_Box) (ArgTypes_44));
          MR_hl_field(MR_mktag(0), ConsTypeInfo_48, 4) = ((MR_Box) (PredConstraints_47));
          MR_hl_field(MR_mktag(0), ConsTypeInfo_48, 5) = ((MR_Box) (Var_58));
        }
        {
          STATE_VARIABLE_ConsTypeInfos_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_ConsTypeInfos_24_24, 0) = ((MR_Box) (ConsTypeInfo_48));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_ConsTypeInfos_24_24, 1) = ((MR_Box) (STATE_VARIABLE_ConsTypeInfos_0_6));
        }
      }
      else
      {
        MR_Integer PredAsFuncArity_49;
        MR_Integer Var_60;

        succeeded = (IsPredOrFunc_38 == (MR_Integer) 1);
        if (succeeded)
        {
          Var_60 = (MR_Integer) 1;
          PredAsFuncArity_49 = (MR_Integer) ((MR_Unsigned) PredArity_37 - (MR_Unsigned) Var_60);
          succeeded = (PredAsFuncArity_49 >= Arity_5);
          if (succeeded)
          {
            succeeded = (PredExistQVars_41 == (MR_Word) ((MR_Unsigned) 0U));
            if (!(succeeded))
              succeeded = (PredAsFuncArity_49 == Arity_5);
          }
        }
        if (succeeded)
        {
          MR_Word FuncArgTypes_50;
          MR_Word FuncTypeParams_51;
          MR_Word FuncArgTypeParams_52;
          MR_Word FuncReturnTypeParam_53;
          MR_Word FuncType_54;
          MR_Word Var_62;
          MR_Word PredConstraints_64;
          MR_Word ConsTypeInfo_65;
          MR_Box conv1_FuncReturnTypeParam_53;

          mercury__list__det_split_list_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Arity_5, CompleteArgTypes_42, &FuncArgTypes_50, &FuncTypeParams_51);
          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), FuncTypeParams_51, &FuncArgTypeParams_52, &conv1_FuncReturnTypeParam_53);
          FuncReturnTypeParam_53 = ((MR_Word) (conv1_FuncReturnTypeParam_53));
          if ((FuncArgTypeParams_52 == (MR_Word) ((MR_Unsigned) 0U)))
            FuncType_54 = FuncReturnTypeParam_53;
          else
          {
            parse_tree__prog_type__construct_higher_order_func_type_5_p_0(Purity_43, FuncArgTypeParams_52, FuncReturnTypeParam_53, &FuncType_54);
          }
          hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_35, PredTypeVarSet_40, GoalId_3, PredClassContext_39, &PredConstraints_64);
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (PredId_18));
          }
          {
            ConsTypeInfo_65 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ConsTypeInfo_65, 0) = ((MR_Box) (PredTypeVarSet_40));
            MR_hl_field(MR_mktag(0), ConsTypeInfo_65, 1) = ((MR_Box) (PredExistQVars_41));
            MR_hl_field(MR_mktag(0), ConsTypeInfo_65, 2) = ((MR_Box) (FuncType_54));
            MR_hl_field(MR_mktag(0), ConsTypeInfo_65, 3) = ((MR_Box) (FuncArgTypes_50));
            MR_hl_field(MR_mktag(0), ConsTypeInfo_65, 4) = ((MR_Box) (PredConstraints_64));
            MR_hl_field(MR_mktag(0), ConsTypeInfo_65, 5) = ((MR_Box) (Var_62));
          }
          {
            STATE_VARIABLE_ConsTypeInfos_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_ConsTypeInfos_24_24, 0) = ((MR_Box) (ConsTypeInfo_65));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_ConsTypeInfos_24_24, 1) = ((MR_Box) (STATE_VARIABLE_ConsTypeInfos_0_6));
          }
        }
        else
          STATE_VARIABLE_ConsTypeInfos_24_24 = STATE_VARIABLE_ConsTypeInfos_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = PredIds_19;
      next_value_of_STATE_VARIABLE_ConsTypeInfos_0_6 = STATE_VARIABLE_ConsTypeInfos_24_24;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_ConsTypeInfos_0_6 = next_value_of_STATE_VARIABLE_ConsTypeInfos_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_var_functor_types_4_p_0(
  MR_Word Var_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ArgsTypeAssignSet_0_3,
  MR_Word * STATE_VARIABLE_ArgsTypeAssignSet_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ArgsTypeAssignSet_4 = STATE_VARIABLE_ArgsTypeAssignSet_0_3;
    else
    {
      MR_Word ConsTypeAssign_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ConsTypeAssigns_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ArgsTypeAssignSet_15_15;
      MR_Word TypeAssign0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsTypeAssign_10, (MR_Integer) 0))));
      MR_Word ConsType_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsTypeAssign_10, (MR_Integer) 1))));
      MR_Word ConsArgTypes_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsTypeAssign_10, (MR_Integer) 2))));
      MR_Word VarTypes0_25;
      MR_Word MaybeTypeVar_26;
      MR_Word VarTypes_27;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_3;

      check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign0_22, &VarTypes0_25);
      hlds__vartypes__search_insert_var_type_5_p_0(Var_1, ConsType_23, &MaybeTypeVar_26, VarTypes0_25, &VarTypes_27);
      if ((MaybeTypeVar_26 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeAssign_34;
        MR_Word EmptyConstraints_35;
        MR_Word ArgsTypeAssign_36;

        check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_27, TypeAssign0_22, &TypeAssign_34);
        hlds__hlds_class__empty_hlds_constraints_1_p_0(&EmptyConstraints_35);
        {
          ArgsTypeAssign_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ArgsTypeAssign_36, 0) = ((MR_Box) (TypeAssign_34));
          MR_hl_field(MR_mktag(0), ArgsTypeAssign_36, 1) = ((MR_Box) (ConsArgTypes_24));
          MR_hl_field(MR_mktag(0), ArgsTypeAssign_36, 2) = ((MR_Box) (EmptyConstraints_35));
        }
        {
          STATE_VARIABLE_ArgsTypeAssignSet_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_ArgsTypeAssignSet_15_15, 0) = ((MR_Box) (ArgsTypeAssign_36));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_ArgsTypeAssignSet_15_15, 1) = ((MR_Box) (STATE_VARIABLE_ArgsTypeAssignSet_0_3));
        }
      }
      else
      {
        MR_Word TypeVar_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeVar_26, (MR_Integer) 0))));
        MR_Word TypeAssign_29;
        MR_Word HeadTypeParams_41;
        MR_Word TypeBindings0_42;
        MR_Word TypeBindings_43;

        check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign0_22, &HeadTypeParams_41);
        check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign0_22, &TypeBindings0_42);
        succeeded = parse_tree__prog_type__type_unify_5_p_0(ConsType_23, TypeVar_28, HeadTypeParams_41, TypeBindings0_42, &TypeBindings_43);
        if (succeeded)
        {
          check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_43, TypeAssign0_22, &TypeAssign_29);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word EmptyConstraints_30;
          MR_Word ArgsTypeAssign_31;

          hlds__hlds_class__empty_hlds_constraints_1_p_0(&EmptyConstraints_30);
          {
            ArgsTypeAssign_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ArgsTypeAssign_31, 0) = ((MR_Box) (TypeAssign_29));
            MR_hl_field(MR_mktag(0), ArgsTypeAssign_31, 1) = ((MR_Box) (ConsArgTypes_24));
            MR_hl_field(MR_mktag(0), ArgsTypeAssign_31, 2) = ((MR_Box) (EmptyConstraints_30));
          }
          {
            STATE_VARIABLE_ArgsTypeAssignSet_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_ArgsTypeAssignSet_15_15, 0) = ((MR_Box) (ArgsTypeAssign_31));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_ArgsTypeAssignSet_15_15, 1) = ((MR_Box) (STATE_VARIABLE_ArgsTypeAssignSet_0_3));
          }
        }
        else
          STATE_VARIABLE_ArgsTypeAssignSet_15_15 = STATE_VARIABLE_ArgsTypeAssignSet_0_3;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ConsTypeAssigns_11;
      next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_3 = STATE_VARIABLE_ArgsTypeAssignSet_15_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ArgsTypeAssignSet_0_3 = next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__get_cons_type_assigns_for_cons_defns_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TypeAssigns_2,
  MR_Word STATE_VARIABLE_ConsTypeAssignSet_0_3,
  MR_Word * STATE_VARIABLE_ConsTypeAssignSet_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ConsTypeAssignSet_4 = STATE_VARIABLE_ConsTypeAssignSet_0_3;
    else
    {
      MR_Word ConsDefn_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ConsDefns_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ConsTypeAssignSet_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ConsTypeAssignSet_0_3;

      check_hlds__typecheck__get_cons_type_assigns_for_cons_defn_4_p_0(ConsDefn_9, TypeAssigns_2, STATE_VARIABLE_ConsTypeAssignSet_0_3, &STATE_VARIABLE_ConsTypeAssignSet_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ConsDefns_10;
      next_value_of_STATE_VARIABLE_ConsTypeAssignSet_0_3 = STATE_VARIABLE_ConsTypeAssignSet_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ConsTypeAssignSet_0_3 = next_value_of_STATE_VARIABLE_ConsTypeAssignSet_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__get_cons_type_assigns_for_cons_defn_4_p_0(
  MR_Word ConsDefn_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ConsTypeAssignSet_0_3,
  MR_Word * STATE_VARIABLE_ConsTypeAssignSet_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ConsTypeAssignSet_4 = STATE_VARIABLE_ConsTypeAssignSet_0_3;
    else
    {
      MR_Word TypeAssign_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TypeAssigns_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ConsTypeAssign_13;
      MR_Word STATE_VARIABLE_ConsTypeAssignSet_16_16;
      MR_Word ConsTypeVarSet_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_1, (MR_Integer) 0))));
      MR_Word ConsExistQVars0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_1, (MR_Integer) 1))));
      MR_Word ConsType0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_1, (MR_Integer) 2))));
      MR_Word ArgTypes0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_1, (MR_Integer) 3))));
      MR_Word ClassConstraints0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsDefn_1, (MR_Integer) 4))));
      MR_Word ConsType_27;
      MR_Word ArgTypes_28;
      MR_Word TypeAssign2_29;
      MR_Word ConstraintsToAdd_30;
      MR_Word OldConstraints_38;
      MR_Word ClassConstraints_39;
      MR_Word TypeAssign_40;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ConsTypeAssignSet_0_3;

      succeeded = mercury__varset__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), ConsTypeVarSet_21);
      if (succeeded)
      {
        ConsType_27 = ConsType0_23;
        ArgTypes_28 = ArgTypes0_24;
        TypeAssign2_29 = TypeAssign_10;
        ConstraintsToAdd_30 = ClassConstraints0_25;
      }
      else
      {
        MR_Word TypeAssign1_31;
        MR_Word ConsType1_32;
        MR_Word ArgTypes1_33;
        MR_Word Renaming_34;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word TypeVarSet0_53;
        MR_Word TypeVarSet_54;

        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (ConsType0_23));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (ArgTypes0_24));
        }
        check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign_10, &TypeVarSet0_53);
        parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TypeVarSet0_53, ConsTypeVarSet_21, &TypeVarSet_54, &Renaming_34);
        parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_34, Var_41, &Var_42);
        check_hlds__type_assign__type_assign_set_typevarset_3_p_0(TypeVarSet_54, TypeAssign_10, &TypeAssign1_31);
        succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ConsType1_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 0))));
          ArgTypes1_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 1))));
          {
            MR_Word ConsExistQVars_35;
            MR_Word HeadTypeParams0_36;
            MR_Word HeadTypeParams_37;

            parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_34, ConsExistQVars0_22, &ConsExistQVars_35);
            check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0(Renaming_34, ClassConstraints0_25, &ConstraintsToAdd_30);
            check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign1_31, &HeadTypeParams0_36);
            HeadTypeParams_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), ConsExistQVars_35, HeadTypeParams0_36);
            check_hlds__type_assign__type_assign_set_external_type_params_3_p_0(HeadTypeParams_37, TypeAssign1_31, &TypeAssign2_29);
            ConsType_27 = ConsType1_32;
            ArgTypes_28 = ArgTypes1_33;
          }
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.get_cons_type_assign\'/3", (MR_String) "type_assign_rename_apart failed");
            return;
          }
        }
      }
      check_hlds__type_assign__type_assign_get_typeclass_constraints_2_p_0(TypeAssign2_29, &OldConstraints_38);
      hlds__hlds_class__merge_hlds_constraints_3_p_0(ConstraintsToAdd_30, OldConstraints_38, &ClassConstraints_39);
      check_hlds__type_assign__type_assign_set_typeclass_constraints_3_p_0(ClassConstraints_39, TypeAssign2_29, &TypeAssign_40);
      {
        ConsTypeAssign_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConsTypeAssign_13, 0) = ((MR_Box) (TypeAssign_40));
        MR_hl_field(MR_mktag(0), ConsTypeAssign_13, 1) = ((MR_Box) (ConsType_27));
        MR_hl_field(MR_mktag(0), ConsTypeAssign_13, 2) = ((MR_Box) (ArgTypes_28));
      }
      {
        STATE_VARIABLE_ConsTypeAssignSet_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ConsTypeAssignSet_16_16, 0) = ((MR_Box) (ConsTypeAssign_13));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ConsTypeAssignSet_16_16, 1) = ((MR_Box) (STATE_VARIABLE_ConsTypeAssignSet_0_3));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = TypeAssigns_11;
      next_value_of_STATE_VARIABLE_ConsTypeAssignSet_0_3 = STATE_VARIABLE_ConsTypeAssignSet_16_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ConsTypeAssignSet_0_3 = next_value_of_STATE_VARIABLE_ConsTypeAssignSet_0_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__cons_id_must_be_builtin_type_3_p_0(
  MR_Word ConsId_4,
  MR_Word * ConsType_5,
  MR_String * BuiltinTypeName_6)
{
  {
    MR_bool succeeded;
    MR_Word BuiltinType_8;

    switch (MR_tag((MR_Word) ConsId_4)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 5:
            {
              *BuiltinTypeName_6 = (MR_String) "int";
              BuiltinType_8 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_3[7]));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 6:
            {
              *BuiltinTypeName_6 = (MR_String) "uint";
              BuiltinType_8 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_3[12]));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 7:
            {
              *BuiltinTypeName_6 = (MR_String) "int8";
              BuiltinType_8 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_3[6]));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 8:
            {
              *BuiltinTypeName_6 = (MR_String) "uint8";
              BuiltinType_8 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_3[11]));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 9:
            {
              *BuiltinTypeName_6 = (MR_String) "int16";
              BuiltinType_8 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_3[3]));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 10:
            {
              *BuiltinTypeName_6 = (MR_String) "uint16";
              BuiltinType_8 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_3[8]));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 11:
            {
              *BuiltinTypeName_6 = (MR_String) "int32";
              BuiltinType_8 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_3[4]));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 12:
            {
              *BuiltinTypeName_6 = (MR_String) "uint32";
              BuiltinType_8 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_3[9]));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 13:
            {
              *BuiltinTypeName_6 = (MR_String) "int64";
              BuiltinType_8 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_3[5]));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 14:
            {
              *BuiltinTypeName_6 = (MR_String) "uint64";
              BuiltinType_8 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_3[10]));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 15:
            {
              *BuiltinTypeName_6 = (MR_String) "float";
              BuiltinType_8 = (MR_Word) ((MR_Unsigned) 0U);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 17:
            {
              *BuiltinTypeName_6 = (MR_String) "string";
              BuiltinType_8 = (MR_Word) ((MR_Unsigned) 4U);
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *ConsType_5 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (BuiltinType_8));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_8_p_0(
  MR_Word GoalContext_9,
  MR_Word Context_10,
  MR_Word Var_11,
  MR_Word Type_12,
  MR_Word TypeAssignSet0_13,
  MR_Word * TypeAssignSet_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_bool succeeded;
    MR_Word TypeAssignSet1_16;

    check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(TypeAssignSet0_13, Var_11, Type_12, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_16);
    succeeded = (TypeAssignSet1_16 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (TypeAssignSet0_13 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word SpecAndMaybeActualExpected_19;
      MR_Word Spec_20;

      *TypeAssignSet_14 = TypeAssignSet0_13;
      SpecAndMaybeActualExpected_19 = check_hlds__typecheck_errors__report_error_var_6_f_0(STATE_VARIABLE_Info_0_22, GoalContext_9, Context_10, Var_11, Type_12, TypeAssignSet0_13);
      Spec_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecAndMaybeActualExpected_19, (MR_Integer) 0))));
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_20, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
    }
    else
    {
      *TypeAssignSet_14 = TypeAssignSet1_16;
      *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_name_9_p_0(
  MR_Word SimpleCallId_10,
  MR_Word Context_11,
  MR_Word GoalId_12,
  MR_Word Args_13,
  MR_Word * PredId_14,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_31,
  MR_Word * STATE_VARIABLE_TypeAssignSet_32,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34)
{
  {
    MR_Word ModuleInfo_17;
    MR_Word PredicateTable_18;
    MR_Word PorF_19;
    MR_Word SymName_20;
    MR_Integer Arity_21;
    MR_Word IsFullyQualified_22;
    MR_Word PredIds_23;

    check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_33, &ModuleInfo_17);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_17, &PredicateTable_18);
    PorF_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SimpleCallId_10, (MR_Integer) 0))) & (MR_Integer) 1);
    SymName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SimpleCallId_10, (MR_Integer) 1))));
    Arity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SimpleCallId_10, (MR_Integer) 2))));
    check_hlds__typecheck_info__typecheck_info_get_calls_are_fully_qualified_2_p_0(STATE_VARIABLE_Info_0_33, &IsFullyQualified_22);
    hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredicateTable_18, IsFullyQualified_22, PorF_19, SymName_20, Arity_21, &PredIds_23);
    if ((PredIds_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ClauseContext_24;
      MR_Word Spec_25;

      *PredId_14 = hlds__hlds_pred__invalid_pred_id_0_f_0();
      check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_33, &ClauseContext_24);
      Spec_25 = check_hlds__typecheck_errors__report_pred_call_error_3_f_0(ClauseContext_24, Context_11, SimpleCallId_10);
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_25, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
      *STATE_VARIABLE_TypeAssignSet_32 = STATE_VARIABLE_TypeAssignSet_0_31;
    }
    else
    {
      MR_Word HeadPredId_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_23, (MR_Integer) 0))));
      MR_Word TailPredIds_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_23, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TypeAssignSet_37_37;
      MR_Word STATE_VARIABLE_Info_38_38;

      if ((TailPredIds_27 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ArgVectorKind_28;

        *PredId_14 = HeadPredId_26;
        {
          ArgVectorKind_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ArgVectorKind_28, 0) = ((MR_Box) (*PredId_14));
        }
        check_hlds__typecheck__typecheck_call_pred_id_9_p_0(ArgVectorKind_28, Context_11, GoalId_12, *PredId_14, Args_13, STATE_VARIABLE_TypeAssignSet_0_31, &STATE_VARIABLE_TypeAssignSet_37_37, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_38_38);
      }
      else
      {
        MR_Word Symbol_52;
        MR_Word ModuleInfo_53;
        MR_Word ClassTable_54;
        MR_Word PredicateTable_55;
        MR_Word Preds_56;
        MR_Word ArgsTypeAssignSet_57;
        MR_Word VarVectorKind_58;
        MR_Word STATE_VARIABLE_Info_27_59;
        MR_Word Var_61;
        MR_Word PredId_71;
        MR_Word PredIds_72;
        MR_Word PredInfo_78;
        MR_Word PredTypeVarSet_79;
        MR_Word PredExistQVars_80;
        MR_Word PredArgTypes_81;
        MR_Word PredClassContext_82;
        MR_Word TVarSet_83;
        MR_Word PredConstraints_84;
        MR_Word STATE_VARIABLE_ArgsTypeAssignSet_31_87;
        MR_Box conv0_PredInfo_78;

        {
          Symbol_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Symbol_52, 0) = ((MR_Box) (SimpleCallId_10));
          MR_hl_field(MR_mktag(0), Symbol_52, 1) = ((MR_Box) (PredIds_23));
        }
        check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_p_0(Symbol_52, Context_11, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_27_59);
        check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(STATE_VARIABLE_Info_27_59, &ModuleInfo_53);
        hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_53, &ClassTable_54);
        hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_53, &PredicateTable_55);
        hlds__pred_table__predicate_table_get_preds_2_p_0(PredicateTable_55, &Preds_56);
        PredId_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_23, (MR_Integer) 0))));
        PredIds_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_23, (MR_Integer) 1))));
        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds_56, ((MR_Box) (PredId_71)), &conv0_PredInfo_78);
        PredInfo_78 = ((MR_Word) (conv0_PredInfo_78));
        hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_78, &PredTypeVarSet_79, &PredExistQVars_80, &PredArgTypes_81);
        hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_78, &PredClassContext_82);
        hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_78, &TVarSet_83);
        hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_54, TVarSet_83, GoalId_12, PredClassContext_82, &PredConstraints_84);
        check_hlds__typecheck__rename_apart_7_p_0(STATE_VARIABLE_TypeAssignSet_0_31, PredTypeVarSet_79, PredExistQVars_80, PredArgTypes_81, PredConstraints_84, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_ArgsTypeAssignSet_31_87);
        check_hlds__typecheck__get_overloaded_pred_arg_types_7_p_0(PredIds_72, Preds_56, ClassTable_54, GoalId_12, STATE_VARIABLE_TypeAssignSet_0_31, STATE_VARIABLE_ArgsTypeAssignSet_31_87, &ArgsTypeAssignSet_57);
        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_61, 0) = ((MR_Box) (SimpleCallId_10));
        }
        {
          VarVectorKind_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), VarVectorKind_58, 0) = ((MR_Box) (Var_61));
        }
        check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(VarVectorKind_58, (MR_Integer) 1, Context_11, Args_13, ArgsTypeAssignSet_57, &STATE_VARIABLE_TypeAssignSet_37_37, STATE_VARIABLE_Info_27_59, &STATE_VARIABLE_Info_38_38);
        *PredId_14 = hlds__hlds_pred__invalid_pred_id_0_f_0();
      }
      check_hlds__typeclasses__perform_context_reduction_5_p_0(Context_11, STATE_VARIABLE_TypeAssignSet_37_37, STATE_VARIABLE_TypeAssignSet_32, STATE_VARIABLE_Info_38_38, STATE_VARIABLE_Info_34);
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__get_overloaded_pred_arg_types_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_ArgsTypeAssignSet_0_6,
  MR_Word * STATE_VARIABLE_ArgsTypeAssignSet_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ArgsTypeAssignSet_7 = STATE_VARIABLE_ArgsTypeAssignSet_0_6;
    else
    {
      MR_Word PredId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PredIds_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word PredInfo_22;
      MR_Word PredTypeVarSet_23;
      MR_Word PredExistQVars_24;
      MR_Word PredArgTypes_25;
      MR_Word PredClassContext_26;
      MR_Word TVarSet_27;
      MR_Word PredConstraints_28;
      MR_Word STATE_VARIABLE_ArgsTypeAssignSet_31_31;
      MR_Box conv0_PredInfo_22;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_6;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), HeadVar__2_2, ((MR_Box) (PredId_15)), &conv0_PredInfo_22);
      PredInfo_22 = ((MR_Word) (conv0_PredInfo_22));
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_22, &PredTypeVarSet_23, &PredExistQVars_24, &PredArgTypes_25);
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_22, &PredClassContext_26);
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_22, &TVarSet_27);
      hlds__hlds_class__make_body_hlds_constraints_5_p_0(HeadVar__3_3, TVarSet_27, HeadVar__4_4, PredClassContext_26, &PredConstraints_28);
      check_hlds__typecheck__rename_apart_7_p_0(HeadVar__5_5, PredTypeVarSet_23, PredExistQVars_24, PredArgTypes_25, PredConstraints_28, STATE_VARIABLE_ArgsTypeAssignSet_0_6, &STATE_VARIABLE_ArgsTypeAssignSet_31_31);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredIds_16;
      next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_6 = STATE_VARIABLE_ArgsTypeAssignSet_31_31;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ArgsTypeAssignSet_0_6 = next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_id_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_id_9_p_0(
  MR_Word ArgVectorKind_10,
  MR_Word Context_11,
  MR_Word GoalId_12,
  MR_Word PredId_13,
  MR_Word Args_14,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_27,
  MR_Word * STATE_VARIABLE_TypeAssignSet_28,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_17;
    MR_Word PredicateTable_18;
    MR_Word Preds_19;
    MR_Word PredInfo_20;
    MR_Word PredTypeVarSet_21;
    MR_Word PredExistQVars_22;
    MR_Word PredArgTypes_23;
    MR_Word PredClassContext_24;
    MR_Box conv0_PredInfo_20;
    MR_Word Var_31;
    MR_Word Var_32;

    check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_29, &ModuleInfo_17);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_17, &PredicateTable_18);
    hlds__pred_table__predicate_table_get_preds_2_p_0(PredicateTable_18, &Preds_19);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds_19, ((MR_Box) (PredId_13)), &conv0_PredInfo_20);
    PredInfo_20 = ((MR_Word) (conv0_PredInfo_20));
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_20, &PredTypeVarSet_21, &PredExistQVars_22, &PredArgTypes_23);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_20, &PredClassContext_24);
    succeeded = mercury__varset__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), PredTypeVarSet_21);
    if (succeeded)
    {
      Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredClassContext_24, (MR_Integer) 0))));
      Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredClassContext_24, (MR_Integer) 1))));
      succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (Var_32 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word Specs_51;
      MR_Word MaybeArgVectorTypeErrors_52;
      MR_Word ArgVectorTypeErrors_53;
      MR_Word Var_64;

      check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(STATE_VARIABLE_Info_0_29, Context_11, ArgVectorKind_10, (MR_Integer) 1, Args_14, PredArgTypes_23, STATE_VARIABLE_TypeAssignSet_0_27, STATE_VARIABLE_TypeAssignSet_28, (MR_Word) ((MR_Unsigned) 0U), &Specs_51, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_3[2])), &MaybeArgVectorTypeErrors_52);
      succeeded = (MaybeArgVectorTypeErrors_52 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgVectorTypeErrors_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgVectorTypeErrors_52, (MR_Integer) 0))));
        succeeded = (ArgVectorTypeErrors_53 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVectorTypeErrors_53, (MR_Integer) 1))));
          succeeded = (Var_64 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
      {
        MR_Word ClauseContext_57;
        MR_Word AllArgsSpec_58;

        check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_29, &ClauseContext_57);
        AllArgsSpec_58 = check_hlds__typecheck_errors__report_arg_vector_type_errors_5_f_0(ClauseContext_57, Context_11, ArgVectorKind_10, *STATE_VARIABLE_TypeAssignSet_28, ArgVectorTypeErrors_53);
        check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(AllArgsSpec_58, STATE_VARIABLE_Info_0_29, STATE_VARIABLE_Info_30);
      }
      else
      {
        MR_Box conv2_STATE_VARIABLE_Info_30;

        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), (MR_Word) (&check_hlds__typecheck_scalar_common_2[2]), Specs_51, ((MR_Box) (STATE_VARIABLE_Info_0_29)), &conv2_STATE_VARIABLE_Info_30);
        *STATE_VARIABLE_Info_30 = ((MR_Word) (conv2_STATE_VARIABLE_Info_30));
      }
    }
    else
    {
      MR_Word ClassTable_25;
      MR_Word PredConstraints_26;
      MR_Word Var_35;
      MR_Word ArgsTypeAssignSet_85;

      hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_17, &ClassTable_25);
      hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_25, PredTypeVarSet_21, GoalId_12, PredClassContext_24, &PredConstraints_26);
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (ArgVectorKind_10));
      }
      check_hlds__typecheck__rename_apart_7_p_0(STATE_VARIABLE_TypeAssignSet_0_27, PredTypeVarSet_21, PredExistQVars_22, PredArgTypes_23, PredConstraints_26, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet_85);
      check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(Var_35, (MR_Integer) 1, Context_11, Args_14, ArgsTypeAssignSet_85, STATE_VARIABLE_TypeAssignSet_28, STATE_VARIABLE_Info_0_29, STATE_VARIABLE_Info_30);
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_event_call_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_event_call_7_p_0(
  MR_Word Context_8,
  MR_String EventName_9,
  MR_Word Args_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_21,
  MR_Word * STATE_VARIABLE_TypeAssignSet_22,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_13;
    MR_Word EventSet_14;
    MR_Word EventSpecMap_15;
    MR_Word EventArgTypes_16;

    check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_23, &ModuleInfo_13);
    hlds__hlds_module__module_info_get_event_set_2_p_0(ModuleInfo_13, &EventSet_14);
    EventSpecMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EventSet_14, (MR_Integer) 1))));
    succeeded = parse_tree__prog_event__event_arg_types_3_p_0(EventSpecMap_15, EventName_9, &EventArgTypes_16);
    if (succeeded)
    {
      MR_Integer NumArgs_17;
      MR_Integer NumEventArgTypes_18;

      mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[3]), Args_10, &NumArgs_17);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), EventArgTypes_16, &NumEventArgTypes_18);
      succeeded = (NumArgs_17 == NumEventArgTypes_18);
      if (succeeded)
      {
        MR_Word ArgVectorKind_19;
        MR_Word Specs_43;
        MR_Word MaybeArgVectorTypeErrors_44;
        MR_Word ArgVectorTypeErrors_45;
        MR_Word Var_56;

        {
          ArgVectorKind_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ArgVectorKind_19, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), ArgVectorKind_19, 1) = ((MR_Box) (EventName_9));
        }
        check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(STATE_VARIABLE_Info_0_23, Context_8, ArgVectorKind_19, (MR_Integer) 1, Args_10, EventArgTypes_16, STATE_VARIABLE_TypeAssignSet_0_21, STATE_VARIABLE_TypeAssignSet_22, (MR_Word) ((MR_Unsigned) 0U), &Specs_43, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_3[2])), &MaybeArgVectorTypeErrors_44);
        succeeded = (MaybeArgVectorTypeErrors_44 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgVectorTypeErrors_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgVectorTypeErrors_44, (MR_Integer) 0))));
          succeeded = (ArgVectorTypeErrors_45 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVectorTypeErrors_45, (MR_Integer) 1))));
            succeeded = (Var_56 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
            }
          }
        }
        if (succeeded)
        {
          MR_Word ClauseContext_49;
          MR_Word AllArgsSpec_50;

          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_23, &ClauseContext_49);
          AllArgsSpec_50 = check_hlds__typecheck_errors__report_arg_vector_type_errors_5_f_0(ClauseContext_49, Context_8, ArgVectorKind_19, *STATE_VARIABLE_TypeAssignSet_22, ArgVectorTypeErrors_45);
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(AllArgsSpec_50, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
        }
        else
        {
          MR_Box conv1_STATE_VARIABLE_Info_24;

          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), (MR_Word) (&check_hlds__typecheck_scalar_common_2[1]), Specs_43, ((MR_Box) (STATE_VARIABLE_Info_0_23)), &conv1_STATE_VARIABLE_Info_24);
          *STATE_VARIABLE_Info_24 = ((MR_Word) (conv1_STATE_VARIABLE_Info_24));
        }
      }
      else
      {
        MR_Word Spec_20;

        Spec_20 = check_hlds__typecheck_errors__report_event_args_mismatch_4_f_0(Context_8, EventName_9, EventArgTypes_16, Args_10);
        check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_20, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
        *STATE_VARIABLE_TypeAssignSet_22 = STATE_VARIABLE_TypeAssignSet_0_21;
      }
    }
    else
    {
      MR_Word Spec_29;

      Spec_29 = check_hlds__typecheck_errors__report_unknown_event_call_error_2_f_0(Context_8, EventName_9);
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_29, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
      *STATE_VARIABLE_TypeAssignSet_22 = STATE_VARIABLE_TypeAssignSet_0_21;
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(
  MR_Word Info_1,
  MR_Word Context_2,
  MR_Word ArgVectorKind_3,
  MR_Integer ArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_7,
  MR_Word * STATE_VARIABLE_TypeAssignSet_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10,
  MR_Word STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11,
  MR_Word * STATE_VARIABLE_MaybeArgVectorTypeErrors_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_MaybeArgVectorTypeErrors_12 = STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11;
        *STATE_VARIABLE_Specs_10 = STATE_VARIABLE_Specs_0_9;
        *STATE_VARIABLE_TypeAssignSet_8 = STATE_VARIABLE_TypeAssignSet_0_7;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.typecheck_vars_have_types_in_arg_vector\'/12", (MR_String) "length mismatch");
          return;
        }
      }
    else
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.typecheck_vars_have_types_in_arg_vector\'/12", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word Type_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Types_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TypeAssignSet_77_77;
      MR_Word STATE_VARIABLE_Specs_78_78;
      MR_Word STATE_VARIABLE_MaybeArgVectorTypeErrors_79_79;
      MR_Integer Var_80;
      MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Integer next_value_of_ArgNum_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_9;
      MR_Word next_value_of_STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11;

      check_hlds__typecheck__typecheck_var_has_type_in_arg_vector_12_p_0(Info_1, Context_2, ArgVectorKind_3, ArgNum_4, Var_86, Type_66, STATE_VARIABLE_TypeAssignSet_0_7, &STATE_VARIABLE_TypeAssignSet_77_77, STATE_VARIABLE_Specs_0_9, &STATE_VARIABLE_Specs_78_78, STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11, &STATE_VARIABLE_MaybeArgVectorTypeErrors_79_79);
      Var_80 = (MR_Integer) ((MR_Unsigned) ArgNum_4 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_ArgNum_4 = Var_80;
      next_value_of_HeadVar__5_5 = Var_85;
      next_value_of_HeadVar__6_6 = Types_67;
      next_value_of_STATE_VARIABLE_TypeAssignSet_0_7 = STATE_VARIABLE_TypeAssignSet_77_77;
      next_value_of_STATE_VARIABLE_Specs_0_9 = STATE_VARIABLE_Specs_78_78;
      next_value_of_STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11 = STATE_VARIABLE_MaybeArgVectorTypeErrors_79_79;
      ArgNum_4 = next_value_of_ArgNum_4;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_TypeAssignSet_0_7 = next_value_of_STATE_VARIABLE_TypeAssignSet_0_7;
      STATE_VARIABLE_Specs_0_9 = next_value_of_STATE_VARIABLE_Specs_0_9;
      STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11 = next_value_of_STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_in_arg_vector_12_p_0(
  MR_Word Info_13,
  MR_Word Context_14,
  MR_Word ArgVectorKind_15,
  MR_Integer ArgNum_16,
  MR_Word Var_17,
  MR_Word Type_18,
  MR_Word TypeAssignSet0_19,
  MR_Word * TypeAssignSet_20,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35,
  MR_Word STATE_VARIABLE_MaybeArgVectorTypeErrors_0_36,
  MR_Word * STATE_VARIABLE_MaybeArgVectorTypeErrors_37)
{
  {
    MR_bool succeeded;
    MR_Word TypeAssignSet1_23;

    check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(TypeAssignSet0_19, Var_17, Type_18, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_23);
    succeeded = (TypeAssignSet1_23 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (TypeAssignSet0_19 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word GoalContext_26;
      MR_Word SpecAndMaybeActualExpected_27;
      MR_Word Spec_28;
      MR_Word MaybeActualExpected_29;
      MR_Word Var_39;

      *TypeAssignSet_20 = TypeAssignSet0_19;
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (ArgVectorKind_15));
      }
      {
        GoalContext_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalContext_26, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), GoalContext_26, 1) = ((MR_Box) (ArgNum_16));
      }
      SpecAndMaybeActualExpected_27 = check_hlds__typecheck_errors__report_error_var_6_f_0(Info_13, GoalContext_26, Context_14, Var_17, Type_18, TypeAssignSet0_19);
      Spec_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecAndMaybeActualExpected_27, (MR_Integer) 0))));
      MaybeActualExpected_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecAndMaybeActualExpected_27, (MR_Integer) 1))));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_35 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_28));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_34));
      }
      if ((STATE_VARIABLE_MaybeArgVectorTypeErrors_0_36 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_MaybeArgVectorTypeErrors_37 = STATE_VARIABLE_MaybeArgVectorTypeErrors_0_36;
      else
      if ((MaybeActualExpected_29 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_MaybeArgVectorTypeErrors_37 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word ArgVectorTypeErrors0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeArgVectorTypeErrors_0_36, (MR_Integer) 0))));
        MR_Word ActualExpected_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeActualExpected_29, (MR_Integer) 0))));
        MR_Word ArgVectorTypeError_32;
        MR_Word ArgVectorTypeErrors_33;

        {
          ArgVectorTypeError_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ArgVectorTypeError_32, 0) = ((MR_Box) (ArgNum_16));
          MR_hl_field(MR_mktag(0), ArgVectorTypeError_32, 1) = ((MR_Box) (Var_17));
          MR_hl_field(MR_mktag(0), ArgVectorTypeError_32, 2) = ((MR_Box) (ActualExpected_31));
        }
        {
          ArgVectorTypeErrors_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ArgVectorTypeErrors_33, 0) = ((MR_Box) (ArgVectorTypeError_32));
          MR_hl_field(MR_mktag(1), ArgVectorTypeErrors_33, 1) = ((MR_Box) (ArgVectorTypeErrors0_30));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_MaybeArgVectorTypeErrors_37 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgVectorTypeErrors_33));
        }
      }
    }
    else
    {
      *TypeAssignSet_20 = TypeAssignSet1_23;
      *STATE_VARIABLE_MaybeArgVectorTypeErrors_37 = STATE_VARIABLE_MaybeArgVectorTypeErrors_0_36;
      *STATE_VARIABLE_Specs_35 = STATE_VARIABLE_Specs_0_34;
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Var_2,
  MR_Word Type_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TypeAssignSet_5 = STATE_VARIABLE_TypeAssignSet_0_4;
    else
    {
      MR_Word TypeAssign0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeAssigns0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TypeAssignSet_18_18;
      MR_Word VarTypes0_26;
      MR_Word MaybeOldVarType_27;
      MR_Word VarTypes_28;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;

      check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign0_11, &VarTypes0_26);
      hlds__vartypes__search_insert_var_type_5_p_0(Var_2, Type_3, &MaybeOldVarType_27, VarTypes0_26, &VarTypes_28);
      if ((MaybeOldVarType_27 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeAssign_31;

        check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_28, TypeAssign0_11, &TypeAssign_31);
        {
          STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (TypeAssign_31));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_4));
        }
      }
      else
      {
        MR_Word OldVarType_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOldVarType_27, (MR_Integer) 0))));
        MR_Word TypeAssign1_30;
        MR_Word HeadTypeParams_39;
        MR_Word TypeBindings0_40;
        MR_Word TypeBindings_41;

        check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign0_11, &HeadTypeParams_39);
        check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign0_11, &TypeBindings0_40);
        succeeded = parse_tree__prog_type__type_unify_5_p_0(OldVarType_29, Type_3, HeadTypeParams_39, TypeBindings0_40, &TypeBindings_41);
        if (succeeded)
        {
          check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_41, TypeAssign0_11, &TypeAssign1_30);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          {
            STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (TypeAssign1_30));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_4));
          }
        else
          STATE_VARIABLE_TypeAssignSet_18_18 = STATE_VARIABLE_TypeAssignSet_0_4;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TypeAssigns0_12;
      next_value_of_STATE_VARIABLE_TypeAssignSet_0_4 = STATE_VARIABLE_TypeAssignSet_18_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeAssignSet_0_4 = next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_higher_order_call_9_p_0(
  MR_Word GenericCallId_10,
  MR_Word Context_11,
  MR_Word PredVar_12,
  MR_Word Purity_13,
  MR_Word Args_14,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_24,
  MR_Word * STATE_VARIABLE_TypeAssignSet_25,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  {
    MR_Integer Arity_17;
    MR_Word TypeVarSet_18;
    MR_Word PredVarType_19;
    MR_Word ArgTypes_20;
    MR_Word VarVectorKind_21;
    MR_Word EmptyConstraints_22;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word TypeVarSet0_41;
    MR_Word ArgTypeVars_42;
    MR_Word Var_43;
    MR_Word ArgsTypeAssignSet_60;

    mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[3]), Args_14, &Arity_17);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet0_41);
    mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), Arity_17, &ArgTypeVars_42, TypeVarSet0_41, &TypeVarSet_18);
    Var_43 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
    parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_43, ArgTypeVars_42, &ArgTypes_20);
    parse_tree__prog_type__construct_higher_order_type_5_p_0(Purity_13, (MR_Integer) 0, ArgTypes_20, &PredVarType_19);
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (GenericCallId_10));
    }
    {
      VarVectorKind_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), VarVectorKind_21, 0) = ((MR_Box) (Var_29));
    }
    hlds__hlds_class__empty_hlds_constraints_1_p_0(&EmptyConstraints_22);
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (PredVar_12));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Args_14));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (PredVarType_19));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (ArgTypes_20));
    }
    check_hlds__typecheck__rename_apart_7_p_0(STATE_VARIABLE_TypeAssignSet_0_24, TypeVarSet_18, (MR_Word) ((MR_Unsigned) 0U), Var_31, EmptyConstraints_22, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet_60);
    check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(VarVectorKind_21, (MR_Integer) 1, Context_11, Var_30, ArgsTypeAssignSet_60, STATE_VARIABLE_TypeAssignSet_25, STATE_VARIABLE_Info_0_26, STATE_VARIABLE_Info_27);
  }
}

static void MR_CALL 
check_hlds__typecheck__ensure_vars_have_a_single_type_7_p_0(
  MR_Word VarVectorKind_8,
  MR_Word Context_9,
  MR_Word Vars_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_22,
  MR_Word * STATE_VARIABLE_TypeAssignSet_23,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  if ((Vars_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_TypeAssignSet_23 = STATE_VARIABLE_TypeAssignSet_0_22;
    *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
  }
  else
  {
    MR_Word TypeVarSet0_15;
    MR_Word TypeVar_16;
    MR_Word TypeVarSet_17;
    MR_Word Type_18;
    MR_Integer NumVars_19;
    MR_Word Types_20;
    MR_Word EmptyConstraints_21;
    MR_Word ArgsTypeAssignSet_45;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet0_15);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVar_16, TypeVarSet0_15, &TypeVarSet_17);
    {
      Type_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Type_18, 0) = ((MR_Box) (TypeVar_16));
      MR_hl_field(MR_mktag(0), Type_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[3]), Vars_10, &NumVars_19);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), NumVars_19, ((MR_Box) (Type_18)), &Types_20);
    hlds__hlds_class__empty_hlds_constraints_1_p_0(&EmptyConstraints_21);
    check_hlds__typecheck__rename_apart_7_p_0(STATE_VARIABLE_TypeAssignSet_0_22, TypeVarSet_17, (MR_Word) ((MR_Unsigned) 0U), Types_20, EmptyConstraints_21, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet_45);
    check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(VarVectorKind_8, (MR_Integer) 1, Context_9, Vars_10, ArgsTypeAssignSet_45, STATE_VARIABLE_TypeAssignSet_23, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25);
  }
}

static void MR_CALL 
check_hlds__typecheck__ensure_vars_have_a_type_7_p_0(
  MR_Word VarVectorKind_8,
  MR_Word Context_9,
  MR_Word Vars_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_21,
  MR_Word * STATE_VARIABLE_TypeAssignSet_22,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  if ((Vars_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_TypeAssignSet_22 = STATE_VARIABLE_TypeAssignSet_0_21;
    *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
  }
  else
  {
    MR_Integer NumVars_15;
    MR_Word TypeVarSet0_16;
    MR_Word TypeVars_17;
    MR_Word TypeVarSet_18;
    MR_Word Types_19;
    MR_Word EmptyConstraints_20;
    MR_Word Var_25;
    MR_Word ArgsTypeAssignSet_45;

    mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[3]), Vars_10, &NumVars_15);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet0_16);
    mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), NumVars_15, &TypeVars_17, TypeVarSet0_16, &TypeVarSet_18);
    Var_25 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
    parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_25, TypeVars_17, &Types_19);
    hlds__hlds_class__empty_hlds_constraints_1_p_0(&EmptyConstraints_20);
    check_hlds__typecheck__rename_apart_7_p_0(STATE_VARIABLE_TypeAssignSet_0_21, TypeVarSet_18, (MR_Word) ((MR_Unsigned) 0U), Types_19, EmptyConstraints_20, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet_45);
    check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(VarVectorKind_8, (MR_Integer) 1, Context_9, Vars_10, ArgsTypeAssignSet_45, STATE_VARIABLE_TypeAssignSet_22, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(
  MR_Word VarVectorKind_1,
  MR_Integer ArgNum_2,
  MR_Word Context_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * TypeAssignSet_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *TypeAssignSet_6 = check_hlds__type_assign__convert_args_type_assign_set_check_empty_args_1_f_0(HeadVar__5_5);
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
    }
    else
    {
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Vars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word ArgTypeAssignSet1_26;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Integer Var_30;
      MR_Word ArgTypeAssignSet1_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Integer next_value_of_ArgNum_2;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_7;

      check_hlds__typecheck__typecheck_var_has_arg_type_2_4_p_0(HeadVar__5_5, Var_20, (MR_Word) ((MR_Unsigned) 0U), &ArgTypeAssignSet1_41);
      succeeded = (ArgTypeAssignSet1_41 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (HeadVar__5_5 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
          Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
        }
      }
      if (succeeded)
      {
        MR_Word GoalContext_25;
        MR_Word ClauseContext_44;
        MR_Word Spec_45;
        MR_Word ArgTypeAssign_50;
        MR_Word ArgTypeAssigns_51;
        MR_Word TypeAssign_52;
        MR_Word Args0_53;
        MR_Word Constraints_54;
        MR_Word Args_56;

        {
          GoalContext_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), GoalContext_25, 0) = ((MR_Box) (VarVectorKind_1));
          MR_hl_field(MR_mktag(1), GoalContext_25, 1) = ((MR_Box) (ArgNum_2));
        }
        TypeAssign_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 0))));
        Args0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 1))));
        Constraints_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 2))));
        if ((Args0_53 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.delete_first_arg_in_each_arg_type_assign\'/2", (MR_String) "skip_arg");
            return;
          }
        }
        else
          Args_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args0_53, (MR_Integer) 1))));
        {
          ArgTypeAssign_50 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ArgTypeAssign_50, 0) = ((MR_Box) (TypeAssign_52));
          MR_hl_field(MR_mktag(0), ArgTypeAssign_50, 1) = ((MR_Box) (Args_56));
          MR_hl_field(MR_mktag(0), ArgTypeAssign_50, 2) = ((MR_Box) (Constraints_54));
        }
        check_hlds__typecheck__delete_first_arg_in_each_arg_type_assign_2_p_0(Var_43, &ArgTypeAssigns_51);
        {
          ArgTypeAssignSet1_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ArgTypeAssignSet1_26, 0) = ((MR_Box) (ArgTypeAssign_50));
          MR_hl_field(MR_mktag(1), ArgTypeAssignSet1_26, 1) = ((MR_Box) (ArgTypeAssigns_51));
        }
        check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_7, &ClauseContext_44);
        Spec_45 = check_hlds__typecheck_errors__report_error_arg_var_5_f_0(ClauseContext_44, GoalContext_25, Context_3, Var_20, HeadVar__5_5);
        check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_45, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_29_29);
      }
      else
      {
        ArgTypeAssignSet1_26 = ArgTypeAssignSet1_41;
        STATE_VARIABLE_Info_29_29 = STATE_VARIABLE_Info_0_7;
      }
      Var_30 = (MR_Integer) ((MR_Unsigned) ArgNum_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_ArgNum_2 = Var_30;
      next_value_of_HeadVar__4_4 = Vars_21;
      next_value_of_HeadVar__5_5 = ArgTypeAssignSet1_26;
      next_value_of_STATE_VARIABLE_Info_0_7 = STATE_VARIABLE_Info_29_29;
      ArgNum_2 = next_value_of_ArgNum_2;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_Info_0_7 = next_value_of_STATE_VARIABLE_Info_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_arg_type_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Var_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word ArgsTypeAssign_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgsTypeAssignSets_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypeAssign0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgsTypeAssign_9, (MR_Integer) 0))));
      MR_Word ArgTypes0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgsTypeAssign_9, (MR_Integer) 1))));
      MR_Word ClassContext_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgsTypeAssign_9, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_ArgsTypeAssignSet_18_18;
      MR_Word VarTypes0_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__3_3;

      check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign0_13, &VarTypes0_27);
      if ((ArgTypes0_14 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.arg_type_assign_var_has_type\'/6", (MR_String) "ArgTypes0 = []");
          return;
        }
      }
      else
      {
        MR_Word Type_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes0_14, (MR_Integer) 0))));
        MR_Word ArgTypes_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes0_14, (MR_Integer) 1))));
        MR_Word MaybeOldVarType_30;
        MR_Word VarTypes_31;

        hlds__vartypes__search_insert_var_type_5_p_0(Var_2, Type_28, &MaybeOldVarType_30, VarTypes0_27, &VarTypes_31);
        if ((MaybeOldVarType_30 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word TypeAssign_35;
          MR_Word NewTypeAssign_40;

          check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_31, TypeAssign0_13, &TypeAssign_35);
          {
            NewTypeAssign_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), NewTypeAssign_40, 0) = ((MR_Box) (TypeAssign_35));
            MR_hl_field(MR_mktag(0), NewTypeAssign_40, 1) = ((MR_Box) (ArgTypes_29));
            MR_hl_field(MR_mktag(0), NewTypeAssign_40, 2) = ((MR_Box) (ClassContext_15));
          }
          {
            STATE_VARIABLE_ArgsTypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_ArgsTypeAssignSet_18_18, 0) = ((MR_Box) (NewTypeAssign_40));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_ArgsTypeAssignSet_18_18, 1) = ((MR_Box) (HeadVar__3_3));
          }
        }
        else
        {
          MR_Word OldVarType_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOldVarType_30, (MR_Integer) 0))));
          MR_Word TypeAssign1_33;
          MR_Word HeadTypeParams_45;
          MR_Word TypeBindings0_46;
          MR_Word TypeBindings_47;

          check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign0_13, &HeadTypeParams_45);
          check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign0_13, &TypeBindings0_46);
          succeeded = parse_tree__prog_type__type_unify_5_p_0(OldVarType_32, Type_28, HeadTypeParams_45, TypeBindings0_46, &TypeBindings_47);
          if (succeeded)
          {
            check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_47, TypeAssign0_13, &TypeAssign1_33);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word NewTypeAssign_34;

            {
              NewTypeAssign_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), NewTypeAssign_34, 0) = ((MR_Box) (TypeAssign1_33));
              MR_hl_field(MR_mktag(0), NewTypeAssign_34, 1) = ((MR_Box) (ArgTypes_29));
              MR_hl_field(MR_mktag(0), NewTypeAssign_34, 2) = ((MR_Box) (ClassContext_15));
            }
            {
              STATE_VARIABLE_ArgsTypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_ArgsTypeAssignSet_18_18, 0) = ((MR_Box) (NewTypeAssign_34));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_ArgsTypeAssignSet_18_18, 1) = ((MR_Box) (HeadVar__3_3));
            }
          }
          else
            STATE_VARIABLE_ArgsTypeAssignSet_18_18 = HeadVar__3_3;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ArgsTypeAssignSets_10;
      next_value_of_HeadVar__3_3 = STATE_VARIABLE_ArgsTypeAssignSet_18_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__delete_first_arg_in_each_arg_type_assign_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ArgTypeAssign0_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgTypeAssigns0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgTypeAssign_5;
    MR_Word TypeAssign_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeAssign0_3, (MR_Integer) 0))));
    MR_Word Args0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeAssign0_3, (MR_Integer) 1))));
    MR_Word Constraints_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeAssign0_3, (MR_Integer) 2))));
    MR_Word Args_11;
    MR_Word * AddrArgTypeAssigns_14;

    if ((Args0_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.delete_first_arg_in_each_arg_type_assign\'/2", (MR_String) "skip_arg");
        return;
      }
    }
    else
      Args_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args0_8, (MR_Integer) 1))));
    {
      ArgTypeAssign_5 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ArgTypeAssign_5, 0) = ((MR_Box) (TypeAssign_7));
      MR_hl_field(MR_mktag(0), ArgTypeAssign_5, 1) = ((MR_Box) (Args_11));
      MR_hl_field(MR_mktag(0), ArgTypeAssign_5, 2) = ((MR_Box) (Constraints_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgTypeAssign_5));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrArgTypeAssigns_14 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__2_2, (MR_Integer) 1)));
    check_hlds__typecheck__LCMCpr_delete_first_arg_in_each_arg_type_assign_1_2_p_0(ArgTypeAssigns0_4, AddrArgTypeAssigns_14);
  }
}

static void MR_CALL 
check_hlds__typecheck__LCMCpr_delete_first_arg_in_each_arg_type_assign_1_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_15)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__2_15 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word ArgTypeAssign0_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgTypeAssigns0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgTypeAssign_5;
      MR_Word TypeAssign_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeAssign0_3, (MR_Integer) 0))));
      MR_Word Args0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeAssign0_3, (MR_Integer) 1))));
      MR_Word Constraints_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeAssign0_3, (MR_Integer) 2))));
      MR_Word Args_11;
      MR_Word * AddrArgTypeAssigns_14;
      MR_Word HeadVar__2_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_15;

      if ((Args0_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.delete_first_arg_in_each_arg_type_assign\'/2", (MR_String) "skip_arg");
          return;
        }
      }
      else
        Args_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args0_8, (MR_Integer) 1))));
      {
        ArgTypeAssign_5 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ArgTypeAssign_5, 0) = ((MR_Box) (TypeAssign_7));
        MR_hl_field(MR_mktag(0), ArgTypeAssign_5, 1) = ((MR_Box) (Args_11));
        MR_hl_field(MR_mktag(0), ArgTypeAssign_5, 2) = ((MR_Box) (Constraints_9));
      }
      {
        HeadVar__2_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_16, 0) = ((MR_Box) (ArgTypeAssign_5));
        MR_hl_field(MR_mktag(1), HeadVar__2_16, 1) = NULL;
      }
      AddrArgTypeAssigns_14 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__2_16, (MR_Integer) 1)));
      *AddrOfHeadVar__2_15 = HeadVar__2_16;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ArgTypeAssigns0_4;
      next_value_of_AddrOfHeadVar__2_15 = AddrArgTypeAssigns_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      AddrOfHeadVar__2_15 = next_value_of_AddrOfHeadVar__2_15;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__rename_apart_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredTypeVarSet_2,
  MR_Word PredExistQVars_3,
  MR_Word PredArgTypes_4,
  MR_Word PredConstraints_5,
  MR_Word STATE_VARIABLE_ArgTypeAssigns_0_6,
  MR_Word * STATE_VARIABLE_ArgTypeAssigns_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ArgTypeAssigns_7 = STATE_VARIABLE_ArgTypeAssigns_0_6;
    else
    {
      MR_Word TypeAssign0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeAssigns0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypeAssign1_22;
      MR_Word ParentArgTypes_23;
      MR_Word Renaming_24;
      MR_Word ParentExistQVars_25;
      MR_Word ParentConstraints_26;
      MR_Word HeadTypeParams0_27;
      MR_Word HeadTypeParams_28;
      MR_Word TypeAssign_29;
      MR_Word NewArgTypeAssign_30;
      MR_Word STATE_VARIABLE_ArgTypeAssigns_33_33;
      MR_Word TypeVarSet0_42;
      MR_Word TypeVarSet_43;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ArgTypeAssigns_0_6;

      check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign0_15, &TypeVarSet0_42);
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TypeVarSet0_42, PredTypeVarSet_2, &TypeVarSet_43, &Renaming_24);
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_24, PredArgTypes_4, &ParentArgTypes_23);
      check_hlds__type_assign__type_assign_set_typevarset_3_p_0(TypeVarSet_43, TypeAssign0_15, &TypeAssign1_22);
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_24, PredExistQVars_3, &ParentExistQVars_25);
      check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0(Renaming_24, PredConstraints_5, &ParentConstraints_26);
      check_hlds__type_assign__type_assign_get_external_type_params_2_p_0(TypeAssign1_22, &HeadTypeParams0_27);
      mercury__list__append_3_p_1((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), ParentExistQVars_25, HeadTypeParams0_27, &HeadTypeParams_28);
      check_hlds__type_assign__type_assign_set_external_type_params_3_p_0(HeadTypeParams_28, TypeAssign1_22, &TypeAssign_29);
      {
        NewArgTypeAssign_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NewArgTypeAssign_30, 0) = ((MR_Box) (TypeAssign_29));
        MR_hl_field(MR_mktag(0), NewArgTypeAssign_30, 1) = ((MR_Box) (ParentArgTypes_23));
        MR_hl_field(MR_mktag(0), NewArgTypeAssign_30, 2) = ((MR_Box) (ParentConstraints_26));
      }
      {
        STATE_VARIABLE_ArgTypeAssigns_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ArgTypeAssigns_33_33, 0) = ((MR_Box) (NewArgTypeAssign_30));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ArgTypeAssigns_33_33, 1) = ((MR_Box) (STATE_VARIABLE_ArgTypeAssigns_0_6));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TypeAssigns0_16;
      next_value_of_STATE_VARIABLE_ArgTypeAssigns_0_6 = STATE_VARIABLE_ArgTypeAssigns_33_33;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ArgTypeAssigns_0_6 = next_value_of_STATE_VARIABLE_ArgTypeAssigns_0_6;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck__atomic_interface_list_to_var_list_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word I_3;
      MR_Word O_4;
      MR_Word Interfaces_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_7;
      MR_Word * AddrSCCcallarg8_9;

      I_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 0))));
      O_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 1))));
      {
        Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_7, 0) = ((MR_Box) (O_4));
        MR_hl_field(MR_mktag(1), Var_7, 1) = NULL;
      }
      AddrSCCcallarg8_9 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), Var_7, (MR_Integer) 1)));
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (I_3));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (Var_7));
      }
      check_hlds__typecheck__LCMCfn_atomic_interface_list_to_var_list_1_2_p_0(Interfaces_5, AddrSCCcallarg8_9);
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
check_hlds__typecheck__LCMCfn_atomic_interface_list_to_var_list_1_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__2_10 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word I_3;
      MR_Word O_4;
      MR_Word Interfaces_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_7;
      MR_Word * AddrSCCcallarg8_9;
      MR_Word HeadVar__2_11;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_10;

      I_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 0))));
      O_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_6, (MR_Integer) 1))));
      {
        Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_7, 0) = ((MR_Box) (O_4));
        MR_hl_field(MR_mktag(1), Var_7, 1) = NULL;
      }
      AddrSCCcallarg8_9 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), Var_7, (MR_Integer) 1)));
      {
        HeadVar__2_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_11, 0) = ((MR_Box) (I_3));
        MR_hl_field(MR_mktag(1), HeadVar__2_11, 1) = ((MR_Box) (Var_7));
      }
      *AddrOfHeadVar__2_10 = HeadVar__2_11;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Interfaces_5;
      next_value_of_AddrOfHeadVar__2_10 = AddrSCCcallarg8_9;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      AddrOfHeadVar__2_10 = next_value_of_AddrOfHeadVar__2_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_check_for_ambiguity_6_p_0(
  MR_Word Context_7,
  MR_Word StuffToCheck_8,
  MR_Word HeadVars_9,
  MR_Word TypeAssignSet_10,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  {
    MR_bool succeeded;

    if ((TypeAssignSet_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck.typecheck_check_for_ambiguity\'/6", (MR_String) "no type-assignment");
        return;
      }
    }
    else
    {
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeAssignSet_10, (MR_Integer) 1))));
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeAssignSet_10, (MR_Integer) 0))));

      if ((Var_35 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
      else
      {
        MR_Word TypeAssign2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 0))));
        MR_Word ErrorsSoFar_16;

        check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(STATE_VARIABLE_Info_0_28, &ErrorsSoFar_16);
        succeeded = (ErrorsSoFar_16 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          switch (StuffToCheck_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word VarTypes1_17;
                MR_Word VarTypes2_18;
                MR_Word TypeBindings1_19;
                MR_Word TypeBindings2_20;
                MR_Word HeadTypes1_21;
                MR_Word HeadTypes2_22;
                MR_Word FinalHeadTypes1_23;
                MR_Word FinalHeadTypes2_24;
                MR_Word Var_39;
                MR_Word Var_40;

                check_hlds__type_assign__type_assign_get_var_types_2_p_0(Var_36, &VarTypes1_17);
                check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign2_14, &VarTypes2_18);
                check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(Var_36, &TypeBindings1_19);
                check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign2_14, &TypeBindings2_20);
                hlds__vartypes__lookup_var_types_3_p_0(VarTypes1_17, HeadVars_9, &HeadTypes1_21);
                hlds__vartypes__lookup_var_types_3_p_0(VarTypes2_18, HeadVars_9, &HeadTypes2_22);
                parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(TypeBindings1_19, HeadTypes1_21, &FinalHeadTypes1_23);
                parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(TypeBindings2_20, HeadTypes2_22, &FinalHeadTypes2_24);
                succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(FinalHeadTypes1_23, FinalHeadTypes2_24, &Var_39);
                if (succeeded)
                  succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(FinalHeadTypes2_24, FinalHeadTypes1_23, &Var_40);
              }
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
          }
        if (succeeded)
        {
          MR_Word ClauseContext_25;
          MR_Word OverloadedSymbolMap_26;
          MR_Word Spec_27;

          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_28, &ClauseContext_25);
          check_hlds__typecheck_info__typecheck_info_get_overloaded_symbol_map_2_p_0(STATE_VARIABLE_Info_0_28, &OverloadedSymbolMap_26);
          Spec_27 = check_hlds__typecheck_errors__report_ambiguity_error_5_f_0(ClauseContext_25, Context_7, OverloadedSymbolMap_26, Var_36, TypeAssign2_14);
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_27, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
        }
        else
          *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__argtypes_identical_up_to_renaming_7_p_0(
  MR_Word KindMap_8,
  MR_Word ExistQVarsA_9,
  MR_Word ArgTypesA_10,
  MR_Word TypeConstraintsA_11,
  MR_Word ExistQVarsB_12,
  MR_Word ArgTypesB_13,
  MR_Word TypeConstraintsB_14)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_29_29;
    MR_Word TypeCtorInfo_18_43;
    MR_Word ConstrainedTypesA_15;
    MR_Word ConstrainedTypesB_16;
    MR_Word ExistQVarTypesA_17;
    MR_Word ExistQVarTypesB_18;
    MR_Word TypesListA_19;
    MR_Word TypesListB_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word UnivCsA_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeConstraintsA_11, (MR_Integer) 0))));
    MR_Word ExistCsA_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeConstraintsA_11, (MR_Integer) 1))));
    MR_Word UnivCsB_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeConstraintsB_14, (MR_Integer) 0))));
    MR_Word ExistCsB_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeConstraintsB_14, (MR_Integer) 1))));
    MR_Word UnivTypesA_38;
    MR_Word UnivTypesB_39;
    MR_Word ExistTypesA_40;
    MR_Word ExistTypesB_41;
    MR_Word Var_46;
    MR_Word Var_47;

    succeeded = mercury__list__same_length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), UnivCsA_34, UnivCsB_36);
    if (succeeded)
    {
      succeeded = mercury__list__same_length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), ExistCsA_35, ExistCsB_37);
      if (succeeded)
      {
        succeeded = check_hlds__typecheck__same_structure_2_4_p_0(UnivCsA_34, UnivCsB_36, &UnivTypesA_38, &UnivTypesB_39);
        if (succeeded)
        {
          succeeded = check_hlds__typecheck__same_structure_2_4_p_0(ExistCsA_35, ExistCsB_37, &ExistTypesA_40, &ExistTypesB_41);
          if (succeeded)
          {
            TypeCtorInfo_18_43 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
            ConstrainedTypesA_15 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_18_43, ExistTypesA_40, UnivTypesA_38);
            ConstrainedTypesB_16 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_18_43, ExistTypesB_41, UnivTypesB_39);
            parse_tree__prog_type__var_list_to_type_list_3_p_0(KindMap_8, ExistQVarsA_9, &ExistQVarTypesA_17);
            parse_tree__prog_type__var_list_to_type_list_3_p_0(KindMap_8, ExistQVarsB_12, &ExistQVarTypesB_18);
            Var_24 = (MR_Word) ((MR_Unsigned) 0U);
            TypeCtorInfo_29_29 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
            {
              Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (ConstrainedTypesA_15));
              MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_24));
            }
            {
              Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (ArgTypesA_10));
              MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_23));
            }
            {
              Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (ExistQVarTypesA_17));
              MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_22));
            }
            mercury__list__condense_2_p_0(TypeCtorInfo_29_29, Var_21, &TypesListA_19);
            Var_28 = (MR_Word) ((MR_Unsigned) 0U);
            {
              Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (ConstrainedTypesB_16));
              MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_28));
            }
            {
              Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (ArgTypesB_13));
              MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_27));
            }
            {
              Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (ExistQVarTypesB_18));
              MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_26));
            }
            mercury__list__condense_2_p_0(TypeCtorInfo_29_29, Var_25, &TypesListB_20);
            succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(TypesListA_19, TypesListB_20, &Var_46);
            if (succeeded)
              succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(TypesListB_20, TypesListA_19, &Var_47);
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__same_structure_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word TypeCtorInfo_16_16;
      MR_Word ConstraintA_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ConstraintsA_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ConstraintB_7;
      MR_Word ConstraintsB_8;
      MR_Word ClassName_11;
      MR_Word ArgTypesA_12;
      MR_Word ArgTypesB_13;
      MR_Word TypesA0_14;
      MR_Word TypesB0_15;
      MR_Word Var_17;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ConstraintB_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ConstraintsB_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        ClassName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstraintA_5, (MR_Integer) 0))));
        ArgTypesA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstraintA_5, (MR_Integer) 1))));
        Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstraintB_7, (MR_Integer) 0))));
        ArgTypesB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConstraintB_7, (MR_Integer) 1))));
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ClassName_11, Var_17);
        if (succeeded)
        {
          TypeCtorInfo_16_16 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
          succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_16_16, TypeCtorInfo_16_16, ArgTypesA_12, ArgTypesB_13);
          if (succeeded)
          {
            succeeded = check_hlds__typecheck__same_structure_2_4_p_0(ConstraintsA_6, ConstraintsB_8, &TypesA0_14, &TypesB0_15);
            if (succeeded)
            {
              *HeadVar__3_3 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_16_16, ArgTypesA_12, TypesA0_14);
              *HeadVar__4_4 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_16_16, ArgTypesB_13, TypesB0_15);
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__restrict_to_head_vars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__typecheck__is_head_class_constraint_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck__restrict_to_head_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ArgVarTypes_7,
  MR_Word * HeadVar__3_3,
  MR_Word * UnprovenCs_10)
{
  {
    MR_bool succeeded;
    MR_Word UnivCs0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ExistCs0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word UnivCs_8;
    MR_Word ExistCs_9;
    MR_Word Var_16;
    MR_Word Var_11;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (check_hlds__typecheck__restrict_to_head_vars_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (ArgVarTypes_7));
    }
    mercury__list__filter_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_16, UnivCs0_5, &UnivCs_8, UnprovenCs_10);
    mercury__list__filter_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_16, ExistCs0_6, &ExistCs_9, &Var_11);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (UnivCs_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ExistCs_9));
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__infer_existential_types_4_p_0(
  MR_Word ArgTypeVars_5,
  MR_Word * ExistQVars_6,
  MR_Word ExternalTypeParams0_7,
  MR_Word * ExternalTypeParams_8)
{
  {
    MR_Word ArgTypeVarsSet_9;
    MR_Word ExternalTypeParamsSet_10;
    MR_Word ExistQVarsSet_11;
    MR_Word UnivQVarsSet_12;
    MR_Word UnivQVars_13;

    mercury__set__list_to_set_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), ArgTypeVars_5, &ArgTypeVarsSet_9);
    mercury__set__list_to_set_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), ExternalTypeParams0_7, &ExternalTypeParamsSet_10);
    mercury__set__intersect_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), ArgTypeVarsSet_9, ExternalTypeParamsSet_10, &ExistQVarsSet_11);
    mercury__set__difference_3_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), ArgTypeVarsSet_9, ExistQVarsSet_11, &UnivQVarsSet_12);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), ExistQVarsSet_11, ExistQVars_6);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), UnivQVarsSet_12, &UnivQVars_13);
    *ExternalTypeParams_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_scalar_common_1[2]), UnivQVars_13, ExternalTypeParams0_7);
  }
}

static void MR_CALL 
check_hlds__typecheck__rename_instance_method_constraints_3_p_0(
  MR_Word Renaming_4,
  MR_Word Origin0_5,
  MR_Word * Origin_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Origin0_5)) == (MR_Integer) 2);
    MR_Word MethodName_7;
    MR_Word Constraints0_8;

    if (succeeded)
    {
      MethodName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Origin0_5, (MR_Integer) 0))));
      Constraints0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Origin0_5, (MR_Integer) 1))));
      {
        MR_Word ClassId_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints0_8, (MR_Integer) 0))));
        MR_Word InstanceTypes0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints0_8, (MR_Integer) 1))));
        MR_Word InstanceConstraints0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints0_8, (MR_Integer) 2))));
        MR_Word ClassMethodClassContext0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints0_8, (MR_Integer) 3))));
        MR_Word InstanceTypes_13;
        MR_Word InstanceConstraints_14;
        MR_Word ClassMethodClassContext_15;
        MR_Word Constraints_16;

        parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_4, InstanceTypes0_10, &InstanceTypes_13);
        parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(Renaming_4, InstanceConstraints0_11, &InstanceConstraints_14);
        parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(Renaming_4, ClassMethodClassContext0_12, &ClassMethodClassContext_15);
        {
          Constraints_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Constraints_16, 0) = ((MR_Box) (ClassId_9));
          MR_hl_field(MR_mktag(0), Constraints_16, 1) = ((MR_Box) (InstanceTypes_13));
          MR_hl_field(MR_mktag(0), Constraints_16, 2) = ((MR_Box) (InstanceConstraints_14));
          MR_hl_field(MR_mktag(0), Constraints_16, 3) = ((MR_Box) (ClassMethodClassContext_15));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Origin_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (MethodName_7));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Constraints_16));
        }
      }
    }
    else
      *Origin_6 = Origin0_5;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_predicate_if_stub_7_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__typecheck__IntroducedFrom__pred__typecheck_predicate_if_stub__541__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck__typecheck_predicate_if_stub_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredId_9,
  MR_Word STATE_VARIABLE_PredInfo_0_36,
  MR_Word * STATE_VARIABLE_PredInfo_37,
  MR_Word FoundSyntaxError_11,
  MR_Word * STATE_VARIABLE_Specs_38,
  MR_Word * MaybeNeedTypecheck_13)
{
  {
    MR_bool succeeded;
    MR_Word Globals_14;
    MR_Word Markers0_15;
    MR_Word ClausesInfo0_16;
    MR_Word ClausesRep0_17;
    MR_Word ItemNumbers0_18;
    MR_Word ClausesRep0IsEmpty_19;
    MR_Word ClausesInfo1_23;
    MR_Word ClausesRep1_24;
    MR_Word ClausesRep1IsEmpty_26;
    MR_Word STATE_VARIABLE_Specs_49_49;
    MR_Word STATE_VARIABLE_PredInfo_51_51;
    MR_Word _ItemNumbers_25;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_14);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_0_36, &Markers0_15);
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_36, &ClausesInfo0_16);
    hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo0_16, &ClausesRep0_17, &ItemNumbers0_18);
    ClausesRep0IsEmpty_19 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(ClausesRep0_17);
    switch (ClausesRep0IsEmpty_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word WarnNonContiguousForeignProcs_21;

          libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 22, &WarnNonContiguousForeignProcs_21);
          switch (WarnNonContiguousForeignProcs_21) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word WarnNonContiguousClauses_22;

                libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 21, &WarnNonContiguousClauses_22);
                switch (WarnNonContiguousClauses_22) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_Specs_49_49 = (MR_Word) ((MR_Unsigned) 0U);
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word FirstRegion_82;
                      MR_Word SecondRegion_83;
                      MR_Word LaterRegions_84;

                      succeeded = hlds__hlds_clauses__clauses_are_non_contiguous_5_p_0(ItemNumbers0_18, (MR_Integer) 0, &FirstRegion_82, &SecondRegion_83, &LaterRegions_84);
                      if (succeeded)
                      {
                        MR_Word Spec_85;

                        Spec_85 = check_hlds__typecheck_errors__report_non_contiguous_clauses_6_f_0(ModuleInfo_8, PredId_9, STATE_VARIABLE_PredInfo_0_36, FirstRegion_82, SecondRegion_83, LaterRegions_84);
                        {
                          STATE_VARIABLE_Specs_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_49_49, 0) = ((MR_Box) (Spec_85));
                          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_49_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                      }
                      else
                        STATE_VARIABLE_Specs_49_49 = (MR_Word) ((MR_Unsigned) 0U);
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_Specs_49_49 = check_hlds__typecheck__report_any_non_contiguous_clauses_5_f_0(ModuleInfo_8, PredId_9, STATE_VARIABLE_PredInfo_0_36, ItemNumbers0_18, (MR_Integer) 1);
              }
              break;
          }
          STATE_VARIABLE_PredInfo_51_51 = STATE_VARIABLE_PredInfo_0_36;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_48;

          succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_14, (MR_Integer) 192, (MR_Integer) 1);
          if (succeeded)
          {
            Var_48 = (MR_Integer) 10;
            succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers0_15, Var_48);
            succeeded = !(succeeded);
          }
          if (succeeded)
          {
            MR_Word Spec_20;

            Spec_20 = check_hlds__typecheck_errors__report_no_clauses_stub_3_f_0(ModuleInfo_8, PredId_9, STATE_VARIABLE_PredInfo_0_36);
            {
              STATE_VARIABLE_Specs_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_49_49, 0) = ((MR_Box) (Spec_20));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_49_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            check_hlds__typecheck__generate_stub_clause_4_p_0(ModuleInfo_8, PredId_9, STATE_VARIABLE_PredInfo_0_36, &STATE_VARIABLE_PredInfo_51_51);
          }
          else
          {
            succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers0_15, (MR_Integer) 1);
            if (succeeded)
            {
              STATE_VARIABLE_Specs_49_49 = (MR_Word) ((MR_Unsigned) 0U);
              check_hlds__typecheck__generate_stub_clause_4_p_0(ModuleInfo_8, PredId_9, STATE_VARIABLE_PredInfo_0_36, &STATE_VARIABLE_PredInfo_51_51);
            }
            else
            {
              STATE_VARIABLE_Specs_49_49 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_PredInfo_51_51 = STATE_VARIABLE_PredInfo_0_36;
            }
          }
        }
        break;
    }
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_51_51, &ClausesInfo1_23);
    hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo1_23, &ClausesRep1_24, &_ItemNumbers_25);
    ClausesRep1IsEmpty_26 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(ClausesRep1_24);
    switch (ClausesRep1IsEmpty_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          switch (FoundSyntaxError_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *MaybeNeedTypecheck_13 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_Specs_38 = STATE_VARIABLE_Specs_49_49;
              }
              break;
            case (MR_Integer) 1:
              {
                *STATE_VARIABLE_Specs_38 = (MR_Word) ((MR_Unsigned) 0U);
                *MaybeNeedTypecheck_13 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_3[1]));
              }
              break;
          }
          *STATE_VARIABLE_PredInfo_37 = STATE_VARIABLE_PredInfo_51_51;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ContainsErrors_34;
          MR_Word Var_57;

          {
            Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_predicate_if_stub_7_p_0_1));
            MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (STATE_VARIABLE_Specs_49_49));
            MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_57, (MR_String) "predicate \140check_hlds.typecheck.typecheck_predicate_if_stub\'/7", (MR_String) "starting Specs not empty");
          succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers0_15, (MR_Integer) 10);
          if (succeeded)
          {
            MR_Word HeadVars_27;
            MR_Word ArgTypes_30;
            MR_Word VarTypes_31;
            MR_Word ClausesInfo_32;
            MR_Word HeadVarsInclExistentials_33;
            MR_Word STATE_VARIABLE_PredInfo_62_62;
            MR_Word _ArgTypeVarSet_28;
            MR_Word _ExistQVars_29;

            hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(ClausesInfo1_23, &HeadVars_27);
            hlds__hlds_pred__pred_info_get_arg_types_4_p_0(STATE_VARIABLE_PredInfo_51_51, &_ArgTypeVarSet_28, &_ExistQVars_29, &ArgTypes_30);
            hlds__vartypes__vartypes_from_corresponding_lists_3_p_0(HeadVars_27, ArgTypes_30, &VarTypes_31);
            hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(VarTypes_31, ClausesInfo1_23, &ClausesInfo_32);
            hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_32, STATE_VARIABLE_PredInfo_51_51, &STATE_VARIABLE_PredInfo_62_62);
            parse_tree__prog_type__type_vars_list_2_p_0(ArgTypes_30, &HeadVarsInclExistentials_33);
            hlds__hlds_pred__pred_info_set_external_type_params_3_p_0(HeadVarsInclExistentials_33, STATE_VARIABLE_PredInfo_62_62, STATE_VARIABLE_PredInfo_37);
            ContainsErrors_34 = (MR_Integer) 0;
            *STATE_VARIABLE_Specs_38 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            ContainsErrors_34 = (MR_Integer) 1;
            switch (FoundSyntaxError_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_67;

                  Var_67 = check_hlds__typecheck_errors__report_no_clauses_3_f_0(ModuleInfo_8, PredId_9, STATE_VARIABLE_PredInfo_51_51);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_Specs_38 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_67));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
              case (MR_Integer) 1:
                *STATE_VARIABLE_Specs_38 = (MR_Word) ((MR_Unsigned) 0U);
                break;
            }
            *STATE_VARIABLE_PredInfo_37 = STATE_VARIABLE_PredInfo_51_51;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeNeedTypecheck_13 = base;
            MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) (((((MR_Unsigned) (ContainsErrors_34) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__typecheck__generate_stub_clause_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_PredInfo_0_16,
  MR_Word * STATE_VARIABLE_PredInfo_17)
{
  {
    MR_bool succeeded;
    MR_Word VarSet0_9;
    MR_Word PredPieces_10;
    MR_String PredName_11;
    MR_Word StubClause_12;
    MR_Word VarSet_13;
    MR_Word ClausesRep_14;
    MR_Word ItemNumbers_15;
    MR_Word STATE_VARIABLE_ClausesInfo_18_18;
    MR_Word STATE_VARIABLE_PredInfo_20_20;
    MR_Word Var_21;
    MR_Word STATE_VARIABLE_ClausesInfo_23_23;
    MR_Word STATE_VARIABLE_ClausesInfo_24_24;
    MR_Word Markers0_35;
    MR_Word Markers_36;
    MR_Word Context_37;
    MR_Word PredNameVar_38;
    MR_Word UnifyGoal_39;
    MR_Word ModuleName_40;
    MR_String CalleeName_41;
    MR_Word CallGoal_42;
    MR_Word GoalInfo_43;
    MR_Word Body_44;
    MR_Word Var_49;
    MR_Word Var_54;
    MR_Word Var_56;
    MR_Word Var_58;
    MR_Word Var_60;
    MR_Word Var_61;

    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_16, &STATE_VARIABLE_ClausesInfo_18_18);
    hlds__hlds_clauses__clauses_info_get_varset_2_p_0(STATE_VARIABLE_ClausesInfo_18_18, &VarSet0_9);
    PredPieces_10 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_5, (MR_Integer) 0, PredId_6);
    PredName_11 = parse_tree__error_util__error_pieces_to_string_1_f_0(PredPieces_10);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_0_16, &Markers0_35);
    hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 0, Markers0_35, &Markers_36);
    hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_36, STATE_VARIABLE_PredInfo_0_16, &STATE_VARIABLE_PredInfo_20_20);
    hlds__hlds_pred__pred_info_get_context_2_p_0(STATE_VARIABLE_PredInfo_20_20, &Context_37);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "PredName", &PredNameVar_38, VarSet0_9, &VarSet_13);
    hlds__make_goal__make_string_const_construction_4_p_0(Context_37, PredNameVar_38, PredName_11, &UnifyGoal_39);
    ModuleName_40 = hlds__hlds_pred__pred_info_module_1_f_0(STATE_VARIABLE_PredInfo_20_20);
    succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(ModuleName_40);
    if (succeeded)
      CalleeName_41 = (MR_String) "sorry";
    else
      CalleeName_41 = (MR_String) "no_clauses";
    Var_49 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (PredNameVar_38));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_56 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_5, Var_49, CalleeName_41, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, Var_54, (MR_Word) ((MR_Unsigned) 0U), Var_56, Context_37, &CallGoal_42);
    hlds__hlds_goal__goal_info_init_2_p_0(Context_37, &GoalInfo_43);
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (CallGoal_42));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (UnifyGoal_39));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_58, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_58, 2) = ((MR_Box) (Var_60));
    }
    {
      Body_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Body_44, 0) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), Body_44, 1) = ((MR_Box) (GoalInfo_43));
    }
    {
      StubClause_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), StubClause_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), StubClause_12, 1) = ((MR_Box) (Body_44));
      MR_hl_field(MR_mktag(0), StubClause_12, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), StubClause_12, 3) = ((MR_Box) (Context_37));
      MR_hl_field(MR_mktag(0), StubClause_12, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (StubClause_12));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    hlds__hlds_clauses__set_clause_list_2_p_0(Var_21, &ClausesRep_14);
    ItemNumbers_15 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(ClausesRep_14, ItemNumbers_15, STATE_VARIABLE_ClausesInfo_18_18, &STATE_VARIABLE_ClausesInfo_23_23);
    hlds__hlds_clauses__clauses_info_set_varset_3_p_0(VarSet_13, STATE_VARIABLE_ClausesInfo_23_23, &STATE_VARIABLE_ClausesInfo_24_24);
    hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(STATE_VARIABLE_ClausesInfo_24_24, STATE_VARIABLE_PredInfo_20_20, STATE_VARIABLE_PredInfo_17);
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck__report_any_non_contiguous_clauses_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word PredInfo_9,
  MR_Word ItemNumbers_10,
  MR_Word Type_11)
{
  {
    MR_bool succeeded;
    MR_Word Specs_12;
    MR_Word FirstRegion_13;
    MR_Word SecondRegion_14;
    MR_Word LaterRegions_15;

    succeeded = hlds__hlds_clauses__clauses_are_non_contiguous_5_p_0(ItemNumbers_10, Type_11, &FirstRegion_13, &SecondRegion_14, &LaterRegions_15);
    if (succeeded)
    {
      MR_Word Spec_16;

      Spec_16 = check_hlds__typecheck_errors__report_non_contiguous_clauses_6_f_0(ModuleInfo_7, PredId_8, PredInfo_9, FirstRegion_13, SecondRegion_14, LaterRegions_15);
      {
        Specs_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Specs_12, 0) = ((MR_Box) (Spec_16));
        MR_hl_field(MR_mktag(1), Specs_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
      Specs_12 = (MR_Word) ((MR_Unsigned) 0U);
    return Specs_12;
  }
}

static void MR_CALL 
check_hlds__typecheck__construct_type_inference_messages_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ValidPredIdSet_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
    else
    {
      MR_Word PredId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word PredIds_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word PredInfo_16;
      MR_Word Markers_17;
      MR_Word STATE_VARIABLE_Specs_23_23;
      MR_Word TypeCtorInfo_25_25;
      MR_Word Var_18;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_1, PredId_13, &PredInfo_16);
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_16, &Markers_17);
      succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_17, (MR_Integer) 2);
      if (succeeded)
      {
        TypeCtorInfo_25_25 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0);
        succeeded = mercury__set_tree234__contains_2_p_0(TypeCtorInfo_25_25, ValidPredIdSet_2, ((MR_Box) (PredId_13)));
        if (succeeded)
        {
          succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(PredInfo_16, &Var_18);
          succeeded = !(succeeded);
        }
      }
      if (succeeded)
      {
        MR_Word Spec_19;

        Spec_19 = check_hlds__typecheck__construct_type_inference_message_3_f_0(ModuleInfo_1, PredId_13, PredInfo_16);
        {
          STATE_VARIABLE_Specs_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_23_23, 0) = ((MR_Box) (Spec_19));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_23_23, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
        }
      }
      else
        STATE_VARIABLE_Specs_23_23 = STATE_VARIABLE_Specs_0_4;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = PredIds_14;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_23_23;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck__construct_type_inference_message_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__5_5;

    check_hlds__typecheck_errors__construct_pred_decl_diff_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__5_5));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck__construct_type_inference_message_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__typecheck__IntroducedFrom__pred__construct_type_inference_message__293__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck__construct_type_inference_message_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word PredInfo_7)
{
  {
    MR_bool succeeded;
    MR_Word Spec_8;
    MR_String PredName_9;
    MR_Word PredOrFunc_10;
    MR_Word UnqualPredSymName_11;
    MR_Word Context_12;
    MR_Word VarSet_13;
    MR_Word ExistQVars_14;
    MR_Word Types0_15;
    MR_Word Types_16;
    MR_Word ClassContext_17;
    MR_Word Purity_18;
    MR_Word ArgTypes_21;
    MR_Word MaybeReturnType_22;
    MR_String TypeStr_23;
    MR_Word InferredPieces_25;
    MR_Word PredicateTable_26;
    MR_Word ModuleName_27;
    MR_Word QualPredSymName_28;
    MR_Word AllPredIds_29;
    MR_Word AllOtherPredIds_30;
    MR_Word PredIsDeclared_31;
    MR_Word AllOtherDeclaredPredIds_35;
    MR_Word Msg_36;
    MR_Word Severity_37;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_78;

    PredName_9 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_7);
    PredOrFunc_10 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_7);
    {
      UnqualPredSymName_11 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnqualPredSymName_11, 0) = ((MR_Box) (PredName_9));
    }
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_7, &Context_12);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_7, &VarSet_13, &ExistQVars_14, &Types0_15);
    parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(Types0_15, &Types_16);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_7, &ClassContext_17);
    hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_7, &Purity_18);
    switch (PredOrFunc_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ReturnType_24;
          MR_Box conv0_ReturnType_24;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_16, &ArgTypes_21, &conv0_ReturnType_24);
          ReturnType_24 = ((MR_Word) (conv0_ReturnType_24));
          {
            MaybeReturnType_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeReturnType_22, 0) = ((MR_Box) (ReturnType_24));
          }
          TypeStr_23 = parse_tree__parse_tree_out_pred_decl__mercury_func_type_to_string_9_f_0(VarSet_13, (MR_Integer) 0, ExistQVars_14, UnqualPredSymName_11, ArgTypes_21, ReturnType_24, (MR_Word) ((MR_Unsigned) 0U), Purity_18, ClassContext_17);
        }
        break;
      case (MR_Integer) 0:
        {
          ArgTypes_21 = Types_16;
          MaybeReturnType_22 = (MR_Word) ((MR_Unsigned) 0U);
          TypeStr_23 = parse_tree__parse_tree_out_pred_decl__mercury_pred_type_to_string_8_f_0(VarSet_13, (MR_Integer) 0, ExistQVars_14, UnqualPredSymName_11, Types_16, (MR_Word) ((MR_Unsigned) 0U), Purity_18, ClassContext_17);
        }
        break;
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (TypeStr_23));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[17])));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[16])));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
    }
    {
      InferredPieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), InferredPieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_3[0])));
      MR_hl_field(MR_mktag(1), InferredPieces_25, 1) = ((MR_Box) (Var_44));
    }
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_5, &PredicateTable_26);
    ModuleName_27 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_7);
    {
      QualPredSymName_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), QualPredSymName_28, 0) = ((MR_Box) (ModuleName_27));
      MR_hl_field(MR_mktag(1), QualPredSymName_28, 1) = ((MR_Box) (PredName_9));
    }
    hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(PredicateTable_26, (MR_Integer) 0, PredOrFunc_10, QualPredSymName_28, &AllPredIds_29);
    mercury__list__delete_all_3_p_1((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), AllPredIds_29, ((MR_Box) (PredId_6)), &AllOtherPredIds_30);
    {
      PredIsDeclared_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredIsDeclared_31, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), PredIsDeclared_31, 1) = ((MR_Box) (check_hlds__typecheck__construct_type_inference_message_3_f_0_1));
      MR_hl_field(MR_mktag(0), PredIsDeclared_31, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), PredIsDeclared_31, 3) = ((MR_Box) (ModuleInfo_5));
    }
    mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIsDeclared_31, AllOtherPredIds_30, &AllOtherDeclaredPredIds_35);
    if ((AllOtherDeclaredPredIds_35 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_69;
      MR_Word Var_70;

      {
        Var_70 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (InferredPieces_25));
      }
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 59) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_69));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_36, 0) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(0), Msg_36, 1) = ((MR_Box) (Var_65));
      }
      Severity_37 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_2[0]));
    }
    else
    {
      MR_Word DiffPieceLists_40;
      MR_Word Pieces_41;
      MR_Word Var_55;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;

      {
        Var_55 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (check_hlds__typecheck__construct_type_inference_message_3_f_0_2));
        MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (ModuleInfo_5));
        MR_hl_field(MR_mktag(0), Var_55, 4) = ((MR_Box) (ArgTypes_21));
        MR_hl_field(MR_mktag(0), Var_55, 5) = ((MR_Box) (MaybeReturnType_22));
      }
      mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__typecheck_scalar_common_1[0]), Var_55, AllOtherDeclaredPredIds_35, &DiffPieceLists_40);
      Var_61 = mercury__list__condense_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), DiffPieceLists_40);
      Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InferredPieces_25, Var_61);
      Pieces_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[18])), Var_60);
      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (Pieces_41));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_36, 0) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(0), Msg_36, 1) = ((MR_Box) (Var_62));
      }
      Severity_37 = (MR_Word) ((MR_Unsigned) 8U);
    }
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Msg_36));
      MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) (Severity_37));
      MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) (Var_78));
    }
    return Spec_8;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_constraints_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__typecheck____Unify____cons_constraints_action_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__typecheck____Compare____cons_constraints_action_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__typecheck____Unify____cons_type_assign_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__typecheck____Compare____cons_type_assign_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__typecheck____Unify____cons_type_assign_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__typecheck____Compare____cons_type_assign_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__typecheck____Unify____maybe_cons_type_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__typecheck____Compare____maybe_cons_type_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_need_typecheck_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__typecheck____Unify____maybe_need_typecheck_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck____Compare____maybe_need_typecheck_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__typecheck____Compare____maybe_need_typecheck_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck____Unify____stuff_to_check_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__typecheck____Unify____stuff_to_check_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__typecheck____Compare____stuff_to_check_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__typecheck__init(void)
{
}

void mercury__check_hlds__typecheck__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_constraints_action_0);
	MR_register_type_ctor_info(&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_assign_0);
	MR_register_type_ctor_info(&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_assign_set_0);
	MR_register_type_ctor_info(&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0);
	MR_register_type_ctor_info(&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_need_typecheck_0);
	MR_register_type_ctor_info(&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_stuff_to_check_0);
}

void mercury__check_hlds__typecheck__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__typecheck__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.typecheck.
