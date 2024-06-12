/*
** Automatically generated from `typecheck_clauses.m'
** by the Mercury compiler,
** version rotd-2024-06-12
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


// :- module check_hlds.typecheck_clauses.
// :- implementation.

/*
INIT mercury__check_hlds__typecheck_clauses__init
ENDINIT
*/

#include "check_hlds.typecheck_clauses.mih"


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
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_assign.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.typecheck_debug.mih"
#include "check_hlds.typecheck_error_overload.mih"
#include "check_hlds.typecheck_error_type_assign.mih"
#include "check_hlds.typecheck_error_undef.mih"
#include "check_hlds.typecheck_error_util.mih"
#include "check_hlds.typecheck_errors.mih"
#include "check_hlds.typecheck_info.mih"
#include "check_hlds.typeclasses.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
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
#include "parse_tree.prog_type_construct.mih"
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_type_unify.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0_s {
  MR_Word check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0__TVarRenaming_4;
  MR_bool check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0__succeeded;
  MR_Word check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0__ArgTypes0_9;
  jmp_buf check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0__commit_0;
  MR_Word check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0__TypeInfo_13_13;
  MR_Word check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0__Var_12;
};


static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_clauses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_clauses__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_clauses__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_clauses__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_clauses__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_clauses__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_clauses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_clauses__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_clauses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_EnumFunctorDesc check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_cons_constraints_action_0_0;

static const MR_EnumFunctorDesc check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_cons_constraints_action_0_1;

static const MR_EnumFunctorDesc check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_cons_constraints_action_0_2;

static const MR_EnumFunctorDescPtr check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_ordinal_ordered_cons_constraints_action_0[3];

static const MR_EnumFunctorDescPtr check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_name_ordered_cons_constraints_action_0[3];

static const MR_Integer check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__functor_number_map_cons_constraints_action_0[3];

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_clauses__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__field_types_cons_type_assign_0_0[4];

static const MR_DuFunctorDesc check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_functor_desc_cons_type_assign_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_stag_ordered_cons_type_assign_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_ptag_ordered_cons_type_assign_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_name_ordered_cons_type_assign_0[1];

static const MR_Integer check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__functor_number_map_cons_type_assign_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_clauses__list__ti_list_1check_hlds__typecheck_clauses__type_ctor_info_cons_type_assign_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_clauses__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__field_types_maybe_cons_type_info_0_0[1];

static const MR_DuFunctorDesc check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_functor_desc_maybe_cons_type_info_0_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__field_types_maybe_cons_type_info_0_1[1];

static const MR_DuFunctorDesc check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_functor_desc_maybe_cons_type_info_0_1;

static const MR_DuFunctorDescPtr check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_stag_ordered_maybe_cons_type_info_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_stag_ordered_maybe_cons_type_info_0_1[1];

static const MR_DuPtagLayout check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_ptag_ordered_maybe_cons_type_info_0[2];

static const MR_DuFunctorDescPtr check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_name_ordered_maybe_cons_type_info_0[2];

static const MR_Integer check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__functor_number_map_maybe_cons_type_info_0[2];

static const MR_EnumFunctorDesc check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_stuff_to_check_0_0;

static const MR_EnumFunctorDesc check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_stuff_to_check_0_1;

static const MR_EnumFunctorDescPtr check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_ordinal_ordered_stuff_to_check_0[2];

static const MR_EnumFunctorDescPtr check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_name_ordered_stuff_to_check_0[2];

static const MR_Integer check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__functor_number_map_stuff_to_check_0[2];

static const MR_EnumFunctorDesc check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_types_comparison_0_0;

static const MR_EnumFunctorDesc check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_types_comparison_0_1;

static const MR_EnumFunctorDescPtr check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_ordinal_ordered_types_comparison_0[2];

static const MR_EnumFunctorDescPtr check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_name_ordered_types_comparison_0[2];

static const MR_Integer check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__functor_number_map_types_comparison_0[2];

static MR_Word MR_CALL 
check_hlds__typecheck_clauses__IntroducedFrom__func__convert_cons_defn__2095__3_1_f_0(
  MR_Word LambdaHeadVar__1_46);

static MR_Word MR_CALL 
check_hlds__typecheck_clauses__IntroducedFrom__func__convert_cons_defn__2095__2_1_f_0(
  MR_Word LambdaHeadVar__1_46);

static MR_Word MR_CALL 
check_hlds__typecheck_clauses__IntroducedFrom__func__convert_cons_defn__2095__1_1_f_0(
  MR_Word LambdaHeadVar__1_46);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__IntroducedFrom__pred__typecheck_goal_expr__483__1_2_p_0(
  MR_Word GoalType_94,
  MR_Word HeadVar__2_228);

static void MR_CALL 
check_hlds__typecheck_clauses____Compare____types_comparison_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____types_comparison_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_clauses____Compare____maybe_cons_type_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____maybe_cons_type_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_clauses____Compare____invariant_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____invariant_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_clauses____Compare____cons_type_assign_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____cons_type_assign_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_clauses____Compare____cons_type_assign_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____cons_type_assign_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_clauses____Compare____cons_constraints_action_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____cons_constraints_action_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__typecheck_clauses__compute_headvar_types_in_type_assign_3_p_0(
  MR_Word HeadVars_4,
  MR_Word TypeAssign_5,
  MR_Word * HeadTypes_6);

static void MR_CALL 
check_hlds__typecheck_clauses__rename_constraint_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_clauses__rename_constraint_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__typecheck_clauses__rename_constraint_3_p_0_3(
  void * env_ptr_arg);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__rename_constraint_3_p_0(
  MR_Word TVarRenaming_4,
  MR_Word Constraint0_5,
  MR_Word * Constraint_6);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__project_constraint_2_p_0(
  MR_Word CallTVars_3,
  MR_Word Constraint_4);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__is_field_access_function_for_type_ctor_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word AccessType_6,
  MR_Word TypeCtor_7,
  MR_Word PredId_8);

static MR_Box MR_CALL 
check_hlds__typecheck_clauses__make_field_access_function_cons_type_info_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__make_field_access_function_cons_type_info_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__make_field_access_function_cons_type_info_8_p_0(
  MR_Word Info_9,
  MR_Word GoalId_10,
  MR_Word FuncName_11,
  MR_Word UserArity_12,
  MR_Word AccessType_13,
  MR_Word FieldName_14,
  MR_Word FieldDefn_15,
  MR_Word * ConsTypeInfo_16);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__convert_field_access_cons_type_info_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__convert_field_access_cons_type_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_clauses__convert_field_access_cons_type_info_7_p_0(
  MR_Word ClassTable_8,
  MR_Word AccessType_9,
  MR_Word FieldSymName_10,
  MR_Word FieldDefn_11,
  MR_Word FunctorConsTypeInfo_12,
  MR_Word OrigExistTVars_13,
  MR_Word * ConsTypeInfo_14);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__type_assign_has_no_coerce_constraints_1_p_0(
  MR_Word TypeAssign_2);

static void MR_CALL 
check_hlds__typecheck_clauses__type_assign_prune_coerce_constraints_3_p_0(
  MR_Word TypeTable_4,
  MR_Word STATE_VARIABLE_TypeAssign_0_10,
  MR_Word * STATE_VARIABLE_TypeAssign_11);

static void MR_CALL 
check_hlds__typecheck_clauses__check_and_drop_coerce_constraints_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_clauses__check_and_drop_coerce_constraints_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_TypeAssign_0_4,
  MR_Word * STATE_VARIABLE_TypeAssign_5);

static void MR_CALL 
check_hlds__typecheck_clauses__build_type_param_variance_restrictions_in_ctor_arg_6_p_0(
  MR_Word TypeTable_7,
  MR_Word CurTypeCtor_8,
  MR_Word CurTypeParams_9,
  MR_Word CtorArg_10,
  MR_Word STATE_VARIABLE_InvariantSet_0_15,
  MR_Word * STATE_VARIABLE_InvariantSet_16);

static void MR_CALL 
check_hlds__typecheck_clauses__build_type_param_variance_restrictions_in_ctor_arg_type_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_clauses__build_type_param_variance_restrictions_in_ctor_arg_type_6_p_0(
  MR_Word TypeTable_7,
  MR_Word CurTypeCtor_8,
  MR_Word CurTypeParams_9,
  MR_Word CtorArgType_10,
  MR_Word STATE_VARIABLE_InvariantSet_0_34,
  MR_Word * STATE_VARIABLE_InvariantSet_35);

static void MR_CALL 
check_hlds__typecheck_clauses__build_type_param_variance_restrictions_in_ctor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_clauses__build_type_param_variance_restrictions_in_ctor_6_p_0(
  MR_Word TypeTable_7,
  MR_Word CurTypeCtor_8,
  MR_Word CurTypeParams_9,
  MR_Word Ctor_10,
  MR_Word STATE_VARIABLE_InvariantSet_0_18,
  MR_Word * STATE_VARIABLE_InvariantSet_19);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_coerce_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_coerce_2_8_p_0(
  MR_Word Context_9,
  MR_Word FromVar_10,
  MR_Word ToVar_11,
  MR_Word TypeAssign0_12,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_34,
  MR_Word * STATE_VARIABLE_TypeAssignSet_35,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__check_coerce_type_params_8_p_0(
  MR_Word TypeTable_9,
  MR_Word TVarSet_10,
  MR_Word InvariantSet_11,
  MR_Word TypeParams_12,
  MR_Word FromTypeArgs_13,
  MR_Word ToTypeArgs_14,
  MR_Word STATE_VARIABLE_TypeAssign_0_22,
  MR_Word * STATE_VARIABLE_TypeAssign_23);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__compare_types_7_p_0(
  MR_Word TypeTable_8,
  MR_Word TVarSet_9,
  MR_Word Comparison_10,
  MR_Word TypeA_11,
  MR_Word TypeB_12,
  MR_Word STATE_VARIABLE_TypeAssign_0_18,
  MR_Word * STATE_VARIABLE_TypeAssign_19);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__compare_types_corresponding_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_TypeAssign_0_6,
  MR_Word * STATE_VARIABLE_TypeAssign_7);

static void MR_CALL 
check_hlds__typecheck_clauses__replace_principal_type_ctor_with_base_4_p_0(
  MR_Word TypeTable_5,
  MR_Word TVarSet_6,
  MR_Word Type0_7,
  MR_Word * Type_8);

static void MR_CALL 
check_hlds__typecheck_clauses__type_assign_check_functor_type_builtin_5_p_0(
  MR_Word ConsType_6,
  MR_Word Y_7,
  MR_Word TypeAssign0_8,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_15,
  MR_Word * STATE_VARIABLE_TypeAssignSet_16);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_var_has_stm_atomic_type_6_p_0(
  MR_Word Context_7,
  MR_Word Var_8,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_11,
  MR_Word * STATE_VARIABLE_TypeAssignSet_12,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__typecheck_clauses_loop_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_clauses_loop_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_clauses_loop_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_clauses_loop_9_p_0(
  MR_Word HeadVars_1,
  MR_Word ArgTypes_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevClauses_0_4,
  MR_Word * STATE_VARIABLE_RevClauses_5,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_6,
  MR_Word * STATE_VARIABLE_TypeAssignSet_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_unification_10_p_0(
  MR_Word UnifyContext_11,
  MR_Word Context_12,
  MR_Word GoalId_13,
  MR_Word LHSVar_14,
  MR_Word RHS0_15,
  MR_Word * RHS_16,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_32,
  MR_Word * STATE_VARIABLE_TypeAssignSet_33,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_case_list_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word Context_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_goal_list_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word Context_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__typecheck_goal_expr_7_p_0_3(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_goal_expr_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
check_hlds__typecheck_clauses__typecheck_goal_expr_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_goal_expr_7_p_0(
  MR_Word GoalExpr0_8,
  MR_Word * GoalExpr_9,
  MR_Word GoalInfo_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_115,
  MR_Word * STATE_VARIABLE_TypeAssignSet_116,
  MR_Word STATE_VARIABLE_Info_0_117,
  MR_Word * STATE_VARIABLE_Info_118);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_goal_7_p_0(
  MR_Word Goal0_8,
  MR_Word * Goal_9,
  MR_Word EnclosingContext_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_28,
  MR_Word * STATE_VARIABLE_TypeAssignSet_29,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_coerce_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_coerce_6_p_0(
  MR_Word Context_7,
  MR_Word Args_8,
  MR_Word TypeAssignSet0_9,
  MR_Word * TypeAssignSet_10,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_lambda_var_has_type_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Purity_2,
  MR_Word PredOrFunc_3,
  MR_Word Var_4,
  MR_Word ArgVars_5,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_6,
  MR_Word * STATE_VARIABLE_TypeAssignSet_7);

static void MR_CALL 
check_hlds__typecheck_clauses__type_assign_get_types_of_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_TypeAssign_0_3,
  MR_Word * STATE_VARIABLE_TypeAssign_4);

static void MR_CALL 
check_hlds__typecheck_clauses__type_assigns_unify_var_var_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word X_2,
  MR_Word Y_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5);

static MR_Box MR_CALL 
check_hlds__typecheck_clauses__typecheck_unify_var_functor_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_unify_var_functor_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_unify_var_functor_10_p_0(
  MR_Word UnifyContext_11,
  MR_Word Context_12,
  MR_Word Var_13,
  MR_Word ConsId_14,
  MR_Word ArgVars_15,
  MR_Word GoalId_16,
  MR_Word TypeAssignSet0_17,
  MR_Word * TypeAssignSet_18,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54);

static void MR_CALL 
check_hlds__typecheck_clauses__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word ArgVars_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5);

static void MR_CALL 
check_hlds__typecheck_clauses__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_115_95_118_97_114_115_95_104_97_118_101_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgVars_3,
  MR_Word Types_4,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_5,
  MR_Word * STATE_VARIABLE_TypeAssignSet_6);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__typecheck_info_get_ctor_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_info_get_ctor_list_6_p_0(
  MR_Word Info_7,
  MR_Word ConsId_8,
  MR_Integer Arity_9,
  MR_Word GoalId_10,
  MR_Word * ConsInfos_11,
  MR_Word * ConsErrors_12);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__typecheck_info_get_ctor_list_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_info_get_ctor_list_2_6_p_0(
  MR_Word Info_7,
  MR_Word ConsId_8,
  MR_Integer Arity_9,
  MR_Word GoalId_10,
  MR_Word * ConsInfos_11,
  MR_Word * ConsErrors_12);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word ConsId_6,
  MR_Integer Arity_7,
  MR_Word * ConsTypeInfos_8);

static void MR_CALL 
check_hlds__typecheck_clauses__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_108_105_115_116_95_95_91_51_93_95_48_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static MR_Box MR_CALL 
check_hlds__typecheck_clauses__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_95_91_51_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_clauses__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_95_91_51_93_95_48_6_p_0(
  MR_Word Info_7,
  MR_Word GoalId_8,
  MR_Word ConsId_10,
  MR_Word ConsDefn_11,
  MR_Word * ConsTypeInfo_12);

static MR_Word MR_CALL 
check_hlds__typecheck_clauses__empty_hlds_constraints_0_f_0(void);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__builtin_pred_type_5_p_0(
  MR_Word Info_6,
  MR_Word ConsId_7,
  MR_Integer Arity_8,
  MR_Word GoalId_9,
  MR_Word * ConsTypeInfos_10);

static void MR_CALL 
check_hlds__typecheck_clauses__accumulate_cons_type_infos_for_pred_ids_7_p_0(
  MR_Word Info_1,
  MR_Word PredTable_2,
  MR_Word GoalId_3,
  MR_Word HeadVar__4_4,
  MR_Integer Arity_5,
  MR_Word STATE_VARIABLE_ConsTypeInfos_0_6,
  MR_Word * STATE_VARIABLE_ConsTypeInfos_7);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__builtin_atomic_type_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2);

static MR_Box MR_CALL 
check_hlds__typecheck_clauses__convert_cons_defn_list_7_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_clauses__convert_cons_defn_list_7_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
check_hlds__typecheck_clauses__split_cons_errors_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_var_functor_types_4_p_0(
  MR_Word Var_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ArgsTypeAssignSet_0_3,
  MR_Word * STATE_VARIABLE_ArgsTypeAssignSet_4);

static void MR_CALL 
check_hlds__typecheck_clauses__get_cons_type_assigns_for_cons_defns_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TypeAssigns_2,
  MR_Word STATE_VARIABLE_ConsTypeAssignSet_0_3,
  MR_Word * STATE_VARIABLE_ConsTypeAssignSet_4);

static void MR_CALL 
check_hlds__typecheck_clauses__get_cons_type_assigns_for_cons_defn_4_p_0(
  MR_Word ConsTypeInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ConsTypeAssignSet_0_3,
  MR_Word * STATE_VARIABLE_ConsTypeAssignSet_4);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_var_has_type_8_p_0(
  MR_Word GoalContext_9,
  MR_Word Context_10,
  MR_Word Var_11,
  MR_Word Type_12,
  MR_Word TypeAssignSet0_13,
  MR_Word * TypeAssignSet_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_call_pred_id_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_call_pred_id_9_p_0(
  MR_Word ArgVectorKind_10,
  MR_Word Context_11,
  MR_Word GoalId_12,
  MR_Word PredId_13,
  MR_Word ArgVars_14,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_25,
  MR_Word * STATE_VARIABLE_TypeAssignSet_26,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_call_pred_name_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_call_pred_name_9_p_0(
  MR_Word SymName_10,
  MR_Word Context_11,
  MR_Word GoalId_12,
  MR_Word ArgVars_13,
  MR_Word * PredId_14,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_30,
  MR_Word * STATE_VARIABLE_TypeAssignSet_31,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33);

static void MR_CALL 
check_hlds__typecheck_clauses__get_overloaded_pred_arg_types_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_ArgsTypeAssignSet_0_6,
  MR_Word * STATE_VARIABLE_ArgsTypeAssignSet_7);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_event_call_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_event_call_7_p_0(
  MR_Word Context_8,
  MR_String EventName_9,
  MR_Word ArgVars_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_21,
  MR_Word * STATE_VARIABLE_TypeAssignSet_22,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_vars_have_types_in_arg_vector_12_p_0(
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
check_hlds__typecheck_clauses__typecheck_var_has_type_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Var_2,
  MR_Word Type_3,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_TypeAssignSet_5);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_higher_order_call_9_p_0(
  MR_Word GenericCallId_10,
  MR_Word Context_11,
  MR_Word PredVar_12,
  MR_Word Purity_13,
  MR_Word ArgVars_14,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_23,
  MR_Word * STATE_VARIABLE_TypeAssignSet_24,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
check_hlds__typecheck_clauses__ensure_vars_have_a_single_type_7_p_0(
  MR_Word VarVectorKind_8,
  MR_Word Context_9,
  MR_Word Vars_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_21,
  MR_Word * STATE_VARIABLE_TypeAssignSet_22,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
check_hlds__typecheck_clauses__ensure_vars_have_a_type_7_p_0(
  MR_Word VarVectorKind_8,
  MR_Word Context_9,
  MR_Word Vars_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_20,
  MR_Word * STATE_VARIABLE_TypeAssignSet_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_vars_have_arg_types_8_p_0(
  MR_Word VarVectorKind_1,
  MR_Word Context_2,
  MR_Integer CurArgNum_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_ArgsTypeAssignSet_0_5,
  MR_Word * STATE_VARIABLE_ArgsTypeAssignSet_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_var_has_arg_type_in_args_type_assigns_5_p_0(
  MR_Integer ArgNum_1,
  MR_Word Var_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ArgsTypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_ArgsTypeAssignSet_5);

static void MR_CALL 
check_hlds__typecheck_clauses__add_renamed_apart_arg_type_assigns_8_p_0(
  MR_Word Source_1,
  MR_Word PredTypeVarSet_2,
  MR_Word PredExistQVars_3,
  MR_Word PredArgTypes_4,
  MR_Word PredConstraints_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_ArgsTypeAssigns_0_7,
  MR_Word * STATE_VARIABLE_ArgsTypeAssigns_8);

static MR_Word MR_CALL 
check_hlds__typecheck_clauses__atomic_interface_list_to_var_list_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_check_for_ambiguity_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__all_identical_up_to_renaming_2_p_0(
  MR_Word HeadTypes1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____cons_constraints_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_clauses____Compare____cons_constraints_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____cons_type_assign_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_clauses____Compare____cons_type_assign_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____cons_type_assign_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_clauses____Compare____cons_type_assign_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____invariant_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_clauses____Compare____invariant_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____maybe_cons_type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_clauses____Compare____maybe_cons_type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____stuff_to_check_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_clauses____Compare____stuff_to_check_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____types_comparison_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_clauses____Compare____types_comparison_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_1[13][2];

static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_2[4][1];

static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_3[4][6];

static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_4[10][3];

static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_5[5][5];

static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_8[2][11];

static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_9[1][8];

static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_10[4][9];

static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_11[1][4];

static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_12[1][7];


struct check_hlds__typecheck_clauses__vector_common_type_6_0_s {
  const MR_String check_hlds__typecheck_clauses__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct check_hlds__typecheck_clauses__vector_common_type_6_0_s check_hlds__typecheck_clauses_vector_common_6[5];

struct check_hlds__typecheck_clauses__vector_common_type_7_0_s {
  const MR_String check_hlds__typecheck_clauses__vector_common_type_7_0__vct_7_f_0;
  const MR_Integer check_hlds__typecheck_clauses__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct check_hlds__typecheck_clauses__vector_common_type_7_0_s check_hlds__typecheck_clauses_vector_common_7[4];



static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_1[13][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_1[3]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__type_ctor_info_cons_type_assign_0))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Unsigned) 24U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_Unsigned) 24U)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_1[3]))
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_coerce_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_2[4][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "{}")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "tuple")) },
  /* row   3 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
};

static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_3[4][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__typecheck_clauses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_clauses__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__typecheck_clauses__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__typecheck_clauses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_4[10][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_3[1])),
    ((MR_Box) (check_hlds__typecheck_clauses__typecheck_event_call_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_3[1])),
    ((MR_Box) (check_hlds__typecheck_clauses__typecheck_call_pred_name_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_3[1])),
    ((MR_Box) (check_hlds__typecheck_clauses__typecheck_call_pred_id_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_5[0])),
    ((MR_Box) (check_hlds__typecheck_clauses__convert_cons_defn_list_7_p_1_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_5[0])),
    ((MR_Box) (check_hlds__typecheck_clauses__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_95_91_51_93_95_48_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_5[1])),
    ((MR_Box) (check_hlds__typecheck_clauses__typecheck_unify_var_functor_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_5[2])),
    ((MR_Box) (check_hlds__typecheck_clauses__typecheck_goal_expr_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_3[1])),
    ((MR_Box) (check_hlds__typecheck_clauses__typecheck_clauses_loop_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_11[0])),
    ((MR_Box) (check_hlds__typecheck_clauses__typecheck_clauses_loop_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_5[0])),
    ((MR_Box) (check_hlds__typecheck_clauses__make_field_access_function_cons_type_info_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_5[5][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_source_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__typecheck_clauses__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_goal_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_goal_type_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck_clauses__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_8[2][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_field_access_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0)),
    ((MR_Box) (&check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__type_ctor_info_maybe_cons_type_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&check_hlds__typecheck_clauses__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__typecheck_clauses__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_clauses__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_clauses__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_9[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typecheck_clauses__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_clauses__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_clauses__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_10[4][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&check_hlds__typecheck_clauses__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__typecheck_clauses__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_clauses__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__typecheck_clauses__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__typecheck_clauses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&check_hlds__typecheck_clauses__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typecheck_clauses__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__typecheck_clauses__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__typecheck_clauses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&check_hlds__typecheck_clauses__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typecheck_clauses__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__typecheck_clauses__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&check_hlds__typecheck_clauses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typecheck_clauses__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typecheck_clauses__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_11[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_clauses_scalar_common_12[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_field_access_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};


static /* final */ const struct check_hlds__typecheck_clauses__vector_common_type_6_0_s check_hlds__typecheck_clauses_vector_common_6[5] = {
  /* row   0 */   { (MR_String) "string" },
  /* row   1 */   { (MR_String) "int" },
  /* row   2 */   { (MR_String) "string" },
  /* row   3 */   { (MR_String) "string" },
  /* row   4 */   { (MR_String) "string" },
};

static /* final */ const struct check_hlds__typecheck_clauses__vector_common_type_7_0_s check_hlds__typecheck_clauses_vector_common_7[4] = {
  /* row   0 */
  {
    (MR_String) "",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "apply",
    (MR_Integer) 1
  },
  /* row   2 */
  {
    (MR_String) "impure_apply",
    (MR_Integer) 2
  },
  /* row   3 */
  {
    (MR_String) "semipure_apply",
    (MR_Integer) 3
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_clauses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__typecheck_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_clauses__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_clauses__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_clauses__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_clauses__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_clauses__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&check_hlds__typecheck_clauses__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_clauses__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__typecheck_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_clauses__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&check_hlds__typecheck_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_clauses__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__typecheck_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__typecheck_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_EnumFunctorDesc check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_cons_constraints_action_0_0 = {
  (MR_String) "do_not_flip_constraints",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_cons_constraints_action_0_1 = {
  (MR_String) "flip_constraints_for_new",
  INT32_C(1)
};

static const MR_EnumFunctorDesc check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_cons_constraints_action_0_2 = {
  (MR_String) "flip_constraints_for_field_set",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_ordinal_ordered_cons_constraints_action_0[3] = {
  &check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_cons_constraints_action_0_0,
  &check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_cons_constraints_action_0_1,
  &check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_cons_constraints_action_0_2
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_name_ordered_cons_constraints_action_0[3] = {
  &check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_cons_constraints_action_0_0,
  &check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_cons_constraints_action_0_2,
  &check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_cons_constraints_action_0_1
};

static const MR_Integer check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__functor_number_map_cons_constraints_action_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__type_ctor_info_cons_constraints_action_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck_clauses____Unify____cons_constraints_action_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_clauses____Compare____cons_constraints_action_0_0_10001)),
  (MR_String) "check_hlds.typecheck_clauses",
  (MR_String) "cons_constraints_action",
  { check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_name_ordered_cons_constraints_action_0 },
  { check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_ordinal_ordered_cons_constraints_action_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__functor_number_map_cons_constraints_action_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_clauses__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__field_types_cons_type_assign_0_0[4] = {
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_clauses__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_source_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_functor_desc_cons_type_assign_0_0 = {
  (MR_String) "cons_type_assign",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__field_types_cons_type_assign_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_stag_ordered_cons_type_assign_0_0[1] = { &check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_functor_desc_cons_type_assign_0_0 };

static const MR_DuPtagLayout check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_ptag_ordered_cons_type_assign_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_stag_ordered_cons_type_assign_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_name_ordered_cons_type_assign_0[1] = { &check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_functor_desc_cons_type_assign_0_0 };

static const MR_Integer check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__functor_number_map_cons_type_assign_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__type_ctor_info_cons_type_assign_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_clauses____Unify____cons_type_assign_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_clauses____Compare____cons_type_assign_0_0_10001)),
  (MR_String) "check_hlds.typecheck_clauses",
  (MR_String) "cons_type_assign",
  { check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_name_ordered_cons_type_assign_0 },
  { check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_ptag_ordered_cons_type_assign_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__functor_number_map_cons_type_assign_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_clauses__list__ti_list_1check_hlds__typecheck_clauses__type_ctor_info_cons_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__type_ctor_info_cons_type_assign_0) }
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__type_ctor_info_cons_type_assign_set_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__typecheck_clauses____Unify____cons_type_assign_set_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_clauses____Compare____cons_type_assign_set_0_0_10001)),
  (MR_String) "check_hlds.typecheck_clauses",
  (MR_String) "cons_type_assign_set",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__typecheck_clauses__list__ti_list_1check_hlds__typecheck_clauses__type_ctor_info_cons_type_assign_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_clauses__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&check_hlds__typecheck_clauses__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__type_ctor_info_invariant_set_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__typecheck_clauses____Unify____invariant_set_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_clauses____Compare____invariant_set_0_0_10001)),
  (MR_String) "check_hlds.typecheck_clauses",
  (MR_String) "invariant_set",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__typecheck_clauses__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__field_types_maybe_cons_type_info_0_0[1] = { (MR_PseudoTypeInfo) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0) };

static const MR_DuFunctorDesc check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_functor_desc_maybe_cons_type_info_0_0 = {
  (MR_String) "ok",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__field_types_maybe_cons_type_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__field_types_maybe_cons_type_info_0_1[1] = { (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__type_ctor_info_cons_error_0) };

static const MR_DuFunctorDesc check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_functor_desc_maybe_cons_type_info_0_1 = {
  (MR_String) "error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__field_types_maybe_cons_type_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_stag_ordered_maybe_cons_type_info_0_0[1] = { &check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_functor_desc_maybe_cons_type_info_0_0 };

static const MR_DuFunctorDescPtr check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_stag_ordered_maybe_cons_type_info_0_1[1] = { &check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_functor_desc_maybe_cons_type_info_0_1 };

static const MR_DuPtagLayout check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_ptag_ordered_maybe_cons_type_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_stag_ordered_maybe_cons_type_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_stag_ordered_maybe_cons_type_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_name_ordered_maybe_cons_type_info_0[2] = {
  &check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_functor_desc_maybe_cons_type_info_0_1,
  &check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_functor_desc_maybe_cons_type_info_0_0
};

static const MR_Integer check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__functor_number_map_maybe_cons_type_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__type_ctor_info_maybe_cons_type_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_clauses____Unify____maybe_cons_type_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_clauses____Compare____maybe_cons_type_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck_clauses",
  (MR_String) "maybe_cons_type_info",
  { check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_name_ordered_maybe_cons_type_info_0 },
  { check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__du_ptag_ordered_maybe_cons_type_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__functor_number_map_maybe_cons_type_info_0,

};

static const MR_EnumFunctorDesc check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_stuff_to_check_0_0 = {
  (MR_String) "clause_only",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_stuff_to_check_0_1 = {
  (MR_String) "whole_pred",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_ordinal_ordered_stuff_to_check_0[2] = {
  &check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_stuff_to_check_0_0,
  &check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_stuff_to_check_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_name_ordered_stuff_to_check_0[2] = {
  &check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_stuff_to_check_0_0,
  &check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_stuff_to_check_0_1
};

static const MR_Integer check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__functor_number_map_stuff_to_check_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__type_ctor_info_stuff_to_check_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck_clauses____Unify____stuff_to_check_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_clauses____Compare____stuff_to_check_0_0_10001)),
  (MR_String) "check_hlds.typecheck_clauses",
  (MR_String) "stuff_to_check",
  { check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_name_ordered_stuff_to_check_0 },
  { check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_ordinal_ordered_stuff_to_check_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__functor_number_map_stuff_to_check_0,

};

static const MR_EnumFunctorDesc check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_types_comparison_0_0 = {
  (MR_String) "compare_equal",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_types_comparison_0_1 = {
  (MR_String) "compare_equal_lt",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_ordinal_ordered_types_comparison_0[2] = {
  &check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_types_comparison_0_0,
  &check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_types_comparison_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_name_ordered_types_comparison_0[2] = {
  &check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_types_comparison_0_0,
  &check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_functor_desc_types_comparison_0_1
};

static const MR_Integer check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__functor_number_map_types_comparison_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__type_ctor_info_types_comparison_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck_clauses____Unify____types_comparison_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_clauses____Compare____types_comparison_0_0_10001)),
  (MR_String) "check_hlds.typecheck_clauses",
  (MR_String) "types_comparison",
  { check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_name_ordered_types_comparison_0 },
  { check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__enum_ordinal_ordered_types_comparison_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__functor_number_map_types_comparison_0,

};

static MR_Word MR_CALL 
check_hlds__typecheck_clauses__IntroducedFrom__func__convert_cons_defn__2095__3_1_f_0(
  MR_Word LambdaHeadVar__1_46)
{
  MR_Word LambdaHeadVar__2_47 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_46, (MR_Integer) 1))));

  return LambdaHeadVar__2_47;
}

static MR_Word MR_CALL 
check_hlds__typecheck_clauses__IntroducedFrom__func__convert_cons_defn__2095__2_1_f_0(
  MR_Word LambdaHeadVar__1_46)
{
  MR_Word LambdaHeadVar__2_47 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_46, (MR_Integer) 1))));

  return LambdaHeadVar__2_47;
}

static MR_Word MR_CALL 
check_hlds__typecheck_clauses__IntroducedFrom__func__convert_cons_defn__2095__1_1_f_0(
  MR_Word LambdaHeadVar__1_46)
{
  MR_Word LambdaHeadVar__2_47 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_46, (MR_Integer) 1))));

  return LambdaHeadVar__2_47;
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__IntroducedFrom__pred__typecheck_goal_expr__483__1_2_p_0(
  MR_Word GoalType_94,
  MR_Word HeadVar__2_228)
{
  MR_bool succeeded = (GoalType_94 == HeadVar__2_228);

  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_clauses____Compare____types_comparison_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____types_comparison_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__typecheck_clauses____Compare____stuff_to_check_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____stuff_to_check_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_clauses____Compare____maybe_cons_type_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      check_hlds__typecheck_error_undef____Compare____cons_error_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
    MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

    check_hlds__type_assign____Compare____cons_type_info_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____maybe_cons_type_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = check_hlds__typecheck_error_undef____Unify____cons_error_0_0(ArgX1_5, ArgY1_6);
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
      succeeded = check_hlds__type_assign____Unify____cons_type_info_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_clauses____Compare____invariant_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____invariant_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_clauses____Compare____cons_type_assign_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____cons_type_assign_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[8]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_clauses____Compare____cons_type_assign_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
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
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[0]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          check_hlds__type_assign____Compare____cons_type_info_source_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____cons_type_assign_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_15_15;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = check_hlds__type_assign____Unify____type_assign_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
          succeeded = check_hlds__type_assign____Unify____cons_type_info_source_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_clauses____Compare____cons_constraints_action_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____cons_constraints_action_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_clauses__compute_headvar_types_in_type_assign_3_p_0(
  MR_Word HeadVars_4,
  MR_Word TypeAssign_5,
  MR_Word * HeadTypes_6)
{
  MR_Word VarTypes_7;
  MR_Word TypeBindings_8;
  MR_Word HeadTypes0_9;

  check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign_5, &VarTypes_7);
  check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_5, &TypeBindings_8);
  parse_tree__vartypes__lookup_var_types_3_p_0(VarTypes_7, HeadVars_4, &HeadTypes0_9);
  parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(TypeBindings_8, HeadTypes0_9, HeadTypes_6);
}

static void MR_CALL 
check_hlds__typecheck_clauses__rename_constraint_3_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
check_hlds__typecheck_clauses__rename_constraint_3_p_0_2(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0__TypeInfo_13_13 = (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]);
  (env_ptr)->check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0__succeeded = mercury__map__contains_2_p_0((env_ptr)->check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0__TypeInfo_13_13, (env_ptr)->check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0__TypeInfo_13_13, (env_ptr)->check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0__TVarRenaming_4, ((MR_Box) ((env_ptr)->check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0__Var_12)));
  if ((env_ptr)->check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0__succeeded)
    check_hlds__typecheck_clauses__rename_constraint_3_p_0_1(env_ptr);
}

static void MR_CALL 
check_hlds__typecheck_clauses__rename_constraint_3_p_0_3(
  void * env_ptr_arg)
{
  struct check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0_s * env_ptr = (struct check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0__commit_0) == 0)
    {
      parse_tree__prog_type_scan__type_list_contains_var_2_p_0((env_ptr)->check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0__ArgTypes0_9, &(env_ptr)->check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0__Var_12, check_hlds__typecheck_clauses__rename_constraint_3_p_0_2, env_ptr);
      (env_ptr)->check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0__succeeded = MR_TRUE;
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__rename_constraint_3_p_0(
  MR_Word TVarRenaming_4,
  MR_Word Constraint0_5,
  MR_Word * Constraint_6)
{
  struct check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0_s env;

  (env).check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0__TVarRenaming_4 = TVarRenaming_4;
  {
    MR_Word Ids_7 = ((MR_Word) ((MR_hl_field(0, Constraint0_5, (MR_Integer) 0))));
    MR_Word ClassName_8 = ((MR_Word) ((MR_hl_field(0, Constraint0_5, (MR_Integer) 1))));
    MR_Word ArgTypes_11;

    (env).check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0__ArgTypes0_9 = ((MR_Word) ((MR_hl_field(0, Constraint0_5, (MR_Integer) 2))));
    check_hlds__typecheck_clauses__rename_constraint_3_p_0_3(&env);
    if ((env).check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0__succeeded)
    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0((env).check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0__TVarRenaming_4, (env).check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0__ArgTypes0_9, &ArgTypes_11);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *Constraint_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Ids_7));
        MR_hl_field(0, base, 1) = ((MR_Box) (ClassName_8));
        MR_hl_field(0, base, 2) = ((MR_Box) (ArgTypes_11));
      }
      (env).check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0__succeeded = MR_TRUE;
    }
    return (env).check_hlds__typecheck_clauses__rename_constraint_3_p_0_env_0__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__project_constraint_2_p_0(
  MR_Word CallTVars_3,
  MR_Word Constraint_4)
{
  MR_bool succeeded;
  MR_Word TypesToCheck_7 = ((MR_Word) ((MR_hl_field(0, Constraint_4, (MR_Integer) 2))));
  MR_Word TVarsToCheck0_8;
  MR_Word TVarsToCheck_9;
  MR_Word RelevantTVars_10;

  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(TypesToCheck_7, &TVarsToCheck0_8);
  mercury__set__list_to_set_2_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]), TVarsToCheck0_8, &TVarsToCheck_9);
  mercury__set__intersect_3_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]), TVarsToCheck_9, CallTVars_3, &RelevantTVars_10);
  succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]), RelevantTVars_10);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__is_field_access_function_for_type_ctor_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word AccessType_6,
  MR_Word TypeCtor_7,
  MR_Word PredId_8)
{
  MR_bool succeeded;
  MR_Word PredInfo_9;
  MR_Word ArgTypes_10;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_8, &PredInfo_9);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_9, &ArgTypes_10);
  succeeded = (ArgTypes_10 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_25 = ((MR_Word) ((MR_hl_field(1, ArgTypes_10, (MR_Integer) 0))));
    Var_24 = ((MR_Word) ((MR_hl_field(1, ArgTypes_10, (MR_Integer) 1))));
    succeeded = (Var_24 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_26 = ((MR_Word) ((MR_hl_field(1, Var_24, (MR_Integer) 1))));
      switch (AccessType_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_21;

            succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Var_25, &Var_21);
              if (succeeded)
                succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_7, Var_21);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ResultType_14;
            MR_Word Var_19;
            MR_Word Var_22;
            MR_Word Var_23;

            succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ResultType_14 = ((MR_Word) ((MR_hl_field(1, Var_26, (MR_Integer) 0))));
              Var_19 = ((MR_Word) ((MR_hl_field(1, Var_26, (MR_Integer) 1))));
              succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Var_25, &Var_22);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_7, Var_22);
                  if (succeeded)
                  {
                    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(ResultType_14, &Var_23);
                    if (succeeded)
                      succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_7, Var_23);
                  }
                }
              }
            }
          }
          break;
      }
    }
  }
  return succeeded;
}

static MR_Box MR_CALL 
check_hlds__typecheck_clauses__make_field_access_function_cons_type_info_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_47;

  conv0_LambdaHeadVar__2_47 = check_hlds__typecheck_clauses__IntroducedFrom__func__convert_cons_defn__2095__2_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_47));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__make_field_access_function_cons_type_info_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck_clauses__is_field_access_function_for_type_ctor_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__make_field_access_function_cons_type_info_8_p_0(
  MR_Word Info_9,
  MR_Word GoalId_10,
  MR_Word FuncName_11,
  MR_Word UserArity_12,
  MR_Word AccessType_13,
  MR_Word FieldName_14,
  MR_Word FieldDefn_15,
  MR_Word * ConsTypeInfo_16)
{
  MR_bool succeeded;
  MR_Word OrigExistTVars_17;
  MR_Word MaybeFunctorConsTypeInfo_18;
  MR_Word TypeCtor_25 = ((MR_Word) ((MR_hl_field(0, FieldDefn_15, (MR_Integer) 2))));
  MR_Word ConsId_26 = ((MR_Word) ((MR_hl_field(0, FieldDefn_15, (MR_Integer) 3))));
  MR_Word TypeModule_28;
  MR_Word ModuleInfo_31;
  MR_Word PredTable_32;
  MR_String UnqualFuncName_33;
  MR_Word IsFieldAccessFunc_34;
  MR_Word ConsTable_36;
  MR_Word ConsDefn_37;
  MR_Word MaybeExistConstraints_38;
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, TypeCtor_25, (MR_Integer) 0))));
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;

  succeeded = ((MR_tag((MR_Word) Var_44)) == (MR_Integer) 1);
  if (succeeded)
  {
    TypeModule_28 = ((MR_Word) ((MR_hl_field(1, Var_44, (MR_Integer) 0))));
    check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(Info_9, &ModuleInfo_31);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_31, &PredTable_32);
    UnqualFuncName_33 = mdbcomp__sym_name__unqualify_name_1_f_0(FuncName_11);
    check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_p_0(Info_9, &IsFieldAccessFunc_34);
    if ((IsFieldAccessFunc_34 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word PredIds_35;
      MR_Word Var_46;

      hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(PredTable_32, (MR_Integer) 0, TypeModule_28, UnqualFuncName_33, UserArity_12, &PredIds_35);
      {
        Var_46 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_46, 0) = ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_12[0]));
        MR_hl_field(0, Var_46, 1) = ((MR_Box) (check_hlds__typecheck_clauses__make_field_access_function_cons_type_info_8_p_0_1));
        MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_46, 3) = ((MR_Box) (ModuleInfo_31));
        MR_hl_field(0, Var_46, 4) = ((MR_Box) (AccessType_13));
        MR_hl_field(0, Var_46, 5) = ((MR_Box) (TypeCtor_25));
      }
      succeeded = mercury__list__all_false_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_46, PredIds_35);
    }
    else
      succeeded = MR_TRUE;
    if (succeeded)
    {
      hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_31, &ConsTable_36);
      hlds__hlds_cons__lookup_cons_table_of_type_ctor_4_p_0(ConsTable_36, TypeCtor_25, ConsId_26, &ConsDefn_37);
      Var_48 = ((MR_Word) ((MR_hl_field(0, ConsDefn_37, (MR_Integer) 0))));
      Var_49 = ((MR_Word) ((MR_hl_field(0, ConsDefn_37, (MR_Integer) 1))));
      Var_50 = ((MR_Word) ((MR_hl_field(0, ConsDefn_37, (MR_Integer) 2))));
      Var_51 = ((MR_Word) ((MR_hl_field(0, ConsDefn_37, (MR_Integer) 3))));
      MaybeExistConstraints_38 = ((MR_Word) ((MR_hl_field(0, ConsDefn_37, (MR_Integer) 4))));
      Var_52 = ((MR_Word) ((MR_hl_field(0, ConsDefn_37, (MR_Integer) 5))));
      if ((MaybeExistConstraints_38 == (MR_Word) ((MR_Unsigned) 0U)))
        OrigExistTVars_17 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word ExistConstraints_39 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_38), (MR_Integer) 1));

        OrigExistTVars_17 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_39, (MR_Integer) 0))));
      }
      switch (AccessType_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          check_hlds__typecheck_clauses__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_95_91_51_93_95_48_6_p_0(Info_9, GoalId_10, ConsId_26, ConsDefn_37, &MaybeFunctorConsTypeInfo_18);
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgTypes_62;
            MR_Word TypeTable_63;
            MR_Word TypeDefn_64;
            MR_Word Body_65;
            MR_Word PredId_66;
            MR_Word ModuleInfo_67;
            MR_Word PredInfo_68;
            MR_Word PredStatus_69;
            MR_Word BodyDu_70;
            MR_Word GoalType_72;
            MR_Word Var_85;
            MR_Word Var_86;
            MR_Word Var_87;

            ArgTypes_62 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_4[9]), Var_52);
            check_hlds__typecheck_info__typecheck_info_get_type_table_2_p_0(Info_9, &TypeTable_63);
            hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_63, Var_48, &TypeDefn_64);
            hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_64, &Body_65);
            check_hlds__typecheck_info__typecheck_info_get_pred_id_2_p_0(Info_9, &PredId_66);
            check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(Info_9, &ModuleInfo_67);
            hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_67, PredId_66, &PredInfo_68);
            hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_68, &PredStatus_69);
            succeeded = ((MR_tag((MR_Word) Body_65)) == (MR_Integer) 0);
            if (succeeded)
            {
              BodyDu_70 = (MR_Word) ((MR_Word) (Body_65));
              Var_85 = ((MR_Word) ((MR_hl_field(0, BodyDu_70, (MR_Integer) 4))));
              succeeded = (Var_85 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_68, &GoalType_72);
                succeeded = ((MR_tag((MR_Word) GoalType_72)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_86 = ((MR_Unsigned) ((MR_hl_field(0, GoalType_72, (MR_Integer) 0))) & (MR_Integer) 3);
                  succeeded = (Var_86 == (MR_Integer) 3);
                }
                succeeded = !(succeeded);
                if (succeeded)
                {
                  succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_68);
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    Var_87 = (MR_Word) (PredStatus_69);
                    succeeded = (Var_87 != (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
              }
            }
            if (succeeded)
            {
              MR_Word Var_88;

              {
                Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_48));
                MR_hl_field(1, Var_88, 1) = ((MR_Box) (TypeDefn_64));
              }
              {
                MaybeFunctorConsTypeInfo_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeFunctorConsTypeInfo_18, 0) = ((MR_Box) (Var_88));
              }
            }
            else
            {
              MR_Word TypeStatus_73;
              MR_Word Var_89;
              MR_Word Var_90;

              hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_64, &TypeStatus_73);
              Var_89 = (MR_Word) (TypeStatus_73);
              succeeded = (Var_89 == (MR_Word) ((MR_Unsigned) 4U));
              if (succeeded)
              {
                succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_68);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  Var_90 = (MR_Word) (PredStatus_69);
                  succeeded = (Var_90 != (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
                MaybeFunctorConsTypeInfo_18 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_clauses_scalar_common_2[3]));
              else
              {
                MR_Word ConsTypeArgs_74;
                MR_Word ConsType_75;
                MR_Word ExistProgConstraints_76;
                MR_Word ProgConstraints_80;
                MR_Word ExistQVars_81;
                MR_Word ClassTable_82;
                MR_Word Constraints_83;
                MR_Word Var_91;
                MR_Word Var_92;

                parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_51, Var_50, &ConsTypeArgs_74);
                parse_tree__prog_type_construct__construct_type_3_p_0(Var_48, ConsTypeArgs_74, &ConsType_75);
                if ((MaybeExistConstraints_38 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  ExistQVars_81 = (MR_Word) ((MR_Unsigned) 0U);
                  ExistProgConstraints_76 = (MR_Word) ((MR_Unsigned) 0U);
                }
                else
                {
                  MR_Word ExistConstraints_77 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_38), (MR_Integer) 1));

                  ExistQVars_81 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_77, (MR_Integer) 0))));
                  ExistProgConstraints_76 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_77, (MR_Integer) 1))));
                }
                {
                  ProgConstraints_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, ProgConstraints_80, 0) = ((MR_Box) (ExistProgConstraints_76));
                  MR_hl_field(0, ProgConstraints_80, 1) = ((MR_Box) (ExistProgConstraints_76));
                }
                hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_67, &ClassTable_82);
                hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_82, Var_49, GoalId_10, ProgConstraints_80, &Constraints_83);
                {
                  Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_92, 0) = ((MR_Box) (Var_48));
                  MR_hl_field(0, Var_92, 1) = ((MR_Box) (ConsId_26));
                }
                {
                  Var_91 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_91, 0) = ((MR_Box) (Var_49));
                  MR_hl_field(0, Var_91, 1) = ((MR_Box) (ExistQVars_81));
                  MR_hl_field(0, Var_91, 2) = ((MR_Box) (ConsType_75));
                  MR_hl_field(0, Var_91, 3) = ((MR_Box) (ArgTypes_62));
                  MR_hl_field(0, Var_91, 4) = ((MR_Box) (Constraints_83));
                  MR_hl_field(0, Var_91, 5) = ((MR_Box) (Var_92));
                }
                MaybeFunctorConsTypeInfo_18 = (MR_Word) ((MR_Word) (Var_91));
              }
            }
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
        check_hlds__typecheck_clauses__convert_field_access_cons_type_info_7_p_0(ClassTable_21, AccessType_13, FieldName_14, FieldDefn_15, FunctorConsTypeInfo_19, OrigExistTVars_17, ConsTypeInfo_16);
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__convert_field_access_cons_type_info_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_Constraint_6;

  succeeded = check_hlds__typecheck_clauses__rename_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Constraint_6);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_Constraint_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__convert_field_access_cons_type_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck_clauses__project_constraint_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_clauses__convert_field_access_cons_type_info_7_p_0(
  MR_Word ClassTable_8,
  MR_Word AccessType_9,
  MR_Word FieldSymName_10,
  MR_Word FieldDefn_11,
  MR_Word FunctorConsTypeInfo_12,
  MR_Word OrigExistTVars_13,
  MR_Word * ConsTypeInfo_14)
{
  MR_bool succeeded;
  MR_Word TVarSet0_15 = ((MR_Word) ((MR_hl_field(0, FunctorConsTypeInfo_12, (MR_Integer) 0))));
  MR_Word ExistQVars_16 = ((MR_Word) ((MR_hl_field(0, FunctorConsTypeInfo_12, (MR_Integer) 1))));
  MR_Word FunctorType_17 = ((MR_Word) ((MR_hl_field(0, FunctorConsTypeInfo_12, (MR_Integer) 2))));
  MR_Word ConsArgTypes_18 = ((MR_Word) ((MR_hl_field(0, FunctorConsTypeInfo_12, (MR_Integer) 3))));
  MR_Word Constraints0_19 = ((MR_Word) ((MR_hl_field(0, FunctorConsTypeInfo_12, (MR_Integer) 4))));
  MR_Word Source0_20 = ((MR_Word) ((MR_hl_field(0, FunctorConsTypeInfo_12, (MR_Integer) 5))));
  MR_Word SourceType_21;
  MR_Word ConsId_22;
  MR_Integer FieldNumber_34;
  MR_Word FieldType_35;
  MR_String FieldName_36;
  MR_Box conv0_FieldType_35;

  switch (MR_tag((MR_Word) Source0_20)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        SourceType_21 = ((MR_Word) ((MR_hl_field(0, Source0_20, (MR_Integer) 0))));
        ConsId_22 = ((MR_Word) ((MR_hl_field(0, Source0_20, (MR_Integer) 1))));
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_clauses.convert_field_access_cons_type_info\'/7", (MR_String) "not type");
        return;
      }
      break;
  }
  FieldNumber_34 = ((MR_Integer) ((MR_hl_field(0, FieldDefn_11, (MR_Integer) 4))));
  mercury__list__det_index1_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ConsArgTypes_18, FieldNumber_34, &conv0_FieldType_35);
  FieldType_35 = ((MR_Word) (conv0_FieldType_35));
  FieldName_36 = mdbcomp__sym_name__unqualify_name_1_f_0(FieldSymName_10);
  switch (AccessType_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Source_37;
        MR_Word ArgTypes_39;
        MR_Word Var_62;

        {
          Source_37 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Source_37, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(2, Source_37, 1) = ((MR_Box) (SourceType_21));
          MR_hl_field(2, Source_37, 2) = ((MR_Box) (ConsId_22));
          MR_hl_field(2, Source_37, 3) = ((MR_Box) (FieldName_36));
        }
        {
          ArgTypes_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ArgTypes_39, 0) = ((MR_Box) (FunctorType_17));
          MR_hl_field(1, ArgTypes_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_62 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_62, 0) = ((MR_Box) (TVarSet0_15));
          MR_hl_field(0, Var_62, 1) = ((MR_Box) (ExistQVars_16));
          MR_hl_field(0, Var_62, 2) = ((MR_Box) (FieldType_35));
          MR_hl_field(0, Var_62, 3) = ((MR_Box) (ArgTypes_39));
          MR_hl_field(0, Var_62, 4) = ((MR_Box) (Constraints0_19));
          MR_hl_field(0, Var_62, 5) = ((MR_Box) (Source_37));
        }
        *ConsTypeInfo_14 = (MR_Word) ((MR_Word) (Var_62));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TVarsInField_40;
        MR_Word Source_89;

        {
          Source_89 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Source_89, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(2, Source_89, 1) = ((MR_Box) (SourceType_21));
          MR_hl_field(2, Source_89, 2) = ((MR_Box) (ConsId_22));
          MR_hl_field(2, Source_89, 3) = ((MR_Box) (FieldName_36));
        }
        parse_tree__prog_type_scan__type_vars_in_type_2_p_0(FieldType_35, &TVarsInField_40);
        if ((TVarsInField_40 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_64;
          MR_Word Var_66;
          MR_Word ArgTypes_80;

          {
            Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_64, 0) = ((MR_Box) (FieldType_35));
            MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            ArgTypes_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ArgTypes_80, 0) = ((MR_Box) (FunctorType_17));
            MR_hl_field(1, ArgTypes_80, 1) = ((MR_Box) (Var_64));
          }
          {
            Var_66 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_66, 0) = ((MR_Box) (TVarSet0_15));
            MR_hl_field(0, Var_66, 1) = ((MR_Box) (ExistQVars_16));
            MR_hl_field(0, Var_66, 2) = ((MR_Box) (FunctorType_17));
            MR_hl_field(0, Var_66, 3) = ((MR_Box) (ArgTypes_80));
            MR_hl_field(0, Var_66, 4) = ((MR_Box) (Constraints0_19));
            MR_hl_field(0, Var_66, 5) = ((MR_Box) (Source_89));
          }
          *ConsTypeInfo_14 = (MR_Word) ((MR_Word) (Var_66));
        }
        else
        {
          MR_Word ArgTypesWithoutField_43;
          MR_Word TVarsInOtherArgs_44;
          MR_Word ExistQVarsInFieldAndOthers_45;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word Var_71;

          Var_67 = parse_tree__builtin_lib_types__int_type_0_f_0();
          mercury__list__det_replace_nth_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ConsArgTypes_18, FieldNumber_34, ((MR_Box) (Var_67)), &ArgTypesWithoutField_43);
          parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypesWithoutField_43, &TVarsInOtherArgs_44);
          Var_68 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]), TVarsInField_40);
          Var_70 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]), TVarsInOtherArgs_44);
          Var_71 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]), OrigExistTVars_13);
          Var_69 = mercury__set__intersect_2_f_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]), Var_70, Var_71);
          mercury__set__intersect_3_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]), Var_68, Var_69, &ExistQVarsInFieldAndOthers_45);
          succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]), ExistQVarsInFieldAndOthers_45);
          if (succeeded)
          {
            MR_Word TVarsOnlyInField0_46;
            MR_Word TVarsOnlyInField_47;
            MR_Integer NumNewTVars_48;
            MR_Word NewTVars_49;
            MR_Word TVarSet_50;
            MR_Word TVarRenaming_51;
            MR_Word RenamedFieldType_52;
            MR_Word CallTVars0_54;
            MR_Word CallTVars_55;
            MR_Word Constraints_56;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Var_75;
            MR_Word Var_77;
            MR_Word RetType_81;
            MR_Word ArgTypes_82;
            MR_Word Unproven0_93;
            MR_Word Assumed_94;
            MR_Word Redundant0_95;
            MR_Word Ancestors_96;
            MR_Word NewUnproven0_97;
            MR_Word NewUnproven_98;
            MR_Word Redundant_99;
            MR_Word Unproven_100;
            MR_Word Var_101;
            MR_Word Var_102;

            mercury__list__delete_elems_3_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]), TVarsInField_40, TVarsInOtherArgs_44, &TVarsOnlyInField0_46);
            mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]), TVarsOnlyInField0_46, &TVarsOnlyInField_47);
            mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]), TVarsOnlyInField_47, &NumNewTVars_48);
            mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), NumNewTVars_48, &NewTVars_49, TVarSet0_15, &TVarSet_50);
            mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]), TVarsOnlyInField_47, NewTVars_49, &TVarRenaming_51);
            parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(TVarRenaming_51, FieldType_35, &RenamedFieldType_52);
            parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(TVarRenaming_51, FunctorType_17, &RetType_81);
            {
              Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_73, 0) = ((MR_Box) (FieldType_35));
              MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_72, 0) = ((MR_Box) (FunctorType_17));
              MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_73));
            }
            parse_tree__prog_type_scan__type_vars_in_types_2_p_0(Var_72, &CallTVars0_54);
            mercury__set__list_to_set_2_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]), CallTVars0_54, &CallTVars_55);
            Unproven0_93 = ((MR_Word) ((MR_hl_field(0, Constraints0_19, (MR_Integer) 0))));
            Assumed_94 = ((MR_Word) ((MR_hl_field(0, Constraints0_19, (MR_Integer) 1))));
            Redundant0_95 = ((MR_Word) ((MR_hl_field(0, Constraints0_19, (MR_Integer) 2))));
            Ancestors_96 = ((MR_Word) ((MR_hl_field(0, Constraints0_19, (MR_Integer) 3))));
            {
              Var_101 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_101, 0) = ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_5[4]));
              MR_hl_field(0, Var_101, 1) = ((MR_Box) (check_hlds__typecheck_clauses__convert_field_access_cons_type_info_7_p_0_1));
              MR_hl_field(0, Var_101, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_101, 3) = ((MR_Box) (CallTVars_55));
            }
            mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_101, Unproven0_93, &NewUnproven0_97);
            {
              Var_102 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_102, 0) = ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_3[3]));
              MR_hl_field(0, Var_102, 1) = ((MR_Box) (check_hlds__typecheck_clauses__convert_field_access_cons_type_info_7_p_0_2));
              MR_hl_field(0, Var_102, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_102, 3) = ((MR_Box) (TVarRenaming_51));
            }
            mercury__list__filter_map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), Var_102, NewUnproven0_97, &NewUnproven_98);
            hlds__hlds_class__update_redundant_constraints_5_p_0(ClassTable_8, TVarSet_50, NewUnproven_98, Redundant0_95, &Redundant_99);
            mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_constraint_0), NewUnproven_98, Unproven0_93, &Unproven_100);
            {
              Constraints_56 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Constraints_56, 0) = ((MR_Box) (Unproven_100));
              MR_hl_field(0, Constraints_56, 1) = ((MR_Box) (Assumed_94));
              MR_hl_field(0, Constraints_56, 2) = ((MR_Box) (Redundant_99));
              MR_hl_field(0, Constraints_56, 3) = ((MR_Box) (Ancestors_96));
            }
            {
              Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_75, 0) = ((MR_Box) (RenamedFieldType_52));
              MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ArgTypes_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ArgTypes_82, 0) = ((MR_Box) (FunctorType_17));
              MR_hl_field(1, ArgTypes_82, 1) = ((MR_Box) (Var_75));
            }
            {
              Var_77 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_77, 0) = ((MR_Box) (TVarSet_50));
              MR_hl_field(0, Var_77, 1) = ((MR_Box) (ExistQVars_16));
              MR_hl_field(0, Var_77, 2) = ((MR_Box) (RetType_81));
              MR_hl_field(0, Var_77, 3) = ((MR_Box) (ArgTypes_82));
              MR_hl_field(0, Var_77, 4) = ((MR_Box) (Constraints_56));
              MR_hl_field(0, Var_77, 5) = ((MR_Box) (Source_89));
            }
            *ConsTypeInfo_14 = (MR_Word) ((MR_Word) (Var_77));
          }
          else
          {
            MR_Word ExistQVarsInFieldAndOthers1_57;
            MR_Word Var_78;

            mercury__set__to_sorted_list_2_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]), ExistQVarsInFieldAndOthers_45, &ExistQVarsInFieldAndOthers1_57);
            {
              Var_78 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_78, 0) = ((MR_Box) (FieldSymName_10));
              MR_hl_field(2, Var_78, 1) = ((MR_Box) (FieldDefn_11));
              MR_hl_field(2, Var_78, 2) = ((MR_Box) (TVarSet0_15));
              MR_hl_field(2, Var_78, 3) = ((MR_Box) (ExistQVarsInFieldAndOthers1_57));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *ConsTypeInfo_14 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_78));
            }
          }
        }
      }
      break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__type_assign_has_no_coerce_constraints_1_p_0(
  MR_Word TypeAssign_2)
{
  MR_bool succeeded;
  MR_Word Var_4;

  check_hlds__type_assign__type_assign_get_coerce_constraints_2_p_0(TypeAssign_2, &Var_4);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[12]), ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_clauses__type_assign_prune_coerce_constraints_3_p_0(
  MR_Word TypeTable_4,
  MR_Word STATE_VARIABLE_TypeAssign_0_10,
  MR_Word * STATE_VARIABLE_TypeAssign_11)
{
  MR_Word Coercions0_6;

  check_hlds__type_assign__type_assign_get_coerce_constraints_2_p_0(STATE_VARIABLE_TypeAssign_0_10, &Coercions0_6);
  if ((Coercions0_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_TypeAssign_11 = STATE_VARIABLE_TypeAssign_0_10;
  else
  {
    MR_Word Coercions_9;
    MR_Word STATE_VARIABLE_TypeAssign_12_12;

    check_hlds__typecheck_clauses__check_and_drop_coerce_constraints_5_p_0(TypeTable_4, Coercions0_6, &Coercions_9, STATE_VARIABLE_TypeAssign_0_10, &STATE_VARIABLE_TypeAssign_12_12);
    check_hlds__type_assign__type_assign_set_coerce_constraints_3_p_0(Coercions_9, STATE_VARIABLE_TypeAssign_12_12, STATE_VARIABLE_TypeAssign_11);
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__check_and_drop_coerce_constraints_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InvariantSet_19;

  check_hlds__typecheck_clauses__build_type_param_variance_restrictions_in_ctor_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InvariantSet_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InvariantSet_19));
}

static void MR_CALL 
check_hlds__typecheck_clauses__check_and_drop_coerce_constraints_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_TypeAssign_0_4,
  MR_Word * STATE_VARIABLE_TypeAssign_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_TypeAssign_5 = STATE_VARIABLE_TypeAssign_0_4;
    }
    else
    {
      MR_Word Coercion0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Coercions0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word FromType0_20 = ((MR_Word) ((MR_hl_field(0, Coercion0_11, (MR_Integer) 0))));
      MR_Word ToType0_21 = ((MR_Word) ((MR_hl_field(0, Coercion0_11, (MR_Integer) 1))));
      MR_Word Status_23 = ((MR_Unsigned) ((MR_hl_field(0, Coercion0_11, (MR_Integer) 3))) & (MR_Integer) 1);

      switch (Status_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeBindings_24;
            MR_Word TVarSet_25;
            MR_Word FromType_26;
            MR_Word ToType_27;
            MR_Word TypeAssign_28;
            MR_Word FromBaseType_29;
            MR_Word ToBaseType_30;
            MR_Word FromBaseTypeArgs_32;
            MR_Word ToBaseTypeCtor_33;
            MR_Word ToBaseTypeArgs_34;
            MR_Word BaseTypeCtor_35;
            MR_Word BaseTypeDefn_36;
            MR_Word BaseTypeParams_37;
            MR_Word InvariantSet_38;
            MR_Word TypeParams_41;
            MR_Word OoMCtors_44;
            MR_Word TypeDefn_40;
            MR_Word TypeBody_42;
            MR_Word TypeBodyDu_43;

            check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(STATE_VARIABLE_TypeAssign_0_4, &TypeBindings_24);
            check_hlds__type_assign__type_assign_get_typevarset_2_p_0(STATE_VARIABLE_TypeAssign_0_4, &TVarSet_25);
            parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_24, FromType0_20, &FromType_26);
            parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_24, ToType0_21, &ToType_27);
            check_hlds__typecheck_clauses__replace_principal_type_ctor_with_base_4_p_0(HeadVar__1_1, TVarSet_25, FromType_26, &FromBaseType_29);
            check_hlds__typecheck_clauses__replace_principal_type_ctor_with_base_4_p_0(HeadVar__1_1, TVarSet_25, ToType_27, &ToBaseType_30);
            succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(FromBaseType_29, &BaseTypeCtor_35, &FromBaseTypeArgs_32);
            if (succeeded)
            {
              succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(ToBaseType_30, &ToBaseTypeCtor_33, &ToBaseTypeArgs_34);
              if (succeeded)
              {
                succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(BaseTypeCtor_35, ToBaseTypeCtor_33);
                if (succeeded)
                {
                  succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(HeadVar__1_1, BaseTypeCtor_35, &BaseTypeDefn_36);
                  if (succeeded)
                  {
                    hlds__hlds_data__get_type_defn_tparams_2_p_0(BaseTypeDefn_36, &BaseTypeParams_37);
                    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(HeadVar__1_1, BaseTypeCtor_35, &TypeDefn_40);
                    if (succeeded)
                    {
                      hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_40, &TypeParams_41);
                      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_40, &TypeBody_42);
                      succeeded = ((MR_tag((MR_Word) TypeBody_42)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        TypeBodyDu_43 = (MR_Word) ((MR_Word) (TypeBody_42));
                        OoMCtors_44 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_43, (MR_Integer) 0))));
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                    {
                      MR_Word Ctors_49;
                      MR_Word Var_50;
                      MR_Word Var_51;
                      MR_Box conv1_InvariantSet_38;

                      Ctors_49 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_44);
                      {
                        Var_50 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_50, 0) = ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_10[1]));
                        MR_hl_field(0, Var_50, 1) = ((MR_Box) (check_hlds__typecheck_clauses__check_and_drop_coerce_constraints_5_p_0_1));
                        MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 3));
                        MR_hl_field(0, Var_50, 3) = ((MR_Box) (HeadVar__1_1));
                        MR_hl_field(0, Var_50, 4) = ((MR_Box) (BaseTypeCtor_35));
                        MR_hl_field(0, Var_50, 5) = ((MR_Box) (TypeParams_41));
                      }
                      Var_51 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]));
                      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[4]), Var_50, Ctors_49, ((MR_Box) (Var_51)), &conv1_InvariantSet_38);
                      InvariantSet_38 = ((MR_Word) (conv1_InvariantSet_38));
                    }
                    else
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_clauses.build_type_param_variance_restrictions\'/3", (MR_String) "not du type");
                        return;
                      }
                    succeeded = check_hlds__typecheck_clauses__check_coerce_type_params_8_p_0(HeadVar__1_1, TVarSet_25, InvariantSet_38, BaseTypeParams_37, FromBaseTypeArgs_32, ToBaseTypeArgs_34, STATE_VARIABLE_TypeAssign_0_4, &TypeAssign_28);
                  }
                }
              }
            }
            if (succeeded)
            {
              MR_Word next_value_of_HeadVar__2_2 = Coercions0_12;
              MR_Word next_value_of_STATE_VARIABLE_TypeAssign_0_4 = TypeAssign_28;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_TypeAssign_0_4 = next_value_of_STATE_VARIABLE_TypeAssign_0_4;
              continue;
            }
            else
            {
              MR_Word TailKeepCoercions_16;

              check_hlds__typecheck_clauses__check_and_drop_coerce_constraints_5_p_0(HeadVar__1_1, Coercions0_12, &TailKeepCoercions_16, STATE_VARIABLE_TypeAssign_0_4, STATE_VARIABLE_TypeAssign_5);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Coercion0_11));
                MR_hl_field(1, base, 1) = ((MR_Box) (TailKeepCoercions_16));
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TailKeepCoercions_59;

            check_hlds__typecheck_clauses__check_and_drop_coerce_constraints_5_p_0(HeadVar__1_1, Coercions0_12, &TailKeepCoercions_59, STATE_VARIABLE_TypeAssign_0_4, STATE_VARIABLE_TypeAssign_5);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Coercion0_11));
              MR_hl_field(1, base, 1) = ((MR_Box) (TailKeepCoercions_59));
            }
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__build_type_param_variance_restrictions_in_ctor_arg_6_p_0(
  MR_Word TypeTable_7,
  MR_Word CurTypeCtor_8,
  MR_Word CurTypeParams_9,
  MR_Word CtorArg_10,
  MR_Word STATE_VARIABLE_InvariantSet_0_15,
  MR_Word * STATE_VARIABLE_InvariantSet_16)
{
  MR_Word CtorArgType_13 = ((MR_Word) ((MR_hl_field(0, CtorArg_10, (MR_Integer) 1))));

  check_hlds__typecheck_clauses__build_type_param_variance_restrictions_in_ctor_arg_type_6_p_0(TypeTable_7, CurTypeCtor_8, CurTypeParams_9, CtorArgType_13, STATE_VARIABLE_InvariantSet_0_15, STATE_VARIABLE_InvariantSet_16);
}

static void MR_CALL 
check_hlds__typecheck_clauses__build_type_param_variance_restrictions_in_ctor_arg_type_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InvariantSet_35;

  check_hlds__typecheck_clauses__build_type_param_variance_restrictions_in_ctor_arg_type_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InvariantSet_35);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InvariantSet_35));
}

static void MR_CALL 
check_hlds__typecheck_clauses__build_type_param_variance_restrictions_in_ctor_arg_type_6_p_0(
  MR_Word TypeTable_7,
  MR_Word CurTypeCtor_8,
  MR_Word CurTypeParams_9,
  MR_Word CtorArgType_10,
  MR_Word STATE_VARIABLE_InvariantSet_0_34,
  MR_Word * STATE_VARIABLE_InvariantSet_35)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) CtorArgType_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_InvariantSet_35 = STATE_VARIABLE_InvariantSet_0_34;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgTypes_16 = ((MR_Word) ((MR_hl_field(1, CtorArgType_10, (MR_Integer) 1))));
          MR_Word TypeCtor_17;
          MR_Word TypeArgs_18;
          MR_Word TypeDefn_19;

          succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(CtorArgType_10, &TypeCtor_17, &TypeArgs_18);
          if (succeeded)
            succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_7, TypeCtor_17, &TypeDefn_19);
          if (succeeded)
          {
            MR_Word TypeBody_20;

            hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_19, &TypeBody_20);
            switch (MR_tag((MR_Word) TypeBody_20)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word TypeInfo_67_67;
                  MR_Word Var_65;

                  succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_17, CurTypeCtor_8);
                  if (succeeded)
                  {
                    succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(TypeArgs_18, &Var_65);
                    if (succeeded)
                    {
                      TypeInfo_67_67 = (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[11]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_67_67, ((MR_Box) (CurTypeParams_9)), ((MR_Box) (Var_65)));
                    }
                  }
                  if (succeeded)
                    *STATE_VARIABLE_InvariantSet_35 = STATE_VARIABLE_InvariantSet_0_34;
                  else
                  {
                    MR_Word TypeVars_22;

                    parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_16, &TypeVars_22);
                    mercury__set__insert_list_3_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]), TypeVars_22, STATE_VARIABLE_InvariantSet_0_34, STATE_VARIABLE_InvariantSet_35);
                  }
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 3:
                {
                  MR_Word TypeVars_49;

                  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_16, &TypeVars_49);
                  mercury__set__insert_list_3_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]), TypeVars_49, STATE_VARIABLE_InvariantSet_0_34, STATE_VARIABLE_InvariantSet_35);
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_clauses.build_type_param_variance_restrictions_in_ctor_arg_type\'/6", (MR_String) "hlds_eqv_type");
                  return;
                }
                break;
            }
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_clauses.build_type_param_variance_restrictions_in_ctor_arg_type\'/6", (MR_String) "undefined type");
              return;
            }
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_InvariantSet_35 = STATE_VARIABLE_InvariantSet_0_34;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, CtorArgType_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_42;
              MR_Word ArgTypes_53 = ((MR_Word) ((MR_hl_field(3, CtorArgType_10, (MR_Integer) 1))));
              MR_Box conv1_STATE_VARIABLE_InvariantSet_35;

              {
                Var_42 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_42, 0) = ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_10[3]));
                MR_hl_field(0, Var_42, 1) = ((MR_Box) (check_hlds__typecheck_clauses__build_type_param_variance_restrictions_in_ctor_arg_type_6_p_0_1));
                MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_42, 3) = ((MR_Box) (TypeTable_7));
                MR_hl_field(0, Var_42, 4) = ((MR_Box) (CurTypeCtor_8));
                MR_hl_field(0, Var_42, 5) = ((MR_Box) (CurTypeParams_9));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[4]), Var_42, ArgTypes_53, ((MR_Box) (STATE_VARIABLE_InvariantSet_0_34)), &conv1_STATE_VARIABLE_InvariantSet_35);
              *STATE_VARIABLE_InvariantSet_35 = ((MR_Word) (conv1_STATE_VARIABLE_InvariantSet_35));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgTypes_54 = ((MR_Word) ((MR_hl_field(3, CtorArgType_10, (MR_Integer) 2))));
              MR_Word TypeVars_55;

              parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_54, &TypeVars_55);
              mercury__set__insert_list_3_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]), TypeVars_55, STATE_VARIABLE_InvariantSet_0_34, STATE_VARIABLE_InvariantSet_35);
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.typecheck_clauses.build_type_param_variance_restrictions_in_ctor_arg_type\'/6", (MR_String) "apply_n_type");
              return;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word CtorArgType1_33 = ((MR_Word) ((MR_hl_field(3, CtorArgType_10, (MR_Integer) 1))));
              MR_Word next_value_of_CtorArgType_10 = CtorArgType1_33;

              // direct tailcall eliminated
              ;
              CtorArgType_10 = next_value_of_CtorArgType_10;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__build_type_param_variance_restrictions_in_ctor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InvariantSet_16;

  check_hlds__typecheck_clauses__build_type_param_variance_restrictions_in_ctor_arg_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InvariantSet_16);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InvariantSet_16));
}

static void MR_CALL 
check_hlds__typecheck_clauses__build_type_param_variance_restrictions_in_ctor_6_p_0(
  MR_Word TypeTable_7,
  MR_Word CurTypeCtor_8,
  MR_Word CurTypeParams_9,
  MR_Word Ctor_10,
  MR_Word STATE_VARIABLE_InvariantSet_0_18,
  MR_Word * STATE_VARIABLE_InvariantSet_19)
{
  MR_Word CtorArgs_15 = ((MR_Word) ((MR_hl_field(0, Ctor_10, (MR_Integer) 3))));
  MR_Word Var_20;
  MR_Box conv1_STATE_VARIABLE_InvariantSet_19;

  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_10[2]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (check_hlds__typecheck_clauses__build_type_param_variance_restrictions_in_ctor_6_p_0_1));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (TypeTable_7));
    MR_hl_field(0, Var_20, 4) = ((MR_Box) (CurTypeCtor_8));
    MR_hl_field(0, Var_20, 5) = ((MR_Box) (CurTypeParams_9));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[4]), Var_20, CtorArgs_15, ((MR_Box) (STATE_VARIABLE_InvariantSet_0_18)), &conv1_STATE_VARIABLE_InvariantSet_19);
  *STATE_VARIABLE_InvariantSet_19 = ((MR_Word) (conv1_STATE_VARIABLE_InvariantSet_19));
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_coerce_2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InvariantSet_19;

  check_hlds__typecheck_clauses__build_type_param_variance_restrictions_in_ctor_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InvariantSet_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InvariantSet_19));
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_coerce_2_8_p_0(
  MR_Word Context_9,
  MR_Word FromVar_10,
  MR_Word ToVar_11,
  MR_Word TypeAssign0_12,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_34,
  MR_Word * STATE_VARIABLE_TypeAssignSet_35,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37)
{
  MR_bool succeeded;
  MR_Word VarTypes_15;
  MR_Word TVarSet_16;
  MR_Word ExistQTVars_17;
  MR_Word TypeBindings_18;
  MR_Word MaybeFromType_21;
  MR_Word MaybeToType_24;
  MR_Word FromType0_19;
  MR_Word ToType0_22;
  MR_Word FromType_25;
  MR_Word ToType_26;

  check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign0_12, &VarTypes_15);
  check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign0_12, &TVarSet_16);
  check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign0_12, &ExistQTVars_17);
  check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign0_12, &TypeBindings_18);
  succeeded = parse_tree__vartypes__search_var_type_3_p_0(VarTypes_15, FromVar_10, &FromType0_19);
  if (succeeded)
  {
    MR_Word FromType1_20;

    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_18, FromType0_19, &FromType1_20);
    {
      MaybeFromType_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeFromType_21, 0) = ((MR_Box) (FromType1_20));
    }
  }
  else
    MaybeFromType_21 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = parse_tree__vartypes__search_var_type_3_p_0(VarTypes_15, ToVar_11, &ToType0_22);
  if (succeeded)
  {
    MR_Word ToType1_23;

    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TypeBindings_18, ToType0_22, &ToType1_23);
    {
      MaybeToType_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeToType_24, 0) = ((MR_Box) (ToType1_23));
    }
  }
  else
    MaybeToType_24 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = (MaybeFromType_21 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    FromType_25 = ((MR_Word) ((MR_hl_field(1, MaybeFromType_21, (MR_Integer) 0))));
    succeeded = (MaybeToType_24 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ToType_26 = ((MR_Word) ((MR_hl_field(1, MaybeToType_24, (MR_Integer) 0))));
      succeeded = parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0(FromType_25, ExistQTVars_17);
      if (succeeded)
        succeeded = parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0(ToType_26, ExistQTVars_17);
    }
  }
  if (succeeded)
  {
    MR_Word TypeTable_27;
    MR_Word TypeAssign_29;
    MR_Word TypeAssign1_28;
    MR_Word FromBaseType_49;
    MR_Word ToBaseType_50;
    MR_Word FromBaseTypeArgs_52;
    MR_Word ToBaseTypeCtor_53;
    MR_Word ToBaseTypeArgs_54;
    MR_Word BaseTypeCtor_55;
    MR_Word BaseTypeDefn_56;
    MR_Word BaseTypeParams_57;
    MR_Word InvariantSet_58;
    MR_Word TypeParams_61;
    MR_Word OoMCtors_64;
    MR_Word TypeDefn_60;
    MR_Word TypeBody_62;
    MR_Word TypeBodyDu_63;

    check_hlds__typecheck_info__typecheck_info_get_type_table_2_p_0(STATE_VARIABLE_Info_0_36, &TypeTable_27);
    check_hlds__typecheck_clauses__replace_principal_type_ctor_with_base_4_p_0(TypeTable_27, TVarSet_16, FromType_25, &FromBaseType_49);
    check_hlds__typecheck_clauses__replace_principal_type_ctor_with_base_4_p_0(TypeTable_27, TVarSet_16, ToType_26, &ToBaseType_50);
    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(FromBaseType_49, &BaseTypeCtor_55, &FromBaseTypeArgs_52);
    if (succeeded)
    {
      succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(ToBaseType_50, &ToBaseTypeCtor_53, &ToBaseTypeArgs_54);
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(BaseTypeCtor_55, ToBaseTypeCtor_53);
        if (succeeded)
        {
          succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_27, BaseTypeCtor_55, &BaseTypeDefn_56);
          if (succeeded)
          {
            hlds__hlds_data__get_type_defn_tparams_2_p_0(BaseTypeDefn_56, &BaseTypeParams_57);
            succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_27, BaseTypeCtor_55, &TypeDefn_60);
            if (succeeded)
            {
              hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_60, &TypeParams_61);
              hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_60, &TypeBody_62);
              succeeded = ((MR_tag((MR_Word) TypeBody_62)) == (MR_Integer) 0);
              if (succeeded)
              {
                TypeBodyDu_63 = (MR_Word) ((MR_Word) (TypeBody_62));
                OoMCtors_64 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_63, (MR_Integer) 0))));
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
            {
              MR_Word Ctors_69;
              MR_Word Var_70;
              MR_Word Var_71;
              MR_Box conv1_InvariantSet_58;

              Ctors_69 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_64);
              {
                Var_70 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_70, 0) = ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_10[1]));
                MR_hl_field(0, Var_70, 1) = ((MR_Box) (check_hlds__typecheck_clauses__typecheck_coerce_2_8_p_0_1));
                MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_70, 3) = ((MR_Box) (TypeTable_27));
                MR_hl_field(0, Var_70, 4) = ((MR_Box) (BaseTypeCtor_55));
                MR_hl_field(0, Var_70, 5) = ((MR_Box) (TypeParams_61));
              }
              Var_71 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]));
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[4]), Var_70, Ctors_69, ((MR_Box) (Var_71)), &conv1_InvariantSet_58);
              InvariantSet_58 = ((MR_Word) (conv1_InvariantSet_58));
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_clauses.build_type_param_variance_restrictions\'/3", (MR_String) "not du type");
                return;
              }
            succeeded = check_hlds__typecheck_clauses__check_coerce_type_params_8_p_0(TypeTable_27, TVarSet_16, InvariantSet_58, BaseTypeParams_57, FromBaseTypeArgs_52, ToBaseTypeArgs_54, TypeAssign0_12, &TypeAssign1_28);
          }
        }
      }
    }
    if (succeeded)
      TypeAssign_29 = TypeAssign1_28;
    else
    {
      MR_Word Coercions0_30;
      MR_Word Coercion_31;
      MR_Word Coercions_32;

      check_hlds__type_assign__type_assign_get_coerce_constraints_2_p_0(TypeAssign0_12, &Coercions0_30);
      {
        Coercion_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Coercion_31, 0) = ((MR_Box) (FromType_25));
        MR_hl_field(0, Coercion_31, 1) = ((MR_Box) (ToType_26));
        MR_hl_field(0, Coercion_31, 2) = ((MR_Box) (Context_9));
        MR_hl_field(0, Coercion_31, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      }
      {
        Coercions_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Coercions_32, 0) = ((MR_Box) (Coercion_31));
        MR_hl_field(1, Coercions_32, 1) = ((MR_Box) (Coercions0_30));
      }
      check_hlds__type_assign__type_assign_set_coerce_constraints_3_p_0(Coercions_32, TypeAssign0_12, &TypeAssign_29);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_TypeAssignSet_35 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (TypeAssign_29));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_34));
    }
  }
  else
  {
    MR_Word TypeAssign2_33;
    MR_Word FromType_42;
    MR_Word ToType_43;
    MR_Word TypeAssign1_44;
    MR_Word TypeAssign_45;
    MR_Word Coercions0_46;
    MR_Word Coercion_47;
    MR_Word Coercions_48;

    if ((MaybeFromType_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word VarTypes0_77;
      MR_Word TypeVarSet0_78;
      MR_Word TypeVar_79;
      MR_Word TypeVarSet_80;
      MR_Word VarTypes1_81;
      MR_Word STATE_VARIABLE_TypeAssign_15_82;

      check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign0_12, &VarTypes0_77);
      check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign0_12, &TypeVarSet0_78);
      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVar_79, TypeVarSet0_78, &TypeVarSet_80);
      check_hlds__type_assign__type_assign_set_typevarset_3_p_0(TypeVarSet_80, TypeAssign0_12, &STATE_VARIABLE_TypeAssign_15_82);
      {
        FromType_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, FromType_42, 0) = ((MR_Box) (TypeVar_79));
        MR_hl_field(0, FromType_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      parse_tree__vartypes__add_var_type_4_p_0(FromVar_10, FromType_42, VarTypes0_77, &VarTypes1_81);
      check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes1_81, STATE_VARIABLE_TypeAssign_15_82, &TypeAssign1_44);
    }
    else
    {
      FromType_42 = ((MR_Word) ((MR_hl_field(1, MaybeFromType_21, (MR_Integer) 0))));
      TypeAssign1_44 = TypeAssign0_12;
    }
    if ((MaybeToType_24 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word VarTypes0_85;
      MR_Word TypeVarSet0_86;
      MR_Word TypeVar_87;
      MR_Word TypeVarSet_88;
      MR_Word VarTypes1_89;
      MR_Word STATE_VARIABLE_TypeAssign_15_90;

      check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign1_44, &VarTypes0_85);
      check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign1_44, &TypeVarSet0_86);
      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVar_87, TypeVarSet0_86, &TypeVarSet_88);
      check_hlds__type_assign__type_assign_set_typevarset_3_p_0(TypeVarSet_88, TypeAssign1_44, &STATE_VARIABLE_TypeAssign_15_90);
      {
        ToType_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ToType_43, 0) = ((MR_Box) (TypeVar_87));
        MR_hl_field(0, ToType_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      parse_tree__vartypes__add_var_type_4_p_0(ToVar_11, ToType_43, VarTypes0_85, &VarTypes1_89);
      check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes1_89, STATE_VARIABLE_TypeAssign_15_90, &TypeAssign2_33);
    }
    else
    {
      ToType_43 = ((MR_Word) ((MR_hl_field(1, MaybeToType_24, (MR_Integer) 0))));
      TypeAssign2_33 = TypeAssign1_44;
    }
    check_hlds__type_assign__type_assign_get_coerce_constraints_2_p_0(TypeAssign2_33, &Coercions0_46);
    {
      Coercion_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Coercion_47, 0) = ((MR_Box) (FromType_42));
      MR_hl_field(0, Coercion_47, 1) = ((MR_Box) (ToType_43));
      MR_hl_field(0, Coercion_47, 2) = ((MR_Box) (Context_9));
      MR_hl_field(0, Coercion_47, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      Coercions_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Coercions_48, 0) = ((MR_Box) (Coercion_47));
      MR_hl_field(1, Coercions_48, 1) = ((MR_Box) (Coercions0_46));
    }
    check_hlds__type_assign__type_assign_set_coerce_constraints_3_p_0(Coercions_48, TypeAssign2_33, &TypeAssign_45);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_TypeAssignSet_35 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (TypeAssign_45));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_34));
    }
  }
  *STATE_VARIABLE_Info_37 = STATE_VARIABLE_Info_0_36;
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__check_coerce_type_params_8_p_0(
  MR_Word TypeTable_9,
  MR_Word TVarSet_10,
  MR_Word InvariantSet_11,
  MR_Word TypeParams_12,
  MR_Word FromTypeArgs_13,
  MR_Word ToTypeArgs_14,
  MR_Word STATE_VARIABLE_TypeAssign_0_22,
  MR_Word * STATE_VARIABLE_TypeAssign_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((TypeParams_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (FromTypeArgs_13 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (ToTypeArgs_14 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          *STATE_VARIABLE_TypeAssign_23 = STATE_VARIABLE_TypeAssign_0_22;
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word TypeVar_16 = ((MR_Word) ((MR_hl_field(1, TypeParams_12, (MR_Integer) 0))));
      MR_Word TailTypeParams_17 = ((MR_Word) ((MR_hl_field(1, TypeParams_12, (MR_Integer) 1))));
      MR_Word FromType_18;
      MR_Word TailFromTypes_19;
      MR_Word ToType_20;
      MR_Word TailToTypes_21;
      MR_Word STATE_VARIABLE_TypeAssign_24_24;
      MR_Word TypeInfo_23_29;
      MR_Word next_value_of_TypeParams_12;
      MR_Word next_value_of_FromTypeArgs_13;
      MR_Word next_value_of_ToTypeArgs_14;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssign_0_22;

      succeeded = (FromTypeArgs_13 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        FromType_18 = ((MR_Word) ((MR_hl_field(1, FromTypeArgs_13, (MR_Integer) 0))));
        TailFromTypes_19 = ((MR_Word) ((MR_hl_field(1, FromTypeArgs_13, (MR_Integer) 1))));
        succeeded = (ToTypeArgs_14 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ToType_20 = ((MR_Word) ((MR_hl_field(1, ToTypeArgs_14, (MR_Integer) 0))));
          TailToTypes_21 = ((MR_Word) ((MR_hl_field(1, ToTypeArgs_14, (MR_Integer) 1))));
          TypeInfo_23_29 = (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]);
          succeeded = mercury__set__contains_2_p_0(TypeInfo_23_29, InvariantSet_11, ((MR_Box) (TypeVar_16)));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) FromType_18)) == (MR_Integer) 0);
            if (succeeded)
            {
            }
            if (!(succeeded))
            {
              succeeded = ((MR_tag((MR_Word) ToType_20)) == (MR_Integer) 0);
              if (succeeded)
              {
              }
            }
            if (succeeded)
            {
              MR_Word ExistQTVars_34;
              MR_Word TypeBindings0_35;
              MR_Word TypeBindings_36;

              check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(STATE_VARIABLE_TypeAssign_0_22, &ExistQTVars_34);
              check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(STATE_VARIABLE_TypeAssign_0_22, &TypeBindings0_35);
              succeeded = parse_tree__prog_type_unify__type_unify_5_p_0(FromType_18, ToType_20, ExistQTVars_34, TypeBindings0_35, &TypeBindings_36);
              if (succeeded)
              {
                check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_36, STATE_VARIABLE_TypeAssign_0_22, &STATE_VARIABLE_TypeAssign_24_24);
                succeeded = MR_TRUE;
              }
            }
            else
              switch (MR_tag((MR_Word) FromType_18)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_String Var_60;
                    MR_String Var_61;

                    succeeded = ((MR_tag((MR_Word) ToType_20)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_60 = (MR_String) "predicate \140check_hlds.typecheck_clauses.compare_types_nonvar\'/7";
                      Var_61 = (MR_String) "type_variable";
                      mercury__require__unexpected_2_p_0(Var_60, Var_61);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word TypeCtorA_45;
                    MR_Word ArgsA_46;
                    MR_Word TypeCtorB_47;
                    MR_Word ArgsB_48;

                    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(FromType_18, &TypeCtorA_45, &ArgsA_46);
                    if (succeeded)
                    {
                      succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(ToType_20, &TypeCtorB_47, &ArgsB_48);
                      if (succeeded)
                      {
                        succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtorA_45, TypeCtorB_47);
                        if (succeeded)
                          succeeded = check_hlds__typecheck_clauses__compare_types_corresponding_7_p_0(TypeTable_9, TVarSet_10, (MR_Integer) 0, ArgsA_46, ArgsB_48, STATE_VARIABLE_TypeAssign_0_22, &STATE_VARIABLE_TypeAssign_24_24);
                      }
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word BuiltinType_37 = ((MR_Word) ((MR_hl_field(2, FromType_18, (MR_Integer) 0))));
                    MR_Word Var_70;

                    succeeded = ((MR_tag((MR_Word) ToType_20)) == (MR_Integer) 2);
                    if (succeeded)
                    {
                      Var_70 = ((MR_Word) ((MR_hl_field(2, ToType_20, (MR_Integer) 0))));
                      succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_37, Var_70);
                      if (succeeded)
                      {
                        STATE_VARIABLE_TypeAssign_24_24 = STATE_VARIABLE_TypeAssign_0_22;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, FromType_18, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Kind_50 = ((MR_Word) ((MR_hl_field(3, FromType_18, (MR_Integer) 2))));
                        MR_Word ArgsA_65 = ((MR_Word) ((MR_hl_field(3, FromType_18, (MR_Integer) 1))));
                        MR_Word ArgsB_66;
                        MR_Word Var_71;

                        succeeded = ((((MR_tag((MR_Word) ToType_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ToType_20, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          ArgsB_66 = ((MR_Word) ((MR_hl_field(3, ToType_20, (MR_Integer) 1))));
                          Var_71 = ((MR_Word) ((MR_hl_field(3, ToType_20, (MR_Integer) 2))));
                          succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_50, Var_71);
                          if (succeeded)
                            succeeded = check_hlds__typecheck_clauses__compare_types_corresponding_7_p_0(TypeTable_9, TVarSet_10, (MR_Integer) 0, ArgsA_65, ArgsB_66, STATE_VARIABLE_TypeAssign_0_22, &STATE_VARIABLE_TypeAssign_24_24);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word PredOrFunc_51 = ((MR_Unsigned) ((MR_hl_field(3, FromType_18, (MR_Integer) 1))) & (MR_Integer) 1);
                        MR_Word Purity_53 = ((MR_Unsigned) ((MR_hl_field(3, FromType_18, (MR_Integer) 4))) & (MR_Integer) 3);
                        MR_Word Var_62;
                        MR_Word ArgsA_67 = ((MR_Word) ((MR_hl_field(3, FromType_18, (MR_Integer) 2))));
                        MR_Word ArgsB_68;
                        MR_Word Var_72;
                        MR_Word Var_73;

                        succeeded = ((((MR_tag((MR_Word) ToType_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ToType_20, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_72 = ((MR_Unsigned) ((MR_hl_field(3, ToType_20, (MR_Integer) 1))) & (MR_Integer) 1);
                          ArgsB_68 = ((MR_Word) ((MR_hl_field(3, ToType_20, (MR_Integer) 2))));
                          Var_73 = ((MR_Unsigned) ((MR_hl_field(3, ToType_20, (MR_Integer) 4))) & (MR_Integer) 3);
                          succeeded = (PredOrFunc_51 == Var_72);
                          if (succeeded)
                          {
                            succeeded = (Purity_53 == Var_73);
                            if (succeeded)
                            {
                              Var_62 = (MR_Integer) 0;
                              succeeded = check_hlds__typecheck_clauses__compare_types_corresponding_7_p_0(TypeTable_9, TVarSet_10, Var_62, ArgsA_67, ArgsB_68, STATE_VARIABLE_TypeAssign_0_22, &STATE_VARIABLE_TypeAssign_24_24);
                            }
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.typecheck_clauses.compare_types_nonvar\'/7", (MR_String) "apply_n_type");
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word TypeA1_58 = ((MR_Word) ((MR_hl_field(3, FromType_18, (MR_Integer) 1))));
                        MR_Word TypeB1_59;
                        MR_Word Kind_69 = ((MR_Word) ((MR_hl_field(3, FromType_18, (MR_Integer) 2))));
                        MR_Word Var_74;

                        succeeded = ((((MR_tag((MR_Word) ToType_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ToType_20, (MR_Integer) 0)))) == (MR_Integer) 3)));
                        if (succeeded)
                        {
                          TypeB1_59 = ((MR_Word) ((MR_hl_field(3, ToType_20, (MR_Integer) 1))));
                          Var_74 = ((MR_Word) ((MR_hl_field(3, ToType_20, (MR_Integer) 2))));
                          succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_69, Var_74);
                          if (succeeded)
                            succeeded = check_hlds__typecheck_clauses__compare_types_7_p_0(TypeTable_9, TVarSet_10, (MR_Integer) 0, TypeA1_58, TypeB1_59, STATE_VARIABLE_TypeAssign_0_22, &STATE_VARIABLE_TypeAssign_24_24);
                        }
                      }
                      break;
                  }
                  break;
              }
          }
          else
          {
            MR_Word STATE_VARIABLE_TypeAssign_21_27;

            succeeded = check_hlds__typecheck_clauses__compare_types_7_p_0(TypeTable_9, TVarSet_10, (MR_Integer) 1, FromType_18, ToType_20, STATE_VARIABLE_TypeAssign_0_22, &STATE_VARIABLE_TypeAssign_21_27);
            if (succeeded)
            {
              STATE_VARIABLE_TypeAssign_24_24 = STATE_VARIABLE_TypeAssign_21_27;
              succeeded = MR_TRUE;
            }
            else
              succeeded = check_hlds__typecheck_clauses__compare_types_7_p_0(TypeTable_9, TVarSet_10, (MR_Integer) 1, ToType_20, FromType_18, STATE_VARIABLE_TypeAssign_0_22, &STATE_VARIABLE_TypeAssign_24_24);
          }
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_TypeParams_12 = TailTypeParams_17;
            next_value_of_FromTypeArgs_13 = TailFromTypes_19;
            next_value_of_ToTypeArgs_14 = TailToTypes_21;
            next_value_of_STATE_VARIABLE_TypeAssign_0_22 = STATE_VARIABLE_TypeAssign_24_24;
            TypeParams_12 = next_value_of_TypeParams_12;
            FromTypeArgs_13 = next_value_of_FromTypeArgs_13;
            ToTypeArgs_14 = next_value_of_ToTypeArgs_14;
            STATE_VARIABLE_TypeAssign_0_22 = next_value_of_STATE_VARIABLE_TypeAssign_0_22;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__compare_types_7_p_0(
  MR_Word TypeTable_8,
  MR_Word TVarSet_9,
  MR_Word Comparison_10,
  MR_Word TypeA_11,
  MR_Word TypeB_12,
  MR_Word STATE_VARIABLE_TypeAssign_0_18,
  MR_Word * STATE_VARIABLE_TypeAssign_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) TypeA_11)) == (MR_Integer) 0);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
    }
    if (!(succeeded))
    {
      succeeded = ((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 0);
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_Word ExistQTVars_20;
      MR_Word TypeBindings0_21;
      MR_Word TypeBindings_22;

      check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(STATE_VARIABLE_TypeAssign_0_18, &ExistQTVars_20);
      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(STATE_VARIABLE_TypeAssign_0_18, &TypeBindings0_21);
      succeeded = parse_tree__prog_type_unify__type_unify_5_p_0(TypeA_11, TypeB_12, ExistQTVars_20, TypeBindings0_21, &TypeBindings_22);
      if (succeeded)
      {
        check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_22, STATE_VARIABLE_TypeAssign_0_18, STATE_VARIABLE_TypeAssign_19);
        succeeded = MR_TRUE;
      }
    }
    else
      switch (MR_tag((MR_Word) TypeA_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_46;
            MR_String Var_47;

            succeeded = ((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_46 = (MR_String) "predicate \140check_hlds.typecheck_clauses.compare_types_nonvar\'/7";
              Var_47 = (MR_String) "type_variable";
              mercury__require__unexpected_2_p_0(Var_46, Var_47);
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeCtorA_31;
            MR_Word ArgsA_32;
            MR_Word TypeCtorB_33;
            MR_Word ArgsB_34;

            succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeA_11, &TypeCtorA_31, &ArgsA_32);
            if (succeeded)
            {
              succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeB_12, &TypeCtorB_33, &ArgsB_34);
              if (succeeded)
              {
                succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtorA_31, TypeCtorB_33);
                if (succeeded)
                  succeeded = check_hlds__typecheck_clauses__compare_types_corresponding_7_p_0(TypeTable_8, TVarSet_9, Comparison_10, ArgsA_32, ArgsB_34, STATE_VARIABLE_TypeAssign_0_18, STATE_VARIABLE_TypeAssign_19);
                else
                {
                  MR_Word SuperTypeA_35;
                  MR_Word next_value_of_TypeA_11;

                  succeeded = (Comparison_10 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    succeeded = check_hlds__type_util__get_supertype_5_p_0(TypeTable_8, TVarSet_9, TypeCtorA_31, ArgsA_32, &SuperTypeA_35);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_TypeA_11 = SuperTypeA_35;
                      TypeA_11 = next_value_of_TypeA_11;
                      continue;
                    }
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word BuiltinType_23 = ((MR_Word) ((MR_hl_field(2, TypeA_11, (MR_Integer) 0))));
            MR_Word Var_56;

            succeeded = ((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_56 = ((MR_Word) ((MR_hl_field(2, TypeB_12, (MR_Integer) 0))));
              succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_23, Var_56);
              if (succeeded)
              {
                *STATE_VARIABLE_TypeAssign_19 = STATE_VARIABLE_TypeAssign_0_18;
                succeeded = MR_TRUE;
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, TypeA_11, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Kind_36 = ((MR_Word) ((MR_hl_field(3, TypeA_11, (MR_Integer) 2))));
                MR_Word ArgsA_51 = ((MR_Word) ((MR_hl_field(3, TypeA_11, (MR_Integer) 1))));
                MR_Word ArgsB_52;
                MR_Word Var_57;

                succeeded = ((((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_12, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgsB_52 = ((MR_Word) ((MR_hl_field(3, TypeB_12, (MR_Integer) 1))));
                  Var_57 = ((MR_Word) ((MR_hl_field(3, TypeB_12, (MR_Integer) 2))));
                  succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_36, Var_57);
                  if (succeeded)
                    succeeded = check_hlds__typecheck_clauses__compare_types_corresponding_7_p_0(TypeTable_8, TVarSet_9, Comparison_10, ArgsA_51, ArgsB_52, STATE_VARIABLE_TypeAssign_0_18, STATE_VARIABLE_TypeAssign_19);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word PredOrFunc_37 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_11, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Purity_39 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_11, (MR_Integer) 4))) & (MR_Integer) 3);
                MR_Word Var_48;
                MR_Word ArgsA_53 = ((MR_Word) ((MR_hl_field(3, TypeA_11, (MR_Integer) 2))));
                MR_Word ArgsB_54;
                MR_Word Var_58;
                MR_Word Var_59;

                succeeded = ((((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_58 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_12, (MR_Integer) 1))) & (MR_Integer) 1);
                  ArgsB_54 = ((MR_Word) ((MR_hl_field(3, TypeB_12, (MR_Integer) 2))));
                  Var_59 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_12, (MR_Integer) 4))) & (MR_Integer) 3);
                  succeeded = (PredOrFunc_37 == Var_58);
                  if (succeeded)
                  {
                    succeeded = (Purity_39 == Var_59);
                    if (succeeded)
                    {
                      Var_48 = (MR_Integer) 0;
                      succeeded = check_hlds__typecheck_clauses__compare_types_corresponding_7_p_0(TypeTable_8, TVarSet_9, Var_48, ArgsA_53, ArgsB_54, STATE_VARIABLE_TypeAssign_0_18, STATE_VARIABLE_TypeAssign_19);
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.typecheck_clauses.compare_types_nonvar\'/7", (MR_String) "apply_n_type");
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word TypeA1_44 = ((MR_Word) ((MR_hl_field(3, TypeA_11, (MR_Integer) 1))));
                MR_Word TypeB1_45;
                MR_Word Kind_55 = ((MR_Word) ((MR_hl_field(3, TypeA_11, (MR_Integer) 2))));
                MR_Word Var_60;
                MR_Word next_value_of_TypeA_11;
                MR_Word next_value_of_TypeB_12;

                succeeded = ((((MR_tag((MR_Word) TypeB_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_12, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  TypeB1_45 = ((MR_Word) ((MR_hl_field(3, TypeB_12, (MR_Integer) 1))));
                  Var_60 = ((MR_Word) ((MR_hl_field(3, TypeB_12, (MR_Integer) 2))));
                  succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_55, Var_60);
                  if (succeeded)
                  {
                    // direct tailcall eliminated
                    ;
                    next_value_of_TypeA_11 = TypeA1_44;
                    next_value_of_TypeB_12 = TypeB1_45;
                    TypeA_11 = next_value_of_TypeA_11;
                    TypeB_12 = next_value_of_TypeB_12;
                    continue;
                  }
                }
              }
              break;
          }
          break;
      }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__compare_types_corresponding_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_TypeAssign_0_6,
  MR_Word * STATE_VARIABLE_TypeAssign_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *STATE_VARIABLE_TypeAssign_7 = STATE_VARIABLE_TypeAssign_0_6;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word TypeA_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word TypesA_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word TypeB_19;
      MR_Word TypesB_20;
      MR_Word STATE_VARIABLE_TypeAssign_24_24;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssign_0_6;

      succeeded = (HeadVar__5_5 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeB_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
        TypesB_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) TypeA_17)) == (MR_Integer) 0);
        if (succeeded)
        {
        }
        if (!(succeeded))
        {
          succeeded = ((MR_tag((MR_Word) TypeB_19)) == (MR_Integer) 0);
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          MR_Word ExistQTVars_29;
          MR_Word TypeBindings0_30;
          MR_Word TypeBindings_31;

          check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(STATE_VARIABLE_TypeAssign_0_6, &ExistQTVars_29);
          check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(STATE_VARIABLE_TypeAssign_0_6, &TypeBindings0_30);
          succeeded = parse_tree__prog_type_unify__type_unify_5_p_0(TypeA_17, TypeB_19, ExistQTVars_29, TypeBindings0_30, &TypeBindings_31);
          if (succeeded)
          {
            check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_31, STATE_VARIABLE_TypeAssign_0_6, &STATE_VARIABLE_TypeAssign_24_24);
            succeeded = MR_TRUE;
          }
        }
        else
          switch (MR_tag((MR_Word) TypeA_17)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Var_55;
                MR_String Var_56;

                succeeded = ((MR_tag((MR_Word) TypeB_19)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_55 = (MR_String) "predicate \140check_hlds.typecheck_clauses.compare_types_nonvar\'/7";
                  Var_56 = (MR_String) "type_variable";
                  mercury__require__unexpected_2_p_0(Var_55, Var_56);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeCtorA_40;
                MR_Word ArgsA_41;
                MR_Word TypeCtorB_42;
                MR_Word ArgsB_43;

                succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeA_17, &TypeCtorA_40, &ArgsA_41);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(TypeB_19, &TypeCtorB_42, &ArgsB_43);
                  if (succeeded)
                  {
                    succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtorA_40, TypeCtorB_42);
                    if (succeeded)
                      succeeded = check_hlds__typecheck_clauses__compare_types_corresponding_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, ArgsA_41, ArgsB_43, STATE_VARIABLE_TypeAssign_0_6, &STATE_VARIABLE_TypeAssign_24_24);
                    else
                    {
                      MR_Word SuperTypeA_44;

                      succeeded = (HeadVar__3_3 == (MR_Integer) 1);
                      if (succeeded)
                      {
                        succeeded = check_hlds__type_util__get_supertype_5_p_0(HeadVar__1_1, HeadVar__2_2, TypeCtorA_40, ArgsA_41, &SuperTypeA_44);
                        if (succeeded)
                          succeeded = check_hlds__typecheck_clauses__compare_types_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, SuperTypeA_44, TypeB_19, STATE_VARIABLE_TypeAssign_0_6, &STATE_VARIABLE_TypeAssign_24_24);
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word BuiltinType_32 = ((MR_Word) ((MR_hl_field(2, TypeA_17, (MR_Integer) 0))));
                MR_Word Var_65;

                succeeded = ((MR_tag((MR_Word) TypeB_19)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_65 = ((MR_Word) ((MR_hl_field(2, TypeB_19, (MR_Integer) 0))));
                  succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(BuiltinType_32, Var_65);
                  if (succeeded)
                  {
                    STATE_VARIABLE_TypeAssign_24_24 = STATE_VARIABLE_TypeAssign_0_6;
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, TypeA_17, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Kind_45 = ((MR_Word) ((MR_hl_field(3, TypeA_17, (MR_Integer) 2))));
                    MR_Word ArgsA_60 = ((MR_Word) ((MR_hl_field(3, TypeA_17, (MR_Integer) 1))));
                    MR_Word ArgsB_61;
                    MR_Word Var_66;

                    succeeded = ((((MR_tag((MR_Word) TypeB_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_19, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      ArgsB_61 = ((MR_Word) ((MR_hl_field(3, TypeB_19, (MR_Integer) 1))));
                      Var_66 = ((MR_Word) ((MR_hl_field(3, TypeB_19, (MR_Integer) 2))));
                      succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_45, Var_66);
                      if (succeeded)
                        succeeded = check_hlds__typecheck_clauses__compare_types_corresponding_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, ArgsA_60, ArgsB_61, STATE_VARIABLE_TypeAssign_0_6, &STATE_VARIABLE_TypeAssign_24_24);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word PredOrFunc_46 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_17, (MR_Integer) 1))) & (MR_Integer) 1);
                    MR_Word Purity_48 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_17, (MR_Integer) 4))) & (MR_Integer) 3);
                    MR_Word Var_57;
                    MR_Word ArgsA_62 = ((MR_Word) ((MR_hl_field(3, TypeA_17, (MR_Integer) 2))));
                    MR_Word ArgsB_63;
                    MR_Word Var_67;
                    MR_Word Var_68;

                    succeeded = ((((MR_tag((MR_Word) TypeB_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_19, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_67 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_19, (MR_Integer) 1))) & (MR_Integer) 1);
                      ArgsB_63 = ((MR_Word) ((MR_hl_field(3, TypeB_19, (MR_Integer) 2))));
                      Var_68 = ((MR_Unsigned) ((MR_hl_field(3, TypeB_19, (MR_Integer) 4))) & (MR_Integer) 3);
                      succeeded = (PredOrFunc_46 == Var_67);
                      if (succeeded)
                      {
                        succeeded = (Purity_48 == Var_68);
                        if (succeeded)
                        {
                          Var_57 = (MR_Integer) 0;
                          succeeded = check_hlds__typecheck_clauses__compare_types_corresponding_7_p_0(HeadVar__1_1, HeadVar__2_2, Var_57, ArgsA_62, ArgsB_63, STATE_VARIABLE_TypeAssign_0_6, &STATE_VARIABLE_TypeAssign_24_24);
                        }
                      }
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.typecheck_clauses.compare_types_nonvar\'/7", (MR_String) "apply_n_type");
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word TypeA1_53 = ((MR_Word) ((MR_hl_field(3, TypeA_17, (MR_Integer) 1))));
                    MR_Word TypeB1_54;
                    MR_Word Kind_64 = ((MR_Word) ((MR_hl_field(3, TypeA_17, (MR_Integer) 2))));
                    MR_Word Var_69;

                    succeeded = ((((MR_tag((MR_Word) TypeB_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeB_19, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (succeeded)
                    {
                      TypeB1_54 = ((MR_Word) ((MR_hl_field(3, TypeB_19, (MR_Integer) 1))));
                      Var_69 = ((MR_Word) ((MR_hl_field(3, TypeB_19, (MR_Integer) 2))));
                      succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_64, Var_69);
                      if (succeeded)
                        succeeded = check_hlds__typecheck_clauses__compare_types_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, TypeA1_53, TypeB1_54, STATE_VARIABLE_TypeAssign_0_6, &STATE_VARIABLE_TypeAssign_24_24);
                    }
                  }
                  break;
              }
              break;
          }
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__4_4 = TypesA_18;
          next_value_of_HeadVar__5_5 = TypesB_20;
          next_value_of_STATE_VARIABLE_TypeAssign_0_6 = STATE_VARIABLE_TypeAssign_24_24;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          HeadVar__5_5 = next_value_of_HeadVar__5_5;
          STATE_VARIABLE_TypeAssign_0_6 = next_value_of_STATE_VARIABLE_TypeAssign_0_6;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__replace_principal_type_ctor_with_base_4_p_0(
  MR_Word TypeTable_5,
  MR_Word TVarSet_6,
  MR_Word Type0_7,
  MR_Word * Type_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word SuperType_11;
    MR_Word TypeCtor_9;
    MR_Word Args_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type0_7, &TypeCtor_9, &Args_10);
    if (succeeded)
      succeeded = check_hlds__type_util__get_supertype_5_p_0(TypeTable_5, TVarSet_6, TypeCtor_9, Args_10, &SuperType_11);
    if (succeeded)
    {
      MR_Word next_value_of_Type0_7 = SuperType_11;

      // direct tailcall eliminated
      ;
      Type0_7 = next_value_of_Type0_7;
      continue;
    }
    else
      *Type_8 = Type0_7;
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__type_assign_check_functor_type_builtin_5_p_0(
  MR_Word ConsType_6,
  MR_Word Y_7,
  MR_Word TypeAssign0_8,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_15,
  MR_Word * STATE_VARIABLE_TypeAssignSet_16)
{
  MR_bool succeeded;
  MR_Word VarTypes0_10;
  MR_Word MaybeTypeY_11;
  MR_Word VarTypes_12;

  check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign0_8, &VarTypes0_10);
  parse_tree__vartypes__search_insert_var_type_5_p_0(Y_7, ConsType_6, &MaybeTypeY_11, VarTypes0_10, &VarTypes_12);
  if ((MaybeTypeY_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word TypeAssign_19;

    check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_12, TypeAssign0_8, &TypeAssign_19);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_TypeAssignSet_16 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (TypeAssign_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_15));
    }
  }
  else
  {
    MR_Word TypeY_13 = ((MR_Word) ((MR_hl_field(1, MaybeTypeY_11, (MR_Integer) 0))));
    MR_Word TypeAssign_14;
    MR_Word ExistQTVars_20;
    MR_Word TypeBindings0_21;
    MR_Word TypeBindings_22;

    check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign0_8, &ExistQTVars_20);
    check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign0_8, &TypeBindings0_21);
    succeeded = parse_tree__prog_type_unify__type_unify_5_p_0(ConsType_6, TypeY_13, ExistQTVars_20, TypeBindings0_21, &TypeBindings_22);
    if (succeeded)
    {
      check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_22, TypeAssign0_8, &TypeAssign_14);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_TypeAssignSet_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (TypeAssign_14));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_15));
      }
    else
      *STATE_VARIABLE_TypeAssignSet_16 = STATE_VARIABLE_TypeAssignSet_0_15;
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_var_has_stm_atomic_type_6_p_0(
  MR_Word Context_7,
  MR_Word Var_8,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_11,
  MR_Word * STATE_VARIABLE_TypeAssignSet_12,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  MR_bool succeeded;
  MR_Word Var_16;
  MR_Word TypeAssignSet1_17;

  Var_16 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
  check_hlds__typecheck_clauses__typecheck_var_has_type_2_5_p_0(STATE_VARIABLE_TypeAssignSet_0_11, Var_8, Var_16, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_17);
  succeeded = (TypeAssignSet1_17 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    succeeded = (STATE_VARIABLE_TypeAssignSet_0_11 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
  }
  if (succeeded)
  {
    MR_Word SpecAndMaybeActualExpected_20;
    MR_Word Spec_21;

    *STATE_VARIABLE_TypeAssignSet_12 = STATE_VARIABLE_TypeAssignSet_0_11;
    SpecAndMaybeActualExpected_20 = check_hlds__typecheck_errors__report_error_var_has_wrong_type_6_f_0(STATE_VARIABLE_Info_0_13, (MR_Word) ((MR_Unsigned) 0U), Context_7, Var_8, Var_16, STATE_VARIABLE_TypeAssignSet_0_11);
    Spec_21 = ((MR_Word) ((MR_hl_field(0, SpecAndMaybeActualExpected_20, (MR_Integer) 0))));
    check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_21, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
  }
  else
  {
    *STATE_VARIABLE_TypeAssignSet_12 = TypeAssignSet1_17;
    *STATE_VARIABLE_Info_14 = STATE_VARIABLE_Info_0_13;
  }
}

void MR_CALL 
check_hlds__typecheck_clauses__typecheck_clauses_8_p_0(
  MR_Word HeadVars_9,
  MR_Word ArgTypes_10,
  MR_Word Clauses0_11,
  MR_Word * Clauses_12,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_16,
  MR_Word * STATE_VARIABLE_TypeAssignSet_17,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  MR_Word RevClauses_15;

  check_hlds__typecheck_clauses__typecheck_clauses_loop_9_p_0(HeadVars_9, ArgTypes_10, Clauses0_11, (MR_Word) ((MR_Unsigned) 0U), &RevClauses_15, STATE_VARIABLE_TypeAssignSet_0_16, STATE_VARIABLE_TypeAssignSet_17, STATE_VARIABLE_Info_0_18, STATE_VARIABLE_Info_19);
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), RevClauses_15, Clauses_12);
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__typecheck_clauses_loop_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck_clauses__type_assign_has_no_coerce_constraints_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_clauses_loop_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_TypeAssign_11;

  check_hlds__typecheck_clauses__type_assign_prune_coerce_constraints_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_STATE_VARIABLE_TypeAssign_11);
  *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_TypeAssign_11));
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_clauses_loop_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_clauses_loop_9_p_0(
  MR_Word HeadVars_1,
  MR_Word ArgTypes_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevClauses_0_4,
  MR_Word * STATE_VARIABLE_RevClauses_5,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_6,
  MR_Word * STATE_VARIABLE_TypeAssignSet_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
      *STATE_VARIABLE_TypeAssignSet_7 = STATE_VARIABLE_TypeAssignSet_0_6;
      *STATE_VARIABLE_RevClauses_5 = STATE_VARIABLE_RevClauses_0_4;
    }
    else
    {
      MR_Word Clause0_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Clauses0_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Clause_28;
      MR_Word STATE_VARIABLE_TypeAssignSet_35_35;
      MR_Word STATE_VARIABLE_Info_36_36;
      MR_Word STATE_VARIABLE_RevClauses_37_37;
      MR_Word Body0_39 = ((MR_Word) ((MR_hl_field(0, Clause0_23, (MR_Integer) 1))));
      MR_Word Context_41 = ((MR_Word) ((MR_hl_field(0, Clause0_23, (MR_Integer) 3))));
      MR_Word Body_44;
      MR_Word STATE_VARIABLE_TypeAssignSet_30_47;
      MR_Word STATE_VARIABLE_Info_31_48;
      MR_Word STATE_VARIABLE_TypeAssignSet_32_49;
      MR_Word STATE_VARIABLE_Info_38_54;
      MR_Word Specs_66;
      MR_Word MaybeArgVectorTypeErrors_67;
      MR_Word TypeTable_80;
      MR_Word TypeAssignSet1_81;
      MR_Word SatisfiedTypeAssignSet_82;
      MR_Word UnsatisfiedTypeAssignSet_83;
      MR_Word Var_84;
      MR_Word ArgVectorTypeErrors_68;
      MR_Word Var_76;
      MR_Word Var_61;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_RevClauses_0_4;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_8;

      check_hlds__typecheck_clauses__typecheck_vars_have_types_in_arg_vector_12_p_0(STATE_VARIABLE_Info_0_8, Context_41, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, HeadVars_1, ArgTypes_2, STATE_VARIABLE_TypeAssignSet_0_6, &STATE_VARIABLE_TypeAssignSet_30_47, (MR_Word) ((MR_Unsigned) 0U), &Specs_66, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_clauses_scalar_common_2[0])), &MaybeArgVectorTypeErrors_67);
      succeeded = (MaybeArgVectorTypeErrors_67 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgVectorTypeErrors_68 = ((MR_Word) ((MR_hl_field(1, MaybeArgVectorTypeErrors_67, (MR_Integer) 0))));
        succeeded = (ArgVectorTypeErrors_68 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_76 = ((MR_Word) ((MR_hl_field(1, ArgVectorTypeErrors_68, (MR_Integer) 1))));
          succeeded = (Var_76 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
      {
        MR_Word AllArgsSpec_72;

        AllArgsSpec_72 = check_hlds__typecheck_errors__report_error_wrong_types_in_arg_vector_5_f_0(STATE_VARIABLE_Info_0_8, Context_41, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_TypeAssignSet_30_47, ArgVectorTypeErrors_68);
        check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(AllArgsSpec_72, STATE_VARIABLE_Info_0_8, &STATE_VARIABLE_Info_31_48);
      }
      else
      {
        MR_Box conv1_STATE_VARIABLE_Info_31_48;

        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_4[7]), Specs_66, ((MR_Box) (STATE_VARIABLE_Info_0_8)), &conv1_STATE_VARIABLE_Info_31_48);
        STATE_VARIABLE_Info_31_48 = ((MR_Word) (conv1_STATE_VARIABLE_Info_31_48));
      }
      check_hlds__typecheck_clauses__typecheck_goal_7_p_0(Body0_39, &Body_44, Context_41, STATE_VARIABLE_TypeAssignSet_30_47, &STATE_VARIABLE_TypeAssignSet_32_49, STATE_VARIABLE_Info_31_48, &STATE_VARIABLE_Info_38_54);
      check_hlds__typecheck_info__typecheck_info_get_type_table_2_p_0(STATE_VARIABLE_Info_38_54, &TypeTable_80);
      {
        Var_84 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_84, 0) = ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_3[2]));
        MR_hl_field(0, Var_84, 1) = ((MR_Box) (check_hlds__typecheck_clauses__typecheck_clauses_loop_9_p_0_2));
        MR_hl_field(0, Var_84, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_84, 3) = ((MR_Box) (TypeTable_80));
      }
      mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), Var_84, STATE_VARIABLE_TypeAssignSet_32_49, &TypeAssignSet1_81);
      mercury__list__filter_4_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_4[8]), TypeAssignSet1_81, &SatisfiedTypeAssignSet_82, &UnsatisfiedTypeAssignSet_83);
      if ((SatisfiedTypeAssignSet_82 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_TypeAssignSet_35_35 = UnsatisfiedTypeAssignSet_83;
      else
        STATE_VARIABLE_TypeAssignSet_35_35 = SatisfiedTypeAssignSet_82;
      Var_61 = ((MR_Word) ((MR_hl_field(0, Clause0_23, (MR_Integer) 0))));
      Var_63 = ((MR_Word) ((MR_hl_field(0, Clause0_23, (MR_Integer) 2))));
      Var_64 = ((MR_Word) ((MR_hl_field(0, Clause0_23, (MR_Integer) 3))));
      Var_65 = ((MR_Word) ((MR_hl_field(0, Clause0_23, (MR_Integer) 4))));
      {
        Clause_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Clause_28, 0) = ((MR_Box) (Var_61));
        MR_hl_field(0, Clause_28, 1) = ((MR_Box) (Body_44));
        MR_hl_field(0, Clause_28, 2) = ((MR_Box) (Var_63));
        MR_hl_field(0, Clause_28, 3) = ((MR_Box) (Var_64));
        MR_hl_field(0, Clause_28, 4) = ((MR_Box) (Var_65));
      }
      check_hlds__typecheck_clauses__typecheck_check_for_ambiguity_6_p_0(Context_41, (MR_Integer) 0, HeadVars_1, STATE_VARIABLE_TypeAssignSet_35_35, STATE_VARIABLE_Info_38_54, &STATE_VARIABLE_Info_36_36);
      {
        STATE_VARIABLE_RevClauses_37_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevClauses_37_37, 0) = ((MR_Box) (Clause_28));
        MR_hl_field(1, STATE_VARIABLE_RevClauses_37_37, 1) = ((MR_Box) (STATE_VARIABLE_RevClauses_0_4));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Clauses0_24;
      next_value_of_STATE_VARIABLE_RevClauses_0_4 = STATE_VARIABLE_RevClauses_37_37;
      next_value_of_STATE_VARIABLE_TypeAssignSet_0_6 = STATE_VARIABLE_TypeAssignSet_35_35;
      next_value_of_STATE_VARIABLE_Info_0_8 = STATE_VARIABLE_Info_36_36;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_RevClauses_0_4 = next_value_of_STATE_VARIABLE_RevClauses_0_4;
      STATE_VARIABLE_TypeAssignSet_0_6 = next_value_of_STATE_VARIABLE_TypeAssignSet_0_6;
      STATE_VARIABLE_Info_0_8 = next_value_of_STATE_VARIABLE_Info_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_unification_10_p_0(
  MR_Word UnifyContext_11,
  MR_Word Context_12,
  MR_Word GoalId_13,
  MR_Word LHSVar_14,
  MR_Word RHS0_15,
  MR_Word * RHS_16,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_32,
  MR_Word * STATE_VARIABLE_TypeAssignSet_33,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) RHS0_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word RHSVar_19 = ((MR_Word) ((MR_hl_field(0, RHS0_15, (MR_Integer) 0))));
        MR_Word TypeAssignSet1_53;

        check_hlds__typecheck_clauses__type_assigns_unify_var_var_5_p_0(STATE_VARIABLE_TypeAssignSet_0_32, LHSVar_14, RHSVar_19, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_53);
        succeeded = (TypeAssignSet1_53 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (STATE_VARIABLE_TypeAssignSet_0_32 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          MR_Word Spec_56;

          *STATE_VARIABLE_TypeAssignSet_33 = STATE_VARIABLE_TypeAssignSet_0_32;
          Spec_56 = check_hlds__typecheck_errors__report_error_unify_var_var_6_f_0(STATE_VARIABLE_Info_0_34, UnifyContext_11, Context_12, LHSVar_14, RHSVar_19, STATE_VARIABLE_TypeAssignSet_0_32);
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_56, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
        }
        else
        {
          *STATE_VARIABLE_TypeAssignSet_33 = TypeAssignSet1_53;
          *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
        }
        *RHS_16 = RHS0_15;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Functor_20 = ((MR_Word) ((MR_hl_field(1, RHS0_15, (MR_Integer) 0))));
        MR_Word ArgVars_22 = ((MR_Word) ((MR_hl_field(1, RHS0_15, (MR_Integer) 2))));
        MR_Word STATE_VARIABLE_TypeAssignSet_38_38;
        MR_Word STATE_VARIABLE_Info_39_39;

        check_hlds__typecheck_clauses__typecheck_unify_var_functor_10_p_0(UnifyContext_11, Context_12, LHSVar_14, Functor_20, ArgVars_22, GoalId_13, STATE_VARIABLE_TypeAssignSet_0_32, &STATE_VARIABLE_TypeAssignSet_38_38, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_39_39);
        check_hlds__typeclasses__perform_context_reduction_5_p_0(Context_12, STATE_VARIABLE_TypeAssignSet_38_38, STATE_VARIABLE_TypeAssignSet_33, STATE_VARIABLE_Info_39_39, STATE_VARIABLE_Info_35);
        *RHS_16 = RHS0_15;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Purity_23 = ((((MR_Unsigned) ((MR_hl_field(2, RHS0_15, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
        MR_Word PredOrFunc_25 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_15, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word NonLocals_26 = ((MR_Word) ((MR_hl_field(2, RHS0_15, (MR_Integer) 1))));
        MR_Word VarsModes_27 = ((MR_Word) ((MR_hl_field(2, RHS0_15, (MR_Integer) 2))));
        MR_Word Det_28 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_15, (MR_Integer) 3))) & (MR_Integer) 7);
        MR_Word Goal0_29 = ((MR_Word) ((MR_hl_field(2, RHS0_15, (MR_Integer) 4))));
        MR_Word Vars_30;
        MR_Word Goal_31;
        MR_Word STATE_VARIABLE_Info_43_43;
        MR_Word STATE_VARIABLE_TypeAssignSet_44_44;
        MR_Word STATE_VARIABLE_Info_45_45;
        MR_Word TypeAssignSet1_48;
        MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(2, RHS0_15, (MR_Integer) 0)));

        check_hlds__typecheck_info__typecheck_info_set_rhs_lambda_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_43_43);
        mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), VarsModes_27, &Vars_30);
        check_hlds__typecheck_clauses__typecheck_lambda_var_has_type_2_7_p_0(STATE_VARIABLE_TypeAssignSet_0_32, Purity_23, PredOrFunc_25, LHSVar_14, Vars_30, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_48);
        succeeded = (TypeAssignSet1_48 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (STATE_VARIABLE_TypeAssignSet_0_32 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          MR_Word Spec_51;

          STATE_VARIABLE_TypeAssignSet_44_44 = STATE_VARIABLE_TypeAssignSet_0_32;
          Spec_51 = check_hlds__typecheck_errors__report_error_unify_var_lambda_7_f_0(STATE_VARIABLE_Info_43_43, UnifyContext_11, Context_12, PredOrFunc_25, LHSVar_14, Vars_30, STATE_VARIABLE_TypeAssignSet_0_32);
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_51, STATE_VARIABLE_Info_43_43, &STATE_VARIABLE_Info_45_45);
        }
        else
        {
          STATE_VARIABLE_TypeAssignSet_44_44 = TypeAssignSet1_48;
          STATE_VARIABLE_Info_45_45 = STATE_VARIABLE_Info_43_43;
        }
        check_hlds__typecheck_clauses__typecheck_goal_7_p_0(Goal0_29, &Goal_31, Context_12, STATE_VARIABLE_TypeAssignSet_44_44, STATE_VARIABLE_TypeAssignSet_33, STATE_VARIABLE_Info_45_45, STATE_VARIABLE_Info_35);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *RHS_16 = base;
          MR_hl_field(2, base, 0) = (MR_Box) (packed_word_1);
          MR_hl_field(2, base, 1) = ((MR_Box) (NonLocals_26));
          MR_hl_field(2, base, 2) = ((MR_Box) (VarsModes_27));
          MR_hl_field(2, base, 3) = (MR_Box) ((MR_Unsigned) (Det_28));
          MR_hl_field(2, base, 4) = ((MR_Box) (Goal_31));
        }
      }
      break;
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_case_list_7_p_0(
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
    MR_Word Case0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_17;
    MR_Word Cases_18;
    MR_Word MainCondId_22 = ((MR_Word) ((MR_hl_field(0, Case0_15, (MR_Integer) 0))));
    MR_Word OtherConsIds_23 = ((MR_Word) ((MR_hl_field(0, Case0_15, (MR_Integer) 1))));
    MR_Word Goal0_24 = ((MR_Word) ((MR_hl_field(0, Case0_15, (MR_Integer) 2))));
    MR_Word Goal_25;
    MR_Word STATE_VARIABLE_TypeAssignSet_30_30;
    MR_Word STATE_VARIABLE_Info_31_31;

    check_hlds__typecheck_clauses__typecheck_goal_7_p_0(Goal0_24, &Goal_25, Context_3, STATE_VARIABLE_TypeAssignSet_0_4, &STATE_VARIABLE_TypeAssignSet_30_30, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_31_31);
    {
      Case_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_17, 0) = ((MR_Box) (MainCondId_22));
      MR_hl_field(0, Case_17, 1) = ((MR_Box) (OtherConsIds_23));
      MR_hl_field(0, Case_17, 2) = ((MR_Box) (Goal_25));
    }
    check_hlds__typecheck_clauses__typecheck_case_list_7_p_0(Cases0_16, &Cases_18, Context_3, STATE_VARIABLE_TypeAssignSet_30_30, STATE_VARIABLE_TypeAssignSet_5, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_17));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_18));
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_goal_list_7_p_0(
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
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_17;
    MR_Word Goals_18;
    MR_Word STATE_VARIABLE_TypeAssignSet_26_26;
    MR_Word STATE_VARIABLE_Info_27_27;

    check_hlds__typecheck_clauses__typecheck_goal_7_p_0(Goal0_15, &Goal_17, Context_3, STATE_VARIABLE_TypeAssignSet_0_4, &STATE_VARIABLE_TypeAssignSet_26_26, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_27_27);
    check_hlds__typecheck_clauses__typecheck_goal_list_7_p_0(Goals0_16, &Goals_18, Context_3, STATE_VARIABLE_TypeAssignSet_26_26, STATE_VARIABLE_TypeAssignSet_5, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_17));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_18));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__typecheck_goal_expr_7_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck_clauses__IntroducedFrom__pred__typecheck_goal_expr__483__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_goal_expr_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_TypeAssignSet_12;
  MR_Word conv1_STATE_VARIABLE_Info_14;

  check_hlds__typecheck_clauses__typecheck_var_has_stm_atomic_type_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_TypeAssignSet_12, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Info_14);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_TypeAssignSet_12));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Info_14));
}

static MR_Box MR_CALL 
check_hlds__typecheck_clauses__typecheck_goal_expr_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_goal_expr_7_p_0(
  MR_Word GoalExpr0_8,
  MR_Word * GoalExpr_9,
  MR_Word GoalInfo_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_115,
  MR_Word * STATE_VARIABLE_TypeAssignSet_116,
  MR_Word STATE_VARIABLE_Info_0_117,
  MR_Word * STATE_VARIABLE_Info_118)
{
  MR_bool succeeded;
  MR_Word Context_15;
  MR_Word ClauseContext_13;

  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_117, &ClauseContext_13);
  Context_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_10);
  switch (MR_tag((MR_Word) GoalExpr0_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_31 = (MR_Word) ((MR_Word) (GoalExpr0_8));
        MR_Word SubGoal_32;

        check_hlds__typecheck_clauses__typecheck_goal_7_p_0(SubGoal0_31, &SubGoal_32, Context_15, STATE_VARIABLE_TypeAssignSet_0_115, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_0_117, STATE_VARIABLE_Info_118);
        *GoalExpr_9 = (MR_Word) ((MR_Word) (SubGoal_32));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHS_78 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 0))));
        MR_Word RHS0_79 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 1))));
        MR_Word UnifyMode_80 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 2))));
        MR_Word Unification_81 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 3))));
        MR_Word UnifyContext_82 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_8, (MR_Integer) 4))));
        MR_Word RHS_83;
        MR_Word GoalId_257;

        GoalId_257 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_10);
        check_hlds__typecheck_clauses__typecheck_unification_10_p_0(UnifyContext_82, Context_15, GoalId_257, LHS_78, RHS0_79, &RHS_83, STATE_VARIABLE_TypeAssignSet_0_115, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_0_117, STATE_VARIABLE_Info_118);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_9 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (LHS_78));
          MR_hl_field(1, base, 1) = ((MR_Box) (RHS_83));
          MR_hl_field(1, base, 2) = ((MR_Box) (UnifyMode_80));
          MR_hl_field(1, base, 3) = ((MR_Box) (Unification_81));
          MR_hl_field(1, base, 4) = ((MR_Box) (UnifyContext_82));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer ProcId_56 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_8, (MR_Integer) 1))));
        MR_Word ArgVars_57 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_8, (MR_Integer) 2))));
        MR_Word BI_58 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_8, (MR_Integer) 3))) & (MR_Integer) 1);
        MR_Word UC_59 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_8, (MR_Integer) 4))));
        MR_Word SymName_60 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_8, (MR_Integer) 5))));
        MR_Word GoalId_61;
        MR_Word PredId_62;

        GoalId_61 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_10);
        check_hlds__typecheck_clauses__typecheck_call_pred_name_9_p_0(SymName_60, Context_15, GoalId_61, ArgVars_57, &PredId_62, STATE_VARIABLE_TypeAssignSet_0_115, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_0_117, STATE_VARIABLE_Info_118);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_9 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (PredId_62));
          MR_hl_field(2, base, 1) = ((MR_Box) (ProcId_56));
          MR_hl_field(2, base, 2) = ((MR_Box) (ArgVars_57));
          MR_hl_field(2, base, 3) = (MR_Box) ((MR_Unsigned) (BI_58));
          MR_hl_field(2, base, 4) = ((MR_Box) (UC_59));
          MR_hl_field(2, base, 5) = ((MR_Box) (SymName_60));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word ArgVars_256 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));

            switch (MR_tag((MR_Word) GenericCall_63)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word PredVar_67 = ((MR_Word) ((MR_hl_field(0, GenericCall_63, (MR_Integer) 0))));
                  MR_Word Purity_68 = ((((MR_Unsigned) ((MR_hl_field(0, GenericCall_63, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
                  MR_Word GenericCallId_71;

                  hlds__hlds_goal__generic_call_to_id_2_p_0(GenericCall_63, &GenericCallId_71);
                  check_hlds__typecheck_clauses__typecheck_higher_order_call_9_p_0(GenericCallId_71, Context_15, PredVar_67, Purity_68, ArgVars_256, STATE_VARIABLE_TypeAssignSet_0_115, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_0_117, STATE_VARIABLE_Info_118);
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_clauses.typecheck_goal_expr\'/7", (MR_String) "unexpected class method call");
                  return;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String EventName_76 = ((MR_String) ((MR_hl_field(2, GenericCall_63, (MR_Integer) 0))));

                  check_hlds__typecheck_clauses__typecheck_event_call_7_p_0(Context_15, EventName_76, ArgVars_256, STATE_VARIABLE_TypeAssignSet_0_115, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_0_117, STATE_VARIABLE_Info_118);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word CastType_77 = ((MR_Unsigned) ((MR_hl_field(3, GenericCall_63, (MR_Integer) 0))) & (MR_Integer) 7);

                  switch (CastType_77) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 2:
                      {
                        *STATE_VARIABLE_TypeAssignSet_116 = STATE_VARIABLE_TypeAssignSet_0_115;
                        *STATE_VARIABLE_Info_118 = STATE_VARIABLE_Info_0_117;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        *STATE_VARIABLE_TypeAssignSet_116 = STATE_VARIABLE_TypeAssignSet_0_115;
                        *STATE_VARIABLE_Info_118 = STATE_VARIABLE_Info_0_117;
                      }
                      break;
                    case (MR_Integer) 4:
                      check_hlds__typecheck_clauses__typecheck_coerce_6_p_0(Context_15, ArgVars_256, STATE_VARIABLE_TypeAssignSet_0_115, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_0_117, STATE_VARIABLE_Info_118);
                      break;
                    case (MR_Integer) 0:
                      {
                        *STATE_VARIABLE_TypeAssignSet_116 = STATE_VARIABLE_TypeAssignSet_0_115;
                        *STATE_VARIABLE_Info_118 = STATE_VARIABLE_Info_0_117;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        *STATE_VARIABLE_TypeAssignSet_116 = STATE_VARIABLE_TypeAssignSet_0_115;
                        *STATE_VARIABLE_Info_118 = STATE_VARIABLE_Info_0_117;
                      }
                      break;
                  }
                }
                break;
            }
            *GoalExpr_9 = GoalExpr0_8;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Args_86 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 4))));
            MR_Word ArgVectorKind_90;
            MR_Word STATE_VARIABLE_TypeAssignSet_196_196;
            MR_Word STATE_VARIABLE_Info_197_197;
            MR_Word ArgVars_258;
            MR_Word GoalId_259;
            MR_Word PredId_260 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));

            {
              ArgVectorKind_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ArgVectorKind_90, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, ArgVectorKind_90, 1) = ((MR_Box) (PredId_260));
            }
            ArgVars_258 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[1]), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_4[6]), Args_86);
            GoalId_259 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_10);
            check_hlds__typecheck_clauses__typecheck_call_pred_id_9_p_0(ArgVectorKind_90, Context_15, GoalId_259, PredId_260, ArgVars_258, STATE_VARIABLE_TypeAssignSet_0_115, &STATE_VARIABLE_TypeAssignSet_196_196, STATE_VARIABLE_Info_0_117, &STATE_VARIABLE_Info_197_197);
            check_hlds__typeclasses__perform_context_reduction_5_p_0(Context_15, STATE_VARIABLE_TypeAssignSet_196_196, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_197_197, STATE_VARIABLE_Info_118);
            *GoalExpr_9 = GoalExpr0_8;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_16 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word SubGoals0_17 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
            MR_Word SubGoals_19;

            check_hlds__typecheck_clauses__typecheck_goal_list_7_p_0(SubGoals0_17, &SubGoals_19, Context_15, STATE_VARIABLE_TypeAssignSet_0_115, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_0_117, STATE_VARIABLE_Info_118);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (ConjType_16));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoals_19));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubGoals0_248 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word SubGoals_249;

            check_hlds__typecheck_clauses__typecheck_goal_list_7_p_0(SubGoals0_248, &SubGoals_249, Context_15, STATE_VARIABLE_TypeAssignSet_0_115, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_0_117, STATE_VARIABLE_Info_118);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (SubGoals_249));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word SwitchVar_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word CanFail_21 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 3))));
            MR_Word Cases_23;

            check_hlds__typecheck_clauses__typecheck_case_list_7_p_0(Cases0_22, &Cases_23, Context_15, STATE_VARIABLE_TypeAssignSet_0_115, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_0_117, STATE_VARIABLE_Info_118);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (SwitchVar_20));
              MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (CanFail_21));
              MR_hl_field(3, base, 3) = ((MR_Box) (Cases_23));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_33 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word STATE_VARIABLE_TypeAssignSet_160_160;
            MR_Word STATE_VARIABLE_Info_161_161;
            MR_Word SubGoal0_254 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
            MR_Word SubGoal_255;

            check_hlds__typecheck_clauses__typecheck_goal_7_p_0(SubGoal0_254, &SubGoal_255, Context_15, STATE_VARIABLE_TypeAssignSet_0_115, &STATE_VARIABLE_TypeAssignSet_160_160, STATE_VARIABLE_Info_0_117, &STATE_VARIABLE_Info_161_161);
            switch (MR_tag((MR_Word) Reason_33)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Vars_251 = ((MR_Word) ((MR_hl_field(0, Reason_33, (MR_Integer) 0))));

                  check_hlds__typecheck_clauses__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 4U), Context_15, Vars_251, STATE_VARIABLE_TypeAssignSet_160_160, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_161_161, STATE_VARIABLE_Info_118);
                }
                break;
              case (MR_Integer) 1:
                {
                  *STATE_VARIABLE_TypeAssignSet_116 = STATE_VARIABLE_TypeAssignSet_160_160;
                  *STATE_VARIABLE_Info_118 = STATE_VARIABLE_Info_161_161;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Vars_289 = ((MR_Word) ((MR_hl_field(2, Reason_33, (MR_Integer) 0))));

                  check_hlds__typecheck_clauses__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 8U), Context_15, Vars_289, STATE_VARIABLE_TypeAssignSet_160_160, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_161_161, STATE_VARIABLE_Info_118);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason_33, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      *STATE_VARIABLE_TypeAssignSet_116 = STATE_VARIABLE_TypeAssignSet_160_160;
                      *STATE_VARIABLE_Info_118 = STATE_VARIABLE_Info_161_161;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      *STATE_VARIABLE_TypeAssignSet_116 = STATE_VARIABLE_TypeAssignSet_160_160;
                      *STATE_VARIABLE_Info_118 = STATE_VARIABLE_Info_161_161;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(3, Reason_33, (MR_Integer) 1))));
                      MR_Word Vars_291;

                      {
                        Vars_291 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Vars_291, 0) = ((MR_Box) (Var_37));
                        MR_hl_field(1, Vars_291, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      check_hlds__typecheck_clauses__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 12U), Context_15, Vars_291, STATE_VARIABLE_TypeAssignSet_160_160, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_161_161, STATE_VARIABLE_Info_118);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word Var_250 = ((MR_Word) ((MR_hl_field(3, Reason_33, (MR_Integer) 1))));
                      MR_Word Vars_293;

                      {
                        Vars_293 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Vars_293, 0) = ((MR_Box) (Var_250));
                        MR_hl_field(1, Vars_293, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      check_hlds__typecheck_clauses__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 16U), Context_15, Vars_293, STATE_VARIABLE_TypeAssignSet_160_160, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_161_161, STATE_VARIABLE_Info_118);
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      *STATE_VARIABLE_TypeAssignSet_116 = STATE_VARIABLE_TypeAssignSet_160_160;
                      *STATE_VARIABLE_Info_118 = STATE_VARIABLE_Info_161_161;
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      *STATE_VARIABLE_TypeAssignSet_116 = STATE_VARIABLE_TypeAssignSet_160_160;
                      *STATE_VARIABLE_Info_118 = STATE_VARIABLE_Info_161_161;
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      *STATE_VARIABLE_TypeAssignSet_116 = STATE_VARIABLE_TypeAssignSet_160_160;
                      *STATE_VARIABLE_Info_118 = STATE_VARIABLE_Info_161_161;
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      *STATE_VARIABLE_TypeAssignSet_116 = STATE_VARIABLE_TypeAssignSet_160_160;
                      *STATE_VARIABLE_Info_118 = STATE_VARIABLE_Info_161_161;
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      MR_Word LCVar_39 = ((MR_Word) ((MR_hl_field(3, Reason_33, (MR_Integer) 1))));
                      MR_Word LCSVar_40 = ((MR_Word) ((MR_hl_field(3, Reason_33, (MR_Integer) 2))));
                      MR_Word Var_164;
                      MR_Word Vars_287;

                      {
                        Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_164, 0) = ((MR_Box) (LCSVar_40));
                        MR_hl_field(1, Var_164, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Vars_287 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Vars_287, 0) = ((MR_Box) (LCVar_39));
                        MR_hl_field(1, Vars_287, 1) = ((MR_Box) (Var_164));
                      }
                      check_hlds__typecheck_clauses__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 20U), Context_15, Vars_287, STATE_VARIABLE_TypeAssignSet_160_160, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_161_161, STATE_VARIABLE_Info_118);
                    }
                    break;
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Reason_33));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_255));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word Cond0_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
            MR_Word Then0_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 3))));
            MR_Word Else0_27 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 4))));
            MR_Word Cond_28;
            MR_Word Then_29;
            MR_Word Else_30;
            MR_Word STATE_VARIABLE_TypeAssignSet_137_137;
            MR_Word STATE_VARIABLE_Info_138_138;
            MR_Word STATE_VARIABLE_TypeAssignSet_142_142;
            MR_Word STATE_VARIABLE_Info_143_143;
            MR_Word STATE_VARIABLE_TypeAssignSet_147_147;
            MR_Word STATE_VARIABLE_Info_148_148;

            check_hlds__typecheck_clauses__typecheck_goal_7_p_0(Cond0_25, &Cond_28, Context_15, STATE_VARIABLE_TypeAssignSet_0_115, &STATE_VARIABLE_TypeAssignSet_137_137, STATE_VARIABLE_Info_0_117, &STATE_VARIABLE_Info_138_138);
            check_hlds__typecheck_clauses__typecheck_goal_7_p_0(Then0_26, &Then_29, Context_15, STATE_VARIABLE_TypeAssignSet_137_137, &STATE_VARIABLE_TypeAssignSet_142_142, STATE_VARIABLE_Info_138_138, &STATE_VARIABLE_Info_143_143);
            check_hlds__typecheck_clauses__typecheck_goal_7_p_0(Else0_27, &Else_30, Context_15, STATE_VARIABLE_TypeAssignSet_142_142, &STATE_VARIABLE_TypeAssignSet_147_147, STATE_VARIABLE_Info_143_143, &STATE_VARIABLE_Info_148_148);
            check_hlds__typecheck_clauses__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 0U), Context_15, Vars_24, STATE_VARIABLE_TypeAssignSet_147_147, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_148_148, STATE_VARIABLE_Info_118);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Vars_24));
              MR_hl_field(3, base, 2) = ((MR_Box) (Cond_28));
              MR_hl_field(3, base, 3) = ((MR_Box) (Then_29));
              MR_hl_field(3, base, 4) = ((MR_Box) (Else_30));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_91 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word ShortHand_93;

            switch (MR_tag((MR_Word) ShortHand0_91)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word LHS0_92 = ((MR_Word) ((MR_hl_field(0, ShortHand0_91, (MR_Integer) 0))));
                  MR_Word STATE_VARIABLE_TypeAssignSet_203_203;
                  MR_Word STATE_VARIABLE_Info_204_204;
                  MR_Word LHS_261;
                  MR_Word RHS0_262 = ((MR_Word) ((MR_hl_field(0, ShortHand0_91, (MR_Integer) 1))));
                  MR_Word RHS_263;

                  check_hlds__typecheck_clauses__typecheck_goal_7_p_0(LHS0_92, &LHS_261, Context_15, STATE_VARIABLE_TypeAssignSet_0_115, &STATE_VARIABLE_TypeAssignSet_203_203, STATE_VARIABLE_Info_0_117, &STATE_VARIABLE_Info_204_204);
                  check_hlds__typecheck_clauses__typecheck_goal_7_p_0(RHS0_262, &RHS_263, Context_15, STATE_VARIABLE_TypeAssignSet_203_203, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_204_204, STATE_VARIABLE_Info_118);
                  {
                    ShortHand_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, ShortHand_93, 0) = ((MR_Box) (LHS_261));
                    MR_hl_field(0, ShortHand_93, 1) = ((MR_Box) (RHS_263));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_94 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_91, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_95 = ((MR_Word) ((MR_hl_field(1, ShortHand0_91, (MR_Integer) 1))));
                  MR_Word Inner_96 = ((MR_Word) ((MR_hl_field(1, ShortHand0_91, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_97 = ((MR_Word) ((MR_hl_field(1, ShortHand0_91, (MR_Integer) 3))));
                  MR_Word MainGoal0_98 = ((MR_Word) ((MR_hl_field(1, ShortHand0_91, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_99 = ((MR_Word) ((MR_hl_field(1, ShortHand0_91, (MR_Integer) 5))));
                  MR_Word MainGoal_103;
                  MR_Word OrElseGoals_104;
                  MR_Word OuterDI_106;
                  MR_Word OuterUO_107;
                  MR_Word InnerVars_108;
                  MR_Word STATE_VARIABLE_TypeAssignSet_210_210;
                  MR_Word STATE_VARIABLE_Info_211_211;
                  MR_Word STATE_VARIABLE_TypeAssignSet_212_212;
                  MR_Word STATE_VARIABLE_Info_213_213;
                  MR_Word STATE_VARIABLE_TypeAssignSet_214_214;
                  MR_Word STATE_VARIABLE_Info_215_215;
                  MR_Word Var_216;
                  MR_Word STATE_VARIABLE_TypeAssignSet_217_217;
                  MR_Word STATE_VARIABLE_Info_218_218;
                  MR_Word Var_219;
                  MR_Word Var_222;
                  MR_Word Var_225;
                  MR_Word I_294;
                  MR_Word O_295;
                  MR_Word Interfaces_296 = ((MR_Word) ((MR_hl_field(1, ShortHand0_91, (MR_Integer) 6))));
                  MR_Word Var_298;
                  MR_Word Var_299;
                  MR_Box conv4_STATE_VARIABLE_TypeAssignSet_116;
                  MR_Box conv3_STATE_VARIABLE_Info_118;

                  if ((MaybeOutputVars_97 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    STATE_VARIABLE_TypeAssignSet_210_210 = STATE_VARIABLE_TypeAssignSet_0_115;
                    STATE_VARIABLE_Info_211_211 = STATE_VARIABLE_Info_0_117;
                  }
                  else
                  {
                    MR_Word OutputVars_101 = ((MR_Word) ((MR_hl_field(1, MaybeOutputVars_97, (MR_Integer) 0))));

                    check_hlds__typecheck_clauses__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 28U), Context_15, OutputVars_101, STATE_VARIABLE_TypeAssignSet_0_115, &STATE_VARIABLE_TypeAssignSet_210_210, STATE_VARIABLE_Info_0_117, &STATE_VARIABLE_Info_211_211);
                  }
                  check_hlds__typecheck_clauses__typecheck_goal_7_p_0(MainGoal0_98, &MainGoal_103, Context_15, STATE_VARIABLE_TypeAssignSet_210_210, &STATE_VARIABLE_TypeAssignSet_212_212, STATE_VARIABLE_Info_211_211, &STATE_VARIABLE_Info_213_213);
                  check_hlds__typecheck_clauses__typecheck_goal_list_7_p_0(OrElseGoals0_99, &OrElseGoals_104, Context_15, STATE_VARIABLE_TypeAssignSet_212_212, &STATE_VARIABLE_TypeAssignSet_214_214, STATE_VARIABLE_Info_213_213, &STATE_VARIABLE_Info_215_215);
                  OuterDI_106 = ((MR_Word) ((MR_hl_field(0, Outer_95, (MR_Integer) 0))));
                  OuterUO_107 = ((MR_Word) ((MR_hl_field(0, Outer_95, (MR_Integer) 1))));
                  {
                    Var_219 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_219, 0) = ((MR_Box) (OuterUO_107));
                    MR_hl_field(1, Var_219, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_216 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_216, 0) = ((MR_Box) (OuterDI_106));
                    MR_hl_field(1, Var_216, 1) = ((MR_Box) (Var_219));
                  }
                  check_hlds__typecheck_clauses__ensure_vars_have_a_single_type_7_p_0((MR_Word) ((MR_Unsigned) 32U), Context_15, Var_216, STATE_VARIABLE_TypeAssignSet_214_214, &STATE_VARIABLE_TypeAssignSet_217_217, STATE_VARIABLE_Info_215_215, &STATE_VARIABLE_Info_218_218);
                  I_294 = ((MR_Word) ((MR_hl_field(0, Inner_96, (MR_Integer) 0))));
                  O_295 = ((MR_Word) ((MR_hl_field(0, Inner_96, (MR_Integer) 1))));
                  Var_299 = check_hlds__typecheck_clauses__atomic_interface_list_to_var_list_1_f_0(Interfaces_296);
                  {
                    Var_298 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_298, 0) = ((MR_Box) (O_295));
                    MR_hl_field(1, Var_298, 1) = ((MR_Box) (Var_299));
                  }
                  {
                    InnerVars_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, InnerVars_108, 0) = ((MR_Box) (I_294));
                    MR_hl_field(1, InnerVars_108, 1) = ((MR_Box) (Var_298));
                  }
                  {
                    Var_222 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_222, 0) = ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_10[0]));
                    MR_hl_field(0, Var_222, 1) = ((MR_Box) (check_hlds__typecheck_clauses__typecheck_goal_expr_7_p_0_2));
                    MR_hl_field(0, Var_222, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(0, Var_222, 3) = ((MR_Box) (Context_15));
                  }
                  mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[1]), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[2]), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), Var_222, InnerVars_108, ((MR_Box) (STATE_VARIABLE_TypeAssignSet_217_217)), &conv4_STATE_VARIABLE_TypeAssignSet_116, ((MR_Box) (STATE_VARIABLE_Info_218_218)), &conv3_STATE_VARIABLE_Info_118);
                  *STATE_VARIABLE_TypeAssignSet_116 = ((MR_Word) (conv4_STATE_VARIABLE_TypeAssignSet_116));
                  *STATE_VARIABLE_Info_118 = ((MR_Word) (conv3_STATE_VARIABLE_Info_118));
                  {
                    Var_225 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_225, 0) = ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_5[3]));
                    MR_hl_field(0, Var_225, 1) = ((MR_Box) (check_hlds__typecheck_clauses__typecheck_goal_expr_7_p_0_3));
                    MR_hl_field(0, Var_225, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(0, Var_225, 3) = ((MR_Box) (GoalType_94));
                    MR_hl_field(0, Var_225, 4) = ((MR_Box) ((MR_Integer) 0));
                  }
                  mercury__require__expect_3_p_0(Var_225, (MR_String) "predicate \140check_hlds.typecheck_clauses.typecheck_goal_expr\'/7", (MR_String) "GoalType != unknown_atomic_goal_type");
                  {
                    ShortHand_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_93, 0) = (MR_Box) ((MR_Unsigned) (GoalType_94));
                    MR_hl_field(1, ShortHand_93, 1) = ((MR_Box) (Outer_95));
                    MR_hl_field(1, ShortHand_93, 2) = ((MR_Box) (Inner_96));
                    MR_hl_field(1, ShortHand_93, 3) = ((MR_Box) (MaybeOutputVars_97));
                    MR_hl_field(1, ShortHand_93, 4) = ((MR_Box) (MainGoal_103));
                    MR_hl_field(1, ShortHand_93, 5) = ((MR_Box) (OrElseGoals_104));
                    MR_hl_field(1, ShortHand_93, 6) = ((MR_Box) (Interfaces_296));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_109 = ((MR_Word) ((MR_hl_field(2, ShortHand0_91, (MR_Integer) 0))));
                  MR_Word ResultVar_110 = ((MR_Word) ((MR_hl_field(2, ShortHand0_91, (MR_Integer) 1))));
                  MR_Word STATE_VARIABLE_TypeAssignSet_232_232;
                  MR_Word STATE_VARIABLE_Info_233_233;
                  MR_Word SubGoal0_266 = ((MR_Word) ((MR_hl_field(2, ShortHand0_91, (MR_Integer) 2))));
                  MR_Word SubGoal_267;

                  check_hlds__typecheck_clauses__typecheck_goal_7_p_0(SubGoal0_266, &SubGoal_267, Context_15, STATE_VARIABLE_TypeAssignSet_0_115, &STATE_VARIABLE_TypeAssignSet_232_232, STATE_VARIABLE_Info_0_117, &STATE_VARIABLE_Info_233_233);
                  if ((MaybeIO_109 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    *STATE_VARIABLE_TypeAssignSet_116 = STATE_VARIABLE_TypeAssignSet_232_232;
                    *STATE_VARIABLE_Info_118 = STATE_VARIABLE_Info_233_233;
                  }
                  else
                  {
                    MR_Word InitialIO_111;
                    MR_Word FinalIO_112;
                    MR_Word Var_234 = ((MR_Word) ((MR_hl_field(1, MaybeIO_109, (MR_Integer) 0))));
                    MR_Word Var_235;
                    MR_Word STATE_VARIABLE_TypeAssignSet_236_236;
                    MR_Word STATE_VARIABLE_Info_237_237;
                    MR_Word Var_238;
                    MR_Word Var_242;
                    MR_Word STATE_VARIABLE_TypeAssignSet_243_243;
                    MR_Word STATE_VARIABLE_Info_244_244;
                    MR_Word Var_245;

                    InitialIO_111 = ((MR_Word) ((MR_hl_field(0, Var_234, (MR_Integer) 0))));
                    FinalIO_112 = ((MR_Word) ((MR_hl_field(0, Var_234, (MR_Integer) 1))));
                    {
                      Var_238 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_238, 0) = ((MR_Box) (FinalIO_112));
                      MR_hl_field(1, Var_238, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_235 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_235, 0) = ((MR_Box) (InitialIO_111));
                      MR_hl_field(1, Var_235, 1) = ((MR_Box) (Var_238));
                    }
                    check_hlds__typecheck_clauses__ensure_vars_have_a_type_7_p_0((MR_Word) ((MR_Unsigned) 24U), Context_15, Var_235, STATE_VARIABLE_TypeAssignSet_232_232, &STATE_VARIABLE_TypeAssignSet_236_236, STATE_VARIABLE_Info_233_233, &STATE_VARIABLE_Info_237_237);
                    Var_242 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
                    check_hlds__typecheck_clauses__typecheck_var_has_type_8_p_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_clauses_scalar_common_1[9])), Context_15, InitialIO_111, Var_242, STATE_VARIABLE_TypeAssignSet_236_236, &STATE_VARIABLE_TypeAssignSet_243_243, STATE_VARIABLE_Info_237_237, &STATE_VARIABLE_Info_244_244);
                    Var_245 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
                    check_hlds__typecheck_clauses__typecheck_var_has_type_8_p_0((MR_Word) (MR_mkword(1, &check_hlds__typecheck_clauses_scalar_common_1[10])), Context_15, FinalIO_112, Var_245, STATE_VARIABLE_TypeAssignSet_243_243, STATE_VARIABLE_TypeAssignSet_116, STATE_VARIABLE_Info_244_244, STATE_VARIABLE_Info_118);
                  }
                  {
                    ShortHand_93 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_93, 0) = ((MR_Box) (MaybeIO_109));
                    MR_hl_field(2, ShortHand_93, 1) = ((MR_Box) (ResultVar_110));
                    MR_hl_field(2, ShortHand_93, 2) = ((MR_Box) (SubGoal_267));
                  }
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_9 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, base, 1) = ((MR_Box) (ShortHand_93));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_goal_7_p_0(
  MR_Word Goal0_8,
  MR_Word * Goal_9,
  MR_Word EnclosingContext_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_28,
  MR_Word * STATE_VARIABLE_TypeAssignSet_29,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_8, (MR_Integer) 0))));
  MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(0, Goal0_8, (MR_Integer) 1))));
  MR_Word Context0_15;
  MR_Word Context_16;
  MR_Word GoalInfo_17;
  MR_Integer NumTypeAssignSets_18;
  MR_Integer WarnLimit_19;
  MR_Word GoalExpr_24;

  Context0_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_14);
  succeeded = mercury__term_context__is_dummy_context_1_p_0(Context0_15);
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

      ErrorSpec_23 = check_hlds__typecheck_error_overload__report_error_too_much_overloading_3_f_0(ClauseContext_21, Context_16, OverloadedSymbolMap_22);
      {
        Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_32, 0) = ((MR_Box) (ErrorSpec_23));
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

        WarnSpec_26 = check_hlds__typecheck_error_overload__report_warning_too_much_overloading_3_f_0(ClauseContext_21, Context_16, OverloadedSymbolMap_22);
        {
          Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_34, 0) = ((MR_Box) (WarnSpec_26));
        }
        check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(Var_34, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_35_35);
      }
      else
        STATE_VARIABLE_Info_35_35 = STATE_VARIABLE_Info_0_30;
      check_hlds__typecheck_clauses__typecheck_goal_expr_7_p_0(GoalExpr0_13, &GoalExpr_24, GoalInfo_17, STATE_VARIABLE_TypeAssignSet_0_28, STATE_VARIABLE_TypeAssignSet_29, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_31);
    }
  }
  else
    check_hlds__typecheck_clauses__typecheck_goal_expr_7_p_0(GoalExpr0_13, &GoalExpr_24, GoalInfo_17, STATE_VARIABLE_TypeAssignSet_0_28, STATE_VARIABLE_TypeAssignSet_29, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_24));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_17));
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_coerce_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_TypeAssignSet_35;
  MR_Word conv0_STATE_VARIABLE_Info_37;

  check_hlds__typecheck_clauses__typecheck_coerce_2_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TypeAssignSet_35, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_37);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TypeAssignSet_35));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_37));
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_coerce_6_p_0(
  MR_Word Context_7,
  MR_Word Args_8,
  MR_Word TypeAssignSet0_9,
  MR_Word * TypeAssignSet_10,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_bool succeeded = (Args_8 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word FromVar_14;
  MR_Word ToVar_15;
  MR_Word TypeAssignSet1_16;
  MR_Word Var_25;
  MR_Word FromVar0_12;
  MR_Word ToVar0_13;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Box conv3_TypeAssignSet1_16;
  MR_Box conv2_STATE_VARIABLE_Info_20;

  if (succeeded)
  {
    FromVar0_12 = ((MR_Word) ((MR_hl_field(1, Args_8, (MR_Integer) 0))));
    Var_21 = ((MR_Word) ((MR_hl_field(1, Args_8, (MR_Integer) 1))));
    succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ToVar0_13 = ((MR_Word) ((MR_hl_field(1, Var_21, (MR_Integer) 0))));
      Var_22 = ((MR_Word) ((MR_hl_field(1, Var_21, (MR_Integer) 1))));
      succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (succeeded)
  {
    FromVar_14 = FromVar0_12;
    ToVar_15 = ToVar0_13;
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_clauses.typecheck_coerce\'/6", (MR_String) "coerce requires two arguments");
      return;
    }
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_8[1]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (check_hlds__typecheck_clauses__typecheck_coerce_6_p_0_1));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (Context_7));
    MR_hl_field(0, Var_25, 4) = ((MR_Box) (FromVar_14));
    MR_hl_field(0, Var_25, 5) = ((MR_Box) (ToVar_15));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[2]), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), Var_25, TypeAssignSet0_9, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_TypeAssignSet1_16, ((MR_Box) (STATE_VARIABLE_Info_0_19)), &conv2_STATE_VARIABLE_Info_20);
  TypeAssignSet1_16 = ((MR_Word) (conv3_TypeAssignSet1_16));
  *STATE_VARIABLE_Info_20 = ((MR_Word) (conv2_STATE_VARIABLE_Info_20));
  succeeded = (TypeAssignSet1_16 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    succeeded = (TypeAssignSet0_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
  }
  if (succeeded)
    *TypeAssignSet_10 = TypeAssignSet0_9;
  else
    *TypeAssignSet_10 = TypeAssignSet1_16;
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_lambda_var_has_type_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Purity_2,
  MR_Word PredOrFunc_3,
  MR_Word Var_4,
  MR_Word ArgVars_5,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_6,
  MR_Word * STATE_VARIABLE_TypeAssignSet_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TypeAssignSet_7 = STATE_VARIABLE_TypeAssignSet_0_6;
    else
    {
      MR_Word TypeAssign0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeAssignSet0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgVarTypes_22;
      MR_Word TypeAssign1_23;
      MR_Word LambdaType_24;
      MR_Word STATE_VARIABLE_TypeAssignSet_27_27;
      MR_Word VarTypes0_28;
      MR_Word MaybeOldVarType_29;
      MR_Word VarTypes_30;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_6;

      check_hlds__typecheck_clauses__type_assign_get_types_of_vars_4_p_0(ArgVars_5, &ArgVarTypes_22, TypeAssign0_15, &TypeAssign1_23);
      parse_tree__prog_type_construct__construct_higher_order_type_4_p_0(Purity_2, PredOrFunc_3, ArgVarTypes_22, &LambdaType_24);
      check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign1_23, &VarTypes0_28);
      parse_tree__vartypes__search_insert_var_type_5_p_0(Var_4, LambdaType_24, &MaybeOldVarType_29, VarTypes0_28, &VarTypes_30);
      if ((MaybeOldVarType_29 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeAssign_33;

        check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_30, TypeAssign1_23, &TypeAssign_33);
        {
          STATE_VARIABLE_TypeAssignSet_27_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_27_27, 0) = ((MR_Box) (TypeAssign_33));
          MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_27_27, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_6));
        }
      }
      else
      {
        MR_Word OldVarType_31 = ((MR_Word) ((MR_hl_field(1, MaybeOldVarType_29, (MR_Integer) 0))));
        MR_Word TypeAssign1_32;
        MR_Word ExistQTVars_34;
        MR_Word TypeBindings0_35;
        MR_Word TypeBindings_36;

        check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign1_23, &ExistQTVars_34);
        check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign1_23, &TypeBindings0_35);
        succeeded = parse_tree__prog_type_unify__type_unify_5_p_0(OldVarType_31, LambdaType_24, ExistQTVars_34, TypeBindings0_35, &TypeBindings_36);
        if (succeeded)
        {
          check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_36, TypeAssign1_23, &TypeAssign1_32);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          {
            STATE_VARIABLE_TypeAssignSet_27_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_27_27, 0) = ((MR_Box) (TypeAssign1_32));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_27_27, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_6));
          }
        else
          STATE_VARIABLE_TypeAssignSet_27_27 = STATE_VARIABLE_TypeAssignSet_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TypeAssignSet0_16;
      next_value_of_STATE_VARIABLE_TypeAssignSet_0_6 = STATE_VARIABLE_TypeAssignSet_27_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeAssignSet_0_6 = next_value_of_STATE_VARIABLE_TypeAssignSet_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__type_assign_get_types_of_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_TypeAssign_0_3,
  MR_Word * STATE_VARIABLE_TypeAssign_4)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_TypeAssign_4 = STATE_VARIABLE_TypeAssign_0_3;
  }
  else
  {
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Vars_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Type_10;
    MR_Word Types_11;
    MR_Word VarTypes0_13;
    MR_Word STATE_VARIABLE_TypeAssign_17_17;
    MR_Word VarType_14;

    check_hlds__type_assign__type_assign_get_var_types_2_p_0(STATE_VARIABLE_TypeAssign_0_3, &VarTypes0_13);
    succeeded = parse_tree__vartypes__search_var_type_3_p_0(VarTypes0_13, Var_8, &VarType_14);
    if (succeeded)
    {
      Type_10 = VarType_14;
      STATE_VARIABLE_TypeAssign_17_17 = STATE_VARIABLE_TypeAssign_0_3;
    }
    else
    {
      MR_Word VarTypes0_18;
      MR_Word TypeVarSet0_19;
      MR_Word TypeVar_20;
      MR_Word TypeVarSet_21;
      MR_Word VarTypes1_22;
      MR_Word STATE_VARIABLE_TypeAssign_15_23;

      check_hlds__type_assign__type_assign_get_var_types_2_p_0(STATE_VARIABLE_TypeAssign_0_3, &VarTypes0_18);
      check_hlds__type_assign__type_assign_get_typevarset_2_p_0(STATE_VARIABLE_TypeAssign_0_3, &TypeVarSet0_19);
      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVar_20, TypeVarSet0_19, &TypeVarSet_21);
      check_hlds__type_assign__type_assign_set_typevarset_3_p_0(TypeVarSet_21, STATE_VARIABLE_TypeAssign_0_3, &STATE_VARIABLE_TypeAssign_15_23);
      {
        Type_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Type_10, 0) = ((MR_Box) (TypeVar_20));
        MR_hl_field(0, Type_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      parse_tree__vartypes__add_var_type_4_p_0(Var_8, Type_10, VarTypes0_18, &VarTypes1_22);
      check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes1_22, STATE_VARIABLE_TypeAssign_15_23, &STATE_VARIABLE_TypeAssign_17_17);
    }
    check_hlds__typecheck_clauses__type_assign_get_types_of_vars_4_p_0(Vars_9, &Types_11, STATE_VARIABLE_TypeAssign_17_17, STATE_VARIABLE_TypeAssign_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Type_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (Types_11));
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__type_assigns_unify_var_var_5_p_0(
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
      MR_Word TypeAssign_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeAssigns_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TypeAssignSet_18_18;
      MR_Word VarTypes0_19;
      MR_Word TypeX_20;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;

      check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign_11, &VarTypes0_19);
      succeeded = parse_tree__vartypes__search_var_type_3_p_0(VarTypes0_19, X_2, &TypeX_20);
      if (succeeded)
      {
        MR_Word MaybeTypeY_21;
        MR_Word VarTypes_22;

        parse_tree__vartypes__search_insert_var_type_5_p_0(Y_3, TypeX_20, &MaybeTypeY_21, VarTypes0_19, &VarTypes_22);
        if ((MaybeTypeY_21 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word TypeAssign_25;

          check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_22, TypeAssign_11, &TypeAssign_25);
          {
            STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (TypeAssign_25));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_4));
          }
        }
        else
        {
          MR_Word TypeY_23 = ((MR_Word) ((MR_hl_field(1, MaybeTypeY_21, (MR_Integer) 0))));
          MR_Word TypeAssign3_24;
          MR_Word ExistQTVars_40;
          MR_Word TypeBindings0_41;
          MR_Word TypeBindings_42;

          check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign_11, &ExistQTVars_40);
          check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_11, &TypeBindings0_41);
          succeeded = parse_tree__prog_type_unify__type_unify_5_p_0(TypeX_20, TypeY_23, ExistQTVars_40, TypeBindings0_41, &TypeBindings_42);
          if (succeeded)
          {
            check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_42, TypeAssign_11, &TypeAssign3_24);
            succeeded = MR_TRUE;
          }
          if (succeeded)
            {
              STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (TypeAssign3_24));
              MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_4));
            }
          else
            STATE_VARIABLE_TypeAssignSet_18_18 = STATE_VARIABLE_TypeAssignSet_0_4;
        }
      }
      else
      {
        MR_Word TypeY_37;

        succeeded = parse_tree__vartypes__search_var_type_3_p_0(VarTypes0_19, Y_3, &TypeY_37);
        if (succeeded)
        {
          MR_Word VarTypes_33;
          MR_Word TypeAssign_34;

          parse_tree__vartypes__add_var_type_4_p_0(X_2, TypeY_37, VarTypes0_19, &VarTypes_33);
          check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_33, TypeAssign_11, &TypeAssign_34);
          {
            STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (TypeAssign_34));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_4));
          }
        }
        else
        {
          MR_Word TypeVarSet0_26;
          MR_Word TypeVar_27;
          MR_Word TypeVarSet_28;
          MR_Word TypeAssign1_29;
          MR_Word Type_30;
          MR_Word VarTypes1_31;
          MR_Word VarTypes_35;
          MR_Word TypeAssign_36;

          check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign_11, &TypeVarSet0_26);
          mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVar_27, TypeVarSet0_26, &TypeVarSet_28);
          check_hlds__type_assign__type_assign_set_typevarset_3_p_0(TypeVarSet_28, TypeAssign_11, &TypeAssign1_29);
          {
            Type_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Type_30, 0) = ((MR_Box) (TypeVar_27));
            MR_hl_field(0, Type_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          parse_tree__vartypes__add_var_type_4_p_0(X_2, Type_30, VarTypes0_19, &VarTypes1_31);
          succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[1]), ((MR_Box) (X_2)), ((MR_Box) (Y_3)));
          if (succeeded)
            VarTypes_35 = VarTypes1_31;
          else
            parse_tree__vartypes__add_var_type_4_p_0(Y_3, Type_30, VarTypes1_31, &VarTypes_35);
          check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_35, TypeAssign1_29, &TypeAssign_36);
          {
            STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (TypeAssign_36));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_4));
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
check_hlds__typecheck_clauses__typecheck_unify_var_functor_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = check_hlds__type_assign__project_cons_type_info_source_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_unify_var_functor_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeAssignSet_16;

  check_hlds__typecheck_clauses__type_assign_check_functor_type_builtin_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeAssignSet_16);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeAssignSet_16));
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_unify_var_functor_10_p_0(
  MR_Word UnifyContext_11,
  MR_Word Context_12,
  MR_Word Var_13,
  MR_Word ConsId_14,
  MR_Word ArgVars_15,
  MR_Word GoalId_16,
  MR_Word TypeAssignSet0_17,
  MR_Word * TypeAssignSet_18,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54)
{
  MR_bool succeeded;
  MR_Word ConsType_20;
  MR_String BuiltinTypeName_21;
  MR_Word BuiltinType_155;

  switch (MR_tag((MR_Word) ConsId_14)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsId_14, (MR_Integer) 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 5:
          {
            MR_Word IntConst_154 = ((MR_Word) ((MR_hl_field(3, ConsId_14, (MR_Integer) 1))));
            MR_Word Var_158;

            Var_158 = parse_tree__prog_data__type_of_int_const_1_f_0(IntConst_154);
            {
              BuiltinType_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, BuiltinType_155, 0) = (MR_Box) ((MR_Unsigned) (Var_158));
            }
            BuiltinTypeName_21 = parse_tree__prog_data__type_name_of_int_const_1_f_0(IntConst_154);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 6:
          {
            BuiltinTypeName_21 = (MR_String) "float";
            BuiltinType_155 = (MR_Word) ((MR_Unsigned) 0U);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 8:
          {
            BuiltinTypeName_21 = (MR_String) "string";
            BuiltinType_155 = (MR_Word) ((MR_Unsigned) 4U);
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  if (succeeded)
  {
    {
      ConsType_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, ConsType_20, 0) = ((MR_Box) (BuiltinType_155));
    }
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word TypeAssignSet1_22;
    MR_Word STATE_VARIABLE_Info_57_57;
    MR_Word Var_58;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Box conv1_TypeAssignSet1_22;

    succeeded = ((MR_tag((MR_Word) ConsType_20)) == (MR_Integer) 2);
    if (succeeded)
    {
      Var_55 = ((MR_Word) ((MR_hl_field(2, ConsType_20, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_56 = ((MR_Unsigned) ((MR_hl_field(1, Var_55, (MR_Integer) 0))) & (MR_Integer) 15);
        succeeded = (Var_56 == (MR_Integer) 0);
      }
    }
    if (succeeded)
      check_hlds__typecheck_info__typecheck_info_add_nosuffix_integer_var_3_p_0(Var_13, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_57_57);
    else
      STATE_VARIABLE_Info_57_57 = STATE_VARIABLE_Info_0_53;
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_58, 0) = ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_9[0]));
      MR_hl_field(0, Var_58, 1) = ((MR_Box) (check_hlds__typecheck_clauses__typecheck_unify_var_functor_10_p_0_1));
      MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_58, 3) = ((MR_Box) (ConsType_20));
      MR_hl_field(0, Var_58, 4) = ((MR_Box) (Var_13));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[2]), Var_58, TypeAssignSet0_17, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_TypeAssignSet1_22);
    TypeAssignSet1_22 = ((MR_Word) (conv1_TypeAssignSet1_22));
    if ((TypeAssignSet1_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *TypeAssignSet_18 = TypeAssignSet0_17;
      if ((TypeAssignSet0_17 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_57_57;
      else
      {
        MR_Word ConsTypeVarSet_27;
        MR_Word ConsTypeInfo_28;
        MR_Word ConsIdSpec_29;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_161;
        MR_Word Var_162;

        mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &ConsTypeVarSet_27);
        Var_161 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[6]));
        Var_162 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[7]));
        {
          Var_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_62, 2) = ((MR_Box) (Var_161));
          MR_hl_field(0, Var_62, 3) = ((MR_Box) (Var_162));
        }
        {
          Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_63, 0) = ((MR_Box) (BuiltinTypeName_21));
        }
        {
          ConsTypeInfo_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ConsTypeInfo_28, 0) = ((MR_Box) (ConsTypeVarSet_27));
          MR_hl_field(0, ConsTypeInfo_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, ConsTypeInfo_28, 2) = ((MR_Box) (ConsType_20));
          MR_hl_field(0, ConsTypeInfo_28, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, ConsTypeInfo_28, 4) = ((MR_Box) (Var_62));
          MR_hl_field(0, ConsTypeInfo_28, 5) = ((MR_Box) (Var_63));
        }
        {
          Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_64, 0) = ((MR_Box) (ConsTypeInfo_28));
          MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ConsIdSpec_29 = check_hlds__typecheck_errors__report_error_unify_var_functor_result_8_f_0(STATE_VARIABLE_Info_57_57, UnifyContext_11, Context_12, Var_13, Var_64, ConsId_14, (MR_Integer) 0, TypeAssignSet0_17);
        check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(ConsIdSpec_29, STATE_VARIABLE_Info_57_57, STATE_VARIABLE_Info_54);
      }
    }
    else
    {
      *TypeAssignSet_18 = TypeAssignSet1_22;
      *STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_57_57;
    }
  }
  else
  {
    MR_Integer Arity_30;
    MR_Word ConsTypeInfos_31;
    MR_Word ConsErrors_32;

    mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[1]), ArgVars_15, &Arity_30);
    check_hlds__typecheck_clauses__typecheck_info_get_ctor_list_6_p_0(STATE_VARIABLE_Info_0_53, ConsId_14, Arity_30, GoalId_16, &ConsTypeInfos_31, &ConsErrors_32);
    if ((ConsTypeInfos_31 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ClauseContext_33;
      MR_Word GoalContext_34;
      MR_Word Spec_35;

      check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_53, &ClauseContext_33);
      *TypeAssignSet_18 = TypeAssignSet0_17;
      {
        GoalContext_34 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, GoalContext_34, 0) = ((MR_Box) (UnifyContext_11));
      }
      Spec_35 = check_hlds__typecheck_error_undef__report_error_undef_cons_6_f_0(ClauseContext_33, GoalContext_34, Context_12, ConsErrors_32, ConsId_14, Arity_30);
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_35, STATE_VARIABLE_Info_0_53, STATE_VARIABLE_Info_54);
    }
    else
    {
      MR_Word Var_152 = ((MR_Word) ((MR_hl_field(1, ConsTypeInfos_31, (MR_Integer) 1))));
      MR_Word Var_153 = ((MR_Word) ((MR_hl_field(1, ConsTypeInfos_31, (MR_Integer) 0))));

      if ((Var_152 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ConsTypeAssignSet_42;
        MR_Word ArgsTypeAssignSet_45;
        MR_Word STATE_VARIABLE_Info_77_77;
        MR_Word TypeAssignSet1_82;
        MR_Word STATE_VARIABLE_ConsTypeAssignSet_15_175;

        check_hlds__typecheck_clauses__get_cons_type_assigns_for_cons_defn_4_p_0(Var_153, TypeAssignSet0_17, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_ConsTypeAssignSet_15_175);
        check_hlds__typecheck_clauses__get_cons_type_assigns_for_cons_defns_4_p_0(Var_152, TypeAssignSet0_17, STATE_VARIABLE_ConsTypeAssignSet_15_175, &ConsTypeAssignSet_42);
        succeeded = (ConsTypeAssignSet_42 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (TypeAssignSet0_17 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
        if (succeeded)
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_clauses.typecheck_unify_var_functor\'/10", (MR_String) "undefined cons\?");
            return;
          }
        check_hlds__typecheck_clauses__typecheck_var_functor_types_4_p_0(Var_13, ConsTypeAssignSet_42, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet_45);
        succeeded = (ArgsTypeAssignSet_45 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (ConsTypeAssignSet_42 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          MR_Word ConsIdSpec_80;

          ConsIdSpec_80 = check_hlds__typecheck_errors__report_error_unify_var_functor_result_8_f_0(STATE_VARIABLE_Info_0_53, UnifyContext_11, Context_12, Var_13, ConsTypeInfos_31, ConsId_14, Arity_30, TypeAssignSet0_17);
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(ConsIdSpec_80, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_77_77);
        }
        else
          STATE_VARIABLE_Info_77_77 = STATE_VARIABLE_Info_0_53;
        check_hlds__typecheck_clauses__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(ArgVars_15, ArgsTypeAssignSet_45, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_82);
        if ((TypeAssignSet1_82 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *TypeAssignSet_18 = TypeAssignSet0_17;
          if ((ArgsTypeAssignSet_45 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_77_77;
          else
          {
            MR_Word ArgSpec_52;

            ArgSpec_52 = check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0(STATE_VARIABLE_Info_77_77, UnifyContext_11, Context_12, Var_13, ConsTypeInfos_31, ConsId_14, ArgVars_15, ArgsTypeAssignSet_45);
            check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(ArgSpec_52, STATE_VARIABLE_Info_77_77, STATE_VARIABLE_Info_54);
          }
        }
        else
        {
          *TypeAssignSet_18 = TypeAssignSet1_82;
          *STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_77_77;
        }
      }
      else
      {
        MR_Word Sources_40;
        MR_Word Symbol_41;
        MR_Word ConsTypeAssignSet_132;
        MR_Word ArgsTypeAssignSet_135;
        MR_Word STATE_VARIABLE_Info_72_143;
        MR_Word STATE_VARIABLE_Info_77_148;
        MR_Word TypeAssignSet1_151;
        MR_Word ConsTypeInfo_179;
        MR_Word ConsTypeInfos_180;
        MR_Word STATE_VARIABLE_ConsTypeAssignSet_15_184;

        Sources_40 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), (MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_source_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_4[5]), ConsTypeInfos_31);
        {
          Symbol_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Symbol_41, 0) = ((MR_Box) (ConsId_14));
          MR_hl_field(1, Symbol_41, 1) = ((MR_Box) (Sources_40));
        }
        check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_p_0(Symbol_41, Context_12, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_72_143);
        ConsTypeInfo_179 = ((MR_Word) ((MR_hl_field(1, ConsTypeInfos_31, (MR_Integer) 0))));
        ConsTypeInfos_180 = ((MR_Word) ((MR_hl_field(1, ConsTypeInfos_31, (MR_Integer) 1))));
        check_hlds__typecheck_clauses__get_cons_type_assigns_for_cons_defn_4_p_0(ConsTypeInfo_179, TypeAssignSet0_17, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_ConsTypeAssignSet_15_184);
        check_hlds__typecheck_clauses__get_cons_type_assigns_for_cons_defns_4_p_0(ConsTypeInfos_180, TypeAssignSet0_17, STATE_VARIABLE_ConsTypeAssignSet_15_184, &ConsTypeAssignSet_132);
        succeeded = (ConsTypeAssignSet_132 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (TypeAssignSet0_17 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
        if (succeeded)
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_clauses.typecheck_unify_var_functor\'/10", (MR_String) "undefined cons\?");
            return;
          }
        check_hlds__typecheck_clauses__typecheck_var_functor_types_4_p_0(Var_13, ConsTypeAssignSet_132, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet_135);
        succeeded = (ArgsTypeAssignSet_135 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (ConsTypeAssignSet_132 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          MR_Word ConsIdSpec_108;

          ConsIdSpec_108 = check_hlds__typecheck_errors__report_error_unify_var_functor_result_8_f_0(STATE_VARIABLE_Info_72_143, UnifyContext_11, Context_12, Var_13, ConsTypeInfos_31, ConsId_14, Arity_30, TypeAssignSet0_17);
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(ConsIdSpec_108, STATE_VARIABLE_Info_72_143, &STATE_VARIABLE_Info_77_148);
        }
        else
          STATE_VARIABLE_Info_77_148 = STATE_VARIABLE_Info_72_143;
        check_hlds__typecheck_clauses__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(ArgVars_15, ArgsTypeAssignSet_135, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_151);
        if ((TypeAssignSet1_151 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *TypeAssignSet_18 = TypeAssignSet0_17;
          if ((ArgsTypeAssignSet_135 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_77_148;
          else
          {
            MR_Word ArgSpec_120;

            ArgSpec_120 = check_hlds__typecheck_errors__report_error_unify_var_functor_args_8_f_0(STATE_VARIABLE_Info_77_148, UnifyContext_11, Context_12, Var_13, ConsTypeInfos_31, ConsId_14, ArgVars_15, ArgsTypeAssignSet_135);
            check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(ArgSpec_120, STATE_VARIABLE_Info_77_148, STATE_VARIABLE_Info_54);
          }
        }
        else
        {
          *TypeAssignSet_18 = TypeAssignSet1_151;
          *STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_77_148;
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_49_93_95_48_5_p_0(
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
      MR_Word ArgsTypeAssign_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgsTypeAssigns_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word TypeAssign_16 = ((MR_Word) ((MR_hl_field(0, ArgsTypeAssign_13, (MR_Integer) 0))));
      MR_Word ArgTypes_17 = ((MR_Word) ((MR_hl_field(0, ArgsTypeAssign_13, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TypeAssignSet_22_22;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;

      if ((ArgVars_2 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((ArgTypes_17 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            STATE_VARIABLE_TypeAssignSet_22_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_22_22, 0) = ((MR_Box) (TypeAssign_16));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_22_22, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_4));
          }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_clauses.type_assign_vars_have_types\'/6", (MR_String) "length mismatch");
            return;
          }
      else
      {
        MR_Word Var_52 = ((MR_Word) ((MR_hl_field(1, ArgVars_2, (MR_Integer) 1))));
        MR_Word Var_53 = ((MR_Word) ((MR_hl_field(1, ArgVars_2, (MR_Integer) 0))));

        if ((ArgTypes_17 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_clauses.type_assign_vars_have_types\'/6", (MR_String) "length mismatch");
            return;
          }
        else
        {
          MR_Word Type_46 = ((MR_Word) ((MR_hl_field(1, ArgTypes_17, (MR_Integer) 0))));
          MR_Word Types_47 = ((MR_Word) ((MR_hl_field(1, ArgTypes_17, (MR_Integer) 1))));
          MR_Word TypeAssignSet1_50;
          MR_Word VarTypes0_54;
          MR_Word MaybeOldVarType_55;
          MR_Word VarTypes_56;

          check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign_16, &VarTypes0_54);
          parse_tree__vartypes__search_insert_var_type_5_p_0(Var_53, Type_46, &MaybeOldVarType_55, VarTypes0_54, &VarTypes_56);
          if ((MaybeOldVarType_55 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word TypeAssign_59;

            check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_56, TypeAssign_16, &TypeAssign_59);
            {
              TypeAssignSet1_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, TypeAssignSet1_50, 0) = ((MR_Box) (TypeAssign_59));
              MR_hl_field(1, TypeAssignSet1_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          else
          {
            MR_Word OldVarType_57 = ((MR_Word) ((MR_hl_field(1, MaybeOldVarType_55, (MR_Integer) 0))));
            MR_Word TypeAssign1_58;
            MR_Word ExistQTVars_60;
            MR_Word TypeBindings0_61;
            MR_Word TypeBindings_62;

            check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign_16, &ExistQTVars_60);
            check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_16, &TypeBindings0_61);
            succeeded = parse_tree__prog_type_unify__type_unify_5_p_0(OldVarType_57, Type_46, ExistQTVars_60, TypeBindings0_61, &TypeBindings_62);
            if (succeeded)
            {
              check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_62, TypeAssign_16, &TypeAssign1_58);
              succeeded = MR_TRUE;
            }
            if (succeeded)
              {
                TypeAssignSet1_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, TypeAssignSet1_50, 0) = ((MR_Box) (TypeAssign1_58));
                MR_hl_field(1, TypeAssignSet1_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            else
              TypeAssignSet1_50 = (MR_Word) ((MR_Unsigned) 0U);
          }
          check_hlds__typecheck_clauses__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_115_95_118_97_114_115_95_104_97_118_101_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0(TypeAssignSet1_50, Var_52, Types_47, STATE_VARIABLE_TypeAssignSet_0_4, &STATE_VARIABLE_TypeAssignSet_22_22);
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ArgsTypeAssigns_14;
      next_value_of_STATE_VARIABLE_TypeAssignSet_0_4 = STATE_VARIABLE_TypeAssignSet_22_22;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_TypeAssignSet_0_4 = next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_115_95_118_97_114_115_95_104_97_118_101_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0(
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
      MR_Word TypeAssign_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TypeAssigns_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TypeAssignSet_21_21;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_5;

      if ((ArgVars_3 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((Types_4 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            STATE_VARIABLE_TypeAssignSet_21_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_21_21, 0) = ((MR_Box) (TypeAssign_14));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_21_21, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_5));
          }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_clauses.type_assign_vars_have_types\'/6", (MR_String) "length mismatch");
            return;
          }
      else
      {
        MR_Word Var_51 = ((MR_Word) ((MR_hl_field(1, ArgVars_3, (MR_Integer) 1))));
        MR_Word Var_52 = ((MR_Word) ((MR_hl_field(1, ArgVars_3, (MR_Integer) 0))));

        if ((Types_4 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_clauses.type_assign_vars_have_types\'/6", (MR_String) "length mismatch");
            return;
          }
        else
        {
          MR_Word Type_45 = ((MR_Word) ((MR_hl_field(1, Types_4, (MR_Integer) 0))));
          MR_Word Types_46 = ((MR_Word) ((MR_hl_field(1, Types_4, (MR_Integer) 1))));
          MR_Word TypeAssignSet1_49;
          MR_Word VarTypes0_53;
          MR_Word MaybeOldVarType_54;
          MR_Word VarTypes_55;

          check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign_14, &VarTypes0_53);
          parse_tree__vartypes__search_insert_var_type_5_p_0(Var_52, Type_45, &MaybeOldVarType_54, VarTypes0_53, &VarTypes_55);
          if ((MaybeOldVarType_54 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word TypeAssign_58;

            check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_55, TypeAssign_14, &TypeAssign_58);
            {
              TypeAssignSet1_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, TypeAssignSet1_49, 0) = ((MR_Box) (TypeAssign_58));
              MR_hl_field(1, TypeAssignSet1_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          else
          {
            MR_Word OldVarType_56 = ((MR_Word) ((MR_hl_field(1, MaybeOldVarType_54, (MR_Integer) 0))));
            MR_Word TypeAssign1_57;
            MR_Word ExistQTVars_59;
            MR_Word TypeBindings0_60;
            MR_Word TypeBindings_61;

            check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign_14, &ExistQTVars_59);
            check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign_14, &TypeBindings0_60);
            succeeded = parse_tree__prog_type_unify__type_unify_5_p_0(OldVarType_56, Type_45, ExistQTVars_59, TypeBindings0_60, &TypeBindings_61);
            if (succeeded)
            {
              check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_61, TypeAssign_14, &TypeAssign1_57);
              succeeded = MR_TRUE;
            }
            if (succeeded)
              {
                TypeAssignSet1_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, TypeAssignSet1_49, 0) = ((MR_Box) (TypeAssign1_57));
                MR_hl_field(1, TypeAssignSet1_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            else
              TypeAssignSet1_49 = (MR_Word) ((MR_Unsigned) 0U);
          }
          check_hlds__typecheck_clauses__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_115_95_118_97_114_115_95_104_97_118_101_95_116_121_112_101_115_95_95_91_49_93_95_48_6_p_0(TypeAssignSet1_49, Var_51, Types_46, STATE_VARIABLE_TypeAssignSet_0_5, &STATE_VARIABLE_TypeAssignSet_21_21);
        }
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
check_hlds__typecheck_clauses__typecheck_info_get_ctor_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_ConsTypeInfo_16;

  succeeded = check_hlds__typecheck_clauses__make_field_access_function_cons_type_info_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), &conv1_ConsTypeInfo_16);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_ConsTypeInfo_16));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_info_get_ctor_list_6_p_0(
  MR_Word Info_7,
  MR_Word ConsId_8,
  MR_Integer Arity_9,
  MR_Word GoalId_10,
  MR_Word * ConsInfos_11,
  MR_Word * ConsErrors_12)
{
  MR_bool succeeded;
  MR_Word IsFieldAccessFunc_13;
  MR_Word PredStatus_14;
  MR_Word Var_16;

  check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_p_0(Info_7, &IsFieldAccessFunc_13);
  succeeded = (IsFieldAccessFunc_13 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    PredStatus_14 = ((MR_Word) ((MR_hl_field(1, IsFieldAccessFunc_13, (MR_Integer) 0))));
    Var_16 = (MR_Word) (PredStatus_14);
    succeeded = (Var_16 != (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word FieldAccessConsInfos_15;
    MR_Word TypeCtorInfo_20_26;
    MR_Word TypeInfo_21_27;
    MR_Word TypeCtorInfo_24_28;
    MR_Word TypeCtorInfo_25_29;
    MR_Word Name_17;
    MR_Word ModuleInfo_19;
    MR_Word AccessType_20;
    MR_Word FieldName_21;
    MR_Word CtorFieldTable_22;
    MR_Word FieldDefns_23;
    MR_Word UserArity_24;
    MR_Word Var_25;
    MR_Integer Var_30;
    MR_Integer Var_31;
    MR_Box conv0_FieldDefns_23;

    succeeded = ((((MR_tag((MR_Word) ConsId_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (succeeded)
    {
      Name_17 = ((MR_Word) ((MR_hl_field(3, ConsId_8, (MR_Integer) 1))));
      Var_30 = ((MR_Integer) ((MR_hl_field(3, ConsId_8, (MR_Integer) 2))));
      succeeded = (Arity_9 == Var_30);
      if (succeeded)
      {
        check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(Info_7, &ModuleInfo_19);
        succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(ModuleInfo_19, Name_17, &Var_31, &AccessType_20, &FieldName_21);
        if (succeeded)
        {
          succeeded = (Arity_9 == Var_31);
          if (succeeded)
          {
            hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(ModuleInfo_19, &CtorFieldTable_22);
            TypeCtorInfo_20_26 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
            TypeInfo_21_27 = (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[5]);
            succeeded = mercury__map__search_3_p_0(TypeCtorInfo_20_26, TypeInfo_21_27, CtorFieldTable_22, ((MR_Box) (FieldName_21)), &conv0_FieldDefns_23);
            if (succeeded)
            {
              FieldDefns_23 = ((MR_Word) (conv0_FieldDefns_23));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              TypeCtorInfo_24_28 = (MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0);
              TypeCtorInfo_25_29 = (MR_Word) (&check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__type_ctor_info_maybe_cons_type_info_0);
              UserArity_24 = (MR_Word) (Arity_9);
              {
                Var_25 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_25, 0) = ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_8[0]));
                MR_hl_field(0, Var_25, 1) = ((MR_Box) (check_hlds__typecheck_clauses__typecheck_info_get_ctor_list_6_p_0_1));
                MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 6));
                MR_hl_field(0, Var_25, 3) = ((MR_Box) (Info_7));
                MR_hl_field(0, Var_25, 4) = ((MR_Box) (GoalId_10));
                MR_hl_field(0, Var_25, 5) = ((MR_Box) (Name_17));
                MR_hl_field(0, Var_25, 6) = ((MR_Box) (UserArity_24));
                MR_hl_field(0, Var_25, 7) = ((MR_Box) (AccessType_20));
                MR_hl_field(0, Var_25, 8) = ((MR_Box) (FieldName_21));
              }
              mercury__list__filter_map_3_p_0(TypeCtorInfo_24_28, TypeCtorInfo_25_29, Var_25, FieldDefns_23, &FieldAccessConsInfos_15);
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    if (succeeded)
      check_hlds__typecheck_clauses__split_cons_errors_3_p_0(FieldAccessConsInfos_15, ConsInfos_11, ConsErrors_12);
    else
    {
      *ConsInfos_11 = (MR_Word) ((MR_Unsigned) 0U);
      *ConsErrors_12 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
  else
    check_hlds__typecheck_clauses__typecheck_info_get_ctor_list_2_6_p_0(Info_7, ConsId_8, Arity_9, GoalId_10, ConsInfos_11, ConsErrors_12);
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__typecheck_info_get_ctor_list_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_ConsTypeInfo_16;

  succeeded = check_hlds__typecheck_clauses__make_field_access_function_cons_type_info_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), &conv1_ConsTypeInfo_16);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_ConsTypeInfo_16));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_info_get_ctor_list_2_6_p_0(
  MR_Word Info_7,
  MR_Word ConsId_8,
  MR_Integer Arity_9,
  MR_Word GoalId_10,
  MR_Word * ConsInfos_11,
  MR_Word * ConsErrors_12)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
  MR_Word DuConsInfos_13;
  MR_Word DuConsErrors_14;
  MR_Word FieldAccessConsInfos_16;
  MR_Word FieldAccessConsErrors_17;
  MR_Word BuiltinConsInfos_23;
  MR_Word TupleConsInfos_34;
  MR_Word PredConsInfos_36;
  MR_Word ApplyConsInfos_38;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Name_66;
  MR_Integer Arity_67;
  MR_Word ConsIdTypeCtor_68;
  MR_Word FieldAccessMaybeConsInfosPrime_15;
  MR_Word TypeCtorInfo_20_91;
  MR_Word TypeInfo_21_92;
  MR_Word TypeCtorInfo_24_93;
  MR_Word TypeCtorInfo_25_94;
  MR_Word Name_82;
  MR_Word ModuleInfo_84;
  MR_Word AccessType_85;
  MR_Word FieldName_86;
  MR_Word CtorFieldTable_87;
  MR_Word FieldDefns_88;
  MR_Word UserArity_89;
  MR_Word Var_90;
  MR_Integer Var_95;
  MR_Integer Var_96;
  MR_Box conv0_FieldDefns_88;
  MR_String BuiltInTypeName_18;
  MR_Integer TupleArity_24;
  MR_Word PredConsInfosPrime_35;
  MR_Word ApplyConsInfosPrime_37;

  if (succeeded)
  {
    Name_66 = ((MR_Word) ((MR_hl_field(3, ConsId_8, (MR_Integer) 1))));
    Arity_67 = ((MR_Integer) ((MR_hl_field(3, ConsId_8, (MR_Integer) 2))));
    ConsIdTypeCtor_68 = ((MR_Word) ((MR_hl_field(3, ConsId_8, (MR_Integer) 3))));
    {
      MR_Word ConsTable_69;
      MR_Word PlainConsInfos_71;
      MR_Word PlainConsErrors_72;
      MR_Word ConsDefns_70;
      MR_Word OrigConsId_74;
      MR_Word ExistQConsDefns_75;
      MR_Word OrigName_73;

      check_hlds__typecheck_info__typecheck_info_get_cons_table_2_p_0(Info_7, &ConsTable_69);
      succeeded = hlds__hlds_cons__search_cons_table_3_p_0(ConsTable_69, ConsId_8, &ConsDefns_70);
      if (succeeded)
        check_hlds__typecheck_clauses__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_108_105_115_116_95_95_91_51_93_95_48_7_p_0(Info_7, GoalId_10, ConsId_8, ConsDefns_70, &PlainConsInfos_71, &PlainConsErrors_72);
      else
      {
        PlainConsInfos_71 = (MR_Word) ((MR_Unsigned) 0U);
        PlainConsErrors_72 = (MR_Word) ((MR_Unsigned) 0U);
      }
      succeeded = parse_tree__prog_type__remove_new_prefix_2_p_0(Name_66, &OrigName_73);
      if (succeeded)
      {
        {
          OrigConsId_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, OrigConsId_74, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, OrigConsId_74, 1) = ((MR_Box) (OrigName_73));
          MR_hl_field(3, OrigConsId_74, 2) = ((MR_Box) (Arity_67));
          MR_hl_field(3, OrigConsId_74, 3) = ((MR_Box) (ConsIdTypeCtor_68));
        }
        succeeded = hlds__hlds_cons__search_cons_table_3_p_0(ConsTable_69, OrigConsId_74, &ExistQConsDefns_75);
      }
      if (succeeded)
      {
        MR_Word UnivQuantConsInfos_76;
        MR_Word UnivQuantConsErrors_77;

        check_hlds__typecheck_clauses__convert_cons_defn_list_7_p_1(Info_7, GoalId_10, (MR_Integer) 1, OrigConsId_74, ExistQConsDefns_75, &UnivQuantConsInfos_76, &UnivQuantConsErrors_77);
        DuConsInfos_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), PlainConsInfos_71, UnivQuantConsInfos_76);
        DuConsErrors_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__type_ctor_info_cons_error_0), PlainConsErrors_72, UnivQuantConsErrors_77);
      }
      else
      {
        DuConsInfos_13 = PlainConsInfos_71;
        DuConsErrors_14 = PlainConsErrors_72;
      }
    }
  }
  else
  {
    DuConsInfos_13 = (MR_Word) ((MR_Unsigned) 0U);
    DuConsErrors_14 = (MR_Word) ((MR_Unsigned) 0U);
  }
  succeeded = ((((MR_tag((MR_Word) ConsId_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
  if (succeeded)
  {
    Name_82 = ((MR_Word) ((MR_hl_field(3, ConsId_8, (MR_Integer) 1))));
    Var_95 = ((MR_Integer) ((MR_hl_field(3, ConsId_8, (MR_Integer) 2))));
    succeeded = (Arity_9 == Var_95);
    if (succeeded)
    {
      check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(Info_7, &ModuleInfo_84);
      succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(ModuleInfo_84, Name_82, &Var_96, &AccessType_85, &FieldName_86);
      if (succeeded)
      {
        succeeded = (Arity_9 == Var_96);
        if (succeeded)
        {
          hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(ModuleInfo_84, &CtorFieldTable_87);
          TypeCtorInfo_20_91 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
          TypeInfo_21_92 = (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[5]);
          succeeded = mercury__map__search_3_p_0(TypeCtorInfo_20_91, TypeInfo_21_92, CtorFieldTable_87, ((MR_Box) (FieldName_86)), &conv0_FieldDefns_88);
          if (succeeded)
          {
            FieldDefns_88 = ((MR_Word) (conv0_FieldDefns_88));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            TypeCtorInfo_24_93 = (MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0);
            TypeCtorInfo_25_94 = (MR_Word) (&check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__type_ctor_info_maybe_cons_type_info_0);
            UserArity_89 = (MR_Word) (Arity_9);
            {
              Var_90 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_90, 0) = ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_8[0]));
              MR_hl_field(0, Var_90, 1) = ((MR_Box) (check_hlds__typecheck_clauses__typecheck_info_get_ctor_list_2_6_p_0_1));
              MR_hl_field(0, Var_90, 2) = ((MR_Box) ((MR_Integer) 6));
              MR_hl_field(0, Var_90, 3) = ((MR_Box) (Info_7));
              MR_hl_field(0, Var_90, 4) = ((MR_Box) (GoalId_10));
              MR_hl_field(0, Var_90, 5) = ((MR_Box) (Name_82));
              MR_hl_field(0, Var_90, 6) = ((MR_Box) (UserArity_89));
              MR_hl_field(0, Var_90, 7) = ((MR_Box) (AccessType_85));
              MR_hl_field(0, Var_90, 8) = ((MR_Box) (FieldName_86));
            }
            mercury__list__filter_map_3_p_0(TypeCtorInfo_24_93, TypeCtorInfo_25_94, Var_90, FieldDefns_88, &FieldAccessMaybeConsInfosPrime_15);
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  if (succeeded)
    check_hlds__typecheck_clauses__split_cons_errors_3_p_0(FieldAccessMaybeConsInfosPrime_15, &FieldAccessConsInfos_16, &FieldAccessConsErrors_17);
  else
  {
    FieldAccessConsInfos_16 = (MR_Word) ((MR_Unsigned) 0U);
    FieldAccessConsErrors_17 = (MR_Word) ((MR_Unsigned) 0U);
  }
  succeeded = (Arity_9 == (MR_Integer) 0);
  if (succeeded)
    succeeded = check_hlds__typecheck_clauses__builtin_atomic_type_2_p_0(ConsId_8, &BuiltInTypeName_18);
  if (succeeded)
  {
    MR_Word TypeCtor_19;
    MR_Word ConsType_20;
    MR_Word ConsTypeVarSet_21;
    MR_Word ConsInfo_22;
    MR_Word Var_39;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_99;
    MR_Word Var_100;

    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_39, 0) = ((MR_Box) (BuiltInTypeName_18));
    }
    {
      TypeCtor_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeCtor_19, 0) = ((MR_Box) (Var_39));
      MR_hl_field(0, TypeCtor_19, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__prog_type_construct__construct_type_3_p_0(TypeCtor_19, (MR_Word) ((MR_Unsigned) 0U), &ConsType_20);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &ConsTypeVarSet_21);
    Var_99 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[6]));
    Var_100 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[7]));
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_44, 2) = ((MR_Box) (Var_99));
      MR_hl_field(0, Var_44, 3) = ((MR_Box) (Var_100));
    }
    {
      Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_45, 0) = ((MR_Box) (BuiltInTypeName_18));
    }
    {
      ConsInfo_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ConsInfo_22, 0) = ((MR_Box) (ConsTypeVarSet_21));
      MR_hl_field(0, ConsInfo_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, ConsInfo_22, 2) = ((MR_Box) (ConsType_20));
      MR_hl_field(0, ConsInfo_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, ConsInfo_22, 4) = ((MR_Box) (Var_44));
      MR_hl_field(0, ConsInfo_22, 5) = ((MR_Box) (Var_45));
    }
    {
      BuiltinConsInfos_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, BuiltinConsInfos_23, 0) = ((MR_Box) (ConsInfo_22));
      MR_hl_field(1, BuiltinConsInfos_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
    BuiltinConsInfos_23 = (MR_Word) ((MR_Unsigned) 0U);
  if (((((MR_tag((MR_Word) ConsId_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
  {
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(3, ConsId_8, (MR_Integer) 1))));
    MR_String Var_48;

    TupleArity_24 = ((MR_Integer) ((MR_hl_field(3, ConsId_8, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_48 = ((MR_String) ((MR_hl_field(0, Var_47, (MR_Integer) 0))));
      succeeded = (strcmp(Var_48, (MR_String) "{}") == 0);
    }
  }
  else
  if (((((MR_tag((MR_Word) ConsId_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 4))))
  {
    TupleArity_24 = ((MR_Integer) ((MR_hl_field(3, ConsId_8, (MR_Integer) 1))));
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  if (succeeded)
  {
    MR_Word TupleConsTypeVarSet0_26;
    MR_Word TupleArgTVars_27;
    MR_Word TupleConsTypeVarSet_28;
    MR_Word TupleArgTypes_29;
    MR_Word TupleTypeCtor_30;
    MR_Word TupleConsType_31;
    MR_Word TupleConsInfo_33;
    MR_Word Var_49;
    MR_Word Var_52;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TupleConsTypeVarSet0_26);
    mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TupleArity_24, &TupleArgTVars_27, TupleConsTypeVarSet0_26, &TupleConsTypeVarSet_28);
    Var_49 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
    parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_49, TupleArgTVars_27, &TupleArgTypes_29);
    {
      TupleTypeCtor_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TupleTypeCtor_30, 0) = ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_2[1]));
      MR_hl_field(0, TupleTypeCtor_30, 1) = ((MR_Box) (TupleArity_24));
    }
    parse_tree__prog_type_construct__construct_type_3_p_0(TupleTypeCtor_30, TupleArgTypes_29, &TupleConsType_31);
    Var_52 = check_hlds__typecheck_clauses__empty_hlds_constraints_0_f_0();
    {
      TupleConsInfo_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TupleConsInfo_33, 0) = ((MR_Box) (TupleConsTypeVarSet_28));
      MR_hl_field(0, TupleConsInfo_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, TupleConsInfo_33, 2) = ((MR_Box) (TupleConsType_31));
      MR_hl_field(0, TupleConsInfo_33, 3) = ((MR_Box) (TupleArgTypes_29));
      MR_hl_field(0, TupleConsInfo_33, 4) = ((MR_Box) (Var_52));
      MR_hl_field(0, TupleConsInfo_33, 5) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_clauses_scalar_common_2[2])));
    }
    {
      TupleConsInfos_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TupleConsInfos_34, 0) = ((MR_Box) (TupleConsInfo_33));
      MR_hl_field(1, TupleConsInfos_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
    TupleConsInfos_34 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = check_hlds__typecheck_clauses__builtin_pred_type_5_p_0(Info_7, ConsId_8, Arity_9, GoalId_10, &PredConsInfosPrime_35);
  if (succeeded)
    PredConsInfos_36 = PredConsInfosPrime_35;
  else
    PredConsInfos_36 = (MR_Word) ((MR_Unsigned) 0U);
  succeeded = check_hlds__typecheck_clauses__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(ConsId_8, Arity_9, &ApplyConsInfosPrime_37);
  if (succeeded)
    ApplyConsInfos_38 = ApplyConsInfosPrime_37;
  else
    ApplyConsInfos_38 = (MR_Word) ((MR_Unsigned) 0U);
  Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), PredConsInfos_36, ApplyConsInfos_38);
  Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), TupleConsInfos_34, Var_59);
  Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), BuiltinConsInfos_23, Var_58);
  Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), FieldAccessConsInfos_16, Var_57);
  *ConsInfos_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_cons_type_info_0), DuConsInfos_13, Var_56);
  *ConsErrors_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_error_undef__check_hlds__typecheck_error_undef__type_ctor_info_cons_error_0), DuConsErrors_14, FieldAccessConsErrors_17);
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word ConsId_6,
  MR_Integer Arity_7,
  MR_Word * ConsTypeInfos_8)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
  MR_Word TypeCtorInfo_19_34;
  MR_Word TypeInfo_20_35;
  MR_Word TypeCtorInfo_21_36;
  MR_Word TypeCtorInfo_6_41;
  MR_Word TypeInfo_7_42;
  MR_Word TypeCtorInfo_8_43;
  MR_Word TypeInfo_9_44;
  MR_String ApplyName_9;
  MR_String ApplyNameToUse_12;
  MR_Word Purity_13;
  MR_Integer Arity1_14;
  MR_Word TypeVarSet_15;
  MR_Word FuncType_16;
  MR_Word ArgTypes_17;
  MR_Word RetType_18;
  MR_Word Var_20;
  MR_Integer Var_21;
  MR_Integer Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word TypeVarSet0_28;
  MR_Word ArgTypeVars_29;
  MR_Word TypeVarSet1_30;
  MR_Word RetTypeVar_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

  if (succeeded)
  {
    Var_20 = ((MR_Word) ((MR_hl_field(3, ConsId_6, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 0);
    if (succeeded)
    {
      ApplyName_9 = ((MR_String) ((MR_hl_field(0, Var_20, (MR_Integer) 0))));
      // binary string jump switch
      ;
      lo_0 = (MR_Integer) 0;
      hi_1 = (MR_Integer) 3;
      do
      {
        mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
        result_3 = MR_strcmp(ApplyName_9, ((&check_hlds__typecheck_clauses_vector_common_7[0 + mid_2]))->check_hlds__typecheck_clauses__vector_common_type_7_0__vct_7_f_0);
        if ((result_3 == (MR_Integer) 0))
        {
          switch (((&check_hlds__typecheck_clauses_vector_common_7[0 + mid_2]))->check_hlds__typecheck_clauses__vector_common_type_7_0__vct_7_f_1) {
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
        Var_21 = (MR_Integer) 1;
        succeeded = (Arity_7 >= Var_21);
        if (succeeded)
        {
          Var_22 = (MR_Integer) 1;
          Arity1_14 = (MR_Integer) ((MR_Unsigned) Arity_7 - (MR_Unsigned) Var_22);
          TypeCtorInfo_19_34 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
          mercury__varset__init_1_p_0(TypeCtorInfo_19_34, &TypeVarSet0_28);
          mercury__varset__new_vars_4_p_0(TypeCtorInfo_19_34, Arity1_14, &ArgTypeVars_29, TypeVarSet0_28, &TypeVarSet1_30);
          mercury__varset__new_var_3_p_0(TypeCtorInfo_19_34, &RetTypeVar_31, TypeVarSet1_30, &TypeVarSet_15);
          TypeInfo_20_35 = (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]);
          TypeCtorInfo_21_36 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
          Var_32 = mercury__map__init_0_f_0(TypeInfo_20_35, TypeCtorInfo_21_36);
          parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_32, ArgTypeVars_29, &ArgTypes_17);
          Var_33 = (MR_Word) ((MR_Unsigned) 0U);
          {
            RetType_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, RetType_18, 0) = ((MR_Box) (RetTypeVar_31));
            MR_hl_field(0, RetType_18, 1) = ((MR_Box) (Var_33));
          }
          parse_tree__prog_type_construct__construct_higher_order_func_type_4_p_0(Purity_13, ArgTypes_17, RetType_18, &FuncType_16);
          Var_37 = (MR_Word) ((MR_Unsigned) 0U);
          Var_38 = (MR_Word) ((MR_Unsigned) 0U);
          TypeCtorInfo_6_41 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0);
          TypeInfo_7_42 = (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[6]);
          {
            Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_24, 0) = ((MR_Box) (FuncType_16));
            MR_hl_field(1, Var_24, 1) = ((MR_Box) (ArgTypes_17));
          }
          Var_39 = mercury__map__init_0_f_0(TypeCtorInfo_6_41, TypeInfo_7_42);
          TypeCtorInfo_8_43 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0);
          TypeInfo_9_44 = (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[7]);
          Var_40 = mercury__map__init_0_f_0(TypeCtorInfo_8_43, TypeInfo_9_44);
          {
            Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_25, 0) = ((MR_Box) (Var_37));
            MR_hl_field(0, Var_25, 1) = ((MR_Box) (Var_38));
            MR_hl_field(0, Var_25, 2) = ((MR_Box) (Var_39));
            MR_hl_field(0, Var_25, 3) = ((MR_Box) (Var_40));
          }
          {
            Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_26, 1) = ((MR_Box) (ApplyNameToUse_12));
          }
          {
            Var_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_23, 0) = ((MR_Box) (TypeVarSet_15));
            MR_hl_field(0, Var_23, 1) = ((MR_Box) (Var_37));
            MR_hl_field(0, Var_23, 2) = ((MR_Box) (RetType_18));
            MR_hl_field(0, Var_23, 3) = ((MR_Box) (Var_24));
            MR_hl_field(0, Var_23, 4) = ((MR_Box) (Var_25));
            MR_hl_field(0, Var_23, 5) = ((MR_Box) (Var_26));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *ConsTypeInfos_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_23));
            MR_hl_field(1, base, 1) = ((MR_Box) (Var_37));
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_clauses__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_108_105_115_116_95_95_91_51_93_95_48_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word ConsDefn_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
    MR_Word ConsDefns_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
    MR_Word HeadMaybeConsTypeInfo_20;
    MR_Word TailConsTypeInfos_21;
    MR_Word TailConsErrors_22;

    check_hlds__typecheck_clauses__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_95_91_51_93_95_48_6_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__4_4, ConsDefn_16, &HeadMaybeConsTypeInfo_20);
    check_hlds__typecheck_clauses__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_108_105_115_116_95_95_91_51_93_95_48_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__4_4, ConsDefns_17, &TailConsTypeInfos_21, &TailConsErrors_22);
    if (((MR_tag((MR_Word) HeadMaybeConsTypeInfo_20)) == (MR_Integer) 1))
    {
      MR_Word HeadConsError_24 = ((MR_Word) ((MR_hl_field(1, HeadMaybeConsTypeInfo_20, (MR_Integer) 0))));

      *HeadVar__6_6 = TailConsTypeInfos_21;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadConsError_24));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailConsErrors_22));
      }
    }
    else
    {
      MR_Word HeadConsTypeInfo_23 = (MR_Word) ((MR_Word) (HeadMaybeConsTypeInfo_20));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadConsTypeInfo_23));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailConsTypeInfos_21));
      }
      *HeadVar__7_7 = TailConsErrors_22;
    }
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_clauses__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_95_91_51_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_47;

  conv0_LambdaHeadVar__2_47 = check_hlds__typecheck_clauses__IntroducedFrom__func__convert_cons_defn__2095__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_47));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__typecheck_clauses__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_99_111_110_115_95_100_101_102_110_95_95_91_51_93_95_48_6_p_0(
  MR_Word Info_7,
  MR_Word GoalId_8,
  MR_Word ConsId_10,
  MR_Word ConsDefn_11,
  MR_Word * ConsTypeInfo_12)
{
  MR_bool succeeded;
  MR_Word TypeCtor_13 = ((MR_Word) ((MR_hl_field(0, ConsDefn_11, (MR_Integer) 0))));
  MR_Word ConsTypeVarSet_14 = ((MR_Word) ((MR_hl_field(0, ConsDefn_11, (MR_Integer) 1))));
  MR_Word ConsTypeParams_15 = ((MR_Word) ((MR_hl_field(0, ConsDefn_11, (MR_Integer) 2))));
  MR_Word ConsTypeKinds_16 = ((MR_Word) ((MR_hl_field(0, ConsDefn_11, (MR_Integer) 3))));
  MR_Word MaybeExistConstraints_17 = ((MR_Word) ((MR_hl_field(0, ConsDefn_11, (MR_Integer) 4))));
  MR_Word Args_18 = ((MR_Word) ((MR_hl_field(0, ConsDefn_11, (MR_Integer) 5))));
  MR_Word ArgTypes_20;
  MR_Word TypeTable_22;
  MR_Word TypeDefn_23;
  MR_Word Body_24;
  MR_Word PredId_25;
  MR_Word ModuleInfo_26;
  MR_Word PredInfo_27;
  MR_Word PredStatus_28;
  MR_Word BodyDu_29;
  MR_Word GoalType_31;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;

  ArgTypes_20 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_4[4]), Args_18);
  check_hlds__typecheck_info__typecheck_info_get_type_table_2_p_0(Info_7, &TypeTable_22);
  hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_22, TypeCtor_13, &TypeDefn_23);
  hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_23, &Body_24);
  check_hlds__typecheck_info__typecheck_info_get_pred_id_2_p_0(Info_7, &PredId_25);
  check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(Info_7, &ModuleInfo_26);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_26, PredId_25, &PredInfo_27);
  hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_27, &PredStatus_28);
  succeeded = ((MR_tag((MR_Word) Body_24)) == (MR_Integer) 0);
  if (succeeded)
  {
    BodyDu_29 = (MR_Word) ((MR_Word) (Body_24));
    Var_48 = ((MR_Word) ((MR_hl_field(0, BodyDu_29, (MR_Integer) 4))));
    succeeded = (Var_48 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_27, &GoalType_31);
      succeeded = ((MR_tag((MR_Word) GoalType_31)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_49 = ((MR_Unsigned) ((MR_hl_field(0, GoalType_31, (MR_Integer) 0))) & (MR_Integer) 3);
        succeeded = (Var_49 == (MR_Integer) 3);
      }
      succeeded = !(succeeded);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_27);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_50 = (MR_Word) (PredStatus_28);
          succeeded = (Var_50 != (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_51;

    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (TypeCtor_13));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) (TypeDefn_23));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *ConsTypeInfo_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_51));
    }
  }
  else
  {
    MR_Word TypeStatus_32;
    MR_Word Var_52;
    MR_Word Var_53;

    hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_23, &TypeStatus_32);
    Var_52 = (MR_Word) (TypeStatus_32);
    succeeded = (Var_52 == (MR_Word) ((MR_Unsigned) 4U));
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_27);
      succeeded = !(succeeded);
      if (succeeded)
      {
        Var_53 = (MR_Word) (PredStatus_28);
        succeeded = (Var_53 != (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
      *ConsTypeInfo_12 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_clauses_scalar_common_2[3]));
    else
    {
      MR_Word ConsTypeArgs_33;
      MR_Word ConsType_34;
      MR_Word ExistProgConstraints_37;
      MR_Word ProgConstraints_41;
      MR_Word ExistQVars_42;
      MR_Word ClassTable_43;
      MR_Word Constraints_44;
      MR_Word Var_57;
      MR_Word Var_58;

      parse_tree__prog_type__var_list_to_type_list_3_p_0(ConsTypeKinds_16, ConsTypeParams_15, &ConsTypeArgs_33);
      parse_tree__prog_type_construct__construct_type_3_p_0(TypeCtor_13, ConsTypeArgs_33, &ConsType_34);
      if ((MaybeExistConstraints_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        ExistQVars_42 = (MR_Word) ((MR_Unsigned) 0U);
        ExistProgConstraints_37 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word ExistConstraints_38 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_17), (MR_Integer) 1));

        ExistQVars_42 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_38, (MR_Integer) 0))));
        ExistProgConstraints_37 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_38, (MR_Integer) 1))));
      }
      {
        ProgConstraints_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ProgConstraints_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, ProgConstraints_41, 1) = ((MR_Box) (ExistProgConstraints_37));
      }
      hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_26, &ClassTable_43);
      hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_43, ConsTypeVarSet_14, GoalId_8, ProgConstraints_41, &Constraints_44);
      {
        Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_58, 0) = ((MR_Box) (TypeCtor_13));
        MR_hl_field(0, Var_58, 1) = ((MR_Box) (ConsId_10));
      }
      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_57, 0) = ((MR_Box) (ConsTypeVarSet_14));
        MR_hl_field(0, Var_57, 1) = ((MR_Box) (ExistQVars_42));
        MR_hl_field(0, Var_57, 2) = ((MR_Box) (ConsType_34));
        MR_hl_field(0, Var_57, 3) = ((MR_Box) (ArgTypes_20));
        MR_hl_field(0, Var_57, 4) = ((MR_Box) (Constraints_44));
        MR_hl_field(0, Var_57, 5) = ((MR_Box) (Var_58));
      }
      *ConsTypeInfo_12 = (MR_Word) ((MR_Word) (Var_57));
    }
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_clauses__empty_hlds_constraints_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word Var_4;
  MR_Word Var_5;

  Var_4 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[6]));
  Var_5 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[7]));
  {
    HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__1_1, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__1_1, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__1_1, 2) = ((MR_Box) (Var_4));
    MR_hl_field(0, HeadVar__1_1, 3) = ((MR_Box) (Var_5));
  }
  return HeadVar__1_1;
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__builtin_pred_type_5_p_0(
  MR_Word Info_6,
  MR_Word ConsId_7,
  MR_Integer Arity_8,
  MR_Word GoalId_9,
  MR_Word * ConsTypeInfos_10)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
  MR_Word SymName_11;
  MR_Word PredicateTable_14;
  MR_Word IsFullyQualified_15;
  MR_Word PredIds_16;

  if (succeeded)
  {
    SymName_11 = ((MR_Word) ((MR_hl_field(3, ConsId_7, (MR_Integer) 1))));
    check_hlds__typecheck_info__typecheck_info_get_predicate_table_2_p_0(Info_6, &PredicateTable_14);
    check_hlds__typecheck_info__typecheck_info_get_calls_are_fully_qualified_2_p_0(Info_6, &IsFullyQualified_15);
    hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredicateTable_14, IsFullyQualified_15, SymName_11, &PredIds_16);
    if ((PredIds_16 == (MR_Word) ((MR_Unsigned) 0U)))
      *ConsTypeInfos_10 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word PredIdTable_19;

      hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(PredicateTable_14, &PredIdTable_19);
      check_hlds__typecheck_clauses__accumulate_cons_type_infos_for_pred_ids_7_p_0(Info_6, PredIdTable_19, GoalId_9, PredIds_16, Arity_8, (MR_Word) ((MR_Unsigned) 0U), ConsTypeInfos_10);
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_clauses__accumulate_cons_type_infos_for_pred_ids_7_p_0(
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
      MR_Word PredId_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word PredIds_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ConsTypeInfos_24_24;
      MR_Word ModuleInfo_25;
      MR_Word ClassTable_26;
      MR_Word PredInfo_27;
      MR_Integer PredFormArityInt_28;
      MR_Word IsPredOrFunc_29;
      MR_Word PredClassContext_30;
      MR_Word PredTypeVarSet_31;
      MR_Word PredExistQVars_32;
      MR_Word CompleteArgTypes_33;
      MR_Word Purity_34;
      MR_Word Var_48;
      MR_Box conv0_PredInfo_27;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_ConsTypeInfos_0_6;

      check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(Info_1, &ModuleInfo_25);
      hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_25, &ClassTable_26);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_2, ((MR_Box) (PredId_18)), &conv0_PredInfo_27);
      PredInfo_27 = ((MR_Word) (conv0_PredInfo_27));
      hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_27, &Var_48);
      PredFormArityInt_28 = (MR_Integer) (Var_48);
      hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_27, &IsPredOrFunc_29);
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_27, &PredClassContext_30);
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_27, &PredTypeVarSet_31, &PredExistQVars_32, &CompleteArgTypes_33);
      hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_27, &Purity_34);
      succeeded = (IsPredOrFunc_29 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (PredFormArityInt_28 >= Arity_5);
        if (succeeded)
          succeeded = (PredExistQVars_32 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        MR_Word ArgTypes_35;
        MR_Word PredTypeParams_36;
        MR_Word PredType_37;
        MR_Word PredConstraints_38;
        MR_Word ConsTypeInfo_39;
        MR_Word Var_49;

        mercury__list__det_split_list_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Arity_5, CompleteArgTypes_33, &ArgTypes_35, &PredTypeParams_36);
        parse_tree__prog_type_construct__construct_higher_order_pred_type_3_p_0(Purity_34, PredTypeParams_36, &PredType_37);
        hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_26, PredTypeVarSet_31, GoalId_3, PredClassContext_30, &PredConstraints_38);
        {
          Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_49, 1) = ((MR_Box) (PredId_18));
        }
        {
          ConsTypeInfo_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ConsTypeInfo_39, 0) = ((MR_Box) (PredTypeVarSet_31));
          MR_hl_field(0, ConsTypeInfo_39, 1) = ((MR_Box) (PredExistQVars_32));
          MR_hl_field(0, ConsTypeInfo_39, 2) = ((MR_Box) (PredType_37));
          MR_hl_field(0, ConsTypeInfo_39, 3) = ((MR_Box) (ArgTypes_35));
          MR_hl_field(0, ConsTypeInfo_39, 4) = ((MR_Box) (PredConstraints_38));
          MR_hl_field(0, ConsTypeInfo_39, 5) = ((MR_Box) (Var_49));
        }
        {
          STATE_VARIABLE_ConsTypeInfos_24_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_ConsTypeInfos_24_24, 0) = ((MR_Box) (ConsTypeInfo_39));
          MR_hl_field(1, STATE_VARIABLE_ConsTypeInfos_24_24, 1) = ((MR_Box) (STATE_VARIABLE_ConsTypeInfos_0_6));
        }
      }
      else
      {
        MR_Integer PredAsFuncArity_40;
        MR_Integer Var_50;

        succeeded = (IsPredOrFunc_29 == (MR_Integer) 1);
        if (succeeded)
        {
          Var_50 = (MR_Integer) 1;
          PredAsFuncArity_40 = (MR_Integer) ((MR_Unsigned) PredFormArityInt_28 - (MR_Unsigned) Var_50);
          succeeded = (PredAsFuncArity_40 >= Arity_5);
          if (succeeded)
          {
            succeeded = (PredExistQVars_32 == (MR_Word) ((MR_Unsigned) 0U));
            if (!(succeeded))
              succeeded = (PredAsFuncArity_40 == Arity_5);
          }
        }
        if (succeeded)
        {
          MR_Word FuncArgTypes_41;
          MR_Word FuncTypeParams_42;
          MR_Word FuncArgTypeParams_43;
          MR_Word FuncReturnTypeParam_44;
          MR_Word FuncType_45;
          MR_Word Var_51;
          MR_Word PredConstraints_52;
          MR_Word ConsTypeInfo_53;
          MR_Box conv1_FuncReturnTypeParam_44;

          mercury__list__det_split_list_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Arity_5, CompleteArgTypes_33, &FuncArgTypes_41, &FuncTypeParams_42);
          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), FuncTypeParams_42, &FuncArgTypeParams_43, &conv1_FuncReturnTypeParam_44);
          FuncReturnTypeParam_44 = ((MR_Word) (conv1_FuncReturnTypeParam_44));
          if ((FuncArgTypeParams_43 == (MR_Word) ((MR_Unsigned) 0U)))
            FuncType_45 = FuncReturnTypeParam_44;
          else
            parse_tree__prog_type_construct__construct_higher_order_func_type_4_p_0(Purity_34, FuncArgTypeParams_43, FuncReturnTypeParam_44, &FuncType_45);
          hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_26, PredTypeVarSet_31, GoalId_3, PredClassContext_30, &PredConstraints_52);
          {
            Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_51, 1) = ((MR_Box) (PredId_18));
          }
          {
            ConsTypeInfo_53 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ConsTypeInfo_53, 0) = ((MR_Box) (PredTypeVarSet_31));
            MR_hl_field(0, ConsTypeInfo_53, 1) = ((MR_Box) (PredExistQVars_32));
            MR_hl_field(0, ConsTypeInfo_53, 2) = ((MR_Box) (FuncType_45));
            MR_hl_field(0, ConsTypeInfo_53, 3) = ((MR_Box) (FuncArgTypes_41));
            MR_hl_field(0, ConsTypeInfo_53, 4) = ((MR_Box) (PredConstraints_52));
            MR_hl_field(0, ConsTypeInfo_53, 5) = ((MR_Box) (Var_51));
          }
          {
            STATE_VARIABLE_ConsTypeInfos_24_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_ConsTypeInfos_24_24, 0) = ((MR_Box) (ConsTypeInfo_53));
            MR_hl_field(1, STATE_VARIABLE_ConsTypeInfos_24_24, 1) = ((MR_Box) (STATE_VARIABLE_ConsTypeInfos_0_6));
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

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__builtin_atomic_type_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 3:
          {
            MR_String String_8;
            MR_Word Var_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
            MR_Integer Var_12 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
            MR_Char Var_10;

            succeeded = (Var_12 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_Integer) 0);
              if (succeeded)
              {
                String_8 = ((MR_String) ((MR_hl_field(0, Var_11, (MR_Integer) 0))));
                *HeadVar__2_2 = (MR_String) "character";
                succeeded = mercury__string__char_to_string_2_p_1(&Var_10, String_8);
              }
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word IntConst_3 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));

            *HeadVar__2_2 = parse_tree__prog_data__type_name_of_int_const_1_f_0(IntConst_3);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 6:
          {
            *HeadVar__2_2 = (MR_String) "float";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 7:
          {
            *HeadVar__2_2 = (MR_String) "character";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 8:
          {
            *HeadVar__2_2 = (MR_String) "string";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word IDCKind_13 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 7);

            *HeadVar__2_2 = ((&check_hlds__typecheck_clauses_vector_common_6[0 + IDCKind_13]))->check_hlds__typecheck_clauses__vector_common_type_6_0__vct_6_f_0;
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  return succeeded;
}

static MR_Box MR_CALL 
check_hlds__typecheck_clauses__convert_cons_defn_list_7_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_47;

  conv0_LambdaHeadVar__2_47 = check_hlds__typecheck_clauses__IntroducedFrom__func__convert_cons_defn__2095__3_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_47));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__typecheck_clauses__convert_cons_defn_list_7_p_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  MR_bool succeeded;

  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word ConsDefn_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
    MR_Word ConsDefns_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
    MR_Word TypeCtor_25 = ((MR_Word) ((MR_hl_field(0, ConsDefn_16, (MR_Integer) 0))));
    MR_Word ConsTypeVarSet_26 = ((MR_Word) ((MR_hl_field(0, ConsDefn_16, (MR_Integer) 1))));
    MR_Word ConsTypeParams_27 = ((MR_Word) ((MR_hl_field(0, ConsDefn_16, (MR_Integer) 2))));
    MR_Word ConsTypeKinds_28 = ((MR_Word) ((MR_hl_field(0, ConsDefn_16, (MR_Integer) 3))));
    MR_Word MaybeExistConstraints_29 = ((MR_Word) ((MR_hl_field(0, ConsDefn_16, (MR_Integer) 4))));
    MR_Word Args_30 = ((MR_Word) ((MR_hl_field(0, ConsDefn_16, (MR_Integer) 5))));
    MR_Word ArgTypes_32;
    MR_Word TypeTable_33;
    MR_Word TypeDefn_34;
    MR_Word Body_35;
    MR_Word PredId_36;
    MR_Word ModuleInfo_37;
    MR_Word PredInfo_38;
    MR_Word PredStatus_39;
    MR_Word BodyDu_40;
    MR_Word GoalType_42;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;

    ArgTypes_32 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_4[3]), Args_30);
    check_hlds__typecheck_info__typecheck_info_get_type_table_2_p_0(HeadVar__1_1, &TypeTable_33);
    hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_33, TypeCtor_25, &TypeDefn_34);
    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_34, &Body_35);
    check_hlds__typecheck_info__typecheck_info_get_pred_id_2_p_0(HeadVar__1_1, &PredId_36);
    check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(HeadVar__1_1, &ModuleInfo_37);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_37, PredId_36, &PredInfo_38);
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_38, &PredStatus_39);
    succeeded = ((MR_tag((MR_Word) Body_35)) == (MR_Integer) 0);
    if (succeeded)
    {
      BodyDu_40 = (MR_Word) ((MR_Word) (Body_35));
      Var_57 = ((MR_Word) ((MR_hl_field(0, BodyDu_40, (MR_Integer) 4))));
      succeeded = (Var_57 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        hlds__hlds_pred__pred_info_get_goal_type_2_p_0(PredInfo_38, &GoalType_42);
        succeeded = ((MR_tag((MR_Word) GoalType_42)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_58 = ((MR_Unsigned) ((MR_hl_field(0, GoalType_42, (MR_Integer) 0))) & (MR_Integer) 3);
          succeeded = (Var_58 == (MR_Integer) 3);
        }
        succeeded = !(succeeded);
        if (succeeded)
        {
          succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_38);
          succeeded = !(succeeded);
          if (succeeded)
          {
            Var_59 = (MR_Word) (PredStatus_39);
            succeeded = (Var_59 != (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word TailConsErrors_22;
      MR_Word HeadConsError_24;

      {
        HeadConsError_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadConsError_24, 0) = ((MR_Box) (TypeCtor_25));
        MR_hl_field(1, HeadConsError_24, 1) = ((MR_Box) (TypeDefn_34));
      }
      check_hlds__typecheck_clauses__convert_cons_defn_list_7_p_1(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, ConsDefns_17, HeadVar__6_6, &TailConsErrors_22);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadConsError_24));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailConsErrors_22));
      }
    }
    else
    {
      MR_Word TypeStatus_43;
      MR_Word Var_61;
      MR_Word Var_62;

      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_34, &TypeStatus_43);
      Var_61 = (MR_Word) (TypeStatus_43);
      succeeded = (Var_61 == (MR_Word) ((MR_Unsigned) 4U));
      if (succeeded)
      {
        succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_38);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_62 = (MR_Word) (PredStatus_39);
          succeeded = (Var_62 != (MR_Word) ((MR_Unsigned) 0U));
        }
      }
      if (succeeded)
      {
        MR_Word HeadConsError_74;
        MR_Word TailConsErrors_78;

        check_hlds__typecheck_clauses__convert_cons_defn_list_7_p_1(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, ConsDefns_17, HeadVar__6_6, &TailConsErrors_78);
        HeadConsError_74 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_clauses_scalar_common_2[3])), (MR_Integer) 0))));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__7_7 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (HeadConsError_74));
          MR_hl_field(1, base, 1) = ((MR_Box) (TailConsErrors_78));
        }
      }
      else
      {
        MR_Word HeadMaybeConsTypeInfo_83;
        MR_Word TailConsTypeInfos_84;
        MR_Word TailConsErrors_85;

        succeeded = (HeadVar__3_3 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (MaybeExistConstraints_29 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MR_Word Var_63;

          {
            Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_63, 0) = ((MR_Box) (TypeCtor_25));
          }
          {
            HeadMaybeConsTypeInfo_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadMaybeConsTypeInfo_83, 0) = ((MR_Box) (Var_63));
          }
        }
        else
        {
          MR_Word ConsTypeArgs_44;
          MR_Word ConsType_45;
          MR_Word ExistProgConstraints_48;
          MR_Word ProgConstraints_52;
          MR_Word ClassTable_54;
          MR_Word Constraints_55;
          MR_Word Var_64;
          MR_Word Var_65;

          parse_tree__prog_type__var_list_to_type_list_3_p_0(ConsTypeKinds_28, ConsTypeParams_27, &ConsTypeArgs_44);
          parse_tree__prog_type_construct__construct_type_3_p_0(TypeCtor_25, ConsTypeArgs_44, &ConsType_45);
          if ((MaybeExistConstraints_29 == (MR_Word) ((MR_Unsigned) 0U)))
            ExistProgConstraints_48 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word ExistConstraints_49 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_29), (MR_Integer) 1));

            ExistProgConstraints_48 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_49, (MR_Integer) 1))));
          }
          {
            ProgConstraints_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ProgConstraints_52, 0) = ((MR_Box) (ExistProgConstraints_48));
            MR_hl_field(0, ProgConstraints_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_37, &ClassTable_54);
          hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_54, ConsTypeVarSet_26, HeadVar__2_2, ProgConstraints_52, &Constraints_55);
          {
            Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_65, 0) = ((MR_Box) (TypeCtor_25));
            MR_hl_field(0, Var_65, 1) = ((MR_Box) (HeadVar__4_4));
          }
          {
            Var_64 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_64, 0) = ((MR_Box) (ConsTypeVarSet_26));
            MR_hl_field(0, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Var_64, 2) = ((MR_Box) (ConsType_45));
            MR_hl_field(0, Var_64, 3) = ((MR_Box) (ArgTypes_32));
            MR_hl_field(0, Var_64, 4) = ((MR_Box) (Constraints_55));
            MR_hl_field(0, Var_64, 5) = ((MR_Box) (Var_65));
          }
          HeadMaybeConsTypeInfo_83 = (MR_Word) ((MR_Word) (Var_64));
        }
        check_hlds__typecheck_clauses__convert_cons_defn_list_7_p_1(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, ConsDefns_17, &TailConsTypeInfos_84, &TailConsErrors_85);
        if (((MR_tag((MR_Word) HeadMaybeConsTypeInfo_83)) == (MR_Integer) 1))
        {
          MR_Word HeadConsError_80 = ((MR_Word) ((MR_hl_field(1, HeadMaybeConsTypeInfo_83, (MR_Integer) 0))));

          *HeadVar__6_6 = TailConsTypeInfos_84;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__7_7 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (HeadConsError_80));
            MR_hl_field(1, base, 1) = ((MR_Box) (TailConsErrors_85));
          }
        }
        else
        {
          MR_Word HeadConsTypeInfo_23 = (MR_Word) ((MR_Word) (HeadMaybeConsTypeInfo_83));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__6_6 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (HeadConsTypeInfo_23));
            MR_hl_field(1, base, 1) = ((MR_Box) (TailConsTypeInfos_84));
          }
          *HeadVar__7_7 = TailConsErrors_85;
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__split_cons_errors_3_p_0(
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
    MR_Word MaybeConsInfo_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word MaybeConsInfos_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word InfosTail_8;
    MR_Word ErrorsTail_9;

    check_hlds__typecheck_clauses__split_cons_errors_3_p_0(MaybeConsInfos_5, &InfosTail_8, &ErrorsTail_9);
    if (((MR_tag((MR_Word) MaybeConsInfo_4)) == (MR_Integer) 1))
    {
      MR_Word ConsError_11 = ((MR_Word) ((MR_hl_field(1, MaybeConsInfo_4, (MR_Integer) 0))));

      *HeadVar__2_2 = InfosTail_8;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ConsError_11));
        MR_hl_field(1, base, 1) = ((MR_Box) (ErrorsTail_9));
      }
    }
    else
    {
      MR_Word ConsInfo_10 = (MR_Word) ((MR_Word) (MaybeConsInfo_4));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ConsInfo_10));
        MR_hl_field(1, base, 1) = ((MR_Box) (InfosTail_8));
      }
      *HeadVar__3_3 = ErrorsTail_9;
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_var_functor_types_4_p_0(
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
      MR_Word ConsTypeAssign_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ConsTypeAssigns_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ArgsTypeAssignSet_15_15;
      MR_Word TypeAssign0_16 = ((MR_Word) ((MR_hl_field(0, ConsTypeAssign_10, (MR_Integer) 0))));
      MR_Word ConsType_17 = ((MR_Word) ((MR_hl_field(0, ConsTypeAssign_10, (MR_Integer) 1))));
      MR_Word ConsArgTypes_18 = ((MR_Word) ((MR_hl_field(0, ConsTypeAssign_10, (MR_Integer) 2))));
      MR_Word Source0_19 = ((MR_Word) ((MR_hl_field(0, ConsTypeAssign_10, (MR_Integer) 3))));
      MR_Word VarTypes0_20;
      MR_Word MaybeOldVarType_21;
      MR_Word VarTypes_22;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_3;

      check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign0_16, &VarTypes0_20);
      parse_tree__vartypes__search_insert_var_type_5_p_0(Var_1, ConsType_17, &MaybeOldVarType_21, VarTypes0_20, &VarTypes_22);
      if ((MaybeOldVarType_21 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word TypeAssign_30;
        MR_Word ArgsTypeAssign_31;
        MR_Word Var_34;
        MR_Word Var_35;

        check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_22, TypeAssign0_16, &TypeAssign_30);
        Var_34 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[6]));
        Var_35 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[7]));
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_28, 2) = ((MR_Box) (Var_34));
          MR_hl_field(0, Var_28, 3) = ((MR_Box) (Var_35));
        }
        {
          Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_29, 0) = ((MR_Box) (Source0_19));
        }
        {
          ArgsTypeAssign_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ArgsTypeAssign_31, 0) = ((MR_Box) (TypeAssign_30));
          MR_hl_field(0, ArgsTypeAssign_31, 1) = ((MR_Box) (ConsArgTypes_18));
          MR_hl_field(0, ArgsTypeAssign_31, 2) = ((MR_Box) (Var_28));
          MR_hl_field(0, ArgsTypeAssign_31, 3) = ((MR_Box) (Var_29));
        }
        {
          STATE_VARIABLE_ArgsTypeAssignSet_15_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_ArgsTypeAssignSet_15_15, 0) = ((MR_Box) (ArgsTypeAssign_31));
          MR_hl_field(1, STATE_VARIABLE_ArgsTypeAssignSet_15_15, 1) = ((MR_Box) (STATE_VARIABLE_ArgsTypeAssignSet_0_3));
        }
      }
      else
      {
        MR_Word OldVarType_23 = ((MR_Word) ((MR_hl_field(1, MaybeOldVarType_21, (MR_Integer) 0))));
        MR_Word TypeAssign_24;
        MR_Word ExistQTVars_40;
        MR_Word TypeBindings0_41;
        MR_Word TypeBindings_42;

        check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign0_16, &ExistQTVars_40);
        check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign0_16, &TypeBindings0_41);
        succeeded = parse_tree__prog_type_unify__type_unify_5_p_0(ConsType_17, OldVarType_23, ExistQTVars_40, TypeBindings0_41, &TypeBindings_42);
        if (succeeded)
        {
          check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_42, TypeAssign0_16, &TypeAssign_24);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word ArgsTypeAssign_25;
          MR_Word Var_26;
          MR_Word Var_27;
          MR_Word Var_45;
          MR_Word Var_46;

          Var_45 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[6]));
          Var_46 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[7]));
          {
            Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Var_26, 2) = ((MR_Box) (Var_45));
            MR_hl_field(0, Var_26, 3) = ((MR_Box) (Var_46));
          }
          {
            Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_27, 0) = ((MR_Box) (Source0_19));
          }
          {
            ArgsTypeAssign_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ArgsTypeAssign_25, 0) = ((MR_Box) (TypeAssign_24));
            MR_hl_field(0, ArgsTypeAssign_25, 1) = ((MR_Box) (ConsArgTypes_18));
            MR_hl_field(0, ArgsTypeAssign_25, 2) = ((MR_Box) (Var_26));
            MR_hl_field(0, ArgsTypeAssign_25, 3) = ((MR_Box) (Var_27));
          }
          {
            STATE_VARIABLE_ArgsTypeAssignSet_15_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_ArgsTypeAssignSet_15_15, 0) = ((MR_Box) (ArgsTypeAssign_25));
            MR_hl_field(1, STATE_VARIABLE_ArgsTypeAssignSet_15_15, 1) = ((MR_Box) (STATE_VARIABLE_ArgsTypeAssignSet_0_3));
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
check_hlds__typecheck_clauses__get_cons_type_assigns_for_cons_defns_4_p_0(
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
      MR_Word ConsTypeInfo_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ConsTypeInfos_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ConsTypeAssignSet_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ConsTypeAssignSet_0_3;

      check_hlds__typecheck_clauses__get_cons_type_assigns_for_cons_defn_4_p_0(ConsTypeInfo_9, TypeAssigns_2, STATE_VARIABLE_ConsTypeAssignSet_0_3, &STATE_VARIABLE_ConsTypeAssignSet_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ConsTypeInfos_10;
      next_value_of_STATE_VARIABLE_ConsTypeAssignSet_0_3 = STATE_VARIABLE_ConsTypeAssignSet_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ConsTypeAssignSet_0_3 = next_value_of_STATE_VARIABLE_ConsTypeAssignSet_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__get_cons_type_assigns_for_cons_defn_4_p_0(
  MR_Word ConsTypeInfo_1,
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
      MR_Word TypeAssign_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TypeAssigns_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ConsTypeAssign_13;
      MR_Word STATE_VARIABLE_ConsTypeAssignSet_16_16;
      MR_Word ConsTypeVarSet_17 = ((MR_Word) ((MR_hl_field(0, ConsTypeInfo_1, (MR_Integer) 0))));
      MR_Word ConsExistQVars0_18 = ((MR_Word) ((MR_hl_field(0, ConsTypeInfo_1, (MR_Integer) 1))));
      MR_Word ConsType0_19 = ((MR_Word) ((MR_hl_field(0, ConsTypeInfo_1, (MR_Integer) 2))));
      MR_Word ArgTypes0_20 = ((MR_Word) ((MR_hl_field(0, ConsTypeInfo_1, (MR_Integer) 3))));
      MR_Word ClassConstraints0_21 = ((MR_Word) ((MR_hl_field(0, ConsTypeInfo_1, (MR_Integer) 4))));
      MR_Word Source_22 = ((MR_Word) ((MR_hl_field(0, ConsTypeInfo_1, (MR_Integer) 5))));
      MR_Word ConsType_23;
      MR_Word ArgTypes_24;
      MR_Word TypeAssign2_25;
      MR_Word ConstraintsToAdd_26;
      MR_Word OldConstraints_34;
      MR_Word ClassConstraints_35;
      MR_Word TypeAssign_36;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ConsTypeAssignSet_0_3;

      succeeded = mercury__varset__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), ConsTypeVarSet_17);
      if (succeeded)
      {
        ConsType_23 = ConsType0_19;
        ArgTypes_24 = ArgTypes0_20;
        TypeAssign2_25 = TypeAssign_10;
        ConstraintsToAdd_26 = ClassConstraints0_21;
      }
      else
      {
        MR_Word TypeAssign1_27;
        MR_Word ConsType1_28;
        MR_Word ArgTypes1_29;
        MR_Word Renaming_30;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word TypeVarSet0_43;
        MR_Word TypeVarSet_44;

        {
          Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_37, 0) = ((MR_Box) (ConsType0_19));
          MR_hl_field(1, Var_37, 1) = ((MR_Box) (ArgTypes0_20));
        }
        check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign_10, &TypeVarSet0_43);
        parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TypeVarSet0_43, ConsTypeVarSet_17, &TypeVarSet_44, &Renaming_30);
        parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_30, Var_37, &Var_38);
        check_hlds__type_assign__type_assign_set_typevarset_3_p_0(TypeVarSet_44, TypeAssign_10, &TypeAssign1_27);
        succeeded = (Var_38 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ConsType1_28 = ((MR_Word) ((MR_hl_field(1, Var_38, (MR_Integer) 0))));
          ArgTypes1_29 = ((MR_Word) ((MR_hl_field(1, Var_38, (MR_Integer) 1))));
          {
            MR_Word ConsExistQVars_31;
            MR_Word ExistQTVars0_32;
            MR_Word ExistQTVars_33;

            parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_30, ConsExistQVars0_18, &ConsExistQVars_31);
            check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0(Renaming_30, ClassConstraints0_21, &ConstraintsToAdd_26);
            check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign1_27, &ExistQTVars0_32);
            ExistQTVars_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]), ConsExistQVars_31, ExistQTVars0_32);
            check_hlds__type_assign__type_assign_set_existq_tvars_3_p_0(ExistQTVars_33, TypeAssign1_27, &TypeAssign2_25);
            ConsType_23 = ConsType1_28;
            ArgTypes_24 = ArgTypes1_29;
          }
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_clauses.get_cons_type_assign\'/3", (MR_String) "type_assign_rename_apart failed");
            return;
          }
      }
      check_hlds__type_assign__type_assign_get_typeclass_constraints_2_p_0(TypeAssign2_25, &OldConstraints_34);
      hlds__hlds_class__merge_hlds_constraints_3_p_0(ConstraintsToAdd_26, OldConstraints_34, &ClassConstraints_35);
      check_hlds__type_assign__type_assign_set_typeclass_constraints_3_p_0(ClassConstraints_35, TypeAssign2_25, &TypeAssign_36);
      {
        ConsTypeAssign_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ConsTypeAssign_13, 0) = ((MR_Box) (TypeAssign_36));
        MR_hl_field(0, ConsTypeAssign_13, 1) = ((MR_Box) (ConsType_23));
        MR_hl_field(0, ConsTypeAssign_13, 2) = ((MR_Box) (ArgTypes_24));
        MR_hl_field(0, ConsTypeAssign_13, 3) = ((MR_Box) (Source_22));
      }
      {
        STATE_VARIABLE_ConsTypeAssignSet_16_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_ConsTypeAssignSet_16_16, 0) = ((MR_Box) (ConsTypeAssign_13));
        MR_hl_field(1, STATE_VARIABLE_ConsTypeAssignSet_16_16, 1) = ((MR_Box) (STATE_VARIABLE_ConsTypeAssignSet_0_3));
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

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_var_has_type_8_p_0(
  MR_Word GoalContext_9,
  MR_Word Context_10,
  MR_Word Var_11,
  MR_Word Type_12,
  MR_Word TypeAssignSet0_13,
  MR_Word * TypeAssignSet_14,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_bool succeeded;
  MR_Word TypeAssignSet1_16;

  check_hlds__typecheck_clauses__typecheck_var_has_type_2_5_p_0(TypeAssignSet0_13, Var_11, Type_12, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_16);
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
    SpecAndMaybeActualExpected_19 = check_hlds__typecheck_errors__report_error_var_has_wrong_type_6_f_0(STATE_VARIABLE_Info_0_22, GoalContext_9, Context_10, Var_11, Type_12, TypeAssignSet0_13);
    Spec_20 = ((MR_Word) ((MR_hl_field(0, SpecAndMaybeActualExpected_19, (MR_Integer) 0))));
    check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_20, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
  }
  else
  {
    *TypeAssignSet_14 = TypeAssignSet1_16;
    *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_call_pred_id_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_call_pred_id_9_p_0(
  MR_Word ArgVectorKind_10,
  MR_Word Context_11,
  MR_Word GoalId_12,
  MR_Word PredId_13,
  MR_Word ArgVars_14,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_25,
  MR_Word * STATE_VARIABLE_TypeAssignSet_26,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_17;
  MR_Word PredInfo_18;
  MR_Word PredTypeVarSet_19;
  MR_Word PredExistQVars_20;
  MR_Word PredArgTypes_21;
  MR_Word PredClassContext_22;
  MR_Word Var_29;
  MR_Word Var_30;

  check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_27, &ModuleInfo_17);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_17, PredId_13, &PredInfo_18);
  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_18, &PredTypeVarSet_19, &PredExistQVars_20, &PredArgTypes_21);
  hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_18, &PredClassContext_22);
  succeeded = mercury__varset__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), PredTypeVarSet_19);
  if (succeeded)
  {
    Var_29 = ((MR_Word) ((MR_hl_field(0, PredClassContext_22, (MR_Integer) 0))));
    Var_30 = ((MR_Word) ((MR_hl_field(0, PredClassContext_22, (MR_Integer) 1))));
    succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word Specs_36;
    MR_Word MaybeArgVectorTypeErrors_37;
    MR_Word ArgVectorTypeErrors_38;
    MR_Word Var_46;

    check_hlds__typecheck_clauses__typecheck_vars_have_types_in_arg_vector_12_p_0(STATE_VARIABLE_Info_0_27, Context_11, ArgVectorKind_10, (MR_Integer) 1, ArgVars_14, PredArgTypes_21, STATE_VARIABLE_TypeAssignSet_0_25, STATE_VARIABLE_TypeAssignSet_26, (MR_Word) ((MR_Unsigned) 0U), &Specs_36, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_clauses_scalar_common_2[0])), &MaybeArgVectorTypeErrors_37);
    succeeded = (MaybeArgVectorTypeErrors_37 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgVectorTypeErrors_38 = ((MR_Word) ((MR_hl_field(1, MaybeArgVectorTypeErrors_37, (MR_Integer) 0))));
      succeeded = (ArgVectorTypeErrors_38 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_46 = ((MR_Word) ((MR_hl_field(1, ArgVectorTypeErrors_38, (MR_Integer) 1))));
        succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
    }
    if (succeeded)
    {
      MR_Word AllArgsSpec_42;

      AllArgsSpec_42 = check_hlds__typecheck_errors__report_error_wrong_types_in_arg_vector_5_f_0(STATE_VARIABLE_Info_0_27, Context_11, ArgVectorKind_10, *STATE_VARIABLE_TypeAssignSet_26, ArgVectorTypeErrors_38);
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(AllArgsSpec_42, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28);
    }
    else
    {
      MR_Box conv1_STATE_VARIABLE_Info_28;

      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_4[2]), Specs_36, ((MR_Box) (STATE_VARIABLE_Info_0_27)), &conv1_STATE_VARIABLE_Info_28);
      *STATE_VARIABLE_Info_28 = ((MR_Word) (conv1_STATE_VARIABLE_Info_28));
    }
  }
  else
  {
    MR_Word ClassTable_23;
    MR_Word PredConstraints_24;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word ArgsTypeAssignSet0_50;
    MR_Word ArgsTypeAssignSet_51;

    hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_17, &ClassTable_23);
    hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_23, PredTypeVarSet_19, GoalId_12, PredClassContext_22, &PredConstraints_24);
    {
      Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_33, 0) = ((MR_Box) (PredId_13));
    }
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (ArgVectorKind_10));
    }
    check_hlds__typecheck_clauses__add_renamed_apart_arg_type_assigns_8_p_0(Var_33, PredTypeVarSet_19, PredExistQVars_20, PredArgTypes_21, PredConstraints_24, STATE_VARIABLE_TypeAssignSet_0_25, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet0_50);
    check_hlds__typecheck_clauses__typecheck_vars_have_arg_types_8_p_0(Var_34, Context_11, (MR_Integer) 1, ArgVars_14, ArgsTypeAssignSet0_50, &ArgsTypeAssignSet_51, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28);
    *STATE_VARIABLE_TypeAssignSet_26 = check_hlds__type_assign__convert_args_type_assign_set_1_f_0(ArgsTypeAssignSet_51);
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_call_pred_name_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_call_pred_name_9_p_0(
  MR_Word SymName_10,
  MR_Word Context_11,
  MR_Word GoalId_12,
  MR_Word ArgVars_13,
  MR_Word * PredId_14,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_30,
  MR_Word * STATE_VARIABLE_TypeAssignSet_31,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_17;
  MR_Word PredicateTable_18;
  MR_Word PredFormArity_19;
  MR_Word SymNamePredFormArity_20;
  MR_Word IsFullyQualified_21;
  MR_Word PredIds_22;

  check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_32, &ModuleInfo_17);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_17, &PredicateTable_18);
  PredFormArity_19 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[1]), ArgVars_13);
  {
    SymNamePredFormArity_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SymNamePredFormArity_20, 0) = ((MR_Box) (SymName_10));
    MR_hl_field(0, SymNamePredFormArity_20, 1) = ((MR_Box) (PredFormArity_19));
  }
  check_hlds__typecheck_info__typecheck_info_get_calls_are_fully_qualified_2_p_0(STATE_VARIABLE_Info_0_32, &IsFullyQualified_21);
  hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredicateTable_18, IsFullyQualified_21, (MR_Integer) 0, SymName_10, PredFormArity_19, &PredIds_22);
  if ((PredIds_22 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ClauseContext_23;
    MR_Word Spec_24;

    *PredId_14 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_32, &ClauseContext_23);
    Spec_24 = check_hlds__typecheck_error_undef__report_error_call_to_undef_pred_3_f_0(ClauseContext_23, Context_11, SymNamePredFormArity_20);
    check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_24, STATE_VARIABLE_Info_0_32, STATE_VARIABLE_Info_33);
    *STATE_VARIABLE_TypeAssignSet_31 = STATE_VARIABLE_TypeAssignSet_0_30;
  }
  else
  {
    MR_Word HeadPredId_25 = ((MR_Word) ((MR_hl_field(1, PredIds_22, (MR_Integer) 0))));
    MR_Word TailPredIds_26 = ((MR_Word) ((MR_hl_field(1, PredIds_22, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_TypeAssignSet_36_36;
    MR_Word STATE_VARIABLE_Info_37_37;

    if ((TailPredIds_26 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ArgVectorKind_27;
      MR_Word ModuleInfo_39;
      MR_Word PredInfo_40;
      MR_Word PredTypeVarSet_41;
      MR_Word PredExistQVars_42;
      MR_Word PredArgTypes_43;
      MR_Word PredClassContext_44;
      MR_Word Var_47;
      MR_Word Var_48;

      *PredId_14 = HeadPredId_25;
      {
        ArgVectorKind_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ArgVectorKind_27, 0) = ((MR_Box) (*PredId_14));
      }
      check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_32, &ModuleInfo_39);
      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_39, *PredId_14, &PredInfo_40);
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_40, &PredTypeVarSet_41, &PredExistQVars_42, &PredArgTypes_43);
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_40, &PredClassContext_44);
      succeeded = mercury__varset__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), PredTypeVarSet_41);
      if (succeeded)
      {
        Var_47 = ((MR_Word) ((MR_hl_field(0, PredClassContext_44, (MR_Integer) 0))));
        Var_48 = ((MR_Word) ((MR_hl_field(0, PredClassContext_44, (MR_Integer) 1))));
        succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        MR_Word Specs_52;
        MR_Word MaybeArgVectorTypeErrors_53;
        MR_Word ArgVectorTypeErrors_54;
        MR_Word Var_62;

        check_hlds__typecheck_clauses__typecheck_vars_have_types_in_arg_vector_12_p_0(STATE_VARIABLE_Info_0_32, Context_11, ArgVectorKind_27, (MR_Integer) 1, ArgVars_13, PredArgTypes_43, STATE_VARIABLE_TypeAssignSet_0_30, &STATE_VARIABLE_TypeAssignSet_36_36, (MR_Word) ((MR_Unsigned) 0U), &Specs_52, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_clauses_scalar_common_2[0])), &MaybeArgVectorTypeErrors_53);
        succeeded = (MaybeArgVectorTypeErrors_53 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgVectorTypeErrors_54 = ((MR_Word) ((MR_hl_field(1, MaybeArgVectorTypeErrors_53, (MR_Integer) 0))));
          succeeded = (ArgVectorTypeErrors_54 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_62 = ((MR_Word) ((MR_hl_field(1, ArgVectorTypeErrors_54, (MR_Integer) 1))));
            succeeded = (Var_62 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
            }
          }
        }
        if (succeeded)
        {
          MR_Word AllArgsSpec_58;

          AllArgsSpec_58 = check_hlds__typecheck_errors__report_error_wrong_types_in_arg_vector_5_f_0(STATE_VARIABLE_Info_0_32, Context_11, ArgVectorKind_27, STATE_VARIABLE_TypeAssignSet_36_36, ArgVectorTypeErrors_54);
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(AllArgsSpec_58, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_37_37);
        }
        else
        {
          MR_Box conv1_STATE_VARIABLE_Info_37_37;

          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_4[1]), Specs_52, ((MR_Box) (STATE_VARIABLE_Info_0_32)), &conv1_STATE_VARIABLE_Info_37_37);
          STATE_VARIABLE_Info_37_37 = ((MR_Word) (conv1_STATE_VARIABLE_Info_37_37));
        }
      }
      else
      {
        MR_Word ClassTable_45;
        MR_Word PredConstraints_46;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word ArgsTypeAssignSet0_66;
        MR_Word ArgsTypeAssignSet_67;

        hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_39, &ClassTable_45);
        hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_45, PredTypeVarSet_41, GoalId_12, PredClassContext_44, &PredConstraints_46);
        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (*PredId_14));
        }
        {
          Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_50, 0) = ((MR_Box) (ArgVectorKind_27));
        }
        check_hlds__typecheck_clauses__add_renamed_apart_arg_type_assigns_8_p_0(Var_49, PredTypeVarSet_41, PredExistQVars_42, PredArgTypes_43, PredConstraints_46, STATE_VARIABLE_TypeAssignSet_0_30, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet0_66);
        check_hlds__typecheck_clauses__typecheck_vars_have_arg_types_8_p_0(Var_50, Context_11, (MR_Integer) 1, ArgVars_13, ArgsTypeAssignSet0_66, &ArgsTypeAssignSet_67, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_37_37);
        STATE_VARIABLE_TypeAssignSet_36_36 = check_hlds__type_assign__convert_args_type_assign_set_1_f_0(ArgsTypeAssignSet_67);
      }
    }
    else
    {
      MR_Word PredFormArity_70;
      MR_Word SymNamePredFormArity_71;
      MR_Word Symbol_72;
      MR_Word ModuleInfo_73;
      MR_Word ClassTable_74;
      MR_Word PredicateTable_75;
      MR_Word PredIdTable_76;
      MR_Word ArgsTypeAssignSet0_77;
      MR_Word VarVectorKind_78;
      MR_Word ArgsTypeAssignSet_79;
      MR_Word STATE_VARIABLE_Info_30_80;
      MR_Word Var_82;
      MR_Word PredId_94;
      MR_Word PredIds_95;
      MR_Word PredInfo_97;
      MR_Word PredTypeVarSet_98;
      MR_Word PredExistQVars_99;
      MR_Word PredArgTypes_100;
      MR_Word PredClassContext_101;
      MR_Word TVarSet_102;
      MR_Word PredConstraints_103;
      MR_Word Var_106;
      MR_Word STATE_VARIABLE_ArgsTypeAssignSet_32_107;
      MR_Box conv2_PredInfo_97;

      PredFormArity_70 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[1]), ArgVars_13);
      {
        SymNamePredFormArity_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SymNamePredFormArity_71, 0) = ((MR_Box) (SymName_10));
        MR_hl_field(0, SymNamePredFormArity_71, 1) = ((MR_Box) (PredFormArity_70));
      }
      {
        Symbol_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Symbol_72, 0) = ((MR_Box) (SymNamePredFormArity_71));
        MR_hl_field(0, Symbol_72, 1) = ((MR_Box) (PredIds_22));
      }
      check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_p_0(Symbol_72, Context_11, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_30_80);
      check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(STATE_VARIABLE_Info_30_80, &ModuleInfo_73);
      hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_73, &ClassTable_74);
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_73, &PredicateTable_75);
      hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(PredicateTable_75, &PredIdTable_76);
      PredId_94 = ((MR_Word) ((MR_hl_field(1, PredIds_22, (MR_Integer) 0))));
      PredIds_95 = ((MR_Word) ((MR_hl_field(1, PredIds_22, (MR_Integer) 1))));
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable_76, ((MR_Box) (PredId_94)), &conv2_PredInfo_97);
      PredInfo_97 = ((MR_Word) (conv2_PredInfo_97));
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_97, &PredTypeVarSet_98, &PredExistQVars_99, &PredArgTypes_100);
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_97, &PredClassContext_101);
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_97, &TVarSet_102);
      hlds__hlds_class__make_body_hlds_constraints_5_p_0(ClassTable_74, TVarSet_102, GoalId_12, PredClassContext_101, &PredConstraints_103);
      {
        Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_106, 0) = ((MR_Box) (PredId_94));
      }
      check_hlds__typecheck_clauses__add_renamed_apart_arg_type_assigns_8_p_0(Var_106, PredTypeVarSet_98, PredExistQVars_99, PredArgTypes_100, PredConstraints_103, STATE_VARIABLE_TypeAssignSet_0_30, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_ArgsTypeAssignSet_32_107);
      check_hlds__typecheck_clauses__get_overloaded_pred_arg_types_7_p_0(PredIdTable_76, ClassTable_74, GoalId_12, PredIds_95, STATE_VARIABLE_TypeAssignSet_0_30, STATE_VARIABLE_ArgsTypeAssignSet_32_107, &ArgsTypeAssignSet0_77);
      {
        Var_82 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_82, 0) = ((MR_Box) (SymNamePredFormArity_71));
      }
      {
        VarVectorKind_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, VarVectorKind_78, 0) = ((MR_Box) (Var_82));
      }
      check_hlds__typecheck_clauses__typecheck_vars_have_arg_types_8_p_0(VarVectorKind_78, Context_11, (MR_Integer) 1, ArgVars_13, ArgsTypeAssignSet0_77, &ArgsTypeAssignSet_79, STATE_VARIABLE_Info_30_80, &STATE_VARIABLE_Info_37_37);
      STATE_VARIABLE_TypeAssignSet_36_36 = check_hlds__type_assign__convert_args_type_assign_set_1_f_0(ArgsTypeAssignSet_79);
      *PredId_14 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
    check_hlds__typeclasses__perform_context_reduction_5_p_0(Context_11, STATE_VARIABLE_TypeAssignSet_36_36, STATE_VARIABLE_TypeAssignSet_31, STATE_VARIABLE_Info_37_37, STATE_VARIABLE_Info_33);
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__get_overloaded_pred_arg_types_7_p_0(
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
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ArgsTypeAssignSet_7 = STATE_VARIABLE_ArgsTypeAssignSet_0_6;
    else
    {
      MR_Word PredId_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word PredIds_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word PredInfo_22;
      MR_Word PredTypeVarSet_23;
      MR_Word PredExistQVars_24;
      MR_Word PredArgTypes_25;
      MR_Word PredClassContext_26;
      MR_Word TVarSet_27;
      MR_Word PredConstraints_28;
      MR_Word Var_31;
      MR_Word STATE_VARIABLE_ArgsTypeAssignSet_32_32;
      MR_Box conv0_PredInfo_22;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_6;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), HeadVar__1_1, ((MR_Box) (PredId_18)), &conv0_PredInfo_22);
      PredInfo_22 = ((MR_Word) (conv0_PredInfo_22));
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_22, &PredTypeVarSet_23, &PredExistQVars_24, &PredArgTypes_25);
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_22, &PredClassContext_26);
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_22, &TVarSet_27);
      hlds__hlds_class__make_body_hlds_constraints_5_p_0(HeadVar__2_2, TVarSet_27, HeadVar__3_3, PredClassContext_26, &PredConstraints_28);
      {
        Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_31, 0) = ((MR_Box) (PredId_18));
      }
      check_hlds__typecheck_clauses__add_renamed_apart_arg_type_assigns_8_p_0(Var_31, PredTypeVarSet_23, PredExistQVars_24, PredArgTypes_25, PredConstraints_28, HeadVar__5_5, STATE_VARIABLE_ArgsTypeAssignSet_0_6, &STATE_VARIABLE_ArgsTypeAssignSet_32_32);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = PredIds_19;
      next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_6 = STATE_VARIABLE_ArgsTypeAssignSet_32_32;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_ArgsTypeAssignSet_0_6 = next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_event_call_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_event_call_7_p_0(
  MR_Word Context_8,
  MR_String EventName_9,
  MR_Word ArgVars_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_21,
  MR_Word * STATE_VARIABLE_TypeAssignSet_22,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_13;
  MR_Word EventSet_14;
  MR_Word EventSpecMap_15;
  MR_Word EventArgTypes_16;

  check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_23, &ModuleInfo_13);
  hlds__hlds_module__module_info_get_event_set_2_p_0(ModuleInfo_13, &EventSet_14);
  EventSpecMap_15 = ((MR_Word) ((MR_hl_field(0, EventSet_14, (MR_Integer) 1))));
  succeeded = parse_tree__prog_event__event_arg_types_3_p_0(EventSpecMap_15, EventName_9, &EventArgTypes_16);
  if (succeeded)
  {
    MR_Integer NumArgVars_17;
    MR_Integer NumEventArgTypes_18;

    mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[1]), ArgVars_10, &NumArgVars_17);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), EventArgTypes_16, &NumEventArgTypes_18);
    succeeded = (NumArgVars_17 == NumEventArgTypes_18);
    if (succeeded)
    {
      MR_Word ArgVectorKind_19;
      MR_Word Specs_33;
      MR_Word MaybeArgVectorTypeErrors_34;
      MR_Word ArgVectorTypeErrors_35;
      MR_Word Var_43;

      {
        ArgVectorKind_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ArgVectorKind_19, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, ArgVectorKind_19, 1) = ((MR_Box) (EventName_9));
      }
      check_hlds__typecheck_clauses__typecheck_vars_have_types_in_arg_vector_12_p_0(STATE_VARIABLE_Info_0_23, Context_8, ArgVectorKind_19, (MR_Integer) 1, ArgVars_10, EventArgTypes_16, STATE_VARIABLE_TypeAssignSet_0_21, STATE_VARIABLE_TypeAssignSet_22, (MR_Word) ((MR_Unsigned) 0U), &Specs_33, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_clauses_scalar_common_2[0])), &MaybeArgVectorTypeErrors_34);
      succeeded = (MaybeArgVectorTypeErrors_34 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgVectorTypeErrors_35 = ((MR_Word) ((MR_hl_field(1, MaybeArgVectorTypeErrors_34, (MR_Integer) 0))));
        succeeded = (ArgVectorTypeErrors_35 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_43 = ((MR_Word) ((MR_hl_field(1, ArgVectorTypeErrors_35, (MR_Integer) 1))));
          succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
      {
        MR_Word AllArgsSpec_39;

        AllArgsSpec_39 = check_hlds__typecheck_errors__report_error_wrong_types_in_arg_vector_5_f_0(STATE_VARIABLE_Info_0_23, Context_8, ArgVectorKind_19, *STATE_VARIABLE_TypeAssignSet_22, ArgVectorTypeErrors_35);
        check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(AllArgsSpec_39, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
      }
      else
      {
        MR_Box conv1_STATE_VARIABLE_Info_24;

        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_4[0]), Specs_33, ((MR_Box) (STATE_VARIABLE_Info_0_23)), &conv1_STATE_VARIABLE_Info_24);
        *STATE_VARIABLE_Info_24 = ((MR_Word) (conv1_STATE_VARIABLE_Info_24));
      }
    }
    else
    {
      MR_Word Spec_20;

      Spec_20 = check_hlds__typecheck_error_undef__report_error_undef_event_arity_4_f_0(Context_8, EventName_9, EventArgTypes_16, ArgVars_10);
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_20, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
      *STATE_VARIABLE_TypeAssignSet_22 = STATE_VARIABLE_TypeAssignSet_0_21;
    }
  }
  else
  {
    MR_Word Spec_29;

    Spec_29 = check_hlds__typecheck_error_undef__report_error_undef_event_2_f_0(Context_8, EventName_9);
    check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_29, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
    *STATE_VARIABLE_TypeAssignSet_22 = STATE_VARIABLE_TypeAssignSet_0_21;
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_vars_have_types_in_arg_vector_12_p_0(
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
    MR_bool succeeded;

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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_clauses.typecheck_vars_have_types_in_arg_vector\'/12", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_85 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Var_86 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));

      if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_clauses.typecheck_vars_have_types_in_arg_vector\'/12", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word Type_66 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
        MR_Word Types_67 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_TypeAssignSet_77_77;
        MR_Word STATE_VARIABLE_Specs_78_78;
        MR_Word STATE_VARIABLE_MaybeArgVectorTypeErrors_79_79;
        MR_Integer Var_80;
        MR_Word TypeAssignSet1_87;
        MR_Integer next_value_of_ArgNum_4;
        MR_Word next_value_of_HeadVar__5_5;
        MR_Word next_value_of_HeadVar__6_6;
        MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_7;
        MR_Word next_value_of_STATE_VARIABLE_Specs_0_9;
        MR_Word next_value_of_STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11;

        check_hlds__typecheck_clauses__typecheck_var_has_type_2_5_p_0(STATE_VARIABLE_TypeAssignSet_0_7, Var_86, Type_66, (MR_Word) ((MR_Unsigned) 0U), &TypeAssignSet1_87);
        succeeded = (TypeAssignSet1_87 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (STATE_VARIABLE_TypeAssignSet_0_7 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          MR_Word GoalContext_90;
          MR_Word SpecAndMaybeActualExpected_91;
          MR_Word Spec_92;
          MR_Word MaybeActualExpected_93;
          MR_Word Var_99;

          STATE_VARIABLE_TypeAssignSet_77_77 = STATE_VARIABLE_TypeAssignSet_0_7;
          {
            Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_99, 0) = ((MR_Box) (ArgVectorKind_3));
          }
          {
            GoalContext_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, GoalContext_90, 0) = ((MR_Box) (Var_99));
            MR_hl_field(1, GoalContext_90, 1) = ((MR_Box) (ArgNum_4));
          }
          SpecAndMaybeActualExpected_91 = check_hlds__typecheck_errors__report_error_var_has_wrong_type_6_f_0(Info_1, GoalContext_90, Context_2, Var_86, Type_66, STATE_VARIABLE_TypeAssignSet_0_7);
          Spec_92 = ((MR_Word) ((MR_hl_field(0, SpecAndMaybeActualExpected_91, (MR_Integer) 0))));
          MaybeActualExpected_93 = ((MR_Word) ((MR_hl_field(0, SpecAndMaybeActualExpected_91, (MR_Integer) 1))));
          {
            STATE_VARIABLE_Specs_78_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_Specs_78_78, 0) = ((MR_Box) (Spec_92));
            MR_hl_field(1, STATE_VARIABLE_Specs_78_78, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_9));
          }
          if ((STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_MaybeArgVectorTypeErrors_79_79 = STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11;
          else
          {
            MR_Word ArgVectorTypeErrors0_94 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11, (MR_Integer) 0))));

            if ((MaybeActualExpected_93 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_MaybeArgVectorTypeErrors_79_79 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word ActualExpected_95 = ((MR_Word) ((MR_hl_field(1, MaybeActualExpected_93, (MR_Integer) 0))));
              MR_Word ArgVectorTypeError_96;
              MR_Word ArgVectorTypeErrors_97;

              {
                ArgVectorTypeError_96 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ArgVectorTypeError_96, 0) = ((MR_Box) (ArgNum_4));
                MR_hl_field(0, ArgVectorTypeError_96, 1) = ((MR_Box) (Var_86));
                MR_hl_field(0, ArgVectorTypeError_96, 2) = ((MR_Box) (ActualExpected_95));
              }
              {
                ArgVectorTypeErrors_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ArgVectorTypeErrors_97, 0) = ((MR_Box) (ArgVectorTypeError_96));
                MR_hl_field(1, ArgVectorTypeErrors_97, 1) = ((MR_Box) (ArgVectorTypeErrors0_94));
              }
              {
                STATE_VARIABLE_MaybeArgVectorTypeErrors_79_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, STATE_VARIABLE_MaybeArgVectorTypeErrors_79_79, 0) = ((MR_Box) (ArgVectorTypeErrors_97));
              }
            }
          }
        }
        else
        {
          STATE_VARIABLE_TypeAssignSet_77_77 = TypeAssignSet1_87;
          STATE_VARIABLE_MaybeArgVectorTypeErrors_79_79 = STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11;
          STATE_VARIABLE_Specs_78_78 = STATE_VARIABLE_Specs_0_9;
        }
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
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_var_has_type_2_5_p_0(
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
      MR_Word TypeAssign0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeAssigns0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TypeAssignSet_18_18;
      MR_Word VarTypes0_19;
      MR_Word MaybeOldVarType_20;
      MR_Word VarTypes_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeAssignSet_0_4;

      check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign0_11, &VarTypes0_19);
      parse_tree__vartypes__search_insert_var_type_5_p_0(Var_2, Type_3, &MaybeOldVarType_20, VarTypes0_19, &VarTypes_21);
      if ((MaybeOldVarType_20 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeAssign_24;

        check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_21, TypeAssign0_11, &TypeAssign_24);
        {
          STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (TypeAssign_24));
          MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_4));
        }
      }
      else
      {
        MR_Word OldVarType_22 = ((MR_Word) ((MR_hl_field(1, MaybeOldVarType_20, (MR_Integer) 0))));
        MR_Word TypeAssign1_23;
        MR_Word ExistQTVars_25;
        MR_Word TypeBindings0_26;
        MR_Word TypeBindings_27;

        check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign0_11, &ExistQTVars_25);
        check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign0_11, &TypeBindings0_26);
        succeeded = parse_tree__prog_type_unify__type_unify_5_p_0(OldVarType_22, Type_3, ExistQTVars_25, TypeBindings0_26, &TypeBindings_27);
        if (succeeded)
        {
          check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_27, TypeAssign0_11, &TypeAssign1_23);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          {
            STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (TypeAssign1_23));
            MR_hl_field(1, STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (STATE_VARIABLE_TypeAssignSet_0_4));
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
check_hlds__typecheck_clauses__typecheck_higher_order_call_9_p_0(
  MR_Word GenericCallId_10,
  MR_Word Context_11,
  MR_Word PredVar_12,
  MR_Word Purity_13,
  MR_Word ArgVars_14,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_23,
  MR_Word * STATE_VARIABLE_TypeAssignSet_24,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  MR_Integer Arity_17;
  MR_Word TypeVarSet_18;
  MR_Word PredVarType_19;
  MR_Word ArgTypes_20;
  MR_Word VarVectorKind_21;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word TypeVarSet0_33;
  MR_Word ArgTypeVars_34;
  MR_Word Var_35;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word ArgsTypeAssignSet0_48;
  MR_Word ArgsTypeAssignSet_49;

  mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[1]), ArgVars_14, &Arity_17);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet0_33);
  mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), Arity_17, &ArgTypeVars_34, TypeVarSet0_33, &TypeVarSet_18);
  Var_35 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
  parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_35, ArgTypeVars_34, &ArgTypes_20);
  parse_tree__prog_type_construct__construct_higher_order_type_4_p_0(Purity_13, (MR_Integer) 0, ArgTypes_20, &PredVarType_19);
  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_27, 1) = ((MR_Box) (GenericCallId_10));
  }
  {
    VarVectorKind_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, VarVectorKind_21, 0) = ((MR_Box) (Var_27));
  }
  {
    Var_28 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_28, 0) = ((MR_Box) (PredVar_12));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (PredVar_12));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (ArgVars_14));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (PredVarType_19));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (ArgTypes_20));
  }
  Var_42 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[6]));
  Var_43 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[7]));
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (Var_43));
  }
  check_hlds__typecheck_clauses__add_renamed_apart_arg_type_assigns_8_p_0(Var_28, TypeVarSet_18, (MR_Word) ((MR_Unsigned) 0U), Var_30, Var_31, STATE_VARIABLE_TypeAssignSet_0_23, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet0_48);
  check_hlds__typecheck_clauses__typecheck_vars_have_arg_types_8_p_0(VarVectorKind_21, Context_11, (MR_Integer) 1, Var_29, ArgsTypeAssignSet0_48, &ArgsTypeAssignSet_49, STATE_VARIABLE_Info_0_25, STATE_VARIABLE_Info_26);
  *STATE_VARIABLE_TypeAssignSet_24 = check_hlds__type_assign__convert_args_type_assign_set_1_f_0(ArgsTypeAssignSet_49);
}

static void MR_CALL 
check_hlds__typecheck_clauses__ensure_vars_have_a_single_type_7_p_0(
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
    MR_Word TypeVarSet0_15;
    MR_Word TypeVar_16;
    MR_Word TypeVarSet_17;
    MR_Word Type_18;
    MR_Integer NumVars_19;
    MR_Word Types_20;
    MR_Word Var_28;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word ArgsTypeAssignSet0_40;
    MR_Word ArgsTypeAssignSet_41;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet0_15);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVar_16, TypeVarSet0_15, &TypeVarSet_17);
    {
      Type_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Type_18, 0) = ((MR_Box) (TypeVar_16));
      MR_hl_field(0, Type_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[1]), Vars_10, &NumVars_19);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), NumVars_19, ((MR_Box) (Type_18)), &Types_20);
    Var_34 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[6]));
    Var_35 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[7]));
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_28, 2) = ((MR_Box) (Var_34));
      MR_hl_field(0, Var_28, 3) = ((MR_Box) (Var_35));
    }
    check_hlds__typecheck_clauses__add_renamed_apart_arg_type_assigns_8_p_0((MR_Word) ((MR_Unsigned) 0U), TypeVarSet_17, (MR_Word) ((MR_Unsigned) 0U), Types_20, Var_28, STATE_VARIABLE_TypeAssignSet_0_21, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet0_40);
    check_hlds__typecheck_clauses__typecheck_vars_have_arg_types_8_p_0(VarVectorKind_8, Context_9, (MR_Integer) 1, Vars_10, ArgsTypeAssignSet0_40, &ArgsTypeAssignSet_41, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
    *STATE_VARIABLE_TypeAssignSet_22 = check_hlds__type_assign__convert_args_type_assign_set_1_f_0(ArgsTypeAssignSet_41);
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__ensure_vars_have_a_type_7_p_0(
  MR_Word VarVectorKind_8,
  MR_Word Context_9,
  MR_Word Vars_10,
  MR_Word STATE_VARIABLE_TypeAssignSet_0_20,
  MR_Word * STATE_VARIABLE_TypeAssignSet_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  if ((Vars_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_TypeAssignSet_21 = STATE_VARIABLE_TypeAssignSet_0_20;
    *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
  }
  else
  {
    MR_Integer NumVars_15;
    MR_Word TypeVarSet0_16;
    MR_Word TypeVars_17;
    MR_Word TypeVarSet_18;
    MR_Word Types_19;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word ArgsTypeAssignSet0_40;
    MR_Word ArgsTypeAssignSet_41;

    mercury__list__length_2_p_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[1]), Vars_10, &NumVars_15);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet0_16);
    mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), NumVars_15, &TypeVars_17, TypeVarSet0_16, &TypeVarSet_18);
    Var_24 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
    parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_24, TypeVars_17, &Types_19);
    Var_34 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[6]));
    Var_35 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[7]));
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_27, 2) = ((MR_Box) (Var_34));
      MR_hl_field(0, Var_27, 3) = ((MR_Box) (Var_35));
    }
    check_hlds__typecheck_clauses__add_renamed_apart_arg_type_assigns_8_p_0((MR_Word) ((MR_Unsigned) 0U), TypeVarSet_18, (MR_Word) ((MR_Unsigned) 0U), Types_19, Var_27, STATE_VARIABLE_TypeAssignSet_0_20, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet0_40);
    check_hlds__typecheck_clauses__typecheck_vars_have_arg_types_8_p_0(VarVectorKind_8, Context_9, (MR_Integer) 1, Vars_10, ArgsTypeAssignSet0_40, &ArgsTypeAssignSet_41, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
    *STATE_VARIABLE_TypeAssignSet_21 = check_hlds__type_assign__convert_args_type_assign_set_1_f_0(ArgsTypeAssignSet_41);
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_vars_have_arg_types_8_p_0(
  MR_Word VarVectorKind_1,
  MR_Word Context_2,
  MR_Integer CurArgNum_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_ArgsTypeAssignSet_0_5,
  MR_Word * STATE_VARIABLE_ArgsTypeAssignSet_6,
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
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
      *STATE_VARIABLE_ArgsTypeAssignSet_6 = STATE_VARIABLE_ArgsTypeAssignSet_0_5;
    }
    else
    {
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word GoalContext_25;
      MR_Word STATE_VARIABLE_ArgsTypeAssignSet_30_30;
      MR_Word STATE_VARIABLE_Info_31_31;
      MR_Integer Var_32;
      MR_Word ArgsTypeAssignSet1_36;
      MR_Integer next_value_of_CurArgNum_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_7;

      {
        GoalContext_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, GoalContext_25, 0) = ((MR_Box) (VarVectorKind_1));
        MR_hl_field(1, GoalContext_25, 1) = ((MR_Box) (CurArgNum_3));
      }
      check_hlds__typecheck_clauses__typecheck_var_has_arg_type_in_args_type_assigns_5_p_0(CurArgNum_3, Var_21, STATE_VARIABLE_ArgsTypeAssignSet_0_5, (MR_Word) ((MR_Unsigned) 0U), &ArgsTypeAssignSet1_36);
      succeeded = (ArgsTypeAssignSet1_36 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (STATE_VARIABLE_ArgsTypeAssignSet_0_5 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        MR_Word Spec_39;

        Spec_39 = check_hlds__typecheck_errors__report_error_var_has_wrong_type_arg_6_f_0(STATE_VARIABLE_Info_0_7, GoalContext_25, Context_2, CurArgNum_3, Var_21, STATE_VARIABLE_ArgsTypeAssignSet_0_5);
        STATE_VARIABLE_ArgsTypeAssignSet_30_30 = STATE_VARIABLE_ArgsTypeAssignSet_0_5;
        check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_39, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_31_31);
      }
      else
      {
        STATE_VARIABLE_ArgsTypeAssignSet_30_30 = ArgsTypeAssignSet1_36;
        STATE_VARIABLE_Info_31_31 = STATE_VARIABLE_Info_0_7;
      }
      Var_32 = (MR_Integer) ((MR_Unsigned) CurArgNum_3 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurArgNum_3 = Var_32;
      next_value_of_HeadVar__4_4 = Vars_22;
      next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_5 = STATE_VARIABLE_ArgsTypeAssignSet_30_30;
      next_value_of_STATE_VARIABLE_Info_0_7 = STATE_VARIABLE_Info_31_31;
      CurArgNum_3 = next_value_of_CurArgNum_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_ArgsTypeAssignSet_0_5 = next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_5;
      STATE_VARIABLE_Info_0_7 = next_value_of_STATE_VARIABLE_Info_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_var_has_arg_type_in_args_type_assigns_5_p_0(
  MR_Integer ArgNum_1,
  MR_Word Var_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ArgsTypeAssignSet_0_4,
  MR_Word * STATE_VARIABLE_ArgsTypeAssignSet_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ArgsTypeAssignSet_5 = STATE_VARIABLE_ArgsTypeAssignSet_0_4;
    else
    {
      MR_Word ArgsTypeAssign_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgsTypeAssigns_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ArgsTypeAssignSet_18_18;
      MR_Word TypeAssign0_19 = ((MR_Word) ((MR_hl_field(0, ArgsTypeAssign_13, (MR_Integer) 0))));
      MR_Word ArgTypes_20 = ((MR_Word) ((MR_hl_field(0, ArgsTypeAssign_13, (MR_Integer) 1))));
      MR_Word ClassContext_21 = ((MR_Word) ((MR_hl_field(0, ArgsTypeAssign_13, (MR_Integer) 2))));
      MR_Word Source_22 = ((MR_Word) ((MR_hl_field(0, ArgsTypeAssign_13, (MR_Integer) 3))));
      MR_Word VarTypes0_23;
      MR_Word ArgType_24;
      MR_Word MaybeOldVarType_25;
      MR_Word VarTypes_26;
      MR_Box conv0_ArgType_24;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_4;

      check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign0_19, &VarTypes0_23);
      mercury__list__det_index1_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_20, ArgNum_1, &conv0_ArgType_24);
      ArgType_24 = ((MR_Word) (conv0_ArgType_24));
      parse_tree__vartypes__search_insert_var_type_5_p_0(Var_2, ArgType_24, &MaybeOldVarType_25, VarTypes0_23, &VarTypes_26);
      if ((MaybeOldVarType_25 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeAssign_30;
        MR_Word ArgsTypeAssign_31;

        check_hlds__type_assign__type_assign_set_var_types_3_p_0(VarTypes_26, TypeAssign0_19, &TypeAssign_30);
        {
          ArgsTypeAssign_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ArgsTypeAssign_31, 0) = ((MR_Box) (TypeAssign_30));
          MR_hl_field(0, ArgsTypeAssign_31, 1) = ((MR_Box) (ArgTypes_20));
          MR_hl_field(0, ArgsTypeAssign_31, 2) = ((MR_Box) (ClassContext_21));
          MR_hl_field(0, ArgsTypeAssign_31, 3) = ((MR_Box) (Source_22));
        }
        {
          STATE_VARIABLE_ArgsTypeAssignSet_18_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_ArgsTypeAssignSet_18_18, 0) = ((MR_Box) (ArgsTypeAssign_31));
          MR_hl_field(1, STATE_VARIABLE_ArgsTypeAssignSet_18_18, 1) = ((MR_Box) (STATE_VARIABLE_ArgsTypeAssignSet_0_4));
        }
      }
      else
      {
        MR_Word OldVarType_27 = ((MR_Word) ((MR_hl_field(1, MaybeOldVarType_25, (MR_Integer) 0))));
        MR_Word TypeAssign_28;
        MR_Word ExistQTVars_33;
        MR_Word TypeBindings0_34;
        MR_Word TypeBindings_35;

        check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign0_19, &ExistQTVars_33);
        check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign0_19, &TypeBindings0_34);
        succeeded = parse_tree__prog_type_unify__type_unify_5_p_0(OldVarType_27, ArgType_24, ExistQTVars_33, TypeBindings0_34, &TypeBindings_35);
        if (succeeded)
        {
          check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(TypeBindings_35, TypeAssign0_19, &TypeAssign_28);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word ArgsTypeAssign_29;

          {
            ArgsTypeAssign_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ArgsTypeAssign_29, 0) = ((MR_Box) (TypeAssign_28));
            MR_hl_field(0, ArgsTypeAssign_29, 1) = ((MR_Box) (ArgTypes_20));
            MR_hl_field(0, ArgsTypeAssign_29, 2) = ((MR_Box) (ClassContext_21));
            MR_hl_field(0, ArgsTypeAssign_29, 3) = ((MR_Box) (Source_22));
          }
          {
            STATE_VARIABLE_ArgsTypeAssignSet_18_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_ArgsTypeAssignSet_18_18, 0) = ((MR_Box) (ArgsTypeAssign_29));
            MR_hl_field(1, STATE_VARIABLE_ArgsTypeAssignSet_18_18, 1) = ((MR_Box) (STATE_VARIABLE_ArgsTypeAssignSet_0_4));
          }
        }
        else
          STATE_VARIABLE_ArgsTypeAssignSet_18_18 = STATE_VARIABLE_ArgsTypeAssignSet_0_4;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ArgsTypeAssigns_14;
      next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_4 = STATE_VARIABLE_ArgsTypeAssignSet_18_18;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_ArgsTypeAssignSet_0_4 = next_value_of_STATE_VARIABLE_ArgsTypeAssignSet_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_clauses__add_renamed_apart_arg_type_assigns_8_p_0(
  MR_Word Source_1,
  MR_Word PredTypeVarSet_2,
  MR_Word PredExistQVars_3,
  MR_Word PredArgTypes_4,
  MR_Word PredConstraints_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_ArgsTypeAssigns_0_7,
  MR_Word * STATE_VARIABLE_ArgsTypeAssigns_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ArgsTypeAssigns_8 = STATE_VARIABLE_ArgsTypeAssigns_0_7;
    else
    {
      MR_Word TypeAssign0_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
      MR_Word TypeAssigns0_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));
      MR_Word TypeAssign1_25;
      MR_Word ParentArgTypes_26;
      MR_Word Renaming_27;
      MR_Word ParentExistQVars_28;
      MR_Word ParentConstraints_29;
      MR_Word ExistQTVars0_30;
      MR_Word ExistQTVars_31;
      MR_Word TypeAssign_32;
      MR_Word NewArgsTypeAssign_33;
      MR_Word STATE_VARIABLE_ArgsTypeAssigns_36_36;
      MR_Word TypeVarSet0_38;
      MR_Word TypeVarSet_39;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_ArgsTypeAssigns_0_7;

      check_hlds__type_assign__type_assign_get_typevarset_2_p_0(TypeAssign0_22, &TypeVarSet0_38);
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TypeVarSet0_38, PredTypeVarSet_2, &TypeVarSet_39, &Renaming_27);
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_27, PredArgTypes_4, &ParentArgTypes_26);
      check_hlds__type_assign__type_assign_set_typevarset_3_p_0(TypeVarSet_39, TypeAssign0_22, &TypeAssign1_25);
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_27, PredExistQVars_3, &ParentExistQVars_28);
      check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0(Renaming_27, PredConstraints_5, &ParentConstraints_29);
      check_hlds__type_assign__type_assign_get_existq_tvars_2_p_0(TypeAssign1_25, &ExistQTVars0_30);
      ExistQTVars_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[3]), ParentExistQVars_28, ExistQTVars0_30);
      check_hlds__type_assign__type_assign_set_existq_tvars_3_p_0(ExistQTVars_31, TypeAssign1_25, &TypeAssign_32);
      {
        NewArgsTypeAssign_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NewArgsTypeAssign_33, 0) = ((MR_Box) (TypeAssign_32));
        MR_hl_field(0, NewArgsTypeAssign_33, 1) = ((MR_Box) (ParentArgTypes_26));
        MR_hl_field(0, NewArgsTypeAssign_33, 2) = ((MR_Box) (ParentConstraints_29));
        MR_hl_field(0, NewArgsTypeAssign_33, 3) = ((MR_Box) (Source_1));
      }
      {
        STATE_VARIABLE_ArgsTypeAssigns_36_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_ArgsTypeAssigns_36_36, 0) = ((MR_Box) (NewArgsTypeAssign_33));
        MR_hl_field(1, STATE_VARIABLE_ArgsTypeAssigns_36_36, 1) = ((MR_Box) (STATE_VARIABLE_ArgsTypeAssigns_0_7));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = TypeAssigns0_23;
      next_value_of_STATE_VARIABLE_ArgsTypeAssigns_0_7 = STATE_VARIABLE_ArgsTypeAssigns_36_36;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_ArgsTypeAssigns_0_7 = next_value_of_STATE_VARIABLE_ArgsTypeAssigns_0_7;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_clauses__atomic_interface_list_to_var_list_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word I_3;
    MR_Word O_4;
    MR_Word Interfaces_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_7;
    MR_Word Var_8;

    I_3 = ((MR_Word) ((MR_hl_field(0, Var_6, (MR_Integer) 0))));
    O_4 = ((MR_Word) ((MR_hl_field(0, Var_6, (MR_Integer) 1))));
    Var_8 = check_hlds__typecheck_clauses__atomic_interface_list_to_var_list_1_f_0(Interfaces_5);
    {
      Var_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_7, 0) = ((MR_Box) (O_4));
      MR_hl_field(1, Var_7, 1) = ((MR_Box) (Var_8));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (I_3));
      MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_7));
    }
  }
  return HeadVar__2_2;
}

static void MR_CALL 
check_hlds__typecheck_clauses__typecheck_check_for_ambiguity_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadTypes_6;

  check_hlds__typecheck_clauses__compute_headvar_types_in_type_assign_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadTypes_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadTypes_6));
}

void MR_CALL 
check_hlds__typecheck_clauses__typecheck_check_for_ambiguity_6_p_0(
  MR_Word Context_7,
  MR_Word StuffToCheck_8,
  MR_Word HeadVars_9,
  MR_Word TypeAssignSet_10,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_bool succeeded;

  if ((TypeAssignSet_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_clauses.typecheck_check_for_ambiguity\'/6", (MR_String) "no type-assignment");
      return;
    }
  else
  {
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(1, TypeAssignSet_10, (MR_Integer) 1))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, TypeAssignSet_10, (MR_Integer) 0))));

    if ((Var_35 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
    else
    {
      MR_Word TypeAssign2_14 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 0))));
      MR_Word TypeAssigns3plus_15 = ((MR_Word) ((MR_hl_field(1, Var_35, (MR_Integer) 1))));
      MR_Word ErrorsSoFar_16;

      check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(STATE_VARIABLE_Info_0_23, &ErrorsSoFar_16);
      succeeded = (ErrorsSoFar_16 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        switch (StuffToCheck_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word HeadTypesInAssign1_17;
              MR_Word Var_29;
              MR_Word VarTypes_37;
              MR_Word TypeBindings_38;
              MR_Word HeadTypes0_39;
              MR_Word VarTypes_40;
              MR_Word TypeBindings_41;
              MR_Word HeadTypes0_42;
              MR_Word HeadTypes2_45;
              MR_Word HeadTypes3plus_46;

              check_hlds__type_assign__type_assign_get_var_types_2_p_0(Var_36, &VarTypes_37);
              check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(Var_36, &TypeBindings_38);
              parse_tree__vartypes__lookup_var_types_3_p_0(VarTypes_37, HeadVars_9, &HeadTypes0_39);
              parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(TypeBindings_38, HeadTypes0_39, &HeadTypesInAssign1_17);
              check_hlds__type_assign__type_assign_get_var_types_2_p_0(TypeAssign2_14, &VarTypes_40);
              check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(TypeAssign2_14, &TypeBindings_41);
              parse_tree__vartypes__lookup_var_types_3_p_0(VarTypes_40, HeadVars_9, &HeadTypes0_42);
              parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(TypeBindings_41, HeadTypes0_42, &HeadTypes2_45);
              {
                Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_29, 0) = ((MR_Box) (&check_hlds__typecheck_clauses_scalar_common_3[0]));
                MR_hl_field(0, Var_29, 1) = ((MR_Box) (check_hlds__typecheck_clauses__typecheck_check_for_ambiguity_6_p_0_1));
                MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_29, 3) = ((MR_Box) (HeadVars_9));
              }
              mercury__list__map_3_p_0((MR_Word) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0), (MR_Word) (&check_hlds__typecheck_clauses_scalar_common_1[0]), Var_29, TypeAssigns3plus_15, &HeadTypes3plus_46);
              succeeded = parse_tree__prog_type_unify__identical_up_to_renaming_2_p_0(HeadTypesInAssign1_17, HeadTypes2_45);
              if (succeeded)
                succeeded = check_hlds__typecheck_clauses__all_identical_up_to_renaming_2_p_0(HeadTypesInAssign1_17, HeadTypes3plus_46);
            }
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
        }
      if (succeeded)
      {
        MR_Word ClauseContext_20;
        MR_Word OverloadedSymbolMap_21;
        MR_Word Spec_22;

        check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(STATE_VARIABLE_Info_0_23, &ClauseContext_20);
        check_hlds__typecheck_info__typecheck_info_get_overloaded_symbol_map_2_p_0(STATE_VARIABLE_Info_0_23, &OverloadedSymbolMap_21);
        Spec_22 = check_hlds__typecheck_error_overload__report_ambiguity_error_6_f_0(ClauseContext_20, Context_7, OverloadedSymbolMap_21, Var_36, TypeAssign2_14, TypeAssigns3plus_15);
        check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(Spec_22, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
      }
      else
        *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses__all_identical_up_to_renaming_2_p_0(
  MR_Word HeadTypes1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word HeadTypes2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word HeadTypes3plus_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = parse_tree__prog_type_unify__identical_up_to_renaming_2_p_0(HeadTypes1_1, HeadTypes2_5);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = HeadTypes3plus_6;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____cons_constraints_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_clauses____Unify____cons_constraints_action_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_clauses____Compare____cons_constraints_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_clauses____Compare____cons_constraints_action_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____cons_type_assign_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_clauses____Unify____cons_type_assign_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_clauses____Compare____cons_type_assign_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_clauses____Compare____cons_type_assign_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____cons_type_assign_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_clauses____Unify____cons_type_assign_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_clauses____Compare____cons_type_assign_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_clauses____Compare____cons_type_assign_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____invariant_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_clauses____Unify____invariant_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_clauses____Compare____invariant_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_clauses____Compare____invariant_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____maybe_cons_type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_clauses____Unify____maybe_cons_type_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_clauses____Compare____maybe_cons_type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_clauses____Compare____maybe_cons_type_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____stuff_to_check_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_clauses____Unify____stuff_to_check_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_clauses____Compare____stuff_to_check_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_clauses____Compare____stuff_to_check_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_clauses____Unify____types_comparison_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_clauses____Unify____types_comparison_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_clauses____Compare____types_comparison_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_clauses____Compare____types_comparison_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__typecheck_clauses__init(void)
{
}

void mercury__check_hlds__typecheck_clauses__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__type_ctor_info_cons_constraints_action_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__type_ctor_info_cons_type_assign_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__type_ctor_info_cons_type_assign_set_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__type_ctor_info_invariant_set_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__type_ctor_info_maybe_cons_type_info_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__type_ctor_info_stuff_to_check_0);
	MR_register_type_ctor_info(&check_hlds__typecheck_clauses__check_hlds__typecheck_clauses__type_ctor_info_types_comparison_0);
}

void mercury__check_hlds__typecheck_clauses__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__typecheck_clauses__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.typecheck_clauses.
